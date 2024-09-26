############################################################
## This file is generated automatically by Vitis HLS.
## Please DO NOT edit it.
## Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
## Copyright 2022-2023 Advanced Micro Devices, Inc. All Rights Reserved.
############################################################
open_project sa
set_top pe
add_files ../sa/sa.cpp
add_files ../sa/sa.h
add_files -tb ../sa/sa_test.cpp
open_solution "z020" -flow_target vivado
set_part {xc7z020clg484-1}
create_clock -period 10 -name default
#source "./sa/z020/directives.tcl"
csim_design
csynth_design
cosim_design
export_design -rtl verilog -format ip_catalog
