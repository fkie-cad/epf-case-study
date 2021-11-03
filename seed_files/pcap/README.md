# Seed PCAPs

These PCAP files contain network captures of two legitimate entities using the TCP-based [IEC 60870-5-104](https://en.wikipedia.org/wiki/IEC_60870-5#IEC_60870-5-104) SCADA protocol.

We used these seeds to automatically construct an packet populations for EPF's genetic populations builder.

*Note: All experiments in our paper were executed with the `combined.pcap` file.*

| filename         | hash (sha256)                                                      | description                 | source    |
| ---------------- | ------------------------------------------------------------------ | --------------------------- | --------- |
| `iec104.pcap`    | `a78aa971adc51e54413a865937f1799ef57118d397cef57ccd93a358ed5b85d6` | real world traffic | [[1]](https://github.com/automayt/ICS-pcap/tree/master/IEC%2060870/iec104) |
| `more_traffic.pcap`    | `54436e88cfd1f6d993ae8f2ff66f44182954a8284e87f8287d607789bd069ed8` | traffic between an example [server](https://github.com/mz-automation/lib60870/blob/master/lib60870-C/examples/cs104_server_no_threads/cs104_server_no_threads.c) and [client](https://github.com/mz-automation/lib60870/blob/master/lib60870-C/examples/cs104_client/simple_client.c) of [lib60870](https://github.com/mz-automation/lib60870) | [[-]](#) |
| `combined.pcap`    | `b82c26081ae794fbdd3d13d052723f48fdffcd54e4e687491529b9a52cc6f6f7` | synthetic combination of the previous seed files | [[-]](#) |
