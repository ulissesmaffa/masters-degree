set moduleName B_IO_L2_in_intra_trans_Pipeline_VITIS_LOOP_407_1_V
set isTopModule 0
set isCombinational 0
set isDatapathOnly 0
set isPipelined 1
set pipeline_type none
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set isEnableWaveformDebug 1
set hasInterrupt 0
set DLRegFirstOffset 0
set DLRegItemOffset 0
set C_modelName {B_IO_L2_in_intra_trans_Pipeline_VITIS_LOOP_407_1_V}
set C_modelType { void 0 }
set C_modelArgList {
	{ local_B int 512 regular {array 8 { 1 3 } 1 1 }  }
	{ fifo_B_PE_0_1 int 64 regular {fifo 1 volatile }  }
}
set hasAXIMCache 0
set C_modelArgMapList {[ 
	{ "Name" : "local_B", "interface" : "memory", "bitwidth" : 512, "direction" : "READONLY"} , 
 	{ "Name" : "fifo_B_PE_0_1", "interface" : "fifo", "bitwidth" : 64, "direction" : "WRITEONLY"} ]}
# RTL Port declarations: 
set portNum 14
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ fifo_B_PE_0_1_din sc_out sc_lv 64 signal 1 } 
	{ fifo_B_PE_0_1_num_data_valid sc_in sc_lv 2 signal 1 } 
	{ fifo_B_PE_0_1_fifo_cap sc_in sc_lv 2 signal 1 } 
	{ fifo_B_PE_0_1_full_n sc_in sc_logic 1 signal 1 } 
	{ fifo_B_PE_0_1_write sc_out sc_logic 1 signal 1 } 
	{ local_B_address0 sc_out sc_lv 3 signal 0 } 
	{ local_B_ce0 sc_out sc_logic 1 signal 0 } 
	{ local_B_q0 sc_in sc_lv 512 signal 0 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "fifo_B_PE_0_1_din", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "fifo_B_PE_0_1", "role": "din" }} , 
 	{ "name": "fifo_B_PE_0_1_num_data_valid", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "fifo_B_PE_0_1", "role": "num_data_valid" }} , 
 	{ "name": "fifo_B_PE_0_1_fifo_cap", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "fifo_B_PE_0_1", "role": "fifo_cap" }} , 
 	{ "name": "fifo_B_PE_0_1_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fifo_B_PE_0_1", "role": "full_n" }} , 
 	{ "name": "fifo_B_PE_0_1_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fifo_B_PE_0_1", "role": "write" }} , 
 	{ "name": "local_B_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "local_B", "role": "address0" }} , 
 	{ "name": "local_B_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "local_B", "role": "ce0" }} , 
 	{ "name": "local_B_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":512, "type": "signal", "bundle":{"name": "local_B", "role": "q0" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4"],
		"CDFG" : "B_IO_L2_in_intra_trans_Pipeline_VITIS_LOOP_407_1_V",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1", "real_start" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "516", "EstimateLatencyMax" : "516",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"IsBlackBox" : "0",
		"Port" : [
			{"Name" : "local_B", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "fifo_B_PE_0_1", "Type" : "Fifo", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "fifo_B_PE_0_1_blk_n", "Type" : "RtlSignal"}]}],
		"Loop" : [
			{"Name" : "VITIS_LOOP_407_1_VITIS_LOOP_409_2_VITIS_LOOP_411_3", "PipelineType" : "UPC",
				"LoopDec" : {"FSMBitwidth" : "1", "FirstState" : "ap_ST_fsm_pp0_stage0", "FirstStateIter" : "ap_enable_reg_pp0_iter0", "FirstStateBlock" : "ap_block_pp0_stage0_subdone", "LastState" : "ap_ST_fsm_pp0_stage0", "LastStateIter" : "ap_enable_reg_pp0_iter2", "LastStateBlock" : "ap_block_pp0_stage0_subdone", "QuitState" : "ap_ST_fsm_pp0_stage0", "QuitStateIter" : "ap_enable_reg_pp0_iter2", "QuitStateBlock" : "ap_block_pp0_stage0_subdone", "OneDepthLoop" : "0", "has_ap_ctrl" : "1", "has_continue" : "0"}}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mux_8_3_64_1_1_U42", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mux_8_3_64_1_1_U43", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mux_8_3_64_1_1_U44", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.flow_control_loop_pipe_sequential_init_U", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	B_IO_L2_in_intra_trans_Pipeline_VITIS_LOOP_407_1_V {
		local_B {Type I LastRead 2 FirstWrite -1}
		fifo_B_PE_0_1 {Type O LastRead -1 FirstWrite 2}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "516", "Max" : "516"}
	, {"Name" : "Interval", "Min" : "516", "Max" : "516"}
]}

set PipelineEnableSignalInfo {[
	{"Pipeline" : "0", "EnableSignal" : "ap_enable_pp0"}
]}

set Spec2ImplPortList { 
	local_B { ap_memory {  { local_B_address0 mem_address 1 3 }  { local_B_ce0 mem_ce 1 1 }  { local_B_q0 in_data 0 512 } } }
	fifo_B_PE_0_1 { ap_fifo {  { fifo_B_PE_0_1_din fifo_port_we 1 64 }  { fifo_B_PE_0_1_num_data_valid fifo_status_num_data_valid 0 2 }  { fifo_B_PE_0_1_fifo_cap fifo_update 0 2 }  { fifo_B_PE_0_1_full_n fifo_status 0 1 }  { fifo_B_PE_0_1_write fifo_data 1 1 } } }
}
