package main

import (
    "fmt"
    "flag"
    "os"
    "os/exec"
    "bufio"
    "sync"
    "time"
    "bytes"
    "encoding/base64"
    "encoding/csv"
    "io/ioutil"
    "strconv"
    "net"
)

var startdt = []byte{0x68,0x04,0x07,0x00,0x00,0x00}
var stopdt = []byte{0x68,0x04,0x13,0x00,0x00,0x00}

type Config struct {
    Parallel int
    InputPath string
    OutputPath string
    TargetPath string
    Fuzzer string
    AflnetReplayPath string
}

func parseFlags() *Config {
    cfg := &Config{}

    flag.IntVar(&cfg.Parallel, "parallel", 512, "goroutines to spawn for parallelized test case validation")
    flag.StringVar(&cfg.InputPath, "input", "", "input file with paths to test cases, separated by newlines (default: read from stdin)")
    flag.StringVar(&cfg.OutputPath, "output", "", "path to output csv file (default: write to stdout)")
    flag.StringVar(&cfg.TargetPath, "target", "", "target executable path (required)")
    flag.StringVar(&cfg.Fuzzer, "fuzzer", "", "fuzzer results to validate (epf|aflnet) (required)")
    flag.StringVar(&cfg.AflnetReplayPath, "replay", "", "aflnet-replay path (required if -fuzzer=aflnet)")

    flag.Parse()

    if cfg.TargetPath == "" || cfg.Parallel < 1 || (cfg.Fuzzer != "aflnet" && cfg.Fuzzer != "epf") || (cfg.Fuzzer == "aflnet" && cfg.AflnetReplayPath == "") {
        fmt.Fprintf(os.Stderr, "Usage of %s:\n", os.Args[0])
        flag.PrintDefaults()
        return nil
    }

    return cfg
}


type Result struct {
    PayloadPath string
    Exitcode string
    Stderr string
}


func ProduceInput(inputPath string, validationQ chan<- string, wg *sync.WaitGroup) {
    var file *os.File
    var err error

    defer wg.Done()

    if inputPath == "" {
        file = os.Stdin
    } else {
        file, err = os.Open(inputPath)
    }

    if err != nil {
        fmt.Fprintf(os.Stderr, "Could not open input file '%s'\n", inputPath)
        return
    }
    defer file.Close()

    scanner := bufio.NewScanner(file)

    for scanner.Scan() {
        path := scanner.Text()
        if _, err := os.Stat(path); os.IsNotExist(err) {
            fmt.Fprintf(os.Stderr, "Path '%s' does not exist, skipping...\n", path)
            continue
        }
        validationQ <- path
    }

    if err = scanner.Err(); err != nil {
        fmt.Fprintf(os.Stderr, "An error occured while reading from input file '%s':\n%v\n", inputPath, err)
        return
    }

}

func ExecuteTarget(targetPath string, port int) (*exec.Cmd, *bytes.Buffer, error) {
    target := exec.Command(targetPath, strconv.Itoa(port))
    stderr := &bytes.Buffer{}
    target.Stderr = stderr
    target.Stdout = &bytes.Buffer{}
    target.Env = append(os.Environ(),
        "ASAN_SYMBOLIZER_PATH=/usr/bin/llvm-symbolizer",
        "ASAN_OPTIONS=symbolize=1",
    )
    if err := target.Start(); err != nil {
        return nil, nil, err
    }
    time.Sleep(2 * time.Second)
    return target, stderr, nil
}

func AflnetValidateInput(port int , targetPath string, aflnetReplayPath string, validationQ <-chan string, resultQ chan<- Result, wg *sync.WaitGroup) {
    defer wg.Done()
    target, stderr := setupTarget(targetPath, port)

    targetExit := make(chan error)
    go func() { targetExit <- target.Wait() }()

    for payloadPath := range validationQ {
        aflnet := exec.Command(aflnetReplayPath, payloadPath, "IEC104", strconv.Itoa(port))
        if err := aflnet.Run(); err != nil {
            fmt.Fprintf(os.Stderr, "An error occured while executing aflnet-replay:\n%v\n", err)
            return
        }

        timeout := time.After(500 * time.Millisecond)
        select {
        case <-timeout:
        case exitErr := <-targetExit:
            result := Result{PayloadPath: payloadPath, Stderr: base64.StdEncoding.EncodeToString(stderr.Bytes())}
            if exitErr != nil {
                result.Exitcode = exitErr.Error()
            } else {
                result.Exitcode = "0"
            }
            resultQ <- result

            target.Process.Kill()
            target.Process.Release()
            target, stderr = setupTarget(targetPath, port)
            targetExit = make(chan error)
            go func() { targetExit <- target.Wait() }()
        }
    }
    target.Process.Kill()
    target.Process.Release()
}


