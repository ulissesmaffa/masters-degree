set moduleName A_IO_L2_in_inter_trans_boundary
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
set C_modelName {A_IO_L2_in_inter_trans_boundary}
set C_modelType { void 0 }
set C_modelArgList {
	{ local_A_V int 512 regular {array 8 { 3 0 } 0 1 }  }
	{ fifo_A_in_V_V int 512 regular {fifo 0 volatile }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "local_A_V", "interface" : "memory", "bitwidth" : 512, "direction" : "WRITEONLY"} , 
 	{ "Name" : "fifo_A_in_V_V", "interface" : "fifo", "bitwidth" : 512, "direction" : "READONLY"} ]}
# RTL Port declarations: 
set portNum 13
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ local_A_V_address1 sc_out sc_lv 3 signal 0 } 
	{ local_A_V_ce1 sc_out sc_logic 1 signal 0 } 
	{ local_A_V_we1 sc_out sc_logic 1 signal 0 } 
	{ local_A_V_d1 sc_out sc_lv 512 signal 0 } 
	{ fifo_A_in_V_V_dout sc_in sc_lv 512 signal 1 } 
	{ fifo_A_in_V_V_empty_n sc_in sc_logic 1 signal 1 } 
	{ fifo_A_in_V_V_read sc_out sc_logic 1 signal 1 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "local_A_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "local_A_V", "role": "address1" }} , 
 	{ "name": "local_A_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "local_A_V", "role": "ce1" }} , 
 	{ "name": "local_A_V_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "local_A_V", "role": "we1" }} , 
 	{ "name": "local_A_V_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":512, "type": "signal", "bundle":{"name": "local_A_V", "role": "d1" }} , 
 	{ "name": "fifo_A_in_V_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":512, "type": "signal", "bundle":{"name": "fifo_A_in_V_V", "role": "dout" }} , 
 	{ "name": "fifo_A_in_V_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fifo_A_in_V_V", "role": "empty_n" }} , 
 	{ "name": "fifo_A_in_V_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fifo_A_in_V_V", "role": "read" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "",
		"CDFG" : "A_IO_L2_in_inter_trans_boundary",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "10", "EstimateLatencyMax" : "10",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "local_A_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "fifo_A_in_V_V", "Type" : "Fifo", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "fifo_A_in_V_V_blk_n", "Type" : "RtlSignal"}]}]}]}


set ArgLastReadFirstWriteLatency {
	A_IO_L2_in_inter_trans_boundary {
		local_A_V {Type O LastRead -1 FirstWrite 2}
		fifo_A_in_V_V {Type I LastRead 2 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "10", "Max" : "10"}
	, {"Name" : "Interval", "Min" : "10", "Max" : "10"}
]}

set PipelineEnableSignalInfo {[
	{"Pipeline" : "0", "EnableSignal" : "ap_enable_pp0"}
]}

set Spec2ImplPortList { 
	local_A_V { ap_memory {  { local_A_V_address1 MemPortADDR2 1 3 }  { local_A_V_ce1 MemPortCE2 1 1 }  { local_A_V_we1 MemPortWE2 1 1 }  { local_A_V_d1 MemPortDIN2 1 512 } } }
	fifo_A_in_V_V { ap_fifo {  { fifo_A_in_V_V_dout fifo_data 0 512 }  { fifo_A_in_V_V_empty_n fifo_status 0 1 }  { fifo_A_in_V_V_read fifo_update 1 1 } } }
}