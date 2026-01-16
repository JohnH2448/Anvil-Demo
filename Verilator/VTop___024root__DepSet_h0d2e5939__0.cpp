// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "VTop__pch.h"
#include "VTop___024root.h"

VL_INLINE_OPT void VTop___024root___ico_sequent__TOP__0(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->Top__DOT__controlReset = 0U;
    vlSelf->Top__DOT__instructionData = 0x13U;
    vlSelf->Top__DOT__instructionDataValid = 0U;
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((IData)(vlSelf->dbg_ID_EX_Valid) & (vlSelf->Top__DOT__decodeExecutePayload[0U] 
                                                 >> 1U))) {
            vlSelf->Top__DOT__controlReset = 1U;
        } else if (((IData)(vlSelf->dbg_MEM_WB_Valid) 
                    & (vlSelf->Top__DOT__memoryWritebackPayload[1U] 
                       >> 8U))) {
            vlSelf->Top__DOT__controlReset = 1U;
        }
        vlSelf->Top__DOT__imem_inst__DOT__unnamedblk1__DOT__off_bytes 
            = (vlSelf->dbg_pc - (IData)(0x80000000U));
        if (((0U == (3U & vlSelf->dbg_pc)) & (0x1000U 
                                              > vlSelf->Top__DOT__imem_inst__DOT__unnamedblk1__DOT__off_bytes))) {
            vlSelf->Top__DOT__instructionData = vlSelf->Top__DOT__imem_inst__DOT__mem
                [(0x3ffU & (vlSelf->Top__DOT__imem_inst__DOT__unnamedblk1__DOT__off_bytes 
                            >> 2U))];
            vlSelf->Top__DOT__instructionDataValid = 1U;
        }
        vlSelf->Top__DOT__loadDataValid = 1U;
    } else {
        vlSelf->Top__DOT__loadDataValid = 0U;
    }
    vlSelf->dbg_trap = vlSelf->Top__DOT__controlReset;
    vlSelf->dbg_IMEM_data = vlSelf->Top__DOT__instructionData;
    vlSelf->dbg_IMEM_valid = vlSelf->Top__DOT__instructionDataValid;
}

VL_INLINE_OPT void VTop___024root___ico_comb__TOP__0(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___ico_comb__TOP__0\n"); );
    // Init
    IData/*31:0*/ Top__DOT__execute__DOT__operand1;
    Top__DOT__execute__DOT__operand1 = 0;
    IData/*31:0*/ Top__DOT__execute__DOT__operand2;
    Top__DOT__execute__DOT__operand2 = 0;
    IData/*31:0*/ Top__DOT__execute__DOT__brOp1;
    Top__DOT__execute__DOT__brOp1 = 0;
    IData/*31:0*/ Top__DOT__execute__DOT__brOp2;
    Top__DOT__execute__DOT__brOp2 = 0;
    IData/*31:0*/ Top__DOT__execute__DOT__csrOperand;
    Top__DOT__execute__DOT__csrOperand = 0;
    IData/*31:0*/ Top__DOT__execute__DOT__tempResult;
    Top__DOT__execute__DOT__tempResult = 0;
    CData/*3:0*/ Top__DOT__memory__DOT__storeByteEnable;
    Top__DOT__memory__DOT__storeByteEnable = 0;
    // Body
    vlSelf->Top__DOT__stallControl = (1U & (((IData)(vlSelf->dbg_EX_MEM_Valid) 
                                             & ((~ 
                                                 ((IData)(vlSelf->Top__DOT__memory__DOT__illegal) 
                                                  | (IData)(vlSelf->Top__DOT__memoryWritebackControl))) 
                                                & (vlSelf->Top__DOT__executeMemoryPayload[3U] 
                                                   >> 0x10U)))
                                             ? (~ (IData)(vlSelf->Top__DOT__loadDataValid))
                                             : ((IData)(vlSelf->Top__DOT__memory__DOT__storeReq) 
                                                | ((~ (IData)(vlSelf->Top__DOT__storeComplete)) 
                                                   & (IData)(vlSelf->Top__DOT__storeValid)))));
    vlSelf->Top__DOT__memoryWritebackControl = 0U;
    vlSelf->Top__DOT__executeMemoryControl = 0U;
    Top__DOT__memory__DOT__storeByteEnable = 0U;
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((IData)(vlSelf->dbg_ID_EX_Valid) 
                      & (vlSelf->Top__DOT__decodeExecutePayload[0U] 
                         >> 1U))))) {
            if (((IData)(vlSelf->dbg_MEM_WB_Valid) 
                 & (vlSelf->Top__DOT__memoryWritebackPayload[1U] 
                    >> 8U))) {
                vlSelf->Top__DOT__memoryWritebackControl 
                    = (1U | (IData)(vlSelf->Top__DOT__memoryWritebackControl));
            }
        }
        if (vlSelf->Top__DOT__stallControl) {
            vlSelf->Top__DOT__memoryWritebackControl 
                = (2U | (IData)(vlSelf->Top__DOT__memoryWritebackControl));
        }
    }
    if ((1U & (IData)(((0x80U == (0x180U & vlSelf->Top__DOT__executeMemoryPayload[1U])) 
                       & (~ (IData)(vlSelf->Top__DOT__memoryWritebackControl)))))) {
        if ((0x8000U & vlSelf->Top__DOT__executeMemoryPayload[3U])) {
            if ((0U == (3U & (vlSelf->Top__DOT__executeMemoryPayload[3U] 
                              >> 0xdU)))) {
                Top__DOT__memory__DOT__storeByteEnable = 1U;
            } else if ((1U == (3U & (vlSelf->Top__DOT__executeMemoryPayload[3U] 
                                     >> 0xdU)))) {
                if ((1U & (~ (vlSelf->Top__DOT__executeMemoryPayload[2U] 
                              >> 0xcU)))) {
                    Top__DOT__memory__DOT__storeByteEnable = 3U;
                }
            } else if ((3U == (3U & (vlSelf->Top__DOT__executeMemoryPayload[3U] 
                                     >> 0xdU)))) {
                if ((0U == (3U & (vlSelf->Top__DOT__executeMemoryPayload[2U] 
                                  >> 0xcU)))) {
                    Top__DOT__memory__DOT__storeByteEnable = 0xfU;
                }
            }
        }
    }
    vlSelf->Top__DOT__branchValid = 0U;
    vlSelf->Top__DOT__readCSR = 0U;
    Top__DOT__execute__DOT__tempResult = 0U;
    Top__DOT__execute__DOT__operand1 = 0U;
    Top__DOT__execute__DOT__operand2 = 0U;
    vlSelf->Top__DOT__execute__DOT__result = 0U;
    vlSelf->Top__DOT__branchData = 0U;
    vlSelf->Top__DOT__execute__DOT__forwardCorrectedCSRReadData 
        = ((IData)(vlSelf->Top__DOT__csrForwardEnable)
            ? vlSelf->Top__DOT__csrForwardData : vlSelf->Top__DOT__csrReadData);
    Top__DOT__execute__DOT__brOp1 = ((IData)(vlSelf->forwardEnable1)
                                      ? vlSelf->forwardData1
                                      : ((vlSelf->Top__DOT__decodeExecutePayload[4U] 
                                          << 0xfU) 
                                         | (vlSelf->Top__DOT__decodeExecutePayload[3U] 
                                            >> 0x11U)));
    Top__DOT__execute__DOT__brOp2 = ((IData)(vlSelf->forwardEnable2)
                                      ? vlSelf->forwardData2
                                      : ((vlSelf->Top__DOT__decodeExecutePayload[3U] 
                                          << 0xfU) 
                                         | (vlSelf->Top__DOT__decodeExecutePayload[2U] 
                                            >> 0x11U)));
    Top__DOT__execute__DOT__csrOperand = ((0x100U & 
                                           vlSelf->Top__DOT__decodeExecutePayload[0U])
                                           ? Top__DOT__execute__DOT__brOp1
                                           : (0x1fU 
                                              & (vlSelf->Top__DOT__decodeExecutePayload[0U] 
                                                 >> 3U)));
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((IData)(vlSelf->dbg_ID_EX_Valid) & (vlSelf->Top__DOT__decodeExecutePayload[0U] 
                                                 >> 1U))) {
            vlSelf->Top__DOT__executeMemoryControl 
                = (1U | (IData)(vlSelf->Top__DOT__executeMemoryControl));
        } else if (((IData)(vlSelf->dbg_MEM_WB_Valid) 
                    & (vlSelf->Top__DOT__memoryWritebackPayload[1U] 
                       >> 8U))) {
            vlSelf->Top__DOT__executeMemoryControl 
                = (1U | (IData)(vlSelf->Top__DOT__executeMemoryControl));
        }
        if (vlSelf->Top__DOT__stallControl) {
            vlSelf->Top__DOT__executeMemoryControl 
                = (2U | (IData)(vlSelf->Top__DOT__executeMemoryControl));
        }
        if (vlSelf->Top__DOT__loadDataValid) {
            if (((((IData)(vlSelf->dbg_ID_EX_Valid) 
                   & (IData)(vlSelf->dbg_EX_MEM_Valid)) 
                  & (0x400U == (0xe00U & vlSelf->Top__DOT__executeMemoryPayload[1U]))) 
                 & ((0U != (0x1fU & (vlSelf->Top__DOT__decodeExecutePayload[2U] 
                                     >> 0xcU))) & (
                                                   (0x1fU 
                                                    & (vlSelf->Top__DOT__decodeExecutePayload[2U] 
                                                       >> 0xcU)) 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->Top__DOT__executeMemoryPayload[3U] 
                                                       >> 0x11U)))))) {
                vlSelf->Top__DOT__executeMemoryControl 
                    = (1U | (IData)(vlSelf->Top__DOT__executeMemoryControl));
            }
            if (((((IData)(vlSelf->dbg_ID_EX_Valid) 
                   & (IData)(vlSelf->dbg_EX_MEM_Valid)) 
                  & (0x400U == (0xe00U & vlSelf->Top__DOT__executeMemoryPayload[1U]))) 
                 & ((0U != (0x1fU & (vlSelf->Top__DOT__decodeExecutePayload[2U] 
                                     >> 7U))) & ((0x1fU 
                                                  & (vlSelf->Top__DOT__decodeExecutePayload[2U] 
                                                     >> 7U)) 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->Top__DOT__executeMemoryPayload[3U] 
                                                     >> 0x11U)))))) {
                vlSelf->Top__DOT__executeMemoryControl 
                    = (1U | (IData)(vlSelf->Top__DOT__executeMemoryControl));
            }
        }
    }
    if ((0U == (3U & (vlSelf->Top__DOT__decodeExecutePayload[0U] 
                      >> 0xdU)))) {
        if ((2U & vlSelf->Top__DOT__decodeExecutePayload[1U])) {
            if ((1U & vlSelf->Top__DOT__decodeExecutePayload[1U])) {
                Top__DOT__execute__DOT__operand1 = 0U;
                Top__DOT__execute__DOT__operand2 = 
                    ((vlSelf->Top__DOT__decodeExecutePayload[2U] 
                      << 0x1eU) | (vlSelf->Top__DOT__decodeExecutePayload[1U] 
                                   >> 2U));
            } else {
                Top__DOT__execute__DOT__operand1 = 
                    ((vlSelf->Top__DOT__decodeExecutePayload[6U] 
                      << 0xfU) | (vlSelf->Top__DOT__decodeExecutePayload[5U] 
                                  >> 0x11U));
                Top__DOT__execute__DOT__operand2 = 
                    ((vlSelf->Top__DOT__decodeExecutePayload[2U] 
                      << 0x1eU) | (vlSelf->Top__DOT__decodeExecutePayload[1U] 
                                   >> 2U));
            }
        } else if ((1U & vlSelf->Top__DOT__decodeExecutePayload[1U])) {
            Top__DOT__execute__DOT__operand1 = ((IData)(vlSelf->forwardEnable1)
                                                 ? vlSelf->forwardData1
                                                 : 
                                                ((vlSelf->Top__DOT__decodeExecutePayload[4U] 
                                                  << 0xfU) 
                                                 | (vlSelf->Top__DOT__decodeExecutePayload[3U] 
                                                    >> 0x11U)));
            Top__DOT__execute__DOT__operand2 = ((vlSelf->Top__DOT__decodeExecutePayload[2U] 
                                                 << 0x1eU) 
                                                | (vlSelf->Top__DOT__decodeExecutePayload[1U] 
                                                   >> 2U));
        } else {
            Top__DOT__execute__DOT__operand1 = ((IData)(vlSelf->forwardEnable1)
                                                 ? vlSelf->forwardData1
                                                 : 
                                                ((vlSelf->Top__DOT__decodeExecutePayload[4U] 
                                                  << 0xfU) 
                                                 | (vlSelf->Top__DOT__decodeExecutePayload[3U] 
                                                    >> 0x11U)));
            Top__DOT__execute__DOT__operand2 = ((IData)(vlSelf->forwardEnable2)
                                                 ? vlSelf->forwardData2
                                                 : 
                                                ((vlSelf->Top__DOT__decodeExecutePayload[3U] 
                                                  << 0xfU) 
                                                 | (vlSelf->Top__DOT__decodeExecutePayload[2U] 
                                                    >> 0x11U)));
        }
        if ((0x800000U & vlSelf->Top__DOT__decodeExecutePayload[0U])) {
            if ((1U & (~ (vlSelf->Top__DOT__decodeExecutePayload[0U] 
                          >> 0x16U)))) {
                if ((1U & (~ (vlSelf->Top__DOT__decodeExecutePayload[0U] 
                              >> 0x15U)))) {
                    vlSelf->Top__DOT__execute__DOT__result 
                        = ((0x100000U & vlSelf->Top__DOT__decodeExecutePayload[0U])
                            ? ((Top__DOT__execute__DOT__operand1 
                                < Top__DOT__execute__DOT__operand2)
                                ? 1U : 0U) : (VL_LTS_III(32, Top__DOT__execute__DOT__operand1, Top__DOT__execute__DOT__operand2)
                                               ? 1U
                                               : 0U));
                }
            }
        } else {
            vlSelf->Top__DOT__execute__DOT__result 
                = ((0x400000U & vlSelf->Top__DOT__decodeExecutePayload[0U])
                    ? ((0x200000U & vlSelf->Top__DOT__decodeExecutePayload[0U])
                        ? ((0x100000U & vlSelf->Top__DOT__decodeExecutePayload[0U])
                            ? VL_SHIFTRS_III(32,32,5, Top__DOT__execute__DOT__operand1, 
                                             (0x1fU 
                                              & Top__DOT__execute__DOT__operand2))
                            : (Top__DOT__execute__DOT__operand1 
                               >> (0x1fU & Top__DOT__execute__DOT__operand2)))
                        : ((0x100000U & vlSelf->Top__DOT__decodeExecutePayload[0U])
                            ? (Top__DOT__execute__DOT__operand1 
                               << (0x1fU & Top__DOT__execute__DOT__operand2))
                            : (Top__DOT__execute__DOT__operand1 
                               ^ Top__DOT__execute__DOT__operand2)))
                    : ((0x200000U & vlSelf->Top__DOT__decodeExecutePayload[0U])
                        ? ((0x100000U & vlSelf->Top__DOT__decodeExecutePayload[0U])
                            ? (Top__DOT__execute__DOT__operand1 
                               | Top__DOT__execute__DOT__operand2)
                            : (Top__DOT__execute__DOT__operand1 
                               & Top__DOT__execute__DOT__operand2))
                        : ((0x100000U & vlSelf->Top__DOT__decodeExecutePayload[0U])
                            ? (Top__DOT__execute__DOT__operand1 
                               - Top__DOT__execute__DOT__operand2)
                            : (Top__DOT__execute__DOT__operand1 
                               + Top__DOT__execute__DOT__operand2))));
        }
        if ((1U & (vlSelf->Top__DOT__decodeExecutePayload[0U] 
                   & (~ (IData)(vlSelf->Top__DOT__executeMemoryControl))))) {
            if ((0x4000000U & vlSelf->Top__DOT__decodeExecutePayload[0U])) {
                if ((0x2000000U & vlSelf->Top__DOT__decodeExecutePayload[0U])) {
                    if ((1U & (~ (vlSelf->Top__DOT__decodeExecutePayload[0U] 
                                  >> 0x18U)))) {
                        vlSelf->Top__DOT__branchValid 
                            = (Top__DOT__execute__DOT__brOp1 
                               >= Top__DOT__execute__DOT__brOp2);
                    }
                } else {
                    vlSelf->Top__DOT__branchValid = 
                        ((0x1000000U & vlSelf->Top__DOT__decodeExecutePayload[0U])
                          ? (Top__DOT__execute__DOT__brOp1 
                             < Top__DOT__execute__DOT__brOp2)
                          : VL_GTES_III(32, Top__DOT__execute__DOT__brOp1, Top__DOT__execute__DOT__brOp2));
                }
            } else if ((0x2000000U & vlSelf->Top__DOT__decodeExecutePayload[0U])) {
                vlSelf->Top__DOT__branchValid = ((0x1000000U 
                                                  & vlSelf->Top__DOT__decodeExecutePayload[0U])
                                                  ? 
                                                 VL_LTS_III(32, Top__DOT__execute__DOT__brOp1, Top__DOT__execute__DOT__brOp2)
                                                  : 
                                                 (Top__DOT__execute__DOT__brOp1 
                                                  != Top__DOT__execute__DOT__brOp2));
            } else if ((0x1000000U & vlSelf->Top__DOT__decodeExecutePayload[0U])) {
                vlSelf->Top__DOT__branchValid = (Top__DOT__execute__DOT__brOp1 
                                                 == Top__DOT__execute__DOT__brOp2);
            }
            if ((1U == (3U & (vlSelf->Top__DOT__decodeExecutePayload[0U] 
                              >> 0x12U)))) {
                vlSelf->Top__DOT__branchValid = 1U;
            } else if ((2U == (3U & (vlSelf->Top__DOT__decodeExecutePayload[0U] 
                                     >> 0x12U)))) {
                vlSelf->Top__DOT__branchValid = 1U;
                vlSelf->Top__DOT__branchData = (0xfffffffeU 
                                                & vlSelf->Top__DOT__execute__DOT__result);
            }
        } else {
            vlSelf->Top__DOT__branchValid = 0U;
        }
        if ((2U != (3U & (vlSelf->Top__DOT__decodeExecutePayload[0U] 
                          >> 0x12U)))) {
            vlSelf->Top__DOT__branchData = vlSelf->Top__DOT__execute__DOT__result;
        }
        if (vlSelf->Top__DOT__execute__DOT__redirectAsserted) {
            vlSelf->Top__DOT__branchValid = 0U;
        }
    } else {
        vlSelf->Top__DOT__readCSR = (0xfU & (vlSelf->Top__DOT__decodeExecutePayload[0U] 
                                             >> 9U));
        if ((1U == (3U & (vlSelf->Top__DOT__decodeExecutePayload[0U] 
                          >> 0xdU)))) {
            Top__DOT__execute__DOT__tempResult = Top__DOT__execute__DOT__csrOperand;
        } else if ((2U == (3U & (vlSelf->Top__DOT__decodeExecutePayload[0U] 
                                 >> 0xdU)))) {
            Top__DOT__execute__DOT__tempResult = (vlSelf->Top__DOT__execute__DOT__forwardCorrectedCSRReadData 
                                                  | Top__DOT__execute__DOT__csrOperand);
        } else if ((3U == (3U & (vlSelf->Top__DOT__decodeExecutePayload[0U] 
                                 >> 0xdU)))) {
            Top__DOT__execute__DOT__tempResult = (vlSelf->Top__DOT__execute__DOT__forwardCorrectedCSRReadData 
                                                  & (~ Top__DOT__execute__DOT__csrOperand));
        }
        if ((8U & (IData)(vlSelf->Top__DOT__readCSR))) {
            vlSelf->Top__DOT__execute__DOT__result 
                = ((4U & (IData)(vlSelf->Top__DOT__readCSR))
                    ? ((2U & (IData)(vlSelf->Top__DOT__readCSR))
                        ? Top__DOT__execute__DOT__tempResult
                        : ((1U & (IData)(vlSelf->Top__DOT__readCSR))
                            ? vlSelf->Top__DOT__execute__DOT__forwardCorrectedCSRReadData
                            : Top__DOT__execute__DOT__tempResult))
                    : Top__DOT__execute__DOT__tempResult);
        } else if ((4U & (IData)(vlSelf->Top__DOT__readCSR))) {
            if ((2U & (IData)(vlSelf->Top__DOT__readCSR))) {
                vlSelf->Top__DOT__execute__DOT__result 
                    = ((1U & (IData)(vlSelf->Top__DOT__readCSR))
                        ? Top__DOT__execute__DOT__tempResult
                        : (0xfffffffcU & Top__DOT__execute__DOT__tempResult));
            } else if ((1U & (IData)(vlSelf->Top__DOT__readCSR))) {
                vlSelf->Top__DOT__execute__DOT__result 
                    = Top__DOT__execute__DOT__tempResult;
            } else {
                vlSelf->Top__DOT__execute__DOT__result = 0U;
                vlSelf->Top__DOT__execute__DOT__result 
                    = ((0xfffffff7U & vlSelf->Top__DOT__execute__DOT__result) 
                       | (8U & Top__DOT__execute__DOT__tempResult));
                vlSelf->Top__DOT__execute__DOT__result 
                    = ((0xffffff7fU & vlSelf->Top__DOT__execute__DOT__result) 
                       | (0x80U & Top__DOT__execute__DOT__tempResult));
                vlSelf->Top__DOT__execute__DOT__result 
                    = ((0xfffff7ffU & vlSelf->Top__DOT__execute__DOT__result) 
                       | (0x800U & Top__DOT__execute__DOT__tempResult));
            }
        } else if ((2U & (IData)(vlSelf->Top__DOT__readCSR))) {
            vlSelf->Top__DOT__execute__DOT__result 
                = Top__DOT__execute__DOT__tempResult;
        } else if ((1U & (IData)(vlSelf->Top__DOT__readCSR))) {
            vlSelf->Top__DOT__execute__DOT__result 
                = (0xfffffffcU & Top__DOT__execute__DOT__tempResult);
        } else {
            vlSelf->Top__DOT__execute__DOT__result = 0U;
            vlSelf->Top__DOT__execute__DOT__result 
                = ((0xfffffff7U & vlSelf->Top__DOT__execute__DOT__result) 
                   | (8U & Top__DOT__execute__DOT__tempResult));
            vlSelf->Top__DOT__execute__DOT__result 
                = ((0xffffff7fU & vlSelf->Top__DOT__execute__DOT__result) 
                   | (0x80U & Top__DOT__execute__DOT__tempResult));
            vlSelf->Top__DOT__execute__DOT__result 
                = (0x1800U | vlSelf->Top__DOT__execute__DOT__result);
        }
    }
    vlSelf->Top__DOT__realStoreByteEnable = (0xfU & 
                                             ((IData)(Top__DOT__memory__DOT__storeByteEnable) 
                                              << (3U 
                                                  & (vlSelf->Top__DOT__executeMemoryPayload[2U] 
                                                     >> 0xcU))));
    vlSelf->Top__DOT__fetchDecodeControl = 0U;
    vlSelf->Top__DOT__decodeExecuteControl = 0U;
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((IData)(vlSelf->dbg_ID_EX_Valid) & (vlSelf->Top__DOT__decodeExecutePayload[0U] 
                                                 >> 1U))) {
            vlSelf->Top__DOT__fetchDecodeControl = 
                (1U | (IData)(vlSelf->Top__DOT__fetchDecodeControl));
            vlSelf->Top__DOT__decodeExecuteControl 
                = (1U | (IData)(vlSelf->Top__DOT__decodeExecuteControl));
        } else if (((IData)(vlSelf->dbg_MEM_WB_Valid) 
                    & (vlSelf->Top__DOT__memoryWritebackPayload[1U] 
                       >> 8U))) {
            vlSelf->Top__DOT__fetchDecodeControl = 
                (1U | (IData)(vlSelf->Top__DOT__fetchDecodeControl));
            vlSelf->Top__DOT__decodeExecuteControl 
                = (1U | (IData)(vlSelf->Top__DOT__decodeExecuteControl));
        } else if (vlSelf->Top__DOT__branchValid) {
            vlSelf->Top__DOT__fetchDecodeControl = 
                (1U | (IData)(vlSelf->Top__DOT__fetchDecodeControl));
            vlSelf->Top__DOT__decodeExecuteControl 
                = (1U | (IData)(vlSelf->Top__DOT__decodeExecuteControl));
        }
        if (vlSelf->Top__DOT__stallControl) {
            vlSelf->Top__DOT__fetchDecodeControl = 
                (2U | (IData)(vlSelf->Top__DOT__fetchDecodeControl));
            vlSelf->Top__DOT__decodeExecuteControl 
                = (2U | (IData)(vlSelf->Top__DOT__decodeExecuteControl));
        }
        if (vlSelf->Top__DOT__loadDataValid) {
            if (((((IData)(vlSelf->dbg_ID_EX_Valid) 
                   & (IData)(vlSelf->dbg_EX_MEM_Valid)) 
                  & (0x400U == (0xe00U & vlSelf->Top__DOT__executeMemoryPayload[1U]))) 
                 & ((0U != (0x1fU & (vlSelf->Top__DOT__decodeExecutePayload[2U] 
                                     >> 0xcU))) & (
                                                   (0x1fU 
                                                    & (vlSelf->Top__DOT__decodeExecutePayload[2U] 
                                                       >> 0xcU)) 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->Top__DOT__executeMemoryPayload[3U] 
                                                       >> 0x11U)))))) {
                vlSelf->Top__DOT__fetchDecodeControl 
                    = (2U | (IData)(vlSelf->Top__DOT__fetchDecodeControl));
                vlSelf->Top__DOT__decodeExecuteControl 
                    = (2U | (IData)(vlSelf->Top__DOT__decodeExecuteControl));
            }
            if (((((IData)(vlSelf->dbg_ID_EX_Valid) 
                   & (IData)(vlSelf->dbg_EX_MEM_Valid)) 
                  & (0x400U == (0xe00U & vlSelf->Top__DOT__executeMemoryPayload[1U]))) 
                 & ((0U != (0x1fU & (vlSelf->Top__DOT__decodeExecutePayload[2U] 
                                     >> 7U))) & ((0x1fU 
                                                  & (vlSelf->Top__DOT__decodeExecutePayload[2U] 
                                                     >> 7U)) 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->Top__DOT__executeMemoryPayload[3U] 
                                                     >> 0x11U)))))) {
                vlSelf->Top__DOT__fetchDecodeControl 
                    = (2U | (IData)(vlSelf->Top__DOT__fetchDecodeControl));
                vlSelf->Top__DOT__decodeExecuteControl 
                    = (2U | (IData)(vlSelf->Top__DOT__decodeExecuteControl));
            }
        }
    }
}

