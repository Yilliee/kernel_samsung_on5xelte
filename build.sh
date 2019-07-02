#!/bin/bash
#
# Script to compile Pie Image for on5xelte
#
export ANDROID_MAJOR_VERSION=p
export ARCH=arm64
export SUBARCH=arm64
#export CROSS_COMPILE=~/kernel/tc/bin/aarch64-linux-android-
export CROSS_COMPILE=~/tc/bin/aarch64-linux-gnu-

#rm -rf out
mkdir -p out
make O=out on5xelte_00_defconfig
make O=out
