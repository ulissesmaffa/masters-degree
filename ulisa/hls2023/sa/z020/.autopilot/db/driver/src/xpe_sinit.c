// ==============================================================
// Vitis HLS - High-Level Synthesis from C, C++ and OpenCL v2023.2 (64-bit)
// Tool Version Limit: 2023.10
// Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
// Copyright 2022-2023 Advanced Micro Devices, Inc. All Rights Reserved.
// 
// ==============================================================
#ifndef __linux__

#include "xstatus.h"
#ifdef SDT
#include "xparameters.h"
#endif
#include "xpe.h"

extern XPe_Config XPe_ConfigTable[];

#ifdef SDT
XPe_Config *XPe_LookupConfig(UINTPTR BaseAddress) {
	XPe_Config *ConfigPtr = NULL;

	int Index;

	for (Index = (u32)0x0; XPe_ConfigTable[Index].Name != NULL; Index++) {
		if (!BaseAddress || XPe_ConfigTable[Index].Control_BaseAddress == BaseAddress) {
			ConfigPtr = &XPe_ConfigTable[Index];
			break;
		}
	}

	return ConfigPtr;
}

int XPe_Initialize(XPe *InstancePtr, UINTPTR BaseAddress) {
	XPe_Config *ConfigPtr;

	Xil_AssertNonvoid(InstancePtr != NULL);

	ConfigPtr = XPe_LookupConfig(BaseAddress);
	if (ConfigPtr == NULL) {
		InstancePtr->IsReady = 0;
		return (XST_DEVICE_NOT_FOUND);
	}

	return XPe_CfgInitialize(InstancePtr, ConfigPtr);
}
#else
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

#endif

