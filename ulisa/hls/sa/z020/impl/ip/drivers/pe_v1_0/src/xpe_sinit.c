// ==============================================================
// File generated on Wed Sep 25 19:10:39 -03 2024
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2018.3 (64-bit)
// SW Build 2405991 on Thu Dec  6 23:36:41 MST 2018
// IP Build 2404404 on Fri Dec  7 01:43:56 MST 2018
// Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __linux__

#include "xstatus.h"
#include "xparameters.h"
#include "xpe.h"

extern XPe_Config XPe_ConfigTable[];

XPe_Config *XPe_LookupConfig(u16 DeviceId) {
	XPe_Config *ConfigPtr = NULL;

	int Index;

	for (Index = 0; Index < XPAR_XPE_NUM_INSTANCES; Index++) {
		if (XPe_ConfigTable[Index].DeviceId == DeviceId) {
			ConfigPtr = &XPe_ConfigTable[Index];
			break;
		}
	}

	return ConfigPtr;
}

int XPe_Initialize(XPe *InstancePtr, u16 DeviceId) {
	XPe_Config *ConfigPtr;

	Xil_AssertNonvoid(InstancePtr != NULL);

	ConfigPtr = XPe_LookupConfig(DeviceId);
	if (ConfigPtr == NULL) {
		InstancePtr->IsReady = 0;
		return (XST_DEVICE_NOT_FOUND);
	}

	return XPe_CfgInitialize(InstancePtr, ConfigPtr);
}

#endif

