#!/bin/bash

REPO=`git rev-parse --show-toplevel`

FUZZERS="$REPO/fuzzers"
AFLNET_FUZZER="$FUZZERS/aflnet"
EPF_FUZZER="$FUZZERS/epf"

PATCHES="$REPO/patches"
AFLNET_PATCH="$PATCHES/01_aflnet_add_iec104_and_72hr_time_limit.patch"
EPF_PATCH="$PATCHES/02_epf_fix_broken_iec104_sequence_number_in_scapy_field_model.patch"

echo "==> Applying patches for EPF and AFLNet"

echo "$AFLNET_PATCH..."
cd "$AFLNET_FUZZER" && git apply "$AFLNET_PATCH"

echo "$EPF_PATCH..."
cd `find $EPF_FUZZER/.venv/lib -type d -name "python3.*" | head -n 1` && patch -p1 < "$EPF_PATCH"

