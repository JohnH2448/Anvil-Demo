// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VTop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"
class VTop_Top;
class VTop___024unit;


class VTop__Syms;

class alignas(VL_CACHE_LINE_BYTES) VTop___024root final : public VerilatedModule {
  public:
    // CELLS
    VTop_Top* Top;
    VTop___024unit* __PVT____024unit;

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(__SYM__interrupt,0,0);
    VL_OUT8(dbg_IF_ID_Valid,0,0);
    VL_OUT8(dbg_ID_EX_Valid,0,0);
    VL_OUT8(dbg_EX_MEM_Valid,0,0);
    VL_OUT8(dbg_MEM_WB_Valid,0,0);
    VL_OUT8(dbg_trap,0,0);
    VL_OUT8(dbg_IMEM_valid,0,0);
    VL_OUT8(forwardEnable1,0,0);
    VL_OUT8(forwardEnable2,0,0);
    CData/*3:0*/ __Vtrigprevexpr___TOP__Top____PVT__readCSR__0;
    CData/*4:0*/ __Vtrigprevexpr___TOP__Top____PVT__readAddress1__0;
    CData/*4:0*/ __Vtrigprevexpr___TOP__Top____PVT__readAddress2__0;
    CData/*1:0*/ __Vtrigprevexpr___TOP__Top____PVT__memoryWritebackControl__0;
    CData/*0:0*/ __VstlDidInit;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*1:0*/ __Vtrigprevexpr___TOP__Top____PVT__memoryWritebackControl__1;
    CData/*0:0*/ __VicoDidInit;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*3:0*/ __Vtrigprevexpr___TOP__Top____PVT__readCSR__1;
    CData/*4:0*/ __Vtrigprevexpr___TOP__Top____PVT__readAddress1__1;
    CData/*4:0*/ __Vtrigprevexpr___TOP__Top____PVT__readAddress2__1;
    CData/*1:0*/ __Vtrigprevexpr___TOP__Top____PVT__memoryWritebackControl__2;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clock__0;
    CData/*0:0*/ __VactDidInit;
    CData/*0:0*/ __VactContinue;
    VL_OUTW(dbg_registers,1023,0,32);
    VL_OUT(dbg_IF_ID_programCounter,31,0);
    VL_OUT(dbg_IF_ID_instruction,31,0);
    VL_OUT(dbg_ID_EX_programCounter,31,0);
    VL_OUT(dbg_EX_MEM_programCounter,31,0);
    VL_OUT(dbg_MEM_WB_programCounter,31,0);
    VL_OUT(dbg_IMEM_data,31,0);
    VL_OUT(dbg_pc,31,0);
    VL_OUT(dbg_wb_value,31,0);
    VL_OUT(forwardData1,31,0);
    VL_OUT(forwardData2,31,0);
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<5> __VstlTriggered;
    VlTriggerVec<2> __VicoTriggered;
    VlTriggerVec<5> __VactTriggered;
    VlTriggerVec<5> __VnbaTriggered;

    // INTERNAL VARIABLES
    VTop__Syms* const vlSymsp;

    // CONSTRUCTORS
    VTop___024root(VTop__Syms* symsp, const char* v__name);
    ~VTop___024root();
    VL_UNCOPYABLE(VTop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
