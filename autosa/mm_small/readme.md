1) comando no Docker:

./autosa ./autosa_tests/mm/kernel.c \
--config=./autosa_config/autosa_config.json \
--target=autosa_hls_c \
--output-dir=./autosa.tmp/output \
--sa-sizes="{kernel[]->space_time[3];kernel[]->array_part[16,16,16];kernel[]->latency[8,8];kernel[]->simd[2]}" \
--simd-info=./autosa_tests/mm/simd_info.json \
--host-serialize \
--hls

2) Copiar arquivos do docker para pc 

${AUTOSA_ROOT}/autosa.tmp/output/src
docker cp c5df4738e79f:/usr/src/docker_autosa/autosa.tmp/output/src /home/ulisses/Projects/masters-degree/autosa/mm_small

${AUTOSA_ROOT}/autosa_tests/mm/hls_script.tcl 
docker cp c5df4738e79f:/usr/src/docker_autosa/autosa_tests/mm/hls_script.tcl /home/ulisses/Projects/masters-degree/autosa/mm_small


3) Rodar hls_script.tcl no terminal
vitis_hls -f hls_script.tcl 

LOG:

****** Vitis HLS - High-Level Synthesis from C, C++ and OpenCL v2023.1.1 (64-bit)
  **** SW Build 3869133 on Jun 15 2023
  **** IP Build 3900379 on Sat Jun 17 05:28:05 MDT 2023
  **** SharedData Build 3899622 on Fri Jun 16 03:34:24 MDT 2023
    ** Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
    ** Copyright 2022-2023 Advanced Micro Devices, Inc. All Rights Reserved.

source /home/ulisses/Tools/Xilinx/Vitis_HLS/2023.1/scripts/vitis_hls/hls.tcl -notrace
INFO: [HLS 200-10] Running '/home/ulisses/Tools/Xilinx/Vitis_HLS/2023.1/bin/unwrapped/lnx64.o/vitis_hls'
INFO: [HLS 200-10] For user 'ulisses' on host 'ulisses-thinkpad' (Linux_x86_64 version 5.15.0-117-generic) on Sat Sep 14 19:15:05 -03 2024
INFO: [HLS 200-10] On os Ubuntu 20.04.6 LTS
INFO: [HLS 200-10] In directory '/home/ulisses/Projects/masters-degree/autosa/mm_small'
Sourcing Tcl script 'hls_script.tcl'
INFO: [HLS 200-1510] Running: open_project hls_prj 
INFO: [HLS 200-10] Creating and opening project '/home/ulisses/Projects/masters-degree/autosa/mm_small/hls_prj'.
INFO: [HLS 200-1510] Running: set_top kernel0 
INFO: [HLS 200-1510] Running: add_files src/kernel_kernel.h 
INFO: [HLS 200-10] Adding design file 'src/kernel_kernel.h' to the project
INFO: [HLS 200-1510] Running: add_files src/kernel_kernel.cpp 
INFO: [HLS 200-10] Adding design file 'src/kernel_kernel.cpp' to the project
INFO: [HLS 200-1510] Running: add_files -tb src/kernel_host.cpp 
INFO: [HLS 200-10] Adding test bench file 'src/kernel_host.cpp' to the project
INFO: [HLS 200-1510] Running: open_solution solution1 
INFO: [HLS 200-10] Creating and opening solution '/home/ulisses/Projects/masters-degree/autosa/mm_small/hls_prj/solution1'.
INFO: [HLS 200-1505] Using default flow_target 'vivado'
Resolution: For help on HLS 200-1505 see www.xilinx.com/cgi-bin/docs/rdoc?v=2023.1;t=hls+guidance;d=200-1505.html
INFO: [HLS 200-1510] Running: set_part xcu200-fsgd2104-2-e 
INFO: [HLS 200-1611] Setting target device to 'xcu200-fsgd2104-2-e'
INFO: [HLS 200-1510] Running: create_clock -period 5 -name default 
INFO: [SYN 201-201] Setting up clock 'default' with a period of 5ns.
INFO: [HLS 200-1510] Running: config_compile -name_max_length 50 
INFO: [XFORM 203-1161] The maximum of name length is set to 50.
INFO: [HLS 200-1510] Running: csim_design 
INFO: [SIM 211-2] *************** CSIM start ***************
INFO: [SIM 211-4] CSIM will launch GCC as the compiler.
INFO: [HLS 200-2036] Building debug C Simulation binaries
   Compiling ../../../../src/kernel_host.cpp in debug mode
   Compiling ../../../../src/kernel_kernel.cpp in debug mode
   Generating csim.exe
Failed with 4096 errors!
INFO [HLS SIM]: The maximum depth reached by any hls::stream() instance in the design is 32768
INFO: [SIM 211-1] CSim done with 0 errors.
INFO: [SIM 211-3] *************** CSIM finish ***************
INFO: [HLS 200-111] Finished Command csim_design CPU user time: 4.32 seconds. CPU system time: 0.89 seconds. Elapsed time: 5.18 seconds; current allocated memory: 0.000 MB.
INFO: [HLS 200-112] Total CPU user time: 6.81 seconds. Total CPU system time: 1.81 seconds. Total elapsed time: 8.49 seconds; peak allocated memory: 1.483 GB.
INFO: [Common 17-206] Exiting vitis_hls at Sat Sep 14 19:15:13 2024...

4) Open de project with vitis 
