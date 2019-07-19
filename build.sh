
#!/bin/bash
#
# Script to compile NightowlKernel Image for jalebi
#

export ANDROID_MAJOR_VERSION=o
export ARCH=arm64
#export SUBARCH=arm64
export CROSS_COMPILE=~/tc/bin/aarch64-linux-android-
#export CROSS_COMPILE=~/gcc64/bin/aarch64-linux-gnu-

#rm -rf out
#mkdir -p out
make on5xelte_O_defconfig
make

