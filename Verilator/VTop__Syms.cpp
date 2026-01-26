// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VTop__pch.h"
#include "VTop.h"
#include "VTop___024root.h"
#include "VTop_Top.h"
#include "VTop___024unit.h"
#include "VTop_MemExample.h"

// FUNCTIONS
VTop__Syms::~VTop__Syms()
{
}

VTop__Syms::VTop__Syms(VerilatedContext* contextp, const char* namep, VTop* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP__Top{this, Verilated::catName(namep, "Top")}
    , TOP__Top__mem_inst{this, Verilated::catName(namep, "Top.mem_inst")}
    , TOP____024unit{this, Verilated::catName(namep, "$unit")}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.Top = &TOP__Top;
    TOP__Top.mem_inst = &TOP__Top__mem_inst;
    TOP.__PVT____024unit = &TOP____024unit;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__Top.__Vconfigure(true);
    TOP__Top__mem_inst.__Vconfigure(true);
    TOP____024unit.__Vconfigure(true);
    // Setup scopes
    __Vscope_Top__csrFile.configure(this, name(), "Top.csrFile", "csrFile", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_Top__mem_inst.configure(this, name(), "Top.mem_inst", "mem_inst", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_Top__memory.configure(this, name(), "Top.memory", "memory", -12, VerilatedScope::SCOPE_OTHER);
    // Setup export functions
    for (int __Vfinal = 0; __Vfinal < 2; ++__Vfinal) {
        __Vscope_Top__mem_inst.varInsert(__Vfinal,"mem", &(TOP__Top__mem_inst.mem), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,2 ,31,0 ,0,524287);
    }
}
