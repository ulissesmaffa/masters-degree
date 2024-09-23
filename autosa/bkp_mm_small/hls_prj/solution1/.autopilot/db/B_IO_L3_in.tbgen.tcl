set moduleName B_IO_L3_in
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
set C_modelName {B_IO_L3_in}
set C_modelType { void 0 }
set C_modelArgList {
	{ fifo_B_B_IO_L3_in_serialize int 512 regular {fifo 0 volatile }  }
	{ fifo_B_B_IO_L2_in_0 int 512 regular {fifo 1 volatile }  }
}
set hasAXIMCache 0
set C_modelArgMapList {[ 
	{ "Name" : "fifo_B_B_IO_L3_in_serialize", "interface" : "fifo", "bitwidth" : 512, "direction" : "READONLY"} , 
 	{ "Name" : "fifo_B_B_IO_L2_in_0", "interface" : "fifo", "bitwidth" : 512, "direction" : "WRITEONLY"} ]}
# RTL Port declarations: 
set portNum 20
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ start_full_n sc_in sc_logic 1 signal -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_continue sc_in sc_logic 1 continue -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ fifo_B_B_IO_L3_in_serialize_dout sc_in sc_lv 512 signal 0 } 
	{ fifo_B_B_IO_L3_in_serialize_num_data_valid sc_in sc_lv 2 signal 0 } 
	{ fifo_B_B_IO_L3_in_serialize_fifo_cap sc_in sc_lv 2 signal 0 } 
	{ fifo_B_B_IO_L3_in_serialize_empty_n sc_in sc_logic 1 signal 0 } 
	{ fifo_B_B_IO_L3_in_serialize_read sc_out sc_logic 1 signal 0 } 
	{ fifo_B_B_IO_L2_in_0_din sc_out sc_lv 512 signal 1 } 
	{ fifo_B_B_IO_L2_in_0_num_data_valid sc_in sc_lv 2 signal 1 } 
	{ fifo_B_B_IO_L2_in_0_fifo_cap sc_in sc_lv 2 signal 1 } 
	{ fifo_B_B_IO_L2_in_0_full_n sc_in sc_logic 1 signal 1 } 
	{ fifo_B_B_IO_L2_in_0_write sc_out sc_logic 1 signal 1 } 
	{ start_out sc_out sc_logic 1 signal -1 } 
	{ start_write sc_out sc_logic 1 signal -1 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "start_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "start_full_n", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_continue", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "continue", "bundle":{"name": "ap_continue", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "fifo_B_B_IO_L3_in_serialize_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":512, "type": "signal", "bundle":{"name": "fifo_B_B_IO_L3_in_serialize", "role": "dout" }} , 
 	{ "name": "fifo_B_B_IO_L3_in_serialize_num_data_valid", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "fifo_B_B_IO_L3_in_serialize", "role": "num_data_valid" }} , 
 	{ "name": "fifo_B_B_IO_L3_in_serialize_fifo_cap", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "fifo_B_B_IO_L3_in_serialize", "role": "fifo_cap" }} , 
 	{ "name": "fifo_B_B_IO_L3_in_serialize_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fifo_B_B_IO_L3_in_serialize", "role": "empty_n" }} , 
 	{ "name": "fifo_B_B_IO_L3_in_serialize_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fifo_B_B_IO_L3_in_serialize", "role": "read" }} , 
 	{ "name": "fifo_B_B_IO_L2_in_0_din", "direction": "out", "datatype": "sc_lv", "bitwidth":512, "type": "signal", "bundle":{"name": "fifo_B_B_IO_L2_in_0", "role": "din" }} , 
 	{ "name": "fifo_B_B_IO_L2_in_0_num_data_valid", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "fifo_B_B_IO_L2_in_0", "role": "num_data_valid" }} , 
 	{ "name": "fifo_B_B_IO_L2_in_0_fifo_cap", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "fifo_B_B_IO_L2_in_0", "role": "fifo_cap" }} , 
 	{ "name": "fifo_B_B_IO_L2_in_0_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fifo_B_B_IO_L2_in_0", "role": "full_n" }} , 
 	{ "name": "fifo_B_B_IO_L2_in_0_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fifo_B_B_IO_L2_in_0", "role": "write" }} , 
 	{ "name": "start_out", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "start_out", "role": "default" }} , 
 	{ "name": "start_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "start_write", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1"],
		"CDFG" : "B_IO_L3_in",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1", "real_start" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "1026", "EstimateLatencyMax" : "1026",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"IsBlackBox" : "0",
		"Port" : [
			{"Name" : "fifo_B_B_IO_L3_in_serialize", "Type" : "Fifo", "Direction" : "I", "DependentProc" : ["0"], "DependentChan" : "0", "DependentChanDepth" : "2", "DependentChanType" : "0",
				"BlockSignal" : [
					{"Name" : "fifo_B_B_IO_L3_in_serialize_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "fifo_B_B_IO_L2_in_0", "Type" : "Fifo", "Direction" : "O", "DependentProc" : ["0"], "DependentChan" : "0", "DependentChanDepth" : "2", "DependentChanType" : "0",
				"BlockSignal" : [
					{"Name" : "fifo_B_B_IO_L2_in_0_blk_n", "Type" : "RtlSignal"}]}],
		"Loop" : [
			{"Name" : "VITIS_LOOP_353_1_VITIS_LOOP_355_3_VITIS_LOOP_358_4_VITIS_LOOP_360_5", "PipelineType" : "UPC",
				"LoopDec" : {"FSMBitwidth" : "1", "FirstState" : "ap_ST_fsm_pp0_stage0", "FirstStateIter" : "ap_enable_reg_pp0_iter0", "FirstStateBlock" : "ap_block_pp0_stage0_subdone", "LastState" : "ap_ST_fsm_pp0_stage0", "LastStateIter" : "ap_enable_reg_pp0_iter1", "LastStateBlock" : "ap_block_pp0_stage0_subdone", "QuitState" : "ap_ST_fsm_pp0_stage0", "QuitStateIter" : "ap_enable_reg_pp0_iter1", "QuitStateBlock" : "ap_block_pp0_stage0_subdone", "OneDepthLoop" : "0", "has_ap_ctrl" : "1", "has_continue" : "1"}}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.flow_control_loop_pipe_U", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	B_IO_L3_in {
		fifo_B_B_IO_L3_in_serialize {Type I LastRead 1 FirstWrite -1}
		fifo_B_B_IO_L2_in_0 {Type O LastRead -1 FirstWrite 1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "1026", "Max" : "1026"}
	, {"Name" : "Interval", "Min" : "1026", "Max" : "1026"}
]}

set PipelineEnableSignalInfo {[
	{"Pipeline" : "0", "EnableSignal" : "ap_enable_pp0"}
]}

set Spec2ImplPortList { 
	fifo_B_B_IO_L3_in_serialize { ap_fifo {  { fifo_B_B_IO_L3_in_serialize_dout fifo_port_we 0 512 }  { fifo_B_B_IO_L3_in_serialize_num_data_valid fifo_status_num_data_valid 0 2 }  { fifo_B_B_IO_L3_in_serialize_fifo_cap fifo_update 0 2 }  { fifo_B_B_IO_L3_in_serialize_empty_n fifo_status 0 1 }  { fifo_B_B_IO_L3_in_serialize_read fifo_data 1 1 } } }
	fifo_B_B_IO_L2_in_0 { ap_fifo {  { fifo_B_B_IO_L2_in_0_din fifo_port_we 1 512 }  { fifo_B_B_IO_L2_in_0_num_data_valid fifo_status_num_data_valid 0 2 }  { fifo_B_B_IO_L2_in_0_fifo_cap fifo_update 0 2 }  { fifo_B_B_IO_L2_in_0_full_n fifo_status 0 1 }  { fifo_B_B_IO_L2_in_0_write fifo_data 1 1 } } }
}
