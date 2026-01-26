// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "VTop__pch.h"
#include "VTop_Top.h"
#include "VTop__Syms.h"

VL_INLINE_OPT void VTop_Top___ico_sequent__TOP__Top__0(VTop_Top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VTop_Top___ico_sequent__TOP__Top__0\n"); );
    // Body
    vlSelf->__PVT__mtval = 0U;
    vlSelf->__PVT__mcause = 0U;
    vlSelf->__PVT__controlReset = 0U;
    if ((1U & (~ (IData)(vlSymsp->TOP.reset)))) {
        if (((0U != (0xfU & (vlSelf->__PVT__memoryWritebackPayload[2U] 
                             >> 8U))) & (vlSelf->__PVT__memoryWritebackPayload[1U] 
                                         >> 7U))) {
            vlSelf->__PVT__mtval = ((vlSelf->__PVT__memoryWritebackPayload[2U] 
                                     << 0x18U) | (vlSelf->__PVT__memoryWritebackPayload[1U] 
                                                  >> 8U));
            if ((0x800U & vlSelf->__PVT__memoryWritebackPayload[2U])) {
                if ((1U & (~ (vlSelf->__PVT__memoryWritebackPayload[2U] 
                              >> 0xaU)))) {
                    if ((1U & (~ (vlSelf->__PVT__memoryWritebackPayload[2U] 
                                  >> 9U)))) {
                        vlSelf->__PVT__mcause = ((0x100U 
                                                  & vlSelf->__PVT__memoryWritebackPayload[2U])
                                                  ? 1U
                                                  : 5U);
                    }
                }
            } else if ((0x400U & vlSelf->__PVT__memoryWritebackPayload[2U])) {
                vlSelf->__PVT__mcause = ((0x200U & 
                                          vlSelf->__PVT__memoryWritebackPayload[2U])
                                          ? ((0x100U 
                                              & vlSelf->__PVT__memoryWritebackPayload[2U])
                                              ? 7U : 3U)
                                          : ((0x100U 
                                              & vlSelf->__PVT__memoryWritebackPayload[2U])
                                              ? 0xbU
                                              : 0U));
            } else if ((0x200U & vlSelf->__PVT__memoryWritebackPayload[2U])) {
                vlSelf->__PVT__mcause = ((0x100U & 
                                          vlSelf->__PVT__memoryWritebackPayload[2U])
                                          ? 4U : 6U);
            } else if ((0x100U & vlSelf->__PVT__memoryWritebackPayload[2U])) {
                vlSelf->__PVT__mcause = 2U;
            }
            vlSelf->__PVT__controlReset = 1U;
        }
    }
}

VL_INLINE_OPT void VTop_Top___ico_comb__TOP__Top__0(VTop_Top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VTop_Top___ico_comb__TOP__Top__0\n"); );
    // Init
    IData/*31:0*/ __PVT__execute__DOT__operand1;
    __PVT__execute__DOT__operand1 = 0;
    IData/*31:0*/ __PVT__execute__DOT__operand2;
    __PVT__execute__DOT__operand2 = 0;
    IData/*31:0*/ __PVT__execute__DOT__brOp1;
    __PVT__execute__DOT__brOp1 = 0;
    IData/*31:0*/ __PVT__execute__DOT__brOp2;
    __PVT__execute__DOT__brOp2 = 0;
    IData/*31:0*/ __PVT__execute__DOT__csrOperand;
    __PVT__execute__DOT__csrOperand = 0;
    IData/*31:0*/ __PVT__execute__DOT__tempResult;
    __PVT__execute__DOT__tempResult = 0;
    CData/*0:0*/ __PVT__execute__DOT__branchValid;
    __PVT__execute__DOT__branchValid = 0;
    // Body
    vlSelf->__PVT__stallControl = ((1U & ((vlSelf->__PVT__executeMemoryPayload[1U] 
                                           >> 7U) & 
                                          ((~ ((IData)(vlSelf->__PVT__memory__DOT__illegal) 
                                               | ((IData)(vlSelf->__PVT__memory__DOT__accessFault) 
                                                  | (IData)(vlSelf->__PVT__memoryWritebackControl)))) 
                                           & (vlSelf->__PVT__executeMemoryPayload[4U] 
                                              >> 0x13U))))
                                    ? (IData)(vlSymsp->TOP.reset)
                                    : ((IData)(vlSelf->__PVT__memory__DOT__storeReq) 
                                       | ((~ (IData)(vlSymsp->TOP__Top__mem_inst.__PVT__storeComplete)) 
                                          & (IData)(vlSelf->__PVT__storeValid))));
    vlSelf->__PVT__memoryWritebackControl = 0U;
    vlSelf->__PVT__executeMemoryControl = 0U;
    vlSelf->__PVT__mretSignal = 0U;
    vlSelf->__PVT__execute__DOT__illegal = 0U;
    __PVT__execute__DOT__branchValid = 0U;
    vlSelf->__PVT__readCSR = 0U;
    __PVT__execute__DOT__tempResult = 0U;
    __PVT__execute__DOT__operand1 = 0U;
    __PVT__execute__DOT__operand2 = 0U;
    vlSelf->__PVT__execute__DOT__result = 0U;
    vlSelf->__PVT__branchData = 0U;
    vlSelf->__PVT__execute__DOT__forwardCorrectedCSRReadData 
        = ((IData)(vlSelf->__PVT__csrForwardEnable)
            ? vlSelf->__PVT__csrForwardData : vlSelf->__PVT__csrReadData);
    __PVT__execute__DOT__brOp1 = ((IData)(vlSelf->forwardEnable1)
                                   ? vlSelf->forwardData1
                                   : ((vlSelf->__PVT__decodeExecutePayload[5U] 
                                       << 0xbU) | (
                                                   vlSelf->__PVT__decodeExecutePayload[4U] 
                                                   >> 0x15U)));
    __PVT__execute__DOT__brOp2 = ((IData)(vlSelf->forwardEnable2)
                                   ? vlSelf->forwardData2
                                   : ((vlSelf->__PVT__decodeExecutePayload[4U] 
                                       << 0xbU) | (
                                                   vlSelf->__PVT__decodeExecutePayload[3U] 
                                                   >> 0x15U)));
    __PVT__execute__DOT__csrOperand = ((0x1000U & vlSelf->__PVT__decodeExecutePayload[1U])
                                        ? __PVT__execute__DOT__brOp1
                                        : (0x1fU & 
                                           (vlSelf->__PVT__decodeExecutePayload[1U] 
                                            >> 7U)));
    if ((1U & (~ (IData)(vlSymsp->TOP.reset)))) {
        if (((0U != (0xfU & (vlSelf->__PVT__memoryWritebackPayload[2U] 
                             >> 8U))) & (vlSelf->__PVT__memoryWritebackPayload[1U] 
                                         >> 7U))) {
            vlSelf->__PVT__memoryWritebackControl = 
                (1U | (IData)(vlSelf->__PVT__memoryWritebackControl));
            vlSelf->__PVT__executeMemoryControl = (1U 
                                                   | (IData)(vlSelf->__PVT__executeMemoryControl));
        }
        if (vlSelf->__PVT__stallControl) {
            vlSelf->__PVT__memoryWritebackControl = 
                (2U | (IData)(vlSelf->__PVT__memoryWritebackControl));
            vlSelf->__PVT__executeMemoryControl = (2U 
                                                   | (IData)(vlSelf->__PVT__executeMemoryControl));
        }
    }
    if (((vlSelf->__PVT__decodeExecutePayload[0U] & 
          (0x20U == (0x3eU & vlSelf->__PVT__decodeExecutePayload[1U]))) 
         & (~ ((IData)(vlSelf->__PVT__executeMemoryControl) 
               >> 1U)))) {
        vlSelf->__PVT__mretSignal = 1U;
        vlSelf->__PVT__readCSR = 1U;
        vlSelf->__PVT__branchData = vlSelf->__PVT__execute__DOT__forwardCorrectedCSRReadData;
    } else if ((0U == (3U & (vlSelf->__PVT__decodeExecutePayload[1U] 
                             >> 0x11U)))) {
        if ((0x20U & vlSelf->__PVT__decodeExecutePayload[2U])) {
            if ((0x10U & vlSelf->__PVT__decodeExecutePayload[2U])) {
                __PVT__execute__DOT__operand1 = 0U;
                __PVT__execute__DOT__operand2 = ((vlSelf->__PVT__decodeExecutePayload[3U] 
                                                  << 0x1aU) 
                                                 | (vlSelf->__PVT__decodeExecutePayload[2U] 
                                                    >> 6U));
            } else {
                __PVT__execute__DOT__operand1 = ((vlSelf->__PVT__decodeExecutePayload[7U] 
                                                  << 0xbU) 
                                                 | (vlSelf->__PVT__decodeExecutePayload[6U] 
                                                    >> 0x15U));
                __PVT__execute__DOT__operand2 = ((vlSelf->__PVT__decodeExecutePayload[3U] 
                                                  << 0x1aU) 
                                                 | (vlSelf->__PVT__decodeExecutePayload[2U] 
                                                    >> 6U));
            }
        } else if ((0x10U & vlSelf->__PVT__decodeExecutePayload[2U])) {
            __PVT__execute__DOT__operand1 = ((IData)(vlSelf->forwardEnable1)
                                              ? vlSelf->forwardData1
                                              : ((vlSelf->__PVT__decodeExecutePayload[5U] 
                                                  << 0xbU) 
                                                 | (vlSelf->__PVT__decodeExecutePayload[4U] 
                                                    >> 0x15U)));
            __PVT__execute__DOT__operand2 = ((vlSelf->__PVT__decodeExecutePayload[3U] 
                                              << 0x1aU) 
                                             | (vlSelf->__PVT__decodeExecutePayload[2U] 
                                                >> 6U));
        } else {
            __PVT__execute__DOT__operand1 = ((IData)(vlSelf->forwardEnable1)
                                              ? vlSelf->forwardData1
                                              : ((vlSelf->__PVT__decodeExecutePayload[5U] 
                                                  << 0xbU) 
                                                 | (vlSelf->__PVT__decodeExecutePayload[4U] 
                                                    >> 0x15U)));
            __PVT__execute__DOT__operand2 = ((IData)(vlSelf->forwardEnable2)
                                              ? vlSelf->forwardData2
                                              : ((vlSelf->__PVT__decodeExecutePayload[4U] 
                                                  << 0xbU) 
                                                 | (vlSelf->__PVT__decodeExecutePayload[3U] 
                                                    >> 0x15U)));
        }
        if ((0x8000000U & vlSelf->__PVT__decodeExecutePayload[1U])) {
            if ((1U & (~ (vlSelf->__PVT__decodeExecutePayload[1U] 
                          >> 0x1aU)))) {
                if ((1U & (~ (vlSelf->__PVT__decodeExecutePayload[1U] 
                              >> 0x19U)))) {
                    vlSelf->__PVT__execute__DOT__result 
                        = ((0x1000000U & vlSelf->__PVT__decodeExecutePayload[1U])
                            ? ((__PVT__execute__DOT__operand1 
                                < __PVT__execute__DOT__operand2)
                                ? 1U : 0U) : (VL_LTS_III(32, __PVT__execute__DOT__operand1, __PVT__execute__DOT__operand2)
                                               ? 1U
                                               : 0U));
                }
            }
        } else {
            vlSelf->__PVT__execute__DOT__result = (
                                                   (0x4000000U 
                                                    & vlSelf->__PVT__decodeExecutePayload[1U])
                                                    ? 
                                                   ((0x2000000U 
                                                     & vlSelf->__PVT__decodeExecutePayload[1U])
                                                     ? 
                                                    ((0x1000000U 
                                                      & vlSelf->__PVT__decodeExecutePayload[1U])
                                                      ? 
                                                     VL_SHIFTRS_III(32,32,5, __PVT__execute__DOT__operand1, 
                                                                    (0x1fU 
                                                                     & __PVT__execute__DOT__operand2))
                                                      : 
                                                     (__PVT__execute__DOT__operand1 
                                                      >> 
                                                      (0x1fU 
                                                       & __PVT__execute__DOT__operand2)))
                                                     : 
                                                    ((0x1000000U 
                                                      & vlSelf->__PVT__decodeExecutePayload[1U])
                                                      ? 
                                                     (__PVT__execute__DOT__operand1 
                                                      << 
                                                      (0x1fU 
                                                       & __PVT__execute__DOT__operand2))
                                                      : 
                                                     (__PVT__execute__DOT__operand1 
                                                      ^ __PVT__execute__DOT__operand2)))
                                                    : 
                                                   ((0x2000000U 
                                                     & vlSelf->__PVT__decodeExecutePayload[1U])
                                                     ? 
                                                    ((0x1000000U 
                                                      & vlSelf->__PVT__decodeExecutePayload[1U])
                                                      ? 
                                                     (__PVT__execute__DOT__operand1 
                                                      | __PVT__execute__DOT__operand2)
                                                      : 
                                                     (__PVT__execute__DOT__operand1 
                                                      & __PVT__execute__DOT__operand2))
                                                     : 
                                                    ((0x1000000U 
                                                      & vlSelf->__PVT__decodeExecutePayload[1U])
                                                      ? 
                                                     (__PVT__execute__DOT__operand1 
                                                      - __PVT__execute__DOT__operand2)
                                                      : 
                                                     (__PVT__execute__DOT__operand1 
                                                      + __PVT__execute__DOT__operand2))));
        }
        if ((1U & (vlSelf->__PVT__decodeExecutePayload[0U] 
                   & (~ (IData)(vlSelf->__PVT__executeMemoryControl))))) {
            if ((0x40000000U & vlSelf->__PVT__decodeExecutePayload[1U])) {
                if ((0x20000000U & vlSelf->__PVT__decodeExecutePayload[1U])) {
                    if ((1U & (~ (vlSelf->__PVT__decodeExecutePayload[1U] 
                                  >> 0x1cU)))) {
                        __PVT__execute__DOT__branchValid 
                            = (__PVT__execute__DOT__brOp1 
                               >= __PVT__execute__DOT__brOp2);
                    }
                } else {
                    __PVT__execute__DOT__branchValid 
                        = ((0x10000000U & vlSelf->__PVT__decodeExecutePayload[1U])
                            ? (__PVT__execute__DOT__brOp1 
                               < __PVT__execute__DOT__brOp2)
                            : VL_GTES_III(32, __PVT__execute__DOT__brOp1, __PVT__execute__DOT__brOp2));
                }
            } else if ((0x20000000U & vlSelf->__PVT__decodeExecutePayload[1U])) {
                __PVT__execute__DOT__branchValid = 
                    ((0x10000000U & vlSelf->__PVT__decodeExecutePayload[1U])
                      ? VL_LTS_III(32, __PVT__execute__DOT__brOp1, __PVT__execute__DOT__brOp2)
                      : (__PVT__execute__DOT__brOp1 
                         != __PVT__execute__DOT__brOp2));
            } else if ((0x10000000U & vlSelf->__PVT__decodeExecutePayload[1U])) {
                __PVT__execute__DOT__branchValid = 
                    (__PVT__execute__DOT__brOp1 == __PVT__execute__DOT__brOp2);
            }
            if ((1U == (3U & (vlSelf->__PVT__decodeExecutePayload[1U] 
                              >> 0x16U)))) {
                __PVT__execute__DOT__branchValid = 1U;
            } else if ((2U == (3U & (vlSelf->__PVT__decodeExecutePayload[1U] 
                                     >> 0x16U)))) {
                __PVT__execute__DOT__branchValid = 1U;
            }
        } else {
            __PVT__execute__DOT__branchValid = 0U;
        }
        if ((((vlSelf->__PVT__decodeExecutePayload[0U] 
               & (0U == (0x1eU & vlSelf->__PVT__decodeExecutePayload[1U]))) 
              & (IData)(__PVT__execute__DOT__branchValid)) 
             & (0U != (0x70c00000U & vlSelf->__PVT__decodeExecutePayload[1U])))) {
            vlSelf->__PVT__branchData = ((2U == (3U 
                                                 & (vlSelf->__PVT__decodeExecutePayload[1U] 
                                                    >> 0x16U)))
                                          ? (0xfffffffeU 
                                             & vlSelf->__PVT__execute__DOT__result)
                                          : vlSelf->__PVT__execute__DOT__result);
            if ((0U != (3U & vlSelf->__PVT__branchData))) {
                vlSelf->__PVT__execute__DOT__illegal = 1U;
            }
        }
    } else {
        vlSelf->__PVT__readCSR = (0xfU & (vlSelf->__PVT__decodeExecutePayload[1U] 
                                          >> 0xdU));
        if ((1U == (3U & (vlSelf->__PVT__decodeExecutePayload[1U] 
                          >> 0x11U)))) {
            __PVT__execute__DOT__tempResult = __PVT__execute__DOT__csrOperand;
        } else if ((2U == (3U & (vlSelf->__PVT__decodeExecutePayload[1U] 
                                 >> 0x11U)))) {
            __PVT__execute__DOT__tempResult = (vlSelf->__PVT__execute__DOT__forwardCorrectedCSRReadData 
                                               | __PVT__execute__DOT__csrOperand);
        } else if ((3U == (3U & (vlSelf->__PVT__decodeExecutePayload[1U] 
                                 >> 0x11U)))) {
            __PVT__execute__DOT__tempResult = (vlSelf->__PVT__execute__DOT__forwardCorrectedCSRReadData 
                                               & (~ __PVT__execute__DOT__csrOperand));
        }
        if ((8U & (IData)(vlSelf->__PVT__readCSR))) {
            vlSelf->__PVT__execute__DOT__result = (
                                                   (4U 
                                                    & (IData)(vlSelf->__PVT__readCSR))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelf->__PVT__readCSR))
                                                     ? __PVT__execute__DOT__tempResult
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__readCSR))
                                                      ? vlSelf->__PVT__execute__DOT__forwardCorrectedCSRReadData
                                                      : __PVT__execute__DOT__tempResult))
                                                    : __PVT__execute__DOT__tempResult);
        } else if ((4U & (IData)(vlSelf->__PVT__readCSR))) {
            if ((2U & (IData)(vlSelf->__PVT__readCSR))) {
                vlSelf->__PVT__execute__DOT__result 
                    = ((1U & (IData)(vlSelf->__PVT__readCSR))
                        ? __PVT__execute__DOT__tempResult
                        : (0xfffffffcU & __PVT__execute__DOT__tempResult));
            } else if ((1U & (IData)(vlSelf->__PVT__readCSR))) {
                vlSelf->__PVT__execute__DOT__result 
                    = __PVT__execute__DOT__tempResult;
            } else {
                vlSelf->__PVT__execute__DOT__result = 0U;
                vlSelf->__PVT__execute__DOT__result 
                    = ((0xfffffff7U & vlSelf->__PVT__execute__DOT__result) 
                       | (8U & __PVT__execute__DOT__tempResult));
                vlSelf->__PVT__execute__DOT__result 
                    = ((0xffffff7fU & vlSelf->__PVT__execute__DOT__result) 
                       | (0x80U & __PVT__execute__DOT__tempResult));
                vlSelf->__PVT__execute__DOT__result 
                    = ((0xfffff7ffU & vlSelf->__PVT__execute__DOT__result) 
                       | (0x800U & __PVT__execute__DOT__tempResult));
            }
        } else if ((2U & (IData)(vlSelf->__PVT__readCSR))) {
            vlSelf->__PVT__execute__DOT__result = __PVT__execute__DOT__tempResult;
        } else if ((1U & (IData)(vlSelf->__PVT__readCSR))) {
            vlSelf->__PVT__execute__DOT__result = (0xfffffffcU 
                                                   & __PVT__execute__DOT__tempResult);
        } else {
            vlSelf->__PVT__execute__DOT__result = 0U;
            vlSelf->__PVT__execute__DOT__result = (
                                                   (0xfffffff7U 
                                                    & vlSelf->__PVT__execute__DOT__result) 
                                                   | (8U 
                                                      & __PVT__execute__DOT__tempResult));
            vlSelf->__PVT__execute__DOT__result = (
                                                   (0xffffff7fU 
                                                    & vlSelf->__PVT__execute__DOT__result) 
                                                   | (0x80U 
                                                      & __PVT__execute__DOT__tempResult));
            vlSelf->__PVT__execute__DOT__result = (0x1800U 
                                                   | vlSelf->__PVT__execute__DOT__result);
        }
    }
    vlSelf->__PVT__branchValid = ((IData)(__PVT__execute__DOT__branchValid) 
                                  & ((~ (IData)(vlSelf->__PVT__execute__DOT__illegal)) 
                                     & (IData)(((~ 
                                                 ((IData)(vlSelf->__PVT__executeMemoryControl) 
                                                  >> 1U)) 
                                                & (0U 
                                                   == 
                                                   (0x1eU 
                                                    & vlSelf->__PVT__decodeExecutePayload[1U]))))));
    vlSelf->__PVT__fetchDecodeControl = 0U;
    vlSelf->__PVT__decodeExecuteControl = 0U;
    if ((1U & (~ (IData)(vlSymsp->TOP.reset)))) {
        if (((0U != (0xfU & (vlSelf->__PVT__memoryWritebackPayload[2U] 
                             >> 8U))) & (vlSelf->__PVT__memoryWritebackPayload[1U] 
                                         >> 7U))) {
            vlSelf->__PVT__fetchDecodeControl = (1U 
                                                 | (IData)(vlSelf->__PVT__fetchDecodeControl));
            vlSelf->__PVT__decodeExecuteControl = (1U 
                                                   | (IData)(vlSelf->__PVT__decodeExecuteControl));
        } else if (((IData)(vlSelf->__PVT__mretSignal) 
                    | (IData)(vlSelf->__PVT__branchValid))) {
            vlSelf->__PVT__fetchDecodeControl = (1U 
                                                 | (IData)(vlSelf->__PVT__fetchDecodeControl));
            vlSelf->__PVT__decodeExecuteControl = (1U 
                                                   | (IData)(vlSelf->__PVT__decodeExecuteControl));
        }
        if (vlSelf->__PVT__stallControl) {
            vlSelf->__PVT__fetchDecodeControl = (2U 
                                                 | (IData)(vlSelf->__PVT__fetchDecodeControl));
            vlSelf->__PVT__decodeExecuteControl = (2U 
                                                   | (IData)(vlSelf->__PVT__decodeExecuteControl));
        } else {
            if (((((vlSelf->__PVT__decodeExecutePayload[0U] 
                    & (0x100000U == (0x380000U & vlSelf->__PVT__decodeExecutePayload[1U]))) 
                   & vlSelf->__PVT__fetchDecodePayload[0U]) 
                  & (~ (IData)(vlSelf->__PVT__decodeCombIllegal))) 
                 & (((0U != (0x1fU & (vlSelf->__PVT__decodeExecutePayload[3U] 
                                      >> 6U))) & (0U 
                                                  != (IData)(vlSelf->__PVT__readAddress1))) 
                    & ((0x1fU & (vlSelf->__PVT__decodeExecutePayload[3U] 
                                 >> 6U)) == (IData)(vlSelf->__PVT__readAddress1))))) {
                vlSelf->__PVT__fetchDecodeControl = 
                    (2U | (IData)(vlSelf->__PVT__fetchDecodeControl));
                vlSelf->__PVT__decodeExecuteControl 
                    = (1U | (IData)(vlSelf->__PVT__decodeExecuteControl));
            }
            if (((((vlSelf->__PVT__decodeExecutePayload[0U] 
                    & (0x100000U == (0x380000U & vlSelf->__PVT__decodeExecutePayload[1U]))) 
                   & vlSelf->__PVT__fetchDecodePayload[0U]) 
                  & (~ (IData)(vlSelf->__PVT__decodeCombIllegal))) 
                 & (((0U != (0x1fU & (vlSelf->__PVT__decodeExecutePayload[3U] 
                                      >> 6U))) & (0U 
                                                  != (IData)(vlSelf->__PVT__readAddress2))) 
                    & ((0x1fU & (vlSelf->__PVT__decodeExecutePayload[3U] 
                                 >> 6U)) == (IData)(vlSelf->__PVT__readAddress2))))) {
                vlSelf->__PVT__fetchDecodeControl = 
                    (2U | (IData)(vlSelf->__PVT__fetchDecodeControl));
                vlSelf->__PVT__decodeExecuteControl 
                    = (1U | (IData)(vlSelf->__PVT__decodeExecuteControl));
            }
        }
    }
}

