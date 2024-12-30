set moduleName sa_compute
set isTopModule 1
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
set C_modelName {sa_compute}
set C_modelType { void 0 }
set C_modelArgList {
	{ sa_pe_li int 32 regular {array 4 { 2 3 } 1 1 }  }
	{ sa_pe_tw int 32 regular {array 4 { 2 3 } 1 1 }  }
	{ sa_pe_ri int 32 regular {array 4 { 2 3 } 1 1 }  }
	{ sa_pe_bw int 32 regular {array 4 { 2 3 } 1 1 }  }
	{ sa_pe_ba int 32 regular {array 4 { 2 3 } 1 1 }  }
	{ sa_buffer_a_li_ready int 1 regular {array 2 { 2 3 } 1 1 }  }
	{ sa_buffer_a_li_value int 32 regular {array 2 { 1 3 } 1 1 }  }
	{ sa_buffer_b_tw_ready int 1 regular {array 2 { 2 3 } 1 1 }  }
	{ sa_buffer_b_tw_value int 32 regular {array 2 { 1 3 } 1 1 }  }
	{ sa_ba_sa int 32 regular {array 4 { 0 3 } 0 1 }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "sa_pe_li", "interface" : "memory", "bitwidth" : 32, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "sa.pe.li","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 1,"step" : 1},{"low" : 0,"up" : 1,"step" : 1}]}]}]} , 
 	{ "Name" : "sa_pe_tw", "interface" : "memory", "bitwidth" : 32, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "sa.pe.tw","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 1,"step" : 1},{"low" : 0,"up" : 1,"step" : 1}]}]}]} , 
 	{ "Name" : "sa_pe_ri", "interface" : "memory", "bitwidth" : 32, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "sa.pe.ri","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 1,"step" : 1},{"low" : 0,"up" : 1,"step" : 1}]}]}]} , 
 	{ "Name" : "sa_pe_bw", "interface" : "memory", "bitwidth" : 32, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "sa.pe.bw","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 1,"step" : 1},{"low" : 0,"up" : 1,"step" : 1}]}]}]} , 
 	{ "Name" : "sa_pe_ba", "interface" : "memory", "bitwidth" : 32, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "sa.pe.ba","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 1,"step" : 1},{"low" : 0,"up" : 1,"step" : 1}]}]}]} , 
 	{ "Name" : "sa_buffer_a_li_ready", "interface" : "memory", "bitwidth" : 1, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":0,"cElement": [{"cName": "sa.buffer_a_li.ready","cData": "_Bool","bit_use": { "low": 0,"up": 0},"cArray": [{"low" : 0,"up" : 1,"step" : 1}]}]}]} , 
 	{ "Name" : "sa_buffer_a_li_value", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "sa.buffer_a_li.value","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 1,"step" : 1}]}]}]} , 
 	{ "Name" : "sa_buffer_b_tw_ready", "interface" : "memory", "bitwidth" : 1, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":0,"cElement": [{"cName": "sa.buffer_b_tw.ready","cData": "_Bool","bit_use": { "low": 0,"up": 0},"cArray": [{"low" : 0,"up" : 1,"step" : 1}]}]}]} , 
 	{ "Name" : "sa_buffer_b_tw_value", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "sa.buffer_b_tw.value","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 1,"step" : 1}]}]}]} , 
 	{ "Name" : "sa_ba_sa", "interface" : "memory", "bitwidth" : 32, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "sa.ba_sa","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 1,"step" : 1},{"low" : 0,"up" : 1,"step" : 1}]}]}]} ]}
# RTL Port declarations: 
set portNum 51
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ sa_pe_li_address0 sc_out sc_lv 2 signal 0 } 
	{ sa_pe_li_ce0 sc_out sc_logic 1 signal 0 } 
	{ sa_pe_li_we0 sc_out sc_logic 1 signal 0 } 
	{ sa_pe_li_d0 sc_out sc_lv 32 signal 0 } 
	{ sa_pe_li_q0 sc_in sc_lv 32 signal 0 } 
	{ sa_pe_tw_address0 sc_out sc_lv 2 signal 1 } 
	{ sa_pe_tw_ce0 sc_out sc_logic 1 signal 1 } 
	{ sa_pe_tw_we0 sc_out sc_logic 1 signal 1 } 
	{ sa_pe_tw_d0 sc_out sc_lv 32 signal 1 } 
	{ sa_pe_tw_q0 sc_in sc_lv 32 signal 1 } 
	{ sa_pe_ri_address0 sc_out sc_lv 2 signal 2 } 
	{ sa_pe_ri_ce0 sc_out sc_logic 1 signal 2 } 
	{ sa_pe_ri_we0 sc_out sc_logic 1 signal 2 } 
	{ sa_pe_ri_d0 sc_out sc_lv 32 signal 2 } 
	{ sa_pe_ri_q0 sc_in sc_lv 32 signal 2 } 
	{ sa_pe_bw_address0 sc_out sc_lv 2 signal 3 } 
	{ sa_pe_bw_ce0 sc_out sc_logic 1 signal 3 } 
	{ sa_pe_bw_we0 sc_out sc_logic 1 signal 3 } 
	{ sa_pe_bw_d0 sc_out sc_lv 32 signal 3 } 
	{ sa_pe_bw_q0 sc_in sc_lv 32 signal 3 } 
	{ sa_pe_ba_address0 sc_out sc_lv 2 signal 4 } 
	{ sa_pe_ba_ce0 sc_out sc_logic 1 signal 4 } 
	{ sa_pe_ba_we0 sc_out sc_logic 1 signal 4 } 
	{ sa_pe_ba_d0 sc_out sc_lv 32 signal 4 } 
	{ sa_pe_ba_q0 sc_in sc_lv 32 signal 4 } 
	{ sa_buffer_a_li_ready_address0 sc_out sc_lv 1 signal 5 } 
	{ sa_buffer_a_li_ready_ce0 sc_out sc_logic 1 signal 5 } 
	{ sa_buffer_a_li_ready_we0 sc_out sc_logic 1 signal 5 } 
	{ sa_buffer_a_li_ready_d0 sc_out sc_lv 1 signal 5 } 
	{ sa_buffer_a_li_ready_q0 sc_in sc_lv 1 signal 5 } 
	{ sa_buffer_a_li_value_address0 sc_out sc_lv 1 signal 6 } 
	{ sa_buffer_a_li_value_ce0 sc_out sc_logic 1 signal 6 } 
	{ sa_buffer_a_li_value_q0 sc_in sc_lv 32 signal 6 } 
	{ sa_buffer_b_tw_ready_address0 sc_out sc_lv 1 signal 7 } 
	{ sa_buffer_b_tw_ready_ce0 sc_out sc_logic 1 signal 7 } 
	{ sa_buffer_b_tw_ready_we0 sc_out sc_logic 1 signal 7 } 
	{ sa_buffer_b_tw_ready_d0 sc_out sc_lv 1 signal 7 } 
	{ sa_buffer_b_tw_ready_q0 sc_in sc_lv 1 signal 7 } 
	{ sa_buffer_b_tw_value_address0 sc_out sc_lv 1 signal 8 } 
	{ sa_buffer_b_tw_value_ce0 sc_out sc_logic 1 signal 8 } 
	{ sa_buffer_b_tw_value_q0 sc_in sc_lv 32 signal 8 } 
	{ sa_ba_sa_address0 sc_out sc_lv 2 signal 9 } 
	{ sa_ba_sa_ce0 sc_out sc_logic 1 signal 9 } 
	{ sa_ba_sa_we0 sc_out sc_logic 1 signal 9 } 
	{ sa_ba_sa_d0 sc_out sc_lv 32 signal 9 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "sa_pe_li_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "sa_pe_li", "role": "address0" }} , 
 	{ "name": "sa_pe_li_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "sa_pe_li", "role": "ce0" }} , 
 	{ "name": "sa_pe_li_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "sa_pe_li", "role": "we0" }} , 
 	{ "name": "sa_pe_li_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "sa_pe_li", "role": "d0" }} , 
 	{ "name": "sa_pe_li_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "sa_pe_li", "role": "q0" }} , 
 	{ "name": "sa_pe_tw_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "sa_pe_tw", "role": "address0" }} , 
 	{ "name": "sa_pe_tw_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "sa_pe_tw", "role": "ce0" }} , 
 	{ "name": "sa_pe_tw_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "sa_pe_tw", "role": "we0" }} , 
 	{ "name": "sa_pe_tw_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "sa_pe_tw", "role": "d0" }} , 
 	{ "name": "sa_pe_tw_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "sa_pe_tw", "role": "q0" }} , 
 	{ "name": "sa_pe_ri_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "sa_pe_ri", "role": "address0" }} , 
 	{ "name": "sa_pe_ri_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "sa_pe_ri", "role": "ce0" }} , 
 	{ "name": "sa_pe_ri_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "sa_pe_ri", "role": "we0" }} , 
 	{ "name": "sa_pe_ri_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "sa_pe_ri", "role": "d0" }} , 
 	{ "name": "sa_pe_ri_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "sa_pe_ri", "role": "q0" }} , 
 	{ "name": "sa_pe_bw_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "sa_pe_bw", "role": "address0" }} , 
 	{ "name": "sa_pe_bw_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "sa_pe_bw", "role": "ce0" }} , 
 	{ "name": "sa_pe_bw_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "sa_pe_bw", "role": "we0" }} , 
 	{ "name": "sa_pe_bw_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "sa_pe_bw", "role": "d0" }} , 
 	{ "name": "sa_pe_bw_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "sa_pe_bw", "role": "q0" }} , 
 	{ "name": "sa_pe_ba_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "sa_pe_ba", "role": "address0" }} , 
 	{ "name": "sa_pe_ba_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "sa_pe_ba", "role": "ce0" }} , 
 	{ "name": "sa_pe_ba_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "sa_pe_ba", "role": "we0" }} , 
 	{ "name": "sa_pe_ba_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "sa_pe_ba", "role": "d0" }} , 
 	{ "name": "sa_pe_ba_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "sa_pe_ba", "role": "q0" }} , 
 	{ "name": "sa_buffer_a_li_ready_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "sa_buffer_a_li_ready", "role": "address0" }} , 
 	{ "name": "sa_buffer_a_li_ready_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "sa_buffer_a_li_ready", "role": "ce0" }} , 
 	{ "name": "sa_buffer_a_li_ready_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "sa_buffer_a_li_ready", "role": "we0" }} , 
 	{ "name": "sa_buffer_a_li_ready_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "sa_buffer_a_li_ready", "role": "d0" }} , 
 	{ "name": "sa_buffer_a_li_ready_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "sa_buffer_a_li_ready", "role": "q0" }} , 
 	{ "name": "sa_buffer_a_li_value_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "sa_buffer_a_li_value", "role": "address0" }} , 
 	{ "name": "sa_buffer_a_li_value_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "sa_buffer_a_li_value", "role": "ce0" }} , 
 	{ "name": "sa_buffer_a_li_value_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "sa_buffer_a_li_value", "role": "q0" }} , 
 	{ "name": "sa_buffer_b_tw_ready_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "sa_buffer_b_tw_ready", "role": "address0" }} , 
 	{ "name": "sa_buffer_b_tw_ready_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "sa_buffer_b_tw_ready", "role": "ce0" }} , 
 	{ "name": "sa_buffer_b_tw_ready_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "sa_buffer_b_tw_ready", "role": "we0" }} , 
 	{ "name": "sa_buffer_b_tw_ready_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "sa_buffer_b_tw_ready", "role": "d0" }} , 
 	{ "name": "sa_buffer_b_tw_ready_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "sa_buffer_b_tw_ready", "role": "q0" }} , 
 	{ "name": "sa_buffer_b_tw_value_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "sa_buffer_b_tw_value", "role": "address0" }} , 
 	{ "name": "sa_buffer_b_tw_value_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "sa_buffer_b_tw_value", "role": "ce0" }} , 
 	{ "name": "sa_buffer_b_tw_value_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "sa_buffer_b_tw_value", "role": "q0" }} , 
 	{ "name": "sa_ba_sa_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "sa_ba_sa", "role": "address0" }} , 
 	{ "name": "sa_ba_sa_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "sa_ba_sa", "role": "ce0" }} , 
 	{ "name": "sa_ba_sa_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "sa_ba_sa", "role": "we0" }} , 
 	{ "name": "sa_ba_sa_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "sa_ba_sa", "role": "d0" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "",
		"CDFG" : "sa_compute",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "4", "EstimateLatencyMax" : "66",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "sa_pe_li", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "sa_pe_tw", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "sa_pe_ri", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "sa_pe_bw", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "sa_pe_ba", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "sa_buffer_a_li_ready", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "sa_buffer_a_li_value", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "sa_buffer_b_tw_ready", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "sa_buffer_b_tw_value", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "sa_ba_sa", "Type" : "Memory", "Direction" : "O"}]}]}


set ArgLastReadFirstWriteLatency {
	sa_compute {
		sa_pe_li {Type IO LastRead 8 FirstWrite 4}
		sa_pe_tw {Type IO LastRead 8 FirstWrite 5}
		sa_pe_ri {Type IO LastRead 5 FirstWrite 9}
		sa_pe_bw {Type IO LastRead 6 FirstWrite 9}
		sa_pe_ba {Type IO LastRead 10 FirstWrite 11}
		sa_buffer_a_li_ready {Type IO LastRead 1 FirstWrite 3}
		sa_buffer_a_li_value {Type I LastRead 3 FirstWrite -1}
		sa_buffer_b_tw_ready {Type IO LastRead 2 FirstWrite 5}
		sa_buffer_b_tw_value {Type I LastRead 4 FirstWrite -1}
		sa_ba_sa {Type O LastRead -1 FirstWrite 10}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "4", "Max" : "66"}
	, {"Name" : "Interval", "Min" : "5", "Max" : "67"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	sa_pe_li { ap_memory {  { sa_pe_li_address0 mem_address 1 2 }  { sa_pe_li_ce0 mem_ce 1 1 }  { sa_pe_li_we0 mem_we 1 1 }  { sa_pe_li_d0 mem_din 1 32 }  { sa_pe_li_q0 mem_dout 0 32 } } }
	sa_pe_tw { ap_memory {  { sa_pe_tw_address0 mem_address 1 2 }  { sa_pe_tw_ce0 mem_ce 1 1 }  { sa_pe_tw_we0 mem_we 1 1 }  { sa_pe_tw_d0 mem_din 1 32 }  { sa_pe_tw_q0 mem_dout 0 32 } } }
	sa_pe_ri { ap_memory {  { sa_pe_ri_address0 mem_address 1 2 }  { sa_pe_ri_ce0 mem_ce 1 1 }  { sa_pe_ri_we0 mem_we 1 1 }  { sa_pe_ri_d0 mem_din 1 32 }  { sa_pe_ri_q0 mem_dout 0 32 } } }
	sa_pe_bw { ap_memory {  { sa_pe_bw_address0 mem_address 1 2 }  { sa_pe_bw_ce0 mem_ce 1 1 }  { sa_pe_bw_we0 mem_we 1 1 }  { sa_pe_bw_d0 mem_din 1 32 }  { sa_pe_bw_q0 mem_dout 0 32 } } }
	sa_pe_ba { ap_memory {  { sa_pe_ba_address0 mem_address 1 2 }  { sa_pe_ba_ce0 mem_ce 1 1 }  { sa_pe_ba_we0 mem_we 1 1 }  { sa_pe_ba_d0 mem_din 1 32 }  { sa_pe_ba_q0 mem_dout 0 32 } } }
	sa_buffer_a_li_ready { ap_memory {  { sa_buffer_a_li_ready_address0 mem_address 1 1 }  { sa_buffer_a_li_ready_ce0 mem_ce 1 1 }  { sa_buffer_a_li_ready_we0 mem_we 1 1 }  { sa_buffer_a_li_ready_d0 mem_din 1 1 }  { sa_buffer_a_li_ready_q0 mem_dout 0 1 } } }
	sa_buffer_a_li_value { ap_memory {  { sa_buffer_a_li_value_address0 mem_address 1 1 }  { sa_buffer_a_li_value_ce0 mem_ce 1 1 }  { sa_buffer_a_li_value_q0 mem_dout 0 32 } } }
	sa_buffer_b_tw_ready { ap_memory {  { sa_buffer_b_tw_ready_address0 mem_address 1 1 }  { sa_buffer_b_tw_ready_ce0 mem_ce 1 1 }  { sa_buffer_b_tw_ready_we0 mem_we 1 1 }  { sa_buffer_b_tw_ready_d0 mem_din 1 1 }  { sa_buffer_b_tw_ready_q0 mem_dout 0 1 } } }
	sa_buffer_b_tw_value { ap_memory {  { sa_buffer_b_tw_value_address0 mem_address 1 1 }  { sa_buffer_b_tw_value_ce0 mem_ce 1 1 }  { sa_buffer_b_tw_value_q0 mem_dout 0 32 } } }
	sa_ba_sa { ap_memory {  { sa_ba_sa_address0 mem_address 1 2 }  { sa_ba_sa_ce0 mem_ce 1 1 }  { sa_ba_sa_we0 mem_we 1 1 }  { sa_ba_sa_d0 mem_din 1 32 } } }
}

set busDeadlockParameterList { 
}

# RTL port scheduling information:
set fifoSchedulingInfoList { 
}

# RTL bus port read request latency information:
set busReadReqLatencyList { 
}

# RTL bus port write response latency information:
set busWriteResLatencyList { 
}

# RTL array port load latency information:
set memoryLoadLatencyList { 
}
