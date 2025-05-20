#!/bin/bash
set -xe

if lsmod | grep nvidia_modeset; then
    sudo rmmod nvidia_modeset
fi
if lsmod | grep nvidia_uvm; then
    sudo rmmod nvidia_uvm
fi
if lsmod | grep nvidia; then
    sudo rmmod nvidia
fi

make -j
sudo insmod ./kernel-open/nvidia.ko
sudo insmod ./kernel-open/nvidia-uvm.ko