func setupTarget(targetPath string, port int) (*exec.Cmd, *bytes.Buffer) {
    for {
        target, stderr, err := ExecuteTarget(targetPath, port)
        if err != nil {
            continue
        }
        return target, stderr
    }
}

func EpfValidateInput(port int, targetPath string, validationQ <-chan string, resultQ chan<- Result, wg *sync.WaitGroup) {
    defer wg.Done()

    dialStr :=fmt.Sprintf("127.0.0.1:%d", port)
    
    target, stderr := setupTarget(targetPath, port)
    targetExit := make(chan error)
    go func() { 
        targetExit <- target.Wait()
    }()

    for payloadPath := range validationQ {

        payload, err := ioutil.ReadFile(payloadPath)
        if err != nil {
            fmt.Println("error:", err)
            continue
        }

        conn, err := net.Dial("tcp", dialStr)
        if err != nil { 
            return
        }

        conn.Write(startdt)
        conn.Write(payload)
        conn.Write(stopdt)

        timeout := time.After(2 * time.Second)
        select {
        case <-timeout:
        case exitErr := <-targetExit:
            result := Result{PayloadPath: payloadPath, Stderr: base64.StdEncoding.EncodeToString(stderr.Bytes())}
            if exitErr != nil {
                result.Exitcode = exitErr.Error()
            } else {
                result.Exitcode = "0"
            }
            resultQ <- result
            target.Process.Kill()
            target.Process.Release()
            target, stderr = setupTarget(targetPath, port)
            close(targetExit)
            targetExit = make(chan error)
            go func() { targetExit <- target.Wait() }()
        }
        conn.Close()
    }
    target.Process.Kill()
    target.Process.Release()
}

func ConsumeResults(outputPath string, resultQ <-chan Result, wg *sync.WaitGroup) {
    var file *os.File
    var err error

    defer wg.Done()

    if outputPath == "" {
        file = os.Stdout
    } else {
        file, err = os.Create(outputPath)
    }

    if err != nil {
        fmt.Fprintf(os.Stderr, "Could not open output file '%s'\n", outputPath)
        return
    }

    defer file.Close()

    writer := csv.NewWriter(file)
    defer writer.Flush()
    writer.Write([]string{"path", "stderr", "exitcode"})

    for result := range resultQ {
        writer.Write([]string{result.PayloadPath, result.Stderr, result.Exitcode})
        writer.Flush()
    }
}

func main() {
    cfg := parseFlags()

    if cfg == nil {
        os.Exit(1)
    }

    wgProduce := &sync.WaitGroup{}
    wgValidate := &sync.WaitGroup{}
    wgConsume := &sync.WaitGroup{}

    validationQ := make(chan string, cfg.Parallel * 10)
    resultQ := make(chan Result, cfg.Parallel * 10)

    wgProduce.Add(1)
    go ProduceInput(cfg.InputPath, validationQ, wgProduce)

    for i := 0; i < cfg.Parallel; i++ {
        wgValidate.Add(1)
        if cfg.Fuzzer == "aflnet" {
            go AflnetValidateInput(2404 + i, cfg.TargetPath, cfg.AflnetReplayPath, validationQ, resultQ, wgValidate)
        } else {
            go EpfValidateInput(2404 + i, cfg.TargetPath, validationQ, resultQ, wgValidate)
        }
    }

    go ConsumeResults(cfg.OutputPath, resultQ, wgConsume)
    wgConsume.Add(1)
    wgProduce.Wait()
    close(validationQ)
    wgValidate.Wait()
    close(resultQ)
    wgConsume.Wait()
}
