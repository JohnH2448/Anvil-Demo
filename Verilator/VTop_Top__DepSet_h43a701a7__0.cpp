// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "VTop__pch.h"
#include "VTop_Top.h"

VL_INLINE_OPT void VTop_Top___act_sequent__TOP__Top__0(VTop_Top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VTop_Top___act_sequent__TOP__Top__0\n"); );
    // Body
    vlSelf->__PVT__csrReadData = vlSelf->__PVT__csrFile__DOT__csrs
        [vlSelf->__PVT__readCSR];
}

VL_INLINE_OPT void VTop_Top___act_sequent__TOP__Top__2(VTop_Top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VTop_Top___act_sequent__TOP__Top__2\n"); );
    // Body
    vlSelf->__PVT__readData1 = ((0U == (IData)(vlSelf->__PVT__readAddress1))
                                 ? 0U : (((((IData)(vlSelf->__PVT__destinationEnable) 
                                            & (0U != 
                                               (0x1fU 
                                                & (vlSelf->__PVT__memoryWritebackPayload[3U] 
                                                   >> 0xdU)))) 
                                           & ((0x1fU 
                                               & (vlSelf->__PVT__memoryWritebackPayload[3U] 
                                                  >> 0xdU)) 
                                              == (IData)(vlSelf->__PVT__readAddress1))) 
                                          & (vlSelf->__PVT__memoryWritebackPayload[1U] 
                                             >> 7U))
                                          ? vlSelf->__PVT__writeData
                                          : vlSelf->__PVT__registerFile__DOT__registers
                                         [vlSelf->__PVT__readAddress1]));
}

VL_INLINE_OPT void VTop_Top___act_sequent__TOP__Top__3(VTop_Top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VTop_Top___act_sequent__TOP__Top__3\n"); );
    // Body
    vlSelf->__PVT__readData2 = ((0U == (IData)(vlSelf->__PVT__readAddress2))
                                 ? 0U : (((((IData)(vlSelf->__PVT__destinationEnable) 
                                            & (0U != 
                                               (0x1fU 
                                                & (vlSelf->__PVT__memoryWritebackPayload[3U] 
                                                   >> 0xdU)))) 
                                           & ((0x1fU 
                                               & (vlSelf->__PVT__memoryWritebackPayload[3U] 
                                                  >> 0xdU)) 
                                              == (IData)(vlSelf->__PVT__readAddress2))) 
                                          & (vlSelf->__PVT__memoryWritebackPayload[1U] 
                                             >> 7U))
                                          ? vlSelf->__PVT__writeData
                                          : vlSelf->__PVT__registerFile__DOT__registers
                                         [vlSelf->__PVT__readAddress2]));
}

