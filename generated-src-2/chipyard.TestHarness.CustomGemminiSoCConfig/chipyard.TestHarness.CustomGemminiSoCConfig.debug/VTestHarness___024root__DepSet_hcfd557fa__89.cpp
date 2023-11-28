// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestHarness.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VTestHarness___024root.h"

void VTestHarness___024root___multiclk__TOP__2(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__10247(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__10248(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__10249(VTestHarness___024root* vlSelf);
void VTestHarness___024root___combo__TOP__3(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__10251(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__10252(VTestHarness___024root* vlSelf);
void VTestHarness___024root___multiclk__TOP__3(VTestHarness___024root* vlSelf);
void VTestHarness___024root___multiclk__TOP__4(VTestHarness___024root* vlSelf);
void VTestHarness___024root___multiclk__TOP__5(VTestHarness___024root* vlSelf);
void VTestHarness___024root___multiclk__TOP__6(VTestHarness___024root* vlSelf);

void VTestHarness___024root___eval__11(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___eval__11\n"); );
    // Body
    if ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT___gated_clock_debug_clock_gate_out) 
          & (~ (IData)(vlSelf->__Vclklast__TOP__TestHarness__DOT__chiptop__DOT___gated_clock_debug_clock_gate_out))) 
         | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGen__DOT___x1_member_allClocks_subsystem_sbus_0_clock_ClockDivideBy1_clk_out) 
            & (~ (IData)(vlSelf->__Vclklast__TOP__TestHarness__DOT__chiptop__DOT__dividerOnlyClockGen__DOT___x1_member_allClocks_subsystem_sbus_0_clock_ClockDivideBy1_clk_out))))) {
        VTestHarness___024root___multiclk__TOP__2(vlSelf);
    }
    if ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT___gated_clock_debug_clock_gate_out) 
          & (~ (IData)(vlSelf->__Vclklast__TOP__TestHarness__DOT__chiptop__DOT___gated_clock_debug_clock_gate_out))) 
         | ((IData)(vlSelf->__VinpClk__TOP__TestHarness__DOT__chiptop__DOT__debug_reset) 
            & (~ (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__TestHarness__DOT__chiptop__DOT__debug_reset))))) {
        VTestHarness___024root___sequent__TOP__10247(vlSelf);
    }
    if ((((IData)(vlSelf->TestHarness__DOT__SimJTAG__DOT_____05Fjtag_TCK) 
          & (~ (IData)(vlSelf->__Vclklast__TOP__TestHarness__DOT__SimJTAG__DOT_____05Fjtag_TCK))) 
         | ((IData)(vlSelf->__VinpClk__TOP__TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__x1_a_source__DOT____Vcellinp__source_valid_0__reset) 
            & (~ (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__x1_a_source__DOT____Vcellinp__source_valid_0__reset))))) {
        VTestHarness___024root___sequent__TOP__10248(vlSelf);
        vlSelf->__Vm_traceActivity[0x19U] = 1U;
        VTestHarness___024root___sequent__TOP__10249(vlSelf);
    }
    VTestHarness___024root___combo__TOP__3(vlSelf);
    if ((((IData)(vlSelf->TestHarness__DOT__SimJTAG__DOT_____05Fjtag_TCK) 
          & (~ (IData)(vlSelf->__Vclklast__TOP__TestHarness__DOT__SimJTAG__DOT_____05Fjtag_TCK))) 
         | ((IData)(vlSelf->__VinpClk__TOP__TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset) 
            & (~ (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))))) {
        VTestHarness___024root___sequent__TOP__10251(vlSelf);
    }
    if ((((IData)(vlSelf->TestHarness__DOT__SimJTAG__DOT_____05Fjtag_TCK) 
          & (~ (IData)(vlSelf->__Vclklast__TOP__TestHarness__DOT__SimJTAG__DOT_____05Fjtag_TCK))) 
         | ((IData)(vlSelf->__VinpClk__TOP__TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset) 
            & (~ (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset))))) {
        VTestHarness___024root___sequent__TOP__10252(vlSelf);
        vlSelf->__Vm_traceActivity[0x1aU] = 1U;
    }
    if ((((IData)(vlSelf->TestHarness__DOT__SimJTAG__DOT_____05Fjtag_TCK) 
          ^ (IData)(vlSelf->__Vclklast__TOP__TestHarness__DOT__SimJTAG__DOT_____05Fjtag_TCK)) 
         | ((IData)(vlSelf->__VinpClk__TOP__TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset) 
            & (~ (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset))))) {
        VTestHarness___024root___multiclk__TOP__3(vlSelf);
        vlSelf->__Vm_traceActivity[0x1bU] = 1U;
        VTestHarness___024root___multiclk__TOP__4(vlSelf);
        VTestHarness___024root___multiclk__TOP__5(vlSelf);
        VTestHarness___024root___multiclk__TOP__6(vlSelf);
    }
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
    vlSelf->__Vclklast__TOP__reset = vlSelf->reset;
    vlSelf->__Vclklast__TOP__TestHarness__DOT__SimJTAG__DOT_____05Fjtag_TCK 
        = vlSelf->TestHarness__DOT__SimJTAG__DOT_____05Fjtag_TCK;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__x1_a_source__DOT____Vcellinp__source_valid_0__reset 
        = vlSelf->__VinpClk__TOP__TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__x1_a_source__DOT____Vcellinp__source_valid_0__reset;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset 
        = vlSelf->__VinpClk__TOP__TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset 
        = vlSelf->__VinpClk__TOP__TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset;
    vlSelf->__Vclklast__TOP__TestHarness__DOT__chiptop__DOT__dividerOnlyClockGen__DOT___x1_member_allClocks_subsystem_sbus_0_clock_ClockDivideBy1_clk_out 
        = vlSelf->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGen__DOT___x1_member_allClocks_subsystem_sbus_0_clock_ClockDivideBy1_clk_out;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset 
        = vlSelf->__VinpClk__TOP__TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_pbus_0_reset 
        = vlSelf->__VinpClk__TOP__TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_pbus_0_reset;
}