void VTop___024root___eval_ico(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VTop___024root___ico_sequent__TOP__0(vlSelf);
    }
    if ((3ULL & vlSelf->__VicoTriggered.word(0U))) {
        VTop___024root___ico_comb__TOP__0(vlSelf);
    }
}

void VTop___024root___eval_triggers__ico(VTop___024root* vlSelf);

bool VTop___024root___eval_phase__ico(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    VTop___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        VTop___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

VL_INLINE_OPT void VTop___024root___act_sequent__TOP__0(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___act_sequent__TOP__0\n"); );
    // Body
    vlSelf->Top__DOT__csrReadData = vlSelf->Top__DOT__csrFile__DOT__csrs
        [vlSelf->Top__DOT__readCSR];
}

VL_INLINE_OPT void VTop___024root___act_sequent__TOP__1(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___act_sequent__TOP__1\n"); );
    // Init
    CData/*0:0*/ Top__DOT__memory__DOT__storeConfirm;
    Top__DOT__memory__DOT__storeConfirm = 0;
    // Body
    vlSelf->Top__DOT__memory__DOT__illegal = 0U;
    Top__DOT__memory__DOT__storeConfirm = 0U;
    if ((1U & (IData)(((0x80U == (0x180U & vlSelf->Top__DOT__executeMemoryPayload[1U])) 
                       & (~ (IData)(vlSelf->Top__DOT__memoryWritebackControl)))))) {
        if ((0x10000U & vlSelf->Top__DOT__executeMemoryPayload[3U])) {
            if ((0U != (3U & (vlSelf->Top__DOT__executeMemoryPayload[3U] 
                              >> 0xdU)))) {
                if ((1U == (3U & (vlSelf->Top__DOT__executeMemoryPayload[3U] 
                                  >> 0xdU)))) {
                    if ((0x1000U & vlSelf->Top__DOT__executeMemoryPayload[2U])) {
                        vlSelf->Top__DOT__memory__DOT__illegal = 1U;
                    }
                } else if ((3U == (3U & (vlSelf->Top__DOT__executeMemoryPayload[3U] 
                                         >> 0xdU)))) {
                    if ((0U != (3U & (vlSelf->Top__DOT__executeMemoryPayload[2U] 
                                      >> 0xcU)))) {
                        vlSelf->Top__DOT__memory__DOT__illegal = 1U;
                    }
                } else {
                    vlSelf->Top__DOT__memory__DOT__illegal = 1U;
                }
            }
        }
        if ((0x8000U & vlSelf->Top__DOT__executeMemoryPayload[3U])) {
            if ((0U != (3U & (vlSelf->Top__DOT__executeMemoryPayload[3U] 
                              >> 0xdU)))) {
                if ((1U == (3U & (vlSelf->Top__DOT__executeMemoryPayload[3U] 
                                  >> 0xdU)))) {
                    if ((0x1000U & vlSelf->Top__DOT__executeMemoryPayload[2U])) {
                        vlSelf->Top__DOT__memory__DOT__illegal = 1U;
                    }
                } else if ((3U == (3U & (vlSelf->Top__DOT__executeMemoryPayload[3U] 
                                         >> 0xdU)))) {
                    if ((0U != (3U & (vlSelf->Top__DOT__executeMemoryPayload[2U] 
                                      >> 0xcU)))) {
                        vlSelf->Top__DOT__memory__DOT__illegal = 1U;
                    }
                } else {
                    vlSelf->Top__DOT__memory__DOT__illegal = 1U;
                }
            }
            if ((0U == (3U & (vlSelf->Top__DOT__executeMemoryPayload[3U] 
                              >> 0xdU)))) {
                Top__DOT__memory__DOT__storeConfirm = 1U;
            } else if ((1U == (3U & (vlSelf->Top__DOT__executeMemoryPayload[3U] 
                                     >> 0xdU)))) {
                if ((1U & (~ (vlSelf->Top__DOT__executeMemoryPayload[2U] 
                              >> 0xcU)))) {
                    Top__DOT__memory__DOT__storeConfirm = 1U;
                }
            } else if ((3U == (3U & (vlSelf->Top__DOT__executeMemoryPayload[3U] 
                                     >> 0xdU)))) {
                if ((0U == (3U & (vlSelf->Top__DOT__executeMemoryPayload[2U] 
                                  >> 0xcU)))) {
                    Top__DOT__memory__DOT__storeConfirm = 1U;
                }
            }
        }
    }
    vlSelf->Top__DOT__memory__DOT__storeReq = ((~ (IData)(vlSelf->Top__DOT__storeValid)) 
                                               & (IData)(Top__DOT__memory__DOT__storeConfirm));
}

VL_INLINE_OPT void VTop___024root___act_sequent__TOP__2(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___act_sequent__TOP__2\n"); );
    // Init
    CData/*3:0*/ Top__DOT__memory__DOT__storeByteEnable;
    Top__DOT__memory__DOT__storeByteEnable = 0;
    // Body
    vlSelf->Top__DOT__stallControl = (1U & (((IData)(vlSelf->dbg_EX_MEM_Valid) 
                                             & ((~ 
                                                 ((IData)(vlSelf->Top__DOT__memory__DOT__illegal) 
                                                  | (IData)(vlSelf->Top__DOT__memoryWritebackControl))) 
                                                & (vlSelf->Top__DOT__executeMemoryPayload[3U] 
                                                   >> 0x10U)))
                                             ? (~ (IData)(vlSelf->Top__DOT__loadDataValid))
                                             : ((IData)(vlSelf->Top__DOT__memory__DOT__storeReq) 
                                                | ((~ (IData)(vlSelf->Top__DOT__storeComplete)) 
                                                   & (IData)(vlSelf->Top__DOT__storeValid)))));
    vlSelf->Top__DOT__memoryWritebackControl = 0U;
    vlSelf->Top__DOT__executeMemoryControl = 0U;
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((IData)(vlSelf->dbg_ID_EX_Valid) 
                      & (vlSelf->Top__DOT__decodeExecutePayload[0U] 
                         >> 1U))))) {
            if (((IData)(vlSelf->dbg_MEM_WB_Valid) 
                 & (vlSelf->Top__DOT__memoryWritebackPayload[1U] 
                    >> 8U))) {
                vlSelf->Top__DOT__memoryWritebackControl 
                    = (1U | (IData)(vlSelf->Top__DOT__memoryWritebackControl));
            }
        }
        if (((IData)(vlSelf->dbg_ID_EX_Valid) & (vlSelf->Top__DOT__decodeExecutePayload[0U] 
                                                 >> 1U))) {
            vlSelf->Top__DOT__executeMemoryControl 
                = (1U | (IData)(vlSelf->Top__DOT__executeMemoryControl));
        } else if (((IData)(vlSelf->dbg_MEM_WB_Valid) 
                    & (vlSelf->Top__DOT__memoryWritebackPayload[1U] 
                       >> 8U))) {
            vlSelf->Top__DOT__executeMemoryControl 
                = (1U | (IData)(vlSelf->Top__DOT__executeMemoryControl));
        }
        if (vlSelf->Top__DOT__stallControl) {
            vlSelf->Top__DOT__memoryWritebackControl 
                = (2U | (IData)(vlSelf->Top__DOT__memoryWritebackControl));
            vlSelf->Top__DOT__executeMemoryControl 
                = (2U | (IData)(vlSelf->Top__DOT__executeMemoryControl));
        }
        if (vlSelf->Top__DOT__loadDataValid) {
            if (((((IData)(vlSelf->dbg_ID_EX_Valid) 
                   & (IData)(vlSelf->dbg_EX_MEM_Valid)) 
                  & (0x400U == (0xe00U & vlSelf->Top__DOT__executeMemoryPayload[1U]))) 
                 & ((0U != (0x1fU & (vlSelf->Top__DOT__decodeExecutePayload[2U] 
                                     >> 0xcU))) & (
                                                   (0x1fU 
                                                    & (vlSelf->Top__DOT__decodeExecutePayload[2U] 
                                                       >> 0xcU)) 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->Top__DOT__executeMemoryPayload[3U] 
                                                       >> 0x11U)))))) {
                vlSelf->Top__DOT__executeMemoryControl 
                    = (1U | (IData)(vlSelf->Top__DOT__executeMemoryControl));
            }
            if (((((IData)(vlSelf->dbg_ID_EX_Valid) 
                   & (IData)(vlSelf->dbg_EX_MEM_Valid)) 
                  & (0x400U == (0xe00U & vlSelf->Top__DOT__executeMemoryPayload[1U]))) 
                 & ((0U != (0x1fU & (vlSelf->Top__DOT__decodeExecutePayload[2U] 
                                     >> 7U))) & ((0x1fU 
                                                  & (vlSelf->Top__DOT__decodeExecutePayload[2U] 
                                                     >> 7U)) 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->Top__DOT__executeMemoryPayload[3U] 
                                                     >> 0x11U)))))) {
                vlSelf->Top__DOT__executeMemoryControl 
                    = (1U | (IData)(vlSelf->Top__DOT__executeMemoryControl));
            }
        }
    }
    Top__DOT__memory__DOT__storeByteEnable = 0U;
    if ((1U & (IData)(((0x80U == (0x180U & vlSelf->Top__DOT__executeMemoryPayload[1U])) 
                       & (~ (IData)(vlSelf->Top__DOT__memoryWritebackControl)))))) {
        if ((0x8000U & vlSelf->Top__DOT__executeMemoryPayload[3U])) {
            if ((0U == (3U & (vlSelf->Top__DOT__executeMemoryPayload[3U] 
                              >> 0xdU)))) {
                Top__DOT__memory__DOT__storeByteEnable = 1U;
            } else if ((1U == (3U & (vlSelf->Top__DOT__executeMemoryPayload[3U] 
                                     >> 0xdU)))) {
                if ((1U & (~ (vlSelf->Top__DOT__executeMemoryPayload[2U] 
                              >> 0xcU)))) {
                    Top__DOT__memory__DOT__storeByteEnable = 3U;
                }
            } else if ((3U == (3U & (vlSelf->Top__DOT__executeMemoryPayload[3U] 
                                     >> 0xdU)))) {
                if ((0U == (3U & (vlSelf->Top__DOT__executeMemoryPayload[2U] 
                                  >> 0xcU)))) {
                    Top__DOT__memory__DOT__storeByteEnable = 0xfU;
                }
            }
        }
    }
    vlSelf->Top__DOT__realStoreByteEnable = (0xfU & 
                                             ((IData)(Top__DOT__memory__DOT__storeByteEnable) 
                                              << (3U 
                                                  & (vlSelf->Top__DOT__executeMemoryPayload[2U] 
                                                     >> 0xcU))));
}

VL_INLINE_OPT void VTop___024root___act_sequent__TOP__3(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___act_sequent__TOP__3\n"); );
    // Body
    vlSelf->Top__DOT__readData1 = ((0U == (IData)(vlSelf->Top__DOT__readAddress1))
                                    ? 0U : (((((IData)(vlSelf->Top__DOT__destinationEnable) 
                                               & (0U 
                                                  != 
                                                  (0x1fU 
                                                   & (vlSelf->Top__DOT__memoryWritebackPayload[2U] 
                                                      >> 0xaU)))) 
                                              & ((0x1fU 
                                                  & (vlSelf->Top__DOT__memoryWritebackPayload[2U] 
                                                     >> 0xaU)) 
                                                 == (IData)(vlSelf->Top__DOT__readAddress1))) 
                                             & (IData)(vlSelf->dbg_MEM_WB_Valid))
                                             ? vlSelf->Top__DOT__writeData
                                             : vlSelf->Top__DOT__registerFile__DOT__registers
                                            [vlSelf->Top__DOT__readAddress1]));
}

VL_INLINE_OPT void VTop___024root___act_sequent__TOP__4(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___act_sequent__TOP__4\n"); );
    // Body
    vlSelf->Top__DOT__readData2 = ((0U == (IData)(vlSelf->Top__DOT__readAddress2))
                                    ? 0U : (((((IData)(vlSelf->Top__DOT__destinationEnable) 
                                               & (0U 
                                                  != 
                                                  (0x1fU 
                                                   & (vlSelf->Top__DOT__memoryWritebackPayload[2U] 
                                                      >> 0xaU)))) 
                                              & ((0x1fU 
                                                  & (vlSelf->Top__DOT__memoryWritebackPayload[2U] 
                                                     >> 0xaU)) 
                                                 == (IData)(vlSelf->Top__DOT__readAddress2))) 
                                             & (IData)(vlSelf->dbg_MEM_WB_Valid))
                                             ? vlSelf->Top__DOT__writeData
                                             : vlSelf->Top__DOT__registerFile__DOT__registers
                                            [vlSelf->Top__DOT__readAddress2]));
}