VL_INLINE_OPT void VTop_Top___act_comb__TOP__Top__0(VTop_Top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VTop_Top___act_comb__TOP__Top__0\n"); );
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
    if (((vlSelf->__PVT__decodeExecutePayload[0U] & 
          (0x20U == (0x3eU & vlSelf->__PVT__decodeExecutePayload[1U]))) 
         & (~ ((IData)(vlSelf->__PVT__executeMemoryControl) 
               >> 1U)))) {
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
}

extern const VlWide<8>/*255:0*/ VTop__ConstPool__CONST_h5b9d2cef_0;

VL_INLINE_OPT void VTop_Top___act_comb__TOP__Top__1(VTop_Top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VTop_Top___act_comb__TOP__Top__1\n"); );
    // Init
    CData/*0:0*/ __PVT__decode__DOT__ro;
    __PVT__decode__DOT__ro = 0;
    // Body
    vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[0U] 
        = VTop__ConstPool__CONST_h5b9d2cef_0[0U];
    vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U] 
        = VTop__ConstPool__CONST_h5b9d2cef_0[1U];
    vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[2U] 
        = VTop__ConstPool__CONST_h5b9d2cef_0[2U];
    vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[3U] 
        = VTop__ConstPool__CONST_h5b9d2cef_0[3U];
    vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[4U] 
        = VTop__ConstPool__CONST_h5b9d2cef_0[4U];
    vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[5U] 
        = VTop__ConstPool__CONST_h5b9d2cef_0[5U];
    vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[6U] 
        = VTop__ConstPool__CONST_h5b9d2cef_0[6U];
    vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[7U] 
        = VTop__ConstPool__CONST_h5b9d2cef_0[7U];
    __PVT__decode__DOT__ro = 0U;
    vlSelf->__PVT__readAddress1 = 0U;
    vlSelf->__PVT__readAddress2 = 0U;
    vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[3U] 
        = ((0x1fffffU & vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[3U]) 
           | (vlSelf->__PVT__readData2 << 0x15U));
    vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[4U] 
        = ((vlSelf->__PVT__readData2 >> 0xbU) | (vlSelf->__PVT__readData1 
                                                 << 0x15U));
    vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[5U] 
        = ((vlSelf->__PVT__readData1 >> 0xbU) | ((IData)(
                                                         (((QData)((IData)(
                                                                           vlSelf->__PVT__fetchDecodePayload[2U])) 
                                                           << 0x3bU) 
                                                          | (((QData)((IData)(
                                                                              vlSelf->__PVT__fetchDecodePayload[1U])) 
                                                              << 0x1bU) 
                                                             | ((QData)((IData)(
                                                                                vlSelf->__PVT__fetchDecodePayload[0U])) 
                                                                >> 5U)))) 
                                                 << 0x15U));
    vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[6U] 
        = (((IData)((((QData)((IData)(vlSelf->__PVT__fetchDecodePayload[2U])) 
                      << 0x3bU) | (((QData)((IData)(
                                                    vlSelf->__PVT__fetchDecodePayload[1U])) 
                                    << 0x1bU) | ((QData)((IData)(
                                                                 vlSelf->__PVT__fetchDecodePayload[0U])) 
                                                 >> 5U)))) 
            >> 0xbU) | ((IData)(((((QData)((IData)(
                                                   vlSelf->__PVT__fetchDecodePayload[2U])) 
                                   << 0x3bU) | (((QData)((IData)(
                                                                 vlSelf->__PVT__fetchDecodePayload[1U])) 
                                                 << 0x1bU) 
                                                | ((QData)((IData)(
                                                                   vlSelf->__PVT__fetchDecodePayload[0U])) 
                                                   >> 5U))) 
                                 >> 0x20U)) << 0x15U));
    vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[7U] 
        = ((IData)(((((QData)((IData)(vlSelf->__PVT__fetchDecodePayload[2U])) 
                      << 0x3bU) | (((QData)((IData)(
                                                    vlSelf->__PVT__fetchDecodePayload[1U])) 
                                    << 0x1bU) | ((QData)((IData)(
                                                                 vlSelf->__PVT__fetchDecodePayload[0U])) 
                                                 >> 5U))) 
                    >> 0x20U)) >> 0xbU);
    vlSelf->__PVT__decodeCombIllegal = (1U == (0xfU 
                                               & (vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U] 
                                                  >> 1U)));
    if ((0x800U & vlSelf->__PVT__fetchDecodePayload[2U])) {
        if ((0x400U & vlSelf->__PVT__fetchDecodePayload[2U])) {
            if ((0x200U & vlSelf->__PVT__fetchDecodePayload[2U])) {
                if ((0x100U & vlSelf->__PVT__fetchDecodePayload[2U])) {
                    vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U] 
                        = (2U | (0xffffffe1U & vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U]));
                } else if ((0x80U & vlSelf->__PVT__fetchDecodePayload[2U])) {
                    vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U] 
                        = (2U | (0xffffffe1U & vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U]));
                } else if ((0x40U & vlSelf->__PVT__fetchDecodePayload[2U])) {
                    if ((0x20U & vlSelf->__PVT__fetchDecodePayload[2U])) {
                        vlSelf->__PVT__readAddress1 
                            = (0x1fU & (vlSelf->__PVT__fetchDecodePayload[2U] 
                                        >> 0x14U));
                        vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[3U] 
                            = ((0xfffff83fU & vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[3U]) 
                               | (0x7c0U & (vlSelf->__PVT__fetchDecodePayload[2U] 
                                            >> 6U)));
                        vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U] 
                            = (0xffc7ffffU & vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U]);
                        if ((0U != (7U & (vlSelf->__PVT__fetchDecodePayload[2U] 
                                          >> 0x11U)))) {
                            vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U] 
                                = ((0x10U & vlSelf->__PVT__fetchDecodePayload[3U])
                                    ? ((8U & vlSelf->__PVT__fetchDecodePayload[3U])
                                        ? ((4U & vlSelf->__PVT__fetchDecodePayload[3U])
                                            ? ((2U 
                                                & vlSelf->__PVT__fetchDecodePayload[3U])
                                                ? (
                                                   (1U 
                                                    & vlSelf->__PVT__fetchDecodePayload[3U])
                                                    ? 
                                                   (2U 
                                                    | (0xffffffe1U 
                                                       & vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U]))
                                                    : 
                                                   ((vlSelf->__PVT__fetchDecodePayload[2U] 
                                                     >> 0x1fU)
                                                     ? 
                                                    (2U 
                                                     | (0xffffffe1U 
                                                        & vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U]))
                                                     : 
                                                    ((0x40000000U 
                                                      & vlSelf->__PVT__fetchDecodePayload[2U])
                                                      ? 
                                                     (2U 
                                                      | (0xffffffe1U 
                                                         & vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U]))
                                                      : 
                                                     ((0x20000000U 
                                                       & vlSelf->__PVT__fetchDecodePayload[2U])
                                                       ? 
                                                      ((0x10000000U 
                                                        & vlSelf->__PVT__fetchDecodePayload[2U])
                                                        ? 
                                                       (2U 
                                                        | (0xffffffe1U 
                                                           & vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U]))
                                                        : 
                                                       ((0x8000000U 
                                                         & vlSelf->__PVT__fetchDecodePayload[2U])
                                                         ? 
                                                        ((0x4000000U 
                                                          & vlSelf->__PVT__fetchDecodePayload[2U])
                                                          ? 
                                                         (2U 
                                                          | (0xffffffe1U 
                                                             & vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U]))
                                                          : 
                                                         ((0x2000000U 
                                                           & vlSelf->__PVT__fetchDecodePayload[2U])
                                                           ? 
                                                          (2U 
                                                           | (0xffffffe1U 
                                                              & vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U]))
                                                           : 
                                                          (0x18000U 
                                                           | (0xfffe1fffU 
                                                              & vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U]))))
                                                         : 
                                                        ((0x4000000U 
                                                          & vlSelf->__PVT__fetchDecodePayload[2U])
                                                          ? 
                                                         ((0xfffe1fffU 
                                                           & vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U]) 
                                                          | (((0x2000000U 
                                                               & vlSelf->__PVT__fetchDecodePayload[2U])
                                                               ? 0xbU
                                                               : 0xaU) 
                                                             << 0xdU))
                                                          : 
                                                         ((0x2000000U 
                                                           & vlSelf->__PVT__fetchDecodePayload[2U])
                                                           ? 
                                                          (0x12000U 
                                                           | (0xfffe1fffU 
                                                              & vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U]))
                                                           : 
                                                          (2U 
                                                           | (0xffffffe1U 
                                                              & vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U]))))))
                                                       : 
                                                      (2U 
                                                       | (0xffffffe1U 
                                                          & vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U]))))))
                                                : (2U 
                                                   | (0xffffffe1U 
                                                      & vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U])))
                                            : (2U | 
                                               (0xffffffe1U 
                                                & vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U])))
                                        : ((4U & vlSelf->__PVT__fetchDecodePayload[3U])
                                            ? ((2U 
                                                & vlSelf->__PVT__fetchDecodePayload[3U])
                                                ? (
                                                   (1U 
                                                    & vlSelf->__PVT__fetchDecodePayload[3U])
                                                    ? 
                                                   (2U 
                                                    | (0xffffffe1U 
                                                       & vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U]))
                                                    : 
                                                   ((vlSelf->__PVT__fetchDecodePayload[2U] 
                                                     >> 0x1fU)
                                                     ? 
                                                    (2U 
                                                     | (0xffffffe1U 
                                                        & vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U]))
                                                     : 
                                                    ((0x40000000U 
                                                      & vlSelf->__PVT__fetchDecodePayload[2U])
                                                      ? 
                                                     (2U 
                                                      | (0xffffffe1U 
                                                         & vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U]))
                                                      : 
                                                     ((0x20000000U 
                                                       & vlSelf->__PVT__fetchDecodePayload[2U])
                                                       ? 
                                                      (2U 
                                                       | (0xffffffe1U 
                                                          & vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U]))
                                                       : 
                                                      ((0x10000000U 
                                                        & vlSelf->__PVT__fetchDecodePayload[2U])
                                                        ? 
                                                       (2U 
                                                        | (0xffffffe1U 
                                                           & vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U]))
                                                        : 
                                                       ((0x8000000U 
                                                         & vlSelf->__PVT__fetchDecodePayload[2U])
                                                         ? 
                                                        (2U 
                                                         | (0xffffffe1U 
                                                            & vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U]))
                                                         : 
                                                        ((0x4000000U 
                                                          & vlSelf->__PVT__fetchDecodePayload[2U])
                                                          ? 
                                                         ((0x2000000U 
                                                           & vlSelf->__PVT__fetchDecodePayload[2U])
                                                           ? 
                                                          (2U 
                                                           | (0xffffffe1U 
                                                              & vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U]))
                                                           : 
                                                          (0x1e000U 
                                                           | vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U]))
                                                          : 
                                                         ((0x2000000U 
                                                           & vlSelf->__PVT__fetchDecodePayload[2U])
                                                           ? 
                                                          (2U 
                                                           | (0xffffffe1U 
                                                              & vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U]))
                                                           : 
                                                          (0x1c000U 
                                                           | (0xfffe1fffU 
                                                              & vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U]))))))))))
                                                : (2U 
                                                   | (0xffffffe1U 
                                                      & vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U])))
                                            : (2U | 
                                               (0xffffffe1U 
                                                & vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U]))))
                                    : ((8U & vlSelf->__PVT__fetchDecodePayload[3U])
                                        ? (2U | (0xffffffe1U 
                                                 & vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U]))
                                        : ((4U & vlSelf->__PVT__fetchDecodePayload[3U])
                                            ? ((2U 
                                                & vlSelf->__PVT__fetchDecodePayload[3U])
                                                ? (
                                                   (1U 
                                                    & vlSelf->__PVT__fetchDecodePayload[3U])
                                                    ? 
                                                   (2U 
                                                    | (0xffffffe1U 
                                                       & vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U]))
                                                    : 
                                                   ((vlSelf->__PVT__fetchDecodePayload[2U] 
                                                     >> 0x1fU)
                                                     ? 
                                                    ((0x40000000U 
                                                      & vlSelf->__PVT__fetchDecodePayload[2U])
                                                      ? 
                                                     (2U 
                                                      | (0xffffffe1U 
                                                         & vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U]))
                                                      : 
                                                     ((0x20000000U 
                                                       & vlSelf->__PVT__fetchDecodePayload[2U])
                                                       ? 
                                                      (2U 
                                                       | (0xffffffe1U 
                                                          & vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U]))
                                                       : 
                                                      ((0x10000000U 
                                                        & vlSelf->__PVT__fetchDecodePayload[2U])
                                                        ? 
                                                       (2U 
                                                        | (0xffffffe1U 
                                                           & vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U]))
                                                        : 
                                                       ((0x8000000U 
                                                         & vlSelf->__PVT__fetchDecodePayload[2U])
                                                         ? 
                                                        ((0x4000000U 
                                                          & vlSelf->__PVT__fetchDecodePayload[2U])
                                                          ? 
                                                         (2U 
                                                          | (0xffffffe1U 
                                                             & vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U]))
                                                          : 
                                                         ((0x2000000U 
                                                           & vlSelf->__PVT__fetchDecodePayload[2U])
                                                           ? 
                                                          (2U 
                                                           | (0xffffffe1U 
                                                              & vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U]))
                                                           : 
                                                          (0x1a000U 
                                                           | (0xfffe1fffU 
                                                              & vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U]))))
                                                         : 
                                                        ((0xfffe1fffU 
                                                          & vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U]) 
                                                         | (((0x4000000U 
                                                              & vlSelf->__PVT__fetchDecodePayload[2U])
                                                              ? 
                                                             ((0x2000000U 
                                                               & vlSelf->__PVT__fetchDecodePayload[2U])
                                                               ? 3U
                                                               : 2U)
                                                              : 
                                                             ((0x2000000U 
                                                               & vlSelf->__PVT__fetchDecodePayload[2U])
                                                               ? 1U
                                                               : 7U)) 
                                                            << 0xdU))))))
                                                     : 
                                                    ((0x40000000U 
                                                      & vlSelf->__PVT__fetchDecodePayload[2U])
                                                      ? 
                                                     (2U 
                                                      | (0xffffffe1U 
                                                         & vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U]))
                                                      : 
                                                     ((0x20000000U 
                                                       & vlSelf->__PVT__fetchDecodePayload[2U])
                                                       ? 
                                                      (2U 
                                                       | (0xffffffe1U 
                                                          & vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U]))
                                                       : 
                                                      ((0x10000000U 
                                                        & vlSelf->__PVT__fetchDecodePayload[2U])
                                                        ? 
                                                       (2U 
                                                        | (0xffffffe1U 
                                                           & vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U]))
                                                        : 
                                                       ((0x8000000U 
                                                         & vlSelf->__PVT__fetchDecodePayload[2U])
                                                         ? 
                                                        ((0x4000000U 
                                                          & vlSelf->__PVT__fetchDecodePayload[2U])
                                                          ? 
                                                         (2U 
                                                          | (0xffffffe1U 
                                                             & vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U]))
                                                          : 
                                                         ((0xfffe1fffU 
                                                           & vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U]) 
                                                          | (((0x2000000U 
                                                               & vlSelf->__PVT__fetchDecodePayload[2U])
                                                               ? 6U
                                                               : 4U) 
                                                             << 0xdU)))
                                                         : 
                                                        ((0x4000000U 
                                                          & vlSelf->__PVT__fetchDecodePayload[2U])
                                                          ? 
                                                         (2U 
                                                          | (0xffffffe1U 
                                                             & vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U]))
                                                          : 
                                                         ((0xfffe1fffU 
                                                           & vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U]) 
                                                          | (((0x2000000U 
                                                               & vlSelf->__PVT__fetchDecodePayload[2U])
                                                               ? 8U
                                                               : 0U) 
                                                             << 0xdU)))))))))
                                                : (2U 
                                                   | (0xffffffe1U 
                                                      & vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U])))
                                            : (2U | 
                                               (0xffffffe1U 
                                                & vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U])))));
                            if ((0x80000U & vlSelf->__PVT__fetchDecodePayload[2U])) {
                                if ((0x40000U & vlSelf->__PVT__fetchDecodePayload[2U])) {
                                    if ((0x20000U & 
                                         vlSelf->__PVT__fetchDecodePayload[2U])) {
                                        vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U] 
                                            = (0x60000U 
                                               | vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U]);
                                        vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U] 
                                            = ((0xffffe07fU 
                                                & vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U]) 
                                               | (0xf80U 
                                                  & (vlSelf->__PVT__fetchDecodePayload[2U] 
                                                     >> 0xdU)));
                                        if ((0U != 
                                             (0x1fU 
                                              & (vlSelf->__PVT__fetchDecodePayload[2U] 
                                                 >> 0x14U)))) {
                                            vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U] 
                                                = (0x40U 
                                                   | vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U]);
                                        }
                                    } else {
                                        vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U] 
                                            = (0x40000U 
                                               | (0xfff9ffffU 
                                                  & vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U]));
                                        vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U] 
                                            = ((0xffffe07fU 
                                                & vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U]) 
                                               | (0xf80U 
                                                  & (vlSelf->__PVT__fetchDecodePayload[2U] 
                                                     >> 0xdU)));
                                        if ((0U != 
                                             (0x1fU 
                                              & (vlSelf->__PVT__fetchDecodePayload[2U] 
                                                 >> 0x14U)))) {
                                            vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U] 
                                                = (0x40U 
                                                   | vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U]);
                                        }
                                    }
                                } else if ((0x20000U 
                                            & vlSelf->__PVT__fetchDecodePayload[2U])) {
                                    vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U] 
                                        = (0x20000U 
                                           | (0xfff9ffffU 
                                              & vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U]));
                                    vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U] 
                                        = ((0xffffe03fU 
                                            & vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U]) 
                                           | (0xffffffc0U 
                                              & (0x40U 
                                                 | (0xf80U 
                                                    & (vlSelf->__PVT__fetchDecodePayload[2U] 
                                                       >> 0xdU)))));
                                } else {
                                    vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U] 
                                        = (2U | (0xffffffe1U 
                                                 & vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U]));
                                }
                            } else if ((0x40000U & 
                                        vlSelf->__PVT__fetchDecodePayload[2U])) {
                                if ((0x20000U & vlSelf->__PVT__fetchDecodePayload[2U])) {
                                    vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U] 
                                        = (0x60000U 
                                           | vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U]);
                                    vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U] 
                                        = (0x1000U 
                                           | vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U]);
                                    if ((0U != (IData)(vlSelf->__PVT__readAddress1))) {
                                        vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U] 
                                            = (0x40U 
                                               | vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U]);
                                    }
                                } else {
                                    vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U] 
                                        = (0x40000U 
                                           | (0xfff9ffffU 
                                              & vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U]));
                                    vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U] 
                                        = (0x1000U 
                                           | vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U]);
                                    if ((0U != (IData)(vlSelf->__PVT__readAddress1))) {
                                        vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U] 
                                            = (0x40U 
                                               | vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U]);
                                    }
                                }
                            } else if ((0x20000U & 
                                        vlSelf->__PVT__fetchDecodePayload[2U])) {
                                vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U] 
                                    = (0x20000U | (0xfff9ffffU 
                                                   & vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U]));
                                vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U] 
                                    = (0x1000U | vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U]);
                                vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U] 
                                    = (0x40U | vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U]);
                            } else {
                                vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U] 
                                    = (2U | (0xffffffe1U 
                                             & vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U]));
                            }
                            __PVT__decode__DOT__ro 
                                = (((((8U == (0xfU 
                                              & (vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U] 
                                                 >> 0xdU))) 
                                      | (9U == (0xfU 
                                                & (vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U] 
                                                   >> 0xdU)))) 
                                     | (0xaU == (0xfU 
                                                 & (vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U] 
                                                    >> 0xdU)))) 
                                    | (0xbU == (0xfU 
                                                & (vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U] 
                                                   >> 0xdU)))) 
                                   | (0xcU == (0xfU 
                                               & (vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U] 
                                                  >> 0xdU))));
                            if (((vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U] 
                                  >> 6U) & (IData)(__PVT__decode__DOT__ro))) {
                                vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U] 
                                    = (2U | (0xffffffe1U 
                                             & vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U]));
                            }
                        } else if ((0x73U == ((vlSelf->__PVT__fetchDecodePayload[3U] 
                                               << 0x1bU) 
                                              | (vlSelf->__PVT__fetchDecodePayload[2U] 
                                                 >> 5U)))) {
                            vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U] 
                                = (0xaU | (0xffffffe1U 
                                           & vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U]));
                        } else if ((0x100073U == ((
                                                   vlSelf->__PVT__fetchDecodePayload[3U] 
                                                   << 0x1bU) 
                                                  | (vlSelf->__PVT__fetchDecodePayload[2U] 
                                                     >> 5U)))) {
                            vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U] 
                                = (0xcU | (0xffffffe1U 
                                           & vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U]));
                        } else if ((0x30200073U == 
                                    ((vlSelf->__PVT__fetchDecodePayload[3U] 
                                      << 0x1bU) | (
                                                   vlSelf->__PVT__fetchDecodePayload[2U] 
                                                   >> 5U)))) {
                            vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U] 
                                = (0x20U | vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U]);
                            vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U] 
                                = (0x2000U | (0xfffe1fffU 
                                              & vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U]));
                        } else if ((0x10500073U != 
                                    ((vlSelf->__PVT__fetchDecodePayload[3U] 
                                      << 0x1bU) | (
                                                   vlSelf->__PVT__fetchDecodePayload[2U] 
                                                   >> 5U)))) {
                            vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U] 
                                = (2U | (0xffffffe1U 
                                         & vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U]));
                        }
                    } else {
                        vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U] 
                            = (2U | (0xffffffe1U & 
                                     vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U]));
                    }
                } else {
                    vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U] 
                        = (2U | (0xffffffe1U & vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U]));
                }
            } else if ((0x100U & vlSelf->__PVT__fetchDecodePayload[2U])) {
                if ((0x80U & vlSelf->__PVT__fetchDecodePayload[2U])) {
                    if ((0x40U & vlSelf->__PVT__fetchDecodePayload[2U])) {
                        if ((0x20U & vlSelf->__PVT__fetchDecodePayload[2U])) {
                            vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[3U] 
                                = ((0xfffff83fU & vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[3U]) 
                                   | (0x7c0U & (vlSelf->__PVT__fetchDecodePayload[2U] 
                                                >> 6U)));
                            vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[2U] 
                                = (0x20U | (0xffffffcfU 
                                            & vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[2U]));
                            vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U] 
                                = (0x580000U | (0xff07ffffU 
                                                & vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U]));
                            vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[2U] 
                                = ((0x3fU & vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[2U]) 
                                   | (0xffffffc0U & 
                                      (((- (IData)(
                                                   (1U 
                                                    & (vlSelf->__PVT__fetchDecodePayload[3U] 
                                                       >> 4U)))) 
                                        << 0x1bU) | 
                                       ((0x4000000U 
                                         & (vlSelf->__PVT__fetchDecodePayload[3U] 
                                            << 0x16U)) 
                                        | ((0x3fc0000U 
                                            & (vlSelf->__PVT__fetchDecodePayload[2U] 
                                               << 1U)) 
                                           | ((0x20000U 
                                               & (vlSelf->__PVT__fetchDecodePayload[2U] 
                                                  >> 8U)) 
                                              | (0x1ff80U 
                                                 & ((vlSelf->__PVT__fetchDecodePayload[3U] 
                                                     << 0xdU) 
                                                    | (0x1f80U 
                                                       & (vlSelf->__PVT__fetchDecodePayload[2U] 
                                                          >> 0x13U))))))))));
                            vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[3U] 
                                = ((0xffffffc0U & vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[3U]) 
                                   | (0x3fU & ((- (IData)(
                                                          (1U 
                                                           & (vlSelf->__PVT__fetchDecodePayload[3U] 
                                                              >> 4U)))) 
                                               >> 5U)));
                        } else {
                            vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U] 
                                = (2U | (0xffffffe1U 
                                         & vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U]));
                        }
                    } else {
                        vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U] 
                            = (2U | (0xffffffe1U & 
                                     vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U]));
                    }
                } else {
                    vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U] 
                        = (2U | (0xffffffe1U & vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U]));
                }
            } else if ((0x80U & vlSelf->__PVT__fetchDecodePayload[2U])) {
                if ((0x40U & vlSelf->__PVT__fetchDecodePayload[2U])) {
                    if ((0x20U & vlSelf->__PVT__fetchDecodePayload[2U])) {
                        vlSelf->__PVT__readAddress1 
                            = (0x1fU & (vlSelf->__PVT__fetchDecodePayload[2U] 
                                        >> 0x14U));
                        vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[3U] 
                            = ((0xfffff83fU & vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[3U]) 
                               | (0x7c0U & (vlSelf->__PVT__fetchDecodePayload[2U] 
                                            >> 6U)));
                        vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[2U] 
                            = (0x10U | (0xffffffcfU 
                                        & vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[2U]));
                        vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U] 
                            = (0x980000U | (0xff07ffffU 
                                            & vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U]));
                        vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[2U] 
                            = ((0x3fU & vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[2U]) 
                               | (0xffffffc0U & (((- (IData)(
                                                             (1U 
                                                              & (vlSelf->__PVT__fetchDecodePayload[3U] 
                                                                 >> 4U)))) 
                                                  << 0x12U) 
                                                 | (0x3ffc0U 
                                                    & ((vlSelf->__PVT__fetchDecodePayload[3U] 
                                                        << 0xdU) 
                                                       | (0x1fc0U 
                                                          & (vlSelf->__PVT__fetchDecodePayload[2U] 
                                                             >> 0x13U)))))));
                        vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[3U] 
                            = ((0xffffffc0U & vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[3U]) 
                               | (0x3fU & ((- (IData)(
                                                      (1U 
                                                       & (vlSelf->__PVT__fetchDecodePayload[3U] 
                                                          >> 4U)))) 
                                           >> 0xeU)));
                        if ((0U != (7U & (vlSelf->__PVT__fetchDecodePayload[2U] 
                                          >> 0x11U)))) {
                            vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U] 
                                = (2U | (0xffffffe1U 
                                         & vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U]));
                        }
                    } else {
                        vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U] 
                            = (2U | (0xffffffe1U & 
                                     vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U]));
                    }
                } else {
                    vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U] 
                        = (2U | (0xffffffe1U & vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U]));
                }
            } else if ((0x40U & vlSelf->__PVT__fetchDecodePayload[2U])) {
                if ((0x20U & vlSelf->__PVT__fetchDecodePayload[2U])) {
                    vlSelf->__PVT__readAddress1 = (0x1fU 
                                                   & (vlSelf->__PVT__fetchDecodePayload[2U] 
                                                      >> 0x14U));
                    vlSelf->__PVT__readAddress2 = (0x1fU 
                                                   & (vlSelf->__PVT__fetchDecodePayload[2U] 
                                                      >> 0x19U));
                    vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[2U] 
                        = (0x20U | (0xffffffcfU & vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[2U]));
                    vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[2U] 
                        = ((0x3fU & vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[2U]) 
                           | (0xffffffc0U & (((- (IData)(
                                                         (1U 
                                                          & (vlSelf->__PVT__fetchDecodePayload[3U] 
                                                             >> 4U)))) 
                                              << 0x13U) 
                                             | ((0x40000U 
                                                 & (vlSelf->__PVT__fetchDecodePayload[3U] 
                                                    << 0xeU)) 
                                                | ((0x20000U 
                                                    & (vlSelf->__PVT__fetchDecodePayload[2U] 
                                                       << 5U)) 
                                                   | ((0x1f800U 
                                                       & ((vlSelf->__PVT__fetchDecodePayload[3U] 
                                                           << 0xdU) 
                                                          | (0x1800U 
                                                             & (vlSelf->__PVT__fetchDecodePayload[2U] 
                                                                >> 0x13U)))) 
                                                      | (0x780U 
                                                         & (vlSelf->__PVT__fetchDecodePayload[2U] 
                                                            >> 6U))))))));
                    vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[3U] 
                        = ((0xffffffc0U & vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[3U]) 
                           | (0x3fU & ((- (IData)((1U 
                                                   & (vlSelf->__PVT__fetchDecodePayload[3U] 
                                                      >> 4U)))) 
                                       >> 0xdU)));
                    vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U] 
                        = ((0x80000U & vlSelf->__PVT__fetchDecodePayload[2U])
                            ? ((0x8fffffffU & vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U]) 
                               | (((0x40000U & vlSelf->__PVT__fetchDecodePayload[2U])
                                    ? ((0x20000U & 
                                        vlSelf->__PVT__fetchDecodePayload[2U])
                                        ? 6U : 5U) : 
                                   ((0x20000U & vlSelf->__PVT__fetchDecodePayload[2U])
                                     ? 4U : 3U)) << 0x1cU))
                            : ((0x40000U & vlSelf->__PVT__fetchDecodePayload[2U])
                                ? (2U | (0xffffffe1U 
                                         & vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U]))
                                : ((0x8fffffffU & vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U]) 
                                   | (((0x20000U & 
                                        vlSelf->__PVT__fetchDecodePayload[2U])
                                        ? 2U : 1U) 
                                      << 0x1cU))));
                } else {
                    vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U] 
                        = (2U | (0xffffffe1U & vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U]));
                }
            } else {
                vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U] 
                    = (2U | (0xffffffe1U & vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U]));
            }
        } else {
            vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U] 
                = (2U | (0xffffffe1U & vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U]));
        }
    } else if ((0x400U & vlSelf->__PVT__fetchDecodePayload[2U])) {
        if ((0x200U & vlSelf->__PVT__fetchDecodePayload[2U])) {
            if ((0x100U & vlSelf->__PVT__fetchDecodePayload[2U])) {
                vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U] 
                    = (2U | (0xffffffe1U & vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U]));
            } else if ((0x80U & vlSelf->__PVT__fetchDecodePayload[2U])) {
                if ((0x40U & vlSelf->__PVT__fetchDecodePayload[2U])) {
                    if ((0x20U & vlSelf->__PVT__fetchDecodePayload[2U])) {
                        vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[3U] 
                            = ((0xfffff83fU & vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[3U]) 
                               | (0x7c0U & (vlSelf->__PVT__fetchDecodePayload[2U] 
                                            >> 6U)));
                        vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[2U] 
                            = (0x30U | vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[2U]);
                        vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U] 
                            = (0x80000U | (0xffc7ffffU 
                                           & vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U]));
                        vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U] 
                            = (0xf0ffffffU & vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U]);
                        vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[2U] 
                            = ((0x3fU & vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[2U]) 
                               | (0xfffc0000U & (vlSelf->__PVT__fetchDecodePayload[2U] 
                                                 << 1U)));
                        vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[3U] 
                            = ((0xffffffc0U & vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[3U]) 
                               | (0x3fU & ((0x3eU & 
                                            (vlSelf->__PVT__fetchDecodePayload[3U] 
                                             << 1U)) 
                                           | (vlSelf->__PVT__fetchDecodePayload[2U] 
                                              >> 0x1fU))));
                    } else {
                        vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U] 
                            = (2U | (0xffffffe1U & 
                                     vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U]));
                    }
                } else {
                    vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U] 
                        = (2U | (0xffffffe1U & vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U]));
                }
            } else if ((0x40U & vlSelf->__PVT__fetchDecodePayload[2U])) {
                if ((0x20U & vlSelf->__PVT__fetchDecodePayload[2U])) {
                    vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[3U] 
                        = ((0xfffff83fU & vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[3U]) 
                           | (0x7c0U & (vlSelf->__PVT__fetchDecodePayload[2U] 
                                        >> 6U)));
                    vlSelf->__PVT__readAddress1 = (0x1fU 
                                                   & (vlSelf->__PVT__fetchDecodePayload[2U] 
                                                      >> 0x14U));
                    vlSelf->__PVT__readAddress2 = (0x1fU 
                                                   & (vlSelf->__PVT__fetchDecodePayload[2U] 
                                                      >> 0x19U));
                    vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[2U] 
                        = (0xffffffcfU & vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[2U]);
                    vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U] 
                        = (0x80000U | (0xffc7ffffU 
                                       & vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U]));
                    vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U] 
                        = (((((((((0U == ((0x3f8U & 
                                           ((vlSelf->__PVT__fetchDecodePayload[3U] 
                                             << 5U) 
                                            | (0x18U 
                                               & (vlSelf->__PVT__fetchDecodePayload[2U] 
                                                  >> 0x1bU)))) 
                                          | (7U & (
                                                   vlSelf->__PVT__fetchDecodePayload[2U] 
                                                   >> 0x11U)))) 
                                  | (0x100U == ((0x3f8U 
                                                 & ((vlSelf->__PVT__fetchDecodePayload[3U] 
                                                     << 5U) 
                                                    | (0x18U 
                                                       & (vlSelf->__PVT__fetchDecodePayload[2U] 
                                                          >> 0x1bU)))) 
                                                | (7U 
                                                   & (vlSelf->__PVT__fetchDecodePayload[2U] 
                                                      >> 0x11U))))) 
                                 | (7U == ((0x3f8U 
                                            & ((vlSelf->__PVT__fetchDecodePayload[3U] 
                                                << 5U) 
                                               | (0x18U 
                                                  & (vlSelf->__PVT__fetchDecodePayload[2U] 
                                                     >> 0x1bU)))) 
                                           | (7U & 
                                              (vlSelf->__PVT__fetchDecodePayload[2U] 
                                               >> 0x11U))))) 
                                | (6U == ((0x3f8U & 
                                           ((vlSelf->__PVT__fetchDecodePayload[3U] 
                                             << 5U) 
                                            | (0x18U 
                                               & (vlSelf->__PVT__fetchDecodePayload[2U] 
                                                  >> 0x1bU)))) 
                                          | (7U & (
                                                   vlSelf->__PVT__fetchDecodePayload[2U] 
                                                   >> 0x11U))))) 
                               | (4U == ((0x3f8U & 
                                          ((vlSelf->__PVT__fetchDecodePayload[3U] 
                                            << 5U) 
                                           | (0x18U 
                                              & (vlSelf->__PVT__fetchDecodePayload[2U] 
                                                 >> 0x1bU)))) 
                                         | (7U & (vlSelf->__PVT__fetchDecodePayload[2U] 
                                                  >> 0x11U))))) 
                              | (1U == ((0x3f8U & (
                                                   (vlSelf->__PVT__fetchDecodePayload[3U] 
                                                    << 5U) 
                                                   | (0x18U 
                                                      & (vlSelf->__PVT__fetchDecodePayload[2U] 
                                                         >> 0x1bU)))) 
                                        | (7U & (vlSelf->__PVT__fetchDecodePayload[2U] 
                                                 >> 0x11U))))) 
                             | (5U == ((0x3f8U & ((
                                                   vlSelf->__PVT__fetchDecodePayload[3U] 
                                                   << 5U) 
                                                  | (0x18U 
                                                     & (vlSelf->__PVT__fetchDecodePayload[2U] 
                                                        >> 0x1bU)))) 
                                       | (7U & (vlSelf->__PVT__fetchDecodePayload[2U] 
                                                >> 0x11U))))) 
                            | (0x105U == ((0x3f8U & 
                                           ((vlSelf->__PVT__fetchDecodePayload[3U] 
                                             << 5U) 
                                            | (0x18U 
                                               & (vlSelf->__PVT__fetchDecodePayload[2U] 
                                                  >> 0x1bU)))) 
                                          | (7U & (
                                                   vlSelf->__PVT__fetchDecodePayload[2U] 
                                                   >> 0x11U)))))
                            ? ((0xf0ffffffU & vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U]) 
                               | (((0U == ((0x3f8U 
                                            & ((vlSelf->__PVT__fetchDecodePayload[3U] 
                                                << 5U) 
                                               | (0x18U 
                                                  & (vlSelf->__PVT__fetchDecodePayload[2U] 
                                                     >> 0x1bU)))) 
                                           | (7U & 
                                              (vlSelf->__PVT__fetchDecodePayload[2U] 
                                               >> 0x11U))))
                                    ? 0U : ((0x100U 
                                             == ((0x3f8U 
                                                  & ((vlSelf->__PVT__fetchDecodePayload[3U] 
                                                      << 5U) 
                                                     | (0x18U 
                                                        & (vlSelf->__PVT__fetchDecodePayload[2U] 
                                                           >> 0x1bU)))) 
                                                 | (7U 
                                                    & (vlSelf->__PVT__fetchDecodePayload[2U] 
                                                       >> 0x11U))))
                                             ? 1U : 
                                            ((7U == 
                                              ((0x3f8U 
                                                & ((vlSelf->__PVT__fetchDecodePayload[3U] 
                                                    << 5U) 
                                                   | (0x18U 
                                                      & (vlSelf->__PVT__fetchDecodePayload[2U] 
                                                         >> 0x1bU)))) 
                                               | (7U 
                                                  & (vlSelf->__PVT__fetchDecodePayload[2U] 
                                                     >> 0x11U))))
                                              ? 2U : 
                                             ((6U == 
                                               ((0x3f8U 
                                                 & ((vlSelf->__PVT__fetchDecodePayload[3U] 
                                                     << 5U) 
                                                    | (0x18U 
                                                       & (vlSelf->__PVT__fetchDecodePayload[2U] 
                                                          >> 0x1bU)))) 
                                                | (7U 
                                                   & (vlSelf->__PVT__fetchDecodePayload[2U] 
                                                      >> 0x11U))))
                                               ? 3U
                                               : ((4U 
                                                   == 
                                                   ((0x3f8U 
                                                     & ((vlSelf->__PVT__fetchDecodePayload[3U] 
                                                         << 5U) 
                                                        | (0x18U 
                                                           & (vlSelf->__PVT__fetchDecodePayload[2U] 
                                                              >> 0x1bU)))) 
                                                    | (7U 
                                                       & (vlSelf->__PVT__fetchDecodePayload[2U] 
                                                          >> 0x11U))))
                                                   ? 4U
                                                   : 
                                                  ((1U 
                                                    == 
                                                    ((0x3f8U 
                                                      & ((vlSelf->__PVT__fetchDecodePayload[3U] 
                                                          << 5U) 
                                                         | (0x18U 
                                                            & (vlSelf->__PVT__fetchDecodePayload[2U] 
                                                               >> 0x1bU)))) 
                                                     | (7U 
                                                        & (vlSelf->__PVT__fetchDecodePayload[2U] 
                                                           >> 0x11U))))
                                                    ? 5U
                                                    : 
                                                   ((5U 
                                                     == 
                                                     ((0x3f8U 
                                                       & ((vlSelf->__PVT__fetchDecodePayload[3U] 
                                                           << 5U) 
                                                          | (0x18U 
                                                             & (vlSelf->__PVT__fetchDecodePayload[2U] 
                                                                >> 0x1bU)))) 
                                                      | (7U 
                                                         & (vlSelf->__PVT__fetchDecodePayload[2U] 
                                                            >> 0x11U))))
                                                     ? 6U
                                                     : 7U))))))) 
                                  << 0x18U)) : ((2U 
                                                 == 
                                                 ((0x3f8U 
                                                   & ((vlSelf->__PVT__fetchDecodePayload[3U] 
                                                       << 5U) 
                                                      | (0x18U 
                                                         & (vlSelf->__PVT__fetchDecodePayload[2U] 
                                                            >> 0x1bU)))) 
                                                  | (7U 
                                                     & (vlSelf->__PVT__fetchDecodePayload[2U] 
                                                        >> 0x11U))))
                                                 ? 
                                                (0x8000000U 
                                                 | (0xf0ffffffU 
                                                    & vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U]))
                                                 : 
                                                ((3U 
                                                  == 
                                                  ((0x3f8U 
                                                    & ((vlSelf->__PVT__fetchDecodePayload[3U] 
                                                        << 5U) 
                                                       | (0x18U 
                                                          & (vlSelf->__PVT__fetchDecodePayload[2U] 
                                                             >> 0x1bU)))) 
                                                   | (7U 
                                                      & (vlSelf->__PVT__fetchDecodePayload[2U] 
                                                         >> 0x11U))))
                                                  ? 
                                                 (0x9000000U 
                                                  | (0xf0ffffffU 
                                                     & vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U]))
                                                  : 
                                                 (2U 
                                                  | (0xffffffe1U 
                                                     & vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U])))));
                } else {
                    vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U] 
                        = (2U | (0xffffffe1U & vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U]));
                }
            } else {
                vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U] 
                    = (2U | (0xffffffe1U & vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U]));
            }
        } else if ((0x100U & vlSelf->__PVT__fetchDecodePayload[2U])) {
            vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U] 
                = (2U | (0xffffffe1U & vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U]));
        } else if ((0x80U & vlSelf->__PVT__fetchDecodePayload[2U])) {
            vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U] 
                = (2U | (0xffffffe1U & vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U]));
        } else if ((0x40U & vlSelf->__PVT__fetchDecodePayload[2U])) {
            if ((0x20U & vlSelf->__PVT__fetchDecodePayload[2U])) {
                vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[2U] 
                    = (0x10U | (0xffffffcfU & vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[2U]));
                vlSelf->__PVT__readAddress1 = (0x1fU 
                                               & (vlSelf->__PVT__fetchDecodePayload[2U] 
                                                  >> 0x14U));
                vlSelf->__PVT__readAddress2 = (0x1fU 
                                               & (vlSelf->__PVT__fetchDecodePayload[2U] 
                                                  >> 0x19U));
                vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[2U] 
                    = ((0x3fU & vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[2U]) 
                       | (0xffffffc0U & (((- (IData)(
                                                     (1U 
                                                      & (vlSelf->__PVT__fetchDecodePayload[3U] 
                                                         >> 4U)))) 
                                          << 0x12U) 
                                         | ((0x3f800U 
                                             & ((vlSelf->__PVT__fetchDecodePayload[3U] 
                                                 << 0xdU) 
                                                | (0x1800U 
                                                   & (vlSelf->__PVT__fetchDecodePayload[2U] 
                                                      >> 0x13U)))) 
                                            | (0x7c0U 
                                               & (vlSelf->__PVT__fetchDecodePayload[2U] 
                                                  >> 6U))))));
                vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[3U] 
                    = ((0xffffffc0U & vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[3U]) 
                       | (0x3fU & ((- (IData)((1U & 
                                               (vlSelf->__PVT__fetchDecodePayload[3U] 
                                                >> 4U)))) 
                                   >> 0xeU)));
                vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[2U] 
                    = (4U | vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[2U]);
                if ((0U == (7U & (vlSelf->__PVT__fetchDecodePayload[2U] 
                                  >> 0x11U)))) {
                    vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[2U] 
                        = (0xfffffffcU & vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[2U]);
                } else if ((1U == (7U & (vlSelf->__PVT__fetchDecodePayload[2U] 
                                         >> 0x11U)))) {
                    vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[2U] 
                        = (1U | (0xfffffffcU & vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[2U]));
                } else if ((2U == (7U & (vlSelf->__PVT__fetchDecodePayload[2U] 
                                         >> 0x11U)))) {
                    vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[2U] 
                        = (3U | vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[2U]);
                } else {
                    vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U] 
                        = (2U | (0xffffffe1U & vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U]));
                }
            } else {
                vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U] 
                    = (2U | (0xffffffe1U & vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U]));
            }
        } else {
            vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U] 
                = (2U | (0xffffffe1U & vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U]));
        }
    } else if ((0x200U & vlSelf->__PVT__fetchDecodePayload[2U])) {
        if ((0x100U & vlSelf->__PVT__fetchDecodePayload[2U])) {
            vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U] 
                = (2U | (0xffffffe1U & vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U]));
        } else if ((0x80U & vlSelf->__PVT__fetchDecodePayload[2U])) {
            if ((0x40U & vlSelf->__PVT__fetchDecodePayload[2U])) {
                if ((0x20U & vlSelf->__PVT__fetchDecodePayload[2U])) {
                    vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[3U] 
                        = ((0xfffff83fU & vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[3U]) 
                           | (0x7c0U & (vlSelf->__PVT__fetchDecodePayload[2U] 
                                        >> 6U)));
                    vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[2U] 
                        = (0x20U | (0xffffffcfU & vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[2U]));
                    vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U] 
                        = (0x80000U | (0xffc7ffffU 
                                       & vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U]));
                    vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U] 
                        = (0xf0ffffffU & vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U]);
                    vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[2U] 
                        = ((0x3fU & vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[2U]) 
                           | (0xfffc0000U & (vlSelf->__PVT__fetchDecodePayload[2U] 
                                             << 1U)));
                    vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[3U] 
                        = ((0xffffffc0U & vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[3U]) 
                           | (0x3fU & ((0x3eU & (vlSelf->__PVT__fetchDecodePayload[3U] 
                                                 << 1U)) 
                                       | (vlSelf->__PVT__fetchDecodePayload[2U] 
                                          >> 0x1fU))));
                } else {
                    vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U] 
                        = (2U | (0xffffffe1U & vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U]));
                }
            } else {
                vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U] 
                    = (2U | (0xffffffe1U & vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U]));
            }
        } else if ((0x40U & vlSelf->__PVT__fetchDecodePayload[2U])) {
            if ((0x20U & vlSelf->__PVT__fetchDecodePayload[2U])) {
                vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[3U] 
                    = ((0xfffff83fU & vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[3U]) 
                       | (0x7c0U & (vlSelf->__PVT__fetchDecodePayload[2U] 
                                    >> 6U)));
                vlSelf->__PVT__readAddress1 = (0x1fU 
                                               & (vlSelf->__PVT__fetchDecodePayload[2U] 
                                                  >> 0x14U));
                vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[2U] 
                    = (0x10U | (0xffffffcfU & vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[2U]));
                vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U] 
                    = (0x80000U | (0xffc7ffffU & vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U]));
                vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[2U] 
                    = ((0x3fU & vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[2U]) 
                       | (0xffffffc0U & (((- (IData)(
                                                     (1U 
                                                      & (vlSelf->__PVT__fetchDecodePayload[3U] 
                                                         >> 4U)))) 
                                          << 0x12U) 
                                         | (0x3ffc0U 
                                            & ((vlSelf->__PVT__fetchDecodePayload[3U] 
                                                << 0xdU) 
                                               | (0x1fc0U 
                                                  & (vlSelf->__PVT__fetchDecodePayload[2U] 
                                                     >> 0x13U)))))));
                vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[3U] 
                    = ((0xffffffc0U & vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[3U]) 
                       | (0x3fU & ((- (IData)((1U & 
                                               (vlSelf->__PVT__fetchDecodePayload[3U] 
                                                >> 4U)))) 
                                   >> 0xeU)));
                vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U] 
                    = ((0x80000U & vlSelf->__PVT__fetchDecodePayload[2U])
                        ? ((0x40000U & vlSelf->__PVT__fetchDecodePayload[2U])
                            ? ((0xf0ffffffU & vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U]) 
                               | (((0x20000U & vlSelf->__PVT__fetchDecodePayload[2U])
                                    ? 2U : 3U) << 0x18U))
                            : ((0x20000U & vlSelf->__PVT__fetchDecodePayload[2U])
                                ? ((0U == (0x7fU & 
                                           ((vlSelf->__PVT__fetchDecodePayload[3U] 
                                             << 2U) 
                                            | (vlSelf->__PVT__fetchDecodePayload[2U] 
                                               >> 0x1eU))))
                                    ? (0x6000000U | 
                                       (0xf0ffffffU 
                                        & vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U]))
                                    : ((0x20U == (0x7fU 
                                                  & ((vlSelf->__PVT__fetchDecodePayload[3U] 
                                                      << 2U) 
                                                     | (vlSelf->__PVT__fetchDecodePayload[2U] 
                                                        >> 0x1eU))))
                                        ? (0x7000000U 
                                           | (0xf0ffffffU 
                                              & vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U]))
                                        : (2U | (0xffffffe1U 
                                                 & vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U]))))
                                : (0x4000000U | (0xf0ffffffU 
                                                 & vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U]))))
                        : ((0x40000U & vlSelf->__PVT__fetchDecodePayload[2U])
                            ? ((0xf0ffffffU & vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U]) 
                               | (((0x20000U & vlSelf->__PVT__fetchDecodePayload[2U])
                                    ? 9U : 8U) << 0x18U))
                            : ((0x20000U & vlSelf->__PVT__fetchDecodePayload[2U])
                                ? ((0U == (0x7fU & 
                                           ((vlSelf->__PVT__fetchDecodePayload[3U] 
                                             << 2U) 
                                            | (vlSelf->__PVT__fetchDecodePayload[2U] 
                                               >> 0x1eU))))
                                    ? (0x5000000U | 
                                       (0xf0ffffffU 
                                        & vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U]))
                                    : (2U | (0xffffffe1U 
                                             & vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U])))
                                : (0xf0ffffffU & vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U]))));
            } else {
                vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U] 
                    = (2U | (0xffffffe1U & vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U]));
            }
        } else {
            vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U] 
                = (2U | (0xffffffe1U & vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U]));
        }
    } else if ((0x100U & vlSelf->__PVT__fetchDecodePayload[2U])) {
        if ((0x80U & vlSelf->__PVT__fetchDecodePayload[2U])) {
            if ((0x40U & vlSelf->__PVT__fetchDecodePayload[2U])) {
                if ((0x20U & vlSelf->__PVT__fetchDecodePayload[2U])) {
                    if ((0U != (7U & (vlSelf->__PVT__fetchDecodePayload[2U] 
                                      >> 0x11U)))) {
                        if ((1U != (7U & (vlSelf->__PVT__fetchDecodePayload[2U] 
                                          >> 0x11U)))) {
                            vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U] 
                                = (2U | (0xffffffe1U 
                                         & vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U]));
                        }
                    }
                } else {
                    vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U] 
                        = (2U | (0xffffffe1U & vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U]));
                }
            } else {
                vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U] 
                    = (2U | (0xffffffe1U & vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U]));
            }
        } else {
            vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U] 
                = (2U | (0xffffffe1U & vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U]));
        }
    } else if ((0x80U & vlSelf->__PVT__fetchDecodePayload[2U])) {
        vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U] 
            = (2U | (0xffffffe1U & vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U]));
    } else if ((0x40U & vlSelf->__PVT__fetchDecodePayload[2U])) {
        if ((0x20U & vlSelf->__PVT__fetchDecodePayload[2U])) {
            vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[3U] 
                = ((0xfffff83fU & vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[3U]) 
                   | (0x7c0U & (vlSelf->__PVT__fetchDecodePayload[2U] 
                                >> 6U)));
            vlSelf->__PVT__readAddress1 = (0x1fU & 
                                           (vlSelf->__PVT__fetchDecodePayload[2U] 
                                            >> 0x14U));
            vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[2U] 
                = (0x10U | (0xffffffcfU & vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[2U]));
            vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U] 
                = (0x100000U | (0xffc7ffffU & vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U]));
            vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[2U] 
                = ((0x3fU & vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[2U]) 
                   | (0xffffffc0U & (((- (IData)((1U 
                                                  & (vlSelf->__PVT__fetchDecodePayload[3U] 
                                                     >> 4U)))) 
                                      << 0x12U) | (0x3ffc0U 
                                                   & ((vlSelf->__PVT__fetchDecodePayload[3U] 
                                                       << 0xdU) 
                                                      | (0x1fc0U 
                                                         & (vlSelf->__PVT__fetchDecodePayload[2U] 
                                                            >> 0x13U)))))));
            vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[3U] 
                = ((0xffffffc0U & vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[3U]) 
                   | (0x3fU & ((- (IData)((1U & (vlSelf->__PVT__fetchDecodePayload[3U] 
                                                 >> 4U)))) 
                               >> 0xeU)));
            vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[2U] 
                = (8U | vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[2U]);
            if ((0x80000U & vlSelf->__PVT__fetchDecodePayload[2U])) {
                if ((0x40000U & vlSelf->__PVT__fetchDecodePayload[2U])) {
                    vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U] 
                        = (2U | (0xffffffe1U & vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U]));
                } else {
                    vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U] 
                        = ((0x7fffffffU & vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U]) 
                           | (((0x20000U & vlSelf->__PVT__fetchDecodePayload[2U])
                                ? 2U : 0U) << 0x1fU));
                    vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[2U] 
                        = ((0xfffffffcU & vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[2U]) 
                           | (((0x20000U & vlSelf->__PVT__fetchDecodePayload[2U])
                                ? 2U : 0U) >> 1U));
                }
            } else if ((0x40000U & vlSelf->__PVT__fetchDecodePayload[2U])) {
                if ((0x20000U & vlSelf->__PVT__fetchDecodePayload[2U])) {
                    vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U] 
                        = (2U | (0xffffffe1U & vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U]));
                } else {
                    vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U] 
                        = (0x80000000U | vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U]);
                    vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[2U] 
                        = (3U | vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[2U]);
                }
            } else {
                vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U] 
                    = ((0x7fffffffU & vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U]) 
                       | (((0x20000U & vlSelf->__PVT__fetchDecodePayload[2U])
                            ? 3U : 1U) << 0x1fU));
                vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[2U] 
                    = ((0xfffffffcU & vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[2U]) 
                       | (((0x20000U & vlSelf->__PVT__fetchDecodePayload[2U])
                            ? 3U : 1U) >> 1U));
            }
        } else {
            vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U] 
                = (2U | (0xffffffe1U & vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U]));
        }
    } else {
        vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U] 
            = (2U | (0xffffffe1U & vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[1U]));
    }
    vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[3U] 
        = ((0xffe007ffU & vlSelf->__PVT__decode__DOT__decodeExecuteCandidate[3U]) 
           | (0xfffff800U & (((IData)(vlSelf->__PVT__readAddress1) 
                              << 0x10U) | ((IData)(vlSelf->__PVT__readAddress2) 
                                           << 0xbU))));
}
