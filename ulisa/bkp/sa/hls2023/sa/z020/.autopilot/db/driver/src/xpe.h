// ==============================================================
// Vitis HLS - High-Level Synthesis from C, C++ and OpenCL v2023.2 (64-bit)
// Tool Version Limit: 2023.10
// Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
// Copyright 2022-2023 Advanced Micro Devices, Inc. All Rights Reserved.
// 
// ==============================================================
#ifndef XPE_H
#define XPE_H

#ifdef __cplusplus
extern "C" {
#endif

/***************************** Include Files *********************************/
#ifndef __linux__
#include "xil_types.h"
#include "xil_assert.h"
#include "xstatus.h"
#include "xil_io.h"
#else
#include <stdint.h>
#include <assert.h>
#include <dirent.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/mman.h>
#include <unistd.h>
#include <stddef.h>
#endif
#include "xpe_hw.h"

/**************************** Type Definitions ******************************/
#ifdef __linux__
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef uint64_t u64;
#else
typedef struct {
#ifdef SDT
    char *Name;
#else
    u16 DeviceId;
#endif
    u64 Control_BaseAddress;
} XPe_Config;
#endif

typedef struct {
    u64 Control_BaseAddress;
    u32 IsReady;
} XPe;

typedef u32 word_type;

/***************** Macros (Inline Functions) Definitions *********************/
#ifndef __linux__
#define XPe_WriteReg(BaseAddress, RegOffset, Data) \
    Xil_Out32((BaseAddress) + (RegOffset), (u32)(Data))
#define XPe_ReadReg(BaseAddress, RegOffset) \
    Xil_In32((BaseAddress) + (RegOffset))
#else
#define XPe_WriteReg(BaseAddress, RegOffset, Data) \
    *(volatile u32*)((BaseAddress) + (RegOffset)) = (u32)(Data)
#define XPe_ReadReg(BaseAddress, RegOffset) \
    *(volatile u32*)((BaseAddress) + (RegOffset))

#define Xil_AssertVoid(expr)    assert(expr)
#define Xil_AssertNonvoid(expr) assert(expr)

#define XST_SUCCESS             0
#define XST_DEVICE_NOT_FOUND    2
#define XST_OPEN_DEVICE_FAILED  3
#define XIL_COMPONENT_IS_READY  1
#endif

/************************** Function Prototypes *****************************/
#ifndef __linux__
#ifdef SDT
int XPe_Initialize(XPe *InstancePtr, UINTPTR BaseAddress);
XPe_Config* XPe_LookupConfig(UINTPTR BaseAddress);
#else
int XPe_Initialize(XPe *InstancePtr, u16 DeviceId);
XPe_Config* XPe_LookupConfig(u16 DeviceId);
#endif
int XPe_CfgInitialize(XPe *InstancePtr, XPe_Config *ConfigPtr);
#else
int XPe_Initialize(XPe *InstancePtr, const char* InstanceName);
int XPe_Release(XPe *InstancePtr);
#endif

void XPe_Start(XPe *InstancePtr);
u32 XPe_IsDone(XPe *InstancePtr);
u32 XPe_IsIdle(XPe *InstancePtr);
u32 XPe_IsReady(XPe *InstancePtr);
void XPe_EnableAutoRestart(XPe *InstancePtr);
void XPe_DisableAutoRestart(XPe *InstancePtr);


void XPe_InterruptGlobalEnable(XPe *InstancePtr);
void XPe_InterruptGlobalDisable(XPe *InstancePtr);
void XPe_InterruptEnable(XPe *InstancePtr, u32 Mask);
void XPe_InterruptDisable(XPe *InstancePtr, u32 Mask);
void XPe_InterruptClear(XPe *InstancePtr, u32 Mask);
u32 XPe_InterruptGetEnabled(XPe *InstancePtr);
u32 XPe_InterruptGetStatus(XPe *InstancePtr);

#ifdef __cplusplus
}
#endif

#endif
