set moduleName C_drain_IO_L1_out_boundary_wrapper_6
set isTopModule 0
set isCombinational 0
set isDatapathOnly 0
set isPipelined 0
set pipeline_type none
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set isEnableWaveformDebug 1
set hasInterrupt 0
set DLRegFirstOffset 0
set DLRegItemOffset 0
set C_modelName {C_drain_IO_L1_out_boundary_wrapper.6}
set C_modelType { void 0 }
set C_modelArgList {
	{ fifo_C_drain_C_drain_IO_L1_out_1_1 int 128 regular {fifo 1 volatile }  }
	{ fifo_C_drain_PE_1_1 int 32 regular {fifo 0 volatile }  }
}
set hasAXIMCache 0
set C_modelArgMapList {[ 
	{ "Name" : "fifo_C_drain_C_drain_IO_L1_out_1_1", "interface" : "fifo", "bitwidth" : 128, "direction" : "WRITEONLY"} , 
 	{ "Name" : "fifo_C_drain_PE_1_1", "interface" : "fifo", "bitwidth" : 32, "direction" : "READONLY"} ]}
# RTL Port declarations: 
set portNum 17
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_continue sc_in sc_logic 1 continue -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ fifo_C_drain_C_drain_IO_L1_out_1_1_din sc_out sc_lv 128 signal 0 } 
	{ fifo_C_drain_C_drain_IO_L1_out_1_1_num_data_valid sc_in sc_lv 2 signal 0 } 
	{ fifo_C_drain_C_drain_IO_L1_out_1_1_fifo_cap sc_in sc_lv 2 signal 0 } 
	{ fifo_C_drain_C_drain_IO_L1_out_1_1_full_n sc_in sc_logic 1 signal 0 } 
	{ fifo_C_drain_C_drain_IO_L1_out_1_1_write sc_out sc_logic 1 signal 0 } 
	{ fifo_C_drain_PE_1_1_dout sc_in sc_lv 32 signal 1 } 
	{ fifo_C_drain_PE_1_1_num_data_valid sc_in sc_lv 2 signal 1 } 
	{ fifo_C_drain_PE_1_1_fifo_cap sc_in sc_lv 2 signal 1 } 
	{ fifo_C_drain_PE_1_1_empty_n sc_in sc_logic 1 signal 1 } 
	{ fifo_C_drain_PE_1_1_read sc_out sc_logic 1 signal 1 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_continue", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "continue", "bundle":{"name": "ap_continue", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "fifo_C_drain_C_drain_IO_L1_out_1_1_din", "direction": "out", "datatype": "sc_lv", "bitwidth":128, "type": "signal", "bundle":{"name": "fifo_C_drain_C_drain_IO_L1_out_1_1", "role": "din" }} , 
 	{ "name": "fifo_C_drain_C_drain_IO_L1_out_1_1_num_data_valid", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "fifo_C_drain_C_drain_IO_L1_out_1_1", "role": "num_data_valid" }} , 
 	{ "name": "fifo_C_drain_C_drain_IO_L1_out_1_1_fifo_cap", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "fifo_C_drain_C_drain_IO_L1_out_1_1", "role": "fifo_cap" }} , 
 	{ "name": "fifo_C_drain_C_drain_IO_L1_out_1_1_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fifo_C_drain_C_drain_IO_L1_out_1_1", "role": "full_n" }} , 
 	{ "name": "fifo_C_drain_C_drain_IO_L1_out_1_1_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fifo_C_drain_C_drain_IO_L1_out_1_1", "role": "write" }} , 
 	{ "name": "fifo_C_drain_PE_1_1_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "fifo_C_drain_PE_1_1", "role": "dout" }} , 
 	{ "name": "fifo_C_drain_PE_1_1_num_data_valid", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "fifo_C_drain_PE_1_1", "role": "num_data_valid" }} , 
 	{ "name": "fifo_C_drain_PE_1_1_fifo_cap", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "fifo_C_drain_PE_1_1", "role": "fifo_cap" }} , 
 	{ "name": "fifo_C_drain_PE_1_1_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fifo_C_drain_PE_1_1", "role": "empty_n" }} , 
 	{ "name": "fifo_C_drain_PE_1_1_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fifo_C_drain_PE_1_1", "role": "read" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "4"],
		"CDFG" : "C_drain_IO_L1_out_boundary_wrapper_6",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1", "real_start" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "1441", "EstimateLatencyMax" : "1441",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"IsBlackBox" : "0",
		"Port" : [
			{"Name" : "fifo_C_drain_C_drain_IO_L1_out_1_1", "Type" : "Fifo", "Direction" : "O", "DependentProc" : ["0"], "DependentChan" : "0", "DependentChanDepth" : "2", "DependentChanType" : "0",
				"SubConnect" : [
					{"ID" : "4", "SubInstance" : "grp_C_drain_IO_L1_out_boundary_wrapper_6_Pipeline_VITI_fu_65", "Port" : "fifo_C_drain_C_drain_IO_L1_out_1_1", "Inst_start_state" : "5", "Inst_end_state" : "6"}]},
			{"Name" : "fifo_C_drain_PE_1_1", "Type" : "Fifo", "Direction" : "I", "DependentProc" : ["0"], "DependentChan" : "0", "DependentChanDepth" : "2", "DependentChanType" : "0",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_C_drain_IO_L1_out_boundary_wrapper_6_Pipeline_VITI_1_fu_58", "Port" : "fifo_C_drain_PE_1_1", "Inst_start_state" : "2", "Inst_end_state" : "3"}]}],
		"Loop" : [
			{"Name" : "VITIS_LOOP_1000_1_VITIS_LOOP_1001_2", "PipelineType" : "no",
				"LoopDec" : {"FSMBitwidth" : "6", "FirstState" : "ap_ST_fsm_state2", "LastState" : ["ap_ST_fsm_state6"], "QuitState" : ["ap_ST_fsm_state2"], "PreState" : ["ap_ST_fsm_state1"], "PostState" : ["ap_ST_fsm_state1"], "OneDepthLoop" : "0", "OneStateBlock": ""}}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.local_C_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_C_drain_IO_L1_out_boundary_wrapper_6_Pipeline_VITI_1_fu_58", "Parent" : "0", "Child" : ["3"],
		"CDFG" : "C_drain_IO_L1_out_boundary_wrapper_6_Pipeline_VITI_1",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1", "real_start" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "67", "EstimateLatencyMax" : "67",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"IsBlackBox" : "0",
		"Port" : [
			{"Name" : "local_C", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "fifo_C_drain_PE_1_1", "Type" : "Fifo", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "fifo_C_drain_PE_1_1_blk_n", "Type" : "RtlSignal"}]}],
		"Loop" : [
			{"Name" : "VITIS_LOOP_849_1_VITIS_LOOP_851_2", "PipelineType" : "UPC",
				"LoopDec" : {"FSMBitwidth" : "1", "FirstState" : "ap_ST_fsm_pp0_stage0", "FirstStateIter" : "ap_enable_reg_pp0_iter0", "FirstStateBlock" : "ap_block_pp0_stage0_subdone", "LastState" : "ap_ST_fsm_pp0_stage0", "LastStateIter" : "ap_enable_reg_pp0_iter2", "LastStateBlock" : "ap_block_pp0_stage0_subdone", "QuitState" : "ap_ST_fsm_pp0_stage0", "QuitStateIter" : "ap_enable_reg_pp0_iter2", "QuitStateBlock" : "ap_block_pp0_stage0_subdone", "OneDepthLoop" : "0", "has_ap_ctrl" : "1", "has_continue" : "0"}}]},
	{"ID" : "3", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_C_drain_IO_L1_out_boundary_wrapper_6_Pipeline_VITI_1_fu_58.flow_control_loop_pipe_sequential_init_U", "Parent" : "2"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_C_drain_IO_L1_out_boundary_wrapper_6_Pipeline_VITI_fu_65", "Parent" : "0", "Child" : ["5"],
		"CDFG" : "C_drain_IO_L1_out_boundary_wrapper_6_Pipeline_VITI",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1", "real_start" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "18", "EstimateLatencyMax" : "18",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"IsBlackBox" : "0",
		"Port" : [
			{"Name" : "local_C", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "fifo_C_drain_C_drain_IO_L1_out_1_1", "Type" : "Fifo", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "fifo_C_drain_C_drain_IO_L1_out_1_1_blk_n", "Type" : "RtlSignal"}]}],
		"Loop" : [
			{"Name" : "VITIS_LOOP_927_2_VITIS_LOOP_929_3", "PipelineType" : "UPC",
				"LoopDec" : {"FSMBitwidth" : "1", "FirstState" : "ap_ST_fsm_pp0_stage0", "FirstStateIter" : "ap_enable_reg_pp0_iter0", "FirstStateBlock" : "ap_block_pp0_stage0_subdone", "LastState" : "ap_ST_fsm_pp0_stage0", "LastStateIter" : "ap_enable_reg_pp0_iter1", "LastStateBlock" : "ap_block_pp0_stage0_subdone", "QuitState" : "ap_ST_fsm_pp0_stage0", "QuitStateIter" : "ap_enable_reg_pp0_iter1", "QuitStateBlock" : "ap_block_pp0_stage0_subdone", "OneDepthLoop" : "0", "has_ap_ctrl" : "1", "has_continue" : "0"}}]},
	{"ID" : "5", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_C_drain_IO_L1_out_boundary_wrapper_6_Pipeline_VITI_fu_65.flow_control_loop_pipe_sequential_init_U", "Parent" : "4"}]}


set ArgLastReadFirstWriteLatency {
	C_drain_IO_L1_out_boundary_wrapper_6 {
		fifo_C_drain_C_drain_IO_L1_out_1_1 {Type O LastRead -1 FirstWrite 1}
		fifo_C_drain_PE_1_1 {Type I LastRead 1 FirstWrite -1}}
	C_drain_IO_L1_out_boundary_wrapper_6_Pipeline_VITI_1 {
		local_C {Type IO LastRead 1 FirstWrite 2}
		fifo_C_drain_PE_1_1 {Type I LastRead 1 FirstWrite -1}}
	C_drain_IO_L1_out_boundary_wrapper_6_Pipeline_VITI {
		local_C {Type I LastRead 0 FirstWrite -1}
		fifo_C_drain_C_drain_IO_L1_out_1_1 {Type O LastRead -1 FirstWrite 1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "1441", "Max" : "1441"}
	, {"Name" : "Interval", "Min" : "1441", "Max" : "1441"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	fifo_C_drain_C_drain_IO_L1_out_1_1 { ap_fifo {  { fifo_C_drain_C_drain_IO_L1_out_1_1_din fifo_port_we 1 128 }  { fifo_C_drain_C_drain_IO_L1_out_1_1_num_data_valid fifo_status_num_data_valid 0 2 }  { fifo_C_drain_C_drain_IO_L1_out_1_1_fifo_cap fifo_update 0 2 }  { fifo_C_drain_C_drain_IO_L1_out_1_1_full_n fifo_status 0 1 }  { fifo_C_drain_C_drain_IO_L1_out_1_1_write fifo_data 1 1 } } }
	fifo_C_drain_PE_1_1 { ap_fifo {  { fifo_C_drain_PE_1_1_dout fifo_port_we 0 32 }  { fifo_C_drain_PE_1_1_num_data_valid fifo_status_num_data_valid 0 2 }  { fifo_C_drain_PE_1_1_fifo_cap fifo_update 0 2 }  { fifo_C_drain_PE_1_1_empty_n fifo_status 0 1 }  { fifo_C_drain_PE_1_1_read fifo_data 1 1 } } }
}
