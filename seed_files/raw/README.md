# Raw seed files

These files are raw TCP streams extracted from the IEC 60870-5-104 PCAP [files](../../pcap).
We created these streams using 
[these](https://github.com/aflnet/aflnet#step-1-prepare-message-sequences-as-seed-inputs)
AFLNet instructions.
Our competitor, AFLNet, expects this format as seed inputs.

Take note that we did not modify the original streams.
Furthermore, there is no `combined.raw` as in the PCAP folder.
This is because AFLNet can accept multiple seed files as input.
EPF can not (yet) do that, which is why we had to concat both seed inputs for our system.


| filename         | hash (sha256)                                                      | description                 | source    |
| ---------------- | ------------------------------------------------------------------ | --------------------------- | --------- |
| `iec104.raw`    | `bcc38668a5e373eaca856e3af3e037609ee4c94244e38cecd20b5e4d7838f832` | real world traffic | [[1]](https://github.com/automayt/ICS-pcap/tree/master/IEC%2060870/iec104) |
| `more_traffic.raw`    | `3af8428a517943f8bfd0483d7c3ba84e8738acc79f3854103cd0c8c8d5ef25ab` | traffic between an example [server](https://github.com/mz-automation/lib60870/blob/master/lib60870-C/examples/cs104_server_no_threads/cs104_server_no_threads.c) and [client](https://github.com/mz-automation/lib60870/blob/master/lib60870-C/examples/cs104_client/simple_client.c) of [lib60870](https://github.com/mz-automation/lib60870) | [[-]](#) |
