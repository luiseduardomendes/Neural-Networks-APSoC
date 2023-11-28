// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestHarness.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VTestHarness__Syms.h"
#include "VTestHarness___024root.h"

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__418(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__418\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_hf845382e__0;
    // Body
    VL_EXTEND_WI(128,9, __Vtemp_hf845382e__0, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmi2tl_auto_out_a_bits_address));
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT___bar_auto_out_0_a_valid) 
                       & (7U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmi2tl_auto_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset))) 
                     & (0U != (3U & __Vtemp_hf845382e__0[0U]))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_61.sv:163: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.dmiBypass.error.monitor: Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_61.sv", 163, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_61.sv:164:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_61.sv:165: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.dmiBypass.error.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_61.sv", 165, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT___bar_auto_out_0_a_valid) 
                      & (7U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmi2tl_auto_out_a_bits_opcode))) 
                     & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_61.sv:169: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.dmiBypass.error.monitor: Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_61.sv", 169, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_61.sv:170:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_61.sv:171: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.dmiBypass.error.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_61.sv", 171, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__419(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__419\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_hf845382e__0;
    VlWide<4>/*127:0*/ __Vtemp_hf845382e__1;
    // Body
    VL_EXTEND_WI(128,9, __Vtemp_hf845382e__0, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmi2tl_auto_out_a_bits_address));
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT___bar_auto_out_0_a_valid) 
                       & (4U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmi2tl_auto_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset))) 
                     & (0U != (3U & __Vtemp_hf845382e__0[0U]))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_61.sv:175: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.dmiBypass.error.monitor: Assertion failed: 'A' channel Get address not aligned to size (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_61.sv", 175, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_61.sv:176:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_61.sv:177: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.dmiBypass.error.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_61.sv", 177, "");
        }
    }
    VL_EXTEND_WI(128,9, __Vtemp_hf845382e__1, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmi2tl_auto_out_a_bits_address));
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT___bar_auto_out_0_a_valid) 
                       & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmi2tl_auto_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset))) 
                     & (0U != (3U & __Vtemp_hf845382e__1[0U]))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_61.sv:181: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.dmiBypass.error.monitor: Assertion failed: 'A' channel PutFull address not aligned to size (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_61.sv", 181, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_61.sv:182:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_61.sv:183: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.dmiBypass.error.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_61.sv", 183, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__420(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__420\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_hf845382e__0;
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT___bar_auto_out_0_a_valid) 
                      & (1U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmi2tl_auto_out_a_bits_opcode))) 
                     & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_61.sv:187: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.dmiBypass.error.monitor: Assertion failed: 'A' channel carries PutPartial type which is unexpected using diplomatic parameters (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_61.sv", 187, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_61.sv:188:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_61.sv:189: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.dmiBypass.error.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_61.sv", 189, "");
        }
    }
    VL_EXTEND_WI(128,9, __Vtemp_hf845382e__0, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmi2tl_auto_out_a_bits_address));
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT___bar_auto_out_0_a_valid) 
                       & (1U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmi2tl_auto_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset))) 
                     & (0U != (3U & __Vtemp_hf845382e__0[0U]))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_61.sv:193: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.dmiBypass.error.monitor: Assertion failed: 'A' channel PutPartial address not aligned to size (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_61.sv", 193, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_61.sv:194:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_61.sv:195: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.dmiBypass.error.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_61.sv", 195, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__421(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__421\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_hf845382e__0;
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT___bar_auto_out_0_a_valid) 
                      & (2U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmi2tl_auto_out_a_bits_opcode))) 
                     & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_61.sv:199: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.dmiBypass.error.monitor: Assertion failed: 'A' channel carries Arithmetic type which is unexpected using diplomatic parameters (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_61.sv", 199, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_61.sv:200:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_61.sv:201: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.dmiBypass.error.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_61.sv", 201, "");
        }
    }
    VL_EXTEND_WI(128,9, __Vtemp_hf845382e__0, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmi2tl_auto_out_a_bits_address));
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT___bar_auto_out_0_a_valid) 
                       & (2U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmi2tl_auto_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset))) 
                     & (0U != (3U & __Vtemp_hf845382e__0[0U]))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_61.sv:205: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.dmiBypass.error.monitor: Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_61.sv", 205, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_61.sv:206:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_61.sv:207: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.dmiBypass.error.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_61.sv", 207, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__422(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__422\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_hf845382e__0;
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT___bar_auto_out_0_a_valid) 
                      & (3U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmi2tl_auto_out_a_bits_opcode))) 
                     & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_61.sv:211: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.dmiBypass.error.monitor: Assertion failed: 'A' channel carries Logical type which is unexpected using diplomatic parameters (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_61.sv", 211, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_61.sv:212:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_61.sv:213: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.dmiBypass.error.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_61.sv", 213, "");
        }
    }
    VL_EXTEND_WI(128,9, __Vtemp_hf845382e__0, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmi2tl_auto_out_a_bits_address));
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT___bar_auto_out_0_a_valid) 
                       & (3U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmi2tl_auto_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset))) 
                     & (0U != (3U & __Vtemp_hf845382e__0[0U]))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_61.sv:217: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.dmiBypass.error.monitor: Assertion failed: 'A' channel Logical address not aligned to size (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_61.sv", 217, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_61.sv:218:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_61.sv:219: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.dmiBypass.error.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_61.sv", 219, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__423(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__423\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_hf845382e__0;
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT___bar_auto_out_0_a_valid) 
                      & (5U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmi2tl_auto_out_a_bits_opcode))) 
                     & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_61.sv:223: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.dmiBypass.error.monitor: Assertion failed: 'A' channel carries Hint type which is unexpected using diplomatic parameters (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_61.sv", 223, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_61.sv:224:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_61.sv:225: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.dmiBypass.error.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_61.sv", 225, "");
        }
    }
    VL_EXTEND_WI(128,9, __Vtemp_hf845382e__0, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmi2tl_auto_out_a_bits_address));
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT___bar_auto_out_0_a_valid) 
                       & (5U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmi2tl_auto_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset))) 
                     & (0U != (3U & __Vtemp_hf845382e__0[0U]))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_61.sv:229: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.dmiBypass.error.monitor: Assertion failed: 'A' channel Hint address not aligned to size (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_61.sv", 229, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_61.sv:230:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_61.sv:231: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.dmiBypass.error.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_61.sv", 231, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__424(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__424\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__out_2_valid) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset))) 
                     & (7U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__out_2_bits_opcode))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_61.sv:235: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.dmiBypass.error.monitor: Assertion failed: 'D' channel has invalid opcode (connected at BusBypass.scala:33:14)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_61.sv", 235, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_61.sv:236:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_61.sv:237: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.dmiBypass.error.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_61.sv", 237, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__out_2_valid) 
                       & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__out_2_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset))) 
                     & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__out_2_bits_denied))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_61.sv:241: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.dmiBypass.error.monitor: Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at BusBypass.scala:33:14)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_61.sv", 241, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_61.sv:242:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_61.sv:243: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.dmiBypass.error.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_61.sv", 243, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__425(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__425\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__out_2_valid) 
                       & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__out_2_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset))) 
                     & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__out_2_bits_denied) 
                        & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__out_1_bits_opcode))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_61.sv:247: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.dmiBypass.error.monitor: Assertion failed: 'D' channel ReleaseAck is corrupt (connected at BusBypass.scala:33:14)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_61.sv", 247, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_61.sv:248:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_61.sv:249: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.dmiBypass.error.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_61.sv", 249, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__out_2_valid) 
                       & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__out_2_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset))) 
                     & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__out_2_bits_denied)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_61.sv:253: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.dmiBypass.error.monitor: Assertion failed: 'D' channel ReleaseAck is denied (connected at BusBypass.scala:33:14)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_61.sv", 253, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_61.sv:254:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_61.sv:255: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.dmiBypass.error.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_61.sv", 255, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__426(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__426\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__out_2_valid) 
                       & (4U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__out_2_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset))) 
                     & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__out_2_bits_denied))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_61.sv:259: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.dmiBypass.error.monitor: Assertion failed: 'D' channel Grant smaller than a beat (connected at BusBypass.scala:33:14)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_61.sv", 259, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_61.sv:260:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_61.sv:261: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.dmiBypass.error.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_61.sv", 261, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__out_2_valid) 
                       & (4U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__out_2_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset))) 
                     & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__out_2_bits_denied) 
                        & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__out_1_bits_opcode))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_61.sv:265: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.dmiBypass.error.monitor: Assertion failed: 'D' channel Grant is corrupt (connected at BusBypass.scala:33:14)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_61.sv", 265, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_61.sv:266:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_61.sv:267: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.dmiBypass.error.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_61.sv", 267, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__427(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__427\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__out_2_valid) 
                       & (5U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__out_2_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset))) 
                     & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__out_2_bits_denied))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_61.sv:271: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.dmiBypass.error.monitor: Assertion failed: 'D' channel GrantData smaller than a beat (connected at BusBypass.scala:33:14)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_61.sv", 271, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_61.sv:272:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_61.sv:273: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.dmiBypass.error.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_61.sv", 273, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__out_2_valid) 
                       & (5U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__out_2_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset))) 
                     & (~ ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__out_2_bits_denied)) 
                           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__out_2_bits_denied) 
                              & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__out_1_bits_opcode))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_61.sv:277: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.dmiBypass.error.monitor: Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at BusBypass.scala:33:14)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_61.sv", 277, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_61.sv:278:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_61.sv:279: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.dmiBypass.error.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_61.sv", 279, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__428(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__428\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__out_2_valid) 
                       & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__out_2_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset))) 
                     & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__out_2_bits_denied) 
                        & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__out_1_bits_opcode))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_61.sv:283: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.dmiBypass.error.monitor: Assertion failed: 'D' channel AccessAck is corrupt (connected at BusBypass.scala:33:14)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_61.sv", 283, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_61.sv:284:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_61.sv:285: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.dmiBypass.error.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_61.sv", 285, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__out_2_valid) 
                       & (1U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__out_2_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset))) 
                     & (~ ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__out_2_bits_denied)) 
                           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__out_2_bits_denied) 
                              & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__out_1_bits_opcode))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_61.sv:289: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.dmiBypass.error.monitor: Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at BusBypass.scala:33:14)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_61.sv", 289, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_61.sv:290:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_61.sv:291: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.dmiBypass.error.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_61.sv", 291, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__429(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__429\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__out_2_valid) 
                       & (2U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__out_2_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset))) 
                     & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__out_2_bits_denied) 
                        & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__out_1_bits_opcode))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_61.sv:295: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.dmiBypass.error.monitor: Assertion failed: 'D' channel HintAck is corrupt (connected at BusBypass.scala:33:14)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_61.sv", 295, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_61.sv:296:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_61.sv:297: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.dmiBypass.error.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_61.sv", 297, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__a_set) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset))) 
                     & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__inflight)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_61.sv:301: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.dmiBypass.error.monitor: Assertion failed: 'A' channel re-used a source ID (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_61.sv", 301, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_61.sv:302:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_61.sv:303: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.dmiBypass.error.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_61.sv", 303, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__430(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__430\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT___T_559) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset))) 
                     & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__inflight) 
                           | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT___bar_auto_out_0_a_valid)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_61.sv:307: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.dmiBypass.error.monitor: Assertion failed: 'D' channel acknowledged for nothing inflight (connected at BusBypass.scala:33:14)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_61.sv", 307, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_61.sv:308:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_61.sv:309: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.dmiBypass.error.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_61.sv", 309, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT___T_559) 
                       & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT___bar_auto_out_0_a_valid)) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset))) 
                     & (~ (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__out_2_bits_opcode) 
                            == ((0x17U >= (0x1fU & 
                                           ((IData)(3U) 
                                            * (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmi2tl_auto_out_a_bits_opcode))))
                                 ? (7U & (0x911240U 
                                          >> (0x1fU 
                                              & ((IData)(3U) 
                                                 * (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmi2tl_auto_out_a_bits_opcode)))))
                                 : 0U)) | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__out_2_bits_opcode) 
                                           == ((0x17U 
                                                >= 
                                                (0x1fU 
                                                 & ((IData)(3U) 
                                                    * (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmi2tl_auto_out_a_bits_opcode))))
                                                ? (7U 
                                                   & (0x951240U 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(3U) 
                                                          * (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmi2tl_auto_out_a_bits_opcode)))))
                                                : 0U))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_61.sv:313: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.dmiBypass.error.monitor: Assertion failed: 'D' channel contains improper opcode response (connected at BusBypass.scala:33:14)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_61.sv", 313, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_61.sv:314:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_61.sv:315: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.dmiBypass.error.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_61.sv", 315, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__431(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__431\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT___T_559) 
                       & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT___bar_auto_out_0_a_valid)) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset))) 
                     & (2U != ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__out_2_bits_denied) 
                               << 1U))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_61.sv:319: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.dmiBypass.error.monitor: Assertion failed: 'D' channel contains improper response size (connected at BusBypass.scala:33:14)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_61.sv", 319, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_61.sv:320:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_61.sv:321: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.dmiBypass.error.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_61.sv", 321, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT___T_559) 
                       & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT___bar_auto_out_0_a_valid))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset))) 
                     & (~ (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__out_2_bits_opcode) 
                            == ((0x17U >= (0x1fU & 
                                           ((IData)(3U) 
                                            * (7U & 
                                               ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__inflight_opcodes) 
                                                >> 1U)))))
                                 ? (7U & (0x911240U 
                                          >> (0x1fU 
                                              & ((IData)(3U) 
                                                 * 
                                                 (7U 
                                                  & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__inflight_opcodes) 
                                                     >> 1U))))))
                                 : 0U)) | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__out_2_bits_opcode) 
                                           == ((0x17U 
                                                >= 
                                                (0x1fU 
                                                 & ((IData)(3U) 
                                                    * 
                                                    (7U 
                                                     & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__inflight_opcodes) 
                                                        >> 1U)))))
                                                ? (7U 
                                                   & (0x951240U 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(3U) 
                                                          * 
                                                          (7U 
                                                           & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__inflight_opcodes) 
                                                              >> 1U))))))
                                                : 0U))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_61.sv:325: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.dmiBypass.error.monitor: Assertion failed: 'D' channel contains improper opcode response (connected at BusBypass.scala:33:14)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_61.sv", 325, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_61.sv:326:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_61.sv:327: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.dmiBypass.error.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_61.sv", 327, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__432(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__432\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT___T_559) 
                       & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT___bar_auto_out_0_a_valid))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset))) 
                     & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__out_2_bits_denied) 
                         << 1U) != (7U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__inflight_sizes) 
                                          >> 1U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_61.sv:331: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.dmiBypass.error.monitor: Assertion failed: 'D' channel contains improper response size (connected at BusBypass.scala:33:14)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_61.sv", 331, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_61.sv:332:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_61.sv:333: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.dmiBypass.error.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_61.sv", 333, "");
        }
    }
    if (VL_UNLIKELY((((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__out_2_valid) 
                        & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT___bar_auto_out_0_a_valid)) 
                       & (6U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__out_2_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset))) 
                     & (~ ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT___bar_auto_out_0_d_ready)) 
                           | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__in_a_ready)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_61.sv:337: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.dmiBypass.error.monitor: Assertion failed: ready check\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_61.sv", 337, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_61.sv:338:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_61.sv:339: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.dmiBypass.error.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_61.sv", 339, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__433(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__433\n"); );
    // Body
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset)) 
                           & (~ (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__inflight)) 
                                  | (0U == vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                                 | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__watchdog 
                                    < vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__plusarg_reader__DOT__myplus))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_61.sv:343: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.dmiBypass.error.monitor: Assertion failed: TileLink timeout expired (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_61.sv", 343, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_61.sv:344:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_61.sv:345: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.dmiBypass.error.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_61.sv", 345, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__out_2_valid) 
                      & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__out_2_bits_opcode))) 
                     & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_61.sv:349: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.dmiBypass.error.monitor: Assertion failed: 'D' channel acknowledged for nothing inflight (connected at BusBypass.scala:33:14)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_61.sv", 349, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_61.sv:350:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_61.sv:351: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.dmiBypass.error.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_61.sv", 351, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__434(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__434\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__out_2_valid) 
                       & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__out_2_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset))) 
                     & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__out_2_bits_denied)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_61.sv:355: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.dmiBypass.error.monitor: Assertion failed: 'D' channel contains improper response size (connected at BusBypass.scala:33:14)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_61.sv", 355, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_61.sv:356:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_61.sv:357: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.dmiBypass.error.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_61.sv", 357, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmiBypass_auto_node_out_out_a_valid) 
                      & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmi2tl_auto_out_a_bits_opcode))) 
                     & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:151: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.asource.monitor: Assertion failed: 'A' channel carries AcquireBlock type which is unexpected using diplomatic parameters (connected at Debug.scala:696:46)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv", 151, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv:152:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:153: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.asource.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv", 153, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__435(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__435\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmiBypass_auto_node_out_out_a_valid) 
                      & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmi2tl_auto_out_a_bits_opcode))) 
                     & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:157: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.asource.monitor: Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at Debug.scala:696:46)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv", 157, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv:158:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:159: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.asource.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv", 159, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmiBypass_auto_node_out_out_a_valid) 
                       & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmi2tl_auto_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset))) 
                     & (0U != (3U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmi2tl_auto_out_a_bits_address)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:163: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.asource.monitor: Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at Debug.scala:696:46)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv", 163, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv:164:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:165: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.asource.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv", 165, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__436(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__436\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmiBypass_auto_node_out_out_a_valid) 
                      & (7U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmi2tl_auto_out_a_bits_opcode))) 
                     & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:169: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.asource.monitor: Assertion failed: 'A' channel carries AcquirePerm type which is unexpected using diplomatic parameters (connected at Debug.scala:696:46)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv", 169, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv:170:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:171: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.asource.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv", 171, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmiBypass_auto_node_out_out_a_valid) 
                      & (7U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmi2tl_auto_out_a_bits_opcode))) 
                     & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:175: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.asource.monitor: Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at Debug.scala:696:46)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv", 175, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv:176:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:177: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.asource.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv", 177, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__437(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__437\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmiBypass_auto_node_out_out_a_valid) 
                       & (7U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmi2tl_auto_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset))) 
                     & (0U != (3U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmi2tl_auto_out_a_bits_address)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:181: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.asource.monitor: Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at Debug.scala:696:46)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv", 181, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv:182:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:183: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.asource.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv", 183, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmiBypass_auto_node_out_out_a_valid) 
                      & (7U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmi2tl_auto_out_a_bits_opcode))) 
                     & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:187: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.asource.monitor: Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at Debug.scala:696:46)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv", 187, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv:188:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:189: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.asource.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv", 189, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__438(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__438\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmiBypass_auto_node_out_out_a_valid) 
                       & (4U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmi2tl_auto_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset))) 
                     & (~ ((((((0U == (7U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmi2tl_auto_out_a_bits_address) 
                                             >> 6U))) 
                               | (0U == ((0x3eU & (8U 
                                                   ^ 
                                                   (0x1ffffffeU 
                                                    & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmi2tl_auto_out_a_bits_address) 
                                                       >> 3U)))) 
                                         | (1U & (~ 
                                                  ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmi2tl_auto_out_a_bits_address) 
                                                   >> 2U)))))) 
                              | (0xbU == (0x3fU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmi2tl_auto_out_a_bits_address) 
                                                   >> 3U)))) 
                             | (3U == (0xfU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmi2tl_auto_out_a_bits_address) 
                                               >> 5U)))) 
                            | (1U == (3U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmi2tl_auto_out_a_bits_address) 
                                            >> 7U)))) 
                           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmi2tl_auto_out_a_bits_address) 
                              >> 8U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:193: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.asource.monitor: Assertion failed: 'A' channel carries Get type which slave claims it can't support (connected at Debug.scala:696:46)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv", 193, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv:194:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:195: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.asource.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv", 195, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__439(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__439\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmiBypass_auto_node_out_out_a_valid) 
                       & (4U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmi2tl_auto_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset))) 
                     & (0U != (3U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmi2tl_auto_out_a_bits_address)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:199: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.asource.monitor: Assertion failed: 'A' channel Get address not aligned to size (connected at Debug.scala:696:46)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv", 199, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv:200:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:201: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.asource.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv", 201, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmiBypass_auto_node_out_out_a_valid) 
                       & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmi2tl_auto_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset))) 
                     & (~ ((((((0U == (7U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmi2tl_auto_out_a_bits_address) 
                                             >> 6U))) 
                               | (0U == ((0x3eU & (8U 
                                                   ^ 
                                                   (0x1ffffffeU 
                                                    & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmi2tl_auto_out_a_bits_address) 
                                                       >> 3U)))) 
                                         | (1U & (~ 
                                                  ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmi2tl_auto_out_a_bits_address) 
                                                   >> 2U)))))) 
                              | (0xbU == (0x3fU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmi2tl_auto_out_a_bits_address) 
                                                   >> 3U)))) 
                             | (3U == (0xfU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmi2tl_auto_out_a_bits_address) 
                                               >> 5U)))) 
                            | (1U == (3U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmi2tl_auto_out_a_bits_address) 
                                            >> 7U)))) 
                           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmi2tl_auto_out_a_bits_address) 
                              >> 8U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:205: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.asource.monitor: Assertion failed: 'A' channel carries PutFull type which is unexpected using diplomatic parameters (connected at Debug.scala:696:46)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv", 205, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv:206:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:207: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.asource.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv", 207, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__440(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__440\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmiBypass_auto_node_out_out_a_valid) 
                       & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmi2tl_auto_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset))) 
                     & (0U != (3U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmi2tl_auto_out_a_bits_address)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:211: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.asource.monitor: Assertion failed: 'A' channel PutFull address not aligned to size (connected at Debug.scala:696:46)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv", 211, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv:212:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:213: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.asource.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv", 213, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmiBypass_auto_node_out_out_a_valid) 
                      & (1U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmi2tl_auto_out_a_bits_opcode))) 
                     & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:217: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.asource.monitor: Assertion failed: 'A' channel carries PutPartial type which is unexpected using diplomatic parameters (connected at Debug.scala:696:46)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv", 217, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv:218:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:219: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.asource.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv", 219, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__441(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__441\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmiBypass_auto_node_out_out_a_valid) 
                       & (1U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmi2tl_auto_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset))) 
                     & (0U != (3U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmi2tl_auto_out_a_bits_address)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:223: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.asource.monitor: Assertion failed: 'A' channel PutPartial address not aligned to size (connected at Debug.scala:696:46)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv", 223, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv:224:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:225: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.asource.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv", 225, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmiBypass_auto_node_out_out_a_valid) 
                      & (2U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmi2tl_auto_out_a_bits_opcode))) 
                     & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:229: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.asource.monitor: Assertion failed: 'A' channel carries Arithmetic type which is unexpected using diplomatic parameters (connected at Debug.scala:696:46)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv", 229, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv:230:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:231: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.asource.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv", 231, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__442(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__442\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmiBypass_auto_node_out_out_a_valid) 
                       & (2U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmi2tl_auto_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset))) 
                     & (0U != (3U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmi2tl_auto_out_a_bits_address)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:235: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.asource.monitor: Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at Debug.scala:696:46)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv", 235, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv:236:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:237: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.asource.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv", 237, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmiBypass_auto_node_out_out_a_valid) 
                      & (3U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmi2tl_auto_out_a_bits_opcode))) 
                     & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:241: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.asource.monitor: Assertion failed: 'A' channel carries Logical type which is unexpected using diplomatic parameters (connected at Debug.scala:696:46)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv", 241, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv:242:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:243: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.asource.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv", 243, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__443(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__443\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmiBypass_auto_node_out_out_a_valid) 
                       & (3U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmi2tl_auto_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset))) 
                     & (0U != (3U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmi2tl_auto_out_a_bits_address)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:247: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.asource.monitor: Assertion failed: 'A' channel Logical address not aligned to size (connected at Debug.scala:696:46)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv", 247, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv:248:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:249: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.asource.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv", 249, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmiBypass_auto_node_out_out_a_valid) 
                      & (5U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmi2tl_auto_out_a_bits_opcode))) 
                     & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:253: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.asource.monitor: Assertion failed: 'A' channel carries Hint type which is unexpected using diplomatic parameters (connected at Debug.scala:696:46)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv", 253, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv:254:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:255: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.asource.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv", 255, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__444(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__444\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmiBypass_auto_node_out_out_a_valid) 
                       & (5U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmi2tl_auto_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset))) 
                     & (0U != (3U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmi2tl_auto_out_a_bits_address)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:259: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.asource.monitor: Assertion failed: 'A' channel Hint address not aligned to size (connected at Debug.scala:696:46)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv", 259, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv:260:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:261: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.asource.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv", 261, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT___io_deq_valid_output) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset))) 
                     & (0x70000000000ULL == (0x70000000000ULL 
                                             & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:265: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.asource.monitor: Assertion failed: 'D' channel has invalid opcode (connected at Debug.scala:696:46)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv", 265, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv:266:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:267: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.asource.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv", 267, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__445(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__445\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT___io_deq_valid_output) 
                      & (0x60800000000ULL == (0x70800000000ULL 
                                              & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg))) 
                     & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:271: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.asource.monitor: Assertion failed: 'D' channel ReleaseAck carries invalid source ID (connected at Debug.scala:696:46)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv", 271, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv:272:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:273: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.asource.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv", 273, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT___io_deq_valid_output) 
                      & (0x60000000000ULL == (0x72000000000ULL 
                                              & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg))) 
                     & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:277: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.asource.monitor: Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at Debug.scala:696:46)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv", 277, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv:278:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:279: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.asource.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv", 279, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__446(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__446\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT___io_deq_valid_output) 
                       & (0x60000000000ULL == (0x70000000000ULL 
                                               & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset))) 
                     & (0U != (3U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                             >> 0x26U))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:283: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.asource.monitor: Assertion failed: 'D' channel ReleaseeAck carries invalid param (connected at Debug.scala:696:46)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv", 283, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv:284:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:285: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.asource.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv", 285, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT___io_deq_valid_output) 
                      & (0x60000000001ULL == (0x70000000001ULL 
                                              & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg))) 
                     & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:289: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.asource.monitor: Assertion failed: 'D' channel ReleaseAck is corrupt (connected at Debug.scala:696:46)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv", 289, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv:290:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:291: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.asource.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv", 291, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__447(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__447\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT___io_deq_valid_output) 
                      & (0x60200000000ULL == (0x70200000000ULL 
                                              & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg))) 
                     & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:295: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.asource.monitor: Assertion failed: 'D' channel ReleaseAck is denied (connected at Debug.scala:696:46)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv", 295, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv:296:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:297: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.asource.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv", 297, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT___io_deq_valid_output) 
                      & (0x40800000000ULL == (0x70800000000ULL 
                                              & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg))) 
                     & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:301: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.asource.monitor: Assertion failed: 'D' channel Grant carries invalid source ID (connected at Debug.scala:696:46)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv", 301, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv:302:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:303: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.asource.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv", 303, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__448(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__448\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT___io_deq_valid_output) 
                      & (0x40000000000ULL == (0x70000000000ULL 
                                              & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg))) 
                     & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:307: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.asource.monitor: Assertion failed: 'D' channel Grant carries invalid sink ID (connected at Debug.scala:696:46)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv", 307, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv:308:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:309: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.asource.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv", 309, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT___io_deq_valid_output) 
                      & (0x40000000000ULL == (0x72000000000ULL 
                                              & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg))) 
                     & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:313: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.asource.monitor: Assertion failed: 'D' channel Grant smaller than a beat (connected at Debug.scala:696:46)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv", 313, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv:314:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:315: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.asource.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv", 315, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__449(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__449\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT___io_deq_valid_output) 
                      & (0x4c000000000ULL == (0x7c000000000ULL 
                                              & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg))) 
                     & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:319: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.asource.monitor: Assertion failed: 'D' channel Grant carries invalid cap param (connected at Debug.scala:696:46)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv", 319, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv:320:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:321: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.asource.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv", 321, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT___io_deq_valid_output) 
                      & (0x48000000000ULL == (0x7c000000000ULL 
                                              & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg))) 
                     & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:325: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.asource.monitor: Assertion failed: 'D' channel Grant carries toN param (connected at Debug.scala:696:46)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv", 325, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv:326:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:327: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.asource.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv", 327, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__450(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__450\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT___io_deq_valid_output) 
                      & (0x40000000001ULL == (0x70000000001ULL 
                                              & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg))) 
                     & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:331: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.asource.monitor: Assertion failed: 'D' channel Grant is corrupt (connected at Debug.scala:696:46)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv", 331, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv:332:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:333: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.asource.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv", 333, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT___io_deq_valid_output) 
                      & (0x40200000000ULL == (0x70200000000ULL 
                                              & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg))) 
                     & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:337: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.asource.monitor: Assertion failed: 'D' channel Grant is denied (connected at Debug.scala:696:46)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv", 337, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv:338:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:339: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.asource.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv", 339, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__451(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__451\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT___io_deq_valid_output) 
                      & (0x50800000000ULL == (0x70800000000ULL 
                                              & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg))) 
                     & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:343: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.asource.monitor: Assertion failed: 'D' channel GrantData carries invalid source ID (connected at Debug.scala:696:46)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv", 343, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv:344:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:345: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.asource.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv", 345, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT___io_deq_valid_output) 
                      & (0x50000000000ULL == (0x70000000000ULL 
                                              & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg))) 
                     & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:349: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.asource.monitor: Assertion failed: 'D' channel GrantData carries invalid sink ID (connected at Debug.scala:696:46)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv", 349, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv:350:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:351: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.asource.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv", 351, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__452(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__452\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT___io_deq_valid_output) 
                      & (0x50000000000ULL == (0x72000000000ULL 
                                              & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg))) 
                     & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:355: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.asource.monitor: Assertion failed: 'D' channel GrantData smaller than a beat (connected at Debug.scala:696:46)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv", 355, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv:356:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:357: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.asource.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv", 357, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT___io_deq_valid_output) 
                      & (0x5c000000000ULL == (0x7c000000000ULL 
                                              & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg))) 
                     & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:361: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.asource.monitor: Assertion failed: 'D' channel GrantData carries invalid cap param (connected at Debug.scala:696:46)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv", 361, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv:362:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:363: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.asource.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv", 363, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__453(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__453\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT___io_deq_valid_output) 
                      & (0x58000000000ULL == (0x7c000000000ULL 
                                              & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg))) 
                     & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:367: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.asource.monitor: Assertion failed: 'D' channel GrantData carries toN param (connected at Debug.scala:696:46)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv", 367, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv:368:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:369: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.asource.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv", 369, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT___io_deq_valid_output) 
                       & (0x50000000000ULL == (0x70000000000ULL 
                                               & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset))) 
                     & (~ (IData)((0x200000000ULL != 
                                   (0x200000001ULL 
                                    & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:373: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.asource.monitor: Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at Debug.scala:696:46)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv", 373, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv:374:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:375: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.asource.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv", 375, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__454(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__454\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT___io_deq_valid_output) 
                      & (0x50200000000ULL == (0x70200000000ULL 
                                              & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg))) 
                     & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:379: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.asource.monitor: Assertion failed: 'D' channel GrantData is denied (connected at Debug.scala:696:46)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv", 379, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv:380:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:381: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.asource.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv", 381, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT___io_deq_valid_output) 
                      & (0x800000000ULL == (0x70800000000ULL 
                                            & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg))) 
                     & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:385: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.asource.monitor: Assertion failed: 'D' channel AccessAck carries invalid source ID (connected at Debug.scala:696:46)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv", 385, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv:386:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:387: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.asource.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv", 387, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__455(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__455\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT___io_deq_valid_output) 
                       & (0ULL == (0x70000000000ULL 
                                   & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset))) 
                     & (0U != (3U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                             >> 0x26U))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:391: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.asource.monitor: Assertion failed: 'D' channel AccessAck carries invalid param (connected at Debug.scala:696:46)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv", 391, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv:392:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:393: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.asource.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv", 393, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT___io_deq_valid_output) 
                      & (1ULL == (0x70000000001ULL 
                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg))) 
                     & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:397: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.asource.monitor: Assertion failed: 'D' channel AccessAck is corrupt (connected at Debug.scala:696:46)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv", 397, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv:398:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:399: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.asource.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv", 399, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__456(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__456\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT___io_deq_valid_output) 
                      & (0x200000000ULL == (0x70200000000ULL 
                                            & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg))) 
                     & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:403: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.asource.monitor: Assertion failed: 'D' channel AccessAck is denied (connected at Debug.scala:696:46)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv", 403, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv:404:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:405: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.asource.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv", 405, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT___io_deq_valid_output) 
                      & (0x10800000000ULL == (0x70800000000ULL 
                                              & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg))) 
                     & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:409: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.asource.monitor: Assertion failed: 'D' channel AccessAckData carries invalid source ID (connected at Debug.scala:696:46)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv", 409, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv:410:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:411: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.asource.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv", 411, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__457(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__457\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT___io_deq_valid_output) 
                       & (0x10000000000ULL == (0x70000000000ULL 
                                               & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset))) 
                     & (0U != (3U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                             >> 0x26U))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:415: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.asource.monitor: Assertion failed: 'D' channel AccessAckData carries invalid param (connected at Debug.scala:696:46)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv", 415, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv:416:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:417: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.asource.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv", 417, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT___io_deq_valid_output) 
                       & (0x10000000000ULL == (0x70000000000ULL 
                                               & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset))) 
                     & (~ (IData)((0x200000000ULL != 
                                   (0x200000001ULL 
                                    & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:421: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.asource.monitor: Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at Debug.scala:696:46)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv", 421, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv:422:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:423: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.asource.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv", 423, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__458(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__458\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT___io_deq_valid_output) 
                      & (0x10200000000ULL == (0x70200000000ULL 
                                              & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg))) 
                     & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:427: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.asource.monitor: Assertion failed: 'D' channel AccessAckData is denied (connected at Debug.scala:696:46)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv", 427, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv:428:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:429: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.asource.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv", 429, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT___io_deq_valid_output) 
                      & (0x20800000000ULL == (0x70800000000ULL 
                                              & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg))) 
                     & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:433: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.asource.monitor: Assertion failed: 'D' channel HintAck carries invalid source ID (connected at Debug.scala:696:46)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv", 433, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv:434:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:435: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.asource.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv", 435, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__459(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__459\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT___io_deq_valid_output) 
                       & (0x20000000000ULL == (0x70000000000ULL 
                                               & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset))) 
                     & (0U != (3U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                             >> 0x26U))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:439: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.asource.monitor: Assertion failed: 'D' channel HintAck carries invalid param (connected at Debug.scala:696:46)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv", 439, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv:440:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:441: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.asource.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv", 441, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT___io_deq_valid_output) 
                      & (0x20000000001ULL == (0x70000000001ULL 
                                              & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg))) 
                     & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:445: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.asource.monitor: Assertion failed: 'D' channel HintAck is corrupt (connected at Debug.scala:696:46)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv", 445, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv:446:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:447: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.asource.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv", 447, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__460(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__460\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT___io_deq_valid_output) 
                      & (0x20200000000ULL == (0x70200000000ULL 
                                              & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg))) 
                     & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:451: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.asource.monitor: Assertion failed: 'D' channel HintAck is denied (connected at Debug.scala:696:46)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv", 451, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv:452:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:453: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.asource.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv", 453, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__a_set) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset))) 
                     & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__inflight)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:457: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.asource.monitor: Assertion failed: 'A' channel re-used a source ID (connected at Debug.scala:696:46)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv", 457, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv:458:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:459: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.asource.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv", 459, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__461(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__461\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT___T_850) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset))) 
                     & (~ (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__inflight) 
                            >> (1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                              >> 0x23U)))) 
                           | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__same_cycle_resp)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:463: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.asource.monitor: Assertion failed: 'D' channel acknowledged for nothing inflight (connected at Debug.scala:696:46)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv", 463, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv:464:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:465: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.asource.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv", 465, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT___T_850) 
                       & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__same_cycle_resp)) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset))) 
                     & (~ (((7U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                           >> 0x28U))) 
                            == ((0x17U >= (0x1fU & 
                                           ((IData)(3U) 
                                            * (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmi2tl_auto_out_a_bits_opcode))))
                                 ? (7U & (0x911240U 
                                          >> (0x1fU 
                                              & ((IData)(3U) 
                                                 * (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmi2tl_auto_out_a_bits_opcode)))))
                                 : 0U)) | ((7U & (IData)(
                                                         (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                          >> 0x28U))) 
                                           == ((0x17U 
                                                >= 
                                                (0x1fU 
                                                 & ((IData)(3U) 
                                                    * (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmi2tl_auto_out_a_bits_opcode))))
                                                ? (7U 
                                                   & (0x951240U 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(3U) 
                                                          * (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmi2tl_auto_out_a_bits_opcode)))))
                                                : 0U))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:469: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.asource.monitor: Assertion failed: 'D' channel contains improper opcode response (connected at Debug.scala:696:46)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv", 469, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv:470:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:471: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.asource.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv", 471, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__462(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__462\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT___T_850) 
                       & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__same_cycle_resp)) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset))) 
                     & (2U != (3U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                             >> 0x24U))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:475: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.asource.monitor: Assertion failed: 'D' channel contains improper response size (connected at Debug.scala:696:46)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv", 475, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv:476:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:477: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.asource.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv", 477, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT___T_850) 
                       & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__same_cycle_resp))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset))) 
                     & (~ (((7U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                           >> 0x28U))) 
                            == ((0x17U >= (0x1fU & 
                                           ((IData)(3U) 
                                            * (7U & 
                                               (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__inflight_opcodes) 
                                                 >> 
                                                 (4U 
                                                  & ((IData)(
                                                             (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                              >> 0x23U)) 
                                                     << 2U))) 
                                                >> 1U)))))
                                 ? (7U & (0x911240U 
                                          >> (0x1fU 
                                              & ((IData)(3U) 
                                                 * 
                                                 (7U 
                                                  & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__inflight_opcodes) 
                                                      >> 
                                                      (4U 
                                                       & ((IData)(
                                                                  (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                                   >> 0x23U)) 
                                                          << 2U))) 
                                                     >> 1U))))))
                                 : 0U)) | ((7U & (IData)(
                                                         (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                          >> 0x28U))) 
                                           == ((0x17U 
                                                >= 
                                                (0x1fU 
                                                 & ((IData)(3U) 
                                                    * 
                                                    (7U 
                                                     & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__inflight_opcodes) 
                                                         >> 
                                                         (4U 
                                                          & ((IData)(
                                                                     (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                                      >> 0x23U)) 
                                                             << 2U))) 
                                                        >> 1U)))))
                                                ? (7U 
                                                   & (0x951240U 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(3U) 
                                                          * 
                                                          (7U 
                                                           & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__inflight_opcodes) 
                                                               >> 
                                                               (4U 
                                                                & ((IData)(
                                                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                                            >> 0x23U)) 
                                                                   << 2U))) 
                                                              >> 1U))))))
                                                : 0U))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:481: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.asource.monitor: Assertion failed: 'D' channel contains improper opcode response (connected at Debug.scala:696:46)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv", 481, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv:482:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:483: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.asource.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv", 483, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__463(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__463\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT___T_850) 
                       & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__same_cycle_resp))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset))) 
                     & ((3U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                       >> 0x24U))) 
                        != (7U & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__inflight_sizes) 
                                   >> (4U & ((IData)(
                                                     (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                      >> 0x23U)) 
                                             << 2U))) 
                                  >> 1U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:487: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.asource.monitor: Assertion failed: 'D' channel contains improper response size (connected at Debug.scala:696:46)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv", 487, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv:488:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:489: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.asource.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv", 489, "");
        }
    }
    if (VL_UNLIKELY(((((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT___io_deq_valid_output) 
                         & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmiBypass_auto_node_out_out_a_valid)) 
                        & (~ (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                      >> 0x23U)))) 
                       & (6U != (7U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                               >> 0x28U))))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset))) 
                     & (~ ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmiBypass_auto_node_out_out_d_ready)) 
                           | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__x1_a_source__DOT___io_enq_ready_output)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:493: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.asource.monitor: Assertion failed: ready check\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv", 493, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv:494:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:495: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.asource.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv", 495, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__464(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__464\n"); );
    // Body
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset)) 
                           & (~ (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmiBypass_auto_node_out_out_a_valid) 
                                  != (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT___io_deq_valid_output) 
                                       & (6U != (7U 
                                                 & (IData)(
                                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                            >> 0x28U))))) 
                                      & (~ (IData)(
                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                    >> 0x23U))))) 
                                 | (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmiBypass_auto_node_out_out_a_valid)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:499: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.asource.monitor: Assertion failed: 'A' and 'D' concurrent, despite minlatency 3 (connected at Debug.scala:696:46)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv", 499, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv:500:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:501: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.asource.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv", 501, "");
        }
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset)) 
                           & (~ (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__inflight)) 
                                  | (0U == vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                                 | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__watchdog 
                                    < vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__plusarg_reader__DOT__myplus))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:505: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.asource.monitor: Assertion failed: TileLink timeout expired (connected at Debug.scala:696:46)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv", 505, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv:506:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:507: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.asource.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv", 507, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__465(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__465\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT___io_deq_valid_output) 
                      & (0x60000000000ULL == (0x70000000000ULL 
                                              & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg))) 
                     & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:511: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.asource.monitor: Assertion failed: 'D' channel acknowledged for nothing inflight (connected at Debug.scala:696:46)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv", 511, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv:512:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:513: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.asource.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv", 513, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT___io_deq_valid_output) 
                       & (0x60000000000ULL == (0x70000000000ULL 
                                               & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset))) 
                     & (0U != (3U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                             >> 0x24U))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:517: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.asource.monitor: Assertion failed: 'D' channel contains improper response size (connected at Debug.scala:696:46)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv", 517, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv:518:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:519: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.asource.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_62.sv", 519, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__466(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__466\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmiXbar_auto_out_0_a_valid) 
                      & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmi2tl_auto_out_a_bits_opcode))) 
                     & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_60.sv:151: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.dmiBypass.bar.monitor: Assertion failed: 'A' channel carries AcquireBlock type which is unexpected using diplomatic parameters (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_60.sv", 151, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_60.sv:152:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_60.sv:153: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.dmiBypass.bar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_60.sv", 153, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmiXbar_auto_out_0_a_valid) 
                      & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmi2tl_auto_out_a_bits_opcode))) 
                     & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_60.sv:157: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.dmiBypass.bar.monitor: Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_60.sv", 157, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_60.sv:158:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_60.sv:159: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.dmiBypass.bar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_60.sv", 159, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__467(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__467\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmiXbar_auto_out_0_a_valid) 
                       & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmi2tl_auto_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset))) 
                     & (0U != (3U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmi2tl_auto_out_a_bits_address)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_60.sv:163: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.dmiBypass.bar.monitor: Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_60.sv", 163, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_60.sv:164:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_60.sv:165: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.dmiBypass.bar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_60.sv", 165, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmiXbar_auto_out_0_a_valid) 
                      & (7U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmi2tl_auto_out_a_bits_opcode))) 
                     & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_60.sv:169: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.dmiBypass.bar.monitor: Assertion failed: 'A' channel carries AcquirePerm type which is unexpected using diplomatic parameters (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_60.sv", 169, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_60.sv:170:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_60.sv:171: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.dmiBypass.bar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_60.sv", 171, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__468(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__468\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmiXbar_auto_out_0_a_valid) 
                      & (7U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmi2tl_auto_out_a_bits_opcode))) 
                     & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_60.sv:175: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.dmiBypass.bar.monitor: Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_60.sv", 175, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_60.sv:176:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_60.sv:177: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.dmiBypass.bar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_60.sv", 177, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmiXbar_auto_out_0_a_valid) 
                       & (7U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmi2tl_auto_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset))) 
                     & (0U != (3U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmi2tl_auto_out_a_bits_address)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_60.sv:181: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.dmiBypass.bar.monitor: Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_60.sv", 181, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_60.sv:182:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_60.sv:183: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.dmiBypass.bar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_60.sv", 183, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__469(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__469\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmiXbar_auto_out_0_a_valid) 
                      & (7U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmi2tl_auto_out_a_bits_opcode))) 
                     & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_60.sv:187: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.dmiBypass.bar.monitor: Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_60.sv", 187, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_60.sv:188:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_60.sv:189: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.dmiBypass.bar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_60.sv", 189, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmiXbar_auto_out_0_a_valid) 
                       & (4U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmi2tl_auto_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset))) 
                     & (~ ((((((0U == (7U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmi2tl_auto_out_a_bits_address) 
                                             >> 6U))) 
                               | (0U == ((0x3eU & (8U 
                                                   ^ 
                                                   (0x1ffffffeU 
                                                    & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmi2tl_auto_out_a_bits_address) 
                                                       >> 3U)))) 
                                         | (1U & (~ 
                                                  ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmi2tl_auto_out_a_bits_address) 
                                                   >> 2U)))))) 
                              | (0xbU == (0x3fU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmi2tl_auto_out_a_bits_address) 
                                                   >> 3U)))) 
                             | (3U == (0xfU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmi2tl_auto_out_a_bits_address) 
                                               >> 5U)))) 
                            | (1U == (3U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmi2tl_auto_out_a_bits_address) 
                                            >> 7U)))) 
                           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmi2tl_auto_out_a_bits_address) 
                              >> 8U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_60.sv:193: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.dmiBypass.bar.monitor: Assertion failed: 'A' channel carries Get type which slave claims it can't support (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_60.sv", 193, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_60.sv:194:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_60.sv:195: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.dmiBypass.bar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_60.sv", 195, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__470(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__470\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmiXbar_auto_out_0_a_valid) 
                       & (4U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmi2tl_auto_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset))) 
                     & (0U != (3U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmi2tl_auto_out_a_bits_address)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_60.sv:199: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.dmiBypass.bar.monitor: Assertion failed: 'A' channel Get address not aligned to size (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_60.sv", 199, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_60.sv:200:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_60.sv:201: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.dmiBypass.bar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_60.sv", 201, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmiXbar_auto_out_0_a_valid) 
                       & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmi2tl_auto_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset))) 
                     & (~ ((((((0U == (7U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmi2tl_auto_out_a_bits_address) 
                                             >> 6U))) 
                               | (0U == ((0x3eU & (8U 
                                                   ^ 
                                                   (0x1ffffffeU 
                                                    & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmi2tl_auto_out_a_bits_address) 
                                                       >> 3U)))) 
                                         | (1U & (~ 
                                                  ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmi2tl_auto_out_a_bits_address) 
                                                   >> 2U)))))) 
                              | (0xbU == (0x3fU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmi2tl_auto_out_a_bits_address) 
                                                   >> 3U)))) 
                             | (3U == (0xfU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmi2tl_auto_out_a_bits_address) 
                                               >> 5U)))) 
                            | (1U == (3U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmi2tl_auto_out_a_bits_address) 
                                            >> 7U)))) 
                           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmi2tl_auto_out_a_bits_address) 
                              >> 8U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_60.sv:205: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.dmiBypass.bar.monitor: Assertion failed: 'A' channel carries PutFull type which is unexpected using diplomatic parameters (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_60.sv", 205, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_60.sv:206:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_60.sv:207: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.dmiBypass.bar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_60.sv", 207, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__471(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__471\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmiXbar_auto_out_0_a_valid) 
                       & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmi2tl_auto_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset))) 
                     & (0U != (3U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmi2tl_auto_out_a_bits_address)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_60.sv:211: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.dmiBypass.bar.monitor: Assertion failed: 'A' channel PutFull address not aligned to size (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_60.sv", 211, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_60.sv:212:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_60.sv:213: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.dmiBypass.bar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_60.sv", 213, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmiXbar_auto_out_0_a_valid) 
                      & (1U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmi2tl_auto_out_a_bits_opcode))) 
                     & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_60.sv:217: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.dmiBypass.bar.monitor: Assertion failed: 'A' channel carries PutPartial type which is unexpected using diplomatic parameters (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_60.sv", 217, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_60.sv:218:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_60.sv:219: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.dmiBypass.bar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_60.sv", 219, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__472(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__472\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmiXbar_auto_out_0_a_valid) 
                       & (1U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmi2tl_auto_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset))) 
                     & (0U != (3U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmi2tl_auto_out_a_bits_address)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_60.sv:223: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.dmiBypass.bar.monitor: Assertion failed: 'A' channel PutPartial address not aligned to size (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_60.sv", 223, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_60.sv:224:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_60.sv:225: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.dmiBypass.bar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_60.sv", 225, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmiXbar_auto_out_0_a_valid) 
                      & (2U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmi2tl_auto_out_a_bits_opcode))) 
                     & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_60.sv:229: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.dmiBypass.bar.monitor: Assertion failed: 'A' channel carries Arithmetic type which is unexpected using diplomatic parameters (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_60.sv", 229, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_60.sv:230:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_60.sv:231: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.dmiBypass.bar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_60.sv", 231, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__473(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__473\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmiXbar_auto_out_0_a_valid) 
                       & (2U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmi2tl_auto_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset))) 
                     & (0U != (3U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmi2tl_auto_out_a_bits_address)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_60.sv:235: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.dmiBypass.bar.monitor: Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_60.sv", 235, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_60.sv:236:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_60.sv:237: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.dmiBypass.bar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_60.sv", 237, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmiXbar_auto_out_0_a_valid) 
                      & (3U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmi2tl_auto_out_a_bits_opcode))) 
                     & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_60.sv:241: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.dmiBypass.bar.monitor: Assertion failed: 'A' channel carries Logical type which is unexpected using diplomatic parameters (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_60.sv", 241, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_60.sv:242:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_60.sv:243: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.dmiBypass.bar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_60.sv", 243, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__474(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__474\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmiXbar_auto_out_0_a_valid) 
                       & (3U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmi2tl_auto_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset))) 
                     & (0U != (3U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmi2tl_auto_out_a_bits_address)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_60.sv:247: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.dmiBypass.bar.monitor: Assertion failed: 'A' channel Logical address not aligned to size (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_60.sv", 247, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_60.sv:248:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_60.sv:249: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.dmiBypass.bar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_60.sv", 249, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmiXbar_auto_out_0_a_valid) 
                      & (5U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmi2tl_auto_out_a_bits_opcode))) 
                     & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_60.sv:253: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.dmiBypass.bar.monitor: Assertion failed: 'A' channel carries Hint type which is unexpected using diplomatic parameters (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_60.sv", 253, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_60.sv:254:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_60.sv:255: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.dmiBypass.bar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_60.sv", 255, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__475(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__475\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmiXbar_auto_out_0_a_valid) 
                       & (5U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmi2tl_auto_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset))) 
                     & (0U != (3U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmi2tl_auto_out_a_bits_address)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_60.sv:259: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.dmiBypass.bar.monitor: Assertion failed: 'A' channel Hint address not aligned to size (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_60.sv", 259, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_60.sv:260:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_60.sv:261: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.dmiBypass.bar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_60.sv", 261, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__in_d_valid) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset))) 
                     & (7U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__in_d_bits_opcode))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_60.sv:265: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.dmiBypass.bar.monitor: Assertion failed: 'D' channel has invalid opcode (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_60.sv", 265, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_60.sv:266:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_60.sv:267: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.dmiBypass.bar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_60.sv", 267, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__476(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__476\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__in_d_valid) 
                       & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__in_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset))) 
                     & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT____Vcellinp__monitor__io_in_d_bits_source)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_60.sv:271: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.dmiBypass.bar.monitor: Assertion failed: 'D' channel ReleaseAck carries invalid source ID (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_60.sv", 271, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_60.sv:272:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_60.sv:273: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.dmiBypass.bar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_60.sv", 273, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__in_d_valid) 
                       & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__in_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset))) 
                     & (~ (1U & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__bypass)
                                   ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__out_2_bits_denied) 
                                      << 1U) : (IData)(
                                                       (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                        >> 0x24U))) 
                                 >> 1U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_60.sv:277: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.dmiBypass.bar.monitor: Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_60.sv", 277, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_60.sv:278:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_60.sv:279: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.dmiBypass.bar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_60.sv", 279, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__477(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__477\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__in_d_valid) 
                       & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__in_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset))) 
                     & (0U != ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__bypass)
                                ? 0U : (3U & (IData)(
                                                     (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                      >> 0x26U)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_60.sv:283: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.dmiBypass.bar.monitor: Assertion failed: 'D' channel ReleaseeAck carries invalid param (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_60.sv", 283, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_60.sv:284:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_60.sv:285: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.dmiBypass.bar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_60.sv", 285, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__in_d_valid) 
                       & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__in_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset))) 
                     & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__bypass)
                         ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__out_2_bits_denied) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__out_1_bits_opcode))
                         : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_60.sv:289: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.dmiBypass.bar.monitor: Assertion failed: 'D' channel ReleaseAck is corrupt (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_60.sv", 289, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_60.sv:290:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_60.sv:291: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.dmiBypass.bar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_60.sv", 291, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__478(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__478\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__in_d_valid) 
                       & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__in_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset))) 
                     & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__bypass)
                         ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__out_2_bits_denied)
                         : (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                    >> 0x21U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_60.sv:295: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.dmiBypass.bar.monitor: Assertion failed: 'D' channel ReleaseAck is denied (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_60.sv", 295, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_60.sv:296:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_60.sv:297: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.dmiBypass.bar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_60.sv", 297, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__in_d_valid) 
                       & (4U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__in_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset))) 
                     & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT____Vcellinp__monitor__io_in_d_bits_source)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_60.sv:301: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.dmiBypass.bar.monitor: Assertion failed: 'D' channel Grant carries invalid source ID (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_60.sv", 301, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_60.sv:302:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_60.sv:303: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.dmiBypass.bar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_60.sv", 303, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__479(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__479\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__in_d_valid) 
                      & (4U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__in_d_bits_opcode))) 
                     & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_60.sv:307: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.dmiBypass.bar.monitor: Assertion failed: 'D' channel Grant carries invalid sink ID (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_60.sv", 307, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_60.sv:308:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_60.sv:309: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.dmiBypass.bar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_60.sv", 309, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__in_d_valid) 
                       & (4U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__in_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset))) 
                     & (~ (1U & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__bypass)
                                   ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__out_2_bits_denied) 
                                      << 1U) : (IData)(
                                                       (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                        >> 0x24U))) 
                                 >> 1U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_60.sv:313: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.dmiBypass.bar.monitor: Assertion failed: 'D' channel Grant smaller than a beat (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_60.sv", 313, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_60.sv:314:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_60.sv:315: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.dmiBypass.bar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_60.sv", 315, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__480(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__480\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__in_d_valid) 
                       & (4U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__in_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset))) 
                     & (3U == ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__bypass)
                                ? 0U : (3U & (IData)(
                                                     (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                      >> 0x26U)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_60.sv:319: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.dmiBypass.bar.monitor: Assertion failed: 'D' channel Grant carries invalid cap param (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_60.sv", 319, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_60.sv:320:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_60.sv:321: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.dmiBypass.bar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_60.sv", 321, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__in_d_valid) 
                       & (4U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__in_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset))) 
                     & (2U == ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__bypass)
                                ? 0U : (3U & (IData)(
                                                     (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                      >> 0x26U)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_60.sv:325: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.dmiBypass.bar.monitor: Assertion failed: 'D' channel Grant carries toN param (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_60.sv", 325, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_60.sv:326:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_60.sv:327: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.dmiBypass.bar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_60.sv", 327, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__481(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__481\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__in_d_valid) 
                       & (4U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__in_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset))) 
                     & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__bypass)
                         ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__out_2_bits_denied) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__out_1_bits_opcode))
                         : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_60.sv:331: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.dmiBypass.bar.monitor: Assertion failed: 'D' channel Grant is corrupt (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_60.sv", 331, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_60.sv:332:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_60.sv:333: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.dmiBypass.bar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_60.sv", 333, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__in_d_valid) 
                       & (5U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__in_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset))) 
                     & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT____Vcellinp__monitor__io_in_d_bits_source)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_60.sv:337: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.dmiBypass.bar.monitor: Assertion failed: 'D' channel GrantData carries invalid source ID (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_60.sv", 337, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_60.sv:338:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_60.sv:339: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.dmiBypass.bar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_60.sv", 339, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__482(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__482\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__in_d_valid) 
                      & (5U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__in_d_bits_opcode))) 
                     & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_60.sv:343: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.dmiBypass.bar.monitor: Assertion failed: 'D' channel GrantData carries invalid sink ID (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_60.sv", 343, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_60.sv:344:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_60.sv:345: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.dmiBypass.bar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_60.sv", 345, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__in_d_valid) 
                       & (5U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__in_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset))) 
                     & (~ (1U & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__bypass)
                                   ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__out_2_bits_denied) 
                                      << 1U) : (IData)(
                                                       (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                        >> 0x24U))) 
                                 >> 1U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_60.sv:349: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.dmiBypass.bar.monitor: Assertion failed: 'D' channel GrantData smaller than a beat (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_60.sv", 349, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_60.sv:350:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_60.sv:351: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.dmiBypass.bar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_60.sv", 351, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__483(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__483\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__in_d_valid) 
                       & (5U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__in_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset))) 
                     & (3U == ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__bypass)
                                ? 0U : (3U & (IData)(
                                                     (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                      >> 0x26U)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_60.sv:355: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.dmiBypass.bar.monitor: Assertion failed: 'D' channel GrantData carries invalid cap param (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_60.sv", 355, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_60.sv:356:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_60.sv:357: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.dmiBypass.bar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_60.sv", 357, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__in_d_valid) 
                       & (5U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__in_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset))) 
                     & (2U == ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__bypass)
                                ? 0U : (3U & (IData)(
                                                     (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                      >> 0x26U)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_60.sv:361: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.dmiBypass.bar.monitor: Assertion failed: 'D' channel GrantData carries toN param (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_60.sv", 361, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_60.sv:362:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_60.sv:363: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.dmiBypass.bar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_60.sv", 363, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__484(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__484\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__in_d_valid) 
                       & (5U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__in_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset))) 
                     & (~ ((~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__bypass)
                                ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__out_2_bits_denied)
                                : (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                           >> 0x21U)))) 
                           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__bypass)
                               ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__out_2_bits_denied) 
                                  & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__out_1_bits_opcode))
                               : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_60.sv:367: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.dmiBypass.bar.monitor: Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_60.sv", 367, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_60.sv:368:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_60.sv:369: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.dmiBypass.bar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_60.sv", 369, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__in_d_valid) 
                       & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__in_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset))) 
                     & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT____Vcellinp__monitor__io_in_d_bits_source)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_60.sv:373: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.dmiBypass.bar.monitor: Assertion failed: 'D' channel AccessAck carries invalid source ID (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_60.sv", 373, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_60.sv:374:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_60.sv:375: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.dmiBypass.bar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_60.sv", 375, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__485(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__485\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__in_d_valid) 
                       & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__in_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset))) 
                     & (0U != ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__bypass)
                                ? 0U : (3U & (IData)(
                                                     (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                      >> 0x26U)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_60.sv:379: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.dmiBypass.bar.monitor: Assertion failed: 'D' channel AccessAck carries invalid param (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_60.sv", 379, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_60.sv:380:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_60.sv:381: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.dmiBypass.bar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_60.sv", 381, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__in_d_valid) 
                       & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__in_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset))) 
                     & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__bypass)
                         ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__out_2_bits_denied) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__out_1_bits_opcode))
                         : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_60.sv:385: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.dmiBypass.bar.monitor: Assertion failed: 'D' channel AccessAck is corrupt (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_60.sv", 385, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_60.sv:386:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_60.sv:387: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.dmiBypass.bar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_60.sv", 387, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__486(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__486\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__in_d_valid) 
                       & (1U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__in_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset))) 
                     & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT____Vcellinp__monitor__io_in_d_bits_source)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_60.sv:391: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.dmiBypass.bar.monitor: Assertion failed: 'D' channel AccessAckData carries invalid source ID (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_60.sv", 391, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_60.sv:392:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_60.sv:393: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.dmiBypass.bar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_60.sv", 393, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__in_d_valid) 
                       & (1U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__in_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset))) 
                     & (0U != ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__bypass)
                                ? 0U : (3U & (IData)(
                                                     (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                      >> 0x26U)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_60.sv:397: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.dmiBypass.bar.monitor: Assertion failed: 'D' channel AccessAckData carries invalid param (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_60.sv", 397, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_60.sv:398:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_60.sv:399: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.dmiBypass.bar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_60.sv", 399, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__487(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__487\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__in_d_valid) 
                       & (1U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__in_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset))) 
                     & (~ ((~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__bypass)
                                ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__out_2_bits_denied)
                                : (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                           >> 0x21U)))) 
                           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__bypass)
                               ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__out_2_bits_denied) 
                                  & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__out_1_bits_opcode))
                               : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_60.sv:403: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.dmiBypass.bar.monitor: Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_60.sv", 403, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_60.sv:404:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_60.sv:405: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.dmiBypass.bar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_60.sv", 405, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__in_d_valid) 
                       & (2U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__in_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset))) 
                     & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT____Vcellinp__monitor__io_in_d_bits_source)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_60.sv:409: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.dmiBypass.bar.monitor: Assertion failed: 'D' channel HintAck carries invalid source ID (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_60.sv", 409, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_60.sv:410:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_60.sv:411: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.dmiBypass.bar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_60.sv", 411, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__488(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__488\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__in_d_valid) 
                       & (2U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__in_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset))) 
                     & (0U != ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__bypass)
                                ? 0U : (3U & (IData)(
                                                     (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                      >> 0x26U)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_60.sv:415: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.dmiBypass.bar.monitor: Assertion failed: 'D' channel HintAck carries invalid param (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_60.sv", 415, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_60.sv:416:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_60.sv:417: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.dmiBypass.bar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_60.sv", 417, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__in_d_valid) 
                       & (2U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__in_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset))) 
                     & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__bypass)
                         ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__out_2_bits_denied) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__out_1_bits_opcode))
                         : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_60.sv:421: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.dmiBypass.bar.monitor: Assertion failed: 'D' channel HintAck is corrupt (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_60.sv", 421, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_60.sv:422:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_60.sv:423: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.dmiBypass.bar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_60.sv", 423, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__489(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__489\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__a_set) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset))) 
                     & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__inflight)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_60.sv:427: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.dmiBypass.bar.monitor: Assertion failed: 'A' channel re-used a source ID (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_60.sv", 427, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_60.sv:428:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_60.sv:429: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.dmiBypass.bar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_60.sv", 429, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT___T_850) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset))) 
                     & (~ (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__inflight) 
                            >> (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT____Vcellinp__monitor__io_in_d_bits_source)) 
                           | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__same_cycle_resp)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_60.sv:433: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.dmiBypass.bar.monitor: Assertion failed: 'D' channel acknowledged for nothing inflight (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_60.sv", 433, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_60.sv:434:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_60.sv:435: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.dmiBypass.bar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_60.sv", 435, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__490(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__490\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT___T_850) 
                       & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__same_cycle_resp)) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset))) 
                     & (~ (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__in_d_bits_opcode) 
                            == ((0x17U >= (0x1fU & 
                                           ((IData)(3U) 
                                            * (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmi2tl_auto_out_a_bits_opcode))))
                                 ? (7U & (0x911240U 
                                          >> (0x1fU 
                                              & ((IData)(3U) 
                                                 * (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmi2tl_auto_out_a_bits_opcode)))))
                                 : 0U)) | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__in_d_bits_opcode) 
                                           == ((0x17U 
                                                >= 
                                                (0x1fU 
                                                 & ((IData)(3U) 
                                                    * (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmi2tl_auto_out_a_bits_opcode))))
                                                ? (7U 
                                                   & (0x951240U 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(3U) 
                                                          * (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmi2tl_auto_out_a_bits_opcode)))))
                                                : 0U))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_60.sv:439: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.dmiBypass.bar.monitor: Assertion failed: 'D' channel contains improper opcode response (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_60.sv", 439, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_60.sv:440:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_60.sv:441: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.dmiBypass.bar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_60.sv", 441, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__491(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__491\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT___T_850) 
                       & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__same_cycle_resp)) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset))) 
                     & (2U != (3U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__bypass)
                                      ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__out_2_bits_denied) 
                                         << 1U) : (IData)(
                                                          (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                           >> 0x24U)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_60.sv:445: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.dmiBypass.bar.monitor: Assertion failed: 'D' channel contains improper response size (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_60.sv", 445, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_60.sv:446:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_60.sv:447: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.dmiBypass.bar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_60.sv", 447, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT___T_850) 
                       & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__same_cycle_resp))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset))) 
                     & (~ (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__in_d_bits_opcode) 
                            == ((0x17U >= (0x1fU & 
                                           ((IData)(3U) 
                                            * (7U & 
                                               (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__inflight_opcodes) 
                                                 >> 
                                                 ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT____Vcellinp__monitor__io_in_d_bits_source) 
                                                  << 2U)) 
                                                >> 1U)))))
                                 ? (7U & (0x911240U 
                                          >> (0x1fU 
                                              & ((IData)(3U) 
                                                 * 
                                                 (7U 
                                                  & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__inflight_opcodes) 
                                                      >> 
                                                      ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT____Vcellinp__monitor__io_in_d_bits_source) 
                                                       << 2U)) 
                                                     >> 1U))))))
                                 : 0U)) | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__in_d_bits_opcode) 
                                           == ((0x17U 
                                                >= 
                                                (0x1fU 
                                                 & ((IData)(3U) 
                                                    * 
                                                    (7U 
                                                     & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__inflight_opcodes) 
                                                         >> 
                                                         ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT____Vcellinp__monitor__io_in_d_bits_source) 
                                                          << 2U)) 
                                                        >> 1U)))))
                                                ? (7U 
                                                   & (0x951240U 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(3U) 
                                                          * 
                                                          (7U 
                                                           & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__inflight_opcodes) 
                                                               >> 
                                                               ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT____Vcellinp__monitor__io_in_d_bits_source) 
                                                                << 2U)) 
                                                              >> 1U))))))
                                                : 0U))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_60.sv:451: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.dmiBypass.bar.monitor: Assertion failed: 'D' channel contains improper opcode response (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_60.sv", 451, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_60.sv:452:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_60.sv:453: Assertion failed in %NTestHarness.chiptop.system.tlDM.dmOuter.dmiBypass.bar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_60.sv", 453, "");
        }
    }
}
