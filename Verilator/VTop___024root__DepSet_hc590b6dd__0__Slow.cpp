// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "VTop__pch.h"
#include "VTop__Syms.h"
#include "VTop___024root.h"

VL_ATTR_COLD void VTop_Top___eval_initial__TOP__Top(VTop_Top* vlSelf);
VL_ATTR_COLD void VTop_MemExample___eval_initial__TOP__Top__mem_inst(VTop_MemExample* vlSelf);

VL_ATTR_COLD void VTop___024root___eval_initial(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval_initial\n"); );
    // Body
    VTop_Top___eval_initial__TOP__Top((&vlSymsp->TOP__Top));
    VTop_MemExample___eval_initial__TOP__Top__mem_inst((&vlSymsp->TOP__Top__mem_inst));
    vlSelf->__Vtrigprevexpr___TOP__Top____PVT__readCSR__0 
        = vlSymsp->TOP__Top.__PVT__readCSR;
    vlSelf->__Vtrigprevexpr___TOP__Top____PVT__readAddress1__0 
        = vlSymsp->TOP__Top.__PVT__readAddress1;
    vlSelf->__Vtrigprevexpr___TOP__Top____PVT__readAddress2__0 
        = vlSymsp->TOP__Top.__PVT__readAddress2;
    vlSelf->__Vtrigprevexpr___TOP__Top____PVT__memoryWritebackControl__0 
        = vlSymsp->TOP__Top.__PVT__memoryWritebackControl;
    vlSelf->__Vtrigprevexpr___TOP__Top____PVT__memoryWritebackControl__1 
        = vlSymsp->TOP__Top.__PVT__memoryWritebackControl;
    vlSelf->__Vtrigprevexpr___TOP__Top____PVT__readCSR__1 
        = vlSymsp->TOP__Top.__PVT__readCSR;
    vlSelf->__Vtrigprevexpr___TOP__Top____PVT__readAddress1__1 
        = vlSymsp->TOP__Top.__PVT__readAddress1;
    vlSelf->__Vtrigprevexpr___TOP__Top____PVT__readAddress2__1 
        = vlSymsp->TOP__Top.__PVT__readAddress2;
    vlSelf->__Vtrigprevexpr___TOP__Top____PVT__memoryWritebackControl__2 
        = vlSymsp->TOP__Top.__PVT__memoryWritebackControl;
    vlSelf->__Vtrigprevexpr___TOP__clock__0 = vlSelf->clock;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTop___024root___dump_triggers__stl(VTop___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void VTop___024root___eval_triggers__stl(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
    vlSelf->__VstlTriggered.set(1U, ((IData)(vlSymsp->TOP__Top.__PVT__readCSR) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__Top____PVT__readCSR__0)));
    vlSelf->__VstlTriggered.set(2U, ((IData)(vlSymsp->TOP__Top.__PVT__readAddress1) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__Top____PVT__readAddress1__0)));
    vlSelf->__VstlTriggered.set(3U, ((IData)(vlSymsp->TOP__Top.__PVT__readAddress2) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__Top____PVT__readAddress2__0)));
    vlSelf->__VstlTriggered.set(4U, ((IData)(vlSymsp->TOP__Top.__PVT__memoryWritebackControl) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__Top____PVT__memoryWritebackControl__0)));
    vlSelf->__Vtrigprevexpr___TOP__Top____PVT__readCSR__0 
        = vlSymsp->TOP__Top.__PVT__readCSR;
    vlSelf->__Vtrigprevexpr___TOP__Top____PVT__readAddress1__0 
        = vlSymsp->TOP__Top.__PVT__readAddress1;
    vlSelf->__Vtrigprevexpr___TOP__Top____PVT__readAddress2__0 
        = vlSymsp->TOP__Top.__PVT__readAddress2;
    vlSelf->__Vtrigprevexpr___TOP__Top____PVT__memoryWritebackControl__0 
        = vlSymsp->TOP__Top.__PVT__memoryWritebackControl;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VstlDidInit))))) {
        vlSelf->__VstlDidInit = 1U;
        vlSelf->__VstlTriggered.set(1U, 1U);
        vlSelf->__VstlTriggered.set(2U, 1U);
        vlSelf->__VstlTriggered.set(3U, 1U);
        vlSelf->__VstlTriggered.set(4U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VTop___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

VL_ATTR_COLD void VTop___024root___stl_sequent__TOP__0(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->dbg_pc = vlSymsp->TOP__Top.__PVT__fetch__DOT__programCounter;
    vlSelf->dbg_MEM_WB_programCounter = ((vlSymsp->TOP__Top.__PVT__memoryWritebackPayload[4U] 
                                          << 0xeU) 
                                         | (vlSymsp->TOP__Top.__PVT__memoryWritebackPayload[3U] 
                                            >> 0x12U));
    vlSelf->dbg_EX_MEM_programCounter = ((vlSymsp->TOP__Top.__PVT__executeMemoryPayload[6U] 
                                          << 7U) | 
                                         (vlSymsp->TOP__Top.__PVT__executeMemoryPayload[5U] 
                                          >> 0x19U));
    vlSelf->dbg_ID_EX_programCounter = ((vlSymsp->TOP__Top.__PVT__decodeExecutePayload[7U] 
                                         << 0xbU) | 
                                        (vlSymsp->TOP__Top.__PVT__decodeExecutePayload[6U] 
                                         >> 0x15U));
    vlSelf->dbg_IF_ID_instruction = ((vlSymsp->TOP__Top.__PVT__fetchDecodePayload[3U] 
                                      << 0x1bU) | (
                                                   vlSymsp->TOP__Top.__PVT__fetchDecodePayload[2U] 
                                                   >> 5U));
    vlSelf->dbg_IF_ID_programCounter = ((vlSymsp->TOP__Top.__PVT__fetchDecodePayload[2U] 
                                         << 0x1bU) 
                                        | (vlSymsp->TOP__Top.__PVT__fetchDecodePayload[1U] 
                                           >> 5U));
    vlSelf->dbg_MEM_WB_Valid = (1U & (vlSymsp->TOP__Top.__PVT__memoryWritebackPayload[1U] 
                                      >> 7U));
    vlSelf->dbg_EX_MEM_Valid = (1U & (vlSymsp->TOP__Top.__PVT__executeMemoryPayload[1U] 
                                      >> 7U));
    vlSelf->dbg_ID_EX_Valid = (1U & vlSymsp->TOP__Top.__PVT__decodeExecutePayload[0U]);
    vlSelf->dbg_IF_ID_Valid = (1U & vlSymsp->TOP__Top.__PVT__fetchDecodePayload[0U]);
}

VL_ATTR_COLD void VTop___024root___stl_sequent__TOP__1(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___stl_sequent__TOP__1\n"); );
    // Body
    vlSelf->dbg_registers[0U] = vlSymsp->TOP__Top.__PVT__debug_regs_flat[0U];
    vlSelf->dbg_registers[1U] = vlSymsp->TOP__Top.__PVT__debug_regs_flat[1U];
    vlSelf->dbg_registers[2U] = vlSymsp->TOP__Top.__PVT__debug_regs_flat[2U];
    vlSelf->dbg_registers[3U] = vlSymsp->TOP__Top.__PVT__debug_regs_flat[3U];
    vlSelf->dbg_registers[4U] = vlSymsp->TOP__Top.__PVT__debug_regs_flat[4U];
    vlSelf->dbg_registers[5U] = vlSymsp->TOP__Top.__PVT__debug_regs_flat[5U];
    vlSelf->dbg_registers[6U] = vlSymsp->TOP__Top.__PVT__debug_regs_flat[6U];
    vlSelf->dbg_registers[7U] = vlSymsp->TOP__Top.__PVT__debug_regs_flat[7U];
    vlSelf->dbg_registers[8U] = vlSymsp->TOP__Top.__PVT__debug_regs_flat[8U];
    vlSelf->dbg_registers[9U] = vlSymsp->TOP__Top.__PVT__debug_regs_flat[9U];
    vlSelf->dbg_registers[0xaU] = vlSymsp->TOP__Top.__PVT__debug_regs_flat[0xaU];
    vlSelf->dbg_registers[0xbU] = vlSymsp->TOP__Top.__PVT__debug_regs_flat[0xbU];
    vlSelf->dbg_registers[0xcU] = vlSymsp->TOP__Top.__PVT__debug_regs_flat[0xcU];
    vlSelf->dbg_registers[0xdU] = vlSymsp->TOP__Top.__PVT__debug_regs_flat[0xdU];
    vlSelf->dbg_registers[0xeU] = vlSymsp->TOP__Top.__PVT__debug_regs_flat[0xeU];
    vlSelf->dbg_registers[0xfU] = vlSymsp->TOP__Top.__PVT__debug_regs_flat[0xfU];
    vlSelf->dbg_registers[0x10U] = vlSymsp->TOP__Top.__PVT__debug_regs_flat[0x10U];
    vlSelf->dbg_registers[0x11U] = vlSymsp->TOP__Top.__PVT__debug_regs_flat[0x11U];
    vlSelf->dbg_registers[0x12U] = vlSymsp->TOP__Top.__PVT__debug_regs_flat[0x12U];
    vlSelf->dbg_registers[0x13U] = vlSymsp->TOP__Top.__PVT__debug_regs_flat[0x13U];
    vlSelf->dbg_registers[0x14U] = vlSymsp->TOP__Top.__PVT__debug_regs_flat[0x14U];
    vlSelf->dbg_registers[0x15U] = vlSymsp->TOP__Top.__PVT__debug_regs_flat[0x15U];
    vlSelf->dbg_registers[0x16U] = vlSymsp->TOP__Top.__PVT__debug_regs_flat[0x16U];
    vlSelf->dbg_registers[0x17U] = vlSymsp->TOP__Top.__PVT__debug_regs_flat[0x17U];
    vlSelf->dbg_registers[0x18U] = vlSymsp->TOP__Top.__PVT__debug_regs_flat[0x18U];
    vlSelf->dbg_registers[0x19U] = vlSymsp->TOP__Top.__PVT__debug_regs_flat[0x19U];
    vlSelf->dbg_registers[0x1aU] = vlSymsp->TOP__Top.__PVT__debug_regs_flat[0x1aU];
    vlSelf->dbg_registers[0x1bU] = vlSymsp->TOP__Top.__PVT__debug_regs_flat[0x1bU];
    vlSelf->dbg_registers[0x1cU] = vlSymsp->TOP__Top.__PVT__debug_regs_flat[0x1cU];
    vlSelf->dbg_registers[0x1dU] = vlSymsp->TOP__Top.__PVT__debug_regs_flat[0x1dU];
    vlSelf->dbg_registers[0x1eU] = vlSymsp->TOP__Top.__PVT__debug_regs_flat[0x1eU];
    vlSelf->dbg_registers[0x1fU] = vlSymsp->TOP__Top.__PVT__debug_regs_flat[0x1fU];
    vlSelf->dbg_trap = vlSymsp->TOP__Top.__PVT__controlReset;
    vlSelf->dbg_wb_value = ((IData)(vlSymsp->TOP__Top.__PVT__destinationEnable)
                             ? ((vlSymsp->TOP__Top.__PVT__memoryWritebackPayload[3U] 
                                 << 0x13U) | (vlSymsp->TOP__Top.__PVT__memoryWritebackPayload[2U] 
                                              >> 0xdU))
                             : 0U);
    vlSelf->forwardEnable2 = vlSymsp->TOP__Top.forwardEnable2;
    vlSelf->forwardEnable1 = vlSymsp->TOP__Top.forwardEnable1;
    vlSelf->forwardData1 = vlSymsp->TOP__Top.forwardData1;
    vlSelf->forwardData2 = vlSymsp->TOP__Top.forwardData2;
    vlSelf->dbg_IMEM_valid = vlSymsp->TOP__Top__mem_inst.__PVT__i_valid;
    vlSelf->dbg_IMEM_data = vlSymsp->TOP__Top__mem_inst.__PVT__i_data;
}

VL_ATTR_COLD void VTop_Top___stl_sequent__TOP__Top__0(VTop_Top* vlSelf);
void VTop_MemExample___ico_sequent__TOP__Top__mem_inst__0(VTop_MemExample* vlSelf);
void VTop_Top___act_sequent__TOP__Top__0(VTop_Top* vlSelf);
void VTop_Top___act_sequent__TOP__Top__1(VTop_Top* vlSelf);
void VTop_Top___act_sequent__TOP__Top__2(VTop_Top* vlSelf);
void VTop_Top___act_sequent__TOP__Top__3(VTop_Top* vlSelf);
void VTop_Top___act_comb__TOP__Top__0(VTop_Top* vlSelf);
void VTop_Top___act_comb__TOP__Top__1(VTop_Top* vlSelf);
void VTop_Top___act_comb__TOP__Top__2(VTop_Top* vlSelf);

VL_ATTR_COLD void VTop___024root___eval_stl(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VTop___024root___stl_sequent__TOP__0(vlSelf);
        VTop_Top___stl_sequent__TOP__Top__0((&vlSymsp->TOP__Top));
        VTop_MemExample___ico_sequent__TOP__Top__mem_inst__0((&vlSymsp->TOP__Top__mem_inst));
        VTop___024root___stl_sequent__TOP__1(vlSelf);
    }
    if ((3ULL & vlSelf->__VstlTriggered.word(0U))) {
        VTop_Top___act_sequent__TOP__Top__0((&vlSymsp->TOP__Top));
    }
    if ((0x11ULL & vlSelf->__VstlTriggered.word(0U))) {
        VTop_Top___act_sequent__TOP__Top__1((&vlSymsp->TOP__Top));
    }
    if ((5ULL & vlSelf->__VstlTriggered.word(0U))) {
        VTop_Top___act_sequent__TOP__Top__2((&vlSymsp->TOP__Top));
    }
    if ((9ULL & vlSelf->__VstlTriggered.word(0U))) {
        VTop_Top___act_sequent__TOP__Top__3((&vlSymsp->TOP__Top));
    }
    if ((0x13ULL & vlSelf->__VstlTriggered.word(0U))) {
        VTop_Top___act_comb__TOP__Top__0((&vlSymsp->TOP__Top));
    }
    if ((0xdULL & vlSelf->__VstlTriggered.word(0U))) {
        VTop_Top___act_comb__TOP__Top__1((&vlSymsp->TOP__Top));
    }
    if ((0x1fULL & vlSelf->__VstlTriggered.word(0U))) {
        VTop_Top___act_comb__TOP__Top__2((&vlSymsp->TOP__Top));
    }
}

VL_ATTR_COLD void VTop_Top___eval_postponed__TOP__Top(VTop_Top* vlSelf);
VL_ATTR_COLD void VTop_MemExample___eval_postponed__TOP__Top__mem_inst(VTop_MemExample* vlSelf);

VL_ATTR_COLD void VTop___024root___eval_postponed(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval_postponed\n"); );
    // Body
    VTop_Top___eval_postponed__TOP__Top((&vlSymsp->TOP__Top));
    VTop_MemExample___eval_postponed__TOP__Top__mem_inst((&vlSymsp->TOP__Top__mem_inst));
}
