############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
############################################################
open_project hls_prj
set_top kernel0
add_files src/kernel_kernel.cpp
add_files src/kernel_kernel.h
add_files -tb src/kernel_host.cpp -cflags "-Wno-unknown-pragmas" -csimflags "-Wno-unknown-pragmas"
open_solution "solution1"
set_part {xcu200-fsgd2104-2-e}
create_clock -period 5 -name default
config_compile -name_max_length 50
config_export -format ip_catalog -rtl verilog
#source "./hls_prj/solution1/directives.tcl"
csim_design
csynth_design
cosim_design
export_design -rtl verilog -format ip_catalog
