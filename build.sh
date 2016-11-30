#!/bin/sh

OS_UNAME=`uname`

if [[ "$OS_UNAME" == "Linux" ]]; then
    N_CPU=`grep -c ^processor /proc/cpuinfo`
elif [[ "$OS_UNAME" == "Darwin" ]]; then
    N_CPU=`sysctl -n hw.ncpu`
else
    echo "  *** Unsupported platform: $OS_UNAME"
    exit 1
fi

# http://stackoverflow.com/a/21951256/1035246
abspath() {
    local thePath
    if [[ ! "$1" =~ ^/ ]]; then
        thePath="$PWD/$1"
    else
        thePath="$1"
    fi
    echo "$thePath" | (
        IFS=/
        read -a parr
        declare -a outp
        for i in "${parr[@]}"; do
            case "$i" in
                ''|.)
                    continue
                    ;;
                ..)
                    len=${#outp[@]}
                    if ((len==0)); then
                        continue
                    else
                        unset outp[$((len-1))]
                    fi
                    ;;
                *)
                    len=${#outp[@]}
                    outp[$len]="$i"
                    ;;
            esac
        done
        echo /"${outp[*]}"
    )
}

ROOT=$(abspath $(dirname $0))

set -x

mkdir -p $ROOT/build
cd $ROOT/build
cmake ..
make -j$N_CPU
make install