void VTestHarness___024root___eval__12(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___eval__12\n"); );
    // Body
    vlSelf->__Vclklast__TOP____VinpClk__TOP__TestHarness__DOT__chiptop__DOT__debug_reset 
        = vlSelf->__VinpClk__TOP__TestHarness__DOT__chiptop__DOT__debug_reset;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_implicit_clock_reset 
        = vlSelf->__VinpClk__TOP__TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_implicit_clock_reset;
    vlSelf->__Vclklast__TOP__TestHarness__DOT__chiptop__DOT___gated_clock_debug_clock_gate_out 
        = vlSelf->TestHarness__DOT__chiptop__DOT___gated_clock_debug_clock_gate_out;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__x1_a_sink__DOT____Vcellinp__sink_valid_0__reset 
        = vlSelf->__VinpClk__TOP__TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__x1_a_sink__DOT____Vcellinp__sink_valid_0__reset;
    vlSelf->__VinpClk__TOP__TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__x1_a_source__DOT____Vcellinp__source_valid_0__reset 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__x1_a_source__DOT____Vcellinp__source_valid_0__reset;
    vlSelf->__VinpClk__TOP__TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset 
        = vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset;
    vlSelf->__VinpClk__TOP__TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset;
    vlSelf->__VinpClk__TOP__TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset;
    vlSelf->__VinpClk__TOP__TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_pbus_0_reset 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_pbus_0_reset;
    vlSelf->__VinpClk__TOP__TestHarness__DOT__chiptop__DOT__debug_reset 
        = vlSelf->TestHarness__DOT__chiptop__DOT__debug_reset;
    vlSelf->__VinpClk__TOP__TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_implicit_clock_reset 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_implicit_clock_reset;
    vlSelf->__VinpClk__TOP__TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__x1_a_sink__DOT____Vcellinp__sink_valid_0__reset 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__x1_a_sink__DOT____Vcellinp__sink_valid_0__reset;
}

QData VTestHarness___024root___change_request_1(VTestHarness___024root* vlSelf);

