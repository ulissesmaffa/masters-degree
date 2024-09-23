// ==============================================================
// Vitis HLS - High-Level Synthesis from C, C++ and OpenCL v2023.1.1 (64-bit)
// Tool Version Limit: 2023.06
// Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
// Copyright 2022-2023 Advanced Micro Devices, Inc. All Rights Reserved.
// 
// ==============================================================
/***************************** Include Files *********************************/
#include "xkernel0.h"

/************************** Function Implementation *************************/
#ifndef __linux__
int XKernel0_CfgInitialize(XKernel0 *InstancePtr, XKernel0_Config *ConfigPtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(ConfigPtr != NULL);

    InstancePtr->Control_BaseAddress = ConfigPtr->Control_BaseAddress;
    InstancePtr->IsReady = XIL_COMPONENT_IS_READY;

    return XST_SUCCESS;
}
#endif

void XKernel0_Start(XKernel0 *InstancePtr) {
    u32 Data;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XKernel0_ReadReg(InstancePtr->Control_BaseAddress, XKERNEL0_CONTROL_ADDR_AP_CTRL) & 0x80;
    XKernel0_WriteReg(InstancePtr->Control_BaseAddress, XKERNEL0_CONTROL_ADDR_AP_CTRL, Data | 0x01);
}

u32 XKernel0_IsDone(XKernel0 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XKernel0_ReadReg(InstancePtr->Control_BaseAddress, XKERNEL0_CONTROL_ADDR_AP_CTRL);
    return (Data >> 1) & 0x1;
}

u32 XKernel0_IsIdle(XKernel0 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XKernel0_ReadReg(InstancePtr->Control_BaseAddress, XKERNEL0_CONTROL_ADDR_AP_CTRL);
    return (Data >> 2) & 0x1;
}

u32 XKernel0_IsReady(XKernel0 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XKernel0_ReadReg(InstancePtr->Control_BaseAddress, XKERNEL0_CONTROL_ADDR_AP_CTRL);
    // check ap_start to see if the pcore is ready for next input
    return !(Data & 0x1);
}

void XKernel0_EnableAutoRestart(XKernel0 *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XKernel0_WriteReg(InstancePtr->Control_BaseAddress, XKERNEL0_CONTROL_ADDR_AP_CTRL, 0x80);
}

void XKernel0_DisableAutoRestart(XKernel0 *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XKernel0_WriteReg(InstancePtr->Control_BaseAddress, XKERNEL0_CONTROL_ADDR_AP_CTRL, 0);
}

void XKernel0_Set_A(XKernel0 *InstancePtr, u64 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XKernel0_WriteReg(InstancePtr->Control_BaseAddress, XKERNEL0_CONTROL_ADDR_A_DATA, (u32)(Data));
    XKernel0_WriteReg(InstancePtr->Control_BaseAddress, XKERNEL0_CONTROL_ADDR_A_DATA + 4, (u32)(Data >> 32));
}

u64 XKernel0_Get_A(XKernel0 *InstancePtr) {
    u64 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XKernel0_ReadReg(InstancePtr->Control_BaseAddress, XKERNEL0_CONTROL_ADDR_A_DATA);
    Data += (u64)XKernel0_ReadReg(InstancePtr->Control_BaseAddress, XKERNEL0_CONTROL_ADDR_A_DATA + 4) << 32;
    return Data;
}

void XKernel0_Set_B(XKernel0 *InstancePtr, u64 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XKernel0_WriteReg(InstancePtr->Control_BaseAddress, XKERNEL0_CONTROL_ADDR_B_DATA, (u32)(Data));
    XKernel0_WriteReg(InstancePtr->Control_BaseAddress, XKERNEL0_CONTROL_ADDR_B_DATA + 4, (u32)(Data >> 32));
}

u64 XKernel0_Get_B(XKernel0 *InstancePtr) {
    u64 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XKernel0_ReadReg(InstancePtr->Control_BaseAddress, XKERNEL0_CONTROL_ADDR_B_DATA);
    Data += (u64)XKernel0_ReadReg(InstancePtr->Control_BaseAddress, XKERNEL0_CONTROL_ADDR_B_DATA + 4) << 32;
    return Data;
}

void XKernel0_Set_C(XKernel0 *InstancePtr, u64 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XKernel0_WriteReg(InstancePtr->Control_BaseAddress, XKERNEL0_CONTROL_ADDR_C_DATA, (u32)(Data));
    XKernel0_WriteReg(InstancePtr->Control_BaseAddress, XKERNEL0_CONTROL_ADDR_C_DATA + 4, (u32)(Data >> 32));
}

u64 XKernel0_Get_C(XKernel0 *InstancePtr) {
    u64 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XKernel0_ReadReg(InstancePtr->Control_BaseAddress, XKERNEL0_CONTROL_ADDR_C_DATA);
    Data += (u64)XKernel0_ReadReg(InstancePtr->Control_BaseAddress, XKERNEL0_CONTROL_ADDR_C_DATA + 4) << 32;
    return Data;
}

void XKernel0_InterruptGlobalEnable(XKernel0 *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XKernel0_WriteReg(InstancePtr->Control_BaseAddress, XKERNEL0_CONTROL_ADDR_GIE, 1);
}

void XKernel0_InterruptGlobalDisable(XKernel0 *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XKernel0_WriteReg(InstancePtr->Control_BaseAddress, XKERNEL0_CONTROL_ADDR_GIE, 0);
}

void XKernel0_InterruptEnable(XKernel0 *InstancePtr, u32 Mask) {
    u32 Register;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Register =  XKernel0_ReadReg(InstancePtr->Control_BaseAddress, XKERNEL0_CONTROL_ADDR_IER);
    XKernel0_WriteReg(InstancePtr->Control_BaseAddress, XKERNEL0_CONTROL_ADDR_IER, Register | Mask);
}

void XKernel0_InterruptDisable(XKernel0 *InstancePtr, u32 Mask) {
    u32 Register;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Register =  XKernel0_ReadReg(InstancePtr->Control_BaseAddress, XKERNEL0_CONTROL_ADDR_IER);
    XKernel0_WriteReg(InstancePtr->Control_BaseAddress, XKERNEL0_CONTROL_ADDR_IER, Register & (~Mask));
}

void XKernel0_InterruptClear(XKernel0 *InstancePtr, u32 Mask) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XKernel0_WriteReg(InstancePtr->Control_BaseAddress, XKERNEL0_CONTROL_ADDR_ISR, Mask);
}

u32 XKernel0_InterruptGetEnabled(XKernel0 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XKernel0_ReadReg(InstancePtr->Control_BaseAddress, XKERNEL0_CONTROL_ADDR_IER);
}

u32 XKernel0_InterruptGetStatus(XKernel0 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XKernel0_ReadReg(InstancePtr->Control_BaseAddress, XKERNEL0_CONTROL_ADDR_ISR);
}

