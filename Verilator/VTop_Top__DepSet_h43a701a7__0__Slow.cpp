// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "VTop__pch.h"
#include "VTop_Top.h"

VL_ATTR_COLD void VTop_Top___eval_initial__TOP__Top(VTop_Top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VTop_Top___eval_initial__TOP__Top\n"); );
    // Body
    vlSelf->__PVT__registerFile__DOT__registers[0U] = 0U;
}

VL_ATTR_COLD void VTop_Top___ctor_var_reset(VTop_Top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VTop_Top___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->__SYM__interrupt = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(1024, vlSelf->dbg_registers);
    vlSelf->dbg_IF_ID_Valid = VL_RAND_RESET_I(1);
    vlSelf->dbg_ID_EX_Valid = VL_RAND_RESET_I(1);
    vlSelf->dbg_EX_MEM_Valid = VL_RAND_RESET_I(1);
    vlSelf->dbg_MEM_WB_Valid = VL_RAND_RESET_I(1);
    vlSelf->dbg_IF_ID_programCounter = VL_RAND_RESET_I(32);
    vlSelf->dbg_IF_ID_instruction = VL_RAND_RESET_I(32);
    vlSelf->dbg_ID_EX_programCounter = VL_RAND_RESET_I(32);
    vlSelf->dbg_EX_MEM_programCounter = VL_RAND_RESET_I(32);
    vlSelf->dbg_MEM_WB_programCounter = VL_RAND_RESET_I(32);
    vlSelf->dbg_trap = VL_RAND_RESET_I(1);
    vlSelf->dbg_IMEM_data = VL_RAND_RESET_I(32);
    vlSelf->dbg_IMEM_valid = VL_RAND_RESET_I(1);
    vlSelf->dbg_pc = VL_RAND_RESET_I(32);
    vlSelf->dbg_wb_value = VL_RAND_RESET_I(32);
    vlSelf->forwardEnable1 = VL_RAND_RESET_I(1);
    vlSelf->forwardEnable2 = VL_RAND_RESET_I(1);
    vlSelf->forwardData1 = VL_RAND_RESET_I(32);
    vlSelf->forwardData2 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(1024, vlSelf->__PVT__debug_regs_flat);
    vlSelf->__PVT__fetchDecodeControl = VL_RAND_RESET_I(2);
    vlSelf->__PVT__decodeExecuteControl = VL_RAND_RESET_I(2);
    vlSelf->__PVT__executeMemoryControl = VL_RAND_RESET_I(2);
    vlSelf->__PVT__memoryWritebackControl = VL_RAND_RESET_I(2);
    vlSelf->__PVT__controlReset = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mcause = VL_RAND_RESET_I(4);
    vlSelf->__PVT__mtval = VL_RAND_RESET_I(32);
    vlSelf->__PVT__readData1 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__readData2 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__csrReadData = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(101, vlSelf->__PVT__fetchDecodePayload);
    VL_RAND_RESET_W(245, vlSelf->__PVT__decodeExecutePayload);
    vlSelf->__PVT__readAddress1 = VL_RAND_RESET_I(5);
    vlSelf->__PVT__readAddress2 = VL_RAND_RESET_I(5);
    vlSelf->__PVT__decodeCombIllegal = VL_RAND_RESET_I(1);
    vlSelf->__PVT__branchValid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__branchData = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(217, vlSelf->__PVT__executeMemoryPayload);
    vlSelf->__PVT__readCSR = VL_RAND_RESET_I(4);
    vlSelf->__PVT__mretSignal = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(146, vlSelf->__PVT__memoryWritebackPayload);
    vlSelf->__PVT__storeValid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__stallControl = VL_RAND_RESET_I(1);
    vlSelf->__PVT__destinationEnable = VL_RAND_RESET_I(1);
    vlSelf->__PVT__writeData = VL_RAND_RESET_I(32);
    vlSelf->__PVT__csrDestinationEnable = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dualValid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__csrForwardData = VL_RAND_RESET_I(32);
    vlSelf->__PVT__csrForwardEnable = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__csrFile__DOT__csrs[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->csrFile__DOT____Vstrobe0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__csrFile__DOT__unnamedblk1__DOT__old = VL_RAND_RESET_I(32);
    vlSelf->__PVT__fetch__DOT__programCounter = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(245, vlSelf->__PVT__decode__DOT__decodeExecuteCandidate);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->__PVT__registerFile__DOT__registers[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__PVT__execute__DOT__result = VL_RAND_RESET_I(32);
    vlSelf->__PVT__execute__DOT__forwardCorrectedCSRReadData = VL_RAND_RESET_I(32);
    vlSelf->__PVT__execute__DOT__illegal = VL_RAND_RESET_I(1);
    vlSelf->__PVT__memory__DOT__illegal = VL_RAND_RESET_I(1);
    vlSelf->__PVT__memory__DOT__accessFault = VL_RAND_RESET_I(1);
    vlSelf->__PVT__memory__DOT__storeReq = VL_RAND_RESET_I(1);
    vlSelf->__PVT__memory__DOT__storeByteEnable = VL_RAND_RESET_I(4);
    vlSelf->memory__DOT____Vstrobe0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__memory__DOT__unnamedblk1__DOT__word = VL_RAND_RESET_I(32);
    vlSelf->__PVT__memory__DOT__unnamedblk1__DOT__b = VL_RAND_RESET_I(8);
    vlSelf->__PVT__memory__DOT__unnamedblk1__DOT__h = VL_RAND_RESET_I(16);
    vlSelf->__Vdly__fetch__DOT__programCounter = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__storeValid = VL_RAND_RESET_I(1);
}