VL_INLINE_OPT void VTop___024root___act_comb__TOP__0(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___act_comb__TOP__0\n"); );
    // Init
    IData/*31:0*/ Top__DOT__execute__DOT__operand1;
    Top__DOT__execute__DOT__operand1 = 0;
    IData/*31:0*/ Top__DOT__execute__DOT__operand2;
    Top__DOT__execute__DOT__operand2 = 0;
    IData/*31:0*/ Top__DOT__execute__DOT__brOp1;
    Top__DOT__execute__DOT__brOp1 = 0;
    IData/*31:0*/ Top__DOT__execute__DOT__brOp2;
    Top__DOT__execute__DOT__brOp2 = 0;
    IData/*31:0*/ Top__DOT__execute__DOT__csrOperand;
    Top__DOT__execute__DOT__csrOperand = 0;
    IData/*31:0*/ Top__DOT__execute__DOT__tempResult;
    Top__DOT__execute__DOT__tempResult = 0;
    // Body
    vlSelf->Top__DOT__branchValid = 0U;
    vlSelf->Top__DOT__readCSR = 0U;
    Top__DOT__execute__DOT__tempResult = 0U;
    Top__DOT__execute__DOT__operand1 = 0U;
    Top__DOT__execute__DOT__operand2 = 0U;
    vlSelf->Top__DOT__execute__DOT__result = 0U;
    vlSelf->Top__DOT__branchData = 0U;
    vlSelf->Top__DOT__execute__DOT__forwardCorrectedCSRReadData 
        = ((IData)(vlSelf->Top__DOT__csrForwardEnable)
            ? vlSelf->Top__DOT__csrForwardData : vlSelf->Top__DOT__csrReadData);
    Top__DOT__execute__DOT__brOp1 = ((IData)(vlSelf->forwardEnable1)
                                      ? vlSelf->forwardData1
                                      : ((vlSelf->Top__DOT__decodeExecutePayload[4U] 
                                          << 0xfU) 
                                         | (vlSelf->Top__DOT__decodeExecutePayload[3U] 
                                            >> 0x11U)));
    Top__DOT__execute__DOT__brOp2 = ((IData)(vlSelf->forwardEnable2)
                                      ? vlSelf->forwardData2
                                      : ((vlSelf->Top__DOT__decodeExecutePayload[3U] 
                                          << 0xfU) 
                                         | (vlSelf->Top__DOT__decodeExecutePayload[2U] 
                                            >> 0x11U)));
    Top__DOT__execute__DOT__csrOperand = ((0x100U & 
                                           vlSelf->Top__DOT__decodeExecutePayload[0U])
                                           ? Top__DOT__execute__DOT__brOp1
                                           : (0x1fU 
                                              & (vlSelf->Top__DOT__decodeExecutePayload[0U] 
                                                 >> 3U)));
    if ((0U == (3U & (vlSelf->Top__DOT__decodeExecutePayload[0U] 
                      >> 0xdU)))) {
        if ((2U & vlSelf->Top__DOT__decodeExecutePayload[1U])) {
            if ((1U & vlSelf->Top__DOT__decodeExecutePayload[1U])) {
                Top__DOT__execute__DOT__operand1 = 0U;
                Top__DOT__execute__DOT__operand2 = 
                    ((vlSelf->Top__DOT__decodeExecutePayload[2U] 
                      << 0x1eU) | (vlSelf->Top__DOT__decodeExecutePayload[1U] 
                                   >> 2U));
            } else {
                Top__DOT__execute__DOT__operand1 = 
                    ((vlSelf->Top__DOT__decodeExecutePayload[6U] 
                      << 0xfU) | (vlSelf->Top__DOT__decodeExecutePayload[5U] 
                                  >> 0x11U));
                Top__DOT__execute__DOT__operand2 = 
                    ((vlSelf->Top__DOT__decodeExecutePayload[2U] 
                      << 0x1eU) | (vlSelf->Top__DOT__decodeExecutePayload[1U] 
                                   >> 2U));
            }
        } else if ((1U & vlSelf->Top__DOT__decodeExecutePayload[1U])) {
            Top__DOT__execute__DOT__operand1 = ((IData)(vlSelf->forwardEnable1)
                                                 ? vlSelf->forwardData1
                                                 : 
                                                ((vlSelf->Top__DOT__decodeExecutePayload[4U] 
                                                  << 0xfU) 
                                                 | (vlSelf->Top__DOT__decodeExecutePayload[3U] 
                                                    >> 0x11U)));
            Top__DOT__execute__DOT__operand2 = ((vlSelf->Top__DOT__decodeExecutePayload[2U] 
                                                 << 0x1eU) 
                                                | (vlSelf->Top__DOT__decodeExecutePayload[1U] 
                                                   >> 2U));
        } else {
            Top__DOT__execute__DOT__operand1 = ((IData)(vlSelf->forwardEnable1)
                                                 ? vlSelf->forwardData1
                                                 : 
                                                ((vlSelf->Top__DOT__decodeExecutePayload[4U] 
                                                  << 0xfU) 
                                                 | (vlSelf->Top__DOT__decodeExecutePayload[3U] 
                                                    >> 0x11U)));
            Top__DOT__execute__DOT__operand2 = ((IData)(vlSelf->forwardEnable2)
                                                 ? vlSelf->forwardData2
                                                 : 
                                                ((vlSelf->Top__DOT__decodeExecutePayload[3U] 
                                                  << 0xfU) 
                                                 | (vlSelf->Top__DOT__decodeExecutePayload[2U] 
                                                    >> 0x11U)));
        }
        if ((0x800000U & vlSelf->Top__DOT__decodeExecutePayload[0U])) {
            if ((1U & (~ (vlSelf->Top__DOT__decodeExecutePayload[0U] 
                          >> 0x16U)))) {
                if ((1U & (~ (vlSelf->Top__DOT__decodeExecutePayload[0U] 
                              >> 0x15U)))) {
                    vlSelf->Top__DOT__execute__DOT__result 
                        = ((0x100000U & vlSelf->Top__DOT__decodeExecutePayload[0U])
                            ? ((Top__DOT__execute__DOT__operand1 
                                < Top__DOT__execute__DOT__operand2)
                                ? 1U : 0U) : (VL_LTS_III(32, Top__DOT__execute__DOT__operand1, Top__DOT__execute__DOT__operand2)
                                               ? 1U
                                               : 0U));
                }
            }
        } else {
            vlSelf->Top__DOT__execute__DOT__result 
                = ((0x400000U & vlSelf->Top__DOT__decodeExecutePayload[0U])
                    ? ((0x200000U & vlSelf->Top__DOT__decodeExecutePayload[0U])
                        ? ((0x100000U & vlSelf->Top__DOT__decodeExecutePayload[0U])
                            ? VL_SHIFTRS_III(32,32,5, Top__DOT__execute__DOT__operand1, 
                                             (0x1fU 
                                              & Top__DOT__execute__DOT__operand2))
                            : (Top__DOT__execute__DOT__operand1 
                               >> (0x1fU & Top__DOT__execute__DOT__operand2)))
                        : ((0x100000U & vlSelf->Top__DOT__decodeExecutePayload[0U])
                            ? (Top__DOT__execute__DOT__operand1 
                               << (0x1fU & Top__DOT__execute__DOT__operand2))
                            : (Top__DOT__execute__DOT__operand1 
                               ^ Top__DOT__execute__DOT__operand2)))
                    : ((0x200000U & vlSelf->Top__DOT__decodeExecutePayload[0U])
                        ? ((0x100000U & vlSelf->Top__DOT__decodeExecutePayload[0U])
                            ? (Top__DOT__execute__DOT__operand1 
                               | Top__DOT__execute__DOT__operand2)
                            : (Top__DOT__execute__DOT__operand1 
                               & Top__DOT__execute__DOT__operand2))
                        : ((0x100000U & vlSelf->Top__DOT__decodeExecutePayload[0U])
                            ? (Top__DOT__execute__DOT__operand1 
                               - Top__DOT__execute__DOT__operand2)
                            : (Top__DOT__execute__DOT__operand1 
                               + Top__DOT__execute__DOT__operand2))));
        }
        if ((1U & (vlSelf->Top__DOT__decodeExecutePayload[0U] 
                   & (~ (IData)(vlSelf->Top__DOT__executeMemoryControl))))) {
            if ((0x4000000U & vlSelf->Top__DOT__decodeExecutePayload[0U])) {
                if ((0x2000000U & vlSelf->Top__DOT__decodeExecutePayload[0U])) {
                    if ((1U & (~ (vlSelf->Top__DOT__decodeExecutePayload[0U] 
                                  >> 0x18U)))) {
                        vlSelf->Top__DOT__branchValid 
                            = (Top__DOT__execute__DOT__brOp1 
                               >= Top__DOT__execute__DOT__brOp2);
                    }
                } else {
                    vlSelf->Top__DOT__branchValid = 
                        ((0x1000000U & vlSelf->Top__DOT__decodeExecutePayload[0U])
                          ? (Top__DOT__execute__DOT__brOp1 
                             < Top__DOT__execute__DOT__brOp2)
                          : VL_GTES_III(32, Top__DOT__execute__DOT__brOp1, Top__DOT__execute__DOT__brOp2));
                }
            } else if ((0x2000000U & vlSelf->Top__DOT__decodeExecutePayload[0U])) {
                vlSelf->Top__DOT__branchValid = ((0x1000000U 
                                                  & vlSelf->Top__DOT__decodeExecutePayload[0U])
                                                  ? 
                                                 VL_LTS_III(32, Top__DOT__execute__DOT__brOp1, Top__DOT__execute__DOT__brOp2)
                                                  : 
                                                 (Top__DOT__execute__DOT__brOp1 
                                                  != Top__DOT__execute__DOT__brOp2));
            } else if ((0x1000000U & vlSelf->Top__DOT__decodeExecutePayload[0U])) {
                vlSelf->Top__DOT__branchValid = (Top__DOT__execute__DOT__brOp1 
                                                 == Top__DOT__execute__DOT__brOp2);
            }
            if ((1U == (3U & (vlSelf->Top__DOT__decodeExecutePayload[0U] 
                              >> 0x12U)))) {
                vlSelf->Top__DOT__branchValid = 1U;
            } else if ((2U == (3U & (vlSelf->Top__DOT__decodeExecutePayload[0U] 
                                     >> 0x12U)))) {
                vlSelf->Top__DOT__branchValid = 1U;
                vlSelf->Top__DOT__branchData = (0xfffffffeU 
                                                & vlSelf->Top__DOT__execute__DOT__result);
            }
        } else {
            vlSelf->Top__DOT__branchValid = 0U;
        }
        if ((2U != (3U & (vlSelf->Top__DOT__decodeExecutePayload[0U] 
                          >> 0x12U)))) {
            vlSelf->Top__DOT__branchData = vlSelf->Top__DOT__execute__DOT__result;
        }
        if (vlSelf->Top__DOT__execute__DOT__redirectAsserted) {
            vlSelf->Top__DOT__branchValid = 0U;
        }
    } else {
        vlSelf->Top__DOT__readCSR = (0xfU & (vlSelf->Top__DOT__decodeExecutePayload[0U] 
                                             >> 9U));
        if ((1U == (3U & (vlSelf->Top__DOT__decodeExecutePayload[0U] 
                          >> 0xdU)))) {
            Top__DOT__execute__DOT__tempResult = Top__DOT__execute__DOT__csrOperand;
        } else if ((2U == (3U & (vlSelf->Top__DOT__decodeExecutePayload[0U] 
                                 >> 0xdU)))) {
            Top__DOT__execute__DOT__tempResult = (vlSelf->Top__DOT__execute__DOT__forwardCorrectedCSRReadData 
                                                  | Top__DOT__execute__DOT__csrOperand);
        } else if ((3U == (3U & (vlSelf->Top__DOT__decodeExecutePayload[0U] 
                                 >> 0xdU)))) {
            Top__DOT__execute__DOT__tempResult = (vlSelf->Top__DOT__execute__DOT__forwardCorrectedCSRReadData 
                                                  & (~ Top__DOT__execute__DOT__csrOperand));
        }
        if ((8U & (IData)(vlSelf->Top__DOT__readCSR))) {
            vlSelf->Top__DOT__execute__DOT__result 
                = ((4U & (IData)(vlSelf->Top__DOT__readCSR))
                    ? ((2U & (IData)(vlSelf->Top__DOT__readCSR))
                        ? Top__DOT__execute__DOT__tempResult
                        : ((1U & (IData)(vlSelf->Top__DOT__readCSR))
                            ? vlSelf->Top__DOT__execute__DOT__forwardCorrectedCSRReadData
                            : Top__DOT__execute__DOT__tempResult))
                    : Top__DOT__execute__DOT__tempResult);
        } else if ((4U & (IData)(vlSelf->Top__DOT__readCSR))) {
            if ((2U & (IData)(vlSelf->Top__DOT__readCSR))) {
                vlSelf->Top__DOT__execute__DOT__result 
                    = ((1U & (IData)(vlSelf->Top__DOT__readCSR))
                        ? Top__DOT__execute__DOT__tempResult
                        : (0xfffffffcU & Top__DOT__execute__DOT__tempResult));
            } else if ((1U & (IData)(vlSelf->Top__DOT__readCSR))) {
                vlSelf->Top__DOT__execute__DOT__result 
                    = Top__DOT__execute__DOT__tempResult;
            } else {
                vlSelf->Top__DOT__execute__DOT__result = 0U;
                vlSelf->Top__DOT__execute__DOT__result 
                    = ((0xfffffff7U & vlSelf->Top__DOT__execute__DOT__result) 
                       | (8U & Top__DOT__execute__DOT__tempResult));
                vlSelf->Top__DOT__execute__DOT__result 
                    = ((0xffffff7fU & vlSelf->Top__DOT__execute__DOT__result) 
                       | (0x80U & Top__DOT__execute__DOT__tempResult));
                vlSelf->Top__DOT__execute__DOT__result 
                    = ((0xfffff7ffU & vlSelf->Top__DOT__execute__DOT__result) 
                       | (0x800U & Top__DOT__execute__DOT__tempResult));
            }
        } else if ((2U & (IData)(vlSelf->Top__DOT__readCSR))) {
            vlSelf->Top__DOT__execute__DOT__result 
                = Top__DOT__execute__DOT__tempResult;
        } else if ((1U & (IData)(vlSelf->Top__DOT__readCSR))) {
            vlSelf->Top__DOT__execute__DOT__result 
                = (0xfffffffcU & Top__DOT__execute__DOT__tempResult);
        } else {
            vlSelf->Top__DOT__execute__DOT__result = 0U;
            vlSelf->Top__DOT__execute__DOT__result 
                = ((0xfffffff7U & vlSelf->Top__DOT__execute__DOT__result) 
                   | (8U & Top__DOT__execute__DOT__tempResult));
            vlSelf->Top__DOT__execute__DOT__result 
                = ((0xffffff7fU & vlSelf->Top__DOT__execute__DOT__result) 
                   | (0x80U & Top__DOT__execute__DOT__tempResult));
            vlSelf->Top__DOT__execute__DOT__result 
                = (0x1800U | vlSelf->Top__DOT__execute__DOT__result);
        }
    }
    vlSelf->Top__DOT__fetchDecodeControl = 0U;
    vlSelf->Top__DOT__decodeExecuteControl = 0U;
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((IData)(vlSelf->dbg_ID_EX_Valid) & (vlSelf->Top__DOT__decodeExecutePayload[0U] 
                                                 >> 1U))) {
            vlSelf->Top__DOT__fetchDecodeControl = 
                (1U | (IData)(vlSelf->Top__DOT__fetchDecodeControl));
            vlSelf->Top__DOT__decodeExecuteControl 
                = (1U | (IData)(vlSelf->Top__DOT__decodeExecuteControl));
        } else if (((IData)(vlSelf->dbg_MEM_WB_Valid) 
                    & (vlSelf->Top__DOT__memoryWritebackPayload[1U] 
                       >> 8U))) {
            vlSelf->Top__DOT__fetchDecodeControl = 
                (1U | (IData)(vlSelf->Top__DOT__fetchDecodeControl));
            vlSelf->Top__DOT__decodeExecuteControl 
                = (1U | (IData)(vlSelf->Top__DOT__decodeExecuteControl));
        } else if (vlSelf->Top__DOT__branchValid) {
            vlSelf->Top__DOT__fetchDecodeControl = 
                (1U | (IData)(vlSelf->Top__DOT__fetchDecodeControl));
            vlSelf->Top__DOT__decodeExecuteControl 
                = (1U | (IData)(vlSelf->Top__DOT__decodeExecuteControl));
        }
        if (vlSelf->Top__DOT__stallControl) {
            vlSelf->Top__DOT__fetchDecodeControl = 
                (2U | (IData)(vlSelf->Top__DOT__fetchDecodeControl));
            vlSelf->Top__DOT__decodeExecuteControl 
                = (2U | (IData)(vlSelf->Top__DOT__decodeExecuteControl));
        }
        if (vlSelf->Top__DOT__loadDataValid) {
            if (((((IData)(vlSelf->dbg_ID_EX_Valid) 
                   & (IData)(vlSelf->dbg_EX_MEM_Valid)) 
                  & (0x400U == (0xe00U & vlSelf->Top__DOT__executeMemoryPayload[1U]))) 
                 & ((0U != (0x1fU & (vlSelf->Top__DOT__decodeExecutePayload[2U] 
                                     >> 0xcU))) & (
                                                   (0x1fU 
                                                    & (vlSelf->Top__DOT__decodeExecutePayload[2U] 
                                                       >> 0xcU)) 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->Top__DOT__executeMemoryPayload[3U] 
                                                       >> 0x11U)))))) {
                vlSelf->Top__DOT__fetchDecodeControl 
                    = (2U | (IData)(vlSelf->Top__DOT__fetchDecodeControl));
                vlSelf->Top__DOT__decodeExecuteControl 
                    = (2U | (IData)(vlSelf->Top__DOT__decodeExecuteControl));
            }
            if (((((IData)(vlSelf->dbg_ID_EX_Valid) 
                   & (IData)(vlSelf->dbg_EX_MEM_Valid)) 
                  & (0x400U == (0xe00U & vlSelf->Top__DOT__executeMemoryPayload[1U]))) 
                 & ((0U != (0x1fU & (vlSelf->Top__DOT__decodeExecutePayload[2U] 
                                     >> 7U))) & ((0x1fU 
                                                  & (vlSelf->Top__DOT__decodeExecutePayload[2U] 
                                                     >> 7U)) 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->Top__DOT__executeMemoryPayload[3U] 
                                                     >> 0x11U)))))) {
                vlSelf->Top__DOT__fetchDecodeControl 
                    = (2U | (IData)(vlSelf->Top__DOT__fetchDecodeControl));
                vlSelf->Top__DOT__decodeExecuteControl 
                    = (2U | (IData)(vlSelf->Top__DOT__decodeExecuteControl));
            }
        }
    }
}

