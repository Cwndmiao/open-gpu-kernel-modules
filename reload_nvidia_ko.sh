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

#make -j
sudo insmod ./kernel-open/nvidia.ko NVreg_RmMsg="mmu_walk.c,gmmu_walk.c,virt_mem_allocator_gm107.c,mmu_trace.c,gmmu_trace.c"
sudo insmod ./kernel-open/nvidia-uvm.ko uvm_enable_builtin_tests=1
