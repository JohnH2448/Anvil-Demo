// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "VTop__pch.h"
#include "VTop___024unit.h"

VL_ATTR_COLD void VTop___024unit___ctor_var_reset(VTop___024unit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VTop___024unit___ctor_var_reset\n"); );
    // Body
    for (int __Vi = 0; __Vi < 16; ++__Vi) {
        vlSelf->__Venumtab_enum_name0[__Vi] = std::string{""};
    }
    vlSelf->__Venumtab_enum_name0[0] = std::string{"MSTATUS"};
    vlSelf->__Venumtab_enum_name0[1] = std::string{"MEPC"};
    vlSelf->__Venumtab_enum_name0[2] = std::string{"MCAUSE"};
    vlSelf->__Venumtab_enum_name0[3] = std::string{"MTVAL"};
    vlSelf->__Venumtab_enum_name0[4] = std::string{"MIE"};
    vlSelf->__Venumtab_enum_name0[6] = std::string{"MTVEC"};
    vlSelf->__Venumtab_enum_name0[7] = std::string{"MSCRATCH"};
    vlSelf->__Venumtab_enum_name0[8] = std::string{"MISA"};
    vlSelf->__Venumtab_enum_name0[9] = std::string{"MVENDORID"};
    vlSelf->__Venumtab_enum_name0[10] = std::string{"MARCHID"};
    vlSelf->__Venumtab_enum_name0[11] = std::string{"MIMPID"};
    vlSelf->__Venumtab_enum_name0[12] = std::string{"MHARTID"};
    vlSelf->__Venumtab_enum_name0[13] = std::string{"MIP"};
    vlSelf->__Venumtab_enum_name0[14] = std::string{"MCYCLE"};
    vlSelf->__Venumtab_enum_name0[15] = std::string{"MINSTRET"};
}
