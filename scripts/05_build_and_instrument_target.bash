#!/bin/bash

REPO=`git rev-parse --show-toplevel`

CURR=`pwd`

FUZZERS="$REPO/fuzzers"
AFLNET_FUZZER="$FUZZERS/aflnet"


TARGETS="$REPO/targets"
BUGGED="$TARGETS/lava/lib60870-C-2.2"

echo "==> Building and instrumenting LAVA-bugged version of lib60870-C v. 2.2. ..."

cd "$BUGGED" && make clean && CC="$AFLNET_FUZZER/afl-clang" make server_taint_analysis

echo "==> Building and instrumenting LAVA-bugged version of lib60870-C v. 2.2. (ASAN) ..."

cd "$BUGGED" && rm src/*.o && CC="$AFLNET_FUZZER/afl-clang" make server_taint_analysis_asan
