# Patches

This folder contains patches that prepare both AFLNet and EPF for our fuzzing scenario.


| patch                                                                 | description                                                              |
| --------------------------------------------------------------------- | ------------------------------------------------------------------------ |
| `01_aflnet_add_iec104_and_72hr_time_limit.patch`                      | AFLNet: Hardcode time limit of 72hrs and add support for IEC 60870-5-104 |
| `02_epf_fix_broken_iec104_sequence_number_in_scapy_field_model.patch` | EPF: Fix incorrect sequence numbering in scapy's IEC model               |