VL_INLINE_OPT void VTop_Top___act_sequent__TOP__Top__1(VTop_Top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VTop_Top___act_sequent__TOP__Top__1\n"); );
    // Init
    CData/*0:0*/ __PVT__memory__DOT__storeConfirm;
    __PVT__memory__DOT__storeConfirm = 0;
    IData/*31:0*/ __PVT__memory__DOT__limit;
    __PVT__memory__DOT__limit = 0;
    // Body
    vlSelf->__PVT__memory__DOT__accessFault = 0U;
    vlSelf->__PVT__memory__DOT__illegal = 0U;
    __PVT__memory__DOT__storeConfirm = 0U;
    vlSelf->__PVT__memory__DOT__storeByteEnable = 0U;
    __PVT__memory__DOT__limit = ((0U == (3U & (vlSelf->__PVT__executeMemoryPayload[4U] 
                                               >> 0x10U)))
                                  ? 0x1ffffeU : ((1U 
                                                  == 
                                                  (3U 
                                                   & (vlSelf->__PVT__executeMemoryPayload[4U] 
                                                      >> 0x10U)))
                                                  ? 0x1ffffdU
                                                  : 
                                                 ((3U 
                                                   == 
                                                   (3U 
                                                    & (vlSelf->__PVT__executeMemoryPayload[4U] 
                                                       >> 0x10U)))
                                                   ? 0x1ffffbU
                                                   : 0U)));
    if ((((vlSelf->__PVT__executeMemoryPayload[1U] 
           >> 7U) & (0U == (0xf00U & vlSelf->__PVT__executeMemoryPayload[2U]))) 
         & (~ (IData)(vlSelf->__PVT__memoryWritebackControl)))) {
        if ((0x80000U & vlSelf->__PVT__executeMemoryPayload[4U])) {
            if ((0U == (3U & (vlSelf->__PVT__executeMemoryPayload[4U] 
                              >> 0x10U)))) {
                if ((((vlSelf->__PVT__executeMemoryPayload[4U] 
                       << 0x11U) | (vlSelf->__PVT__executeMemoryPayload[3U] 
                                    >> 0xfU)) > __PVT__memory__DOT__limit)) {
                    vlSelf->__PVT__memory__DOT__accessFault = 1U;
                }
            } else if ((1U == (3U & (vlSelf->__PVT__executeMemoryPayload[4U] 
                                     >> 0x10U)))) {
                if ((((vlSelf->__PVT__executeMemoryPayload[4U] 
                       << 0x11U) | (vlSelf->__PVT__executeMemoryPayload[3U] 
                                    >> 0xfU)) > __PVT__memory__DOT__limit)) {
                    vlSelf->__PVT__memory__DOT__accessFault = 1U;
                } else if ((0x8000U & vlSelf->__PVT__executeMemoryPayload[3U])) {
                    vlSelf->__PVT__memory__DOT__illegal = 1U;
                }
            } else if ((3U == (3U & (vlSelf->__PVT__executeMemoryPayload[4U] 
                                     >> 0x10U)))) {
                if ((((vlSelf->__PVT__executeMemoryPayload[4U] 
                       << 0x11U) | (vlSelf->__PVT__executeMemoryPayload[3U] 
                                    >> 0xfU)) > __PVT__memory__DOT__limit)) {
                    vlSelf->__PVT__memory__DOT__accessFault = 1U;
                } else if ((0U != (3U & (vlSelf->__PVT__executeMemoryPayload[3U] 
                                         >> 0xfU)))) {
                    vlSelf->__PVT__memory__DOT__illegal = 1U;
                }
            } else if ((((vlSelf->__PVT__executeMemoryPayload[4U] 
                          << 0x11U) | (vlSelf->__PVT__executeMemoryPayload[3U] 
                                       >> 0xfU)) > __PVT__memory__DOT__limit)) {
                vlSelf->__PVT__memory__DOT__accessFault = 1U;
            } else {
                vlSelf->__PVT__memory__DOT__illegal = 1U;
            }
        }
        if ((0x40000U & vlSelf->__PVT__executeMemoryPayload[4U])) {
            if ((0U == (3U & (vlSelf->__PVT__executeMemoryPayload[4U] 
                              >> 0x10U)))) {
                if ((((vlSelf->__PVT__executeMemoryPayload[4U] 
                       << 0x11U) | (vlSelf->__PVT__executeMemoryPayload[3U] 
                                    >> 0xfU)) > __PVT__memory__DOT__limit)) {
                    vlSelf->__PVT__memory__DOT__accessFault = 1U;
                } else {
                    __PVT__memory__DOT__storeConfirm = 1U;
                    vlSelf->__PVT__memory__DOT__storeByteEnable = 1U;
                }
            } else if ((1U == (3U & (vlSelf->__PVT__executeMemoryPayload[4U] 
                                     >> 0x10U)))) {
                if ((((vlSelf->__PVT__executeMemoryPayload[4U] 
                       << 0x11U) | (vlSelf->__PVT__executeMemoryPayload[3U] 
                                    >> 0xfU)) > __PVT__memory__DOT__limit)) {
                    vlSelf->__PVT__memory__DOT__accessFault = 1U;
                } else if ((0x8000U & vlSelf->__PVT__executeMemoryPayload[3U])) {
                    vlSelf->__PVT__memory__DOT__illegal = 1U;
                } else {
                    __PVT__memory__DOT__storeConfirm = 1U;
                    vlSelf->__PVT__memory__DOT__storeByteEnable = 3U;
                }
            } else if ((3U == (3U & (vlSelf->__PVT__executeMemoryPayload[4U] 
                                     >> 0x10U)))) {
                if ((((vlSelf->__PVT__executeMemoryPayload[4U] 
                       << 0x11U) | (vlSelf->__PVT__executeMemoryPayload[3U] 
                                    >> 0xfU)) > __PVT__memory__DOT__limit)) {
                    vlSelf->__PVT__memory__DOT__accessFault = 1U;
                } else if ((0U != (3U & (vlSelf->__PVT__executeMemoryPayload[3U] 
                                         >> 0xfU)))) {
                    vlSelf->__PVT__memory__DOT__illegal = 1U;
                } else {
                    __PVT__memory__DOT__storeConfirm = 1U;
                    vlSelf->__PVT__memory__DOT__storeByteEnable = 0xfU;
                }
            } else if ((((vlSelf->__PVT__executeMemoryPayload[4U] 
                          << 0x11U) | (vlSelf->__PVT__executeMemoryPayload[3U] 
                                       >> 0xfU)) > __PVT__memory__DOT__limit)) {
                vlSelf->__PVT__memory__DOT__accessFault = 1U;
            } else {
                vlSelf->__PVT__memory__DOT__illegal = 1U;
            }
        }
    }
    vlSelf->__PVT__memory__DOT__storeReq = ((~ (IData)(vlSelf->__PVT__storeValid)) 
                                            & (IData)(__PVT__memory__DOT__storeConfirm));
    vlSelf->__PVT__stallControl = ((1U & ((vlSelf->__PVT__executeMemoryPayload[1U] 
                                           >> 7U) & 
                                          ((~ ((IData)(vlSelf->__PVT__memory__DOT__illegal) 
                                               | ((IData)(vlSelf->__PVT__memory__DOT__accessFault) 
                                                  | (IData)(vlSelf->__PVT__memoryWritebackControl)))) 
                                           & (vlSelf->__PVT__executeMemoryPayload[4U] 
                                              >> 0x13U))))
                                    ? (IData)(vlSymsp->TOP.reset)
                                    : ((IData)(vlSelf->__PVT__memory__DOT__storeReq) 
                                       | ((~ (IData)(vlSymsp->TOP__Top__mem_inst.__PVT__storeComplete)) 
                                          & (IData)(vlSelf->__PVT__storeValid))));
    vlSelf->__PVT__memoryWritebackControl = 0U;
    vlSelf->__PVT__executeMemoryControl = 0U;
    if ((1U & (~ (IData)(vlSymsp->TOP.reset)))) {
        if (((0U != (0xfU & (vlSelf->__PVT__memoryWritebackPayload[2U] 
                             >> 8U))) & (vlSelf->__PVT__memoryWritebackPayload[1U] 
                                         >> 7U))) {
            vlSelf->__PVT__memoryWritebackControl = 
                (1U | (IData)(vlSelf->__PVT__memoryWritebackControl));
            vlSelf->__PVT__executeMemoryControl = (1U 
                                                   | (IData)(vlSelf->__PVT__executeMemoryControl));
        }
        if (vlSelf->__PVT__stallControl) {
            vlSelf->__PVT__memoryWritebackControl = 
                (2U | (IData)(vlSelf->__PVT__memoryWritebackControl));
            vlSelf->__PVT__executeMemoryControl = (2U 
                                                   | (IData)(vlSelf->__PVT__executeMemoryControl));
        }
    }
    vlSelf->__PVT__mretSignal = 0U;
    if (((vlSelf->__PVT__decodeExecutePayload[0U] & 
          (0x20U == (0x3eU & vlSelf->__PVT__decodeExecutePayload[1U]))) 
         & (~ ((IData)(vlSelf->__PVT__executeMemoryControl) 
               >> 1U)))) {
        vlSelf->__PVT__mretSignal = 1U;
    }
}

