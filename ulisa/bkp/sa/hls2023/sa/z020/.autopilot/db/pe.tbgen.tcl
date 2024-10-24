set moduleName pe
set isTopModule 1
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
set C_modelName {pe}
set C_modelType { void 0 }
set C_modelArgList {
	{ SLI_AXIS_V_data_V int 8 regular {axi_s 0 volatile  { SLI_AXIS Data } }  }
	{ SLI_AXIS_V_keep_V int 1 regular {axi_s 0 volatile  { SLI_AXIS Keep } }  }
	{ SLI_AXIS_V_strb_V int 1 regular {axi_s 0 volatile  { SLI_AXIS Strb } }  }
	{ SLI_AXIS_V_user_V int 4 regular {axi_s 0 volatile  { SLI_AXIS User } }  }
	{ SLI_AXIS_V_last_V int 1 regular {axi_s 0 volatile  { SLI_AXIS Last } }  }
	{ SLI_AXIS_V_id_V int 5 regular {axi_s 0 volatile  { SLI_AXIS ID } }  }
	{ SLI_AXIS_V_dest_V int 5 regular {axi_s 0 volatile  { SLI_AXIS Dest } }  }
	{ MRI_AXIS_V_data_V int 8 regular {axi_s 1 volatile  { MRI_AXIS Data } }  }
	{ MRI_AXIS_V_keep_V int 1 regular {axi_s 1 volatile  { MRI_AXIS Keep } }  }
	{ MRI_AXIS_V_strb_V int 1 regular {axi_s 1 volatile  { MRI_AXIS Strb } }  }
	{ MRI_AXIS_V_user_V int 4 regular {axi_s 1 volatile  { MRI_AXIS User } }  }
	{ MRI_AXIS_V_last_V int 1 regular {axi_s 1 volatile  { MRI_AXIS Last } }  }
	{ MRI_AXIS_V_id_V int 5 regular {axi_s 1 volatile  { MRI_AXIS ID } }  }
	{ MRI_AXIS_V_dest_V int 5 regular {axi_s 1 volatile  { MRI_AXIS Dest } }  }
	{ STW_AXIS_V_data_V int 8 regular {axi_s 0 volatile  { STW_AXIS Data } }  }
	{ STW_AXIS_V_keep_V int 1 regular {axi_s 0 volatile  { STW_AXIS Keep } }  }
	{ STW_AXIS_V_strb_V int 1 regular {axi_s 0 volatile  { STW_AXIS Strb } }  }
	{ STW_AXIS_V_user_V int 4 regular {axi_s 0 volatile  { STW_AXIS User } }  }
	{ STW_AXIS_V_last_V int 1 regular {axi_s 0 volatile  { STW_AXIS Last } }  }
	{ STW_AXIS_V_id_V int 5 regular {axi_s 0 volatile  { STW_AXIS ID } }  }
	{ STW_AXIS_V_dest_V int 5 regular {axi_s 0 volatile  { STW_AXIS Dest } }  }
	{ MBW_AXIS_V_data_V int 8 regular {axi_s 1 volatile  { MBW_AXIS Data } }  }
	{ MBW_AXIS_V_keep_V int 1 regular {axi_s 1 volatile  { MBW_AXIS Keep } }  }
	{ MBW_AXIS_V_strb_V int 1 regular {axi_s 1 volatile  { MBW_AXIS Strb } }  }
	{ MBW_AXIS_V_user_V int 4 regular {axi_s 1 volatile  { MBW_AXIS User } }  }
	{ MBW_AXIS_V_last_V int 1 regular {axi_s 1 volatile  { MBW_AXIS Last } }  }
	{ MBW_AXIS_V_id_V int 5 regular {axi_s 1 volatile  { MBW_AXIS ID } }  }
	{ MBW_AXIS_V_dest_V int 5 regular {axi_s 1 volatile  { MBW_AXIS Dest } }  }
	{ STA_AXIS_V_data_V int 16 regular {axi_s 0 volatile  { STA_AXIS Data } }  }
	{ STA_AXIS_V_keep_V int 2 regular {axi_s 0 volatile  { STA_AXIS Keep } }  }
	{ STA_AXIS_V_strb_V int 2 regular {axi_s 0 volatile  { STA_AXIS Strb } }  }
	{ STA_AXIS_V_user_V int 4 regular {axi_s 0 volatile  { STA_AXIS User } }  }
	{ STA_AXIS_V_last_V int 1 regular {axi_s 0 volatile  { STA_AXIS Last } }  }
	{ STA_AXIS_V_id_V int 5 regular {axi_s 0 volatile  { STA_AXIS ID } }  }
	{ STA_AXIS_V_dest_V int 5 regular {axi_s 0 volatile  { STA_AXIS Dest } }  }
	{ MBA_AXIS_V_data_V int 16 regular {axi_s 1 volatile  { MBA_AXIS Data } }  }
	{ MBA_AXIS_V_keep_V int 2 regular {axi_s 1 volatile  { MBA_AXIS Keep } }  }
	{ MBA_AXIS_V_strb_V int 2 regular {axi_s 1 volatile  { MBA_AXIS Strb } }  }
	{ MBA_AXIS_V_user_V int 4 regular {axi_s 1 volatile  { MBA_AXIS User } }  }
	{ MBA_AXIS_V_last_V int 1 regular {axi_s 1 volatile  { MBA_AXIS Last } }  }
	{ MBA_AXIS_V_id_V int 5 regular {axi_s 1 volatile  { MBA_AXIS ID } }  }
	{ MBA_AXIS_V_dest_V int 5 regular {axi_s 1 volatile  { MBA_AXIS Dest } }  }
}
set hasAXIMCache 0
set AXIMCacheInstList { }
set C_modelArgMapList {[ 
	{ "Name" : "SLI_AXIS_V_data_V", "interface" : "axis", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "SLI_AXIS_V_keep_V", "interface" : "axis", "bitwidth" : 1, "direction" : "READONLY"} , 
 	{ "Name" : "SLI_AXIS_V_strb_V", "interface" : "axis", "bitwidth" : 1, "direction" : "READONLY"} , 
 	{ "Name" : "SLI_AXIS_V_user_V", "interface" : "axis", "bitwidth" : 4, "direction" : "READONLY"} , 
 	{ "Name" : "SLI_AXIS_V_last_V", "interface" : "axis", "bitwidth" : 1, "direction" : "READONLY"} , 
 	{ "Name" : "SLI_AXIS_V_id_V", "interface" : "axis", "bitwidth" : 5, "direction" : "READONLY"} , 
 	{ "Name" : "SLI_AXIS_V_dest_V", "interface" : "axis", "bitwidth" : 5, "direction" : "READONLY"} , 
 	{ "Name" : "MRI_AXIS_V_data_V", "interface" : "axis", "bitwidth" : 8, "direction" : "WRITEONLY"} , 
 	{ "Name" : "MRI_AXIS_V_keep_V", "interface" : "axis", "bitwidth" : 1, "direction" : "WRITEONLY"} , 
 	{ "Name" : "MRI_AXIS_V_strb_V", "interface" : "axis", "bitwidth" : 1, "direction" : "WRITEONLY"} , 
 	{ "Name" : "MRI_AXIS_V_user_V", "interface" : "axis", "bitwidth" : 4, "direction" : "WRITEONLY"} , 
 	{ "Name" : "MRI_AXIS_V_last_V", "interface" : "axis", "bitwidth" : 1, "direction" : "WRITEONLY"} , 
 	{ "Name" : "MRI_AXIS_V_id_V", "interface" : "axis", "bitwidth" : 5, "direction" : "WRITEONLY"} , 
 	{ "Name" : "MRI_AXIS_V_dest_V", "interface" : "axis", "bitwidth" : 5, "direction" : "WRITEONLY"} , 
 	{ "Name" : "STW_AXIS_V_data_V", "interface" : "axis", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "STW_AXIS_V_keep_V", "interface" : "axis", "bitwidth" : 1, "direction" : "READONLY"} , 
 	{ "Name" : "STW_AXIS_V_strb_V", "interface" : "axis", "bitwidth" : 1, "direction" : "READONLY"} , 
 	{ "Name" : "STW_AXIS_V_user_V", "interface" : "axis", "bitwidth" : 4, "direction" : "READONLY"} , 
 	{ "Name" : "STW_AXIS_V_last_V", "interface" : "axis", "bitwidth" : 1, "direction" : "READONLY"} , 
 	{ "Name" : "STW_AXIS_V_id_V", "interface" : "axis", "bitwidth" : 5, "direction" : "READONLY"} , 
 	{ "Name" : "STW_AXIS_V_dest_V", "interface" : "axis", "bitwidth" : 5, "direction" : "READONLY"} , 
 	{ "Name" : "MBW_AXIS_V_data_V", "interface" : "axis", "bitwidth" : 8, "direction" : "WRITEONLY"} , 
 	{ "Name" : "MBW_AXIS_V_keep_V", "interface" : "axis", "bitwidth" : 1, "direction" : "WRITEONLY"} , 
 	{ "Name" : "MBW_AXIS_V_strb_V", "interface" : "axis", "bitwidth" : 1, "direction" : "WRITEONLY"} , 
 	{ "Name" : "MBW_AXIS_V_user_V", "interface" : "axis", "bitwidth" : 4, "direction" : "WRITEONLY"} , 
 	{ "Name" : "MBW_AXIS_V_last_V", "interface" : "axis", "bitwidth" : 1, "direction" : "WRITEONLY"} , 
 	{ "Name" : "MBW_AXIS_V_id_V", "interface" : "axis", "bitwidth" : 5, "direction" : "WRITEONLY"} , 
 	{ "Name" : "MBW_AXIS_V_dest_V", "interface" : "axis", "bitwidth" : 5, "direction" : "WRITEONLY"} , 
 	{ "Name" : "STA_AXIS_V_data_V", "interface" : "axis", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "STA_AXIS_V_keep_V", "interface" : "axis", "bitwidth" : 2, "direction" : "READONLY"} , 
 	{ "Name" : "STA_AXIS_V_strb_V", "interface" : "axis", "bitwidth" : 2, "direction" : "READONLY"} , 
 	{ "Name" : "STA_AXIS_V_user_V", "interface" : "axis", "bitwidth" : 4, "direction" : "READONLY"} , 
 	{ "Name" : "STA_AXIS_V_last_V", "interface" : "axis", "bitwidth" : 1, "direction" : "READONLY"} , 
 	{ "Name" : "STA_AXIS_V_id_V", "interface" : "axis", "bitwidth" : 5, "direction" : "READONLY"} , 
 	{ "Name" : "STA_AXIS_V_dest_V", "interface" : "axis", "bitwidth" : 5, "direction" : "READONLY"} , 
 	{ "Name" : "MBA_AXIS_V_data_V", "interface" : "axis", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "MBA_AXIS_V_keep_V", "interface" : "axis", "bitwidth" : 2, "direction" : "WRITEONLY"} , 
 	{ "Name" : "MBA_AXIS_V_strb_V", "interface" : "axis", "bitwidth" : 2, "direction" : "WRITEONLY"} , 
 	{ "Name" : "MBA_AXIS_V_user_V", "interface" : "axis", "bitwidth" : 4, "direction" : "WRITEONLY"} , 
 	{ "Name" : "MBA_AXIS_V_last_V", "interface" : "axis", "bitwidth" : 1, "direction" : "WRITEONLY"} , 
 	{ "Name" : "MBA_AXIS_V_id_V", "interface" : "axis", "bitwidth" : 5, "direction" : "WRITEONLY"} , 
 	{ "Name" : "MBA_AXIS_V_dest_V", "interface" : "axis", "bitwidth" : 5, "direction" : "WRITEONLY"} ]}