VL_INLINE_OPT void VTop___024root___act_comb__TOP__1(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___act_comb__TOP__1\n"); );
    // Init
    CData/*0:0*/ Top__DOT__decode__DOT__ro;
    Top__DOT__decode__DOT__ro = 0;
    // Body
    vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U] = 0U;
    vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[1U] = 0U;
    vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[2U] = 0U;
    vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[3U] = 0U;
    vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[4U] = 0U;
    vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[5U] = 0U;
    vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[6U] = 0U;
    Top__DOT__decode__DOT__ro = 0U;
    vlSelf->Top__DOT__readAddress1 = 0U;
    vlSelf->Top__DOT__readAddress2 = 0U;
    vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[2U] 
        = ((0x1ffffU & vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[2U]) 
           | (vlSelf->Top__DOT__readData2 << 0x11U));
    vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[3U] 
        = ((vlSelf->Top__DOT__readData2 >> 0xfU) | 
           (vlSelf->Top__DOT__readData1 << 0x11U));
    vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[4U] 
        = ((vlSelf->Top__DOT__readData1 >> 0xfU) | 
           ((IData)((((QData)((IData)(vlSelf->Top__DOT__fetchDecodePayload[2U])) 
                      << 0x3fU) | (((QData)((IData)(
                                                    vlSelf->Top__DOT__fetchDecodePayload[1U])) 
                                    << 0x1fU) | ((QData)((IData)(
                                                                 vlSelf->Top__DOT__fetchDecodePayload[0U])) 
                                                 >> 1U)))) 
            << 0x11U));
    vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[5U] 
        = (((IData)((((QData)((IData)(vlSelf->Top__DOT__fetchDecodePayload[2U])) 
                      << 0x3fU) | (((QData)((IData)(
                                                    vlSelf->Top__DOT__fetchDecodePayload[1U])) 
                                    << 0x1fU) | ((QData)((IData)(
                                                                 vlSelf->Top__DOT__fetchDecodePayload[0U])) 
                                                 >> 1U)))) 
            >> 0xfU) | ((IData)(((((QData)((IData)(
                                                   vlSelf->Top__DOT__fetchDecodePayload[2U])) 
                                   << 0x3fU) | (((QData)((IData)(
                                                                 vlSelf->Top__DOT__fetchDecodePayload[1U])) 
                                                 << 0x1fU) 
                                                | ((QData)((IData)(
                                                                   vlSelf->Top__DOT__fetchDecodePayload[0U])) 
                                                   >> 1U))) 
                                 >> 0x20U)) << 0x11U));
    vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[6U] 
        = ((IData)(((((QData)((IData)(vlSelf->Top__DOT__fetchDecodePayload[2U])) 
                      << 0x3fU) | (((QData)((IData)(
                                                    vlSelf->Top__DOT__fetchDecodePayload[1U])) 
                                    << 0x1fU) | ((QData)((IData)(
                                                                 vlSelf->Top__DOT__fetchDecodePayload[0U])) 
                                                 >> 1U))) 
                    >> 0x20U)) >> 0xfU);
    if ((0x80U & vlSelf->Top__DOT__fetchDecodePayload[2U])) {
        if ((0x40U & vlSelf->Top__DOT__fetchDecodePayload[2U])) {
            if ((0x20U & vlSelf->Top__DOT__fetchDecodePayload[2U])) {
                if ((0x10U & vlSelf->Top__DOT__fetchDecodePayload[2U])) {
                    vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U] 
                        = (2U | vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U]);
                } else if ((8U & vlSelf->Top__DOT__fetchDecodePayload[2U])) {
                    vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U] 
                        = (2U | vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U]);
                } else if ((4U & vlSelf->Top__DOT__fetchDecodePayload[2U])) {
                    if ((2U & vlSelf->Top__DOT__fetchDecodePayload[2U])) {
                        vlSelf->Top__DOT__readAddress1 
                            = (0x1fU & (vlSelf->Top__DOT__fetchDecodePayload[2U] 
                                        >> 0x10U));
                        vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[2U] 
                            = ((0xffffff83U & vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[2U]) 
                               | (0x7cU & (vlSelf->Top__DOT__fetchDecodePayload[2U] 
                                           >> 6U)));
                        vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U] 
                            = (0xfffc7fffU & vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U]);
                        if ((0U != (7U & (vlSelf->Top__DOT__fetchDecodePayload[2U] 
                                          >> 0xdU)))) {
                            vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U] 
                                = ((1U & vlSelf->Top__DOT__fetchDecodePayload[3U])
                                    ? ((vlSelf->Top__DOT__fetchDecodePayload[2U] 
                                        >> 0x1fU) ? 
                                       ((0x40000000U 
                                         & vlSelf->Top__DOT__fetchDecodePayload[2U])
                                         ? ((0x20000000U 
                                             & vlSelf->Top__DOT__fetchDecodePayload[2U])
                                             ? ((0x10000000U 
                                                 & vlSelf->Top__DOT__fetchDecodePayload[2U])
                                                 ? 
                                                (2U 
                                                 | vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U])
                                                 : 
                                                ((0x8000000U 
                                                  & vlSelf->Top__DOT__fetchDecodePayload[2U])
                                                  ? 
                                                 (2U 
                                                  | vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U])
                                                  : 
                                                 ((0x4000000U 
                                                   & vlSelf->Top__DOT__fetchDecodePayload[2U])
                                                   ? 
                                                  (2U 
                                                   | vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U])
                                                   : 
                                                  ((0x2000000U 
                                                    & vlSelf->Top__DOT__fetchDecodePayload[2U])
                                                    ? 
                                                   ((0x1000000U 
                                                     & vlSelf->Top__DOT__fetchDecodePayload[2U])
                                                     ? 
                                                    (2U 
                                                     | vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U])
                                                     : 
                                                    ((0x800000U 
                                                      & vlSelf->Top__DOT__fetchDecodePayload[2U])
                                                      ? 
                                                     ((0x400000U 
                                                       & vlSelf->Top__DOT__fetchDecodePayload[2U])
                                                       ? 
                                                      (2U 
                                                       | vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U])
                                                       : 
                                                      ((0x200000U 
                                                        & vlSelf->Top__DOT__fetchDecodePayload[2U])
                                                        ? 
                                                       (2U 
                                                        | vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U])
                                                        : 
                                                       (0x1800U 
                                                        | (0xffffe1ffU 
                                                           & vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U]))))
                                                      : 
                                                     ((0x400000U 
                                                       & vlSelf->Top__DOT__fetchDecodePayload[2U])
                                                       ? 
                                                      ((0xffffe1ffU 
                                                        & vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U]) 
                                                       | (((0x200000U 
                                                            & vlSelf->Top__DOT__fetchDecodePayload[2U])
                                                            ? 0xbU
                                                            : 0xaU) 
                                                          << 9U))
                                                       : 
                                                      ((0x200000U 
                                                        & vlSelf->Top__DOT__fetchDecodePayload[2U])
                                                        ? 
                                                       (0x1200U 
                                                        | (0xffffe1ffU 
                                                           & vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U]))
                                                        : 
                                                       (2U 
                                                        | vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U])))))
                                                    : 
                                                   (2U 
                                                    | vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U])))))
                                             : (2U 
                                                | vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U]))
                                         : (2U | vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U]))
                                        : ((0x40000000U 
                                            & vlSelf->Top__DOT__fetchDecodePayload[2U])
                                            ? ((0x20000000U 
                                                & vlSelf->Top__DOT__fetchDecodePayload[2U])
                                                ? (
                                                   (0x10000000U 
                                                    & vlSelf->Top__DOT__fetchDecodePayload[2U])
                                                    ? 
                                                   (2U 
                                                    | vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U])
                                                    : 
                                                   ((0x8000000U 
                                                     & vlSelf->Top__DOT__fetchDecodePayload[2U])
                                                     ? 
                                                    (2U 
                                                     | vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U])
                                                     : 
                                                    ((0x4000000U 
                                                      & vlSelf->Top__DOT__fetchDecodePayload[2U])
                                                      ? 
                                                     (2U 
                                                      | vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U])
                                                      : 
                                                     ((0x2000000U 
                                                       & vlSelf->Top__DOT__fetchDecodePayload[2U])
                                                       ? 
                                                      (2U 
                                                       | vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U])
                                                       : 
                                                      ((0x1000000U 
                                                        & vlSelf->Top__DOT__fetchDecodePayload[2U])
                                                        ? 
                                                       (2U 
                                                        | vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U])
                                                        : 
                                                       ((0x800000U 
                                                         & vlSelf->Top__DOT__fetchDecodePayload[2U])
                                                         ? 
                                                        (2U 
                                                         | vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U])
                                                         : 
                                                        ((0x400000U 
                                                          & vlSelf->Top__DOT__fetchDecodePayload[2U])
                                                          ? 
                                                         ((0x200000U 
                                                           & vlSelf->Top__DOT__fetchDecodePayload[2U])
                                                           ? 
                                                          (2U 
                                                           | vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U])
                                                           : 
                                                          (0x1e00U 
                                                           | vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U]))
                                                          : 
                                                         ((0x200000U 
                                                           & vlSelf->Top__DOT__fetchDecodePayload[2U])
                                                           ? 
                                                          (2U 
                                                           | vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U])
                                                           : 
                                                          (0x1c00U 
                                                           | (0xffffe1ffU 
                                                              & vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U]))))))))))
                                                : (2U 
                                                   | vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U]))
                                            : (2U | 
                                               vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U])))
                                    : ((vlSelf->Top__DOT__fetchDecodePayload[2U] 
                                        >> 0x1fU) ? 
                                       (2U | vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U])
                                        : ((0x40000000U 
                                            & vlSelf->Top__DOT__fetchDecodePayload[2U])
                                            ? ((0x20000000U 
                                                & vlSelf->Top__DOT__fetchDecodePayload[2U])
                                                ? (
                                                   (0x10000000U 
                                                    & vlSelf->Top__DOT__fetchDecodePayload[2U])
                                                    ? 
                                                   (2U 
                                                    | vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U])
                                                    : 
                                                   ((0x8000000U 
                                                     & vlSelf->Top__DOT__fetchDecodePayload[2U])
                                                     ? 
                                                    ((0x4000000U 
                                                      & vlSelf->Top__DOT__fetchDecodePayload[2U])
                                                      ? 
                                                     (2U 
                                                      | vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U])
                                                      : 
                                                     ((0x2000000U 
                                                       & vlSelf->Top__DOT__fetchDecodePayload[2U])
                                                       ? 
                                                      (2U 
                                                       | vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U])
                                                       : 
                                                      ((0x1000000U 
                                                        & vlSelf->Top__DOT__fetchDecodePayload[2U])
                                                        ? 
                                                       (2U 
                                                        | vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U])
                                                        : 
                                                       ((0x800000U 
                                                         & vlSelf->Top__DOT__fetchDecodePayload[2U])
                                                         ? 
                                                        ((0x400000U 
                                                          & vlSelf->Top__DOT__fetchDecodePayload[2U])
                                                          ? 
                                                         (2U 
                                                          | vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U])
                                                          : 
                                                         ((0x200000U 
                                                           & vlSelf->Top__DOT__fetchDecodePayload[2U])
                                                           ? 
                                                          (2U 
                                                           | vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U])
                                                           : 
                                                          (0x1a00U 
                                                           | (0xffffe1ffU 
                                                              & vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U]))))
                                                         : 
                                                        ((0xffffe1ffU 
                                                          & vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U]) 
                                                         | (((0x400000U 
                                                              & vlSelf->Top__DOT__fetchDecodePayload[2U])
                                                              ? 
                                                             ((0x200000U 
                                                               & vlSelf->Top__DOT__fetchDecodePayload[2U])
                                                               ? 3U
                                                               : 2U)
                                                              : 
                                                             ((0x200000U 
                                                               & vlSelf->Top__DOT__fetchDecodePayload[2U])
                                                               ? 1U
                                                               : 7U)) 
                                                            << 9U))))))
                                                     : 
                                                    ((0x4000000U 
                                                      & vlSelf->Top__DOT__fetchDecodePayload[2U])
                                                      ? 
                                                     (2U 
                                                      | vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U])
                                                      : 
                                                     ((0x2000000U 
                                                       & vlSelf->Top__DOT__fetchDecodePayload[2U])
                                                       ? 
                                                      (2U 
                                                       | vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U])
                                                       : 
                                                      ((0x1000000U 
                                                        & vlSelf->Top__DOT__fetchDecodePayload[2U])
                                                        ? 
                                                       (2U 
                                                        | vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U])
                                                        : 
                                                       ((0x800000U 
                                                         & vlSelf->Top__DOT__fetchDecodePayload[2U])
                                                         ? 
                                                        ((0x400000U 
                                                          & vlSelf->Top__DOT__fetchDecodePayload[2U])
                                                          ? 
                                                         (2U 
                                                          | vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U])
                                                          : 
                                                         ((0xffffe1ffU 
                                                           & vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U]) 
                                                          | (((0x200000U 
                                                               & vlSelf->Top__DOT__fetchDecodePayload[2U])
                                                               ? 6U
                                                               : 4U) 
                                                             << 9U)))
                                                         : 
                                                        ((0x400000U 
                                                          & vlSelf->Top__DOT__fetchDecodePayload[2U])
                                                          ? 
                                                         (2U 
                                                          | vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U])
                                                          : 
                                                         ((0xffffe1ffU 
                                                           & vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U]) 
                                                          | (((0x200000U 
                                                               & vlSelf->Top__DOT__fetchDecodePayload[2U])
                                                               ? 8U
                                                               : 0U) 
                                                             << 9U)))))))))
                                                : (2U 
                                                   | vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U]))
                                            : (2U | 
                                               vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U]))));
                            if ((0x8000U & vlSelf->Top__DOT__fetchDecodePayload[2U])) {
                                if ((0x4000U & vlSelf->Top__DOT__fetchDecodePayload[2U])) {
                                    if ((0x2000U & 
                                         vlSelf->Top__DOT__fetchDecodePayload[2U])) {
                                        vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U] 
                                            = (0x6000U 
                                               | vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U]);
                                        vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U] 
                                            = ((0xfffffe07U 
                                                & vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U]) 
                                               | (0xf8U 
                                                  & (vlSelf->Top__DOT__fetchDecodePayload[2U] 
                                                     >> 0xdU)));
                                        if ((0U != 
                                             (0x1fU 
                                              & (vlSelf->Top__DOT__fetchDecodePayload[2U] 
                                                 >> 0x10U)))) {
                                            vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U] 
                                                = (4U 
                                                   | vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U]);
                                        }
                                    } else {
                                        vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U] 
                                            = (0x4000U 
                                               | (0xffff9fffU 
                                                  & vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U]));
                                        vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U] 
                                            = ((0xfffffe07U 
                                                & vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U]) 
                                               | (0xf8U 
                                                  & (vlSelf->Top__DOT__fetchDecodePayload[2U] 
                                                     >> 0xdU)));
                                        if ((0U != 
                                             (0x1fU 
                                              & (vlSelf->Top__DOT__fetchDecodePayload[2U] 
                                                 >> 0x10U)))) {
                                            vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U] 
                                                = (4U 
                                                   | vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U]);
                                        }
                                    }
                                } else if ((0x2000U 
                                            & vlSelf->Top__DOT__fetchDecodePayload[2U])) {
                                    vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U] 
                                        = (0x2000U 
                                           | (0xffff9fffU 
                                              & vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U]));
                                    vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U] 
                                        = ((0xfffffe03U 
                                            & vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U]) 
                                           | (0xfffffffcU 
                                              & (4U 
                                                 | (0xf8U 
                                                    & (vlSelf->Top__DOT__fetchDecodePayload[2U] 
                                                       >> 0xdU)))));
                                } else {
                                    vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U] 
                                        = (2U | vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U]);
                                }
                            } else if ((0x4000U & vlSelf->Top__DOT__fetchDecodePayload[2U])) {
                                if ((0x2000U & vlSelf->Top__DOT__fetchDecodePayload[2U])) {
                                    vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U] 
                                        = (0x6000U 
                                           | vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U]);
                                    vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U] 
                                        = (0x100U | 
                                           vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U]);
                                    if ((0U != (IData)(vlSelf->Top__DOT__readAddress1))) {
                                        vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U] 
                                            = (4U | 
                                               vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U]);
                                    }
                                } else {
                                    vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U] 
                                        = (0x4000U 
                                           | (0xffff9fffU 
                                              & vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U]));
                                    vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U] 
                                        = (0x100U | 
                                           vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U]);
                                    if ((0U != (IData)(vlSelf->Top__DOT__readAddress1))) {
                                        vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U] 
                                            = (4U | 
                                               vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U]);
                                    }
                                }
                            } else if ((0x2000U & vlSelf->Top__DOT__fetchDecodePayload[2U])) {
                                vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U] 
                                    = (0x2000U | (0xffff9fffU 
                                                  & vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U]));
                                vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U] 
                                    = (0x100U | vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U]);
                                vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U] 
                                    = (4U | vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U]);
                            } else {
                                vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U] 
                                    = (2U | vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U]);
                            }
                            Top__DOT__decode__DOT__ro 
                                = (((((8U == (0xfU 
                                              & (vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U] 
                                                 >> 9U))) 
                                      | (9U == (0xfU 
                                                & (vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U] 
                                                   >> 9U)))) 
                                     | (0xaU == (0xfU 
                                                 & (vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U] 
                                                    >> 9U)))) 
                                    | (0xbU == (0xfU 
                                                & (vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U] 
                                                   >> 9U)))) 
                                   | (0xcU == (0xfU 
                                               & (vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U] 
                                                  >> 9U))));
                            if (((vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U] 
                                  >> 2U) & (IData)(Top__DOT__decode__DOT__ro))) {
                                vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U] 
                                    = (2U | vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U]);
                            }
                        }
                    } else {
                        vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U] 
                            = (2U | vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U]);
                    }
                } else {
                    vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U] 
                        = (2U | vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U]);
                }
            } else if ((0x10U & vlSelf->Top__DOT__fetchDecodePayload[2U])) {
                if ((8U & vlSelf->Top__DOT__fetchDecodePayload[2U])) {
                    if ((4U & vlSelf->Top__DOT__fetchDecodePayload[2U])) {
                        if ((2U & vlSelf->Top__DOT__fetchDecodePayload[2U])) {
                            vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[2U] 
                                = ((0xffffff83U & vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[2U]) 
                                   | (0x7cU & (vlSelf->Top__DOT__fetchDecodePayload[2U] 
                                               >> 6U)));
                            vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[1U] 
                                = (2U | (0xfffffffcU 
                                         & vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[1U]));
                            vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U] 
                                = (0x58000U | (0xfff07fffU 
                                               & vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U]));
                            vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[1U] 
                                = ((3U & vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[1U]) 
                                   | (0xfffffffcU & 
                                      (((- (IData)(
                                                   (1U 
                                                    & vlSelf->Top__DOT__fetchDecodePayload[3U]))) 
                                        << 0x17U) | 
                                       ((0x400000U 
                                         & (vlSelf->Top__DOT__fetchDecodePayload[3U] 
                                            << 0x16U)) 
                                        | ((0x3fc000U 
                                            & (vlSelf->Top__DOT__fetchDecodePayload[2U] 
                                               << 1U)) 
                                           | ((0x2000U 
                                               & (vlSelf->Top__DOT__fetchDecodePayload[2U] 
                                                  >> 8U)) 
                                              | (0x1ff8U 
                                                 & (vlSelf->Top__DOT__fetchDecodePayload[2U] 
                                                    >> 0x13U))))))));
                            vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[2U] 
                                = ((0xfffffffcU & vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[2U]) 
                                   | (3U & ((- (IData)(
                                                       (1U 
                                                        & vlSelf->Top__DOT__fetchDecodePayload[3U]))) 
                                            >> 9U)));
                        } else {
                            vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U] 
                                = (2U | vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U]);
                        }
                    } else {
                        vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U] 
                            = (2U | vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U]);
                    }
                } else {
                    vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U] 
                        = (2U | vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U]);
                }
            } else if ((8U & vlSelf->Top__DOT__fetchDecodePayload[2U])) {
                if ((4U & vlSelf->Top__DOT__fetchDecodePayload[2U])) {
                    if ((2U & vlSelf->Top__DOT__fetchDecodePayload[2U])) {
                        vlSelf->Top__DOT__readAddress1 
                            = (0x1fU & (vlSelf->Top__DOT__fetchDecodePayload[2U] 
                                        >> 0x10U));
                        vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[2U] 
                            = ((0xffffff83U & vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[2U]) 
                               | (0x7cU & (vlSelf->Top__DOT__fetchDecodePayload[2U] 
                                           >> 6U)));
                        vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[1U] 
                            = (1U | (0xfffffffcU & 
                                     vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[1U]));
                        vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U] 
                            = (0x98000U | (0xfff07fffU 
                                           & vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U]));
                        vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[1U] 
                            = ((3U & vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[1U]) 
                               | (0xfffffffcU & (((- (IData)(
                                                             (1U 
                                                              & vlSelf->Top__DOT__fetchDecodePayload[3U]))) 
                                                  << 0xeU) 
                                                 | (0x3ffcU 
                                                    & ((vlSelf->Top__DOT__fetchDecodePayload[3U] 
                                                        << 0xdU) 
                                                       | (0x1ffcU 
                                                          & (vlSelf->Top__DOT__fetchDecodePayload[2U] 
                                                             >> 0x13U)))))));
                        vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[2U] 
                            = ((0xfffffffcU & vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[2U]) 
                               | (3U & ((- (IData)(
                                                   (1U 
                                                    & vlSelf->Top__DOT__fetchDecodePayload[3U]))) 
                                        >> 0x12U)));
                        if ((0U != (7U & (vlSelf->Top__DOT__fetchDecodePayload[2U] 
                                          >> 0xdU)))) {
                            vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U] 
                                = (2U | vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U]);
                        }
                    } else {
                        vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U] 
                            = (2U | vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U]);
                    }
                } else {
                    vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U] 
                        = (2U | vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U]);
                }
            } else if ((4U & vlSelf->Top__DOT__fetchDecodePayload[2U])) {
                if ((2U & vlSelf->Top__DOT__fetchDecodePayload[2U])) {
                    vlSelf->Top__DOT__readAddress1 
                        = (0x1fU & (vlSelf->Top__DOT__fetchDecodePayload[2U] 
                                    >> 0x10U));
                    vlSelf->Top__DOT__readAddress2 
                        = (0x1fU & (vlSelf->Top__DOT__fetchDecodePayload[2U] 
                                    >> 0x15U));
                    vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[1U] 
                        = (2U | (0xfffffffcU & vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[1U]));
                    vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[1U] 
                        = ((3U & vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[1U]) 
                           | (0xfffffffcU & (((- (IData)(
                                                         (1U 
                                                          & vlSelf->Top__DOT__fetchDecodePayload[3U]))) 
                                              << 0xfU) 
                                             | ((0x4000U 
                                                 & (vlSelf->Top__DOT__fetchDecodePayload[3U] 
                                                    << 0xeU)) 
                                                | ((0x2000U 
                                                    & (vlSelf->Top__DOT__fetchDecodePayload[2U] 
                                                       << 5U)) 
                                                   | ((0x1f80U 
                                                       & (vlSelf->Top__DOT__fetchDecodePayload[2U] 
                                                          >> 0x13U)) 
                                                      | (0x78U 
                                                         & (vlSelf->Top__DOT__fetchDecodePayload[2U] 
                                                            >> 6U))))))));
                    vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[2U] 
                        = ((0xfffffffcU & vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[2U]) 
                           | (3U & ((- (IData)((1U 
                                                & vlSelf->Top__DOT__fetchDecodePayload[3U]))) 
                                    >> 0x11U)));
                    vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U] 
                        = ((0x8000U & vlSelf->Top__DOT__fetchDecodePayload[2U])
                            ? ((0xf8ffffffU & vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U]) 
                               | (((0x4000U & vlSelf->Top__DOT__fetchDecodePayload[2U])
                                    ? ((0x2000U & vlSelf->Top__DOT__fetchDecodePayload[2U])
                                        ? 6U : 5U) : 
                                   ((0x2000U & vlSelf->Top__DOT__fetchDecodePayload[2U])
                                     ? 4U : 3U)) << 0x18U))
                            : ((0x4000U & vlSelf->Top__DOT__fetchDecodePayload[2U])
                                ? (2U | vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U])
                                : ((0xf8ffffffU & vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U]) 
                                   | (((0x2000U & vlSelf->Top__DOT__fetchDecodePayload[2U])
                                        ? 2U : 1U) 
                                      << 0x18U))));
                } else {
                    vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U] 
                        = (2U | vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U]);
                }
            } else {
                vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U] 
                    = (2U | vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U]);
            }
        } else {
            vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U] 
                = (2U | vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U]);
        }
    } else if ((0x40U & vlSelf->Top__DOT__fetchDecodePayload[2U])) {
        if ((0x20U & vlSelf->Top__DOT__fetchDecodePayload[2U])) {
            if ((0x10U & vlSelf->Top__DOT__fetchDecodePayload[2U])) {
                vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U] 
                    = (2U | vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U]);
            } else if ((8U & vlSelf->Top__DOT__fetchDecodePayload[2U])) {
                if ((4U & vlSelf->Top__DOT__fetchDecodePayload[2U])) {
                    if ((2U & vlSelf->Top__DOT__fetchDecodePayload[2U])) {
                        vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[2U] 
                            = ((0xffffff83U & vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[2U]) 
                               | (0x7cU & (vlSelf->Top__DOT__fetchDecodePayload[2U] 
                                           >> 6U)));
                        vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[1U] 
                            = (3U | vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[1U]);
                        vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U] 
                            = (0x8000U | (0xfffc7fffU 
                                          & vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U]));
                        vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[1U] 
                            = ((3U & vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[1U]) 
                               | (0xffffc000U & (vlSelf->Top__DOT__fetchDecodePayload[2U] 
                                                 << 1U)));
                        vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[2U] 
                            = ((0xfffffffcU & vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[2U]) 
                               | (3U & ((2U & (vlSelf->Top__DOT__fetchDecodePayload[3U] 
                                               << 1U)) 
                                        | (vlSelf->Top__DOT__fetchDecodePayload[2U] 
                                           >> 0x1fU))));
                    } else {
                        vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U] 
                            = (2U | vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U]);
                    }
                } else {
                    vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U] 
                        = (2U | vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U]);
                }
            } else if ((4U & vlSelf->Top__DOT__fetchDecodePayload[2U])) {
                if ((2U & vlSelf->Top__DOT__fetchDecodePayload[2U])) {
                    vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[2U] 
                        = ((0xffffff83U & vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[2U]) 
                           | (0x7cU & (vlSelf->Top__DOT__fetchDecodePayload[2U] 
                                       >> 6U)));
                    vlSelf->Top__DOT__readAddress1 
                        = (0x1fU & (vlSelf->Top__DOT__fetchDecodePayload[2U] 
                                    >> 0x10U));
                    vlSelf->Top__DOT__readAddress2 
                        = (0x1fU & (vlSelf->Top__DOT__fetchDecodePayload[2U] 
                                    >> 0x15U));
                    vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[1U] 
                        = (0xfffffffcU & vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[1U]);
                    vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U] 
                        = (0x8000U | (0xfffc7fffU & 
                                      vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U]));
                    vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U] 
                        = (((((((((0U == ((0x3f8U & 
                                           ((vlSelf->Top__DOT__fetchDecodePayload[3U] 
                                             << 9U) 
                                            | (0x1f8U 
                                               & (vlSelf->Top__DOT__fetchDecodePayload[2U] 
                                                  >> 0x17U)))) 
                                          | (7U & (
                                                   vlSelf->Top__DOT__fetchDecodePayload[2U] 
                                                   >> 0xdU)))) 
                                  | (0x100U == ((0x3f8U 
                                                 & ((vlSelf->Top__DOT__fetchDecodePayload[3U] 
                                                     << 9U) 
                                                    | (0x1f8U 
                                                       & (vlSelf->Top__DOT__fetchDecodePayload[2U] 
                                                          >> 0x17U)))) 
                                                | (7U 
                                                   & (vlSelf->Top__DOT__fetchDecodePayload[2U] 
                                                      >> 0xdU))))) 
                                 | (7U == ((0x3f8U 
                                            & ((vlSelf->Top__DOT__fetchDecodePayload[3U] 
                                                << 9U) 
                                               | (0x1f8U 
                                                  & (vlSelf->Top__DOT__fetchDecodePayload[2U] 
                                                     >> 0x17U)))) 
                                           | (7U & 
                                              (vlSelf->Top__DOT__fetchDecodePayload[2U] 
                                               >> 0xdU))))) 
                                | (6U == ((0x3f8U & 
                                           ((vlSelf->Top__DOT__fetchDecodePayload[3U] 
                                             << 9U) 
                                            | (0x1f8U 
                                               & (vlSelf->Top__DOT__fetchDecodePayload[2U] 
                                                  >> 0x17U)))) 
                                          | (7U & (
                                                   vlSelf->Top__DOT__fetchDecodePayload[2U] 
                                                   >> 0xdU))))) 
                               | (4U == ((0x3f8U & 
                                          ((vlSelf->Top__DOT__fetchDecodePayload[3U] 
                                            << 9U) 
                                           | (0x1f8U 
                                              & (vlSelf->Top__DOT__fetchDecodePayload[2U] 
                                                 >> 0x17U)))) 
                                         | (7U & (vlSelf->Top__DOT__fetchDecodePayload[2U] 
                                                  >> 0xdU))))) 
                              | (1U == ((0x3f8U & (
                                                   (vlSelf->Top__DOT__fetchDecodePayload[3U] 
                                                    << 9U) 
                                                   | (0x1f8U 
                                                      & (vlSelf->Top__DOT__fetchDecodePayload[2U] 
                                                         >> 0x17U)))) 
                                        | (7U & (vlSelf->Top__DOT__fetchDecodePayload[2U] 
                                                 >> 0xdU))))) 
                             | (5U == ((0x3f8U & ((
                                                   vlSelf->Top__DOT__fetchDecodePayload[3U] 
                                                   << 9U) 
                                                  | (0x1f8U 
                                                     & (vlSelf->Top__DOT__fetchDecodePayload[2U] 
                                                        >> 0x17U)))) 
                                       | (7U & (vlSelf->Top__DOT__fetchDecodePayload[2U] 
                                                >> 0xdU))))) 
                            | (0x105U == ((0x3f8U & 
                                           ((vlSelf->Top__DOT__fetchDecodePayload[3U] 
                                             << 9U) 
                                            | (0x1f8U 
                                               & (vlSelf->Top__DOT__fetchDecodePayload[2U] 
                                                  >> 0x17U)))) 
                                          | (7U & (
                                                   vlSelf->Top__DOT__fetchDecodePayload[2U] 
                                                   >> 0xdU)))))
                            ? ((0xff0fffffU & vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U]) 
                               | (((0U == ((0x3f8U 
                                            & ((vlSelf->Top__DOT__fetchDecodePayload[3U] 
                                                << 9U) 
                                               | (0x1f8U 
                                                  & (vlSelf->Top__DOT__fetchDecodePayload[2U] 
                                                     >> 0x17U)))) 
                                           | (7U & 
                                              (vlSelf->Top__DOT__fetchDecodePayload[2U] 
                                               >> 0xdU))))
                                    ? 0U : ((0x100U 
                                             == ((0x3f8U 
                                                  & ((vlSelf->Top__DOT__fetchDecodePayload[3U] 
                                                      << 9U) 
                                                     | (0x1f8U 
                                                        & (vlSelf->Top__DOT__fetchDecodePayload[2U] 
                                                           >> 0x17U)))) 
                                                 | (7U 
                                                    & (vlSelf->Top__DOT__fetchDecodePayload[2U] 
                                                       >> 0xdU))))
                                             ? 1U : 
                                            ((7U == 
                                              ((0x3f8U 
                                                & ((vlSelf->Top__DOT__fetchDecodePayload[3U] 
                                                    << 9U) 
                                                   | (0x1f8U 
                                                      & (vlSelf->Top__DOT__fetchDecodePayload[2U] 
                                                         >> 0x17U)))) 
                                               | (7U 
                                                  & (vlSelf->Top__DOT__fetchDecodePayload[2U] 
                                                     >> 0xdU))))
                                              ? 2U : 
                                             ((6U == 
                                               ((0x3f8U 
                                                 & ((vlSelf->Top__DOT__fetchDecodePayload[3U] 
                                                     << 9U) 
                                                    | (0x1f8U 
                                                       & (vlSelf->Top__DOT__fetchDecodePayload[2U] 
                                                          >> 0x17U)))) 
                                                | (7U 
                                                   & (vlSelf->Top__DOT__fetchDecodePayload[2U] 
                                                      >> 0xdU))))
                                               ? 3U
                                               : ((4U 
                                                   == 
                                                   ((0x3f8U 
                                                     & ((vlSelf->Top__DOT__fetchDecodePayload[3U] 
                                                         << 9U) 
                                                        | (0x1f8U 
                                                           & (vlSelf->Top__DOT__fetchDecodePayload[2U] 
                                                              >> 0x17U)))) 
                                                    | (7U 
                                                       & (vlSelf->Top__DOT__fetchDecodePayload[2U] 
                                                          >> 0xdU))))
                                                   ? 4U
                                                   : 
                                                  ((1U 
                                                    == 
                                                    ((0x3f8U 
                                                      & ((vlSelf->Top__DOT__fetchDecodePayload[3U] 
                                                          << 9U) 
                                                         | (0x1f8U 
                                                            & (vlSelf->Top__DOT__fetchDecodePayload[2U] 
                                                               >> 0x17U)))) 
                                                     | (7U 
                                                        & (vlSelf->Top__DOT__fetchDecodePayload[2U] 
                                                           >> 0xdU))))
                                                    ? 5U
                                                    : 
                                                   ((5U 
                                                     == 
                                                     ((0x3f8U 
                                                       & ((vlSelf->Top__DOT__fetchDecodePayload[3U] 
                                                           << 9U) 
                                                          | (0x1f8U 
                                                             & (vlSelf->Top__DOT__fetchDecodePayload[2U] 
                                                                >> 0x17U)))) 
                                                      | (7U 
                                                         & (vlSelf->Top__DOT__fetchDecodePayload[2U] 
                                                            >> 0xdU))))
                                                     ? 6U
                                                     : 7U))))))) 
                                  << 0x14U)) : ((2U 
                                                 == 
                                                 ((0x3f8U 
                                                   & ((vlSelf->Top__DOT__fetchDecodePayload[3U] 
                                                       << 9U) 
                                                      | (0x1f8U 
                                                         & (vlSelf->Top__DOT__fetchDecodePayload[2U] 
                                                            >> 0x17U)))) 
                                                  | (7U 
                                                     & (vlSelf->Top__DOT__fetchDecodePayload[2U] 
                                                        >> 0xdU))))
                                                 ? 
                                                (0x800000U 
                                                 | (0xff0fffffU 
                                                    & vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U]))
                                                 : 
                                                ((3U 
                                                  == 
                                                  ((0x3f8U 
                                                    & ((vlSelf->Top__DOT__fetchDecodePayload[3U] 
                                                        << 9U) 
                                                       | (0x1f8U 
                                                          & (vlSelf->Top__DOT__fetchDecodePayload[2U] 
                                                             >> 0x17U)))) 
                                                   | (7U 
                                                      & (vlSelf->Top__DOT__fetchDecodePayload[2U] 
                                                         >> 0xdU))))
                                                  ? 
                                                 (0x900000U 
                                                  | (0xff0fffffU 
                                                     & vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U]))
                                                  : 
                                                 (2U 
                                                  | vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U]))));
                } else {
                    vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U] 
                        = (2U | vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U]);
                }
            } else {
                vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U] 
                    = (2U | vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U]);
            }
        } else if ((0x10U & vlSelf->Top__DOT__fetchDecodePayload[2U])) {
            vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U] 
                = (2U | vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U]);
        } else if ((8U & vlSelf->Top__DOT__fetchDecodePayload[2U])) {
            vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U] 
                = (2U | vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U]);
        } else if ((4U & vlSelf->Top__DOT__fetchDecodePayload[2U])) {
            if ((2U & vlSelf->Top__DOT__fetchDecodePayload[2U])) {
                vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[1U] 
                    = (1U | (0xfffffffcU & vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[1U]));
                vlSelf->Top__DOT__readAddress1 = (0x1fU 
                                                  & (vlSelf->Top__DOT__fetchDecodePayload[2U] 
                                                     >> 0x10U));
                vlSelf->Top__DOT__readAddress2 = (0x1fU 
                                                  & (vlSelf->Top__DOT__fetchDecodePayload[2U] 
                                                     >> 0x15U));
                vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[1U] 
                    = ((3U & vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[1U]) 
                       | (0xfffffffcU & (((- (IData)(
                                                     (1U 
                                                      & vlSelf->Top__DOT__fetchDecodePayload[3U]))) 
                                          << 0xeU) 
                                         | ((0x3f80U 
                                             & ((vlSelf->Top__DOT__fetchDecodePayload[3U] 
                                                 << 0xdU) 
                                                | (0x1f80U 
                                                   & (vlSelf->Top__DOT__fetchDecodePayload[2U] 
                                                      >> 0x13U)))) 
                                            | (0x7cU 
                                               & (vlSelf->Top__DOT__fetchDecodePayload[2U] 
                                                  >> 6U))))));
                vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[2U] 
                    = ((0xfffffffcU & vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[2U]) 
                       | (3U & ((- (IData)((1U & vlSelf->Top__DOT__fetchDecodePayload[3U]))) 
                                >> 0x12U)));
                vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U] 
                    = (0x40000000U | vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U]);
                vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U] 
                    = ((0U == (7U & (vlSelf->Top__DOT__fetchDecodePayload[2U] 
                                     >> 0xdU))) ? (0xcfffffffU 
                                                   & vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U])
                        : ((1U == (7U & (vlSelf->Top__DOT__fetchDecodePayload[2U] 
                                         >> 0xdU)))
                            ? (0x10000000U | (0xcfffffffU 
                                              & vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U]))
                            : ((2U == (7U & (vlSelf->Top__DOT__fetchDecodePayload[2U] 
                                             >> 0xdU)))
                                ? (0x30000000U | vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U])
                                : (2U | vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U]))));
            } else {
                vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U] 
                    = (2U | vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U]);
            }
        } else {
            vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U] 
                = (2U | vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U]);
        }
    } else if ((0x20U & vlSelf->Top__DOT__fetchDecodePayload[2U])) {
        if ((0x10U & vlSelf->Top__DOT__fetchDecodePayload[2U])) {
            vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U] 
                = (2U | vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U]);
        } else if ((8U & vlSelf->Top__DOT__fetchDecodePayload[2U])) {
            if ((4U & vlSelf->Top__DOT__fetchDecodePayload[2U])) {
                if ((2U & vlSelf->Top__DOT__fetchDecodePayload[2U])) {
                    vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[2U] 
                        = ((0xffffff83U & vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[2U]) 
                           | (0x7cU & (vlSelf->Top__DOT__fetchDecodePayload[2U] 
                                       >> 6U)));
                    vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[1U] 
                        = (2U | (0xfffffffcU & vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[1U]));
                    vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U] 
                        = (0x8000U | (0xfffc7fffU & 
                                      vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U]));
                    vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[1U] 
                        = ((3U & vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[1U]) 
                           | (0xffffc000U & (vlSelf->Top__DOT__fetchDecodePayload[2U] 
                                             << 1U)));
                    vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[2U] 
                        = ((0xfffffffcU & vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[2U]) 
                           | (3U & ((2U & (vlSelf->Top__DOT__fetchDecodePayload[3U] 
                                           << 1U)) 
                                    | (vlSelf->Top__DOT__fetchDecodePayload[2U] 
                                       >> 0x1fU))));
                } else {
                    vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U] 
                        = (2U | vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U]);
                }
            } else {
                vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U] 
                    = (2U | vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U]);
            }
        } else if ((4U & vlSelf->Top__DOT__fetchDecodePayload[2U])) {
            if ((2U & vlSelf->Top__DOT__fetchDecodePayload[2U])) {
                vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[2U] 
                    = ((0xffffff83U & vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[2U]) 
                       | (0x7cU & (vlSelf->Top__DOT__fetchDecodePayload[2U] 
                                   >> 6U)));
                vlSelf->Top__DOT__readAddress1 = (0x1fU 
                                                  & (vlSelf->Top__DOT__fetchDecodePayload[2U] 
                                                     >> 0x10U));
                vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[1U] 
                    = (1U | (0xfffffffcU & vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[1U]));
                vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U] 
                    = (0x8000U | (0xfffc7fffU & vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U]));
                vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[1U] 
                    = ((3U & vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[1U]) 
                       | (0xfffffffcU & (((- (IData)(
                                                     (1U 
                                                      & vlSelf->Top__DOT__fetchDecodePayload[3U]))) 
                                          << 0xeU) 
                                         | (0x3ffcU 
                                            & ((vlSelf->Top__DOT__fetchDecodePayload[3U] 
                                                << 0xdU) 
                                               | (0x1ffcU 
                                                  & (vlSelf->Top__DOT__fetchDecodePayload[2U] 
                                                     >> 0x13U)))))));
                vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[2U] 
                    = ((0xfffffffcU & vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[2U]) 
                       | (3U & ((- (IData)((1U & vlSelf->Top__DOT__fetchDecodePayload[3U]))) 
                                >> 0x12U)));
                vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U] 
                    = ((0x8000U & vlSelf->Top__DOT__fetchDecodePayload[2U])
                        ? ((0x4000U & vlSelf->Top__DOT__fetchDecodePayload[2U])
                            ? ((0xff0fffffU & vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U]) 
                               | (((0x2000U & vlSelf->Top__DOT__fetchDecodePayload[2U])
                                    ? 2U : 3U) << 0x14U))
                            : ((0x2000U & vlSelf->Top__DOT__fetchDecodePayload[2U])
                                ? ((0U == (0x7fU & 
                                           ((vlSelf->Top__DOT__fetchDecodePayload[3U] 
                                             << 6U) 
                                            | (vlSelf->Top__DOT__fetchDecodePayload[2U] 
                                               >> 0x1aU))))
                                    ? (0x600000U | 
                                       (0xff0fffffU 
                                        & vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U]))
                                    : ((0x20U == (0x7fU 
                                                  & ((vlSelf->Top__DOT__fetchDecodePayload[3U] 
                                                      << 6U) 
                                                     | (vlSelf->Top__DOT__fetchDecodePayload[2U] 
                                                        >> 0x1aU))))
                                        ? (0x700000U 
                                           | (0xff0fffffU 
                                              & vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U]))
                                        : (2U | vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U])))
                                : (0x400000U | (0xff0fffffU 
                                                & vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U]))))
                        : ((0x4000U & vlSelf->Top__DOT__fetchDecodePayload[2U])
                            ? ((0xff0fffffU & vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U]) 
                               | (((0x2000U & vlSelf->Top__DOT__fetchDecodePayload[2U])
                                    ? 9U : 8U) << 0x14U))
                            : ((0x2000U & vlSelf->Top__DOT__fetchDecodePayload[2U])
                                ? ((0U == (0x7fU & 
                                           ((vlSelf->Top__DOT__fetchDecodePayload[3U] 
                                             << 6U) 
                                            | (vlSelf->Top__DOT__fetchDecodePayload[2U] 
                                               >> 0x1aU))))
                                    ? (0x500000U | 
                                       (0xff0fffffU 
                                        & vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U]))
                                    : (2U | vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U]))
                                : (0xff0fffffU & vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U]))));
            } else {
                vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U] 
                    = (2U | vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U]);
            }
        } else {
            vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U] 
                = (2U | vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U]);
        }
    } else if ((0x10U & vlSelf->Top__DOT__fetchDecodePayload[2U])) {
        if ((8U & vlSelf->Top__DOT__fetchDecodePayload[2U])) {
            if ((4U & vlSelf->Top__DOT__fetchDecodePayload[2U])) {
                if ((1U & (~ (vlSelf->Top__DOT__fetchDecodePayload[2U] 
                              >> 1U)))) {
                    vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U] 
                        = (2U | vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U]);
                }
            } else {
                vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U] 
                    = (2U | vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U]);
            }
        } else {
            vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U] 
                = (2U | vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U]);
        }
    } else if ((8U & vlSelf->Top__DOT__fetchDecodePayload[2U])) {
        vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U] 
            = (2U | vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U]);
    } else if ((4U & vlSelf->Top__DOT__fetchDecodePayload[2U])) {
        if ((2U & vlSelf->Top__DOT__fetchDecodePayload[2U])) {
            vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[2U] 
                = ((0xffffff83U & vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[2U]) 
                   | (0x7cU & (vlSelf->Top__DOT__fetchDecodePayload[2U] 
                               >> 6U)));
            vlSelf->Top__DOT__readAddress1 = (0x1fU 
                                              & (vlSelf->Top__DOT__fetchDecodePayload[2U] 
                                                 >> 0x10U));
            vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[1U] 
                = (1U | (0xfffffffcU & vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[1U]));
            vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U] 
                = (0x10000U | (0xfffc7fffU & vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U]));
            vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[1U] 
                = ((3U & vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[1U]) 
                   | (0xfffffffcU & (((- (IData)((1U 
                                                  & vlSelf->Top__DOT__fetchDecodePayload[3U]))) 
                                      << 0xeU) | (0x3ffcU 
                                                  & ((vlSelf->Top__DOT__fetchDecodePayload[3U] 
                                                      << 0xdU) 
                                                     | (0x1ffcU 
                                                        & (vlSelf->Top__DOT__fetchDecodePayload[2U] 
                                                           >> 0x13U)))))));
            vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[2U] 
                = ((0xfffffffcU & vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[2U]) 
                   | (3U & ((- (IData)((1U & vlSelf->Top__DOT__fetchDecodePayload[3U]))) 
                            >> 0x12U)));
            vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U] 
                = (0x80000000U | vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U]);
            vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U] 
                = ((0x8000U & vlSelf->Top__DOT__fetchDecodePayload[2U])
                    ? ((0x4000U & vlSelf->Top__DOT__fetchDecodePayload[2U])
                        ? (2U | vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U])
                        : ((0xc7ffffffU & vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U]) 
                           | (((0x2000U & vlSelf->Top__DOT__fetchDecodePayload[2U])
                                ? 2U : 0U) << 0x1bU)))
                    : ((0x4000U & vlSelf->Top__DOT__fetchDecodePayload[2U])
                        ? ((0x2000U & vlSelf->Top__DOT__fetchDecodePayload[2U])
                            ? (2U | vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U])
                            : (0x38000000U | vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U]))
                        : ((0xc7ffffffU & vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U]) 
                           | (((0x2000U & vlSelf->Top__DOT__fetchDecodePayload[2U])
                                ? 3U : 1U) << 0x1bU))));
        } else {
            vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U] 
                = (2U | vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U]);
        }
    } else {
        vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U] 
            = (2U | vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U]);
    }
    vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[2U] 
        = ((0xfffe007fU & vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[2U]) 
           | (0xffffff80U & (((IData)(vlSelf->Top__DOT__readAddress1) 
                              << 0xcU) | ((IData)(vlSelf->Top__DOT__readAddress2) 
                                          << 7U))));
}