VL_INLINE_OPT void VTop_Top___act_comb__TOP__Top__2(VTop_Top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VTop_Top___act_comb__TOP__Top__2\n"); );
    // Body
    vlSelf->__PVT__fetchDecodeControl = 0U;
    vlSelf->__PVT__decodeExecuteControl = 0U;
    if ((1U & (~ (IData)(vlSymsp->TOP.reset)))) {
        if (((0U != (0xfU & (vlSelf->__PVT__memoryWritebackPayload[2U] 
                             >> 8U))) & (vlSelf->__PVT__memoryWritebackPayload[1U] 
                                         >> 7U))) {
            vlSelf->__PVT__fetchDecodeControl = (1U 
                                                 | (IData)(vlSelf->__PVT__fetchDecodeControl));
            vlSelf->__PVT__decodeExecuteControl = (1U 
                                                   | (IData)(vlSelf->__PVT__decodeExecuteControl));
        } else if (((IData)(vlSelf->__PVT__mretSignal) 
                    | (IData)(vlSelf->__PVT__branchValid))) {
            vlSelf->__PVT__fetchDecodeControl = (1U 
                                                 | (IData)(vlSelf->__PVT__fetchDecodeControl));
            vlSelf->__PVT__decodeExecuteControl = (1U 
                                                   | (IData)(vlSelf->__PVT__decodeExecuteControl));
        }
        if (vlSelf->__PVT__stallControl) {
            vlSelf->__PVT__fetchDecodeControl = (2U 
                                                 | (IData)(vlSelf->__PVT__fetchDecodeControl));
            vlSelf->__PVT__decodeExecuteControl = (2U 
                                                   | (IData)(vlSelf->__PVT__decodeExecuteControl));
        } else {
            if (((((vlSelf->__PVT__decodeExecutePayload[0U] 
                    & (0x100000U == (0x380000U & vlSelf->__PVT__decodeExecutePayload[1U]))) 
                   & vlSelf->__PVT__fetchDecodePayload[0U]) 
                  & (~ (IData)(vlSelf->__PVT__decodeCombIllegal))) 
                 & (((0U != (0x1fU & (vlSelf->__PVT__decodeExecutePayload[3U] 
                                      >> 6U))) & (0U 
                                                  != (IData)(vlSelf->__PVT__readAddress1))) 
                    & ((0x1fU & (vlSelf->__PVT__decodeExecutePayload[3U] 
                                 >> 6U)) == (IData)(vlSelf->__PVT__readAddress1))))) {
                vlSelf->__PVT__fetchDecodeControl = 
                    (2U | (IData)(vlSelf->__PVT__fetchDecodeControl));
                vlSelf->__PVT__decodeExecuteControl 
                    = (1U | (IData)(vlSelf->__PVT__decodeExecuteControl));
            }
            if (((((vlSelf->__PVT__decodeExecutePayload[0U] 
                    & (0x100000U == (0x380000U & vlSelf->__PVT__decodeExecutePayload[1U]))) 
                   & vlSelf->__PVT__fetchDecodePayload[0U]) 
                  & (~ (IData)(vlSelf->__PVT__decodeCombIllegal))) 
                 & (((0U != (0x1fU & (vlSelf->__PVT__decodeExecutePayload[3U] 
                                      >> 6U))) & (0U 
                                                  != (IData)(vlSelf->__PVT__readAddress2))) 
                    & ((0x1fU & (vlSelf->__PVT__decodeExecutePayload[3U] 
                                 >> 6U)) == (IData)(vlSelf->__PVT__readAddress2))))) {
                vlSelf->__PVT__fetchDecodeControl = 
                    (2U | (IData)(vlSelf->__PVT__fetchDecodeControl));
                vlSelf->__PVT__decodeExecuteControl 
                    = (1U | (IData)(vlSelf->__PVT__decodeExecuteControl));
            }
        }
    }
}

