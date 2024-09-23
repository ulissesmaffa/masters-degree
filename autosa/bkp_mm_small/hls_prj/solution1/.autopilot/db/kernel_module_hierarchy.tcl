set ModuleHierarchy {[{
"Name" : "kernel0","ID" : "0","Type" : "dataflow",
"SubInsts" : [
	{"Name" : "entry_proc_U0","ID" : "1","Type" : "sequential"},
	{"Name" : "A_IO_L3_in_serialize_U0","ID" : "2","Type" : "sequential",
		"SubLoops" : [
		{"Name" : "VITIS_LOOP_38_1","ID" : "3","Type" : "pipeline"},]},
	{"Name" : "B_IO_L3_in_serialize_U0","ID" : "4","Type" : "sequential",
		"SubLoops" : [
		{"Name" : "VITIS_LOOP_383_1","ID" : "5","Type" : "pipeline"},]},
	{"Name" : "A_IO_L3_in_U0","ID" : "6","Type" : "sequential",
		"SubLoops" : [
		{"Name" : "VITIS_LOOP_8_1_VITIS_LOOP_10_3_VITIS_LOOP_13_4_VITIS_LOOP_15_5","ID" : "7","Type" : "pipeline"},]},
	{"Name" : "B_IO_L3_in_U0","ID" : "8","Type" : "sequential",
		"SubLoops" : [
		{"Name" : "VITIS_LOOP_353_1_VITIS_LOOP_355_3_VITIS_LOOP_358_4_VITIS_LOOP_360_5","ID" : "9","Type" : "pipeline"},]},
	{"Name" : "A_IO_L2_in_U0","ID" : "10","Type" : "sequential",
		"SubInsts" : [
		{"Name" : "grp_A_IO_L2_in_intra_trans_fu_142","ID" : "11","Type" : "sequential",
			"SubInsts" : [
			{"Name" : "grp_A_IO_L2_in_intra_trans_Pipeline_VITIS_LOOP_62_1_VI_fu_38","ID" : "12","Type" : "sequential",
				"SubLoops" : [
				{"Name" : "VITIS_LOOP_62_1_VITIS_LOOP_64_2_VITIS_LOOP_66_3","ID" : "13","Type" : "pipeline"},]},]},],
		"SubLoops" : [
		{"Name" : "VITIS_LOOP_173_1","ID" : "14","Type" : "no",
		"SubLoops" : [
		{"Name" : "VITIS_LOOP_174_2","ID" : "15","Type" : "no",
			"SubLoops" : [
			{"Name" : "VITIS_LOOP_175_3","ID" : "16","Type" : "no",
				"SubInsts" : [
				{"Name" : "grp_A_IO_L2_in_inter_trans_fu_152","ID" : "17","Type" : "sequential",
						"SubLoops" : [
						{"Name" : "VITIS_LOOP_97_1","ID" : "18","Type" : "no",
						"SubInsts" : [
						{"Name" : "grp_A_IO_L2_in_inter_trans_Pipeline_VITIS_LOOP_112_3_fu_52","ID" : "19","Type" : "sequential",
								"SubLoops" : [
								{"Name" : "VITIS_LOOP_112_3","ID" : "20","Type" : "pipeline"},]},
						{"Name" : "grp_A_IO_L2_in_inter_trans_Pipeline_VITIS_LOOP_100_2_fu_60","ID" : "21","Type" : "sequential",
								"SubLoops" : [
								{"Name" : "VITIS_LOOP_100_2","ID" : "22","Type" : "pipeline"},]},]},]},]},]},]},]},
	{"Name" : "B_IO_L2_in_U0","ID" : "23","Type" : "sequential",
		"SubInsts" : [
		{"Name" : "grp_B_IO_L2_in_intra_trans_fu_142","ID" : "24","Type" : "sequential",
			"SubInsts" : [
			{"Name" : "grp_B_IO_L2_in_intra_trans_Pipeline_VITIS_LOOP_407_1_V_fu_38","ID" : "25","Type" : "sequential",
				"SubLoops" : [
				{"Name" : "VITIS_LOOP_407_1_VITIS_LOOP_409_2_VITIS_LOOP_411_3","ID" : "26","Type" : "pipeline"},]},]},],
		"SubLoops" : [
		{"Name" : "VITIS_LOOP_518_1","ID" : "27","Type" : "no",
		"SubLoops" : [
		{"Name" : "VITIS_LOOP_519_2","ID" : "28","Type" : "no",
			"SubLoops" : [
			{"Name" : "VITIS_LOOP_520_3","ID" : "29","Type" : "no",
				"SubInsts" : [
				{"Name" : "grp_B_IO_L2_in_inter_trans_fu_152","ID" : "30","Type" : "sequential",
						"SubLoops" : [
						{"Name" : "VITIS_LOOP_442_1","ID" : "31","Type" : "no",
						"SubInsts" : [
						{"Name" : "grp_B_IO_L2_in_inter_trans_Pipeline_VITIS_LOOP_457_3_fu_52","ID" : "32","Type" : "sequential",
								"SubLoops" : [
								{"Name" : "VITIS_LOOP_457_3","ID" : "33","Type" : "pipeline"},]},
						{"Name" : "grp_B_IO_L2_in_inter_trans_Pipeline_VITIS_LOOP_445_2_fu_60","ID" : "34","Type" : "sequential",
								"SubLoops" : [
								{"Name" : "VITIS_LOOP_445_2","ID" : "35","Type" : "pipeline"},]},]},]},]},]},]},]},
	{"Name" : "A_IO_L2_in_boundary_U0","ID" : "36","Type" : "sequential",
		"SubInsts" : [
		{"Name" : "grp_A_IO_L2_in_intra_trans_fu_140","ID" : "37","Type" : "sequential",
			"SubInsts" : [
			{"Name" : "grp_A_IO_L2_in_intra_trans_Pipeline_VITIS_LOOP_62_1_VI_fu_38","ID" : "38","Type" : "sequential",
				"SubLoops" : [
				{"Name" : "VITIS_LOOP_62_1_VITIS_LOOP_64_2_VITIS_LOOP_66_3","ID" : "39","Type" : "pipeline"},]},]},],
		"SubLoops" : [
		{"Name" : "VITIS_LOOP_270_1","ID" : "40","Type" : "no",
		"SubLoops" : [
		{"Name" : "VITIS_LOOP_271_2","ID" : "41","Type" : "no",
			"SubLoops" : [
			{"Name" : "VITIS_LOOP_272_3","ID" : "42","Type" : "no",
				"SubInsts" : [
				{"Name" : "grp_A_IO_L2_in_inter_trans_boundary_fu_150","ID" : "43","Type" : "sequential",
						"SubLoops" : [
						{"Name" : "VITIS_LOOP_140_2","ID" : "44","Type" : "pipeline"},]},]},]},]},]},
	{"Name" : "B_IO_L2_in_boundary_U0","ID" : "45","Type" : "sequential",
		"SubInsts" : [
		{"Name" : "grp_B_IO_L2_in_intra_trans_fu_140","ID" : "46","Type" : "sequential",
			"SubInsts" : [
			{"Name" : "grp_B_IO_L2_in_intra_trans_Pipeline_VITIS_LOOP_407_1_V_fu_38","ID" : "47","Type" : "sequential",
				"SubLoops" : [
				{"Name" : "VITIS_LOOP_407_1_VITIS_LOOP_409_2_VITIS_LOOP_411_3","ID" : "48","Type" : "pipeline"},]},]},],
		"SubLoops" : [
		{"Name" : "VITIS_LOOP_615_1","ID" : "49","Type" : "no",
		"SubLoops" : [
		{"Name" : "VITIS_LOOP_616_2","ID" : "50","Type" : "no",
			"SubLoops" : [
			{"Name" : "VITIS_LOOP_617_3","ID" : "51","Type" : "no",
				"SubInsts" : [
				{"Name" : "grp_B_IO_L2_in_inter_trans_boundary_fu_150","ID" : "52","Type" : "sequential",
						"SubLoops" : [
						{"Name" : "VITIS_LOOP_485_2","ID" : "53","Type" : "pipeline"},]},]},]},]},]},
	{"Name" : "PE_wrapper_U0","ID" : "54","Type" : "sequential",
		"SubInsts" : [
		{"Name" : "grp_PE_fu_30","ID" : "55","Type" : "sequential",
			"SubLoops" : [
			{"Name" : "VITIS_LOOP_705_1_VITIS_LOOP_707_3_VITIS_LOOP_712_5_VITIS_LOOP_714_6","ID" : "56","Type" : "pipeline"},]},]},
	{"Name" : "PE_wrapper_3_U0","ID" : "57","Type" : "sequential",
		"SubInsts" : [
		{"Name" : "grp_PE_fu_30","ID" : "58","Type" : "sequential",
			"SubLoops" : [
			{"Name" : "VITIS_LOOP_705_1_VITIS_LOOP_707_3_VITIS_LOOP_712_5_VITIS_LOOP_714_6","ID" : "59","Type" : "pipeline"},]},]},
	{"Name" : "PE_wrapper_4_U0","ID" : "60","Type" : "sequential",
		"SubInsts" : [
		{"Name" : "grp_PE_fu_30","ID" : "61","Type" : "sequential",
			"SubLoops" : [
			{"Name" : "VITIS_LOOP_705_1_VITIS_LOOP_707_3_VITIS_LOOP_712_5_VITIS_LOOP_714_6","ID" : "62","Type" : "pipeline"},]},]},
	{"Name" : "PE_wrapper_5_U0","ID" : "63","Type" : "sequential",
		"SubInsts" : [
		{"Name" : "grp_PE_fu_30","ID" : "64","Type" : "sequential",
			"SubLoops" : [
			{"Name" : "VITIS_LOOP_705_1_VITIS_LOOP_707_3_VITIS_LOOP_712_5_VITIS_LOOP_714_6","ID" : "65","Type" : "pipeline"},]},]},
	{"Name" : "A_PE_dummy_in_1_U0","ID" : "66","Type" : "sequential",
		"SubLoops" : [
		{"Name" : "VITIS_LOOP_790_1_VITIS_LOOP_792_3_VITIS_LOOP_797_5_VITIS_LOOP_799_6","ID" : "67","Type" : "pipeline"},]},
	{"Name" : "B_PE_dummy_in_2_U0","ID" : "68","Type" : "sequential",
		"SubLoops" : [
		{"Name" : "VITIS_LOOP_816_1_VITIS_LOOP_818_3_VITIS_LOOP_823_5_VITIS_LOOP_825_6","ID" : "69","Type" : "pipeline"},]},
	{"Name" : "C_drain_IO_L1_out_boundary_wrapper_U0","ID" : "70","Type" : "sequential",
		"SubLoops" : [
		{"Name" : "VITIS_LOOP_1000_1_VITIS_LOOP_1001_2","ID" : "71","Type" : "no",
		"SubInsts" : [
		{"Name" : "grp_C_drain_IO_L1_out_boundary_wrapper_Pipeline_VITIS_1_fu_58","ID" : "72","Type" : "sequential",
				"SubLoops" : [
				{"Name" : "VITIS_LOOP_849_1_VITIS_LOOP_851_2","ID" : "73","Type" : "pipeline"},]},
		{"Name" : "grp_C_drain_IO_L1_out_boundary_wrapper_Pipeline_VITIS_s_fu_65","ID" : "74","Type" : "sequential",
				"SubLoops" : [
				{"Name" : "VITIS_LOOP_927_2_VITIS_LOOP_929_3","ID" : "75","Type" : "pipeline"},]},]},]},
	{"Name" : "A_PE_dummy_in_U0","ID" : "76","Type" : "sequential",
		"SubLoops" : [
		{"Name" : "VITIS_LOOP_790_1_VITIS_LOOP_792_3_VITIS_LOOP_797_5_VITIS_LOOP_799_6","ID" : "77","Type" : "pipeline"},]},
	{"Name" : "B_PE_dummy_in_U0","ID" : "78","Type" : "sequential",
		"SubLoops" : [
		{"Name" : "VITIS_LOOP_816_1_VITIS_LOOP_818_3_VITIS_LOOP_823_5_VITIS_LOOP_825_6","ID" : "79","Type" : "pipeline"},]},
	{"Name" : "C_drain_IO_L1_out_wrapper_U0","ID" : "80","Type" : "sequential",
		"SubInsts" : [
		{"Name" : "grp_C_drain_IO_L1_out_fu_26","ID" : "81","Type" : "sequential",
			"SubLoops" : [
			{"Name" : "VITIS_LOOP_953_1_VITIS_LOOP_954_2","ID" : "82","Type" : "no",
			"SubInsts" : [
			{"Name" : "grp_C_drain_IO_L1_out_Pipeline_VITIS_LOOP_849_1_VITIS_s_fu_83","ID" : "83","Type" : "sequential",
					"SubLoops" : [
					{"Name" : "VITIS_LOOP_849_1_VITIS_LOOP_851_2","ID" : "84","Type" : "pipeline"},]},],
			"SubLoops" : [
			{"Name" : "VITIS_LOOP_882_1","ID" : "85","Type" : "no",
				"SubInsts" : [
				{"Name" : "grp_C_drain_IO_L1_out_Pipeline_VITIS_LOOP_899_4_VITIS_s_fu_90","ID" : "86","Type" : "sequential",
						"SubLoops" : [
						{"Name" : "VITIS_LOOP_899_4_VITIS_LOOP_901_5","ID" : "87","Type" : "pipeline"},]},
				{"Name" : "grp_C_drain_IO_L1_out_Pipeline_VITIS_LOOP_885_2_VITIS_s_fu_98","ID" : "88","Type" : "sequential",
						"SubLoops" : [
						{"Name" : "VITIS_LOOP_885_2_VITIS_LOOP_887_3","ID" : "89","Type" : "pipeline"},]},]},]},]},]},
	{"Name" : "C_drain_IO_L1_out_boundary_wrapper_6_U0","ID" : "90","Type" : "sequential",
		"SubLoops" : [
		{"Name" : "VITIS_LOOP_1000_1_VITIS_LOOP_1001_2","ID" : "91","Type" : "no",
		"SubInsts" : [
		{"Name" : "grp_C_drain_IO_L1_out_boundary_wrapper_6_Pipeline_VITI_1_fu_58","ID" : "92","Type" : "sequential",
				"SubLoops" : [
				{"Name" : "VITIS_LOOP_849_1_VITIS_LOOP_851_2","ID" : "93","Type" : "pipeline"},]},
		{"Name" : "grp_C_drain_IO_L1_out_boundary_wrapper_6_Pipeline_VITI_fu_65","ID" : "94","Type" : "sequential",
				"SubLoops" : [
				{"Name" : "VITIS_LOOP_927_2_VITIS_LOOP_929_3","ID" : "95","Type" : "pipeline"},]},]},]},
	{"Name" : "C_drain_IO_L1_out_wrapper_7_U0","ID" : "96","Type" : "sequential",
		"SubInsts" : [
		{"Name" : "grp_C_drain_IO_L1_out_fu_26","ID" : "97","Type" : "sequential",
			"SubLoops" : [
			{"Name" : "VITIS_LOOP_953_1_VITIS_LOOP_954_2","ID" : "98","Type" : "no",
			"SubInsts" : [
			{"Name" : "grp_C_drain_IO_L1_out_Pipeline_VITIS_LOOP_849_1_VITIS_s_fu_83","ID" : "99","Type" : "sequential",
					"SubLoops" : [
					{"Name" : "VITIS_LOOP_849_1_VITIS_LOOP_851_2","ID" : "100","Type" : "pipeline"},]},],
			"SubLoops" : [
			{"Name" : "VITIS_LOOP_882_1","ID" : "101","Type" : "no",
				"SubInsts" : [
				{"Name" : "grp_C_drain_IO_L1_out_Pipeline_VITIS_LOOP_899_4_VITIS_s_fu_90","ID" : "102","Type" : "sequential",
						"SubLoops" : [
						{"Name" : "VITIS_LOOP_899_4_VITIS_LOOP_901_5","ID" : "103","Type" : "pipeline"},]},
				{"Name" : "grp_C_drain_IO_L1_out_Pipeline_VITIS_LOOP_885_2_VITIS_s_fu_98","ID" : "104","Type" : "sequential",
						"SubLoops" : [
						{"Name" : "VITIS_LOOP_885_2_VITIS_LOOP_887_3","ID" : "105","Type" : "pipeline"},]},]},]},]},]},
	{"Name" : "C_drain_IO_L2_out_boundary_U0","ID" : "106","Type" : "sequential",
		"SubLoops" : [
		{"Name" : "VITIS_LOOP_1096_1_VITIS_LOOP_1103_4_VITIS_LOOP_1105_5_VITIS_LOOP_1107_6","ID" : "107","Type" : "pipeline"},]},
	{"Name" : "C_drain_IO_L2_out_U0","ID" : "108","Type" : "sequential",
		"SubLoops" : [
		{"Name" : "VITIS_LOOP_1043_1_VITIS_LOOP_1044_2_VITIS_LOOP_1047_3","ID" : "109","Type" : "no",
		"SubInsts" : [
		{"Name" : "grp_C_drain_IO_L2_out_Pipeline_VITIS_LOOP_1067_7_VITIS_fu_76","ID" : "110","Type" : "sequential",
				"SubLoops" : [
				{"Name" : "VITIS_LOOP_1067_7_VITIS_LOOP_1069_8_VITIS_LOOP_1071_9","ID" : "111","Type" : "pipeline"},]},
		{"Name" : "grp_C_drain_IO_L2_out_Pipeline_VITIS_LOOP_1050_4_VITIS_fu_84","ID" : "112","Type" : "sequential",
				"SubLoops" : [
				{"Name" : "VITIS_LOOP_1050_4_VITIS_LOOP_1052_5_VITIS_LOOP_1054_6","ID" : "113","Type" : "pipeline"},]},]},]},
	{"Name" : "C_drain_IO_L3_out_U0","ID" : "114","Type" : "sequential",
		"SubLoops" : [
		{"Name" : "VITIS_LOOP_1130_1_VITIS_LOOP_1134_3_VITIS_LOOP_1138_5_VITIS_LOOP_1141_6","ID" : "115","Type" : "pipeline"},]},
	{"Name" : "C_drain_IO_L3_out_serialize_U0","ID" : "116","Type" : "sequential",
		"SubLoops" : [
		{"Name" : "VITIS_LOOP_1164_1","ID" : "117","Type" : "pipeline"},]},]
}]}