VL_INLINE_OPT QData VTestHarness___024root___change_request(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___change_request\n"); );
    // Body
    return (VTestHarness___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData VTestHarness___024root___change_request_1(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset ^ vlSelf->__Vchglast__TOP__TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset)
         | (vlSelf->TestHarness__DOT__chiptop__DOT__debug_reset ^ vlSelf->__Vchglast__TOP__TestHarness__DOT__chiptop__DOT__debug_reset)
         | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_implicit_clock_reset ^ vlSelf->__Vchglast__TOP__TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_implicit_clock_reset)
         | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset ^ vlSelf->__Vchglast__TOP__TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
         | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_pbus_0_reset ^ vlSelf->__Vchglast__TOP__TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_pbus_0_reset)
         | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset ^ vlSelf->__Vchglast__TOP__TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset)
         | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__x1_a_source__DOT____Vcellinp__source_valid_0__reset ^ vlSelf->__Vchglast__TOP__TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__x1_a_source__DOT____Vcellinp__source_valid_0__reset)
         | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__x1_a_sink__DOT____Vcellinp__sink_valid_0__reset ^ vlSelf->__Vchglast__TOP__TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__x1_a_sink__DOT____Vcellinp__sink_valid_0__reset));
    VL_DEBUG_IF( if(__req && ((vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset ^ vlSelf->__Vchglast__TOP__TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset))) VL_DBG_MSGF("        CHANGE: /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/ChipTop.sv:136: TestHarness.chiptop._system_debug_systemjtag_reset_catcher_io_sync_reset\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->TestHarness__DOT__chiptop__DOT__debug_reset ^ vlSelf->__Vchglast__TOP__TestHarness__DOT__chiptop__DOT__debug_reset))) VL_DBG_MSGF("        CHANGE: /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/ChipTop.sv:231: TestHarness.chiptop.debug_reset\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_implicit_clock_reset ^ vlSelf->__Vchglast__TOP__TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_implicit_clock_reset))) VL_DBG_MSGF("        CHANGE: /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/DigitalTop.sv:159: TestHarness.chiptop.system._resetSynchronizer_auto_out_member_allClocks_implicit_clock_reset\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset ^ vlSelf->__Vchglast__TOP__TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))) VL_DBG_MSGF("        CHANGE: /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/DigitalTop.sv:161: TestHarness.chiptop.system._resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_pbus_0_reset ^ vlSelf->__Vchglast__TOP__TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_pbus_0_reset))) VL_DBG_MSGF("        CHANGE: /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/DigitalTop.sv:167: TestHarness.chiptop.system._resetSynchronizer_auto_out_member_allClocks_subsystem_pbus_0_reset\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset ^ vlSelf->__Vchglast__TOP__TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) VL_DBG_MSGF("        CHANGE: /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/DigitalTop.sv:171: TestHarness.chiptop.system._resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__x1_a_source__DOT____Vcellinp__source_valid_0__reset ^ vlSelf->__Vchglast__TOP__TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__x1_a_source__DOT____Vcellinp__source_valid_0__reset))) VL_DBG_MSGF("        CHANGE: /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/AsyncValidSync.sv:74: TestHarness.chiptop.system.tlDM.dmOuter.asource.x1_a_source.__Vcellinp__source_valid_0__reset\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__x1_a_sink__DOT____Vcellinp__sink_valid_0__reset ^ vlSelf->__Vchglast__TOP__TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__x1_a_sink__DOT____Vcellinp__sink_valid_0__reset))) VL_DBG_MSGF("        CHANGE: /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/AsyncValidSync.sv:74: TestHarness.chiptop.system.tlDM.dmInner.dmiXing.x1_a_sink.__Vcellinp__sink_valid_0__reset\n"); );
    // Final
    vlSelf->__Vchglast__TOP__TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset 
        = vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset;
    vlSelf->__Vchglast__TOP__TestHarness__DOT__chiptop__DOT__debug_reset 
        = vlSelf->TestHarness__DOT__chiptop__DOT__debug_reset;
    vlSelf->__Vchglast__TOP__TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_implicit_clock_reset 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_implicit_clock_reset;
    vlSelf->__Vchglast__TOP__TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset;
    vlSelf->__Vchglast__TOP__TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_pbus_0_reset 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_pbus_0_reset;
    vlSelf->__Vchglast__TOP__TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset;
    vlSelf->__Vchglast__TOP__TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__x1_a_source__DOT____Vcellinp__source_valid_0__reset 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__x1_a_source__DOT____Vcellinp__source_valid_0__reset;
    vlSelf->__Vchglast__TOP__TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__x1_a_sink__DOT____Vcellinp__sink_valid_0__reset 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__x1_a_sink__DOT____Vcellinp__sink_valid_0__reset;
    return __req;
}

#ifdef VL_DEBUG
void VTestHarness___024root___eval_debug_assertions(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
