#!/bin/bash

REPO=`git rev-parse --show-toplevel`

CURR=`pwd`

VALIDATOR="$REPO/validator"

echo "==> Building crash validator..."

cd "$VALIDATOR" && go build

