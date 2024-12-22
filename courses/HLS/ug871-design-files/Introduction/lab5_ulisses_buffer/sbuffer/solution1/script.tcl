############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
############################################################
open_project sbuffer
set_top top
add_files sbuffer.c
add_files -tb out.gold.dat
add_files -tb sbuffer_test.c
open_solution "solution1"
set_part {xcvu9p-flgb2104-1-i}
create_clock -period 10 -name default
#source "./sbuffer/solution1/directives.tcl"
csim_design
csynth_design
cosim_design
export_design -format ip_catalog
