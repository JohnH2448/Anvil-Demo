// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VTop.h for the primary calling header

#ifndef VERILATED_VTOP_TOP_H_
#define VERILATED_VTOP_TOP_H_  // guard

#include "verilated.h"
class VTop_MemExample;


class VTop__Syms;

class alignas(VL_CACHE_LINE_BYTES) VTop_Top final : public VerilatedModule {
  public:
    // CELLS
    VTop_MemExample* mem_inst;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
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
        CData/*1:0*/ __PVT__fetchDecodeControl;
        CData/*1:0*/ __PVT__decodeExecuteControl;
        CData/*1:0*/ __PVT__executeMemoryControl;
        CData/*1:0*/ __PVT__memoryWritebackControl;
        CData/*0:0*/ __PVT__controlReset;
        CData/*3:0*/ __PVT__mcause;
        CData/*4:0*/ __PVT__readAddress1;
        CData/*4:0*/ __PVT__readAddress2;
        CData/*0:0*/ __PVT__decodeCombIllegal;
        CData/*0:0*/ __PVT__branchValid;
        CData/*3:0*/ __PVT__readCSR;
        CData/*0:0*/ __PVT__mretSignal;
        CData/*0:0*/ __PVT__storeValid;
        CData/*0:0*/ __PVT__stallControl;
        CData/*0:0*/ __PVT__destinationEnable;
        CData/*0:0*/ __PVT__csrDestinationEnable;
        CData/*0:0*/ __PVT__dualValid;
        CData/*0:0*/ __PVT__csrForwardEnable;
        CData/*0:0*/ csrFile__DOT____Vstrobe0;
        CData/*0:0*/ __PVT__execute__DOT__illegal;
        CData/*0:0*/ __PVT__memory__DOT__illegal;
        CData/*0:0*/ __PVT__memory__DOT__accessFault;
        CData/*0:0*/ __PVT__memory__DOT__storeReq;
        CData/*3:0*/ __PVT__memory__DOT__storeByteEnable;
        CData/*0:0*/ memory__DOT____Vstrobe0;
        CData/*7:0*/ __PVT__memory__DOT__unnamedblk1__DOT__b;
        CData/*0:0*/ __Vdly__storeValid;
        SData/*15:0*/ __PVT__memory__DOT__unnamedblk1__DOT__h;
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
        VlWide<32>/*1023:0*/ __PVT__debug_regs_flat;
        IData/*31:0*/ __PVT__mtval;
        IData/*31:0*/ __PVT__readData1;
        IData/*31:0*/ __PVT__readData2;
        IData/*31:0*/ __PVT__csrReadData;
        IData/*31:0*/ __PVT__branchData;
        IData/*31:0*/ __PVT__writeData;
        IData/*31:0*/ __PVT__csrForwardData;
        IData/*31:0*/ __PVT__csrFile__DOT__unnamedblk1__DOT__old;
        IData/*31:0*/ __PVT__fetch__DOT__programCounter;
        IData/*31:0*/ __PVT__execute__DOT__result;
        IData/*31:0*/ __PVT__execute__DOT__forwardCorrectedCSRReadData;
        IData/*31:0*/ __PVT__memory__DOT__unnamedblk1__DOT__word;
        IData/*31:0*/ __Vdly__fetch__DOT__programCounter;
    };
    struct {
        VlWide<4>/*100:0*/ __PVT__fetchDecodePayload;
        VlWide<8>/*244:0*/ __PVT__decodeExecutePayload;
        VlWide<7>/*216:0*/ __PVT__executeMemoryPayload;
        VlWide<5>/*145:0*/ __PVT__memoryWritebackPayload;
        VlWide<8>/*244:0*/ __PVT__decode__DOT__decodeExecuteCandidate;
        VlUnpacked<IData/*31:0*/, 16> __PVT__csrFile__DOT__csrs;
        VlUnpacked<IData/*31:0*/, 32> __PVT__registerFile__DOT__registers;
    };

    // INTERNAL VARIABLES
    VTop__Syms* const vlSymsp;

    // CONSTRUCTORS
    VTop_Top(VTop__Syms* symsp, const char* v__name);
    ~VTop_Top();
    VL_UNCOPYABLE(VTop_Top);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