# RTL Port declarations: 
set portNum 74
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst_n sc_in sc_logic 1 reset -1 active_low_sync } 
	{ SLI_AXIS_TDATA sc_in sc_lv 8 signal 0 } 
	{ SLI_AXIS_TVALID sc_in sc_logic 1 invld 6 } 
	{ SLI_AXIS_TREADY sc_out sc_logic 1 inacc 6 } 
	{ SLI_AXIS_TKEEP sc_in sc_lv 1 signal 1 } 
	{ SLI_AXIS_TSTRB sc_in sc_lv 1 signal 2 } 
	{ SLI_AXIS_TUSER sc_in sc_lv 4 signal 3 } 
	{ SLI_AXIS_TLAST sc_in sc_lv 1 signal 4 } 
	{ SLI_AXIS_TID sc_in sc_lv 5 signal 5 } 
	{ SLI_AXIS_TDEST sc_in sc_lv 5 signal 6 } 
	{ MRI_AXIS_TDATA sc_out sc_lv 8 signal 7 } 
	{ MRI_AXIS_TVALID sc_out sc_logic 1 outvld 13 } 
	{ MRI_AXIS_TREADY sc_in sc_logic 1 outacc 13 } 
	{ MRI_AXIS_TKEEP sc_out sc_lv 1 signal 8 } 
	{ MRI_AXIS_TSTRB sc_out sc_lv 1 signal 9 } 
	{ MRI_AXIS_TUSER sc_out sc_lv 4 signal 10 } 
	{ MRI_AXIS_TLAST sc_out sc_lv 1 signal 11 } 
	{ MRI_AXIS_TID sc_out sc_lv 5 signal 12 } 
	{ MRI_AXIS_TDEST sc_out sc_lv 5 signal 13 } 
	{ STW_AXIS_TDATA sc_in sc_lv 8 signal 14 } 
	{ STW_AXIS_TVALID sc_in sc_logic 1 invld 20 } 
	{ STW_AXIS_TREADY sc_out sc_logic 1 inacc 20 } 
	{ STW_AXIS_TKEEP sc_in sc_lv 1 signal 15 } 
	{ STW_AXIS_TSTRB sc_in sc_lv 1 signal 16 } 
	{ STW_AXIS_TUSER sc_in sc_lv 4 signal 17 } 
	{ STW_AXIS_TLAST sc_in sc_lv 1 signal 18 } 
	{ STW_AXIS_TID sc_in sc_lv 5 signal 19 } 
	{ STW_AXIS_TDEST sc_in sc_lv 5 signal 20 } 
	{ MBW_AXIS_TDATA sc_out sc_lv 8 signal 21 } 
	{ MBW_AXIS_TVALID sc_out sc_logic 1 outvld 27 } 
	{ MBW_AXIS_TREADY sc_in sc_logic 1 outacc 27 } 
	{ MBW_AXIS_TKEEP sc_out sc_lv 1 signal 22 } 
	{ MBW_AXIS_TSTRB sc_out sc_lv 1 signal 23 } 
	{ MBW_AXIS_TUSER sc_out sc_lv 4 signal 24 } 
	{ MBW_AXIS_TLAST sc_out sc_lv 1 signal 25 } 
	{ MBW_AXIS_TID sc_out sc_lv 5 signal 26 } 
	{ MBW_AXIS_TDEST sc_out sc_lv 5 signal 27 } 
	{ STA_AXIS_TDATA sc_in sc_lv 16 signal 28 } 
	{ STA_AXIS_TVALID sc_in sc_logic 1 invld 34 } 
	{ STA_AXIS_TREADY sc_out sc_logic 1 inacc 34 } 
	{ STA_AXIS_TKEEP sc_in sc_lv 2 signal 29 } 
	{ STA_AXIS_TSTRB sc_in sc_lv 2 signal 30 } 
	{ STA_AXIS_TUSER sc_in sc_lv 4 signal 31 } 
	{ STA_AXIS_TLAST sc_in sc_lv 1 signal 32 } 
	{ STA_AXIS_TID sc_in sc_lv 5 signal 33 } 
	{ STA_AXIS_TDEST sc_in sc_lv 5 signal 34 } 
	{ MBA_AXIS_TDATA sc_out sc_lv 16 signal 35 } 
	{ MBA_AXIS_TVALID sc_out sc_logic 1 outvld 41 } 
	{ MBA_AXIS_TREADY sc_in sc_logic 1 outacc 41 } 
	{ MBA_AXIS_TKEEP sc_out sc_lv 2 signal 36 } 
	{ MBA_AXIS_TSTRB sc_out sc_lv 2 signal 37 } 
	{ MBA_AXIS_TUSER sc_out sc_lv 4 signal 38 } 
	{ MBA_AXIS_TLAST sc_out sc_lv 1 signal 39 } 
	{ MBA_AXIS_TID sc_out sc_lv 5 signal 40 } 
	{ MBA_AXIS_TDEST sc_out sc_lv 5 signal 41 } 
	{ s_axi_CONTROL_AWVALID sc_in sc_logic 1 signal -1 } 
	{ s_axi_CONTROL_AWREADY sc_out sc_logic 1 signal -1 } 
	{ s_axi_CONTROL_AWADDR sc_in sc_lv 4 signal -1 } 
	{ s_axi_CONTROL_WVALID sc_in sc_logic 1 signal -1 } 
	{ s_axi_CONTROL_WREADY sc_out sc_logic 1 signal -1 } 
	{ s_axi_CONTROL_WDATA sc_in sc_lv 32 signal -1 } 
	{ s_axi_CONTROL_WSTRB sc_in sc_lv 4 signal -1 } 
	{ s_axi_CONTROL_ARVALID sc_in sc_logic 1 signal -1 } 
	{ s_axi_CONTROL_ARREADY sc_out sc_logic 1 signal -1 } 
	{ s_axi_CONTROL_ARADDR sc_in sc_lv 4 signal -1 } 
	{ s_axi_CONTROL_RVALID sc_out sc_logic 1 signal -1 } 
	{ s_axi_CONTROL_RREADY sc_in sc_logic 1 signal -1 } 
	{ s_axi_CONTROL_RDATA sc_out sc_lv 32 signal -1 } 
	{ s_axi_CONTROL_RRESP sc_out sc_lv 2 signal -1 } 
	{ s_axi_CONTROL_BVALID sc_out sc_logic 1 signal -1 } 
	{ s_axi_CONTROL_BREADY sc_in sc_logic 1 signal -1 } 
	{ s_axi_CONTROL_BRESP sc_out sc_lv 2 signal -1 } 
	{ interrupt sc_out sc_logic 1 signal -1 } 
}
set NewPortList {[ 
	{ "name": "s_axi_CONTROL_AWADDR", "direction": "in", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "CONTROL", "role": "AWADDR" },"address":[{"name":"pe","role":"start","value":"0","valid_bit":"0"},{"name":"pe","role":"continue","value":"0","valid_bit":"4"},{"name":"pe","role":"auto_start","value":"0","valid_bit":"7"}] },
	{ "name": "s_axi_CONTROL_AWVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "CONTROL", "role": "AWVALID" } },
	{ "name": "s_axi_CONTROL_AWREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "CONTROL", "role": "AWREADY" } },
	{ "name": "s_axi_CONTROL_WVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "CONTROL", "role": "WVALID" } },
	{ "name": "s_axi_CONTROL_WREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "CONTROL", "role": "WREADY" } },
	{ "name": "s_axi_CONTROL_WDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "CONTROL", "role": "WDATA" } },
	{ "name": "s_axi_CONTROL_WSTRB", "direction": "in", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "CONTROL", "role": "WSTRB" } },
	{ "name": "s_axi_CONTROL_ARADDR", "direction": "in", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "CONTROL", "role": "ARADDR" },"address":[{"name":"pe","role":"start","value":"0","valid_bit":"0"},{"name":"pe","role":"done","value":"0","valid_bit":"1"},{"name":"pe","role":"idle","value":"0","valid_bit":"2"},{"name":"pe","role":"ready","value":"0","valid_bit":"3"},{"name":"pe","role":"auto_start","value":"0","valid_bit":"7"}] },
	{ "name": "s_axi_CONTROL_ARVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "CONTROL", "role": "ARVALID" } },
	{ "name": "s_axi_CONTROL_ARREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "CONTROL", "role": "ARREADY" } },
	{ "name": "s_axi_CONTROL_RVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "CONTROL", "role": "RVALID" } },
	{ "name": "s_axi_CONTROL_RREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "CONTROL", "role": "RREADY" } },
	{ "name": "s_axi_CONTROL_RDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "CONTROL", "role": "RDATA" } },
	{ "name": "s_axi_CONTROL_RRESP", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "CONTROL", "role": "RRESP" } },
	{ "name": "s_axi_CONTROL_BVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "CONTROL", "role": "BVALID" } },
	{ "name": "s_axi_CONTROL_BREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "CONTROL", "role": "BREADY" } },
	{ "name": "s_axi_CONTROL_BRESP", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "CONTROL", "role": "BRESP" } },
	{ "name": "interrupt", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "CONTROL", "role": "interrupt" } }, 
 	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst_n", "role": "default" }} , 
 	{ "name": "SLI_AXIS_TDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "SLI_AXIS_V_data_V", "role": "default" }} , 
 	{ "name": "SLI_AXIS_TVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "invld", "bundle":{"name": "SLI_AXIS_V_dest_V", "role": "default" }} , 
 	{ "name": "SLI_AXIS_TREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "inacc", "bundle":{"name": "SLI_AXIS_V_dest_V", "role": "default" }} , 
 	{ "name": "SLI_AXIS_TKEEP", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "SLI_AXIS_V_keep_V", "role": "default" }} , 
 	{ "name": "SLI_AXIS_TSTRB", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "SLI_AXIS_V_strb_V", "role": "default" }} , 
 	{ "name": "SLI_AXIS_TUSER", "direction": "in", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "SLI_AXIS_V_user_V", "role": "default" }} , 
 	{ "name": "SLI_AXIS_TLAST", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "SLI_AXIS_V_last_V", "role": "default" }} , 
 	{ "name": "SLI_AXIS_TID", "direction": "in", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "SLI_AXIS_V_id_V", "role": "default" }} , 
 	{ "name": "SLI_AXIS_TDEST", "direction": "in", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "SLI_AXIS_V_dest_V", "role": "default" }} , 
 	{ "name": "MRI_AXIS_TDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "MRI_AXIS_V_data_V", "role": "default" }} , 
 	{ "name": "MRI_AXIS_TVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "MRI_AXIS_V_dest_V", "role": "default" }} , 
 	{ "name": "MRI_AXIS_TREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "outacc", "bundle":{"name": "MRI_AXIS_V_dest_V", "role": "default" }} , 
 	{ "name": "MRI_AXIS_TKEEP", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "MRI_AXIS_V_keep_V", "role": "default" }} , 
 	{ "name": "MRI_AXIS_TSTRB", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "MRI_AXIS_V_strb_V", "role": "default" }} , 
 	{ "name": "MRI_AXIS_TUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "MRI_AXIS_V_user_V", "role": "default" }} , 
 	{ "name": "MRI_AXIS_TLAST", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "MRI_AXIS_V_last_V", "role": "default" }} , 
 	{ "name": "MRI_AXIS_TID", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "MRI_AXIS_V_id_V", "role": "default" }} , 
 	{ "name": "MRI_AXIS_TDEST", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "MRI_AXIS_V_dest_V", "role": "default" }} , 
 	{ "name": "STW_AXIS_TDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "STW_AXIS_V_data_V", "role": "default" }} , 
 	{ "name": "STW_AXIS_TVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "invld", "bundle":{"name": "STW_AXIS_V_dest_V", "role": "default" }} , 
 	{ "name": "STW_AXIS_TREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "inacc", "bundle":{"name": "STW_AXIS_V_dest_V", "role": "default" }} , 
 	{ "name": "STW_AXIS_TKEEP", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "STW_AXIS_V_keep_V", "role": "default" }} , 
 	{ "name": "STW_AXIS_TSTRB", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "STW_AXIS_V_strb_V", "role": "default" }} , 
 	{ "name": "STW_AXIS_TUSER", "direction": "in", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "STW_AXIS_V_user_V", "role": "default" }} , 
 	{ "name": "STW_AXIS_TLAST", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "STW_AXIS_V_last_V", "role": "default" }} , 
 	{ "name": "STW_AXIS_TID", "direction": "in", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "STW_AXIS_V_id_V", "role": "default" }} , 
 	{ "name": "STW_AXIS_TDEST", "direction": "in", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "STW_AXIS_V_dest_V", "role": "default" }} , 
 	{ "name": "MBW_AXIS_TDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "MBW_AXIS_V_data_V", "role": "default" }} , 
 	{ "name": "MBW_AXIS_TVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "MBW_AXIS_V_dest_V", "role": "default" }} , 
 	{ "name": "MBW_AXIS_TREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "outacc", "bundle":{"name": "MBW_AXIS_V_dest_V", "role": "default" }} , 
 	{ "name": "MBW_AXIS_TKEEP", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "MBW_AXIS_V_keep_V", "role": "default" }} , 
 	{ "name": "MBW_AXIS_TSTRB", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "MBW_AXIS_V_strb_V", "role": "default" }} , 
 	{ "name": "MBW_AXIS_TUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "MBW_AXIS_V_user_V", "role": "default" }} , 
 	{ "name": "MBW_AXIS_TLAST", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "MBW_AXIS_V_last_V", "role": "default" }} , 
 	{ "name": "MBW_AXIS_TID", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "MBW_AXIS_V_id_V", "role": "default" }} , 
 	{ "name": "MBW_AXIS_TDEST", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "MBW_AXIS_V_dest_V", "role": "default" }} , 
 	{ "name": "STA_AXIS_TDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "STA_AXIS_V_data_V", "role": "default" }} , 
 	{ "name": "STA_AXIS_TVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "invld", "bundle":{"name": "STA_AXIS_V_dest_V", "role": "default" }} , 
 	{ "name": "STA_AXIS_TREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "inacc", "bundle":{"name": "STA_AXIS_V_dest_V", "role": "default" }} , 
 	{ "name": "STA_AXIS_TKEEP", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "STA_AXIS_V_keep_V", "role": "default" }} , 
 	{ "name": "STA_AXIS_TSTRB", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "STA_AXIS_V_strb_V", "role": "default" }} , 
 	{ "name": "STA_AXIS_TUSER", "direction": "in", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "STA_AXIS_V_user_V", "role": "default" }} , 
 	{ "name": "STA_AXIS_TLAST", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "STA_AXIS_V_last_V", "role": "default" }} , 
 	{ "name": "STA_AXIS_TID", "direction": "in", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "STA_AXIS_V_id_V", "role": "default" }} , 
 	{ "name": "STA_AXIS_TDEST", "direction": "in", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "STA_AXIS_V_dest_V", "role": "default" }} , 
 	{ "name": "MBA_AXIS_TDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "MBA_AXIS_V_data_V", "role": "default" }} , 
 	{ "name": "MBA_AXIS_TVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "MBA_AXIS_V_dest_V", "role": "default" }} , 
 	{ "name": "MBA_AXIS_TREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "outacc", "bundle":{"name": "MBA_AXIS_V_dest_V", "role": "default" }} , 
 	{ "name": "MBA_AXIS_TKEEP", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "MBA_AXIS_V_keep_V", "role": "default" }} , 
 	{ "name": "MBA_AXIS_TSTRB", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "MBA_AXIS_V_strb_V", "role": "default" }} , 
 	{ "name": "MBA_AXIS_TUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "MBA_AXIS_V_user_V", "role": "default" }} , 
 	{ "name": "MBA_AXIS_TLAST", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "MBA_AXIS_V_last_V", "role": "default" }} , 
 	{ "name": "MBA_AXIS_TID", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "MBA_AXIS_V_id_V", "role": "default" }} , 
 	{ "name": "MBA_AXIS_TDEST", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "MBA_AXIS_V_dest_V", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16", "17", "18", "19", "20", "21", "22", "23", "24", "25", "26", "27", "28", "29", "30", "31", "32", "33", "34", "35", "36", "37", "38", "39", "40", "41", "42", "43", "44"],
		"CDFG" : "pe",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1", "real_start" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "3", "EstimateLatencyMax" : "3",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"IsBlackBox" : "0",
		"Port" : [
			{"Name" : "SLI_AXIS_V_data_V", "Type" : "Axis", "Direction" : "I", "BaseName" : "SLI_AXIS",
				"BlockSignal" : [
					{"Name" : "SLI_AXIS_TDATA_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "SLI_AXIS_V_keep_V", "Type" : "Axis", "Direction" : "I", "BaseName" : "SLI_AXIS"},
			{"Name" : "SLI_AXIS_V_strb_V", "Type" : "Axis", "Direction" : "I", "BaseName" : "SLI_AXIS"},
			{"Name" : "SLI_AXIS_V_user_V", "Type" : "Axis", "Direction" : "I", "BaseName" : "SLI_AXIS"},
			{"Name" : "SLI_AXIS_V_last_V", "Type" : "Axis", "Direction" : "I", "BaseName" : "SLI_AXIS"},
			{"Name" : "SLI_AXIS_V_id_V", "Type" : "Axis", "Direction" : "I", "BaseName" : "SLI_AXIS"},
			{"Name" : "SLI_AXIS_V_dest_V", "Type" : "Axis", "Direction" : "I", "BaseName" : "SLI_AXIS"},
			{"Name" : "MRI_AXIS_V_data_V", "Type" : "Axis", "Direction" : "O", "BaseName" : "MRI_AXIS",
				"BlockSignal" : [
					{"Name" : "MRI_AXIS_TDATA_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "MRI_AXIS_V_keep_V", "Type" : "Axis", "Direction" : "O", "BaseName" : "MRI_AXIS"},
			{"Name" : "MRI_AXIS_V_strb_V", "Type" : "Axis", "Direction" : "O", "BaseName" : "MRI_AXIS"},
			{"Name" : "MRI_AXIS_V_user_V", "Type" : "Axis", "Direction" : "O", "BaseName" : "MRI_AXIS"},
			{"Name" : "MRI_AXIS_V_last_V", "Type" : "Axis", "Direction" : "O", "BaseName" : "MRI_AXIS"},
			{"Name" : "MRI_AXIS_V_id_V", "Type" : "Axis", "Direction" : "O", "BaseName" : "MRI_AXIS"},
			{"Name" : "MRI_AXIS_V_dest_V", "Type" : "Axis", "Direction" : "O", "BaseName" : "MRI_AXIS"},
			{"Name" : "STW_AXIS_V_data_V", "Type" : "Axis", "Direction" : "I", "BaseName" : "STW_AXIS",
				"BlockSignal" : [
					{"Name" : "STW_AXIS_TDATA_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "STW_AXIS_V_keep_V", "Type" : "Axis", "Direction" : "I", "BaseName" : "STW_AXIS"},
			{"Name" : "STW_AXIS_V_strb_V", "Type" : "Axis", "Direction" : "I", "BaseName" : "STW_AXIS"},
			{"Name" : "STW_AXIS_V_user_V", "Type" : "Axis", "Direction" : "I", "BaseName" : "STW_AXIS"},
			{"Name" : "STW_AXIS_V_last_V", "Type" : "Axis", "Direction" : "I", "BaseName" : "STW_AXIS"},
			{"Name" : "STW_AXIS_V_id_V", "Type" : "Axis", "Direction" : "I", "BaseName" : "STW_AXIS"},
			{"Name" : "STW_AXIS_V_dest_V", "Type" : "Axis", "Direction" : "I", "BaseName" : "STW_AXIS"},
			{"Name" : "MBW_AXIS_V_data_V", "Type" : "Axis", "Direction" : "O", "BaseName" : "MBW_AXIS",
				"BlockSignal" : [
					{"Name" : "MBW_AXIS_TDATA_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "MBW_AXIS_V_keep_V", "Type" : "Axis", "Direction" : "O", "BaseName" : "MBW_AXIS"},
			{"Name" : "MBW_AXIS_V_strb_V", "Type" : "Axis", "Direction" : "O", "BaseName" : "MBW_AXIS"},
			{"Name" : "MBW_AXIS_V_user_V", "Type" : "Axis", "Direction" : "O", "BaseName" : "MBW_AXIS"},
			{"Name" : "MBW_AXIS_V_last_V", "Type" : "Axis", "Direction" : "O", "BaseName" : "MBW_AXIS"},
			{"Name" : "MBW_AXIS_V_id_V", "Type" : "Axis", "Direction" : "O", "BaseName" : "MBW_AXIS"},
			{"Name" : "MBW_AXIS_V_dest_V", "Type" : "Axis", "Direction" : "O", "BaseName" : "MBW_AXIS"},
			{"Name" : "STA_AXIS_V_data_V", "Type" : "Axis", "Direction" : "I", "BaseName" : "STA_AXIS",
				"BlockSignal" : [
					{"Name" : "STA_AXIS_TDATA_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "STA_AXIS_V_keep_V", "Type" : "Axis", "Direction" : "I", "BaseName" : "STA_AXIS"},
			{"Name" : "STA_AXIS_V_strb_V", "Type" : "Axis", "Direction" : "I", "BaseName" : "STA_AXIS"},
			{"Name" : "STA_AXIS_V_user_V", "Type" : "Axis", "Direction" : "I", "BaseName" : "STA_AXIS"},
			{"Name" : "STA_AXIS_V_last_V", "Type" : "Axis", "Direction" : "I", "BaseName" : "STA_AXIS"},
			{"Name" : "STA_AXIS_V_id_V", "Type" : "Axis", "Direction" : "I", "BaseName" : "STA_AXIS"},
			{"Name" : "STA_AXIS_V_dest_V", "Type" : "Axis", "Direction" : "I", "BaseName" : "STA_AXIS"},
			{"Name" : "MBA_AXIS_V_data_V", "Type" : "Axis", "Direction" : "O", "BaseName" : "MBA_AXIS",
				"BlockSignal" : [
					{"Name" : "MBA_AXIS_TDATA_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "MBA_AXIS_V_keep_V", "Type" : "Axis", "Direction" : "O", "BaseName" : "MBA_AXIS"},
			{"Name" : "MBA_AXIS_V_strb_V", "Type" : "Axis", "Direction" : "O", "BaseName" : "MBA_AXIS"},
			{"Name" : "MBA_AXIS_V_user_V", "Type" : "Axis", "Direction" : "O", "BaseName" : "MBA_AXIS"},
			{"Name" : "MBA_AXIS_V_last_V", "Type" : "Axis", "Direction" : "O", "BaseName" : "MBA_AXIS"},
			{"Name" : "MBA_AXIS_V_id_V", "Type" : "Axis", "Direction" : "O", "BaseName" : "MBA_AXIS"},
			{"Name" : "MBA_AXIS_V_dest_V", "Type" : "Axis", "Direction" : "O", "BaseName" : "MBA_AXIS"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.CONTROL_s_axi_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mul_8s_8s_16_1_1_U1", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.regslice_both_SLI_AXIS_V_data_V_U", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.regslice_both_SLI_AXIS_V_keep_V_U", "Parent" : "0"},
	{"ID" : "5", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.regslice_both_SLI_AXIS_V_strb_V_U", "Parent" : "0"},
	{"ID" : "6", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.regslice_both_SLI_AXIS_V_user_V_U", "Parent" : "0"},
	{"ID" : "7", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.regslice_both_SLI_AXIS_V_last_V_U", "Parent" : "0"},
	{"ID" : "8", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.regslice_both_SLI_AXIS_V_id_V_U", "Parent" : "0"},
	{"ID" : "9", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.regslice_both_SLI_AXIS_V_dest_V_U", "Parent" : "0"},
	{"ID" : "10", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.regslice_both_MRI_AXIS_V_data_V_U", "Parent" : "0"},
	{"ID" : "11", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.regslice_both_MRI_AXIS_V_keep_V_U", "Parent" : "0"},
	{"ID" : "12", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.regslice_both_MRI_AXIS_V_strb_V_U", "Parent" : "0"},
	{"ID" : "13", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.regslice_both_MRI_AXIS_V_user_V_U", "Parent" : "0"},
	{"ID" : "14", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.regslice_both_MRI_AXIS_V_last_V_U", "Parent" : "0"},
	{"ID" : "15", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.regslice_both_MRI_AXIS_V_id_V_U", "Parent" : "0"},
	{"ID" : "16", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.regslice_both_MRI_AXIS_V_dest_V_U", "Parent" : "0"},
	{"ID" : "17", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.regslice_both_STW_AXIS_V_data_V_U", "Parent" : "0"},
	{"ID" : "18", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.regslice_both_STW_AXIS_V_keep_V_U", "Parent" : "0"},
	{"ID" : "19", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.regslice_both_STW_AXIS_V_strb_V_U", "Parent" : "0"},
	{"ID" : "20", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.regslice_both_STW_AXIS_V_user_V_U", "Parent" : "0"},
	{"ID" : "21", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.regslice_both_STW_AXIS_V_last_V_U", "Parent" : "0"},
	{"ID" : "22", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.regslice_both_STW_AXIS_V_id_V_U", "Parent" : "0"},
	{"ID" : "23", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.regslice_both_STW_AXIS_V_dest_V_U", "Parent" : "0"},
	{"ID" : "24", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.regslice_both_MBW_AXIS_V_data_V_U", "Parent" : "0"},
	{"ID" : "25", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.regslice_both_MBW_AXIS_V_keep_V_U", "Parent" : "0"},
	{"ID" : "26", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.regslice_both_MBW_AXIS_V_strb_V_U", "Parent" : "0"},
	{"ID" : "27", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.regslice_both_MBW_AXIS_V_user_V_U", "Parent" : "0"},
	{"ID" : "28", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.regslice_both_MBW_AXIS_V_last_V_U", "Parent" : "0"},
	{"ID" : "29", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.regslice_both_MBW_AXIS_V_id_V_U", "Parent" : "0"},
	{"ID" : "30", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.regslice_both_MBW_AXIS_V_dest_V_U", "Parent" : "0"},
	{"ID" : "31", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.regslice_both_STA_AXIS_V_data_V_U", "Parent" : "0"},
	{"ID" : "32", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.regslice_both_STA_AXIS_V_keep_V_U", "Parent" : "0"},
	{"ID" : "33", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.regslice_both_STA_AXIS_V_strb_V_U", "Parent" : "0"},
	{"ID" : "34", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.regslice_both_STA_AXIS_V_user_V_U", "Parent" : "0"},
	{"ID" : "35", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.regslice_both_STA_AXIS_V_last_V_U", "Parent" : "0"},
	{"ID" : "36", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.regslice_both_STA_AXIS_V_id_V_U", "Parent" : "0"},
	{"ID" : "37", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.regslice_both_STA_AXIS_V_dest_V_U", "Parent" : "0"},
	{"ID" : "38", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.regslice_both_MBA_AXIS_V_data_V_U", "Parent" : "0"},
	{"ID" : "39", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.regslice_both_MBA_AXIS_V_keep_V_U", "Parent" : "0"},
	{"ID" : "40", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.regslice_both_MBA_AXIS_V_strb_V_U", "Parent" : "0"},
	{"ID" : "41", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.regslice_both_MBA_AXIS_V_user_V_U", "Parent" : "0"},
	{"ID" : "42", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.regslice_both_MBA_AXIS_V_last_V_U", "Parent" : "0"},
	{"ID" : "43", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.regslice_both_MBA_AXIS_V_id_V_U", "Parent" : "0"},
	{"ID" : "44", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.regslice_both_MBA_AXIS_V_dest_V_U", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	pe {
		SLI_AXIS_V_data_V {Type I LastRead 0 FirstWrite -1}
		SLI_AXIS_V_keep_V {Type I LastRead 0 FirstWrite -1}
		SLI_AXIS_V_strb_V {Type I LastRead 0 FirstWrite -1}
		SLI_AXIS_V_user_V {Type I LastRead 0 FirstWrite -1}
		SLI_AXIS_V_last_V {Type I LastRead 0 FirstWrite -1}
		SLI_AXIS_V_id_V {Type I LastRead 0 FirstWrite -1}
		SLI_AXIS_V_dest_V {Type I LastRead 0 FirstWrite -1}
		MRI_AXIS_V_data_V {Type O LastRead -1 FirstWrite 2}
		MRI_AXIS_V_keep_V {Type O LastRead -1 FirstWrite 2}
		MRI_AXIS_V_strb_V {Type O LastRead -1 FirstWrite 2}
		MRI_AXIS_V_user_V {Type O LastRead -1 FirstWrite 2}
		MRI_AXIS_V_last_V {Type O LastRead -1 FirstWrite 2}
		MRI_AXIS_V_id_V {Type O LastRead -1 FirstWrite 2}
		MRI_AXIS_V_dest_V {Type O LastRead -1 FirstWrite 2}
		STW_AXIS_V_data_V {Type I LastRead 0 FirstWrite -1}
		STW_AXIS_V_keep_V {Type I LastRead 0 FirstWrite -1}
		STW_AXIS_V_strb_V {Type I LastRead 0 FirstWrite -1}
		STW_AXIS_V_user_V {Type I LastRead 0 FirstWrite -1}
		STW_AXIS_V_last_V {Type I LastRead 0 FirstWrite -1}
		STW_AXIS_V_id_V {Type I LastRead 0 FirstWrite -1}
		STW_AXIS_V_dest_V {Type I LastRead 0 FirstWrite -1}
		MBW_AXIS_V_data_V {Type O LastRead -1 FirstWrite 2}
		MBW_AXIS_V_keep_V {Type O LastRead -1 FirstWrite 2}
		MBW_AXIS_V_strb_V {Type O LastRead -1 FirstWrite 2}
		MBW_AXIS_V_user_V {Type O LastRead -1 FirstWrite 2}
		MBW_AXIS_V_last_V {Type O LastRead -1 FirstWrite 2}
		MBW_AXIS_V_id_V {Type O LastRead -1 FirstWrite 2}
		MBW_AXIS_V_dest_V {Type O LastRead -1 FirstWrite 2}
		STA_AXIS_V_data_V {Type I LastRead 0 FirstWrite -1}
		STA_AXIS_V_keep_V {Type I LastRead 0 FirstWrite -1}
		STA_AXIS_V_strb_V {Type I LastRead 0 FirstWrite -1}
		STA_AXIS_V_user_V {Type I LastRead 0 FirstWrite -1}
		STA_AXIS_V_last_V {Type I LastRead 0 FirstWrite -1}
		STA_AXIS_V_id_V {Type I LastRead 0 FirstWrite -1}
		STA_AXIS_V_dest_V {Type I LastRead 0 FirstWrite -1}
		MBA_AXIS_V_data_V {Type O LastRead -1 FirstWrite 2}
		MBA_AXIS_V_keep_V {Type O LastRead -1 FirstWrite 2}
		MBA_AXIS_V_strb_V {Type O LastRead -1 FirstWrite 2}
		MBA_AXIS_V_user_V {Type O LastRead -1 FirstWrite 2}
		MBA_AXIS_V_last_V {Type O LastRead -1 FirstWrite 2}
		MBA_AXIS_V_id_V {Type O LastRead -1 FirstWrite 2}
		MBA_AXIS_V_dest_V {Type O LastRead -1 FirstWrite 2}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "3", "Max" : "3"}
	, {"Name" : "Interval", "Min" : "4", "Max" : "4"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	SLI_AXIS_V_data_V { axis {  { SLI_AXIS_TDATA in_data 0 8 } } }
	SLI_AXIS_V_keep_V { axis {  { SLI_AXIS_TKEEP in_data 0 1 } } }
	SLI_AXIS_V_strb_V { axis {  { SLI_AXIS_TSTRB in_data 0 1 } } }
	SLI_AXIS_V_user_V { axis {  { SLI_AXIS_TUSER in_data 0 4 } } }
	SLI_AXIS_V_last_V { axis {  { SLI_AXIS_TLAST in_data 0 1 } } }
	SLI_AXIS_V_id_V { axis {  { SLI_AXIS_TID in_data 0 5 } } }
	SLI_AXIS_V_dest_V { axis {  { SLI_AXIS_TVALID in_vld 0 1 }  { SLI_AXIS_TREADY in_acc 1 1 }  { SLI_AXIS_TDEST in_data 0 5 } } }
	MRI_AXIS_V_data_V { axis {  { MRI_AXIS_TDATA out_data 1 8 } } }
	MRI_AXIS_V_keep_V { axis {  { MRI_AXIS_TKEEP out_data 1 1 } } }
	MRI_AXIS_V_strb_V { axis {  { MRI_AXIS_TSTRB out_data 1 1 } } }
	MRI_AXIS_V_user_V { axis {  { MRI_AXIS_TUSER out_data 1 4 } } }
	MRI_AXIS_V_last_V { axis {  { MRI_AXIS_TLAST out_data 1 1 } } }
	MRI_AXIS_V_id_V { axis {  { MRI_AXIS_TID out_data 1 5 } } }
	MRI_AXIS_V_dest_V { axis {  { MRI_AXIS_TVALID out_vld 1 1 }  { MRI_AXIS_TREADY out_acc 0 1 }  { MRI_AXIS_TDEST out_data 1 5 } } }
	STW_AXIS_V_data_V { axis {  { STW_AXIS_TDATA in_data 0 8 } } }
	STW_AXIS_V_keep_V { axis {  { STW_AXIS_TKEEP in_data 0 1 } } }
	STW_AXIS_V_strb_V { axis {  { STW_AXIS_TSTRB in_data 0 1 } } }
	STW_AXIS_V_user_V { axis {  { STW_AXIS_TUSER in_data 0 4 } } }
	STW_AXIS_V_last_V { axis {  { STW_AXIS_TLAST in_data 0 1 } } }
	STW_AXIS_V_id_V { axis {  { STW_AXIS_TID in_data 0 5 } } }
	STW_AXIS_V_dest_V { axis {  { STW_AXIS_TVALID in_vld 0 1 }  { STW_AXIS_TREADY in_acc 1 1 }  { STW_AXIS_TDEST in_data 0 5 } } }
	MBW_AXIS_V_data_V { axis {  { MBW_AXIS_TDATA out_data 1 8 } } }
	MBW_AXIS_V_keep_V { axis {  { MBW_AXIS_TKEEP out_data 1 1 } } }
	MBW_AXIS_V_strb_V { axis {  { MBW_AXIS_TSTRB out_data 1 1 } } }
	MBW_AXIS_V_user_V { axis {  { MBW_AXIS_TUSER out_data 1 4 } } }
	MBW_AXIS_V_last_V { axis {  { MBW_AXIS_TLAST out_data 1 1 } } }
	MBW_AXIS_V_id_V { axis {  { MBW_AXIS_TID out_data 1 5 } } }
	MBW_AXIS_V_dest_V { axis {  { MBW_AXIS_TVALID out_vld 1 1 }  { MBW_AXIS_TREADY out_acc 0 1 }  { MBW_AXIS_TDEST out_data 1 5 } } }
	STA_AXIS_V_data_V { axis {  { STA_AXIS_TDATA in_data 0 16 } } }
	STA_AXIS_V_keep_V { axis {  { STA_AXIS_TKEEP in_data 0 2 } } }
	STA_AXIS_V_strb_V { axis {  { STA_AXIS_TSTRB in_data 0 2 } } }
	STA_AXIS_V_user_V { axis {  { STA_AXIS_TUSER in_data 0 4 } } }
	STA_AXIS_V_last_V { axis {  { STA_AXIS_TLAST in_data 0 1 } } }
	STA_AXIS_V_id_V { axis {  { STA_AXIS_TID in_data 0 5 } } }
	STA_AXIS_V_dest_V { axis {  { STA_AXIS_TVALID in_vld 0 1 }  { STA_AXIS_TREADY in_acc 1 1 }  { STA_AXIS_TDEST in_data 0 5 } } }
	MBA_AXIS_V_data_V { axis {  { MBA_AXIS_TDATA out_data 1 16 } } }
	MBA_AXIS_V_keep_V { axis {  { MBA_AXIS_TKEEP out_data 1 2 } } }
	MBA_AXIS_V_strb_V { axis {  { MBA_AXIS_TSTRB out_data 1 2 } } }
	MBA_AXIS_V_user_V { axis {  { MBA_AXIS_TUSER out_data 1 4 } } }
	MBA_AXIS_V_last_V { axis {  { MBA_AXIS_TLAST out_data 1 1 } } }
	MBA_AXIS_V_id_V { axis {  { MBA_AXIS_TID out_data 1 5 } } }
	MBA_AXIS_V_dest_V { axis {  { MBA_AXIS_TVALID out_vld 1 1 }  { MBA_AXIS_TREADY out_acc 0 1 }  { MBA_AXIS_TDEST out_data 1 5 } } }
}

set maxi_interface_dict [dict create]

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
