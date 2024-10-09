// ==============================================================
// Vitis HLS - High-Level Synthesis from C, C++ and OpenCL v2023.2 (64-bit)
// Tool Version Limit: 2023.10
// Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
// Copyright 2022-2023 Advanced Micro Devices, Inc. All Rights Reserved.
// 
// ==============================================================
/***************************** Include Files *********************************/
#include "xpe.h"

/************************** Function Implementation *************************/
#ifndef __linux__
int XPe_CfgInitialize(XPe *InstancePtr, XPe_Config *ConfigPtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(ConfigPtr != NULL);

    InstancePtr->Control_BaseAddress = ConfigPtr->Control_BaseAddress;
    InstancePtr->IsReady = XIL_COMPONENT_IS_READY;

    return XST_SUCCESS;
}
#endif

void XPe_Start(XPe *InstancePtr) {
    u32 Data;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XPe_ReadReg(InstancePtr->Control_BaseAddress, XPE_CONTROL_ADDR_AP_CTRL) & 0x80;
    XPe_WriteReg(InstancePtr->Control_BaseAddress, XPE_CONTROL_ADDR_AP_CTRL, Data | 0x01);
}

u32 XPe_IsDone(XPe *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XPe_ReadReg(InstancePtr->Control_BaseAddress, XPE_CONTROL_ADDR_AP_CTRL);
    return (Data >> 1) & 0x1;
}

u32 XPe_IsIdle(XPe *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XPe_ReadReg(InstancePtr->Control_BaseAddress, XPE_CONTROL_ADDR_AP_CTRL);
    return (Data >> 2) & 0x1;
}

u32 XPe_IsReady(XPe *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XPe_ReadReg(InstancePtr->Control_BaseAddress, XPE_CONTROL_ADDR_AP_CTRL);
    // check ap_start to see if the pcore is ready for next input
    return !(Data & 0x1);
}

void XPe_EnableAutoRestart(XPe *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XPe_WriteReg(InstancePtr->Control_BaseAddress, XPE_CONTROL_ADDR_AP_CTRL, 0x80);
}

void XPe_DisableAutoRestart(XPe *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XPe_WriteReg(InstancePtr->Control_BaseAddress, XPE_CONTROL_ADDR_AP_CTRL, 0);
}

void XPe_InterruptGlobalEnable(XPe *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XPe_WriteReg(InstancePtr->Control_BaseAddress, XPE_CONTROL_ADDR_GIE, 1);
}

void XPe_InterruptGlobalDisable(XPe *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XPe_WriteReg(InstancePtr->Control_BaseAddress, XPE_CONTROL_ADDR_GIE, 0);
}

void XPe_InterruptEnable(XPe *InstancePtr, u32 Mask) {
    u32 Register;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Register =  XPe_ReadReg(InstancePtr->Control_BaseAddress, XPE_CONTROL_ADDR_IER);
    XPe_WriteReg(InstancePtr->Control_BaseAddress, XPE_CONTROL_ADDR_IER, Register | Mask);
}

void XPe_InterruptDisable(XPe *InstancePtr, u32 Mask) {
    u32 Register;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Register =  XPe_ReadReg(InstancePtr->Control_BaseAddress, XPE_CONTROL_ADDR_IER);
    XPe_WriteReg(InstancePtr->Control_BaseAddress, XPE_CONTROL_ADDR_IER, Register & (~Mask));
}

void XPe_InterruptClear(XPe *InstancePtr, u32 Mask) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XPe_WriteReg(InstancePtr->Control_BaseAddress, XPE_CONTROL_ADDR_ISR, Mask);
}

u32 XPe_InterruptGetEnabled(XPe *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XPe_ReadReg(InstancePtr->Control_BaseAddress, XPE_CONTROL_ADDR_IER);
}

u32 XPe_InterruptGetStatus(XPe *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XPe_ReadReg(InstancePtr->Control_BaseAddress, XPE_CONTROL_ADDR_ISR);
}

