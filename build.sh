#!/bin/bash

OS_UNAME=`uname`

if [[ "$OS_UNAME" == "Linux" ]]; then
    N_CPU=`grep -c ^processor /proc/cpuinfo`
elif [[ "$OS_UNAME" == "Darwin" ]]; then
    N_CPU=`sysctl -n hw.ncpu`
else
    echo "  *** Unsupported platform: $OS_UNAME"
    exit 1
fi

ROOT=$(dirname $0)

set -x

mkdir -p $ROOT/build
cd $ROOT/build
cmake ..
make -j$N_CPU
make install
