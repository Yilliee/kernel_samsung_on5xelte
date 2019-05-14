
#!/bin/bash
#
# Script to compile NightowlKernel Image for jalebi
#
export ARCH=arm64
export SUBARCH=arm64
#export CROSS_COMPILE=~/gcc4/bin/aarch64-linux-android-
export CROSS_COMPILE=~/gcc64/bin/aarch64-linux-gnu-

rm -rf out
mkdir -p out
make O=out on5xelte_00_defconfig
make O=out