VL_INLINE_OPT void VTop_Top___nba_sequent__TOP__Top__0(VTop_Top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VTop_Top___nba_sequent__TOP__Top__0\n"); );
    // Init
    CData/*0:0*/ __Vdlyvset__csrFile__DOT__csrs__v0;
    __Vdlyvset__csrFile__DOT__csrs__v0 = 0;
    IData/*31:0*/ __Vdlyvval__csrFile__DOT__csrs__v18;
    __Vdlyvval__csrFile__DOT__csrs__v18 = 0;
    CData/*0:0*/ __Vdlyvset__csrFile__DOT__csrs__v18;
    __Vdlyvset__csrFile__DOT__csrs__v18 = 0;
    IData/*31:0*/ __Vdlyvval__csrFile__DOT__csrs__v19;
    __Vdlyvval__csrFile__DOT__csrs__v19 = 0;
    CData/*0:0*/ __Vdlyvset__csrFile__DOT__csrs__v19;
    __Vdlyvset__csrFile__DOT__csrs__v19 = 0;
    IData/*31:0*/ __Vdlyvval__csrFile__DOT__csrs__v20;
    __Vdlyvval__csrFile__DOT__csrs__v20 = 0;
    CData/*4:0*/ __Vdlyvlsb__csrFile__DOT__csrs__v21;
    __Vdlyvlsb__csrFile__DOT__csrs__v21 = 0;
    CData/*0:0*/ __Vdlyvval__csrFile__DOT__csrs__v21;
    __Vdlyvval__csrFile__DOT__csrs__v21 = 0;
    CData/*4:0*/ __Vdlyvlsb__csrFile__DOT__csrs__v22;
    __Vdlyvlsb__csrFile__DOT__csrs__v22 = 0;
    CData/*4:0*/ __Vdlyvlsb__csrFile__DOT__csrs__v23;
    __Vdlyvlsb__csrFile__DOT__csrs__v23 = 0;
    CData/*0:0*/ __Vdlyvval__csrFile__DOT__csrs__v23;
    __Vdlyvval__csrFile__DOT__csrs__v23 = 0;
    CData/*0:0*/ __Vdlyvset__csrFile__DOT__csrs__v23;
    __Vdlyvset__csrFile__DOT__csrs__v23 = 0;
    CData/*4:0*/ __Vdlyvlsb__csrFile__DOT__csrs__v24;
    __Vdlyvlsb__csrFile__DOT__csrs__v24 = 0;
    CData/*3:0*/ __Vdlyvdim0__csrFile__DOT__csrs__v25;
    __Vdlyvdim0__csrFile__DOT__csrs__v25 = 0;
    IData/*31:0*/ __Vdlyvval__csrFile__DOT__csrs__v25;
    __Vdlyvval__csrFile__DOT__csrs__v25 = 0;
    CData/*0:0*/ __Vdlyvset__csrFile__DOT__csrs__v25;
    __Vdlyvset__csrFile__DOT__csrs__v25 = 0;
    IData/*31:0*/ __Vdlyvval__csrFile__DOT__csrs__v26;
    __Vdlyvval__csrFile__DOT__csrs__v26 = 0;
    CData/*0:0*/ __Vdlyvset__csrFile__DOT__csrs__v26;
    __Vdlyvset__csrFile__DOT__csrs__v26 = 0;
    IData/*31:0*/ __Vdlyvval__csrFile__DOT__csrs__v27;
    __Vdlyvval__csrFile__DOT__csrs__v27 = 0;
    CData/*0:0*/ __Vdlyvset__csrFile__DOT__csrs__v27;
    __Vdlyvset__csrFile__DOT__csrs__v27 = 0;
    CData/*4:0*/ __Vdlyvlsb__csrFile__DOT__csrs__v28;
    __Vdlyvlsb__csrFile__DOT__csrs__v28 = 0;
    CData/*0:0*/ __Vdlyvset__csrFile__DOT__csrs__v28;
    __Vdlyvset__csrFile__DOT__csrs__v28 = 0;
    CData/*4:0*/ __Vdlyvlsb__csrFile__DOT__csrs__v30;
    __Vdlyvlsb__csrFile__DOT__csrs__v30 = 0;
    CData/*4:0*/ __Vdlyvdim0__registerFile__DOT__registers__v0;
    __Vdlyvdim0__registerFile__DOT__registers__v0 = 0;
    IData/*31:0*/ __Vdlyvval__registerFile__DOT__registers__v0;
    __Vdlyvval__registerFile__DOT__registers__v0 = 0;
    CData/*0:0*/ __Vdlyvset__registerFile__DOT__registers__v0;
    __Vdlyvset__registerFile__DOT__registers__v0 = 0;
    std::string __Vtemp_1;
    // Body
    vlSelf->__Vdly__fetch__DOT__programCounter = vlSelf->__PVT__fetch__DOT__programCounter;
    __Vdlyvset__registerFile__DOT__registers__v0 = 0U;
    __Vdlyvset__csrFile__DOT__csrs__v0 = 0U;
    __Vdlyvset__csrFile__DOT__csrs__v18 = 0U;
    __Vdlyvset__csrFile__DOT__csrs__v19 = 0U;
    __Vdlyvset__csrFile__DOT__csrs__v23 = 0U;
    __Vdlyvset__csrFile__DOT__csrs__v25 = 0U;
    __Vdlyvset__csrFile__DOT__csrs__v26 = 0U;
    __Vdlyvset__csrFile__DOT__csrs__v27 = 0U;
    __Vdlyvset__csrFile__DOT__csrs__v28 = 0U;
    vlSelf->__Vdly__storeValid = vlSelf->__PVT__storeValid;
    if (vlSelf->__PVT__destinationEnable) {
        if ((0U != (0x1fU & (vlSelf->__PVT__memoryWritebackPayload[3U] 
                             >> 0xdU)))) {
            __Vdlyvval__registerFile__DOT__registers__v0 
                = vlSelf->__PVT__writeData;
            __Vdlyvset__registerFile__DOT__registers__v0 = 1U;
            __Vdlyvdim0__registerFile__DOT__registers__v0 
                = (0x1fU & (vlSelf->__PVT__memoryWritebackPayload[3U] 
                            >> 0xdU));
        }
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__Vdly__fetch__DOT__programCounter = 0U;
    } else if (vlSelf->__PVT__controlReset) {
        vlSelf->__Vdly__fetch__DOT__programCounter 
            = vlSelf->__PVT__csrFile__DOT__csrs[6U];
    } else if (vlSelf->__PVT__mretSignal) {
        vlSelf->__Vdly__fetch__DOT__programCounter 
            = vlSelf->__PVT__branchData;
    } else if (vlSelf->__PVT__branchValid) {
        vlSelf->__Vdly__fetch__DOT__programCounter 
            = vlSelf->__PVT__branchData;
    } else if ((1U & (~ ((IData)(vlSelf->__PVT__fetchDecodeControl) 
                         >> 1U)))) {
        if (vlSymsp->TOP__Top__mem_inst.__PVT__i_valid) {
            vlSelf->__Vdly__fetch__DOT__programCounter 
                = ((IData)(4U) + vlSelf->__PVT__fetch__DOT__programCounter);
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.reset)))) {
        if ((1U & (~ (IData)(vlSelf->__PVT__memoryWritebackControl)))) {
            if ((1U & (~ ((IData)(vlSelf->__PVT__memoryWritebackControl) 
                          >> 1U)))) {
                if ((1U & (~ (vlSelf->__PVT__executeMemoryPayload[2U] 
                              >> 0xeU)))) {
                    if ((0x2000U & vlSelf->__PVT__executeMemoryPayload[2U])) {
                        if ((1U & (~ (vlSelf->__PVT__executeMemoryPayload[2U] 
                                      >> 0xcU)))) {
                            if ((1U & ((vlSelf->__PVT__executeMemoryPayload[4U] 
                                        >> 0x13U) & 
                                       (~ (IData)(vlSymsp->TOP.reset))))) {
                                vlSelf->memory__DOT____Vstrobe0 = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    if (VL_LIKELY(vlSymsp->TOP.reset)) {
        __Vdlyvset__csrFile__DOT__csrs__v0 = 1U;
    } else {
        if (vlSelf->__PVT__controlReset) {
            __Vdlyvval__csrFile__DOT__csrs__v18 = vlSelf->__PVT__mtval;
            __Vdlyvset__csrFile__DOT__csrs__v18 = 1U;
            vlSelf->csrFile__DOT____Vstrobe0 = 1U;
            __Vdlyvval__csrFile__DOT__csrs__v19 = vlSelf->__PVT__mcause;
            __Vdlyvset__csrFile__DOT__csrs__v19 = 1U;
            __Vdlyvval__csrFile__DOT__csrs__v20 = (
                                                   (vlSelf->__PVT__memoryWritebackPayload[4U] 
                                                    << 0xeU) 
                                                   | (vlSelf->__PVT__memoryWritebackPayload[3U] 
                                                      >> 0x12U));
            __Vdlyvval__csrFile__DOT__csrs__v21 = (1U 
                                                   & (vlSelf->__PVT__csrFile__DOT__csrs
                                                      [0U] 
                                                      >> 3U));
            __Vdlyvlsb__csrFile__DOT__csrs__v21 = 7U;
            __Vdlyvlsb__csrFile__DOT__csrs__v22 = 3U;
        } else if (vlSelf->__PVT__mretSignal) {
            __Vdlyvval__csrFile__DOT__csrs__v23 = (1U 
                                                   & (vlSelf->__PVT__csrFile__DOT__csrs
                                                      [0U] 
                                                      >> 7U));
            __Vdlyvset__csrFile__DOT__csrs__v23 = 1U;
            __Vdlyvlsb__csrFile__DOT__csrs__v23 = 3U;
            __Vdlyvlsb__csrFile__DOT__csrs__v24 = 7U;
        } else {
            if (VL_UNLIKELY(vlSelf->__PVT__csrDestinationEnable)) {
                vlSelf->__PVT__csrFile__DOT__unnamedblk1__DOT__old 
                    = vlSelf->__PVT__csrFile__DOT__csrs
                    [(0xfU & (vlSelf->__PVT__memoryWritebackPayload[1U] 
                              >> 3U))];
                __Vdlyvval__csrFile__DOT__csrs__v25 
                    = ((vlSelf->__PVT__memoryWritebackPayload[3U] 
                        << 0x13U) | (vlSelf->__PVT__memoryWritebackPayload[2U] 
                                     >> 0xdU));
                __Vdlyvset__csrFile__DOT__csrs__v25 = 1U;
                __Vdlyvdim0__csrFile__DOT__csrs__v25 
                    = (0xfU & (vlSelf->__PVT__memoryWritebackPayload[1U] 
                               >> 3U));
                __Vtemp_1 = VTop___024unit::__Venumtab_enum_name0
                    [(0xfU & (vlSelf->__PVT__memoryWritebackPayload[1U] 
                              >> 3U))];
                VL_WRITEF("CSR Write: CSR[%@] <= %08x (old was %08x)\n",
                          -1,&(__Vtemp_1),32,((vlSelf->__PVT__memoryWritebackPayload[3U] 
                                               << 0x13U) 
                                              | (vlSelf->__PVT__memoryWritebackPayload[2U] 
                                                 >> 0xdU)),
                          32,vlSelf->__PVT__csrFile__DOT__unnamedblk1__DOT__old);
            }
            if ((1U & (~ ((IData)(vlSelf->__PVT__csrDestinationEnable) 
                          & (0x70U == (0x78U & vlSelf->__PVT__memoryWritebackPayload[1U])))))) {
                __Vdlyvval__csrFile__DOT__csrs__v26 
                    = ((IData)(1U) + vlSelf->__PVT__csrFile__DOT__csrs
                       [0xeU]);
                __Vdlyvset__csrFile__DOT__csrs__v26 = 1U;
            }
            if (((IData)(vlSelf->__PVT__dualValid) 
                 & (~ ((IData)(vlSelf->__PVT__csrDestinationEnable) 
                       & (0x78U == (0x78U & vlSelf->__PVT__memoryWritebackPayload[1U])))))) {
                __Vdlyvval__csrFile__DOT__csrs__v27 
                    = ((IData)(1U) + vlSelf->__PVT__csrFile__DOT__csrs
                       [0xfU]);
                __Vdlyvset__csrFile__DOT__csrs__v27 = 1U;
            }
        }
        __Vdlyvset__csrFile__DOT__csrs__v28 = 1U;
        __Vdlyvlsb__csrFile__DOT__csrs__v28 = 0xbU;
        __Vdlyvlsb__csrFile__DOT__csrs__v30 = 7U;
        VL_WRITEF("MEPC=%08x MCAUSE=%08x MTVAL=%08x MSTATUS=%08x MTVEC=%08x\n",
                  32,vlSelf->__PVT__csrFile__DOT__csrs
                  [1U],32,vlSelf->__PVT__csrFile__DOT__csrs
                  [2U],32,vlSelf->__PVT__csrFile__DOT__csrs
                  [3U],32,vlSelf->__PVT__csrFile__DOT__csrs
                  [0U],32,vlSelf->__PVT__csrFile__DOT__csrs
                  [6U]);
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__Vdly__storeValid = 0U;
        vlSelf->__PVT__memoryWritebackPayload[0U] = 0U;
        vlSelf->__PVT__memoryWritebackPayload[1U] = 0U;
        vlSelf->__PVT__memoryWritebackPayload[2U] = 0U;
        vlSelf->__PVT__memoryWritebackPayload[3U] = 0U;
        vlSelf->__PVT__memoryWritebackPayload[4U] = 0U;
    } else {
        if ((1U & (((((~ (IData)(vlSelf->__PVT__storeValid)) 
                      & (~ (IData)(vlSelf->__PVT__memory__DOT__illegal))) 
                     & (~ (IData)(vlSelf->__PVT__memory__DOT__accessFault))) 
                    & (~ (IData)(vlSelf->__PVT__memoryWritebackControl))) 
                   & (~ ((vlSelf->__PVT__memoryWritebackPayload[1U] 
                          >> 7U) & (0U != (0xfU & (
                                                   vlSelf->__PVT__memoryWritebackPayload[2U] 
                                                   >> 8U)))))))) {
            vlSelf->__Vdly__storeValid = vlSelf->__PVT__memory__DOT__storeReq;
        } else if (vlSymsp->TOP__Top__mem_inst.__PVT__storeComplete) {
            vlSelf->__Vdly__storeValid = 0U;
        }
        if ((1U & (IData)(vlSelf->__PVT__memoryWritebackControl))) {
            vlSelf->__PVT__memoryWritebackPayload[1U] 
                = (0xffffff7fU & vlSelf->__PVT__memoryWritebackPayload[1U]);
        } else if ((1U & (~ ((IData)(vlSelf->__PVT__memoryWritebackControl) 
                             >> 1U)))) {
            if ((0x4000U & vlSelf->__PVT__executeMemoryPayload[2U])) {
                vlSelf->__PVT__memoryWritebackPayload[2U] 
                    = (0xffffefffU & vlSelf->__PVT__memoryWritebackPayload[2U]);
            } else if ((0x2000U & vlSelf->__PVT__executeMemoryPayload[2U])) {
                if ((0x1000U & vlSelf->__PVT__executeMemoryPayload[2U])) {
                    vlSelf->__PVT__memoryWritebackPayload[2U] 
                        = ((0xfffU & vlSelf->__PVT__memoryWritebackPayload[2U]) 
                           | ((IData)((1ULL | ((QData)((IData)(
                                                               ((vlSelf->__PVT__executeMemoryPayload[5U] 
                                                                 << 7U) 
                                                                | (vlSelf->__PVT__executeMemoryPayload[4U] 
                                                                   >> 0x19U)))) 
                                               << 1U))) 
                              << 0xcU));
                    vlSelf->__PVT__memoryWritebackPayload[3U] 
                        = ((0xffffe000U & vlSelf->__PVT__memoryWritebackPayload[3U]) 
                           | (((IData)((1ULL | ((QData)((IData)(
                                                                ((vlSelf->__PVT__executeMemoryPayload[5U] 
                                                                  << 7U) 
                                                                 | (vlSelf->__PVT__executeMemoryPayload[4U] 
                                                                    >> 0x19U)))) 
                                                << 1U))) 
                               >> 0x14U) | ((IData)(
                                                    ((1ULL 
                                                      | ((QData)((IData)(
                                                                         ((vlSelf->__PVT__executeMemoryPayload[5U] 
                                                                           << 7U) 
                                                                          | (vlSelf->__PVT__executeMemoryPayload[4U] 
                                                                             >> 0x19U)))) 
                                                         << 1U)) 
                                                     >> 0x20U)) 
                                            << 0xcU)));
                } else {
                    if ((1U & ((vlSelf->__PVT__executeMemoryPayload[4U] 
                                >> 0x13U) & (~ (IData)(vlSymsp->TOP.reset))))) {
                        vlSelf->__PVT__memory__DOT__unnamedblk1__DOT__word 
                            = vlSymsp->TOP__Top__mem_inst.__PVT__loadData;
                        if ((0U == (3U & (vlSelf->__PVT__executeMemoryPayload[4U] 
                                          >> 0x10U)))) {
                            vlSelf->__PVT__memory__DOT__unnamedblk1__DOT__b 
                                = (0xffU & (vlSelf->__PVT__memory__DOT__unnamedblk1__DOT__word 
                                            >> (0x18U 
                                                & (vlSelf->__PVT__executeMemoryPayload[3U] 
                                                   >> 0xcU))));
                            vlSelf->__PVT__memoryWritebackPayload[2U] 
                                = ((0x1fffU & vlSelf->__PVT__memoryWritebackPayload[2U]) 
                                   | (((0x8000U & vlSelf->__PVT__executeMemoryPayload[4U])
                                        ? (((- (IData)(
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__memory__DOT__unnamedblk1__DOT__b) 
                                                           >> 7U)))) 
                                            << 8U) 
                                           | (IData)(vlSelf->__PVT__memory__DOT__unnamedblk1__DOT__b))
                                        : (IData)(vlSelf->__PVT__memory__DOT__unnamedblk1__DOT__b)) 
                                      << 0xdU));
                            vlSelf->__PVT__memoryWritebackPayload[3U] 
                                = ((0xffffe000U & vlSelf->__PVT__memoryWritebackPayload[3U]) 
                                   | (((0x8000U & vlSelf->__PVT__executeMemoryPayload[4U])
                                        ? (((- (IData)(
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__memory__DOT__unnamedblk1__DOT__b) 
                                                           >> 7U)))) 
                                            << 8U) 
                                           | (IData)(vlSelf->__PVT__memory__DOT__unnamedblk1__DOT__b))
                                        : (IData)(vlSelf->__PVT__memory__DOT__unnamedblk1__DOT__b)) 
                                      >> 0x13U));
                        } else if ((1U == (3U & (vlSelf->__PVT__executeMemoryPayload[4U] 
                                                 >> 0x10U)))) {
                            vlSelf->__PVT__memory__DOT__unnamedblk1__DOT__h 
                                = (0xffffU & (vlSelf->__PVT__memory__DOT__unnamedblk1__DOT__word 
                                              >> (0x10U 
                                                  & (vlSelf->__PVT__executeMemoryPayload[3U] 
                                                     >> 0xcU))));
                            vlSelf->__PVT__memoryWritebackPayload[2U] 
                                = ((0x1fffU & vlSelf->__PVT__memoryWritebackPayload[2U]) 
                                   | (((0x8000U & vlSelf->__PVT__executeMemoryPayload[4U])
                                        ? (((- (IData)(
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__memory__DOT__unnamedblk1__DOT__h) 
                                                           >> 0xfU)))) 
                                            << 0x10U) 
                                           | (IData)(vlSelf->__PVT__memory__DOT__unnamedblk1__DOT__h))
                                        : (IData)(vlSelf->__PVT__memory__DOT__unnamedblk1__DOT__h)) 
                                      << 0xdU));
                            vlSelf->__PVT__memoryWritebackPayload[3U] 
                                = ((0xffffe000U & vlSelf->__PVT__memoryWritebackPayload[3U]) 
                                   | (((0x8000U & vlSelf->__PVT__executeMemoryPayload[4U])
                                        ? (((- (IData)(
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__memory__DOT__unnamedblk1__DOT__h) 
                                                           >> 0xfU)))) 
                                            << 0x10U) 
                                           | (IData)(vlSelf->__PVT__memory__DOT__unnamedblk1__DOT__h))
                                        : (IData)(vlSelf->__PVT__memory__DOT__unnamedblk1__DOT__h)) 
                                      >> 0x13U));
                        } else if ((3U == (3U & (vlSelf->__PVT__executeMemoryPayload[4U] 
                                                 >> 0x10U)))) {
                            vlSelf->__PVT__memoryWritebackPayload[2U] 
                                = ((0x1fffU & vlSelf->__PVT__memoryWritebackPayload[2U]) 
                                   | (vlSelf->__PVT__memory__DOT__unnamedblk1__DOT__word 
                                      << 0xdU));
                            vlSelf->__PVT__memoryWritebackPayload[3U] 
                                = ((0xffffe000U & vlSelf->__PVT__memoryWritebackPayload[3U]) 
                                   | (vlSelf->__PVT__memory__DOT__unnamedblk1__DOT__word 
                                      >> 0x13U));
                        }
                    }
                    vlSelf->__PVT__memoryWritebackPayload[2U] 
                        = ((0xffffefffU & vlSelf->__PVT__memoryWritebackPayload[2U]) 
                           | (0x1000U & ((vlSelf->__PVT__executeMemoryPayload[4U] 
                                          >> 7U) & 
                                         ((~ (IData)(vlSymsp->TOP.reset)) 
                                          << 0xcU))));
                }
            } else if ((0x1000U & vlSelf->__PVT__executeMemoryPayload[2U])) {
                vlSelf->__PVT__memoryWritebackPayload[2U] 
                    = ((0xfffU & vlSelf->__PVT__memoryWritebackPayload[2U]) 
                       | ((IData)((1ULL | ((QData)((IData)(
                                                           ((vlSelf->__PVT__executeMemoryPayload[4U] 
                                                             << 0x11U) 
                                                            | (vlSelf->__PVT__executeMemoryPayload[3U] 
                                                               >> 0xfU)))) 
                                           << 1U))) 
                          << 0xcU));
                vlSelf->__PVT__memoryWritebackPayload[3U] 
                    = ((0xffffe000U & vlSelf->__PVT__memoryWritebackPayload[3U]) 
                       | (((IData)((1ULL | ((QData)((IData)(
                                                            ((vlSelf->__PVT__executeMemoryPayload[4U] 
                                                              << 0x11U) 
                                                             | (vlSelf->__PVT__executeMemoryPayload[3U] 
                                                                >> 0xfU)))) 
                                            << 1U))) 
                           >> 0x14U) | ((IData)(((1ULL 
                                                  | ((QData)((IData)(
                                                                     ((vlSelf->__PVT__executeMemoryPayload[4U] 
                                                                       << 0x11U) 
                                                                      | (vlSelf->__PVT__executeMemoryPayload[3U] 
                                                                         >> 0xfU)))) 
                                                     << 1U)) 
                                                 >> 0x20U)) 
                                        << 0xcU)));
            } else {
                vlSelf->__PVT__memoryWritebackPayload[2U] 
                    = (0xffffefffU & vlSelf->__PVT__memoryWritebackPayload[2U]);
            }
            vlSelf->__PVT__memoryWritebackPayload[1U] 
                = ((0xffffff7fU & vlSelf->__PVT__memoryWritebackPayload[1U]) 
                   | (0x80U & vlSelf->__PVT__executeMemoryPayload[1U]));
            vlSelf->__PVT__memoryWritebackPayload[3U] 
                = ((0x1fffU & vlSelf->__PVT__memoryWritebackPayload[3U]) 
                   | ((IData)((((QData)((IData)(((vlSelf->__PVT__executeMemoryPayload[6U] 
                                                  << 7U) 
                                                 | (vlSelf->__PVT__executeMemoryPayload[5U] 
                                                    >> 0x19U)))) 
                                << 5U) | (QData)((IData)(
                                                         (0x1fU 
                                                          & (vlSelf->__PVT__executeMemoryPayload[4U] 
                                                             >> 0x14U)))))) 
                      << 0xdU));
            vlSelf->__PVT__memoryWritebackPayload[4U] 
                = (0x3ffffU & (((IData)((((QData)((IData)(
                                                          ((vlSelf->__PVT__executeMemoryPayload[6U] 
                                                            << 7U) 
                                                           | (vlSelf->__PVT__executeMemoryPayload[5U] 
                                                              >> 0x19U)))) 
                                          << 5U) | (QData)((IData)(
                                                                   (0x1fU 
                                                                    & (vlSelf->__PVT__executeMemoryPayload[4U] 
                                                                       >> 0x14U)))))) 
                                >> 0x13U) | ((IData)(
                                                     ((((QData)((IData)(
                                                                        ((vlSelf->__PVT__executeMemoryPayload[6U] 
                                                                          << 7U) 
                                                                         | (vlSelf->__PVT__executeMemoryPayload[5U] 
                                                                            >> 0x19U)))) 
                                                        << 5U) 
                                                       | (QData)((IData)(
                                                                         (0x1fU 
                                                                          & (vlSelf->__PVT__executeMemoryPayload[4U] 
                                                                             >> 0x14U))))) 
                                                      >> 0x20U)) 
                                             << 0xdU)));
            vlSelf->__PVT__memoryWritebackPayload[0U] 
                = (IData)((0x7fffffffffULL & (((QData)((IData)(
                                                               vlSelf->__PVT__executeMemoryPayload[1U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->__PVT__executeMemoryPayload[0U])))));
            vlSelf->__PVT__memoryWritebackPayload[1U] 
                = ((0xffffff80U & vlSelf->__PVT__memoryWritebackPayload[1U]) 
                   | (IData)(((0x7fffffffffULL & (((QData)((IData)(
                                                                   vlSelf->__PVT__executeMemoryPayload[1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->__PVT__executeMemoryPayload[0U])))) 
                              >> 0x20U)));
            if ((0U != (3U & (vlSelf->__PVT__executeMemoryPayload[0U] 
                              >> 1U)))) {
                vlSelf->__PVT__memoryWritebackPayload[2U] 
                    = ((0x1fffU & vlSelf->__PVT__memoryWritebackPayload[2U]) 
                       | (0xffffe000U & ((vlSelf->__PVT__executeMemoryPayload[4U] 
                                          << 0x1eU) 
                                         | (0x3fffe000U 
                                            & (vlSelf->__PVT__executeMemoryPayload[3U] 
                                               >> 2U)))));
                vlSelf->__PVT__memoryWritebackPayload[3U] 
                    = ((0xffffe000U & vlSelf->__PVT__memoryWritebackPayload[3U]) 
                       | (0x1fffU & (vlSelf->__PVT__executeMemoryPayload[4U] 
                                     >> 2U)));
            }
            vlSelf->__PVT__memoryWritebackPayload[1U] 
                = ((0xffU & vlSelf->__PVT__memoryWritebackPayload[1U]) 
                   | ((IData)((0xfffffffffULL & (((QData)((IData)(
                                                                  vlSelf->__PVT__executeMemoryPayload[2U])) 
                                                  << 0x18U) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->__PVT__executeMemoryPayload[1U])) 
                                                    >> 8U)))) 
                      << 8U));
            vlSelf->__PVT__memoryWritebackPayload[2U] 
                = ((0xfffff000U & vlSelf->__PVT__memoryWritebackPayload[2U]) 
                   | (((IData)((0xfffffffffULL & (((QData)((IData)(
                                                                   vlSelf->__PVT__executeMemoryPayload[2U])) 
                                                   << 0x18U) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->__PVT__executeMemoryPayload[1U])) 
                                                     >> 8U)))) 
                       >> 0x18U) | ((IData)(((0xfffffffffULL 
                                              & (((QData)((IData)(
                                                                  vlSelf->__PVT__executeMemoryPayload[2U])) 
                                                  << 0x18U) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->__PVT__executeMemoryPayload[1U])) 
                                                    >> 8U))) 
                                             >> 0x20U)) 
                                    << 8U)));
            if (((IData)(vlSelf->__PVT__memory__DOT__accessFault) 
                 & (vlSelf->__PVT__executeMemoryPayload[1U] 
                    >> 7U))) {
                if ((0U == (0xfU & (vlSelf->__PVT__executeMemoryPayload[2U] 
                                    >> 8U)))) {
                    if ((0x40000U & vlSelf->__PVT__executeMemoryPayload[4U])) {
                        vlSelf->__PVT__memoryWritebackPayload[1U] 
                            = ((0xffU & vlSelf->__PVT__memoryWritebackPayload[1U]) 
                               | ((IData)((0x700000000ULL 
                                           | (QData)((IData)(
                                                             ((vlSelf->__PVT__executeMemoryPayload[4U] 
                                                               << 0x11U) 
                                                              | (vlSelf->__PVT__executeMemoryPayload[3U] 
                                                                 >> 0xfU)))))) 
                                  << 8U));
                        vlSelf->__PVT__memoryWritebackPayload[2U] 
                            = ((0xfffff000U & vlSelf->__PVT__memoryWritebackPayload[2U]) 
                               | (((IData)((0x700000000ULL 
                                            | (QData)((IData)(
                                                              ((vlSelf->__PVT__executeMemoryPayload[4U] 
                                                                << 0x11U) 
                                                               | (vlSelf->__PVT__executeMemoryPayload[3U] 
                                                                  >> 0xfU)))))) 
                                   >> 0x18U) | ((IData)(
                                                        ((0x700000000ULL 
                                                          | (QData)((IData)(
                                                                            ((vlSelf->__PVT__executeMemoryPayload[4U] 
                                                                              << 0x11U) 
                                                                             | (vlSelf->__PVT__executeMemoryPayload[3U] 
                                                                                >> 0xfU))))) 
                                                         >> 0x20U)) 
                                                << 8U)));
                    } else if ((0x80000U & vlSelf->__PVT__executeMemoryPayload[4U])) {
                        vlSelf->__PVT__memoryWritebackPayload[1U] 
                            = ((0xffU & vlSelf->__PVT__memoryWritebackPayload[1U]) 
                               | ((IData)((0x800000000ULL 
                                           | (QData)((IData)(
                                                             ((vlSelf->__PVT__executeMemoryPayload[4U] 
                                                               << 0x11U) 
                                                              | (vlSelf->__PVT__executeMemoryPayload[3U] 
                                                                 >> 0xfU)))))) 
                                  << 8U));
                        vlSelf->__PVT__memoryWritebackPayload[2U] 
                            = ((0xfffff000U & vlSelf->__PVT__memoryWritebackPayload[2U]) 
                               | (((IData)((0x800000000ULL 
                                            | (QData)((IData)(
                                                              ((vlSelf->__PVT__executeMemoryPayload[4U] 
                                                                << 0x11U) 
                                                               | (vlSelf->__PVT__executeMemoryPayload[3U] 
                                                                  >> 0xfU)))))) 
                                   >> 0x18U) | ((IData)(
                                                        ((0x800000000ULL 
                                                          | (QData)((IData)(
                                                                            ((vlSelf->__PVT__executeMemoryPayload[4U] 
                                                                              << 0x11U) 
                                                                             | (vlSelf->__PVT__executeMemoryPayload[3U] 
                                                                                >> 0xfU))))) 
                                                         >> 0x20U)) 
                                                << 8U)));
                    }
                }
            } else if (((IData)(vlSelf->__PVT__memory__DOT__illegal) 
                        & (vlSelf->__PVT__executeMemoryPayload[1U] 
                           >> 7U))) {
                if ((0U == (0xfU & (vlSelf->__PVT__executeMemoryPayload[2U] 
                                    >> 8U)))) {
                    if ((0x40000U & vlSelf->__PVT__executeMemoryPayload[4U])) {
                        vlSelf->__PVT__memoryWritebackPayload[1U] 
                            = ((0xffU & vlSelf->__PVT__memoryWritebackPayload[1U]) 
                               | ((IData)((0x200000000ULL 
                                           | (QData)((IData)(
                                                             ((vlSelf->__PVT__executeMemoryPayload[4U] 
                                                               << 0x11U) 
                                                              | (vlSelf->__PVT__executeMemoryPayload[3U] 
                                                                 >> 0xfU)))))) 
                                  << 8U));
                        vlSelf->__PVT__memoryWritebackPayload[2U] 
                            = ((0xfffff000U & vlSelf->__PVT__memoryWritebackPayload[2U]) 
                               | (((IData)((0x200000000ULL 
                                            | (QData)((IData)(
                                                              ((vlSelf->__PVT__executeMemoryPayload[4U] 
                                                                << 0x11U) 
                                                               | (vlSelf->__PVT__executeMemoryPayload[3U] 
                                                                  >> 0xfU)))))) 
                                   >> 0x18U) | ((IData)(
                                                        ((0x200000000ULL 
                                                          | (QData)((IData)(
                                                                            ((vlSelf->__PVT__executeMemoryPayload[4U] 
                                                                              << 0x11U) 
                                                                             | (vlSelf->__PVT__executeMemoryPayload[3U] 
                                                                                >> 0xfU))))) 
                                                         >> 0x20U)) 
                                                << 8U)));
                    } else if ((0x80000U & vlSelf->__PVT__executeMemoryPayload[4U])) {
                        vlSelf->__PVT__memoryWritebackPayload[1U] 
                            = ((0xffU & vlSelf->__PVT__memoryWritebackPayload[1U]) 
                               | ((IData)((0x300000000ULL 
                                           | (QData)((IData)(
                                                             ((vlSelf->__PVT__executeMemoryPayload[4U] 
                                                               << 0x11U) 
                                                              | (vlSelf->__PVT__executeMemoryPayload[3U] 
                                                                 >> 0xfU)))))) 
                                  << 8U));
                        vlSelf->__PVT__memoryWritebackPayload[2U] 
                            = ((0xfffff000U & vlSelf->__PVT__memoryWritebackPayload[2U]) 
                               | (((IData)((0x300000000ULL 
                                            | (QData)((IData)(
                                                              ((vlSelf->__PVT__executeMemoryPayload[4U] 
                                                                << 0x11U) 
                                                               | (vlSelf->__PVT__executeMemoryPayload[3U] 
                                                                  >> 0xfU)))))) 
                                   >> 0x18U) | ((IData)(
                                                        ((0x300000000ULL 
                                                          | (QData)((IData)(
                                                                            ((vlSelf->__PVT__executeMemoryPayload[4U] 
                                                                              << 0x11U) 
                                                                             | (vlSelf->__PVT__executeMemoryPayload[3U] 
                                                                                >> 0xfU))))) 
                                                         >> 0x20U)) 
                                                << 8U)));
                    }
                }
            }
        }
    }
    if (__Vdlyvset__registerFile__DOT__registers__v0) {
        vlSelf->__PVT__registerFile__DOT__registers[__Vdlyvdim0__registerFile__DOT__registers__v0] 
            = __Vdlyvval__registerFile__DOT__registers__v0;
    }
    if (__Vdlyvset__csrFile__DOT__csrs__v0) {
        vlSelf->__PVT__csrFile__DOT__csrs[0U] = 0U;
        vlSelf->__PVT__csrFile__DOT__csrs[1U] = 0U;
        vlSelf->__PVT__csrFile__DOT__csrs[2U] = 0U;
        vlSelf->__PVT__csrFile__DOT__csrs[3U] = 0U;
        vlSelf->__PVT__csrFile__DOT__csrs[4U] = 0U;
        vlSelf->__PVT__csrFile__DOT__csrs[5U] = 0U;
        vlSelf->__PVT__csrFile__DOT__csrs[6U] = 0U;
        vlSelf->__PVT__csrFile__DOT__csrs[7U] = 0U;
        vlSelf->__PVT__csrFile__DOT__csrs[8U] = 0U;
        vlSelf->__PVT__csrFile__DOT__csrs[9U] = 0U;
        vlSelf->__PVT__csrFile__DOT__csrs[0xaU] = 0U;
        vlSelf->__PVT__csrFile__DOT__csrs[0xbU] = 0U;
        vlSelf->__PVT__csrFile__DOT__csrs[0xcU] = 0U;
        vlSelf->__PVT__csrFile__DOT__csrs[0xdU] = 0U;
        vlSelf->__PVT__csrFile__DOT__csrs[0xeU] = 0U;
        vlSelf->__PVT__csrFile__DOT__csrs[0xfU] = 0U;
        vlSelf->__PVT__csrFile__DOT__csrs[8U] = 0x40000100U;
        vlSelf->__PVT__csrFile__DOT__csrs[0U] = 0x1800U;
    }
    if (__Vdlyvset__csrFile__DOT__csrs__v18) {
        vlSelf->__PVT__csrFile__DOT__csrs[3U] = __Vdlyvval__csrFile__DOT__csrs__v18;
    }
    if (__Vdlyvset__csrFile__DOT__csrs__v19) {
        vlSelf->__PVT__csrFile__DOT__csrs[2U] = __Vdlyvval__csrFile__DOT__csrs__v19;
        vlSelf->__PVT__csrFile__DOT__csrs[1U] = __Vdlyvval__csrFile__DOT__csrs__v20;
        vlSelf->__PVT__csrFile__DOT__csrs[0U] = (((~ 
                                                   ((IData)(1U) 
                                                    << (IData)(__Vdlyvlsb__csrFile__DOT__csrs__v21))) 
                                                  & vlSelf->__PVT__csrFile__DOT__csrs
                                                  [0U]) 
                                                 | (0xffffffffULL 
                                                    & ((IData)(__Vdlyvval__csrFile__DOT__csrs__v21) 
                                                       << (IData)(__Vdlyvlsb__csrFile__DOT__csrs__v21))));
        vlSelf->__PVT__csrFile__DOT__csrs[0U] = ((~ 
                                                  ((IData)(1U) 
                                                   << (IData)(__Vdlyvlsb__csrFile__DOT__csrs__v22))) 
                                                 & vlSelf->__PVT__csrFile__DOT__csrs
                                                 [0U]);
    }
    if (__Vdlyvset__csrFile__DOT__csrs__v23) {
        vlSelf->__PVT__csrFile__DOT__csrs[0U] = (((~ 
                                                   ((IData)(1U) 
                                                    << (IData)(__Vdlyvlsb__csrFile__DOT__csrs__v23))) 
                                                  & vlSelf->__PVT__csrFile__DOT__csrs
                                                  [0U]) 
                                                 | (0xffffffffULL 
                                                    & ((IData)(__Vdlyvval__csrFile__DOT__csrs__v23) 
                                                       << (IData)(__Vdlyvlsb__csrFile__DOT__csrs__v23))));
        vlSelf->__PVT__csrFile__DOT__csrs[0U] = (vlSelf->__PVT__csrFile__DOT__csrs
                                                 [0U] 
                                                 | (0xffffffffULL 
                                                    & ((IData)(1U) 
                                                       << (IData)(__Vdlyvlsb__csrFile__DOT__csrs__v24))));
    }
    if (__Vdlyvset__csrFile__DOT__csrs__v25) {
        vlSelf->__PVT__csrFile__DOT__csrs[__Vdlyvdim0__csrFile__DOT__csrs__v25] 
            = __Vdlyvval__csrFile__DOT__csrs__v25;
    }
    if (__Vdlyvset__csrFile__DOT__csrs__v26) {
        vlSelf->__PVT__csrFile__DOT__csrs[0xeU] = __Vdlyvval__csrFile__DOT__csrs__v26;
    }
    if (__Vdlyvset__csrFile__DOT__csrs__v27) {
        vlSelf->__PVT__csrFile__DOT__csrs[0xfU] = __Vdlyvval__csrFile__DOT__csrs__v27;
    }
    if (__Vdlyvset__csrFile__DOT__csrs__v28) {
        vlSelf->__PVT__csrFile__DOT__csrs[0U] = (vlSelf->__PVT__csrFile__DOT__csrs
                                                 [0U] 
                                                 | (0xffffffffULL 
                                                    & ((IData)(3U) 
                                                       << (IData)(__Vdlyvlsb__csrFile__DOT__csrs__v28))));
        vlSelf->__PVT__csrFile__DOT__csrs[0xdU] = 0U;
        vlSelf->__PVT__csrFile__DOT__csrs[0xdU] = (
                                                   vlSelf->__PVT__csrFile__DOT__csrs
                                                   [0xdU] 
                                                   | (0xffffffffULL 
                                                      & ((IData)(1U) 
                                                         << (IData)(__Vdlyvlsb__csrFile__DOT__csrs__v30))));
    }
    vlSelf->__PVT__debug_regs_flat[0U] = vlSelf->__PVT__registerFile__DOT__registers
        [0U];
    vlSelf->__PVT__debug_regs_flat[1U] = (IData)((((QData)((IData)(
                                                                   vlSelf->__PVT__registerFile__DOT__registers
                                                                   [2U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->__PVT__registerFile__DOT__registers
                                                                    [1U]))));
    vlSelf->__PVT__debug_regs_flat[2U] = (IData)(((
                                                   ((QData)((IData)(
                                                                    vlSelf->__PVT__registerFile__DOT__registers
                                                                    [2U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->__PVT__registerFile__DOT__registers
                                                                     [1U]))) 
                                                  >> 0x20U));
    vlSelf->__PVT__debug_regs_flat[3U] = vlSelf->__PVT__registerFile__DOT__registers
        [3U];
    vlSelf->__PVT__debug_regs_flat[4U] = (IData)((((QData)((IData)(
                                                                   vlSelf->__PVT__registerFile__DOT__registers
                                                                   [5U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->__PVT__registerFile__DOT__registers
                                                                    [4U]))));
    vlSelf->__PVT__debug_regs_flat[5U] = (IData)(((
                                                   ((QData)((IData)(
                                                                    vlSelf->__PVT__registerFile__DOT__registers
                                                                    [5U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->__PVT__registerFile__DOT__registers
                                                                     [4U]))) 
                                                  >> 0x20U));
    vlSelf->__PVT__debug_regs_flat[6U] = vlSelf->__PVT__registerFile__DOT__registers
        [6U];
    vlSelf->__PVT__debug_regs_flat[7U] = (IData)((((QData)((IData)(
                                                                   vlSelf->__PVT__registerFile__DOT__registers
                                                                   [8U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->__PVT__registerFile__DOT__registers
                                                                    [7U]))));
    vlSelf->__PVT__debug_regs_flat[8U] = (IData)(((
                                                   ((QData)((IData)(
                                                                    vlSelf->__PVT__registerFile__DOT__registers
                                                                    [8U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->__PVT__registerFile__DOT__registers
                                                                     [7U]))) 
                                                  >> 0x20U));
    vlSelf->__PVT__debug_regs_flat[9U] = vlSelf->__PVT__registerFile__DOT__registers
        [9U];
    vlSelf->__PVT__debug_regs_flat[0xaU] = (IData)(
                                                   (((QData)((IData)(
                                                                     vlSelf->__PVT__registerFile__DOT__registers
                                                                     [0xbU])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->__PVT__registerFile__DOT__registers
                                                                      [0xaU]))));
    vlSelf->__PVT__debug_regs_flat[0xbU] = (IData)(
                                                   ((((QData)((IData)(
                                                                      vlSelf->__PVT__registerFile__DOT__registers
                                                                      [0xbU])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelf->__PVT__registerFile__DOT__registers
                                                                       [0xaU]))) 
                                                    >> 0x20U));
    vlSelf->__PVT__debug_regs_flat[0xcU] = vlSelf->__PVT__registerFile__DOT__registers
        [0xcU];
    vlSelf->__PVT__debug_regs_flat[0xdU] = (IData)(
                                                   (((QData)((IData)(
                                                                     vlSelf->__PVT__registerFile__DOT__registers
                                                                     [0xeU])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->__PVT__registerFile__DOT__registers
                                                                      [0xdU]))));
    vlSelf->__PVT__debug_regs_flat[0xeU] = (IData)(
                                                   ((((QData)((IData)(
                                                                      vlSelf->__PVT__registerFile__DOT__registers
                                                                      [0xeU])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelf->__PVT__registerFile__DOT__registers
                                                                       [0xdU]))) 
                                                    >> 0x20U));
    vlSelf->__PVT__debug_regs_flat[0xfU] = vlSelf->__PVT__registerFile__DOT__registers
        [0xfU];
    vlSelf->__PVT__debug_regs_flat[0x10U] = (IData)(
                                                    (((QData)((IData)(
                                                                      vlSelf->__PVT__registerFile__DOT__registers
                                                                      [0x11U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelf->__PVT__registerFile__DOT__registers
                                                                       [0x10U]))));
    vlSelf->__PVT__debug_regs_flat[0x11U] = (IData)(
                                                    ((((QData)((IData)(
                                                                       vlSelf->__PVT__registerFile__DOT__registers
                                                                       [0x11U])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSelf->__PVT__registerFile__DOT__registers
                                                                        [0x10U]))) 
                                                     >> 0x20U));
    vlSelf->__PVT__debug_regs_flat[0x12U] = vlSelf->__PVT__registerFile__DOT__registers
        [0x12U];
    vlSelf->__PVT__debug_regs_flat[0x13U] = (IData)(
                                                    (((QData)((IData)(
                                                                      vlSelf->__PVT__registerFile__DOT__registers
                                                                      [0x14U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelf->__PVT__registerFile__DOT__registers
                                                                       [0x13U]))));
    vlSelf->__PVT__debug_regs_flat[0x14U] = (IData)(
                                                    ((((QData)((IData)(
                                                                       vlSelf->__PVT__registerFile__DOT__registers
                                                                       [0x14U])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSelf->__PVT__registerFile__DOT__registers
                                                                        [0x13U]))) 
                                                     >> 0x20U));
    vlSelf->__PVT__debug_regs_flat[0x15U] = vlSelf->__PVT__registerFile__DOT__registers
        [0x15U];
    vlSelf->__PVT__debug_regs_flat[0x16U] = (IData)(
                                                    (((QData)((IData)(
                                                                      vlSelf->__PVT__registerFile__DOT__registers
                                                                      [0x17U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelf->__PVT__registerFile__DOT__registers
                                                                       [0x16U]))));
    vlSelf->__PVT__debug_regs_flat[0x17U] = (IData)(
                                                    ((((QData)((IData)(
                                                                       vlSelf->__PVT__registerFile__DOT__registers
                                                                       [0x17U])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSelf->__PVT__registerFile__DOT__registers
                                                                        [0x16U]))) 
                                                     >> 0x20U));
    vlSelf->__PVT__debug_regs_flat[0x18U] = vlSelf->__PVT__registerFile__DOT__registers
        [0x18U];
    vlSelf->__PVT__debug_regs_flat[0x19U] = (IData)(
                                                    (((QData)((IData)(
                                                                      vlSelf->__PVT__registerFile__DOT__registers
                                                                      [0x1aU])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelf->__PVT__registerFile__DOT__registers
                                                                       [0x19U]))));
    vlSelf->__PVT__debug_regs_flat[0x1aU] = (IData)(
                                                    ((((QData)((IData)(
                                                                       vlSelf->__PVT__registerFile__DOT__registers
                                                                       [0x1aU])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSelf->__PVT__registerFile__DOT__registers
                                                                        [0x19U]))) 
                                                     >> 0x20U));
    vlSelf->__PVT__debug_regs_flat[0x1bU] = vlSelf->__PVT__registerFile__DOT__registers
        [0x1bU];
    vlSelf->__PVT__debug_regs_flat[0x1cU] = (IData)(
                                                    (((QData)((IData)(
                                                                      vlSelf->__PVT__registerFile__DOT__registers
                                                                      [0x1dU])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelf->__PVT__registerFile__DOT__registers
                                                                       [0x1cU]))));
    vlSelf->__PVT__debug_regs_flat[0x1dU] = (IData)(
                                                    ((((QData)((IData)(
                                                                       vlSelf->__PVT__registerFile__DOT__registers
                                                                       [0x1dU])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSelf->__PVT__registerFile__DOT__registers
                                                                        [0x1cU]))) 
                                                     >> 0x20U));
    vlSelf->__PVT__debug_regs_flat[0x1eU] = (IData)(
                                                    (((QData)((IData)(
                                                                      vlSelf->__PVT__registerFile__DOT__registers
                                                                      [0x1fU])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelf->__PVT__registerFile__DOT__registers
                                                                       [0x1eU]))));
    vlSelf->__PVT__debug_regs_flat[0x1fU] = (IData)(
                                                    ((((QData)((IData)(
                                                                       vlSelf->__PVT__registerFile__DOT__registers
                                                                       [0x1fU])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSelf->__PVT__registerFile__DOT__registers
                                                                        [0x1eU]))) 
                                                     >> 0x20U));
    vlSelf->__PVT__mtval = 0U;
    vlSelf->__PVT__mcause = 0U;
    if ((1U & (~ (IData)(vlSymsp->TOP.reset)))) {
        if (((0U != (0xfU & (vlSelf->__PVT__memoryWritebackPayload[2U] 
                             >> 8U))) & (vlSelf->__PVT__memoryWritebackPayload[1U] 
                                         >> 7U))) {
            vlSelf->__PVT__mtval = ((vlSelf->__PVT__memoryWritebackPayload[2U] 
                                     << 0x18U) | (vlSelf->__PVT__memoryWritebackPayload[1U] 
                                                  >> 8U));
            if ((0x800U & vlSelf->__PVT__memoryWritebackPayload[2U])) {
                if ((1U & (~ (vlSelf->__PVT__memoryWritebackPayload[2U] 
                              >> 0xaU)))) {
                    if ((1U & (~ (vlSelf->__PVT__memoryWritebackPayload[2U] 
                                  >> 9U)))) {
                        vlSelf->__PVT__mcause = ((0x100U 
                                                  & vlSelf->__PVT__memoryWritebackPayload[2U])
                                                  ? 1U
                                                  : 5U);
                    }
                }
            } else if ((0x400U & vlSelf->__PVT__memoryWritebackPayload[2U])) {
                vlSelf->__PVT__mcause = ((0x200U & 
                                          vlSelf->__PVT__memoryWritebackPayload[2U])
                                          ? ((0x100U 
                                              & vlSelf->__PVT__memoryWritebackPayload[2U])
                                              ? 7U : 3U)
                                          : ((0x100U 
                                              & vlSelf->__PVT__memoryWritebackPayload[2U])
                                              ? 0xbU
                                              : 0U));
            } else if ((0x200U & vlSelf->__PVT__memoryWritebackPayload[2U])) {
                vlSelf->__PVT__mcause = ((0x100U & 
                                          vlSelf->__PVT__memoryWritebackPayload[2U])
                                          ? 4U : 6U);
            } else if ((0x100U & vlSelf->__PVT__memoryWritebackPayload[2U])) {
                vlSelf->__PVT__mcause = 2U;
            }
        }
    }
    vlSelf->__PVT__dualValid = ((vlSelf->__PVT__memoryWritebackPayload[1U] 
                                 >> 7U) & (0U == (0xf00U 
                                                  & vlSelf->__PVT__memoryWritebackPayload[2U])));
    if ((0U != (3U & (vlSelf->__PVT__memoryWritebackPayload[0U] 
                      >> 1U)))) {
        vlSelf->__PVT__writeData = ((vlSelf->__PVT__memoryWritebackPayload[1U] 
                                     << 0x1dU) | (vlSelf->__PVT__memoryWritebackPayload[0U] 
                                                  >> 3U));
        vlSelf->__PVT__destinationEnable = vlSelf->__PVT__dualValid;
        vlSelf->__PVT__csrDestinationEnable = ((IData)(vlSelf->__PVT__dualValid) 
                                               & vlSelf->__PVT__memoryWritebackPayload[0U]);
    } else {
        vlSelf->__PVT__writeData = ((vlSelf->__PVT__memoryWritebackPayload[3U] 
                                     << 0x13U) | (vlSelf->__PVT__memoryWritebackPayload[2U] 
                                                  >> 0xdU));
        vlSelf->__PVT__destinationEnable = ((vlSelf->__PVT__memoryWritebackPayload[1U] 
                                             >> 7U) 
                                            & (IData)(
                                                      (0x1000U 
                                                       == 
                                                       (0x1f00U 
                                                        & vlSelf->__PVT__memoryWritebackPayload[2U]))));
        vlSelf->__PVT__csrDestinationEnable = 0U;
    }
}

extern const VlWide<8>/*255:0*/ VTop__ConstPool__CONST_h5b9d2cef_0;

VL_INLINE_OPT void VTop_Top___nba_sequent__TOP__Top__1(VTop_Top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VTop_Top___nba_sequent__TOP__Top__1\n"); );
    // Body
    vlSelf->__PVT__storeValid = vlSelf->__Vdly__storeValid;
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__executeMemoryPayload[0U] = 0U;
        vlSelf->__PVT__executeMemoryPayload[1U] = 0U;
        vlSelf->__PVT__executeMemoryPayload[2U] = 0U;
        vlSelf->__PVT__executeMemoryPayload[3U] = 0U;
        vlSelf->__PVT__executeMemoryPayload[4U] = 0U;
        vlSelf->__PVT__executeMemoryPayload[5U] = 0U;
        vlSelf->__PVT__executeMemoryPayload[6U] = 0U;
        vlSelf->__PVT__decodeExecutePayload[0U] = VTop__ConstPool__CONST_h5b9d2cef_0[0U];
        vlSelf->__PVT__decodeExecutePayload[1U] = VTop__ConstPool__CONST_h5b9d2cef_0[1U];
        vlSelf->__PVT__decodeExecutePayload[2U] = VTop__ConstPool__CONST_h5b9d2cef_0[2U];
        vlSelf->__PVT__decodeExecutePayload[3U] = VTop__ConstPool__CONST_h5b9d2cef_0[3U];
        vlSelf->__PVT__decodeExecutePayload[4U] = VTop__ConstPool__CONST_h5b9d2cef_0[4U];
        vlSelf->__PVT__decodeExecutePayload[5U] = VTop__ConstPool__CONST_h5b9d2cef_0[5U];
        vlSelf->__PVT__decodeExecutePayload[6U] = VTop__ConstPool__CONST_h5b9d2cef_0[6U];
        vlSelf->__PVT__decodeExecutePayload[7U] = VTop__ConstPool__CONST_h5b9d2cef_0[7U];
    } else {
        if ((1U & (IData)(vlSelf->__PVT__executeMemoryControl))) {
            vlSelf->__PVT__executeMemoryPayload[1U] 
                = (0xffffff7fU & vlSelf->__PVT__executeMemoryPayload[1U]);
        } else if ((1U & (~ ((IData)(vlSelf->__PVT__executeMemoryControl) 
                             >> 1U)))) {
            vlSelf->__PVT__executeMemoryPayload[4U] 
                = ((0xfffffU & vlSelf->__PVT__executeMemoryPayload[4U]) 
                   | (((IData)((((QData)((IData)(vlSelf->__PVT__decodeExecutePayload[7U])) 
                                 << 0x2bU) | (((QData)((IData)(
                                                               vlSelf->__PVT__decodeExecutePayload[6U])) 
                                               << 0xbU) 
                                              | ((QData)((IData)(
                                                                 vlSelf->__PVT__decodeExecutePayload[5U])) 
                                                 >> 0x15U)))) 
                       << 0x19U) | (((0x20U & vlSelf->__PVT__decodeExecutePayload[1U])
                                      ? 0U : (0x1fU 
                                              & (vlSelf->__PVT__decodeExecutePayload[3U] 
                                                 >> 6U))) 
                                    << 0x14U)));
            vlSelf->__PVT__executeMemoryPayload[5U] 
                = (((0xfffffU & ((IData)((((QData)((IData)(
                                                           vlSelf->__PVT__decodeExecutePayload[7U])) 
                                           << 0x2bU) 
                                          | (((QData)((IData)(
                                                              vlSelf->__PVT__decodeExecutePayload[6U])) 
                                              << 0xbU) 
                                             | ((QData)((IData)(
                                                                vlSelf->__PVT__decodeExecutePayload[5U])) 
                                                >> 0x15U)))) 
                                 >> 7U)) | (((0x20U 
                                              & vlSelf->__PVT__decodeExecutePayload[1U])
                                              ? 0U : 
                                             (0x1fU 
                                              & (vlSelf->__PVT__decodeExecutePayload[3U] 
                                                 >> 6U))) 
                                            >> 0xcU)) 
                   | ((0x1f00000U & ((IData)((((QData)((IData)(
                                                               vlSelf->__PVT__decodeExecutePayload[7U])) 
                                               << 0x2bU) 
                                              | (((QData)((IData)(
                                                                  vlSelf->__PVT__decodeExecutePayload[6U])) 
                                                  << 0xbU) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->__PVT__decodeExecutePayload[5U])) 
                                                    >> 0x15U)))) 
                                     >> 7U)) | ((IData)(
                                                        ((((QData)((IData)(
                                                                           vlSelf->__PVT__decodeExecutePayload[7U])) 
                                                           << 0x2bU) 
                                                          | (((QData)((IData)(
                                                                              vlSelf->__PVT__decodeExecutePayload[6U])) 
                                                              << 0xbU) 
                                                             | ((QData)((IData)(
                                                                                vlSelf->__PVT__decodeExecutePayload[5U])) 
                                                                >> 0x15U))) 
                                                         >> 0x20U)) 
                                                << 0x19U)));
            vlSelf->__PVT__executeMemoryPayload[6U] 
                = (0x1ffffffU & ((0xfffffU & ((IData)(
                                                      ((((QData)((IData)(
                                                                         vlSelf->__PVT__decodeExecutePayload[7U])) 
                                                         << 0x2bU) 
                                                        | (((QData)((IData)(
                                                                            vlSelf->__PVT__decodeExecutePayload[6U])) 
                                                            << 0xbU) 
                                                           | ((QData)((IData)(
                                                                              vlSelf->__PVT__decodeExecutePayload[5U])) 
                                                              >> 0x15U))) 
                                                       >> 0x20U)) 
                                              >> 7U)) 
                                 | (0x1f00000U & ((IData)(
                                                          ((((QData)((IData)(
                                                                             vlSelf->__PVT__decodeExecutePayload[7U])) 
                                                             << 0x2bU) 
                                                            | (((QData)((IData)(
                                                                                vlSelf->__PVT__decodeExecutePayload[6U])) 
                                                                << 0xbU) 
                                                               | ((QData)((IData)(
                                                                                vlSelf->__PVT__decodeExecutePayload[5U])) 
                                                                  >> 0x15U))) 
                                                           >> 0x20U)) 
                                                  >> 7U))));
            vlSelf->__PVT__executeMemoryPayload[2U] 
                = ((0x7fffU & vlSelf->__PVT__executeMemoryPayload[2U]) 
                   | ((IData)((((QData)((IData)(vlSelf->__PVT__execute__DOT__result)) 
                                << 0x20U) | (QData)((IData)(
                                                            ((IData)(vlSelf->forwardEnable2)
                                                              ? vlSelf->forwardData2
                                                              : 
                                                             ((vlSelf->__PVT__decodeExecutePayload[4U] 
                                                               << 0xbU) 
                                                              | (vlSelf->__PVT__decodeExecutePayload[3U] 
                                                                 >> 0x15U))))))) 
                      << 0xfU));
            vlSelf->__PVT__executeMemoryPayload[3U] 
                = (((IData)((((QData)((IData)(vlSelf->__PVT__execute__DOT__result)) 
                              << 0x20U) | (QData)((IData)(
                                                          ((IData)(vlSelf->forwardEnable2)
                                                            ? vlSelf->forwardData2
                                                            : 
                                                           ((vlSelf->__PVT__decodeExecutePayload[4U] 
                                                             << 0xbU) 
                                                            | (vlSelf->__PVT__decodeExecutePayload[3U] 
                                                               >> 0x15U))))))) 
                    >> 0x11U) | ((IData)(((((QData)((IData)(vlSelf->__PVT__execute__DOT__result)) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             ((IData)(vlSelf->forwardEnable2)
                                                               ? vlSelf->forwardData2
                                                               : 
                                                              ((vlSelf->__PVT__decodeExecutePayload[4U] 
                                                                << 0xbU) 
                                                               | (vlSelf->__PVT__decodeExecutePayload[3U] 
                                                                  >> 0x15U)))))) 
                                          >> 0x20U)) 
                                 << 0xfU));
            vlSelf->__PVT__executeMemoryPayload[4U] 
                = ((0xfff00000U & vlSelf->__PVT__executeMemoryPayload[4U]) 
                   | (((IData)(((((QData)((IData)(vlSelf->__PVT__execute__DOT__result)) 
                                  << 0x20U) | (QData)((IData)(
                                                              ((IData)(vlSelf->forwardEnable2)
                                                                ? vlSelf->forwardData2
                                                                : 
                                                               ((vlSelf->__PVT__decodeExecutePayload[4U] 
                                                                 << 0xbU) 
                                                                | (vlSelf->__PVT__decodeExecutePayload[3U] 
                                                                   >> 0x15U)))))) 
                                >> 0x20U)) >> 0x11U) 
                      | (0xf8000U & ((vlSelf->__PVT__decodeExecutePayload[2U] 
                                      << 0x10U) | (0x8000U 
                                                   & (vlSelf->__PVT__decodeExecutePayload[1U] 
                                                      >> 0x10U))))));
            vlSelf->__PVT__executeMemoryPayload[1U] 
                = ((0x7fU & vlSelf->__PVT__executeMemoryPayload[1U]) 
                   | ((IData)((((QData)((IData)((7U 
                                                 & (vlSelf->__PVT__decodeExecutePayload[1U] 
                                                    >> 0x13U)))) 
                                << 0x25U) | (0x1fffffffffULL 
                                             & (((QData)((IData)(
                                                                 vlSelf->__PVT__decodeExecutePayload[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->__PVT__decodeExecutePayload[0U])))))) 
                      << 7U));
            vlSelf->__PVT__executeMemoryPayload[2U] 
                = ((0xffff8000U & vlSelf->__PVT__executeMemoryPayload[2U]) 
                   | (((IData)((((QData)((IData)((7U 
                                                  & (vlSelf->__PVT__decodeExecutePayload[1U] 
                                                     >> 0x13U)))) 
                                 << 0x25U) | (0x1fffffffffULL 
                                              & (((QData)((IData)(
                                                                  vlSelf->__PVT__decodeExecutePayload[1U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->__PVT__decodeExecutePayload[0U])))))) 
                       >> 0x19U) | ((IData)(((((QData)((IData)(
                                                               (7U 
                                                                & (vlSelf->__PVT__decodeExecutePayload[1U] 
                                                                   >> 0x13U)))) 
                                               << 0x25U) 
                                              | (0x1fffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSelf->__PVT__decodeExecutePayload[1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->__PVT__decodeExecutePayload[0U]))))) 
                                             >> 0x20U)) 
                                    << 7U)));
            if (((IData)(vlSelf->__PVT__execute__DOT__illegal) 
                 & vlSelf->__PVT__decodeExecutePayload[0U])) {
                if ((0U == (0xfU & (vlSelf->__PVT__decodeExecutePayload[1U] 
                                    >> 1U)))) {
                    vlSelf->__PVT__executeMemoryPayload[1U] 
                        = ((0xffU & vlSelf->__PVT__executeMemoryPayload[1U]) 
                           | ((IData)((0x400000000ULL 
                                       | (QData)((IData)(vlSelf->__PVT__branchData)))) 
                              << 8U));
                    vlSelf->__PVT__executeMemoryPayload[2U] 
                        = ((0xffff8000U & vlSelf->__PVT__executeMemoryPayload[2U]) 
                           | (((IData)((0x400000000ULL 
                                        | (QData)((IData)(vlSelf->__PVT__branchData)))) 
                               >> 0x18U) | ((IData)(
                                                    ((0x400000000ULL 
                                                      | (QData)((IData)(vlSelf->__PVT__branchData))) 
                                                     >> 0x20U)) 
                                            << 8U)));
                }
            }
            vlSelf->__PVT__executeMemoryPayload[0U] 
                = ((1U & vlSelf->__PVT__executeMemoryPayload[0U]) 
                   | ((IData)((((QData)((IData)((0xfU 
                                                 & (vlSelf->__PVT__decodeExecutePayload[1U] 
                                                    >> 0xdU)))) 
                                << 0x22U) | (((QData)((IData)(vlSelf->__PVT__execute__DOT__forwardCorrectedCSRReadData)) 
                                              << 2U) 
                                             | (QData)((IData)(
                                                               (3U 
                                                                & (vlSelf->__PVT__decodeExecutePayload[1U] 
                                                                   >> 0x11U))))))) 
                      << 1U));
            vlSelf->__PVT__executeMemoryPayload[1U] 
                = ((0xffffff80U & vlSelf->__PVT__executeMemoryPayload[1U]) 
                   | (((IData)((((QData)((IData)((0xfU 
                                                  & (vlSelf->__PVT__decodeExecutePayload[1U] 
                                                     >> 0xdU)))) 
                                 << 0x22U) | (((QData)((IData)(vlSelf->__PVT__execute__DOT__forwardCorrectedCSRReadData)) 
                                               << 2U) 
                                              | (QData)((IData)(
                                                                (3U 
                                                                 & (vlSelf->__PVT__decodeExecutePayload[1U] 
                                                                    >> 0x11U))))))) 
                       >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                               (0xfU 
                                                                & (vlSelf->__PVT__decodeExecutePayload[1U] 
                                                                   >> 0xdU)))) 
                                               << 0x22U) 
                                              | (((QData)((IData)(vlSelf->__PVT__execute__DOT__forwardCorrectedCSRReadData)) 
                                                  << 2U) 
                                                 | (QData)((IData)(
                                                                   (3U 
                                                                    & (vlSelf->__PVT__decodeExecutePayload[1U] 
                                                                       >> 0x11U)))))) 
                                             >> 0x20U)) 
                                    << 1U)));
            vlSelf->__PVT__executeMemoryPayload[0U] 
                = ((0xfffffffeU & vlSelf->__PVT__executeMemoryPayload[0U]) 
                   | (1U & (vlSelf->__PVT__decodeExecutePayload[1U] 
                            >> 6U)));
        }
        if ((1U & (IData)(vlSelf->__PVT__decodeExecuteControl))) {
            vlSelf->__PVT__decodeExecutePayload[0U] 
                = (0xfffffffeU & vlSelf->__PVT__decodeExecutePayload[0U]);
        } else if ((1U & (~ ((IData)(vlSelf->__PVT__decodeExecuteControl) 
                             >> 1U)))) {
            if ((IData)((0x13U == (0x1fU & vlSelf->__PVT__fetchDecodePayload[0U])))) {
                vlSelf->__PVT__decodeExecutePayload[0U] 
                    = vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[0U];
                vlSelf->__PVT__decodeExecutePayload[1U] 
                    = vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U];
                vlSelf->__PVT__decodeExecutePayload[2U] 
                    = vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[2U];
                vlSelf->__PVT__decodeExecutePayload[3U] 
                    = vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[3U];
                vlSelf->__PVT__decodeExecutePayload[4U] 
                    = vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[4U];
                vlSelf->__PVT__decodeExecutePayload[5U] 
                    = vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[5U];
                vlSelf->__PVT__decodeExecutePayload[6U] 
                    = vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[6U];
                vlSelf->__PVT__decodeExecutePayload[7U] 
                    = vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[7U];
                vlSelf->__PVT__decodeExecutePayload[3U] 
                    = (0xfffff83fU & vlSelf->__PVT__decodeExecutePayload[3U]);
                vlSelf->__PVT__decodeExecutePayload[1U] 
                    = (0xffc7ffffU & vlSelf->__PVT__decodeExecutePayload[1U]);
                vlSelf->__PVT__decodeExecutePayload[2U] 
                    = (0xfffffff3U & vlSelf->__PVT__decodeExecutePayload[2U]);
                vlSelf->__PVT__decodeExecutePayload[1U] 
                    = (0xfff9ffffU & vlSelf->__PVT__decodeExecutePayload[1U]);
                vlSelf->__PVT__decodeExecutePayload[0U] 
                    = (IData)((0x1200000000ULL | (((QData)((IData)(
                                                                   ((vlSelf->__PVT__fetchDecodePayload[2U] 
                                                                     << 0x1bU) 
                                                                    | (vlSelf->__PVT__fetchDecodePayload[1U] 
                                                                       >> 5U)))) 
                                                   << 1U) 
                                                  | (QData)((IData)(
                                                                    (1U 
                                                                     & vlSelf->__PVT__fetchDecodePayload[0U]))))));
                vlSelf->__PVT__decodeExecutePayload[1U] 
                    = ((0xffffffe0U & vlSelf->__PVT__decodeExecutePayload[1U]) 
                       | (IData)(((0x1200000000ULL 
                                   | (((QData)((IData)(
                                                       ((vlSelf->__PVT__fetchDecodePayload[2U] 
                                                         << 0x1bU) 
                                                        | (vlSelf->__PVT__fetchDecodePayload[1U] 
                                                           >> 5U)))) 
                                       << 1U) | (QData)((IData)(
                                                                (1U 
                                                                 & vlSelf->__PVT__fetchDecodePayload[0U]))))) 
                                  >> 0x20U)));
            } else if (((0U != (0xfU & (vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U] 
                                        >> 1U))) & 
                        vlSelf->__PVT__fetchDecodePayload[0U])) {
                vlSelf->__PVT__decodeExecutePayload[0U] 
                    = vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[0U];
                vlSelf->__PVT__decodeExecutePayload[1U] 
                    = vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U];
                vlSelf->__PVT__decodeExecutePayload[2U] 
                    = vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[2U];
                vlSelf->__PVT__decodeExecutePayload[3U] 
                    = vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[3U];
                vlSelf->__PVT__decodeExecutePayload[4U] 
                    = vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[4U];
                vlSelf->__PVT__decodeExecutePayload[5U] 
                    = vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[5U];
                vlSelf->__PVT__decodeExecutePayload[6U] 
                    = vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[6U];
                vlSelf->__PVT__decodeExecutePayload[7U] 
                    = vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[7U];
                vlSelf->__PVT__decodeExecutePayload[3U] 
                    = (0xfffff83fU & vlSelf->__PVT__decodeExecutePayload[3U]);
                vlSelf->__PVT__decodeExecutePayload[1U] 
                    = (0xffc7ffffU & vlSelf->__PVT__decodeExecutePayload[1U]);
                vlSelf->__PVT__decodeExecutePayload[2U] 
                    = (0xfffffff3U & vlSelf->__PVT__decodeExecutePayload[2U]);
                vlSelf->__PVT__decodeExecutePayload[1U] 
                    = (0xfff9ffffU & vlSelf->__PVT__decodeExecutePayload[1U]);
                vlSelf->__PVT__decodeExecutePayload[0U] 
                    = ((0xfffffffeU & vlSelf->__PVT__decodeExecutePayload[0U]) 
                       | (1U & vlSelf->__PVT__fetchDecodePayload[0U]));
                if ((1U == (0xfU & (vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U] 
                                    >> 1U)))) {
                    vlSelf->__PVT__decodeExecutePayload[0U] 
                        = ((1U & vlSelf->__PVT__decodeExecutePayload[0U]) 
                           | (0xfffffffeU & ((vlSelf->__PVT__fetchDecodePayload[3U] 
                                              << 0x1cU) 
                                             | (0xffffffeU 
                                                & (vlSelf->__PVT__fetchDecodePayload[2U] 
                                                   >> 4U)))));
                    vlSelf->__PVT__decodeExecutePayload[1U] 
                        = ((0xfffffffeU & vlSelf->__PVT__decodeExecutePayload[1U]) 
                           | (1U & (vlSelf->__PVT__fetchDecodePayload[3U] 
                                    >> 4U)));
                } else if ((5U == (0xfU & (vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U] 
                                           >> 1U)))) {
                    vlSelf->__PVT__decodeExecutePayload[0U] 
                        = (1U & vlSelf->__PVT__decodeExecutePayload[0U]);
                    vlSelf->__PVT__decodeExecutePayload[1U] 
                        = (0xfffffffeU & vlSelf->__PVT__decodeExecutePayload[1U]);
                } else if ((6U == (0xfU & (vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U] 
                                           >> 1U)))) {
                    vlSelf->__PVT__decodeExecutePayload[0U] 
                        = ((1U & vlSelf->__PVT__decodeExecutePayload[0U]) 
                           | (0xfffffffeU & ((vlSelf->__PVT__fetchDecodePayload[2U] 
                                              << 0x1cU) 
                                             | (0xffffffeU 
                                                & (vlSelf->__PVT__fetchDecodePayload[1U] 
                                                   >> 4U)))));
                    vlSelf->__PVT__decodeExecutePayload[1U] 
                        = ((0xfffffffeU & vlSelf->__PVT__decodeExecutePayload[1U]) 
                           | (1U & (vlSelf->__PVT__fetchDecodePayload[2U] 
                                    >> 4U)));
                }
            } else if ((1U & vlSelf->__PVT__fetchDecodePayload[0U])) {
                vlSelf->__PVT__decodeExecutePayload[0U] 
                    = vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[0U];
                vlSelf->__PVT__decodeExecutePayload[1U] 
                    = vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U];
                vlSelf->__PVT__decodeExecutePayload[2U] 
                    = vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[2U];
                vlSelf->__PVT__decodeExecutePayload[3U] 
                    = vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[3U];
                vlSelf->__PVT__decodeExecutePayload[4U] 
                    = vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[4U];
                vlSelf->__PVT__decodeExecutePayload[5U] 
                    = vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[5U];
                vlSelf->__PVT__decodeExecutePayload[6U] 
                    = vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[6U];
                vlSelf->__PVT__decodeExecutePayload[7U] 
                    = vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[7U];
                vlSelf->__PVT__decodeExecutePayload[0U] 
                    = ((0xfffffffeU & vlSelf->__PVT__decodeExecutePayload[0U]) 
                       | (1U & vlSelf->__PVT__fetchDecodePayload[0U]));
            } else {
                vlSelf->__PVT__decodeExecutePayload[0U] 
                    = vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[0U];
                vlSelf->__PVT__decodeExecutePayload[1U] 
                    = vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U];
                vlSelf->__PVT__decodeExecutePayload[2U] 
                    = vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[2U];
                vlSelf->__PVT__decodeExecutePayload[3U] 
                    = vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[3U];
                vlSelf->__PVT__decodeExecutePayload[4U] 
                    = vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[4U];
                vlSelf->__PVT__decodeExecutePayload[5U] 
                    = vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[5U];
                vlSelf->__PVT__decodeExecutePayload[6U] 
                    = vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[6U];
                vlSelf->__PVT__decodeExecutePayload[7U] 
                    = vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[7U];
                vlSelf->__PVT__decodeExecutePayload[0U] 
                    = (0xfffffffeU & vlSelf->__PVT__decodeExecutePayload[0U]);
            }
        }
    }
    if ((1U & ((~ (IData)(vlSymsp->TOP.reset)) & (~ (IData)(vlSelf->__PVT__controlReset))))) {
        if ((1U & (IData)(vlSelf->__PVT__fetchDecodeControl))) {
            vlSelf->__PVT__fetchDecodePayload[0U] = 
                (0xfffffffeU & vlSelf->__PVT__fetchDecodePayload[0U]);
        } else if (((~ ((IData)(vlSelf->__PVT__fetchDecodeControl) 
                        >> 1U)) & (IData)(vlSymsp->TOP__Top__mem_inst.__PVT__i_valid))) {
            vlSelf->__PVT__fetchDecodePayload[0U] = 
                (1U | vlSelf->__PVT__fetchDecodePayload[0U]);
            vlSelf->__PVT__fetchDecodePayload[0U] = 
                ((1U & vlSelf->__PVT__fetchDecodePayload[0U]) 
                 | ((((IData)(4U) + vlSelf->__PVT__fetch__DOT__programCounter) 
                     << 5U) | (((0x1ffffcU < vlSelf->__PVT__fetch__DOT__programCounter)
                                 ? 9U : 0U) << 1U)));
            vlSelf->__PVT__fetchDecodePayload[1U] = 
                (((1U & (((IData)(4U) + vlSelf->__PVT__fetch__DOT__programCounter) 
                         >> 0x1bU)) | (((0x1ffffcU 
                                         < vlSelf->__PVT__fetch__DOT__programCounter)
                                         ? 9U : 0U) 
                                       >> 0x1fU)) | 
                 ((0x1eU & (((IData)(4U) + vlSelf->__PVT__fetch__DOT__programCounter) 
                            >> 0x1bU)) | ((IData)((
                                                   ((QData)((IData)(vlSymsp->TOP__Top__mem_inst.__PVT__i_data)) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlSelf->__PVT__fetch__DOT__programCounter)))) 
                                          << 5U)));
            vlSelf->__PVT__fetchDecodePayload[2U] = 
                ((1U & ((IData)((((QData)((IData)(vlSymsp->TOP__Top__mem_inst.__PVT__i_data)) 
                                  << 0x20U) | (QData)((IData)(vlSelf->__PVT__fetch__DOT__programCounter)))) 
                        >> 0x1bU)) | ((0x1eU & ((IData)(
                                                        (((QData)((IData)(vlSymsp->TOP__Top__mem_inst.__PVT__i_data)) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(vlSelf->__PVT__fetch__DOT__programCounter)))) 
                                                >> 0x1bU)) 
                                      | ((IData)(((
                                                   ((QData)((IData)(vlSymsp->TOP__Top__mem_inst.__PVT__i_data)) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlSelf->__PVT__fetch__DOT__programCounter))) 
                                                  >> 0x20U)) 
                                         << 5U)));
            vlSelf->__PVT__fetchDecodePayload[3U] = 
                (0x1fU & ((1U & ((IData)(((((QData)((IData)(vlSymsp->TOP__Top__mem_inst.__PVT__i_data)) 
                                            << 0x20U) 
                                           | (QData)((IData)(vlSelf->__PVT__fetch__DOT__programCounter))) 
                                          >> 0x20U)) 
                                 >> 0x1bU)) | (0x1eU 
                                               & ((IData)(
                                                          ((((QData)((IData)(vlSymsp->TOP__Top__mem_inst.__PVT__i_data)) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(vlSelf->__PVT__fetch__DOT__programCounter))) 
                                                           >> 0x20U)) 
                                                  >> 0x1bU))));
        } else if ((1U & ((~ ((IData)(vlSelf->__PVT__fetchDecodeControl) 
                              >> 1U)) & (~ (IData)(vlSymsp->TOP__Top__mem_inst.__PVT__i_valid))))) {
            vlSelf->__PVT__fetchDecodePayload[0U] = 
                (0xfffffffeU & vlSelf->__PVT__fetchDecodePayload[0U]);
        }
    } else {
        vlSelf->__PVT__fetchDecodePayload[0U] = 0U;
        vlSelf->__PVT__fetchDecodePayload[1U] = 0U;
        vlSelf->__PVT__fetchDecodePayload[2U] = 0U;
        vlSelf->__PVT__fetchDecodePayload[3U] = 0U;
    }
    vlSelf->__PVT__csrForwardData = 0U;
    vlSelf->__PVT__csrForwardEnable = 0U;
    if (((((0xfU & (vlSelf->__PVT__decodeExecutePayload[1U] 
                    >> 0xdU)) == (0xfU & (vlSelf->__PVT__executeMemoryPayload[1U] 
                                          >> 3U))) 
          & vlSelf->__PVT__executeMemoryPayload[0U]) 
         & (vlSelf->__PVT__executeMemoryPayload[1U] 
            >> 7U))) {
        vlSelf->__PVT__csrForwardData = ((vlSelf->__PVT__executeMemoryPayload[4U] 
                                          << 0x11U) 
                                         | (vlSelf->__PVT__executeMemoryPayload[3U] 
                                            >> 0xfU));
        vlSelf->__PVT__csrForwardEnable = 1U;
    } else if (((((0xfU & (vlSelf->__PVT__decodeExecutePayload[1U] 
                           >> 0xdU)) == (0xfU & (vlSelf->__PVT__memoryWritebackPayload[1U] 
                                                 >> 3U))) 
                 & vlSelf->__PVT__memoryWritebackPayload[0U]) 
                & (vlSelf->__PVT__memoryWritebackPayload[1U] 
                   >> 7U))) {
        vlSelf->__PVT__csrForwardData = ((vlSelf->__PVT__memoryWritebackPayload[3U] 
                                          << 0x13U) 
                                         | (vlSelf->__PVT__memoryWritebackPayload[2U] 
                                            >> 0xdU));
        vlSelf->__PVT__csrForwardEnable = 1U;
    }
    vlSelf->forwardEnable2 = 0U;
    vlSelf->forwardEnable1 = 0U;
    vlSelf->forwardData1 = 0U;
    if ((0U != (0x1fU & (vlSelf->__PVT__decodeExecutePayload[3U] 
                         >> 0x10U)))) {
        if (((((vlSelf->__PVT__executeMemoryPayload[1U] 
                >> 7U) & (((0U != (7U & (vlSelf->__PVT__executeMemoryPayload[2U] 
                                         >> 0xcU))) 
                           & (2U != (7U & (vlSelf->__PVT__executeMemoryPayload[2U] 
                                           >> 0xcU)))) 
                          | (0U != (3U & (vlSelf->__PVT__executeMemoryPayload[0U] 
                                          >> 1U))))) 
              & (0U != (0x1fU & (vlSelf->__PVT__executeMemoryPayload[4U] 
                                 >> 0x14U)))) & ((0x1fU 
                                                  & (vlSelf->__PVT__decodeExecutePayload[3U] 
                                                     >> 0x10U)) 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->__PVT__executeMemoryPayload[4U] 
                                                     >> 0x14U))))) {
            vlSelf->forwardEnable1 = 1U;
            vlSelf->forwardData1 = ((1U == (7U & (vlSelf->__PVT__executeMemoryPayload[2U] 
                                                  >> 0xcU)))
                                     ? ((0U != (3U 
                                                & (vlSelf->__PVT__executeMemoryPayload[0U] 
                                                   >> 1U)))
                                         ? ((vlSelf->__PVT__executeMemoryPayload[1U] 
                                             << 0x1dU) 
                                            | (vlSelf->__PVT__executeMemoryPayload[0U] 
                                               >> 3U))
                                         : ((vlSelf->__PVT__executeMemoryPayload[4U] 
                                             << 0x11U) 
                                            | (vlSelf->__PVT__executeMemoryPayload[3U] 
                                               >> 0xfU)))
                                     : ((3U == (7U 
                                                & (vlSelf->__PVT__executeMemoryPayload[2U] 
                                                   >> 0xcU)))
                                         ? ((vlSelf->__PVT__executeMemoryPayload[5U] 
                                             << 7U) 
                                            | (vlSelf->__PVT__executeMemoryPayload[4U] 
                                               >> 0x19U))
                                         : ((0U != 
                                             (3U & 
                                              (vlSelf->__PVT__executeMemoryPayload[0U] 
                                               >> 1U)))
                                             ? ((vlSelf->__PVT__executeMemoryPayload[1U] 
                                                 << 0x1dU) 
                                                | (vlSelf->__PVT__executeMemoryPayload[0U] 
                                                   >> 3U))
                                             : 0U)));
        } else if (((((vlSelf->__PVT__memoryWritebackPayload[1U] 
                       >> 7U) & (IData)(vlSelf->__PVT__destinationEnable)) 
                     & (0U != (0x1fU & (vlSelf->__PVT__memoryWritebackPayload[3U] 
                                        >> 0xdU)))) 
                    & ((0x1fU & (vlSelf->__PVT__decodeExecutePayload[3U] 
                                 >> 0x10U)) == (0x1fU 
                                                & (vlSelf->__PVT__memoryWritebackPayload[3U] 
                                                   >> 0xdU))))) {
            vlSelf->forwardEnable1 = 1U;
            vlSelf->forwardData1 = vlSelf->__PVT__writeData;
        }
    }
    vlSelf->forwardData2 = 0U;
    if ((0U != (0x1fU & (vlSelf->__PVT__decodeExecutePayload[3U] 
                         >> 0xbU)))) {
        if (((((vlSelf->__PVT__executeMemoryPayload[1U] 
                >> 7U) & (((0U != (7U & (vlSelf->__PVT__executeMemoryPayload[2U] 
                                         >> 0xcU))) 
                           & (2U != (7U & (vlSelf->__PVT__executeMemoryPayload[2U] 
                                           >> 0xcU)))) 
                          | (0U != (3U & (vlSelf->__PVT__executeMemoryPayload[0U] 
                                          >> 1U))))) 
              & (0U != (0x1fU & (vlSelf->__PVT__executeMemoryPayload[4U] 
                                 >> 0x14U)))) & ((0x1fU 
                                                  & (vlSelf->__PVT__decodeExecutePayload[3U] 
                                                     >> 0xbU)) 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->__PVT__executeMemoryPayload[4U] 
                                                     >> 0x14U))))) {
            vlSelf->forwardEnable2 = 1U;
            vlSelf->forwardData2 = ((1U == (7U & (vlSelf->__PVT__executeMemoryPayload[2U] 
                                                  >> 0xcU)))
                                     ? ((0U != (3U 
                                                & (vlSelf->__PVT__executeMemoryPayload[0U] 
                                                   >> 1U)))
                                         ? ((vlSelf->__PVT__executeMemoryPayload[1U] 
                                             << 0x1dU) 
                                            | (vlSelf->__PVT__executeMemoryPayload[0U] 
                                               >> 3U))
                                         : ((vlSelf->__PVT__executeMemoryPayload[4U] 
                                             << 0x11U) 
                                            | (vlSelf->__PVT__executeMemoryPayload[3U] 
                                               >> 0xfU)))
                                     : ((3U == (7U 
                                                & (vlSelf->__PVT__executeMemoryPayload[2U] 
                                                   >> 0xcU)))
                                         ? ((vlSelf->__PVT__executeMemoryPayload[5U] 
                                             << 7U) 
                                            | (vlSelf->__PVT__executeMemoryPayload[4U] 
                                               >> 0x19U))
                                         : ((0U != 
                                             (3U & 
                                              (vlSelf->__PVT__executeMemoryPayload[0U] 
                                               >> 1U)))
                                             ? ((vlSelf->__PVT__executeMemoryPayload[1U] 
                                                 << 0x1dU) 
                                                | (vlSelf->__PVT__executeMemoryPayload[0U] 
                                                   >> 3U))
                                             : 0U)));
        } else if (((((vlSelf->__PVT__memoryWritebackPayload[1U] 
                       >> 7U) & (IData)(vlSelf->__PVT__destinationEnable)) 
                     & (0U != (0x1fU & (vlSelf->__PVT__memoryWritebackPayload[3U] 
                                        >> 0xdU)))) 
                    & ((0x1fU & (vlSelf->__PVT__decodeExecutePayload[3U] 
                                 >> 0xbU)) == (0x1fU 
                                               & (vlSelf->__PVT__memoryWritebackPayload[3U] 
                                                  >> 0xdU))))) {
            vlSelf->forwardEnable2 = 1U;
            vlSelf->forwardData2 = vlSelf->__PVT__writeData;
        }
    }
    vlSelf->__PVT__controlReset = 0U;
    if ((1U & (~ (IData)(vlSymsp->TOP.reset)))) {
        if (((0U != (0xfU & (vlSelf->__PVT__memoryWritebackPayload[2U] 
                             >> 8U))) & (vlSelf->__PVT__memoryWritebackPayload[1U] 
                                         >> 7U))) {
            vlSelf->__PVT__controlReset = 1U;
        }
    }
    vlSelf->__PVT__fetch__DOT__programCounter = vlSelf->__Vdly__fetch__DOT__programCounter;
}
