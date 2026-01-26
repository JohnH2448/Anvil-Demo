// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "VTop__pch.h"
#include "VTop_Top.h"
#include "VTop__Syms.h"

VL_ATTR_COLD void VTop_Top___stl_sequent__TOP__Top__0(VTop_Top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VTop_Top___stl_sequent__TOP__Top__0\n"); );
    // Body
    vlSelf->__PVT__mtval = 0U;
    vlSelf->__PVT__mcause = 0U;
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
}

VL_ATTR_COLD void VTop_Top___eval_postponed__TOP__Top(VTop_Top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VTop_Top___eval_postponed__TOP__Top\n"); );
    // Body
    if (VL_UNLIKELY(vlSelf->csrFile__DOT____Vstrobe0)) {
        VL_WRITEF("Exception Detected\n");
        vlSelf->csrFile__DOT____Vstrobe0 = 0U;
    }
    if (VL_UNLIKELY(vlSelf->memory__DOT____Vstrobe0)) {
        VL_WRITEF("Loaded %08x from %08x\n",32,vlSymsp->TOP__Top__mem_inst.__PVT__loadData,
                  32,((vlSelf->__PVT__executeMemoryPayload[4U] 
                       << 0x11U) | (vlSelf->__PVT__executeMemoryPayload[3U] 
                                    >> 0xfU)));
        vlSelf->memory__DOT____Vstrobe0 = 0U;
    }
}
