set moduleName A_IO_L2_in_intra_trans
set isTopModule 0
set isTaskLevelControl 1
set isCombinational 0
set isDatapathOnly 0
set isFreeRunPipelineModule 0
set isPipelined 0
set pipeline_type none
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set isEnableWaveformDebug 1
set C_modelName {A_IO_L2_in_intra_trans}
set C_modelType { void 0 }
set C_modelArgList {
	{ local_A_V int 512 regular {array 8 { 1 3 } 1 1 }  }
	{ fifo_A_local_out_V_V int 64 regular {fifo 1 volatile }  }
	{ intra_trans_en uint 1 regular  }
}
set C_modelArgMapList {[ 
	{ "Name" : "local_A_V", "interface" : "memory", "bitwidth" : 512, "direction" : "READONLY"} , 
 	{ "Name" : "fifo_A_local_out_V_V", "interface" : "fifo", "bitwidth" : 64, "direction" : "WRITEONLY"} , 
 	{ "Name" : "intra_trans_en", "interface" : "wire", "bitwidth" : 1, "direction" : "READONLY"} ]}
# RTL Port declarations: 
set portNum 13
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ local_A_V_address0 sc_out sc_lv 3 signal 0 } 
	{ local_A_V_ce0 sc_out sc_logic 1 signal 0 } 
	{ local_A_V_q0 sc_in sc_lv 512 signal 0 } 
	{ fifo_A_local_out_V_V_din sc_out sc_lv 64 signal 1 } 
	{ fifo_A_local_out_V_V_full_n sc_in sc_logic 1 signal 1 } 
	{ fifo_A_local_out_V_V_write sc_out sc_logic 1 signal 1 } 
	{ intra_trans_en sc_in sc_logic 1 signal 2 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "local_A_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "local_A_V", "role": "address0" }} , 
 	{ "name": "local_A_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "local_A_V", "role": "ce0" }} , 
 	{ "name": "local_A_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":512, "type": "signal", "bundle":{"name": "local_A_V", "role": "q0" }} , 
 	{ "name": "fifo_A_local_out_V_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "fifo_A_local_out_V_V", "role": "din" }} , 
 	{ "name": "fifo_A_local_out_V_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fifo_A_local_out_V_V", "role": "full_n" }} , 
 	{ "name": "fifo_A_local_out_V_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fifo_A_local_out_V_V", "role": "write" }} , 
 	{ "name": "intra_trans_en", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "intra_trans_en", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1"],
		"CDFG" : "A_IO_L2_in_intra_trans",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "1", "EstimateLatencyMax" : "514",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "local_A_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "fifo_A_local_out_V_V", "Type" : "Fifo", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "fifo_A_local_out_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "intra_trans_en", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel0_mux_83_64_1_1_U15", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	A_IO_L2_in_intra_trans {
		local_A_V {Type I LastRead 1 FirstWrite -1}
		fifo_A_local_out_V_V {Type O LastRead -1 FirstWrite 2}
		intra_trans_en {Type I LastRead 0 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "1", "Max" : "514"}
	, {"Name" : "Interval", "Min" : "1", "Max" : "514"}
]}

set PipelineEnableSignalInfo {[
	{"Pipeline" : "0", "EnableSignal" : "ap_enable_pp0"}
]}

set Spec2ImplPortList { 
	local_A_V { ap_memory {  { local_A_V_address0 mem_address 1 3 }  { local_A_V_ce0 mem_ce 1 1 }  { local_A_V_q0 mem_dout 0 512 } } }
	fifo_A_local_out_V_V { ap_fifo {  { fifo_A_local_out_V_V_din fifo_data 1 64 }  { fifo_A_local_out_V_V_full_n fifo_status 0 1 }  { fifo_A_local_out_V_V_write fifo_update 1 1 } } }
	intra_trans_en { ap_none {  { intra_trans_en in_data 0 1 } } }
}
