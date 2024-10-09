# ==============================================================
# File generated on Wed Sep 25 19:10:40 -03 2024
# Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2018.3 (64-bit)
# SW Build 2405991 on Thu Dec  6 23:36:41 MST 2018
# IP Build 2404404 on Fri Dec  7 01:43:56 MST 2018
# Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
# ==============================================================
add_files -tb ../../../sa/sa_test.cpp -cflags { -Wno-unknown-pragmas}
add_files ../sa/sa.cpp
set_part xc7z020clg484-1
create_clock -name default -period 10
config_export -description=PE
config_export -display_name=PE
config_export -format=ip_catalog
config_export -library=ufrgs
config_export -rtl=verilog
config_export -taxonomy=/unk
config_export -vendor=x
config_export -version=0.01