void VTop___024root___eval_act(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval_act\n"); );
    // Body
    if ((8ULL & vlSelf->__VactTriggered.word(0U))) {
        VTop___024root___act_sequent__TOP__0(vlSelf);
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VTop___024root___act_sequent__TOP__1(vlSelf);
        VTop___024root___act_sequent__TOP__2(vlSelf);
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VTop___024root___act_sequent__TOP__3(vlSelf);
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VTop___024root___act_sequent__TOP__4(vlSelf);
    }
    if ((9ULL & vlSelf->__VactTriggered.word(0U))) {
        VTop___024root___act_comb__TOP__0(vlSelf);
    }
    if ((6ULL & vlSelf->__VactTriggered.word(0U))) {
        VTop___024root___act_comb__TOP__1(vlSelf);
    }
}

VL_INLINE_OPT void VTop___024root___nba_sequent__TOP__0(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ __Vdlyvset__Top__DOT__csrFile__DOT__csrs__v0;
    __Vdlyvset__Top__DOT__csrFile__DOT__csrs__v0 = 0;
    CData/*3:0*/ __Vdlyvdim0__Top__DOT__csrFile__DOT__csrs__v18;
    __Vdlyvdim0__Top__DOT__csrFile__DOT__csrs__v18 = 0;
    IData/*31:0*/ __Vdlyvval__Top__DOT__csrFile__DOT__csrs__v18;
    __Vdlyvval__Top__DOT__csrFile__DOT__csrs__v18 = 0;
    CData/*0:0*/ __Vdlyvset__Top__DOT__csrFile__DOT__csrs__v18;
    __Vdlyvset__Top__DOT__csrFile__DOT__csrs__v18 = 0;
    IData/*31:0*/ __Vdly__Top__DOT__fetch__DOT__programCounter;
    __Vdly__Top__DOT__fetch__DOT__programCounter = 0;
    CData/*4:0*/ __Vdlyvdim0__Top__DOT__registerFile__DOT__registers__v0;
    __Vdlyvdim0__Top__DOT__registerFile__DOT__registers__v0 = 0;
    IData/*31:0*/ __Vdlyvval__Top__DOT__registerFile__DOT__registers__v0;
    __Vdlyvval__Top__DOT__registerFile__DOT__registers__v0 = 0;
    CData/*0:0*/ __Vdlyvset__Top__DOT__registerFile__DOT__registers__v0;
    __Vdlyvset__Top__DOT__registerFile__DOT__registers__v0 = 0;
    CData/*0:0*/ __Vdly__Top__DOT__execute__DOT__redirectAsserted;
    __Vdly__Top__DOT__execute__DOT__redirectAsserted = 0;
    CData/*0:0*/ __Vdly__Top__DOT__storeValid;
    __Vdly__Top__DOT__storeValid = 0;
    SData/*9:0*/ __Vdlyvdim0__Top__DOT__dmem_inst__DOT__mem__v0;
    __Vdlyvdim0__Top__DOT__dmem_inst__DOT__mem__v0 = 0;
    IData/*31:0*/ __Vdlyvval__Top__DOT__dmem_inst__DOT__mem__v0;
    __Vdlyvval__Top__DOT__dmem_inst__DOT__mem__v0 = 0;
    CData/*0:0*/ __Vdlyvset__Top__DOT__dmem_inst__DOT__mem__v0;
    __Vdlyvset__Top__DOT__dmem_inst__DOT__mem__v0 = 0;
    // Body
    __Vdly__Top__DOT__fetch__DOT__programCounter = vlSelf->Top__DOT__fetch__DOT__programCounter;
    __Vdly__Top__DOT__execute__DOT__redirectAsserted 
        = vlSelf->Top__DOT__execute__DOT__redirectAsserted;
    __Vdlyvset__Top__DOT__dmem_inst__DOT__mem__v0 = 0U;
    __Vdly__Top__DOT__storeValid = vlSelf->Top__DOT__storeValid;
    __Vdlyvset__Top__DOT__csrFile__DOT__csrs__v0 = 0U;
    __Vdlyvset__Top__DOT__csrFile__DOT__csrs__v18 = 0U;
    __Vdlyvset__Top__DOT__registerFile__DOT__registers__v0 = 0U;
    if (vlSelf->reset) {
        __Vdly__Top__DOT__fetch__DOT__programCounter = 0x80000000U;
        __Vdly__Top__DOT__execute__DOT__redirectAsserted = 0U;
        __Vdly__Top__DOT__storeValid = 0U;
        __Vdlyvset__Top__DOT__csrFile__DOT__csrs__v0 = 1U;
        vlSelf->Top__DOT__storeComplete = 0U;
    } else {
        if (vlSelf->Top__DOT__controlReset) {
            __Vdly__Top__DOT__fetch__DOT__programCounter = 0U;
        } else if (vlSelf->Top__DOT__branchValid) {
            __Vdly__Top__DOT__fetch__DOT__programCounter 
                = vlSelf->Top__DOT__branchData;
        } else if ((1U & (~ ((IData)(vlSelf->Top__DOT__fetchDecodeControl) 
                             >> 1U)))) {
            if (vlSelf->Top__DOT__instructionDataValid) {
                __Vdly__Top__DOT__fetch__DOT__programCounter 
                    = ((IData)(4U) + vlSelf->Top__DOT__fetch__DOT__programCounter);
            }
        }
        if ((((IData)(vlSelf->Top__DOT__branchValid) 
              & ((IData)(vlSelf->Top__DOT__executeMemoryControl) 
                 >> 1U)) & (~ (IData)(vlSelf->Top__DOT__execute__DOT__redirectAsserted)))) {
            __Vdly__Top__DOT__execute__DOT__redirectAsserted = 1U;
        }
        if ((IData)((2U != (IData)(vlSelf->Top__DOT__executeMemoryControl)))) {
            __Vdly__Top__DOT__execute__DOT__redirectAsserted = 0U;
        }
        if ((1U & (((~ (IData)(vlSelf->Top__DOT__storeValid)) 
                    & (~ (IData)(vlSelf->Top__DOT__memory__DOT__illegal))) 
                   & (~ (IData)(vlSelf->Top__DOT__memoryWritebackControl))))) {
            __Vdly__Top__DOT__storeValid = vlSelf->Top__DOT__memory__DOT__storeReq;
        } else if (vlSelf->Top__DOT__storeComplete) {
            __Vdly__Top__DOT__storeValid = 0U;
        }
        if (((0U != (3U & (vlSelf->Top__DOT__memoryWritebackPayload[0U] 
                           >> 1U))) & ((IData)(vlSelf->Top__DOT__writeback__DOT____VdfgTmp_hb47b8516__0) 
                                       & vlSelf->Top__DOT__memoryWritebackPayload[0U]))) {
            __Vdlyvval__Top__DOT__csrFile__DOT__csrs__v18 
                = ((vlSelf->Top__DOT__memoryWritebackPayload[2U] 
                    << 0x16U) | (vlSelf->Top__DOT__memoryWritebackPayload[1U] 
                                 >> 0xaU));
            __Vdlyvset__Top__DOT__csrFile__DOT__csrs__v18 = 1U;
            __Vdlyvdim0__Top__DOT__csrFile__DOT__csrs__v18 
                = (0xfU & (vlSelf->Top__DOT__memoryWritebackPayload[1U] 
                           >> 3U));
        }
        vlSelf->Top__DOT__storeComplete = 0U;
        if (((IData)(vlSelf->Top__DOT__storeValid) 
             & (~ (IData)(vlSelf->Top__DOT__dmem_inst__DOT__storeValid_q)))) {
            vlSelf->Top__DOT__dmem_inst__DOT__unnamedblk2__DOT__idx 
                = (0x3ffU & (vlSelf->Top__DOT__executeMemoryPayload[2U] 
                             >> 0xeU));
            vlSelf->Top__DOT__dmem_inst__DOT__unnamedblk2__DOT__word 
                = vlSelf->Top__DOT__dmem_inst__DOT__mem
                [(0x3ffU & vlSelf->Top__DOT__dmem_inst__DOT__unnamedblk2__DOT__idx)];
            vlSelf->Top__DOT__storeComplete = 1U;
            if ((1U & (IData)(vlSelf->Top__DOT__realStoreByteEnable))) {
                vlSelf->Top__DOT__dmem_inst__DOT__unnamedblk2__DOT__word 
                    = ((0xffffff00U & vlSelf->Top__DOT__dmem_inst__DOT__unnamedblk2__DOT__word) 
                       | (0xffU & vlSelf->Top__DOT__storeData));
            }
            if ((2U & (IData)(vlSelf->Top__DOT__realStoreByteEnable))) {
                vlSelf->Top__DOT__dmem_inst__DOT__unnamedblk2__DOT__word 
                    = ((0xffff00ffU & vlSelf->Top__DOT__dmem_inst__DOT__unnamedblk2__DOT__word) 
                       | (0xff00U & vlSelf->Top__DOT__storeData));
            }
            if ((4U & (IData)(vlSelf->Top__DOT__realStoreByteEnable))) {
                vlSelf->Top__DOT__dmem_inst__DOT__unnamedblk2__DOT__word 
                    = ((0xff00ffffU & vlSelf->Top__DOT__dmem_inst__DOT__unnamedblk2__DOT__word) 
                       | (0xff0000U & vlSelf->Top__DOT__storeData));
            }
            if ((8U & (IData)(vlSelf->Top__DOT__realStoreByteEnable))) {
                vlSelf->Top__DOT__dmem_inst__DOT__unnamedblk2__DOT__word 
                    = ((0xffffffU & vlSelf->Top__DOT__dmem_inst__DOT__unnamedblk2__DOT__word) 
                       | (0xff000000U & vlSelf->Top__DOT__storeData));
            }
            __Vdlyvval__Top__DOT__dmem_inst__DOT__mem__v0 
                = vlSelf->Top__DOT__dmem_inst__DOT__unnamedblk2__DOT__word;
            __Vdlyvset__Top__DOT__dmem_inst__DOT__mem__v0 = 1U;
            __Vdlyvdim0__Top__DOT__dmem_inst__DOT__mem__v0 
                = (0x3ffU & vlSelf->Top__DOT__dmem_inst__DOT__unnamedblk2__DOT__idx);
        }
    }
    if (vlSelf->Top__DOT__destinationEnable) {
        if ((0U != (0x1fU & (vlSelf->Top__DOT__memoryWritebackPayload[2U] 
                             >> 0xaU)))) {
            __Vdlyvval__Top__DOT__registerFile__DOT__registers__v0 
                = vlSelf->Top__DOT__writeData;
            __Vdlyvset__Top__DOT__registerFile__DOT__registers__v0 = 1U;
            __Vdlyvdim0__Top__DOT__registerFile__DOT__registers__v0 
                = (0x1fU & (vlSelf->Top__DOT__memoryWritebackPayload[2U] 
                            >> 0xaU));
        }
    }
    if (vlSelf->reset) {
        vlSelf->Top__DOT__memoryWritebackPayload[0U] = 0U;
        vlSelf->Top__DOT__memoryWritebackPayload[1U] = 0U;
        vlSelf->Top__DOT__memoryWritebackPayload[2U] = 0U;
        vlSelf->Top__DOT__memoryWritebackPayload[3U] = 0U;
        vlSelf->Top__DOT__executeMemoryPayload[0U] = 0U;
        vlSelf->Top__DOT__executeMemoryPayload[1U] = 0U;
        vlSelf->Top__DOT__executeMemoryPayload[2U] = 0U;
        vlSelf->Top__DOT__executeMemoryPayload[3U] = 0U;
        vlSelf->Top__DOT__executeMemoryPayload[4U] = 0U;
        vlSelf->Top__DOT__executeMemoryPayload[5U] = 0U;
        vlSelf->Top__DOT__decodeExecutePayload[0U] = 0U;
        vlSelf->Top__DOT__decodeExecutePayload[1U] = 0U;
        vlSelf->Top__DOT__decodeExecutePayload[2U] = 0U;
        vlSelf->Top__DOT__decodeExecutePayload[3U] = 0U;
        vlSelf->Top__DOT__decodeExecutePayload[4U] = 0U;
        vlSelf->Top__DOT__decodeExecutePayload[5U] = 0U;
        vlSelf->Top__DOT__decodeExecutePayload[6U] = 0U;
    } else {
        if ((1U & (IData)(vlSelf->Top__DOT__memoryWritebackControl))) {
            vlSelf->Top__DOT__memoryWritebackPayload[1U] 
                = (0xffffff7fU & vlSelf->Top__DOT__memoryWritebackPayload[1U]);
        } else if ((1U & (~ ((IData)(vlSelf->Top__DOT__memoryWritebackControl) 
                             >> 1U)))) {
            if ((0x800U & vlSelf->Top__DOT__executeMemoryPayload[1U])) {
                vlSelf->Top__DOT__memoryWritebackPayload[1U] 
                    = (0xfffffdffU & vlSelf->Top__DOT__memoryWritebackPayload[1U]);
            } else if ((0x400U & vlSelf->Top__DOT__executeMemoryPayload[1U])) {
                if ((0x200U & vlSelf->Top__DOT__executeMemoryPayload[1U])) {
                    vlSelf->Top__DOT__memoryWritebackPayload[1U] 
                        = ((0x1ffU & vlSelf->Top__DOT__memoryWritebackPayload[1U]) 
                           | ((IData)((1ULL | ((QData)((IData)(
                                                               ((vlSelf->Top__DOT__executeMemoryPayload[4U] 
                                                                 << 0xaU) 
                                                                | (vlSelf->Top__DOT__executeMemoryPayload[3U] 
                                                                   >> 0x16U)))) 
                                               << 1U))) 
                              << 9U));
                    vlSelf->Top__DOT__memoryWritebackPayload[2U] 
                        = ((0xfffffc00U & vlSelf->Top__DOT__memoryWritebackPayload[2U]) 
                           | (((IData)((1ULL | ((QData)((IData)(
                                                                ((vlSelf->Top__DOT__executeMemoryPayload[4U] 
                                                                  << 0xaU) 
                                                                 | (vlSelf->Top__DOT__executeMemoryPayload[3U] 
                                                                    >> 0x16U)))) 
                                                << 1U))) 
                               >> 0x17U) | ((IData)(
                                                    ((1ULL 
                                                      | ((QData)((IData)(
                                                                         ((vlSelf->Top__DOT__executeMemoryPayload[4U] 
                                                                           << 0xaU) 
                                                                          | (vlSelf->Top__DOT__executeMemoryPayload[3U] 
                                                                             >> 0x16U)))) 
                                                         << 1U)) 
                                                     >> 0x20U)) 
                                            << 9U)));
                } else {
                    if (((vlSelf->Top__DOT__executeMemoryPayload[3U] 
                          >> 0x10U) & (IData)(vlSelf->Top__DOT__loadDataValid))) {
                        vlSelf->Top__DOT__memory__DOT__unnamedblk1__DOT__word 
                            = ((IData)(vlSelf->reset)
                                ? 0U : vlSelf->Top__DOT__dmem_inst__DOT__mem
                               [(0x3ffU & (vlSelf->Top__DOT__executeMemoryPayload[2U] 
                                           >> 0xeU))]);
                        if ((0U == (3U & (vlSelf->Top__DOT__executeMemoryPayload[3U] 
                                          >> 0xdU)))) {
                            vlSelf->Top__DOT__memory__DOT__unnamedblk1__DOT__b 
                                = (0xffU & (vlSelf->Top__DOT__memory__DOT__unnamedblk1__DOT__word 
                                            >> (0x18U 
                                                & (vlSelf->Top__DOT__executeMemoryPayload[2U] 
                                                   >> 9U))));
                            vlSelf->Top__DOT__memoryWritebackPayload[1U] 
                                = ((0x3ffU & vlSelf->Top__DOT__memoryWritebackPayload[1U]) 
                                   | (((0x1000U & vlSelf->Top__DOT__executeMemoryPayload[3U])
                                        ? (((- (IData)(
                                                       (1U 
                                                        & ((IData)(vlSelf->Top__DOT__memory__DOT__unnamedblk1__DOT__b) 
                                                           >> 7U)))) 
                                            << 8U) 
                                           | (IData)(vlSelf->Top__DOT__memory__DOT__unnamedblk1__DOT__b))
                                        : (IData)(vlSelf->Top__DOT__memory__DOT__unnamedblk1__DOT__b)) 
                                      << 0xaU));
                            vlSelf->Top__DOT__memoryWritebackPayload[2U] 
                                = ((0xfffffc00U & vlSelf->Top__DOT__memoryWritebackPayload[2U]) 
                                   | (((0x1000U & vlSelf->Top__DOT__executeMemoryPayload[3U])
                                        ? (((- (IData)(
                                                       (1U 
                                                        & ((IData)(vlSelf->Top__DOT__memory__DOT__unnamedblk1__DOT__b) 
                                                           >> 7U)))) 
                                            << 8U) 
                                           | (IData)(vlSelf->Top__DOT__memory__DOT__unnamedblk1__DOT__b))
                                        : (IData)(vlSelf->Top__DOT__memory__DOT__unnamedblk1__DOT__b)) 
                                      >> 0x16U));
                        } else if ((1U == (3U & (vlSelf->Top__DOT__executeMemoryPayload[3U] 
                                                 >> 0xdU)))) {
                            vlSelf->Top__DOT__memory__DOT__unnamedblk1__DOT__h 
                                = (0xffffU & (vlSelf->Top__DOT__memory__DOT__unnamedblk1__DOT__word 
                                              >> (0x10U 
                                                  & (vlSelf->Top__DOT__executeMemoryPayload[2U] 
                                                     >> 9U))));
                            vlSelf->Top__DOT__memoryWritebackPayload[1U] 
                                = ((0x3ffU & vlSelf->Top__DOT__memoryWritebackPayload[1U]) 
                                   | (((0x1000U & vlSelf->Top__DOT__executeMemoryPayload[3U])
                                        ? (((- (IData)(
                                                       (1U 
                                                        & ((IData)(vlSelf->Top__DOT__memory__DOT__unnamedblk1__DOT__h) 
                                                           >> 0xfU)))) 
                                            << 0x10U) 
                                           | (IData)(vlSelf->Top__DOT__memory__DOT__unnamedblk1__DOT__h))
                                        : (IData)(vlSelf->Top__DOT__memory__DOT__unnamedblk1__DOT__h)) 
                                      << 0xaU));
                            vlSelf->Top__DOT__memoryWritebackPayload[2U] 
                                = ((0xfffffc00U & vlSelf->Top__DOT__memoryWritebackPayload[2U]) 
                                   | (((0x1000U & vlSelf->Top__DOT__executeMemoryPayload[3U])
                                        ? (((- (IData)(
                                                       (1U 
                                                        & ((IData)(vlSelf->Top__DOT__memory__DOT__unnamedblk1__DOT__h) 
                                                           >> 0xfU)))) 
                                            << 0x10U) 
                                           | (IData)(vlSelf->Top__DOT__memory__DOT__unnamedblk1__DOT__h))
                                        : (IData)(vlSelf->Top__DOT__memory__DOT__unnamedblk1__DOT__h)) 
                                      >> 0x16U));
                        } else if ((3U == (3U & (vlSelf->Top__DOT__executeMemoryPayload[3U] 
                                                 >> 0xdU)))) {
                            vlSelf->Top__DOT__memoryWritebackPayload[1U] 
                                = ((0x3ffU & vlSelf->Top__DOT__memoryWritebackPayload[1U]) 
                                   | (vlSelf->Top__DOT__memory__DOT__unnamedblk1__DOT__word 
                                      << 0xaU));
                            vlSelf->Top__DOT__memoryWritebackPayload[2U] 
                                = ((0xfffffc00U & vlSelf->Top__DOT__memoryWritebackPayload[2U]) 
                                   | (vlSelf->Top__DOT__memory__DOT__unnamedblk1__DOT__word 
                                      >> 0x16U));
                        }
                    }
                    vlSelf->Top__DOT__memoryWritebackPayload[1U] 
                        = ((0xfffffdffU & vlSelf->Top__DOT__memoryWritebackPayload[1U]) 
                           | (0x1fffe00U & ((vlSelf->Top__DOT__executeMemoryPayload[3U] 
                                             >> 7U) 
                                            & ((IData)(vlSelf->Top__DOT__loadDataValid) 
                                               << 9U))));
                }
            } else if ((0x200U & vlSelf->Top__DOT__executeMemoryPayload[1U])) {
                vlSelf->Top__DOT__memoryWritebackPayload[1U] 
                    = ((0x1ffU & vlSelf->Top__DOT__memoryWritebackPayload[1U]) 
                       | ((IData)((1ULL | ((QData)((IData)(
                                                           ((vlSelf->Top__DOT__executeMemoryPayload[3U] 
                                                             << 0x14U) 
                                                            | (vlSelf->Top__DOT__executeMemoryPayload[2U] 
                                                               >> 0xcU)))) 
                                           << 1U))) 
                          << 9U));
                vlSelf->Top__DOT__memoryWritebackPayload[2U] 
                    = ((0xfffffc00U & vlSelf->Top__DOT__memoryWritebackPayload[2U]) 
                       | (((IData)((1ULL | ((QData)((IData)(
                                                            ((vlSelf->Top__DOT__executeMemoryPayload[3U] 
                                                              << 0x14U) 
                                                             | (vlSelf->Top__DOT__executeMemoryPayload[2U] 
                                                                >> 0xcU)))) 
                                            << 1U))) 
                           >> 0x17U) | ((IData)(((1ULL 
                                                  | ((QData)((IData)(
                                                                     ((vlSelf->Top__DOT__executeMemoryPayload[3U] 
                                                                       << 0x14U) 
                                                                      | (vlSelf->Top__DOT__executeMemoryPayload[2U] 
                                                                         >> 0xcU)))) 
                                                     << 1U)) 
                                                 >> 0x20U)) 
                                        << 9U)));
            } else {
                vlSelf->Top__DOT__memoryWritebackPayload[1U] 
                    = (0xfffffdffU & vlSelf->Top__DOT__memoryWritebackPayload[1U]);
            }
            vlSelf->Top__DOT__memoryWritebackPayload[1U] 
                = ((0xfffffe7fU & vlSelf->Top__DOT__memoryWritebackPayload[1U]) 
                   | (0xffffff80U & ((0x100U & (((IData)(vlSelf->Top__DOT__memory__DOT__illegal) 
                                                 << 8U) 
                                                | (0xffffff00U 
                                                   & vlSelf->Top__DOT__executeMemoryPayload[1U]))) 
                                     | (0x80U & vlSelf->Top__DOT__executeMemoryPayload[1U]))));
            vlSelf->Top__DOT__memoryWritebackPayload[2U] 
                = ((0x3ffU & vlSelf->Top__DOT__memoryWritebackPayload[2U]) 
                   | ((IData)((((QData)((IData)(((vlSelf->Top__DOT__executeMemoryPayload[5U] 
                                                  << 0xaU) 
                                                 | (vlSelf->Top__DOT__executeMemoryPayload[4U] 
                                                    >> 0x16U)))) 
                                << 5U) | (QData)((IData)(
                                                         (0x1fU 
                                                          & (vlSelf->Top__DOT__executeMemoryPayload[3U] 
                                                             >> 0x11U)))))) 
                      << 0xaU));
            vlSelf->Top__DOT__memoryWritebackPayload[3U] 
                = (0x7fffU & (((IData)((((QData)((IData)(
                                                         ((vlSelf->Top__DOT__executeMemoryPayload[5U] 
                                                           << 0xaU) 
                                                          | (vlSelf->Top__DOT__executeMemoryPayload[4U] 
                                                             >> 0x16U)))) 
                                         << 5U) | (QData)((IData)(
                                                                  (0x1fU 
                                                                   & (vlSelf->Top__DOT__executeMemoryPayload[3U] 
                                                                      >> 0x11U)))))) 
                               >> 0x16U) | ((IData)(
                                                    ((((QData)((IData)(
                                                                       ((vlSelf->Top__DOT__executeMemoryPayload[5U] 
                                                                         << 0xaU) 
                                                                        | (vlSelf->Top__DOT__executeMemoryPayload[4U] 
                                                                           >> 0x16U)))) 
                                                       << 5U) 
                                                      | (QData)((IData)(
                                                                        (0x1fU 
                                                                         & (vlSelf->Top__DOT__executeMemoryPayload[3U] 
                                                                            >> 0x11U))))) 
                                                     >> 0x20U)) 
                                            << 0xaU)));
            vlSelf->Top__DOT__memoryWritebackPayload[0U] 
                = (IData)((0x7fffffffffULL & (((QData)((IData)(
                                                               vlSelf->Top__DOT__executeMemoryPayload[1U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->Top__DOT__executeMemoryPayload[0U])))));
            vlSelf->Top__DOT__memoryWritebackPayload[1U] 
                = ((0xffffff80U & vlSelf->Top__DOT__memoryWritebackPayload[1U]) 
                   | (IData)(((0x7fffffffffULL & (((QData)((IData)(
                                                                   vlSelf->Top__DOT__executeMemoryPayload[1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->Top__DOT__executeMemoryPayload[0U])))) 
                              >> 0x20U)));
            if ((0U != (3U & (vlSelf->Top__DOT__executeMemoryPayload[0U] 
                              >> 1U)))) {
                vlSelf->Top__DOT__memoryWritebackPayload[1U] 
                    = ((0x3ffU & vlSelf->Top__DOT__memoryWritebackPayload[1U]) 
                       | (0xfffffc00U & ((vlSelf->Top__DOT__executeMemoryPayload[3U] 
                                          << 0x1eU) 
                                         | (0x3ffffc00U 
                                            & (vlSelf->Top__DOT__executeMemoryPayload[2U] 
                                               >> 2U)))));
                vlSelf->Top__DOT__memoryWritebackPayload[2U] 
                    = ((0xfffffc00U & vlSelf->Top__DOT__memoryWritebackPayload[2U]) 
                       | (0x3ffU & (vlSelf->Top__DOT__executeMemoryPayload[3U] 
                                    >> 2U)));
            }
        }
        if ((1U & (IData)(vlSelf->Top__DOT__executeMemoryControl))) {
            vlSelf->Top__DOT__executeMemoryPayload[1U] 
                = (0xffffff7fU & vlSelf->Top__DOT__executeMemoryPayload[1U]);
        } else if ((1U & (~ ((IData)(vlSelf->Top__DOT__executeMemoryControl) 
                             >> 1U)))) {
            vlSelf->Top__DOT__executeMemoryPayload[3U] 
                = ((0xffffU & vlSelf->Top__DOT__executeMemoryPayload[3U]) 
                   | (((IData)((((QData)((IData)(vlSelf->Top__DOT__decodeExecutePayload[6U])) 
                                 << 0x2fU) | (((QData)((IData)(
                                                               vlSelf->Top__DOT__decodeExecutePayload[5U])) 
                                               << 0xfU) 
                                              | ((QData)((IData)(
                                                                 vlSelf->Top__DOT__decodeExecutePayload[4U])) 
                                                 >> 0x11U)))) 
                       << 0x16U) | ((0x3e0000U & (vlSelf->Top__DOT__decodeExecutePayload[2U] 
                                                  << 0xfU)) 
                                    | (0x10000U & (
                                                   vlSelf->Top__DOT__decodeExecutePayload[0U] 
                                                   >> 0xfU)))));
            vlSelf->Top__DOT__executeMemoryPayload[4U] 
                = ((0xffffU & ((IData)((((QData)((IData)(
                                                         vlSelf->Top__DOT__decodeExecutePayload[6U])) 
                                         << 0x2fU) 
                                        | (((QData)((IData)(
                                                            vlSelf->Top__DOT__decodeExecutePayload[5U])) 
                                            << 0xfU) 
                                           | ((QData)((IData)(
                                                              vlSelf->Top__DOT__decodeExecutePayload[4U])) 
                                              >> 0x11U)))) 
                               >> 0xaU)) | ((0x3f0000U 
                                             & ((IData)(
                                                        (((QData)((IData)(
                                                                          vlSelf->Top__DOT__decodeExecutePayload[6U])) 
                                                          << 0x2fU) 
                                                         | (((QData)((IData)(
                                                                             vlSelf->Top__DOT__decodeExecutePayload[5U])) 
                                                             << 0xfU) 
                                                            | ((QData)((IData)(
                                                                               vlSelf->Top__DOT__decodeExecutePayload[4U])) 
                                                               >> 0x11U)))) 
                                                >> 0xaU)) 
                                            | ((IData)(
                                                       ((((QData)((IData)(
                                                                          vlSelf->Top__DOT__decodeExecutePayload[6U])) 
                                                          << 0x2fU) 
                                                         | (((QData)((IData)(
                                                                             vlSelf->Top__DOT__decodeExecutePayload[5U])) 
                                                             << 0xfU) 
                                                            | ((QData)((IData)(
                                                                               vlSelf->Top__DOT__decodeExecutePayload[4U])) 
                                                               >> 0x11U))) 
                                                        >> 0x20U)) 
                                               << 0x16U)));
            vlSelf->Top__DOT__executeMemoryPayload[5U] 
                = (0x3fffffU & ((0xffffU & ((IData)(
                                                    ((((QData)((IData)(
                                                                       vlSelf->Top__DOT__decodeExecutePayload[6U])) 
                                                       << 0x2fU) 
                                                      | (((QData)((IData)(
                                                                          vlSelf->Top__DOT__decodeExecutePayload[5U])) 
                                                          << 0xfU) 
                                                         | ((QData)((IData)(
                                                                            vlSelf->Top__DOT__decodeExecutePayload[4U])) 
                                                            >> 0x11U))) 
                                                     >> 0x20U)) 
                                            >> 0xaU)) 
                                | (0x3f0000U & ((IData)(
                                                        ((((QData)((IData)(
                                                                           vlSelf->Top__DOT__decodeExecutePayload[6U])) 
                                                           << 0x2fU) 
                                                          | (((QData)((IData)(
                                                                              vlSelf->Top__DOT__decodeExecutePayload[5U])) 
                                                              << 0xfU) 
                                                             | ((QData)((IData)(
                                                                                vlSelf->Top__DOT__decodeExecutePayload[4U])) 
                                                                >> 0x11U))) 
                                                         >> 0x20U)) 
                                                >> 0xaU))));
            vlSelf->Top__DOT__executeMemoryPayload[1U] 
                = ((0xfffU & vlSelf->Top__DOT__executeMemoryPayload[1U]) 
                   | ((IData)((((QData)((IData)(vlSelf->Top__DOT__execute__DOT__result)) 
                                << 0x20U) | (QData)((IData)(
                                                            ((IData)(vlSelf->forwardEnable2)
                                                              ? vlSelf->forwardData2
                                                              : 
                                                             ((vlSelf->Top__DOT__decodeExecutePayload[3U] 
                                                               << 0xfU) 
                                                              | (vlSelf->Top__DOT__decodeExecutePayload[2U] 
                                                                 >> 0x11U))))))) 
                      << 0xcU));
            vlSelf->Top__DOT__executeMemoryPayload[2U] 
                = (((IData)((((QData)((IData)(vlSelf->Top__DOT__execute__DOT__result)) 
                              << 0x20U) | (QData)((IData)(
                                                          ((IData)(vlSelf->forwardEnable2)
                                                            ? vlSelf->forwardData2
                                                            : 
                                                           ((vlSelf->Top__DOT__decodeExecutePayload[3U] 
                                                             << 0xfU) 
                                                            | (vlSelf->Top__DOT__decodeExecutePayload[2U] 
                                                               >> 0x11U))))))) 
                    >> 0x14U) | ((IData)(((((QData)((IData)(vlSelf->Top__DOT__execute__DOT__result)) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             ((IData)(vlSelf->forwardEnable2)
                                                               ? vlSelf->forwardData2
                                                               : 
                                                              ((vlSelf->Top__DOT__decodeExecutePayload[3U] 
                                                                << 0xfU) 
                                                               | (vlSelf->Top__DOT__decodeExecutePayload[2U] 
                                                                  >> 0x11U)))))) 
                                          >> 0x20U)) 
                                 << 0xcU));
            vlSelf->Top__DOT__executeMemoryPayload[3U] 
                = ((0xffff0000U & vlSelf->Top__DOT__executeMemoryPayload[3U]) 
                   | (((IData)(((((QData)((IData)(vlSelf->Top__DOT__execute__DOT__result)) 
                                  << 0x20U) | (QData)((IData)(
                                                              ((IData)(vlSelf->forwardEnable2)
                                                                ? vlSelf->forwardData2
                                                                : 
                                                               ((vlSelf->Top__DOT__decodeExecutePayload[3U] 
                                                                 << 0xfU) 
                                                                | (vlSelf->Top__DOT__decodeExecutePayload[2U] 
                                                                   >> 0x11U)))))) 
                                >> 0x20U)) >> 0x14U) 
                      | (0xf000U & (vlSelf->Top__DOT__decodeExecutePayload[0U] 
                                    >> 0xfU))));
            vlSelf->Top__DOT__executeMemoryPayload[1U] 
                = ((0xfffff1ffU & vlSelf->Top__DOT__executeMemoryPayload[1U]) 
                   | (0xe00U & (vlSelf->Top__DOT__decodeExecutePayload[0U] 
                                >> 6U)));
            vlSelf->Top__DOT__executeMemoryPayload[0U] 
                = ((7U & vlSelf->Top__DOT__executeMemoryPayload[0U]) 
                   | ((IData)((((QData)((IData)((3U 
                                                 & vlSelf->Top__DOT__decodeExecutePayload[0U]))) 
                                << 0x24U) | (((QData)((IData)(
                                                              (0xfU 
                                                               & (vlSelf->Top__DOT__decodeExecutePayload[0U] 
                                                                  >> 9U)))) 
                                              << 0x20U) 
                                             | (QData)((IData)(vlSelf->Top__DOT__execute__DOT__forwardCorrectedCSRReadData))))) 
                      << 3U));
            vlSelf->Top__DOT__executeMemoryPayload[1U] 
                = ((0xfffffe00U & vlSelf->Top__DOT__executeMemoryPayload[1U]) 
                   | (((IData)((((QData)((IData)((3U 
                                                  & vlSelf->Top__DOT__decodeExecutePayload[0U]))) 
                                 << 0x24U) | (((QData)((IData)(
                                                               (0xfU 
                                                                & (vlSelf->Top__DOT__decodeExecutePayload[0U] 
                                                                   >> 9U)))) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlSelf->Top__DOT__execute__DOT__forwardCorrectedCSRReadData))))) 
                       >> 0x1dU) | ((IData)(((((QData)((IData)(
                                                               (3U 
                                                                & vlSelf->Top__DOT__decodeExecutePayload[0U]))) 
                                               << 0x24U) 
                                              | (((QData)((IData)(
                                                                  (0xfU 
                                                                   & (vlSelf->Top__DOT__decodeExecutePayload[0U] 
                                                                      >> 9U)))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(vlSelf->Top__DOT__execute__DOT__forwardCorrectedCSRReadData)))) 
                                             >> 0x20U)) 
                                    << 3U)));
            vlSelf->Top__DOT__executeMemoryPayload[0U] 
                = ((0xfffffff8U & vlSelf->Top__DOT__executeMemoryPayload[0U]) 
                   | ((6U & (vlSelf->Top__DOT__decodeExecutePayload[0U] 
                             >> 0xcU)) | (1U & (vlSelf->Top__DOT__decodeExecutePayload[0U] 
                                                >> 2U))));
        }
        if ((1U & (IData)(vlSelf->Top__DOT__decodeExecuteControl))) {
            vlSelf->Top__DOT__decodeExecutePayload[0U] 
                = (0xfffffffeU & vlSelf->Top__DOT__decodeExecutePayload[0U]);
        } else if ((1U & (~ ((IData)(vlSelf->Top__DOT__decodeExecuteControl) 
                             >> 1U)))) {
            if ((0U == ((vlSelf->Top__DOT__fetchDecodePayload[3U] 
                         << 0x1fU) | (vlSelf->Top__DOT__fetchDecodePayload[2U] 
                                      >> 1U)))) {
                vlSelf->Top__DOT__decodeExecutePayload[0U] 
                    = (0xfffffffeU & vlSelf->Top__DOT__decodeExecutePayload[0U]);
                vlSelf->Top__DOT__decodeExecutePayload[0U] = 0U;
                vlSelf->Top__DOT__decodeExecutePayload[1U] = 0U;
                vlSelf->Top__DOT__decodeExecutePayload[2U] = 0U;
                vlSelf->Top__DOT__decodeExecutePayload[3U] = 0U;
                vlSelf->Top__DOT__decodeExecutePayload[4U] = 0U;
                vlSelf->Top__DOT__decodeExecutePayload[5U] = 0U;
                vlSelf->Top__DOT__decodeExecutePayload[6U] = 0U;
            } else {
                vlSelf->Top__DOT__decodeExecutePayload[0U] 
                    = vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U];
                vlSelf->Top__DOT__decodeExecutePayload[1U] 
                    = vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[1U];
                vlSelf->Top__DOT__decodeExecutePayload[2U] 
                    = vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[2U];
                vlSelf->Top__DOT__decodeExecutePayload[3U] 
                    = vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[3U];
                vlSelf->Top__DOT__decodeExecutePayload[4U] 
                    = vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[4U];
                vlSelf->Top__DOT__decodeExecutePayload[5U] 
                    = vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[5U];
                vlSelf->Top__DOT__decodeExecutePayload[6U] 
                    = vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[6U];
                vlSelf->Top__DOT__decodeExecutePayload[0U] 
                    = ((0xfffffffeU & vlSelf->Top__DOT__decodeExecutePayload[0U]) 
                       | (1U & vlSelf->Top__DOT__fetchDecodePayload[0U]));
            }
        }
    }
    vlSelf->Top__DOT__execute__DOT__redirectAsserted 
        = __Vdly__Top__DOT__execute__DOT__redirectAsserted;
    if (__Vdlyvset__Top__DOT__csrFile__DOT__csrs__v0) {
        vlSelf->Top__DOT__csrFile__DOT__csrs[0U] = 0U;
        vlSelf->Top__DOT__csrFile__DOT__csrs[1U] = 0U;
        vlSelf->Top__DOT__csrFile__DOT__csrs[2U] = 0U;
        vlSelf->Top__DOT__csrFile__DOT__csrs[3U] = 0U;
        vlSelf->Top__DOT__csrFile__DOT__csrs[4U] = 0U;
        vlSelf->Top__DOT__csrFile__DOT__csrs[5U] = 0U;
        vlSelf->Top__DOT__csrFile__DOT__csrs[6U] = 0U;
        vlSelf->Top__DOT__csrFile__DOT__csrs[7U] = 0U;
        vlSelf->Top__DOT__csrFile__DOT__csrs[8U] = 0U;
        vlSelf->Top__DOT__csrFile__DOT__csrs[9U] = 0U;
        vlSelf->Top__DOT__csrFile__DOT__csrs[0xaU] = 0U;
        vlSelf->Top__DOT__csrFile__DOT__csrs[0xbU] = 0U;
        vlSelf->Top__DOT__csrFile__DOT__csrs[0xcU] = 0U;
        vlSelf->Top__DOT__csrFile__DOT__csrs[0xdU] = 0U;
        vlSelf->Top__DOT__csrFile__DOT__csrs[0xeU] = 0U;
        vlSelf->Top__DOT__csrFile__DOT__csrs[0xfU] = 0U;
        vlSelf->Top__DOT__csrFile__DOT__csrs[8U] = 0x40000100U;
        vlSelf->Top__DOT__csrFile__DOT__csrs[0U] = 0x1800U;
    }
    if (__Vdlyvset__Top__DOT__csrFile__DOT__csrs__v18) {
        vlSelf->Top__DOT__csrFile__DOT__csrs[__Vdlyvdim0__Top__DOT__csrFile__DOT__csrs__v18] 
            = __Vdlyvval__Top__DOT__csrFile__DOT__csrs__v18;
    }
    if (__Vdlyvset__Top__DOT__registerFile__DOT__registers__v0) {
        vlSelf->Top__DOT__registerFile__DOT__registers[__Vdlyvdim0__Top__DOT__registerFile__DOT__registers__v0] 
            = __Vdlyvval__Top__DOT__registerFile__DOT__registers__v0;
    }
    vlSelf->Top__DOT__debug_regs_flat[0U] = vlSelf->Top__DOT__registerFile__DOT__registers
        [0U];
    vlSelf->Top__DOT__debug_regs_flat[1U] = (IData)(
                                                    (((QData)((IData)(
                                                                      vlSelf->Top__DOT__registerFile__DOT__registers
                                                                      [2U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelf->Top__DOT__registerFile__DOT__registers
                                                                       [1U]))));
    vlSelf->Top__DOT__debug_regs_flat[2U] = (IData)(
                                                    ((((QData)((IData)(
                                                                       vlSelf->Top__DOT__registerFile__DOT__registers
                                                                       [2U])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSelf->Top__DOT__registerFile__DOT__registers
                                                                        [1U]))) 
                                                     >> 0x20U));
    vlSelf->Top__DOT__debug_regs_flat[3U] = vlSelf->Top__DOT__registerFile__DOT__registers
        [3U];
    vlSelf->Top__DOT__debug_regs_flat[4U] = (IData)(
                                                    (((QData)((IData)(
                                                                      vlSelf->Top__DOT__registerFile__DOT__registers
                                                                      [5U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelf->Top__DOT__registerFile__DOT__registers
                                                                       [4U]))));
    vlSelf->Top__DOT__debug_regs_flat[5U] = (IData)(
                                                    ((((QData)((IData)(
                                                                       vlSelf->Top__DOT__registerFile__DOT__registers
                                                                       [5U])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSelf->Top__DOT__registerFile__DOT__registers
                                                                        [4U]))) 
                                                     >> 0x20U));
    vlSelf->Top__DOT__debug_regs_flat[6U] = vlSelf->Top__DOT__registerFile__DOT__registers
        [6U];
    vlSelf->Top__DOT__debug_regs_flat[7U] = (IData)(
                                                    (((QData)((IData)(
                                                                      vlSelf->Top__DOT__registerFile__DOT__registers
                                                                      [8U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelf->Top__DOT__registerFile__DOT__registers
                                                                       [7U]))));
    vlSelf->Top__DOT__debug_regs_flat[8U] = (IData)(
                                                    ((((QData)((IData)(
                                                                       vlSelf->Top__DOT__registerFile__DOT__registers
                                                                       [8U])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSelf->Top__DOT__registerFile__DOT__registers
                                                                        [7U]))) 
                                                     >> 0x20U));
    vlSelf->Top__DOT__debug_regs_flat[9U] = vlSelf->Top__DOT__registerFile__DOT__registers
        [9U];
    vlSelf->Top__DOT__debug_regs_flat[0xaU] = (IData)(
                                                      (((QData)((IData)(
                                                                        vlSelf->Top__DOT__registerFile__DOT__registers
                                                                        [0xbU])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelf->Top__DOT__registerFile__DOT__registers
                                                                         [0xaU]))));
    vlSelf->Top__DOT__debug_regs_flat[0xbU] = (IData)(
                                                      ((((QData)((IData)(
                                                                         vlSelf->Top__DOT__registerFile__DOT__registers
                                                                         [0xbU])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelf->Top__DOT__registerFile__DOT__registers
                                                                          [0xaU]))) 
                                                       >> 0x20U));
    vlSelf->Top__DOT__debug_regs_flat[0xcU] = vlSelf->Top__DOT__registerFile__DOT__registers
        [0xcU];
    vlSelf->Top__DOT__debug_regs_flat[0xdU] = (IData)(
                                                      (((QData)((IData)(
                                                                        vlSelf->Top__DOT__registerFile__DOT__registers
                                                                        [0xeU])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelf->Top__DOT__registerFile__DOT__registers
                                                                         [0xdU]))));
    vlSelf->Top__DOT__debug_regs_flat[0xeU] = (IData)(
                                                      ((((QData)((IData)(
                                                                         vlSelf->Top__DOT__registerFile__DOT__registers
                                                                         [0xeU])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelf->Top__DOT__registerFile__DOT__registers
                                                                          [0xdU]))) 
                                                       >> 0x20U));
    vlSelf->Top__DOT__debug_regs_flat[0xfU] = vlSelf->Top__DOT__registerFile__DOT__registers
        [0xfU];
    vlSelf->Top__DOT__debug_regs_flat[0x10U] = (IData)(
                                                       (((QData)((IData)(
                                                                         vlSelf->Top__DOT__registerFile__DOT__registers
                                                                         [0x11U])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelf->Top__DOT__registerFile__DOT__registers
                                                                          [0x10U]))));
    vlSelf->Top__DOT__debug_regs_flat[0x11U] = (IData)(
                                                       ((((QData)((IData)(
                                                                          vlSelf->Top__DOT__registerFile__DOT__registers
                                                                          [0x11U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelf->Top__DOT__registerFile__DOT__registers
                                                                           [0x10U]))) 
                                                        >> 0x20U));
    vlSelf->Top__DOT__debug_regs_flat[0x12U] = vlSelf->Top__DOT__registerFile__DOT__registers
        [0x12U];
    vlSelf->Top__DOT__debug_regs_flat[0x13U] = (IData)(
                                                       (((QData)((IData)(
                                                                         vlSelf->Top__DOT__registerFile__DOT__registers
                                                                         [0x14U])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelf->Top__DOT__registerFile__DOT__registers
                                                                          [0x13U]))));
    vlSelf->Top__DOT__debug_regs_flat[0x14U] = (IData)(
                                                       ((((QData)((IData)(
                                                                          vlSelf->Top__DOT__registerFile__DOT__registers
                                                                          [0x14U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelf->Top__DOT__registerFile__DOT__registers
                                                                           [0x13U]))) 
                                                        >> 0x20U));
    vlSelf->Top__DOT__debug_regs_flat[0x15U] = vlSelf->Top__DOT__registerFile__DOT__registers
        [0x15U];
    vlSelf->Top__DOT__debug_regs_flat[0x16U] = (IData)(
                                                       (((QData)((IData)(
                                                                         vlSelf->Top__DOT__registerFile__DOT__registers
                                                                         [0x17U])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelf->Top__DOT__registerFile__DOT__registers
                                                                          [0x16U]))));
    vlSelf->Top__DOT__debug_regs_flat[0x17U] = (IData)(
                                                       ((((QData)((IData)(
                                                                          vlSelf->Top__DOT__registerFile__DOT__registers
                                                                          [0x17U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelf->Top__DOT__registerFile__DOT__registers
                                                                           [0x16U]))) 
                                                        >> 0x20U));
    vlSelf->Top__DOT__debug_regs_flat[0x18U] = vlSelf->Top__DOT__registerFile__DOT__registers
        [0x18U];
    vlSelf->Top__DOT__debug_regs_flat[0x19U] = (IData)(
                                                       (((QData)((IData)(
                                                                         vlSelf->Top__DOT__registerFile__DOT__registers
                                                                         [0x1aU])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelf->Top__DOT__registerFile__DOT__registers
                                                                          [0x19U]))));
    vlSelf->Top__DOT__debug_regs_flat[0x1aU] = (IData)(
                                                       ((((QData)((IData)(
                                                                          vlSelf->Top__DOT__registerFile__DOT__registers
                                                                          [0x1aU])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelf->Top__DOT__registerFile__DOT__registers
                                                                           [0x19U]))) 
                                                        >> 0x20U));
    vlSelf->Top__DOT__debug_regs_flat[0x1bU] = vlSelf->Top__DOT__registerFile__DOT__registers
        [0x1bU];
    vlSelf->Top__DOT__debug_regs_flat[0x1cU] = (IData)(
                                                       (((QData)((IData)(
                                                                         vlSelf->Top__DOT__registerFile__DOT__registers
                                                                         [0x1dU])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelf->Top__DOT__registerFile__DOT__registers
                                                                          [0x1cU]))));
    vlSelf->Top__DOT__debug_regs_flat[0x1dU] = (IData)(
                                                       ((((QData)((IData)(
                                                                          vlSelf->Top__DOT__registerFile__DOT__registers
                                                                          [0x1dU])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelf->Top__DOT__registerFile__DOT__registers
                                                                           [0x1cU]))) 
                                                        >> 0x20U));
    vlSelf->Top__DOT__debug_regs_flat[0x1eU] = (IData)(
                                                       (((QData)((IData)(
                                                                         vlSelf->Top__DOT__registerFile__DOT__registers
                                                                         [0x1fU])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelf->Top__DOT__registerFile__DOT__registers
                                                                          [0x1eU]))));
    vlSelf->Top__DOT__debug_regs_flat[0x1fU] = (IData)(
                                                       ((((QData)((IData)(
                                                                          vlSelf->Top__DOT__registerFile__DOT__registers
                                                                          [0x1fU])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelf->Top__DOT__registerFile__DOT__registers
                                                                           [0x1eU]))) 
                                                        >> 0x20U));
    vlSelf->dbg_registers[0U] = vlSelf->Top__DOT__debug_regs_flat[0U];
    vlSelf->dbg_registers[1U] = vlSelf->Top__DOT__debug_regs_flat[1U];
    vlSelf->dbg_registers[2U] = vlSelf->Top__DOT__debug_regs_flat[2U];
    vlSelf->dbg_registers[3U] = vlSelf->Top__DOT__debug_regs_flat[3U];
    vlSelf->dbg_registers[4U] = vlSelf->Top__DOT__debug_regs_flat[4U];
    vlSelf->dbg_registers[5U] = vlSelf->Top__DOT__debug_regs_flat[5U];
    vlSelf->dbg_registers[6U] = vlSelf->Top__DOT__debug_regs_flat[6U];
    vlSelf->dbg_registers[7U] = vlSelf->Top__DOT__debug_regs_flat[7U];
    vlSelf->dbg_registers[8U] = vlSelf->Top__DOT__debug_regs_flat[8U];
    vlSelf->dbg_registers[9U] = vlSelf->Top__DOT__debug_regs_flat[9U];
    vlSelf->dbg_registers[0xaU] = vlSelf->Top__DOT__debug_regs_flat[0xaU];
    vlSelf->dbg_registers[0xbU] = vlSelf->Top__DOT__debug_regs_flat[0xbU];
    vlSelf->dbg_registers[0xcU] = vlSelf->Top__DOT__debug_regs_flat[0xcU];
    vlSelf->dbg_registers[0xdU] = vlSelf->Top__DOT__debug_regs_flat[0xdU];
    vlSelf->dbg_registers[0xeU] = vlSelf->Top__DOT__debug_regs_flat[0xeU];
    vlSelf->dbg_registers[0xfU] = vlSelf->Top__DOT__debug_regs_flat[0xfU];
    vlSelf->dbg_registers[0x10U] = vlSelf->Top__DOT__debug_regs_flat[0x10U];
    vlSelf->dbg_registers[0x11U] = vlSelf->Top__DOT__debug_regs_flat[0x11U];
    vlSelf->dbg_registers[0x12U] = vlSelf->Top__DOT__debug_regs_flat[0x12U];
    vlSelf->dbg_registers[0x13U] = vlSelf->Top__DOT__debug_regs_flat[0x13U];
    vlSelf->dbg_registers[0x14U] = vlSelf->Top__DOT__debug_regs_flat[0x14U];
    vlSelf->dbg_registers[0x15U] = vlSelf->Top__DOT__debug_regs_flat[0x15U];
    vlSelf->dbg_registers[0x16U] = vlSelf->Top__DOT__debug_regs_flat[0x16U];
    vlSelf->dbg_registers[0x17U] = vlSelf->Top__DOT__debug_regs_flat[0x17U];
    vlSelf->dbg_registers[0x18U] = vlSelf->Top__DOT__debug_regs_flat[0x18U];
    vlSelf->dbg_registers[0x19U] = vlSelf->Top__DOT__debug_regs_flat[0x19U];
    vlSelf->dbg_registers[0x1aU] = vlSelf->Top__DOT__debug_regs_flat[0x1aU];
    vlSelf->dbg_registers[0x1bU] = vlSelf->Top__DOT__debug_regs_flat[0x1bU];
    vlSelf->dbg_registers[0x1cU] = vlSelf->Top__DOT__debug_regs_flat[0x1cU];
    vlSelf->dbg_registers[0x1dU] = vlSelf->Top__DOT__debug_regs_flat[0x1dU];
    vlSelf->dbg_registers[0x1eU] = vlSelf->Top__DOT__debug_regs_flat[0x1eU];
    vlSelf->dbg_registers[0x1fU] = vlSelf->Top__DOT__debug_regs_flat[0x1fU];
    if (__Vdlyvset__Top__DOT__dmem_inst__DOT__mem__v0) {
        vlSelf->Top__DOT__dmem_inst__DOT__mem[__Vdlyvdim0__Top__DOT__dmem_inst__DOT__mem__v0] 
            = __Vdlyvval__Top__DOT__dmem_inst__DOT__mem__v0;
    }
    vlSelf->Top__DOT__dmem_inst__DOT__storeValid_q 
        = ((1U & (~ (IData)(vlSelf->reset))) && (IData)(vlSelf->Top__DOT__storeValid));
    vlSelf->dbg_MEM_WB_programCounter = ((vlSelf->Top__DOT__memoryWritebackPayload[3U] 
                                          << 0x11U) 
                                         | (vlSelf->Top__DOT__memoryWritebackPayload[2U] 
                                            >> 0xfU));
    vlSelf->dbg_MEM_WB_Valid = (1U & (vlSelf->Top__DOT__memoryWritebackPayload[1U] 
                                      >> 7U));
    vlSelf->Top__DOT__storeValid = __Vdly__Top__DOT__storeValid;
    vlSelf->Top__DOT__writeback__DOT____VdfgTmp_hb47b8516__0 
        = ((~ (vlSelf->Top__DOT__memoryWritebackPayload[1U] 
               >> 8U)) & (IData)(vlSelf->dbg_MEM_WB_Valid));
    if ((0U != (3U & (vlSelf->Top__DOT__memoryWritebackPayload[0U] 
                      >> 1U)))) {
        vlSelf->Top__DOT__writeData = ((vlSelf->Top__DOT__memoryWritebackPayload[1U] 
                                        << 0x1dU) | 
                                       (vlSelf->Top__DOT__memoryWritebackPayload[0U] 
                                        >> 3U));
        vlSelf->Top__DOT__destinationEnable = vlSelf->Top__DOT__writeback__DOT____VdfgTmp_hb47b8516__0;
    } else {
        vlSelf->Top__DOT__writeData = ((vlSelf->Top__DOT__memoryWritebackPayload[2U] 
                                        << 0x16U) | 
                                       (vlSelf->Top__DOT__memoryWritebackPayload[1U] 
                                        >> 0xaU));
        vlSelf->Top__DOT__destinationEnable = ((IData)(vlSelf->dbg_MEM_WB_Valid) 
                                               & (IData)(
                                                         (0x200U 
                                                          == 
                                                          (0x300U 
                                                           & vlSelf->Top__DOT__memoryWritebackPayload[1U]))));
    }
    vlSelf->dbg_wb_value = ((IData)(vlSelf->Top__DOT__destinationEnable)
                             ? ((vlSelf->Top__DOT__memoryWritebackPayload[2U] 
                                 << 0x16U) | (vlSelf->Top__DOT__memoryWritebackPayload[1U] 
                                              >> 0xaU))
                             : 0U);
    vlSelf->dbg_EX_MEM_programCounter = ((vlSelf->Top__DOT__executeMemoryPayload[5U] 
                                          << 0xaU) 
                                         | (vlSelf->Top__DOT__executeMemoryPayload[4U] 
                                            >> 0x16U));
    vlSelf->Top__DOT__storeData = (((vlSelf->Top__DOT__executeMemoryPayload[2U] 
                                     << 0x14U) | (vlSelf->Top__DOT__executeMemoryPayload[1U] 
                                                  >> 0xcU)) 
                                   << (0x18U & (vlSelf->Top__DOT__executeMemoryPayload[2U] 
                                                >> 9U)));
    vlSelf->dbg_EX_MEM_Valid = (1U & (vlSelf->Top__DOT__executeMemoryPayload[1U] 
                                      >> 7U));
    if ((1U & ((~ (IData)(vlSelf->reset)) & (~ (IData)(vlSelf->Top__DOT__controlReset))))) {
        if ((1U & (IData)(vlSelf->Top__DOT__fetchDecodeControl))) {
            vlSelf->Top__DOT__fetchDecodePayload[0U] 
                = (0xfffffffeU & vlSelf->Top__DOT__fetchDecodePayload[0U]);
        } else if (((~ ((IData)(vlSelf->Top__DOT__fetchDecodeControl) 
                        >> 1U)) & (IData)(vlSelf->Top__DOT__instructionDataValid))) {
            vlSelf->Top__DOT__fetchDecodePayload[0U] 
                = (1U | (((IData)(4U) + vlSelf->Top__DOT__fetch__DOT__programCounter) 
                         << 1U));
            vlSelf->Top__DOT__fetchDecodePayload[1U] 
                = ((((IData)(4U) + vlSelf->Top__DOT__fetch__DOT__programCounter) 
                    >> 0x1fU) | ((IData)((((QData)((IData)(vlSelf->Top__DOT__instructionData)) 
                                           << 0x20U) 
                                          | (QData)((IData)(vlSelf->Top__DOT__fetch__DOT__programCounter)))) 
                                 << 1U));
            vlSelf->Top__DOT__fetchDecodePayload[2U] 
                = (((IData)((((QData)((IData)(vlSelf->Top__DOT__instructionData)) 
                              << 0x20U) | (QData)((IData)(vlSelf->Top__DOT__fetch__DOT__programCounter)))) 
                    >> 0x1fU) | ((IData)(((((QData)((IData)(vlSelf->Top__DOT__instructionData)) 
                                            << 0x20U) 
                                           | (QData)((IData)(vlSelf->Top__DOT__fetch__DOT__programCounter))) 
                                          >> 0x20U)) 
                                 << 1U));
            vlSelf->Top__DOT__fetchDecodePayload[3U] 
                = ((IData)(((((QData)((IData)(vlSelf->Top__DOT__instructionData)) 
                              << 0x20U) | (QData)((IData)(vlSelf->Top__DOT__fetch__DOT__programCounter))) 
                            >> 0x20U)) >> 0x1fU);
        } else if ((1U & ((~ ((IData)(vlSelf->Top__DOT__fetchDecodeControl) 
                              >> 1U)) & (~ (IData)(vlSelf->Top__DOT__instructionDataValid))))) {
            vlSelf->Top__DOT__fetchDecodePayload[0U] 
                = (0xfffffffeU & vlSelf->Top__DOT__fetchDecodePayload[0U]);
        }
    } else {
        vlSelf->Top__DOT__fetchDecodePayload[0U] = 0U;
        vlSelf->Top__DOT__fetchDecodePayload[1U] = 0U;
        vlSelf->Top__DOT__fetchDecodePayload[2U] = 0U;
        vlSelf->Top__DOT__fetchDecodePayload[3U] = 0U;
    }
    vlSelf->dbg_ID_EX_programCounter = ((vlSelf->Top__DOT__decodeExecutePayload[6U] 
                                         << 0xfU) | 
                                        (vlSelf->Top__DOT__decodeExecutePayload[5U] 
                                         >> 0x11U));
    vlSelf->Top__DOT__csrForwardData = 0U;
    vlSelf->Top__DOT__csrForwardEnable = 0U;
    if (((((0xfU & (vlSelf->Top__DOT__decodeExecutePayload[0U] 
                    >> 9U)) == (0xfU & (vlSelf->Top__DOT__executeMemoryPayload[1U] 
                                        >> 3U))) & 
          vlSelf->Top__DOT__executeMemoryPayload[0U]) 
         & (IData)(vlSelf->dbg_EX_MEM_Valid))) {
        vlSelf->Top__DOT__csrForwardData = ((vlSelf->Top__DOT__executeMemoryPayload[3U] 
                                             << 0x14U) 
                                            | (vlSelf->Top__DOT__executeMemoryPayload[2U] 
                                               >> 0xcU));
        vlSelf->Top__DOT__csrForwardEnable = 1U;
    } else if (((((0xfU & (vlSelf->Top__DOT__decodeExecutePayload[0U] 
                           >> 9U)) == (0xfU & (vlSelf->Top__DOT__memoryWritebackPayload[1U] 
                                               >> 3U))) 
                 & vlSelf->Top__DOT__memoryWritebackPayload[0U]) 
                & (IData)(vlSelf->dbg_MEM_WB_Valid))) {
        vlSelf->Top__DOT__csrForwardData = ((vlSelf->Top__DOT__memoryWritebackPayload[2U] 
                                             << 0x16U) 
                                            | (vlSelf->Top__DOT__memoryWritebackPayload[1U] 
                                               >> 0xaU));
        vlSelf->Top__DOT__csrForwardEnable = 1U;
    }
    vlSelf->forwardEnable2 = 0U;
    vlSelf->forwardEnable1 = 0U;
    vlSelf->forwardData1 = 0U;
    if ((0U != (0x1fU & (vlSelf->Top__DOT__decodeExecutePayload[2U] 
                         >> 0xcU)))) {
        if (((((IData)(vlSelf->dbg_EX_MEM_Valid) & 
               (((0U != (7U & (vlSelf->Top__DOT__executeMemoryPayload[1U] 
                               >> 9U))) & (2U != (7U 
                                                  & (vlSelf->Top__DOT__executeMemoryPayload[1U] 
                                                     >> 9U)))) 
                | (0U != (3U & (vlSelf->Top__DOT__executeMemoryPayload[0U] 
                                >> 1U))))) & (0U != 
                                              (0x1fU 
                                               & (vlSelf->Top__DOT__executeMemoryPayload[3U] 
                                                  >> 0x11U)))) 
             & ((0x1fU & (vlSelf->Top__DOT__decodeExecutePayload[2U] 
                          >> 0xcU)) == (0x1fU & (vlSelf->Top__DOT__executeMemoryPayload[3U] 
                                                 >> 0x11U))))) {
            vlSelf->forwardEnable1 = 1U;
            vlSelf->forwardData1 = ((1U == (7U & (vlSelf->Top__DOT__executeMemoryPayload[1U] 
                                                  >> 9U)))
                                     ? ((vlSelf->Top__DOT__executeMemoryPayload[3U] 
                                         << 0x14U) 
                                        | (vlSelf->Top__DOT__executeMemoryPayload[2U] 
                                           >> 0xcU))
                                     : ((3U == (7U 
                                                & (vlSelf->Top__DOT__executeMemoryPayload[1U] 
                                                   >> 9U)))
                                         ? ((vlSelf->Top__DOT__executeMemoryPayload[4U] 
                                             << 0xaU) 
                                            | (vlSelf->Top__DOT__executeMemoryPayload[3U] 
                                               >> 0x16U))
                                         : ((0U != 
                                             (3U & 
                                              (vlSelf->Top__DOT__executeMemoryPayload[0U] 
                                               >> 1U)))
                                             ? ((vlSelf->Top__DOT__executeMemoryPayload[1U] 
                                                 << 0x1dU) 
                                                | (vlSelf->Top__DOT__executeMemoryPayload[0U] 
                                                   >> 3U))
                                             : 0U)));
        } else if (((((IData)(vlSelf->dbg_MEM_WB_Valid) 
                      & (IData)(vlSelf->Top__DOT__destinationEnable)) 
                     & (0U != (0x1fU & (vlSelf->Top__DOT__memoryWritebackPayload[2U] 
                                        >> 0xaU)))) 
                    & ((0x1fU & (vlSelf->Top__DOT__decodeExecutePayload[2U] 
                                 >> 0xcU)) == (0x1fU 
                                               & (vlSelf->Top__DOT__memoryWritebackPayload[2U] 
                                                  >> 0xaU))))) {
            vlSelf->forwardEnable1 = 1U;
            vlSelf->forwardData1 = vlSelf->Top__DOT__writeData;
        }
    }
    vlSelf->forwardData2 = 0U;
    if ((0U != (0x1fU & (vlSelf->Top__DOT__decodeExecutePayload[2U] 
                         >> 7U)))) {
        if (((((IData)(vlSelf->dbg_EX_MEM_Valid) & 
               (((0U != (7U & (vlSelf->Top__DOT__executeMemoryPayload[1U] 
                               >> 9U))) & (2U != (7U 
                                                  & (vlSelf->Top__DOT__executeMemoryPayload[1U] 
                                                     >> 9U)))) 
                | (0U != (3U & (vlSelf->Top__DOT__executeMemoryPayload[0U] 
                                >> 1U))))) & (0U != 
                                              (0x1fU 
                                               & (vlSelf->Top__DOT__executeMemoryPayload[3U] 
                                                  >> 0x11U)))) 
             & ((0x1fU & (vlSelf->Top__DOT__decodeExecutePayload[2U] 
                          >> 7U)) == (0x1fU & (vlSelf->Top__DOT__executeMemoryPayload[3U] 
                                               >> 0x11U))))) {
            vlSelf->forwardEnable2 = 1U;
            vlSelf->forwardData2 = ((1U == (7U & (vlSelf->Top__DOT__executeMemoryPayload[1U] 
                                                  >> 9U)))
                                     ? ((vlSelf->Top__DOT__executeMemoryPayload[3U] 
                                         << 0x14U) 
                                        | (vlSelf->Top__DOT__executeMemoryPayload[2U] 
                                           >> 0xcU))
                                     : ((3U == (7U 
                                                & (vlSelf->Top__DOT__executeMemoryPayload[1U] 
                                                   >> 9U)))
                                         ? ((vlSelf->Top__DOT__executeMemoryPayload[4U] 
                                             << 0xaU) 
                                            | (vlSelf->Top__DOT__executeMemoryPayload[3U] 
                                               >> 0x16U))
                                         : ((0U != 
                                             (3U & 
                                              (vlSelf->Top__DOT__executeMemoryPayload[0U] 
                                               >> 1U)))
                                             ? ((vlSelf->Top__DOT__executeMemoryPayload[1U] 
                                                 << 0x1dU) 
                                                | (vlSelf->Top__DOT__executeMemoryPayload[0U] 
                                                   >> 3U))
                                             : 0U)));
        } else if (((((IData)(vlSelf->dbg_MEM_WB_Valid) 
                      & (IData)(vlSelf->Top__DOT__destinationEnable)) 
                     & (0U != (0x1fU & (vlSelf->Top__DOT__memoryWritebackPayload[2U] 
                                        >> 0xaU)))) 
                    & ((0x1fU & (vlSelf->Top__DOT__decodeExecutePayload[2U] 
                                 >> 7U)) == (0x1fU 
                                             & (vlSelf->Top__DOT__memoryWritebackPayload[2U] 
                                                >> 0xaU))))) {
            vlSelf->forwardEnable2 = 1U;
            vlSelf->forwardData2 = vlSelf->Top__DOT__writeData;
        }
    }
    vlSelf->dbg_ID_EX_Valid = (1U & vlSelf->Top__DOT__decodeExecutePayload[0U]);
    vlSelf->Top__DOT__fetch__DOT__programCounter = __Vdly__Top__DOT__fetch__DOT__programCounter;
    vlSelf->Top__DOT__controlReset = 0U;
    vlSelf->dbg_pc = vlSelf->Top__DOT__fetch__DOT__programCounter;
    vlSelf->dbg_IF_ID_Valid = (1U & vlSelf->Top__DOT__fetchDecodePayload[0U]);
    vlSelf->dbg_IF_ID_programCounter = ((vlSelf->Top__DOT__fetchDecodePayload[2U] 
                                         << 0x1fU) 
                                        | (vlSelf->Top__DOT__fetchDecodePayload[1U] 
                                           >> 1U));
    vlSelf->dbg_IF_ID_instruction = ((vlSelf->Top__DOT__fetchDecodePayload[3U] 
                                      << 0x1fU) | (
                                                   vlSelf->Top__DOT__fetchDecodePayload[2U] 
                                                   >> 1U));
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((IData)(vlSelf->dbg_ID_EX_Valid) & (vlSelf->Top__DOT__decodeExecutePayload[0U] 
                                                 >> 1U))) {
            vlSelf->Top__DOT__controlReset = 1U;
        } else if (((IData)(vlSelf->dbg_MEM_WB_Valid) 
                    & (vlSelf->Top__DOT__memoryWritebackPayload[1U] 
                       >> 8U))) {
            vlSelf->Top__DOT__controlReset = 1U;
        }
        vlSelf->dbg_trap = vlSelf->Top__DOT__controlReset;
        vlSelf->Top__DOT__instructionData = 0x13U;
        vlSelf->Top__DOT__instructionDataValid = 0U;
        vlSelf->Top__DOT__imem_inst__DOT__unnamedblk1__DOT__off_bytes 
            = (vlSelf->dbg_pc - (IData)(0x80000000U));
        if (((0U == (3U & vlSelf->dbg_pc)) & (0x1000U 
                                              > vlSelf->Top__DOT__imem_inst__DOT__unnamedblk1__DOT__off_bytes))) {
            vlSelf->Top__DOT__instructionData = vlSelf->Top__DOT__imem_inst__DOT__mem
                [(0x3ffU & (vlSelf->Top__DOT__imem_inst__DOT__unnamedblk1__DOT__off_bytes 
                            >> 2U))];
            vlSelf->Top__DOT__instructionDataValid = 1U;
        }
    } else {
        vlSelf->dbg_trap = vlSelf->Top__DOT__controlReset;
        vlSelf->Top__DOT__instructionData = 0x13U;
        vlSelf->Top__DOT__instructionDataValid = 0U;
    }
    vlSelf->dbg_IMEM_data = vlSelf->Top__DOT__instructionData;
    vlSelf->dbg_IMEM_valid = vlSelf->Top__DOT__instructionDataValid;
}

VL_INLINE_OPT void VTop___024root___nba_comb__TOP__1(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___nba_comb__TOP__1\n"); );
    // Init
    CData/*0:0*/ Top__DOT__memory__DOT__storeConfirm;
    Top__DOT__memory__DOT__storeConfirm = 0;
    CData/*3:0*/ Top__DOT__memory__DOT__storeByteEnable;
    Top__DOT__memory__DOT__storeByteEnable = 0;
    // Body
    vlSelf->Top__DOT__memory__DOT__illegal = 0U;
    Top__DOT__memory__DOT__storeConfirm = 0U;
    if ((1U & (IData)(((0x80U == (0x180U & vlSelf->Top__DOT__executeMemoryPayload[1U])) 
                       & (~ (IData)(vlSelf->Top__DOT__memoryWritebackControl)))))) {
        if ((0x10000U & vlSelf->Top__DOT__executeMemoryPayload[3U])) {
            if ((0U != (3U & (vlSelf->Top__DOT__executeMemoryPayload[3U] 
                              >> 0xdU)))) {
                if ((1U == (3U & (vlSelf->Top__DOT__executeMemoryPayload[3U] 
                                  >> 0xdU)))) {
                    if ((0x1000U & vlSelf->Top__DOT__executeMemoryPayload[2U])) {
                        vlSelf->Top__DOT__memory__DOT__illegal = 1U;
                    }
                } else if ((3U == (3U & (vlSelf->Top__DOT__executeMemoryPayload[3U] 
                                         >> 0xdU)))) {
                    if ((0U != (3U & (vlSelf->Top__DOT__executeMemoryPayload[2U] 
                                      >> 0xcU)))) {
                        vlSelf->Top__DOT__memory__DOT__illegal = 1U;
                    }
                } else {
                    vlSelf->Top__DOT__memory__DOT__illegal = 1U;
                }
            }
        }
        if ((0x8000U & vlSelf->Top__DOT__executeMemoryPayload[3U])) {
            if ((0U != (3U & (vlSelf->Top__DOT__executeMemoryPayload[3U] 
                              >> 0xdU)))) {
                if ((1U == (3U & (vlSelf->Top__DOT__executeMemoryPayload[3U] 
                                  >> 0xdU)))) {
                    if ((0x1000U & vlSelf->Top__DOT__executeMemoryPayload[2U])) {
                        vlSelf->Top__DOT__memory__DOT__illegal = 1U;
                    }
                } else if ((3U == (3U & (vlSelf->Top__DOT__executeMemoryPayload[3U] 
                                         >> 0xdU)))) {
                    if ((0U != (3U & (vlSelf->Top__DOT__executeMemoryPayload[2U] 
                                      >> 0xcU)))) {
                        vlSelf->Top__DOT__memory__DOT__illegal = 1U;
                    }
                } else {
                    vlSelf->Top__DOT__memory__DOT__illegal = 1U;
                }
            }
            if ((0U == (3U & (vlSelf->Top__DOT__executeMemoryPayload[3U] 
                              >> 0xdU)))) {
                Top__DOT__memory__DOT__storeConfirm = 1U;
            } else if ((1U == (3U & (vlSelf->Top__DOT__executeMemoryPayload[3U] 
                                     >> 0xdU)))) {
                if ((1U & (~ (vlSelf->Top__DOT__executeMemoryPayload[2U] 
                              >> 0xcU)))) {
                    Top__DOT__memory__DOT__storeConfirm = 1U;
                }
            } else if ((3U == (3U & (vlSelf->Top__DOT__executeMemoryPayload[3U] 
                                     >> 0xdU)))) {
                if ((0U == (3U & (vlSelf->Top__DOT__executeMemoryPayload[2U] 
                                  >> 0xcU)))) {
                    Top__DOT__memory__DOT__storeConfirm = 1U;
                }
            }
        }
    }
    vlSelf->Top__DOT__memory__DOT__storeReq = ((~ (IData)(vlSelf->Top__DOT__storeValid)) 
                                               & (IData)(Top__DOT__memory__DOT__storeConfirm));
    vlSelf->Top__DOT__stallControl = (1U & (((IData)(vlSelf->dbg_EX_MEM_Valid) 
                                             & ((~ 
                                                 ((IData)(vlSelf->Top__DOT__memory__DOT__illegal) 
                                                  | (IData)(vlSelf->Top__DOT__memoryWritebackControl))) 
                                                & (vlSelf->Top__DOT__executeMemoryPayload[3U] 
                                                   >> 0x10U)))
                                             ? (~ (IData)(vlSelf->Top__DOT__loadDataValid))
                                             : ((IData)(vlSelf->Top__DOT__memory__DOT__storeReq) 
                                                | ((~ (IData)(vlSelf->Top__DOT__storeComplete)) 
                                                   & (IData)(vlSelf->Top__DOT__storeValid)))));
    vlSelf->Top__DOT__memoryWritebackControl = 0U;
    vlSelf->Top__DOT__executeMemoryControl = 0U;
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((IData)(vlSelf->dbg_ID_EX_Valid) 
                      & (vlSelf->Top__DOT__decodeExecutePayload[0U] 
                         >> 1U))))) {
            if (((IData)(vlSelf->dbg_MEM_WB_Valid) 
                 & (vlSelf->Top__DOT__memoryWritebackPayload[1U] 
                    >> 8U))) {
                vlSelf->Top__DOT__memoryWritebackControl 
                    = (1U | (IData)(vlSelf->Top__DOT__memoryWritebackControl));
            }
        }
        if (((IData)(vlSelf->dbg_ID_EX_Valid) & (vlSelf->Top__DOT__decodeExecutePayload[0U] 
                                                 >> 1U))) {
            vlSelf->Top__DOT__executeMemoryControl 
                = (1U | (IData)(vlSelf->Top__DOT__executeMemoryControl));
        } else if (((IData)(vlSelf->dbg_MEM_WB_Valid) 
                    & (vlSelf->Top__DOT__memoryWritebackPayload[1U] 
                       >> 8U))) {
            vlSelf->Top__DOT__executeMemoryControl 
                = (1U | (IData)(vlSelf->Top__DOT__executeMemoryControl));
        }
        if (vlSelf->Top__DOT__stallControl) {
            vlSelf->Top__DOT__memoryWritebackControl 
                = (2U | (IData)(vlSelf->Top__DOT__memoryWritebackControl));
            vlSelf->Top__DOT__executeMemoryControl 
                = (2U | (IData)(vlSelf->Top__DOT__executeMemoryControl));
        }
        if (vlSelf->Top__DOT__loadDataValid) {
            if (((((IData)(vlSelf->dbg_ID_EX_Valid) 
                   & (IData)(vlSelf->dbg_EX_MEM_Valid)) 
                  & (0x400U == (0xe00U & vlSelf->Top__DOT__executeMemoryPayload[1U]))) 
                 & ((0U != (0x1fU & (vlSelf->Top__DOT__decodeExecutePayload[2U] 
                                     >> 0xcU))) & (
                                                   (0x1fU 
                                                    & (vlSelf->Top__DOT__decodeExecutePayload[2U] 
                                                       >> 0xcU)) 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->Top__DOT__executeMemoryPayload[3U] 
                                                       >> 0x11U)))))) {
                vlSelf->Top__DOT__executeMemoryControl 
                    = (1U | (IData)(vlSelf->Top__DOT__executeMemoryControl));
            }
            if (((((IData)(vlSelf->dbg_ID_EX_Valid) 
                   & (IData)(vlSelf->dbg_EX_MEM_Valid)) 
                  & (0x400U == (0xe00U & vlSelf->Top__DOT__executeMemoryPayload[1U]))) 
                 & ((0U != (0x1fU & (vlSelf->Top__DOT__decodeExecutePayload[2U] 
                                     >> 7U))) & ((0x1fU 
                                                  & (vlSelf->Top__DOT__decodeExecutePayload[2U] 
                                                     >> 7U)) 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->Top__DOT__executeMemoryPayload[3U] 
                                                     >> 0x11U)))))) {
                vlSelf->Top__DOT__executeMemoryControl 
                    = (1U | (IData)(vlSelf->Top__DOT__executeMemoryControl));
            }
        }
    }
    Top__DOT__memory__DOT__storeByteEnable = 0U;
    if ((1U & (IData)(((0x80U == (0x180U & vlSelf->Top__DOT__executeMemoryPayload[1U])) 
                       & (~ (IData)(vlSelf->Top__DOT__memoryWritebackControl)))))) {
        if ((0x8000U & vlSelf->Top__DOT__executeMemoryPayload[3U])) {
            if ((0U == (3U & (vlSelf->Top__DOT__executeMemoryPayload[3U] 
                              >> 0xdU)))) {
                Top__DOT__memory__DOT__storeByteEnable = 1U;
            } else if ((1U == (3U & (vlSelf->Top__DOT__executeMemoryPayload[3U] 
                                     >> 0xdU)))) {
                if ((1U & (~ (vlSelf->Top__DOT__executeMemoryPayload[2U] 
                              >> 0xcU)))) {
                    Top__DOT__memory__DOT__storeByteEnable = 3U;
                }
            } else if ((3U == (3U & (vlSelf->Top__DOT__executeMemoryPayload[3U] 
                                     >> 0xdU)))) {
                if ((0U == (3U & (vlSelf->Top__DOT__executeMemoryPayload[2U] 
                                  >> 0xcU)))) {
                    Top__DOT__memory__DOT__storeByteEnable = 0xfU;
                }
            }
        }
    }
    vlSelf->Top__DOT__realStoreByteEnable = (0xfU & 
                                             ((IData)(Top__DOT__memory__DOT__storeByteEnable) 
                                              << (3U 
                                                  & (vlSelf->Top__DOT__executeMemoryPayload[2U] 
                                                     >> 0xcU))));
}

void VTop___024root___eval_nba(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval_nba\n"); );
    // Body
    if ((0x10ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VTop___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((0x18ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VTop___024root___act_sequent__TOP__0(vlSelf);
    }
    if ((0x11ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VTop___024root___nba_comb__TOP__1(vlSelf);
    }
    if ((0x12ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VTop___024root___act_sequent__TOP__3(vlSelf);
    }
    if ((0x14ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VTop___024root___act_sequent__TOP__4(vlSelf);
    }
    if ((0x19ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VTop___024root___act_comb__TOP__0(vlSelf);
    }
    if ((0x16ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VTop___024root___act_comb__TOP__1(vlSelf);
    }
}

void VTop___024root___eval_triggers__act(VTop___024root* vlSelf);

bool VTop___024root___eval_phase__act(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<5> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VTop___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        VTop___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VTop___024root___eval_phase__nba(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        VTop___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTop___024root___dump_triggers__ico(VTop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VTop___024root___dump_triggers__nba(VTop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VTop___024root___dump_triggers__act(VTop___024root* vlSelf);
#endif  // VL_DEBUG

void VTop___024root___eval(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelf->__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            VTop___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("CPU/Top.sv", 3, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (VTop___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VTop___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("CPU/Top.sv", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                VTop___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("CPU/Top.sv", 3, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (VTop___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (VTop___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VTop___024root___eval_debug_assertions(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((vlSelf->__SYM__interrupt & 0xfeU))) {
        Verilated::overWidthError("__SYM__interrupt");}
}
#endif  // VL_DEBUG
