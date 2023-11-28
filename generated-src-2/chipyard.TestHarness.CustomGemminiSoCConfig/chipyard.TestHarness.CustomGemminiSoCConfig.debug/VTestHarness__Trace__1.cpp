// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VTestHarness__Syms.h"


void VTestHarness___024root__trace_chg_sub_1(VTestHarness___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root__trace_chg_sub_1\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 5509);
    VlWide<4>/*127:0*/ __Vtemp_hfbd874e3__0;
    VlWide<4>/*127:0*/ __Vtemp_h9eb8c7cd__0;
    VlWide<4>/*127:0*/ __Vtemp_h49142f6e__0;
    VlWide<5>/*159:0*/ __Vtemp_hd6cbbf85__0;
    VlWide<5>/*159:0*/ __Vtemp_h21a15d94__0;
    VlWide<6>/*191:0*/ __Vtemp_h1adece46__0;
    VlWide<6>/*191:0*/ __Vtemp_h70b18791__2;
    VlWide<3>/*95:0*/ __Vtemp_h4eeb017a__0;
    VlWide<3>/*95:0*/ __Vtemp_h5fdd3a8b__0;
    VlWide<5>/*159:0*/ __Vtemp_hb39b41e3__0;
    VlWide<4>/*127:0*/ __Vtemp_h03716693__0;
    VlWide<5>/*159:0*/ __Vtemp_h40e7dcfe__0;
    VlWide<4>/*127:0*/ __Vtemp_h64830217__0;
    VlWide<4>/*127:0*/ __Vtemp_h3b577ff8__0;
    VlWide<6>/*191:0*/ __Vtemp_h9b871b97__0;
    VlWide<5>/*159:0*/ __Vtemp_h35c13fc7__0;
    VlWide<3>/*95:0*/ __Vtemp_hfdba7ae2__0;
    VlWide<3>/*95:0*/ __Vtemp_hd9c9b24d__0;
    VlWide<4>/*127:0*/ __Vtemp_h0352ed4b__0;
    VlWide<3>/*95:0*/ __Vtemp_h7d59051d__0;
    VlWide<4>/*127:0*/ __Vtemp_hd08ac353__0;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[6U])) {
        bufp->chgBit(oldp+0,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__monitor__DOT___same_cycle_resp_T_1) 
                              & (~ (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__inDes__DOT__data_4 
                                    >> 0xbU)))));
        bufp->chgBit(oldp+1,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__monitor__DOT__same_cycle_resp));
        bufp->chgBit(oldp+2,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__x1_a_q__DOT__enq_ptr_value));
        bufp->chgBit(oldp+3,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__x1_a_q__DOT__deq_ptr_value));
        bufp->chgBit(oldp+4,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__x1_a_q__DOT__maybe_full));
        bufp->chgBit(oldp+5,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ptr_match));
        bufp->chgBit(oldp+6,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__x1_a_q__DOT__empty));
        bufp->chgBit(oldp+7,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__x1_a_q__DOT__full));
        bufp->chgBit(oldp+8,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__x1_a_q__DOT__do_enq));
        bufp->chgBit(oldp+9,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__x1_a_q__DOT__do_deq));
        __Vtemp_hfbd874e3__0[0U] = (IData)((((QData)((IData)(
                                                             (0xffU 
                                                              & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__inDes__DOT__data_0 
                                                                 >> 1U)))) 
                                             << 0x2bU) 
                                            | (((QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT___inDes_io_out_bits_address)) 
                                                << 0xbU) 
                                               | (QData)((IData)(
                                                                 ((0x400U 
                                                                   & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__inDes__DOT__data_4 
                                                                      >> 1U)) 
                                                                  | ((0x3c0U 
                                                                      & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__inDes__DOT__data_4 
                                                                         >> 0xdU)) 
                                                                     | ((0x38U 
                                                                         & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__inDes__DOT__data_4 
                                                                            >> 0x18U)) 
                                                                        | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT___inDes_io_out_bits_opcode)))))))));
        __Vtemp_hfbd874e3__0[1U] = (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT___inDes_io_out_bits_data) 
                                     << 0x13U) | (IData)(
                                                         ((((QData)((IData)(
                                                                            (0xffU 
                                                                             & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__inDes__DOT__data_0 
                                                                                >> 1U)))) 
                                                            << 0x2bU) 
                                                           | (((QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT___inDes_io_out_bits_address)) 
                                                               << 0xbU) 
                                                              | (QData)((IData)(
                                                                                ((0x400U 
                                                                                & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__inDes__DOT__data_4 
                                                                                >> 1U)) 
                                                                                | ((0x3c0U 
                                                                                & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__inDes__DOT__data_4 
                                                                                >> 0xdU)) 
                                                                                | ((0x38U 
                                                                                & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__inDes__DOT__data_4 
                                                                                >> 0x18U)) 
                                                                                | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT___inDes_io_out_bits_opcode)))))))) 
                                                          >> 0x20U)));
        __Vtemp_hfbd874e3__0[2U] = (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT___inDes_io_out_bits_data) 
                                     >> 0xdU) | ((IData)(
                                                         (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT___inDes_io_out_bits_data 
                                                          >> 0x20U)) 
                                                 << 0x13U));
        __Vtemp_hfbd874e3__0[3U] = ((0x80000U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__inDes__DOT__data_0 
                                                 << 9U)) 
                                    | ((IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT___inDes_io_out_bits_data 
                                                >> 0x20U)) 
                                       >> 0xdU));
        bufp->chgWData(oldp+10,(__Vtemp_hfbd874e3__0),116);
        bufp->chgWData(oldp+14,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory[0]),116);
        bufp->chgWData(oldp+18,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory[1]),116);
        bufp->chgBit(oldp+22,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT___portsAOI_in_0_a_ready_WIRE));
        bufp->chgBit(oldp+23,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__out_9_valid));
        bufp->chgCData(oldp+24,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__out_9_bits_opcode),3);
        bufp->chgCData(oldp+25,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__out_9_bits_param),2);
        bufp->chgCData(oldp+26,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__out_9_bits_size),3);
        bufp->chgCData(oldp+27,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__out_9_bits_source),5);
        bufp->chgBit(oldp+28,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__out_9_bits_sink));
        bufp->chgBit(oldp+29,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__out_9_bits_denied));
        bufp->chgQData(oldp+30,((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__muxStateEarly_0)
                                   ? vlSelf->TestHarness__DOT__simdram__DOT_____05Fr_data_reg
                                   : 0ULL) | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__muxStateEarly_1)
                                               ? (((QData)((IData)(
                                                                   vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[2U])) 
                                                   << 0x32U) 
                                                  | (((QData)((IData)(
                                                                      vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[1U])) 
                                                      << 0x12U) 
                                                     | ((QData)((IData)(
                                                                        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U])) 
                                                        >> 0xeU)))
                                               : 0ULL))),64);
        bufp->chgBit(oldp+32,((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__muxStateEarly_0) 
                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins) 
                                   & ((0U != (IData)(vlSelf->TestHarness__DOT__simdram__DOT_____05Fr_resp_reg)) 
                                      | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_d_denied)))) 
                               | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__muxStateEarly_1) 
                                  & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[2U] 
                                     >> 0xeU)))));
        bufp->chgBit(oldp+33,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__bundleOut_1_out_1_valid));
        bufp->chgCData(oldp+34,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_l2_widget_out_a_bits_opcode),3);
        bufp->chgCData(oldp+35,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_l2_widget_out_a_bits_param),3);
        bufp->chgCData(oldp+36,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_l2_widget_out_a_bits_size),3);
        bufp->chgCData(oldp+37,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_l2_widget_out_a_bits_source),6);
        bufp->chgIData(oldp+38,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_l2_widget_out_a_bits_address),32);
        bufp->chgSData(oldp+39,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_l2_widget_out_a_bits_mask),16);
        bufp->chgWData(oldp+40,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_l2_widget_out_a_bits_data),128);
        bufp->chgBit(oldp+44,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_l2_widget_out_a_bits_corrupt));
        bufp->chgBit(oldp+45,((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_1_b_q__DOT__full)))));
        bufp->chgBit(oldp+46,((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT__empty)))));
        bufp->chgCData(oldp+47,((7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[0U])),3);
        bufp->chgCData(oldp+48,((7U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[0U] 
                                       >> 3U))),3);
        bufp->chgCData(oldp+49,((7U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[0U] 
                                       >> 6U))),3);
        bufp->chgCData(oldp+50,((0x20U | (3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[0U] 
                                                >> 0xaU)))),6);
        bufp->chgIData(oldp+51,(((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[1U] 
                                  << 0x14U) | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[0U] 
                                               >> 0xcU))),32);
        __Vtemp_h9eb8c7cd__0[0U] = ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[2U] 
                                     << 0x14U) | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[1U] 
                                                  >> 0xcU));
        __Vtemp_h9eb8c7cd__0[1U] = ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[3U] 
                                     << 0x14U) | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[2U] 
                                                  >> 0xcU));
        __Vtemp_h9eb8c7cd__0[2U] = ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[4U] 
                                     << 0x14U) | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[3U] 
                                                  >> 0xcU));
        __Vtemp_h9eb8c7cd__0[3U] = ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[5U] 
                                     << 0x14U) | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[4U] 
                                                  >> 0xcU));
        bufp->chgWData(oldp+52,(__Vtemp_h9eb8c7cd__0),128);
        bufp->chgBit(oldp+56,((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[5U] 
                                     >> 0xcU))));
        bufp->chgBit(oldp+57,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_l2_widget_out_d_ready));
        bufp->chgBit(oldp+58,((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_e_q__DOT__empty)))));
        bufp->chgCData(oldp+59,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___tile_prci_domain_auto_tl_master_clock_xing_out_1_e_bits_sink),4);
        bufp->chgBit(oldp+60,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__out_2_valid));
        bufp->chgCData(oldp+61,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_source),5);
        bufp->chgIData(oldp+62,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_address),32);
        bufp->chgBit(oldp+63,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_d_ready));
        bufp->chgBit(oldp+64,((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__x1_a_q__DOT__maybe_full)))));
        bufp->chgBit(oldp+65,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceB__DOT__b_valid));
        bufp->chgCData(oldp+66,((3U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceB__DOT__remain)
                                        ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceB__DOT__param_r)
                                        : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__sourceB__io_req_bits_param)))),2);
        bufp->chgIData(oldp+67,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__bundleIn_0_b_bits_address),32);
        bufp->chgBit(oldp+68,((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__c__DOT__full)))));
        bufp->chgBit(oldp+69,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__bundleIn_0_d_q__DOT___io_deq_valid_output));
        bufp->chgCData(oldp+70,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT___bundleIn_0_d_q_io_deq_bits_opcode),3);
        bufp->chgCData(oldp+71,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT___bundleIn_0_d_q_io_deq_bits_param),2);
        bufp->chgCData(oldp+72,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT___bundleIn_0_d_q_io_deq_bits_size),3);
        bufp->chgCData(oldp+73,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT___bundleIn_0_d_q_io_deq_bits_source),6);
        bufp->chgCData(oldp+74,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT___bundleIn_0_d_q_io_deq_bits_sink),4);
        bufp->chgBit(oldp+75,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT___bundleIn_0_d_q_io_deq_bits_denied));
        bufp->chgWData(oldp+76,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_l2_wrapper_auto_coherent_jbar_in_d_bits_data),128);
        bufp->chgBit(oldp+80,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT___bundleIn_0_d_q_io_deq_bits_corrupt));
        bufp->chgBit(oldp+81,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkA__DOT___io_a_ready_output));
        bufp->chgBit(oldp+82,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s3_valid_d));
        bufp->chgCData(oldp+83,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__d_bits_opcode),3);
        bufp->chgCData(oldp+84,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT___inclusive_cache_bank_sched_io_in_d_bits_param),2);
        bufp->chgCData(oldp+85,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s3_req_size),3);
        bufp->chgCData(oldp+86,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s3_req_source),6);
        bufp->chgCData(oldp+87,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s3_req_sink),4);
        bufp->chgBit(oldp+88,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s3_req_bad));
        bufp->chgWData(oldp+89,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__d_bits_data),128);
        bufp->chgBit(oldp+93,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT___inclusive_cache_bank_sched_io_in_d_bits_corrupt));
        bufp->chgBit(oldp+94,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__x1_a_q__DOT___io_deq_valid_output));
        bufp->chgCData(oldp+95,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_a_bits_opcode),3);
        bufp->chgCData(oldp+96,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_a_bits_param),3);
        bufp->chgCData(oldp+97,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_a_bits_size),3);
        bufp->chgCData(oldp+98,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_a_bits_source),6);
        bufp->chgIData(oldp+99,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_a_bits_address),32);
        bufp->chgSData(oldp+100,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_a_bits_mask),16);
        if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__x1_a_q__DOT__maybe_full) {
            __Vtemp_h49142f6e__0[0U] = ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                         [0U][2U] << 1U) 
                                        | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                           [0U][1U] 
                                           >> 0x1fU));
            __Vtemp_h49142f6e__0[1U] = ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                         [0U][3U] << 1U) 
                                        | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                           [0U][2U] 
                                           >> 0x1fU));
            __Vtemp_h49142f6e__0[2U] = ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                         [0U][4U] << 1U) 
                                        | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                           [0U][3U] 
                                           >> 0x1fU));
            __Vtemp_h49142f6e__0[3U] = ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                         [0U][5U] << 1U) 
                                        | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                           [0U][4U] 
                                           >> 0x1fU));
        } else {
            __Vtemp_h49142f6e__0[0U] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_l2_widget_out_a_bits_data[0U];
            __Vtemp_h49142f6e__0[1U] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_l2_widget_out_a_bits_data[1U];
            __Vtemp_h49142f6e__0[2U] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_l2_widget_out_a_bits_data[2U];
            __Vtemp_h49142f6e__0[3U] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_l2_widget_out_a_bits_data[3U];
        }
        bufp->chgWData(oldp+101,(__Vtemp_h49142f6e__0),128);
        bufp->chgBit(oldp+105,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__x1_a_q__DOT__maybe_full)
                                       ? (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                          [0U][5U] 
                                          >> 0x1fU)
                                       : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_l2_widget_out_a_bits_corrupt)))));
        bufp->chgBit(oldp+106,((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__bundleIn_0_d_q__DOT__maybe_full)))));
        bufp->chgBit(oldp+107,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__bundleIn_0_d_q__DOT__maybe_full));
        bufp->chgBit(oldp+108,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__bundleIn_0_d_q__DOT__do_enq));
        __Vtemp_hd6cbbf85__0[0U] = ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__d_bits_data[0U] 
                                     << 0x13U) | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s3_req_bad) 
                                                   << 0x12U) 
                                                  | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s3_req_sink) 
                                                      << 0xeU) 
                                                     | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s3_req_source) 
                                                         << 8U) 
                                                        | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s3_req_size) 
                                                            << 5U) 
                                                           | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT___inclusive_cache_bank_sched_io_in_d_bits_param) 
                                                               << 3U) 
                                                              | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__d_bits_opcode)))))));
        __Vtemp_hd6cbbf85__0[1U] = ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__d_bits_data[0U] 
                                     >> 0xdU) | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__d_bits_data[1U] 
                                                 << 0x13U));
        __Vtemp_hd6cbbf85__0[2U] = ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__d_bits_data[1U] 
                                     >> 0xdU) | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__d_bits_data[2U] 
                                                 << 0x13U));
        __Vtemp_hd6cbbf85__0[3U] = ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__d_bits_data[2U] 
                                     >> 0xdU) | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__d_bits_data[3U] 
                                                 << 0x13U));
        __Vtemp_hd6cbbf85__0[4U] = (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT___inclusive_cache_bank_sched_io_in_d_bits_corrupt) 
                                     << 0x13U) | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__d_bits_data[3U] 
                                                  >> 0xdU));
        bufp->chgWData(oldp+109,(__Vtemp_hd6cbbf85__0),148);
        __Vtemp_h21a15d94__0[0U] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory
            [0U][0U];
        __Vtemp_h21a15d94__0[1U] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory
            [0U][1U];
        __Vtemp_h21a15d94__0[2U] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory
            [0U][2U];
        __Vtemp_h21a15d94__0[3U] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory
            [0U][3U];
        __Vtemp_h21a15d94__0[4U] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory
            [0U][4U];
        bufp->chgWData(oldp+114,(__Vtemp_h21a15d94__0),148);
        bufp->chgWData(oldp+119,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory[0]),148);
        bufp->chgCData(oldp+124,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__a_first_counter),2);
        bufp->chgCData(oldp+125,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__opcode),3);
        bufp->chgCData(oldp+126,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__param),3);
        bufp->chgCData(oldp+127,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__size),3);
        bufp->chgCData(oldp+128,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__source),6);
        bufp->chgIData(oldp+129,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__address),32);
        bufp->chgCData(oldp+130,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__d_first_counter),2);
        bufp->chgCData(oldp+131,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__opcode_1),3);
        bufp->chgCData(oldp+132,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__param_1),2);
        bufp->chgCData(oldp+133,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__size_1),3);
        bufp->chgCData(oldp+134,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__source_1),6);
        bufp->chgCData(oldp+135,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__sink),4);
        bufp->chgBit(oldp+136,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__denied));
        bufp->chgCData(oldp+137,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__c_first_counter),2);
        bufp->chgCData(oldp+138,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__opcode_3),3);
        bufp->chgCData(oldp+139,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__param_3),3);
        bufp->chgCData(oldp+140,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__size_3),3);
        bufp->chgCData(oldp+141,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__source_3),6);
        bufp->chgIData(oldp+142,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__address_2),32);
        bufp->chgQData(oldp+143,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__inflight),37);
        bufp->chgWData(oldp+145,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__inflight_opcodes),148);
        bufp->chgWData(oldp+150,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__inflight_sizes),148);
        bufp->chgCData(oldp+155,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__a_first_counter_1),2);
        bufp->chgBit(oldp+156,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__a_first_counter_1))));
        bufp->chgCData(oldp+157,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__d_first_counter_1),2);
        bufp->chgBit(oldp+158,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__d_first_counter_1))));
        bufp->chgBit(oldp+159,((6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT___bundleIn_0_d_q_io_deq_bits_opcode))));
        bufp->chgIData(oldp+160,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__watchdog),32);
        bufp->chgQData(oldp+161,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__inflight_1),37);
        bufp->chgWData(oldp+163,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__inflight_sizes_1),148);
        bufp->chgCData(oldp+168,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__c_first_counter_1),2);
        bufp->chgBit(oldp+169,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__c_first_counter_1))));
        bufp->chgCData(oldp+170,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__d_first_counter_2),2);
        bufp->chgBit(oldp+171,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__d_first_counter_2))));
        bufp->chgIData(oldp+172,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__watchdog_1),32);
        bufp->chgSData(oldp+173,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__inflight_2),12);
        bufp->chgCData(oldp+174,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__d_first_counter_3),2);
        bufp->chgBit(oldp+175,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__d_first_counter_3))));
        bufp->chgSData(oldp+176,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__d_set),12);
        bufp->chgBit(oldp+177,((1U & (((((0x24U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_l2_widget_out_a_bits_source)) 
                                         | (1U == (3U 
                                                   & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_l2_widget_out_a_bits_source) 
                                                      >> 4U)))) 
                                        | (~ (IData)(
                                                     (0U 
                                                      != 
                                                      (3U 
                                                       & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_l2_widget_out_a_bits_source) 
                                                          >> 4U)))))) 
                                       | (0x20U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_l2_widget_out_a_bits_source))) 
                                      | (0x22U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_l2_widget_out_a_bits_source))))));
        bufp->chgBit(oldp+178,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__mask_acc));
        bufp->chgBit(oldp+179,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__mask_acc_1));
        bufp->chgBit(oldp+180,((2U == (3U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_l2_widget_out_a_bits_size)))));
        bufp->chgBit(oldp+181,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__mask_eq_2));
        bufp->chgBit(oldp+182,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__mask_acc_2));
        bufp->chgBit(oldp+183,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__mask_eq_3));
        bufp->chgBit(oldp+184,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__mask_acc_3));
        bufp->chgBit(oldp+185,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__mask_eq_4));
        bufp->chgBit(oldp+186,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__mask_acc_4));
        bufp->chgBit(oldp+187,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__mask_eq_5));
        bufp->chgBit(oldp+188,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__mask_acc_5));
        bufp->chgBit(oldp+189,((1U == (3U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_l2_widget_out_a_bits_size)))));
        bufp->chgBit(oldp+190,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__mask_eq_6));
        bufp->chgBit(oldp+191,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__mask_acc_6));
        bufp->chgBit(oldp+192,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__mask_eq_7));
        bufp->chgBit(oldp+193,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__mask_acc_7));
        bufp->chgBit(oldp+194,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__mask_eq_8));
        bufp->chgBit(oldp+195,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__mask_acc_8));
        bufp->chgBit(oldp+196,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__mask_eq_9));
        bufp->chgBit(oldp+197,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__mask_acc_9));
        bufp->chgBit(oldp+198,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__mask_eq_10));
        bufp->chgBit(oldp+199,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__mask_acc_10));
        bufp->chgBit(oldp+200,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__mask_eq_11));
        bufp->chgBit(oldp+201,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__mask_acc_11));
        bufp->chgBit(oldp+202,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__mask_eq_12));
        bufp->chgBit(oldp+203,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__mask_acc_12));
        bufp->chgBit(oldp+204,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__mask_eq_13));
        bufp->chgBit(oldp+205,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__mask_acc_13));
        bufp->chgSData(oldp+206,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__mask),16);
        bufp->chgBit(oldp+207,((((((0x24U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT___bundleIn_0_d_q_io_deq_bits_source)) 
                                   | (1U == (3U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT___bundleIn_0_d_q_io_deq_bits_source) 
                                                   >> 4U)))) 
                                  | (0U == (3U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT___bundleIn_0_d_q_io_deq_bits_source) 
                                                  >> 4U)))) 
                                 | (0x20U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT___bundleIn_0_d_q_io_deq_bits_source))) 
                                | (0x22U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT___bundleIn_0_d_q_io_deq_bits_source)))));
        bufp->chgBit(oldp+208,((((0x24U == (0x20U | 
                                            (3U & (
                                                   vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 0xaU)))) 
                                 | (0x20U == (0x20U 
                                              | (3U 
                                                 & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[0U] 
                                                    >> 0xaU))))) 
                                | (0x22U == (0x20U 
                                             | (3U 
                                                & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 0xaU)))))));
        bufp->chgBit(oldp+209,((((8U == (0xfU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[1U] 
                                                 >> 8U))) 
                                 | (0x10000U == (0xfffffU 
                                                 & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[1U] 
                                                     << 8U) 
                                                    | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[0U] 
                                                       >> 0x18U))))) 
                                | (2U == (0xffffU & 
                                          ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[1U] 
                                            << 4U) 
                                           | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[0U] 
                                              >> 0x1cU)))))));
        bufp->chgQData(oldp+210,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___same_cycle_resp_T_1)
                                   ? (0x1fffffffffULL 
                                      & VL_SHIFTL_QQQ(37,64,64, 1ULL, (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_l2_widget_out_a_bits_source))))
                                   : 0ULL)),37);
        bufp->chgBit(oldp+212,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__same_cycle_resp));
        bufp->chgQData(oldp+213,((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___same_cycle_resp_T_3) 
                                   & (6U == (6U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[0U])))
                                   ? (0x1fffffffffULL 
                                      & VL_SHIFTL_QQQ(37,64,64, 1ULL, (QData)((IData)(
                                                                                (0x20U 
                                                                                | (3U 
                                                                                & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[0U] 
                                                                                >> 0xaU)))))))
                                   : 0ULL)),37);
        bufp->chgBit(oldp+215,((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___same_cycle_resp_T_3) 
                                 & (6U == (6U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[0U]))) 
                                & ((0x20U | (3U & (
                                                   vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 0xaU))) 
                                   == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT___bundleIn_0_d_q_io_deq_bits_source)))));
        bufp->chgBit(oldp+216,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__x1_a_q__DOT__maybe_full));
        bufp->chgBit(oldp+217,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__x1_a_q__DOT__do_enq));
        __Vtemp_h1adece46__0[0U] = (IData)((((QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_l2_widget_out_a_bits_mask)) 
                                             << 0x2fU) 
                                            | (((QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_l2_widget_out_a_bits_address)) 
                                                << 0xfU) 
                                               | (QData)((IData)(
                                                                 (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_l2_widget_out_a_bits_source) 
                                                                   << 9U) 
                                                                  | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_l2_widget_out_a_bits_size) 
                                                                      << 6U) 
                                                                     | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_l2_widget_out_a_bits_param) 
                                                                         << 3U) 
                                                                        | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_l2_widget_out_a_bits_opcode)))))))));
        __Vtemp_h1adece46__0[1U] = ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_l2_widget_out_a_bits_data[0U] 
                                     << 0x1fU) | (IData)(
                                                         ((((QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_l2_widget_out_a_bits_mask)) 
                                                            << 0x2fU) 
                                                           | (((QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_l2_widget_out_a_bits_address)) 
                                                               << 0xfU) 
                                                              | (QData)((IData)(
                                                                                (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_l2_widget_out_a_bits_source) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_l2_widget_out_a_bits_size) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_l2_widget_out_a_bits_param) 
                                                                                << 3U) 
                                                                                | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_l2_widget_out_a_bits_opcode)))))))) 
                                                          >> 0x20U)));
        __Vtemp_h1adece46__0[2U] = ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_l2_widget_out_a_bits_data[0U] 
                                     >> 1U) | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_l2_widget_out_a_bits_data[1U] 
                                               << 0x1fU));
        __Vtemp_h1adece46__0[3U] = ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_l2_widget_out_a_bits_data[1U] 
                                     >> 1U) | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_l2_widget_out_a_bits_data[2U] 
                                               << 0x1fU));
        __Vtemp_h1adece46__0[4U] = ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_l2_widget_out_a_bits_data[2U] 
                                     >> 1U) | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_l2_widget_out_a_bits_data[3U] 
                                               << 0x1fU));
        __Vtemp_h1adece46__0[5U] = (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_l2_widget_out_a_bits_corrupt) 
                                     << 0x1fU) | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_l2_widget_out_a_bits_data[3U] 
                                                  >> 1U));
        bufp->chgWData(oldp+218,(__Vtemp_h1adece46__0),192);
        __Vtemp_h70b18791__2[0U] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
            [0U][0U];
        __Vtemp_h70b18791__2[1U] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
            [0U][1U];
        __Vtemp_h70b18791__2[2U] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
            [0U][2U];
        __Vtemp_h70b18791__2[3U] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
            [0U][3U];
        __Vtemp_h70b18791__2[4U] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
            [0U][4U];
        __Vtemp_h70b18791__2[5U] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
            [0U][5U];
        bufp->chgWData(oldp+224,(__Vtemp_h70b18791__2),192);
        bufp->chgWData(oldp+230,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory[0]),192);
        bufp->chgCData(oldp+236,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__a_first_counter),3);
        bufp->chgCData(oldp+237,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__opcode),3);
        bufp->chgCData(oldp+238,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__param),3);
        bufp->chgCData(oldp+239,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__size),3);
        bufp->chgCData(oldp+240,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__source),5);
        bufp->chgIData(oldp+241,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__address),32);
        bufp->chgCData(oldp+242,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__d_first_counter),3);
        bufp->chgCData(oldp+243,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__opcode_1),3);
        bufp->chgCData(oldp+244,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__param_1),2);
        bufp->chgCData(oldp+245,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__size_1),3);
        bufp->chgCData(oldp+246,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__source_1),5);
        bufp->chgBit(oldp+247,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__sink));
        bufp->chgBit(oldp+248,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__denied));
        bufp->chgIData(oldp+249,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__inflight),20);
        bufp->chgWData(oldp+250,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__inflight_opcodes),80);
        bufp->chgWData(oldp+253,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__inflight_sizes),80);
        bufp->chgCData(oldp+256,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__a_first_counter_1),3);
        bufp->chgBit(oldp+257,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__a_first_counter_1))));
        bufp->chgCData(oldp+258,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__d_first_counter_1),3);
        bufp->chgBit(oldp+259,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__d_first_counter_1))));
        bufp->chgBit(oldp+260,((6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__out_9_bits_opcode))));
        bufp->chgIData(oldp+261,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__watchdog),32);
        bufp->chgCData(oldp+262,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__d_first_counter_2),3);
        bufp->chgBit(oldp+263,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__d_first_counter_2))));
        bufp->chgBit(oldp+264,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__mask_acc));
        bufp->chgBit(oldp+265,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__mask_acc_1));
        bufp->chgBit(oldp+266,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__mask_eq_2));
        bufp->chgBit(oldp+267,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__mask_acc_2));
        bufp->chgBit(oldp+268,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__mask_eq_3));
        bufp->chgBit(oldp+269,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__mask_acc_3));
        bufp->chgBit(oldp+270,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__mask_eq_4));
        bufp->chgBit(oldp+271,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__mask_acc_4));
        bufp->chgBit(oldp+272,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__mask_eq_5));
        bufp->chgBit(oldp+273,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__mask_acc_5));
        bufp->chgCData(oldp+274,(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__mask_acc_5) 
                                    | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__mask_eq_5) 
                                       & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_address)) 
                                   << 7U) | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__mask_acc_5) 
                                               | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__mask_eq_5) 
                                                  & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_address))) 
                                              << 6U) 
                                             | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__mask_acc_4) 
                                                  | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__mask_eq_4) 
                                                     & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_address)) 
                                                 << 5U) 
                                                | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__mask_acc_4) 
                                                     | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__mask_eq_4) 
                                                        & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_address))) 
                                                    << 4U) 
                                                   | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__mask_acc_3) 
                                                        | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__mask_eq_3) 
                                                           & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_address)) 
                                                       << 3U) 
                                                      | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__mask_acc_3) 
                                                           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__mask_eq_3) 
                                                              & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_address))) 
                                                          << 2U) 
                                                         | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__mask_acc_2) 
                                                              | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__mask_eq_2) 
                                                                 & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_address)) 
                                                             << 1U) 
                                                            | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__mask_acc_2) 
                                                               | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__mask_eq_2) 
                                                                  & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_address))))))))))),8);
        bufp->chgIData(oldp+275,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT___same_cycle_resp_T_1)
                                   ? ((0x1fU >= (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_source))
                                       ? (0xfffffU 
                                          & ((IData)(1U) 
                                             << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_source)))
                                       : 0U) : 0U)),20);
        bufp->chgBit(oldp+276,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__same_cycle_resp));
        bufp->chgBit(oldp+277,((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT__empty)))));
        bufp->chgCData(oldp+278,((7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U])),3);
        bufp->chgCData(oldp+279,((7U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U] 
                                        >> 3U))),3);
        bufp->chgCData(oldp+280,((7U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U] 
                                        >> 6U))),3);
        bufp->chgCData(oldp+281,((0xfU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U] 
                                          >> 9U))),4);
        bufp->chgIData(oldp+282,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___l2_auto_out_a_bits_address),32);
        bufp->chgCData(oldp+283,((0xffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[1U] 
                                           >> 0xdU))),8);
        bufp->chgQData(oldp+284,((((QData)((IData)(
                                                   vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[3U])) 
                                   << 0x2bU) | (((QData)((IData)(
                                                                 vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[2U])) 
                                                 << 0xbU) 
                                                | ((QData)((IData)(
                                                                   vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[1U])) 
                                                   >> 0x15U)))),64);
        bufp->chgBit(oldp+286,((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[3U] 
                                      >> 0x15U))));
        bufp->chgBit(oldp+287,((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT__empty)))));
        bufp->chgCData(oldp+288,((7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT___ram_ext_R0_data[0U])),3);
        bufp->chgCData(oldp+289,((7U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT___ram_ext_R0_data[0U] 
                                        >> 3U))),3);
        bufp->chgCData(oldp+290,((7U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT___ram_ext_R0_data[0U] 
                                        >> 6U))),3);
        bufp->chgCData(oldp+291,((0xfU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT___ram_ext_R0_data[0U] 
                                          >> 9U))),4);
        bufp->chgIData(oldp+292,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___l2_auto_out_c_bits_address),32);
        bufp->chgQData(oldp+293,((((QData)((IData)(
                                                   vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT___ram_ext_R0_data[3U])) 
                                   << 0x33U) | (((QData)((IData)(
                                                                 vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT___ram_ext_R0_data[2U])) 
                                                 << 0x13U) 
                                                | ((QData)((IData)(
                                                                   vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT___ram_ext_R0_data[1U])) 
                                                   >> 0xdU)))),64);
        bufp->chgBit(oldp+295,((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT___ram_ext_R0_data[3U] 
                                      >> 0xdU))));
        bufp->chgBit(oldp+296,((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkD__DOT__d__DOT__full)))));
        bufp->chgBit(oldp+297,((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceE__DOT__io_e_q__DOT__empty)))));
        bufp->chgCData(oldp+298,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___l2_auto_out_e_bits_sink),3);
        bufp->chgBit(oldp+299,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__bundleIn_0_a_ready));
        bufp->chgBit(oldp+300,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__bundleIn_0_c_ready));
        bufp->chgBit(oldp+301,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__bundleIn_0_d_valid));
        bufp->chgCData(oldp+302,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__out_6_bits_opcode),3);
        bufp->chgCData(oldp+303,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__out_6_bits_param),2);
        bufp->chgCData(oldp+304,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__out_6_bits_size),3);
        bufp->chgCData(oldp+305,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__out_6_bits_source),4);
        bufp->chgCData(oldp+306,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__bundleIn_0_d_bits_sink),3);
        bufp->chgBit(oldp+307,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__out_6_bits_denied));
        bufp->chgQData(oldp+308,(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__muxStateEarly_1_0)
                                     ? (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__muxStateEarly_0)
                                          ? vlSelf->TestHarness__DOT__simdram__DOT_____05Fr_data_reg
                                          : 0ULL) | 
                                        ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__muxStateEarly_1)
                                          ? (((QData)((IData)(
                                                              vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[2U])) 
                                              << 0x32U) 
                                             | (((QData)((IData)(
                                                                 vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[1U])) 
                                                 << 0x12U) 
                                                | ((QData)((IData)(
                                                                   vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U])) 
                                                   >> 0xeU)))
                                          : 0ULL)) : 0ULL) 
                                   | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__muxStateEarly_1_1)
                                       ? (((QData)((IData)(
                                                           vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__q__DOT___ram_ext_R0_data[2U])) 
                                           << 0x30U) 
                                          | (((QData)((IData)(
                                                              vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__q__DOT___ram_ext_R0_data[1U])) 
                                              << 0x10U) 
                                             | ((QData)((IData)(
                                                                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__q__DOT___ram_ext_R0_data[0U])) 
                                                >> 0x10U)))
                                       : 0ULL)) | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__muxStateEarly_1_2)
                                                    ? 
                                                   (((QData)((IData)(
                                                                     vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__q_1__DOT___ram_ext_R0_data[2U])) 
                                                     << 0x30U) 
                                                    | (((QData)((IData)(
                                                                        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__q_1__DOT___ram_ext_R0_data[1U])) 
                                                        << 0x10U) 
                                                       | ((QData)((IData)(
                                                                          vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__q_1__DOT___ram_ext_R0_data[0U])) 
                                                          >> 0x10U)))
                                                    : 0ULL))),64);
        bufp->chgBit(oldp+310,(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__muxStateEarly_1_0) 
                                  & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__muxStateEarly_0) 
                                      & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins) 
                                         & ((0U != (IData)(vlSelf->TestHarness__DOT__simdram__DOT_____05Fr_resp_reg)) 
                                            | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_d_denied)))) 
                                     | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__muxStateEarly_1) 
                                        & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[2U] 
                                           >> 0xeU)))) 
                                 | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__muxStateEarly_1_1) 
                                    & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__q__DOT___ram_ext_R0_data[2U] 
                                       >> 0x10U))) 
                                | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__muxStateEarly_1_2) 
                                   & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__q_1__DOT___ram_ext_R0_data[2U] 
                                      >> 0x10U)))));
        bufp->chgBit(oldp+311,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__out_6_valid));
        bufp->chgBit(oldp+312,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT___portsAOI_in_0_a_ready_WIRE) 
                                & ((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__beatsLeft))
                                    ? (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__winnerQual_0))
                                    : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__state_1)))));
        bufp->chgBit(oldp+313,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT___portsAOI_in_0_a_ready_WIRE) 
                                & ((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__beatsLeft)) 
                                   | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__state_0)))));
        bufp->chgBit(oldp+314,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__toD));
        bufp->chgBit(oldp+315,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__out_1_earlyValid));
        bufp->chgCData(oldp+316,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__out_1_bits_opcode),3);
        bufp->chgBit(oldp+317,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__winnerQual_0));
        bufp->chgBit(oldp+318,((2U == (3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT___ram_ext_R0_data[0U] 
                                             >> 6U)))));
        bufp->chgBit(oldp+319,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__c_a_bits_a_mask_acc));
        bufp->chgBit(oldp+320,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__c_a_bits_a_mask_acc_1));
        bufp->chgBit(oldp+321,((1U == (3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT___ram_ext_R0_data[0U] 
                                             >> 6U)))));
        bufp->chgBit(oldp+322,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__c_a_bits_a_mask_eq_2));
        bufp->chgBit(oldp+323,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__c_a_bits_a_mask_acc_2));
        bufp->chgBit(oldp+324,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__c_a_bits_a_mask_eq_3));
        bufp->chgBit(oldp+325,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__c_a_bits_a_mask_acc_3));
        bufp->chgBit(oldp+326,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__c_a_bits_a_mask_eq_4));
        bufp->chgBit(oldp+327,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__c_a_bits_a_mask_acc_4));
        bufp->chgBit(oldp+328,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__c_a_bits_a_mask_eq_5));
        bufp->chgBit(oldp+329,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__c_a_bits_a_mask_acc_5));
        bufp->chgCData(oldp+330,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__d_first_counter),3);
        bufp->chgBit(oldp+331,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__d_grant));
        bufp->chgBit(oldp+332,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__out_6_ready));
        bufp->chgCData(oldp+333,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__bundleIn_0_d_bits_sink_r),3);
        bufp->chgBit(oldp+334,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__wSourceVec_0));
        bufp->chgBit(oldp+335,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__wSourceVec_1));
        bufp->chgBit(oldp+336,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__wSourceVec_2));
        bufp->chgBit(oldp+337,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__wSourceVec_3));
        bufp->chgBit(oldp+338,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__wSourceVec_4));
        bufp->chgBit(oldp+339,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__wSourceVec_5));
        bufp->chgBit(oldp+340,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__wSourceVec_6));
        bufp->chgBit(oldp+341,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__wSourceVec_7));
        bufp->chgBit(oldp+342,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__wSourceVec_8));
        bufp->chgBit(oldp+343,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__wSourceVec_9));
        bufp->chgBit(oldp+344,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__dWHeld_r));
        bufp->chgCData(oldp+345,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__out_3_bits_opcode),3);
        bufp->chgCData(oldp+346,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__beatsLeft),3);
        bufp->chgBit(oldp+347,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__beatsLeft))));
        bufp->chgBit(oldp+348,(((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__winnerQual_0)) 
                                & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__out_1_earlyValid))));
        bufp->chgBit(oldp+349,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__state_0));
        bufp->chgBit(oldp+350,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__state_1));
        bufp->chgBit(oldp+351,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__muxStateEarly_0));
        bufp->chgBit(oldp+352,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__muxStateEarly_1));
        bufp->chgCData(oldp+353,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__beatsLeft_1),3);
        bufp->chgBit(oldp+354,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__beatsLeft_1))));
        bufp->chgBit(oldp+355,((1U & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__out_9_valid)) 
                                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__q__DOT__empty))))));
        bufp->chgBit(oldp+356,((1U & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___GEN_1)) 
                                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__q_1__DOT__empty))))));
        bufp->chgBit(oldp+357,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__state_1_0));
        bufp->chgBit(oldp+358,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__state_1_1));
        bufp->chgBit(oldp+359,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__state_1_2));
        bufp->chgBit(oldp+360,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__muxStateEarly_1_0));
        bufp->chgBit(oldp+361,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__muxStateEarly_1_1));
        bufp->chgBit(oldp+362,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__muxStateEarly_1_2));
        bufp->chgBit(oldp+363,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__winnerQual_1));
        bufp->chgBit(oldp+364,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__aWOk));
        bufp->chgCData(oldp+365,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT__a_first_counter),3);
        bufp->chgCData(oldp+366,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT__opcode),3);
        bufp->chgCData(oldp+367,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT__param),3);
        bufp->chgCData(oldp+368,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT__size),3);
        bufp->chgCData(oldp+369,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT__source),4);
        bufp->chgIData(oldp+370,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT__address),32);
        bufp->chgCData(oldp+371,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT__d_first_counter),3);
        bufp->chgCData(oldp+372,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT__opcode_1),3);
        bufp->chgCData(oldp+373,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT__param_1),2);
        bufp->chgCData(oldp+374,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT__size_1),3);
        bufp->chgCData(oldp+375,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT__source_1),4);
        bufp->chgCData(oldp+376,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT__sink),3);
        bufp->chgBit(oldp+377,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT__denied));
        bufp->chgCData(oldp+378,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT__c_first_counter),3);
        bufp->chgCData(oldp+379,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT__opcode_3),3);
        bufp->chgCData(oldp+380,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT__param_3),3);
        bufp->chgCData(oldp+381,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT__size_3),3);
        bufp->chgCData(oldp+382,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT__source_3),4);
        bufp->chgIData(oldp+383,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT__address_2),32);
        bufp->chgSData(oldp+384,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT__inflight),10);
        bufp->chgQData(oldp+385,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT__inflight_opcodes),40);
        bufp->chgQData(oldp+387,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT__inflight_sizes),40);
        bufp->chgCData(oldp+389,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT__a_first_counter_1),3);
        bufp->chgBit(oldp+390,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT__a_first_counter_1))));
        bufp->chgCData(oldp+391,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT__d_first_counter_1),3);
        bufp->chgBit(oldp+392,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT__d_first_counter_1))));
        bufp->chgBit(oldp+393,((6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__out_6_bits_opcode))));
        bufp->chgIData(oldp+394,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT__watchdog),32);
        bufp->chgSData(oldp+395,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT__inflight_1),10);
        bufp->chgQData(oldp+396,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT__inflight_sizes_1),40);
        bufp->chgCData(oldp+398,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT__c_first_counter_1),3);
        bufp->chgBit(oldp+399,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT__c_first_counter_1))));
        bufp->chgCData(oldp+400,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT__d_first_counter_2),3);
        bufp->chgBit(oldp+401,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT__d_first_counter_2))));
        bufp->chgIData(oldp+402,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT__watchdog_1),32);
        bufp->chgCData(oldp+403,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT__inflight_2),8);
        bufp->chgCData(oldp+404,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT__d_first_counter_3),3);
        bufp->chgBit(oldp+405,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT__d_first_counter_3))));
        bufp->chgCData(oldp+406,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT__d_set),8);
        bufp->chgBit(oldp+407,((2U == (3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U] 
                                             >> 6U)))));
        bufp->chgBit(oldp+408,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT__mask_acc));
        bufp->chgBit(oldp+409,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT__mask_acc_1));
        bufp->chgBit(oldp+410,((1U == (3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U] 
                                             >> 6U)))));
        bufp->chgBit(oldp+411,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT__mask_eq_2));
        bufp->chgBit(oldp+412,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT__mask_acc_2));
        bufp->chgBit(oldp+413,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT__mask_eq_3));
        bufp->chgBit(oldp+414,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT__mask_acc_3));
        bufp->chgBit(oldp+415,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT__mask_eq_4));
        bufp->chgBit(oldp+416,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT__mask_acc_4));
        bufp->chgBit(oldp+417,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT__mask_eq_5));
        bufp->chgBit(oldp+418,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT__mask_acc_5));
        bufp->chgCData(oldp+419,(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT__mask_acc_5) 
                                    | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT__mask_eq_5) 
                                       & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___l2_auto_out_a_bits_address)) 
                                   << 7U) | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT__mask_acc_5) 
                                               | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT__mask_eq_5) 
                                                  & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___l2_auto_out_a_bits_address))) 
                                              << 6U) 
                                             | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT__mask_acc_4) 
                                                  | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT__mask_eq_4) 
                                                     & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___l2_auto_out_a_bits_address)) 
                                                 << 5U) 
                                                | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT__mask_acc_4) 
                                                     | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT__mask_eq_4) 
                                                        & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___l2_auto_out_a_bits_address))) 
                                                    << 4U) 
                                                   | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT__mask_acc_3) 
                                                        | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT__mask_eq_3) 
                                                           & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___l2_auto_out_a_bits_address)) 
                                                       << 3U) 
                                                      | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT__mask_acc_3) 
                                                           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT__mask_eq_3) 
                                                              & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___l2_auto_out_a_bits_address))) 
                                                          << 2U) 
                                                         | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT__mask_acc_2) 
                                                              | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT__mask_eq_2) 
                                                                 & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___l2_auto_out_a_bits_address)) 
                                                             << 1U) 
                                                            | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT__mask_acc_2) 
                                                               | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT__mask_eq_2) 
                                                                  & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___l2_auto_out_a_bits_address))))))))))),8);
        bufp->chgBit(oldp+420,((((8U == (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___l2_auto_out_c_bits_address 
                                         >> 0x1cU)) 
                                 | (0x10000U == (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___l2_auto_out_c_bits_address 
                                                 >> 0xcU))) 
                                | (2U == (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___l2_auto_out_c_bits_address 
                                          >> 0x10U)))));
        bufp->chgSData(oldp+421,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT___same_cycle_resp_T_1)
                                   ? ((0xfU >= (0xfU 
                                                & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 9U)))
                                       ? (0x3ffU & 
                                          ((IData)(1U) 
                                           << (0xfU 
                                               & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U] 
                                                  >> 9U))))
                                       : 0U) : 0U)),10);
        bufp->chgBit(oldp+422,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT__same_cycle_resp));
        bufp->chgSData(oldp+423,((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT___same_cycle_resp_T_3) 
                                   & (6U == (6U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT___ram_ext_R0_data[0U])))
                                   ? ((0xfU >= (0xfU 
                                                & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT___ram_ext_R0_data[0U] 
                                                   >> 9U)))
                                       ? (0x3ffU & 
                                          ((IData)(1U) 
                                           << (0xfU 
                                               & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT___ram_ext_R0_data[0U] 
                                                  >> 9U))))
                                       : 0U) : 0U)),10);
        bufp->chgBit(oldp+424,((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT___same_cycle_resp_T_3) 
                                 & (6U == (6U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT___ram_ext_R0_data[0U]))) 
                                & ((0xfU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT___ram_ext_R0_data[0U] 
                                            >> 9U)) 
                                   == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__out_6_bits_source)))));
        bufp->chgBit(oldp+425,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT____Vcellinp__pool__io_alloc_ready));
        bufp->chgBit(oldp+426,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__pool__DOT__valid));
        bufp->chgCData(oldp+427,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__pool__DOT__select),3);
        bufp->chgCData(oldp+428,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__pool__DOT__bitmap),8);
        bufp->chgCData(oldp+429,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__pool__DOT__taken),8);
        bufp->chgBit(oldp+430,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__pool__DOT__REG));
        bufp->chgCData(oldp+431,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__pool__DOT__bitmap1),8);
        bufp->chgBit(oldp+432,(((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT__empty)) 
                                & (6U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT___ram_ext_R0_data[0U])))));
        bufp->chgBit(oldp+433,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__out_6_ready) 
                                & ((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__beatsLeft_1))
                                    ? (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__out_9_valid))
                                    : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__state_1_1)))));
        bufp->chgBit(oldp+434,((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__q__DOT__full)))));
        bufp->chgBit(oldp+435,((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__q__DOT__empty)))));
        bufp->chgCData(oldp+436,((7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__q__DOT___ram_ext_R0_data[0U])),3);
        bufp->chgCData(oldp+437,((3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__q__DOT___ram_ext_R0_data[0U] 
                                        >> 3U))),2);
        bufp->chgCData(oldp+438,((7U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__q__DOT___ram_ext_R0_data[0U] 
                                        >> 5U))),3);
        bufp->chgCData(oldp+439,((0xfU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__q__DOT___ram_ext_R0_data[0U] 
                                          >> 8U))),4);
        bufp->chgCData(oldp+440,((7U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__q__DOT___ram_ext_R0_data[0U] 
                                        >> 0xcU))),3);
        bufp->chgBit(oldp+441,((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__q__DOT___ram_ext_R0_data[0U] 
                                      >> 0xfU))));
        bufp->chgQData(oldp+442,((((QData)((IData)(
                                                   vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__q__DOT___ram_ext_R0_data[2U])) 
                                   << 0x30U) | (((QData)((IData)(
                                                                 vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__q__DOT___ram_ext_R0_data[1U])) 
                                                 << 0x10U) 
                                                | ((QData)((IData)(
                                                                   vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__q__DOT___ram_ext_R0_data[0U])) 
                                                   >> 0x10U)))),64);
        bufp->chgBit(oldp+444,((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__q__DOT___ram_ext_R0_data[2U] 
                                      >> 0x10U))));
        bufp->chgBit(oldp+445,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__q__DOT__enq_ptr_value));
        bufp->chgBit(oldp+446,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__q__DOT__deq_ptr_value));
        bufp->chgBit(oldp+447,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__q__DOT__maybe_full));
        bufp->chgBit(oldp+448,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__q__DOT__ptr_match));
        bufp->chgBit(oldp+449,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__q__DOT__empty));
        bufp->chgBit(oldp+450,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__q__DOT__full));
        bufp->chgBit(oldp+451,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__q__DOT__do_enq));
        bufp->chgBit(oldp+452,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__q__DOT__do_deq));
        VL_EXTEND_WI(81,12, __Vtemp_h4eeb017a__0, (6U 
                                                   | ((0xf00U 
                                                       & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT___ram_ext_R0_data[0U] 
                                                          >> 1U)) 
                                                      | (0xe0U 
                                                         & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT___ram_ext_R0_data[0U] 
                                                            >> 1U)))));
        bufp->chgWData(oldp+453,(__Vtemp_h4eeb017a__0),81);
        bufp->chgWData(oldp+456,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__q__DOT___ram_ext_R0_data),81);
        bufp->chgWData(oldp+459,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__q__DOT__ram_ext__DOT__Memory[0]),81);
        bufp->chgWData(oldp+462,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__q__DOT__ram_ext__DOT__Memory[1]),81);
        bufp->chgBit(oldp+465,(((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT__empty)) 
                                & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__toD))));
        bufp->chgBit(oldp+466,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__out_6_ready) 
                                & ((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__beatsLeft_1))
                                    ? (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___GEN_1))
                                    : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__state_1_2)))));
        bufp->chgBit(oldp+467,((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__q_1__DOT__full)))));
        bufp->chgBit(oldp+468,((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__q_1__DOT__empty)))));
        bufp->chgCData(oldp+469,((7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__q_1__DOT___ram_ext_R0_data[0U])),3);
        bufp->chgCData(oldp+470,((3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__q_1__DOT___ram_ext_R0_data[0U] 
                                        >> 3U))),2);
        bufp->chgCData(oldp+471,((7U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__q_1__DOT___ram_ext_R0_data[0U] 
                                        >> 5U))),3);
        bufp->chgCData(oldp+472,((0xfU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__q_1__DOT___ram_ext_R0_data[0U] 
                                          >> 8U))),4);
        bufp->chgCData(oldp+473,((7U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__q_1__DOT___ram_ext_R0_data[0U] 
                                        >> 0xcU))),3);
        bufp->chgBit(oldp+474,((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__q_1__DOT___ram_ext_R0_data[0U] 
                                      >> 0xfU))));
        bufp->chgQData(oldp+475,((((QData)((IData)(
                                                   vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__q_1__DOT___ram_ext_R0_data[2U])) 
                                   << 0x30U) | (((QData)((IData)(
                                                                 vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__q_1__DOT___ram_ext_R0_data[1U])) 
                                                 << 0x10U) 
                                                | ((QData)((IData)(
                                                                   vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__q_1__DOT___ram_ext_R0_data[0U])) 
                                                   >> 0x10U)))),64);
        bufp->chgBit(oldp+477,((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__q_1__DOT___ram_ext_R0_data[2U] 
                                      >> 0x10U))));
        bufp->chgBit(oldp+478,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__q_1__DOT__enq_ptr_value));
        bufp->chgBit(oldp+479,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__q_1__DOT__deq_ptr_value));
        bufp->chgBit(oldp+480,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__q_1__DOT__maybe_full));
        bufp->chgBit(oldp+481,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__q_1__DOT__ptr_match));
        bufp->chgBit(oldp+482,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__q_1__DOT__empty));
        bufp->chgBit(oldp+483,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__q_1__DOT__full));
        bufp->chgBit(oldp+484,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__q_1__DOT__do_enq));
        bufp->chgBit(oldp+485,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__q_1__DOT__do_deq));
        VL_EXTEND_WI(81,12, __Vtemp_h5fdd3a8b__0, (4U 
                                                   | ((0xf00U 
                                                       & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U] 
                                                          >> 1U)) 
                                                      | (0xe0U 
                                                         & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U] 
                                                            >> 1U)))));
        bufp->chgWData(oldp+486,(__Vtemp_h5fdd3a8b__0),81);
        bufp->chgWData(oldp+489,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__q_1__DOT___ram_ext_R0_data),81);
        bufp->chgWData(oldp+492,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__q_1__DOT__ram_ext__DOT__Memory[0]),81);
        bufp->chgWData(oldp+495,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__q_1__DOT__ram_ext__DOT__Memory[1]),81);
        bufp->chgBit(oldp+498,((3U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT___GEN_4))));
        bufp->chgBit(oldp+499,((2U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT___GEN_4))));
        bufp->chgBit(oldp+500,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__flushInValid));
        bufp->chgQData(oldp+501,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__flushInAddress),64);
        bufp->chgBit(oldp+503,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__flushOutValid));
        bufp->chgBit(oldp+504,((4U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                       [0U][0U]))));
        bufp->chgQData(oldp+505,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_frontMask),64);
        bufp->chgQData(oldp+507,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_backMask),64);
        bufp->chgCData(oldp+509,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_oindex),2);
        bufp->chgBit(oldp+510,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_iready));
        bufp->chgBit(oldp+511,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_oready));
        bufp->chgBit(oldp+512,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__flushSelect));
        bufp->chgBit(oldp+513,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_f_wivalid_4));
        bufp->chgBit(oldp+514,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_f_wivalid_5));
        bufp->chgBit(oldp+515,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__flushInValid) 
                                & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__flushSelect))));
        bufp->chgIData(oldp+516,((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__flushInAddress)),32);
        bufp->chgBit(oldp+517,((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__flushOutValid)))));
        bufp->chgIData(oldp+518,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT___inclusive_cache_bank_sched_io_in_b_bits_address),32);
        bufp->chgIData(oldp+519,(((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[1U] 
                                   << 0x13U) | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U] 
                                                >> 0xdU))),32);
        bufp->chgIData(oldp+520,(((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT___ram_ext_R0_data[1U] 
                                   << 0x13U) | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT___ram_ext_R0_data[0U] 
                                                >> 0xdU))),32);
        bufp->chgBit(oldp+521,((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkX__DOT__x__DOT__maybe_full)))));
        bufp->chgBit(oldp+522,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceX__DOT__io_x_q__DOT__maybe_full));
        bufp->chgBit(oldp+523,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__request_alloc_cases) 
                                | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__queue) 
                                   & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bypassQueue) 
                                      | (0xfffffffU 
                                         != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT__used))))));
        bufp->chgSData(oldp+524,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshr_request),12);
        bufp->chgSData(oldp+525,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__robin_filter),12);
        bufp->chgSData(oldp+526,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshr_selectOH),12);
        bufp->chgCData(oldp+527,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__schedule_d_bits_sink),4);
        bufp->chgSData(oldp+528,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__scheduleTag),13);
        bufp->chgSData(oldp+529,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__nestedwb_set),10);
        bufp->chgSData(oldp+530,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__nestedwb_tag),13);
        bufp->chgBit(oldp+531,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__nestedwb_b_clr_dirty));
        bufp->chgBit(oldp+532,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__nestedwb_b_toN));
        bufp->chgBit(oldp+533,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__nestedwb_b_toB));
        bufp->chgBit(oldp+534,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__nestedwb_c_set_dirty));
        bufp->chgBit(oldp+535,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__request_valid));
        bufp->chgSData(oldp+536,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__request_bits_set),10);
        bufp->chgSData(oldp+537,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__setMatches),12);
        bufp->chgBit(oldp+538,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__setMatches))));
        bufp->chgBit(oldp+539,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__nestC));
        bufp->chgCData(oldp+540,((3U & (- (IData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___sinkC_io_req_valid))))),2);
        bufp->chgSData(oldp+541,((0x3ffU | (0xc00U 
                                            & ((- (IData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___sinkC_io_req_valid))) 
                                               << 0xaU)))),12);
        bufp->chgSData(oldp+542,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__lowerMatches),12);
        bufp->chgBit(oldp+543,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__queue));
        bufp->chgSData(oldp+544,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__lowerMatches1),12);
        bufp->chgQData(oldp+545,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__selected_requests),36);
        bufp->chgBit(oldp+547,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bypassMatches));
        bufp->chgBit(oldp+548,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__may_pop));
        bufp->chgBit(oldp+549,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bypass));
        bufp->chgBit(oldp+550,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__will_pop));
        bufp->chgBit(oldp+551,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bypass_1));
        bufp->chgBit(oldp+552,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bypass_2));
        bufp->chgBit(oldp+553,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bypass_3));
        bufp->chgBit(oldp+554,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bypass_4));
        bufp->chgBit(oldp+555,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bypass_5));
        bufp->chgBit(oldp+556,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bypass_6));
        bufp->chgBit(oldp+557,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bypass_7));
        bufp->chgBit(oldp+558,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bypass_8));
        bufp->chgBit(oldp+559,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bypass_9));
        bufp->chgBit(oldp+560,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bypass_10));
        bufp->chgBit(oldp+561,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bypass_11));
        bufp->chgBit(oldp+562,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bypass_12));
        bufp->chgBit(oldp+563,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__lb_tag_mismatch));
        bufp->chgBit(oldp+564,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshr_uses_directory_assuming_no_bypass));
        bufp->chgBit(oldp+565,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshr_uses_directory_for_lb));
        bufp->chgBit(oldp+566,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshr_uses_directory));
        bufp->chgBit(oldp+567,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bypassQueue));
        bufp->chgBit(oldp+568,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__request_alloc_cases));
        bufp->chgBit(oldp+569,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__alloc_uses_directory));
        bufp->chgSData(oldp+570,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshr_insertOH),13);
        bufp->chgSData(oldp+571,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directoryFanout),13);
        bufp->chgBit(oldp+572,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__abc_mshrs_0__io_allocate_valid));
        bufp->chgBit(oldp+573,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___GEN_47)
                                       ? (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___sinkC_io_req_valid))
                                       : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT___data_ext_R0_data)))));
        bufp->chgBit(oldp+574,((1U & ((~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___T_35) 
                                          | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bypass_1))) 
                                      & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT___data_ext_R0_data 
                                                 >> 1U))))));
        bufp->chgBit(oldp+575,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__abc_mshrs_0__io_allocate_bits_prio_2));
        bufp->chgBit(oldp+576,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__abc_mshrs_0__io_allocate_bits_control));
        bufp->chgCData(oldp+577,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__abc_mshrs_0__io_allocate_bits_opcode),3);
        bufp->chgCData(oldp+578,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__abc_mshrs_0__io_allocate_bits_param),3);
        bufp->chgCData(oldp+579,((7U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___GEN_47)
                                         ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___view___05FWIRE_11_size)
                                         : (IData)(
                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT___data_ext_R0_data 
                                                    >> 0xaU))))),3);
        bufp->chgCData(oldp+580,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__abc_mshrs_0__io_allocate_bits_source),6);
        bufp->chgSData(oldp+581,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___GEN_10),13);
        bufp->chgCData(oldp+582,((0x3fU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___GEN_47)
                                            ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___view___05FWIRE_11_offset)
                                            : (IData)(
                                                      (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT___data_ext_R0_data 
                                                       >> 0x20U))))),6);
        bufp->chgCData(oldp+583,((0x3fU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___GEN_47)
                                            ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___view___05FWIRE_11_put)
                                            : (IData)(
                                                      (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT___data_ext_R0_data 
                                                       >> 0x26U))))),6);
        bufp->chgSData(oldp+584,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___T_35)
                                   ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__request_bits_set)
                                   : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT__request_set))),10);
        bufp->chgBit(oldp+585,(((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___T_35)) 
                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___GEN_10) 
                                   == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT__request_tag)))));
        bufp->chgBit(oldp+586,((1U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directoryFanout))));
        bufp->chgBit(oldp+587,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___directory_io_result_bits_dirty));
        bufp->chgCData(oldp+588,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___directory_io_result_bits_state),2);
        bufp->chgBit(oldp+589,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___directory_io_result_bits_clients));
        bufp->chgSData(oldp+590,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___directory_io_result_bits_tag),13);
        bufp->chgBit(oldp+591,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___directory_io_result_bits_hit));
        bufp->chgCData(oldp+592,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___directory_io_result_bits_way),3);
        bufp->chgBit(oldp+593,((1U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshr_selectOH))));
        bufp->chgBit(oldp+594,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__abc_mshrs_0__io_sinkc_valid));
        bufp->chgBit(oldp+595,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__last));
        bufp->chgSData(oldp+596,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__tag),13);
        bufp->chgCData(oldp+597,((0x3fU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__c__DOT___ram_ext_R0_data[0U] 
                                           >> 9U))),6);
        bufp->chgCData(oldp+598,((7U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__c__DOT___ram_ext_R0_data[0U] 
                                        >> 3U))),3);
        bufp->chgBit(oldp+599,((1U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__c__DOT___ram_ext_R0_data[0U])));
        bufp->chgBit(oldp+600,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__abc_mshrs_0__io_sinkd_valid));
        bufp->chgBit(oldp+601,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkD__DOT__last));
        bufp->chgCData(oldp+602,((7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkD__DOT__d__DOT___ram_ext_R0_data[0U])),3);
        bufp->chgCData(oldp+603,((3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkD__DOT__d__DOT___ram_ext_R0_data[0U] 
                                        >> 3U))),3);
        bufp->chgCData(oldp+604,((7U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkD__DOT__d__DOT___ram_ext_R0_data[0U] 
                                        >> 0xcU))),3);
        bufp->chgBit(oldp+605,((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkD__DOT__d__DOT___ram_ext_R0_data[0U] 
                                      >> 0xfU))));
        bufp->chgBit(oldp+606,(((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_e_q__DOT__empty)) 
                                & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___tile_prci_domain_auto_tl_master_clock_xing_out_1_e_bits_sink)))));
        bufp->chgBit(oldp+607,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT__request_valid));
        bufp->chgSData(oldp+608,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT__request_set),10);
        bufp->chgSData(oldp+609,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT__request_tag),13);
        bufp->chgCData(oldp+610,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT__meta_way),3);
        bufp->chgBit(oldp+611,((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT__meta_valid)))));
        bufp->chgBit(oldp+612,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT__meta_valid) 
                                & (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT__w_rprobeackfirst)) 
                                    | (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT__w_pprobeackfirst))) 
                                   | (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT__w_grantfirst))))));
        bufp->chgBit(oldp+613,((((((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT___io_schedule_bits_a_valid_output) 
                                     | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT___io_schedule_bits_b_valid_output)) 
                                    | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT___io_schedule_bits_c_valid_output)) 
                                   | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT___io_schedule_bits_d_valid_output)) 
                                  | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT___io_schedule_bits_e_valid_output)) 
                                 | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT___io_schedule_bits_x_valid_output)) 
                                | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT___io_schedule_bits_dir_valid_output))));
        bufp->chgBit(oldp+614,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT___io_schedule_bits_a_valid_output));
        bufp->chgCData(oldp+615,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT__req_needT)
                                   ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT__meta_hit)
                                       ? 2U : 1U) : 0U)),3);
        bufp->chgBit(oldp+616,((1U & ((6U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT__request_size)) 
                                      | (~ ((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT__request_opcode)) 
                                            | (7U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT__request_opcode))))))));
        bufp->chgBit(oldp+617,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT___io_schedule_bits_b_valid_output));
        bufp->chgCData(oldp+618,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT__s_rprobe)
                                   ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT__request_prio_1)
                                       ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT__request_param)
                                       : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT__req_needT)
                                           ? 2U : 1U))
                                   : 2U)),3);
        bufp->chgSData(oldp+619,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT__s_rprobe)
                                   ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT__request_tag)
                                   : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT__meta_tag))),13);
        bufp->chgBit(oldp+620,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT__meta_clients) 
                                & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT__excluded_client)))));
        bufp->chgBit(oldp+621,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT___io_schedule_bits_c_valid_output));
        bufp->chgCData(oldp+622,((6U | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT__meta_dirty))),3);
        bufp->chgCData(oldp+623,(((1U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT__meta_state))
                                   ? 2U : 1U)),3);
        bufp->chgSData(oldp+624,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT__meta_tag),13);
        bufp->chgBit(oldp+625,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT__meta_dirty));
        bufp->chgBit(oldp+626,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT___io_schedule_bits_d_valid_output));
        bufp->chgBit(oldp+627,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT__request_prio_0));
        bufp->chgBit(oldp+628,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT__request_prio_2));
        bufp->chgCData(oldp+629,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT__request_opcode),3);
        bufp->chgCData(oldp+630,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT__req_acquire)
                                   ? ((1U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT__request_param))
                                       ? 1U : ((2U 
                                                == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT__request_param))
                                                ? (
                                                   (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT__meta_hit) 
                                                     & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT__meta_clients)) 
                                                    & (0x20U 
                                                       == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT__request_source)))
                                                    ? 2U
                                                    : 1U)
                                                : (
                                                   (0U 
                                                    == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT__request_param))
                                                    ? 
                                                   ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT__req_acquire) 
                                                    & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT__meta_hit)
                                                        ? 
                                                       ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT__meta_clients)) 
                                                        & (3U 
                                                           == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT__meta_state)))
                                                        : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT__gotT)))
                                                    : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT__request_param))))
                                   : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT__request_param))),3);
        bufp->chgCData(oldp+631,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT__request_size),3);
        bufp->chgCData(oldp+632,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT__request_source),6);
        bufp->chgCData(oldp+633,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT__request_offset),6);
        bufp->chgCData(oldp+634,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT__request_put),6);
        bufp->chgBit(oldp+635,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT__bad_grant));
        bufp->chgBit(oldp+636,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT___io_schedule_bits_e_valid_output));
        bufp->chgCData(oldp+637,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT__sink),3);
        bufp->chgBit(oldp+638,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT___io_schedule_bits_x_valid_output));
        bufp->chgBit(oldp+639,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT___io_schedule_bits_dir_valid_output));
        bufp->chgBit(oldp+640,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT__s_release) 
                                & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT___io_schedule_bits_dir_bits_data_WIRE_dirty))));
        bufp->chgCData(oldp+641,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT__s_release)
                                   ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT___io_schedule_bits_dir_bits_data_WIRE_state)
                                   : 0U)),2);
        bufp->chgBit(oldp+642,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT__s_release) 
                                & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT___io_schedule_bits_dir_bits_data_WIRE_clients))));
        bufp->chgSData(oldp+643,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT__s_release)
                                   ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT___GEN_0)
                                       ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT__meta_tag)
                                       : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT__request_tag))
                                   : 0U)),13);
        bufp->chgBit(oldp+644,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT__no_wait));
        bufp->chgBit(oldp+645,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT__request_prio_1));
        bufp->chgBit(oldp+646,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT__request_control));
        bufp->chgCData(oldp+647,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT__request_param),3);
        bufp->chgBit(oldp+648,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT__meta_valid));
        bufp->chgCData(oldp+649,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT__meta_state),2);
        bufp->chgBit(oldp+650,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT__meta_clients));
        bufp->chgBit(oldp+651,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT__meta_hit));
        bufp->chgBit(oldp+652,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT__s_rprobe));
        bufp->chgBit(oldp+653,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT__w_rprobeackfirst));
        bufp->chgBit(oldp+654,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT__w_rprobeacklast));
        bufp->chgBit(oldp+655,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT__s_release));
        bufp->chgBit(oldp+656,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT__w_releaseack));
        bufp->chgBit(oldp+657,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT__s_pprobe));
        bufp->chgBit(oldp+658,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT__s_acquire));
        bufp->chgBit(oldp+659,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT__s_flush));
        bufp->chgBit(oldp+660,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT__w_grantfirst));
        bufp->chgBit(oldp+661,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT__w_grantlast));
        bufp->chgBit(oldp+662,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT__w_grant));
        bufp->chgBit(oldp+663,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT__w_pprobeackfirst));
        bufp->chgBit(oldp+664,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT__w_pprobeacklast));
        bufp->chgBit(oldp+665,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT__w_pprobeack));
        bufp->chgBit(oldp+666,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT__s_grantack));
        bufp->chgBit(oldp+667,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT__s_execute));
        bufp->chgBit(oldp+668,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT__w_grantack));
        bufp->chgBit(oldp+669,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT__s_writeback));
        bufp->chgBit(oldp+670,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT__gotT));
        bufp->chgBit(oldp+671,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT__probes_done));
        bufp->chgBit(oldp+672,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT__probes_toN));
        bufp->chgBit(oldp+673,((0x20U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT__request_source))));
        bufp->chgBit(oldp+674,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT__req_needT));
        bufp->chgBit(oldp+675,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT__req_acquire));
        bufp->chgBit(oldp+676,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT__excluded_client));
        bufp->chgBit(oldp+677,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT__new_meta_hit));
        bufp->chgBit(oldp+678,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT__new_request_prio_2));
        bufp->chgBit(oldp+679,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT__new_meta_dirty));
        bufp->chgCData(oldp+680,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT__new_meta_state),2);
        bufp->chgBit(oldp+681,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT__new_meta_clients));
        bufp->chgBit(oldp+682,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT__new_request_control));
        bufp->chgCData(oldp+683,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT__new_request_opcode),3);
        bufp->chgCData(oldp+684,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT__new_request_param),3);
        bufp->chgBit(oldp+685,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT__new_needT));
        bufp->chgBit(oldp+686,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT__new_clientBit));
        bufp->chgBit(oldp+687,((0x20U == (0x3fU & (
                                                   vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__c__DOT___ram_ext_R0_data[0U] 
                                                   >> 9U)))));
        bufp->chgBit(oldp+688,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT__last_probe));
        bufp->chgCData(oldp+689,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT__meta_hit)
                                   ? (0xfU & ((0x4200U 
                                               | ((((0x2000U 
                                                     & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT__meta_clients)) 
                                                        << 0xdU)) 
                                                    | (0x1000U 
                                                       & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT__meta_dirty)) 
                                                          << 0xcU))) 
                                                   | ((0x100U 
                                                       & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT__meta_dirty)) 
                                                          << 8U)) 
                                                      | (0x10U 
                                                         & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT__meta_clients)) 
                                                            << 4U)))) 
                                                  | (8U 
                                                     & ((~ (IData)(
                                                                   (0U 
                                                                    != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT__meta_state)))) 
                                                        << 3U)))) 
                                              >> (0xfU 
                                                  & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT__meta_state) 
                                                     << 2U))))
                                   : 8U)),4);
        bufp->chgCData(oldp+690,((0xfU & ((0x4200U 
                                           | ((((0x2000U 
                                                 & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT___io_schedule_bits_dir_bits_data_WIRE_clients)) 
                                                    << 0xdU)) 
                                                | (0x1000U 
                                                   & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT___io_schedule_bits_dir_bits_data_WIRE_dirty)) 
                                                      << 0xcU))) 
                                               | ((0x100U 
                                                   & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT___io_schedule_bits_dir_bits_data_WIRE_dirty)) 
                                                      << 8U)) 
                                                  | (0x10U 
                                                     & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT___io_schedule_bits_dir_bits_data_WIRE_clients)) 
                                                        << 4U)))) 
                                              | ((0U 
                                                  == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT___io_schedule_bits_dir_bits_data_WIRE_state)) 
                                                 << 3U))) 
                                          >> (0xfU 
                                              & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT___io_schedule_bits_dir_bits_data_WIRE_state) 
                                                 << 2U))))),4);
        bufp->chgBit(oldp+691,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__abc_mshrs_1__io_allocate_valid));
        bufp->chgBit(oldp+692,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___GEN_48)
                                       ? (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___sinkC_io_req_valid))
                                       : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT___data_ext_R0_data)))));
        bufp->chgBit(oldp+693,((1U & ((~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___T_39) 
                                          | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bypass_2))) 
                                      & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT___data_ext_R0_data 
                                                 >> 1U))))));
        bufp->chgBit(oldp+694,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__abc_mshrs_1__io_allocate_bits_prio_2));
        bufp->chgBit(oldp+695,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__abc_mshrs_1__io_allocate_bits_control));
        bufp->chgCData(oldp+696,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__abc_mshrs_1__io_allocate_bits_opcode),3);
        bufp->chgCData(oldp+697,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__abc_mshrs_1__io_allocate_bits_param),3);
        bufp->chgCData(oldp+698,((7U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___GEN_48)
                                         ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___view___05FWIRE_11_size)
                                         : (IData)(
                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT___data_ext_R0_data 
                                                    >> 0xaU))))),3);
        bufp->chgCData(oldp+699,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__abc_mshrs_1__io_allocate_bits_source),6);
        bufp->chgSData(oldp+700,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___GEN_9),13);
        bufp->chgCData(oldp+701,((0x3fU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___GEN_48)
                                            ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___view___05FWIRE_11_offset)
                                            : (IData)(
                                                      (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT___data_ext_R0_data 
                                                       >> 0x20U))))),6);
        bufp->chgCData(oldp+702,((0x3fU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___GEN_48)
                                            ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___view___05FWIRE_11_put)
                                            : (IData)(
                                                      (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT___data_ext_R0_data 
                                                       >> 0x26U))))),6);
        bufp->chgSData(oldp+703,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___T_39)
                                   ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__request_bits_set)
                                   : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT__request_set))),10);
        bufp->chgBit(oldp+704,(((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___T_39)) 
                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___GEN_9) 
                                   == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT__request_tag)))));
        bufp->chgBit(oldp+705,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directoryFanout) 
                                      >> 1U))));
        bufp->chgBit(oldp+706,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshr_selectOH) 
                                      >> 1U))));
        bufp->chgBit(oldp+707,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__abc_mshrs_1__io_sinkc_valid));
        bufp->chgBit(oldp+708,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__abc_mshrs_1__io_sinkd_valid));
        bufp->chgBit(oldp+709,(((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_e_q__DOT__empty)) 
                                & (1U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___tile_prci_domain_auto_tl_master_clock_xing_out_1_e_bits_sink)))));
        bufp->chgBit(oldp+710,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT__request_valid));
        bufp->chgSData(oldp+711,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT__request_set),10);
        bufp->chgSData(oldp+712,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT__request_tag),13);
        bufp->chgCData(oldp+713,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT__meta_way),3);
        bufp->chgBit(oldp+714,((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT__meta_valid)))));
        bufp->chgBit(oldp+715,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT__meta_valid) 
                                & (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT__w_rprobeackfirst)) 
                                    | (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT__w_pprobeackfirst))) 
                                   | (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT__w_grantfirst))))));
        bufp->chgBit(oldp+716,((((((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT___io_schedule_bits_a_valid_output) 
                                     | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT___io_schedule_bits_b_valid_output)) 
                                    | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT___io_schedule_bits_c_valid_output)) 
                                   | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT___io_schedule_bits_d_valid_output)) 
                                  | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT___io_schedule_bits_e_valid_output)) 
                                 | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT___io_schedule_bits_x_valid_output)) 
                                | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT___io_schedule_bits_dir_valid_output))));
        bufp->chgBit(oldp+717,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT___io_schedule_bits_a_valid_output));
        bufp->chgCData(oldp+718,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT__req_needT)
                                   ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT__meta_hit)
                                       ? 2U : 1U) : 0U)),3);
        bufp->chgBit(oldp+719,((1U & ((6U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT__request_size)) 
                                      | (~ ((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT__request_opcode)) 
                                            | (7U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT__request_opcode))))))));
        bufp->chgBit(oldp+720,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT___io_schedule_bits_b_valid_output));
        bufp->chgCData(oldp+721,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT__s_rprobe)
                                   ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT__request_prio_1)
                                       ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT__request_param)
                                       : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT__req_needT)
                                           ? 2U : 1U))
                                   : 2U)),3);
        bufp->chgSData(oldp+722,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT__s_rprobe)
                                   ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT__request_tag)
                                   : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT__meta_tag))),13);
        bufp->chgBit(oldp+723,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT__meta_clients) 
                                & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT__excluded_client)))));
        bufp->chgBit(oldp+724,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT___io_schedule_bits_c_valid_output));
        bufp->chgCData(oldp+725,((6U | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT__meta_dirty))),3);
        bufp->chgCData(oldp+726,(((1U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT__meta_state))
                                   ? 2U : 1U)),3);
        bufp->chgSData(oldp+727,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT__meta_tag),13);
        bufp->chgBit(oldp+728,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT__meta_dirty));
        bufp->chgBit(oldp+729,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT___io_schedule_bits_d_valid_output));
        bufp->chgBit(oldp+730,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT__request_prio_0));
        bufp->chgBit(oldp+731,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT__request_prio_2));
        bufp->chgCData(oldp+732,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT__request_opcode),3);
        bufp->chgCData(oldp+733,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT__req_acquire)
                                   ? ((1U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT__request_param))
                                       ? 1U : ((2U 
                                                == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT__request_param))
                                                ? (
                                                   (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT__meta_hit) 
                                                     & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT__meta_clients)) 
                                                    & (0x20U 
                                                       == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT__request_source)))
                                                    ? 2U
                                                    : 1U)
                                                : (
                                                   (0U 
                                                    == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT__request_param))
                                                    ? 
                                                   ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT__req_acquire) 
                                                    & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT__meta_hit)
                                                        ? 
                                                       ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT__meta_clients)) 
                                                        & (3U 
                                                           == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT__meta_state)))
                                                        : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT__gotT)))
                                                    : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT__request_param))))
                                   : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT__request_param))),3);
        bufp->chgCData(oldp+734,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT__request_size),3);
        bufp->chgCData(oldp+735,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT__request_source),6);
        bufp->chgCData(oldp+736,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT__request_offset),6);
        bufp->chgCData(oldp+737,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT__request_put),6);
        bufp->chgBit(oldp+738,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT__bad_grant));
        bufp->chgBit(oldp+739,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT___io_schedule_bits_e_valid_output));
        bufp->chgCData(oldp+740,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT__sink),3);
        bufp->chgBit(oldp+741,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT___io_schedule_bits_x_valid_output));
        bufp->chgBit(oldp+742,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT___io_schedule_bits_dir_valid_output));
        bufp->chgBit(oldp+743,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT__s_release) 
                                & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT___io_schedule_bits_dir_bits_data_WIRE_dirty))));
        bufp->chgCData(oldp+744,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT__s_release)
                                   ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT___io_schedule_bits_dir_bits_data_WIRE_state)
                                   : 0U)),2);
        bufp->chgBit(oldp+745,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT__s_release) 
                                & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT___io_schedule_bits_dir_bits_data_WIRE_clients))));
        bufp->chgSData(oldp+746,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT__s_release)
                                   ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT___GEN_0)
                                       ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT__meta_tag)
                                       : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT__request_tag))
                                   : 0U)),13);
        bufp->chgBit(oldp+747,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT__no_wait));
        bufp->chgBit(oldp+748,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT__request_prio_1));
        bufp->chgBit(oldp+749,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT__request_control));
        bufp->chgCData(oldp+750,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT__request_param),3);
        bufp->chgBit(oldp+751,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT__meta_valid));
        bufp->chgCData(oldp+752,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT__meta_state),2);
        bufp->chgBit(oldp+753,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT__meta_clients));
        bufp->chgBit(oldp+754,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT__meta_hit));
        bufp->chgBit(oldp+755,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT__s_rprobe));
        bufp->chgBit(oldp+756,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT__w_rprobeackfirst));
        bufp->chgBit(oldp+757,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT__w_rprobeacklast));
        bufp->chgBit(oldp+758,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT__s_release));
        bufp->chgBit(oldp+759,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT__w_releaseack));
        bufp->chgBit(oldp+760,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT__s_pprobe));
        bufp->chgBit(oldp+761,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT__s_acquire));
        bufp->chgBit(oldp+762,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT__s_flush));
        bufp->chgBit(oldp+763,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT__w_grantfirst));
        bufp->chgBit(oldp+764,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT__w_grantlast));
        bufp->chgBit(oldp+765,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT__w_grant));
        bufp->chgBit(oldp+766,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT__w_pprobeackfirst));
        bufp->chgBit(oldp+767,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT__w_pprobeacklast));
        bufp->chgBit(oldp+768,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT__w_pprobeack));
        bufp->chgBit(oldp+769,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT__s_grantack));
        bufp->chgBit(oldp+770,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT__s_execute));
        bufp->chgBit(oldp+771,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT__w_grantack));
        bufp->chgBit(oldp+772,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT__s_writeback));
        bufp->chgBit(oldp+773,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT__gotT));
        bufp->chgBit(oldp+774,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT__probes_done));
        bufp->chgBit(oldp+775,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT__probes_toN));
        bufp->chgBit(oldp+776,((0x20U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT__request_source))));
        bufp->chgBit(oldp+777,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT__req_needT));
        bufp->chgBit(oldp+778,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT__req_acquire));
        bufp->chgBit(oldp+779,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT__excluded_client));
        bufp->chgBit(oldp+780,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT__new_meta_hit));
        bufp->chgBit(oldp+781,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT__new_request_prio_2));
        bufp->chgBit(oldp+782,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT__new_meta_dirty));
        bufp->chgCData(oldp+783,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT__new_meta_state),2);
        bufp->chgBit(oldp+784,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT__new_meta_clients));
        bufp->chgBit(oldp+785,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT__new_request_control));
        bufp->chgCData(oldp+786,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT__new_request_opcode),3);
        bufp->chgCData(oldp+787,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT__new_request_param),3);
        bufp->chgBit(oldp+788,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT__new_needT));
        bufp->chgBit(oldp+789,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT__new_clientBit));
        bufp->chgBit(oldp+790,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT__last_probe));
        bufp->chgCData(oldp+791,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT__meta_hit)
                                   ? (0xfU & ((0x4200U 
                                               | ((((0x2000U 
                                                     & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT__meta_clients)) 
                                                        << 0xdU)) 
                                                    | (0x1000U 
                                                       & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT__meta_dirty)) 
                                                          << 0xcU))) 
                                                   | ((0x100U 
                                                       & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT__meta_dirty)) 
                                                          << 8U)) 
                                                      | (0x10U 
                                                         & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT__meta_clients)) 
                                                            << 4U)))) 
                                                  | (8U 
                                                     & ((~ (IData)(
                                                                   (0U 
                                                                    != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT__meta_state)))) 
                                                        << 3U)))) 
                                              >> (0xfU 
                                                  & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT__meta_state) 
                                                     << 2U))))
                                   : 8U)),4);
        bufp->chgCData(oldp+792,((0xfU & ((0x4200U 
                                           | ((((0x2000U 
                                                 & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT___io_schedule_bits_dir_bits_data_WIRE_clients)) 
                                                    << 0xdU)) 
                                                | (0x1000U 
                                                   & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT___io_schedule_bits_dir_bits_data_WIRE_dirty)) 
                                                      << 0xcU))) 
                                               | ((0x100U 
                                                   & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT___io_schedule_bits_dir_bits_data_WIRE_dirty)) 
                                                      << 8U)) 
                                                  | (0x10U 
                                                     & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT___io_schedule_bits_dir_bits_data_WIRE_clients)) 
                                                        << 4U)))) 
                                              | ((0U 
                                                  == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT___io_schedule_bits_dir_bits_data_WIRE_state)) 
                                                 << 3U))) 
                                          >> (0xfU 
                                              & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT___io_schedule_bits_dir_bits_data_WIRE_state) 
                                                 << 2U))))),4);
        bufp->chgBit(oldp+793,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__abc_mshrs_2__io_allocate_valid));
        bufp->chgBit(oldp+794,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___GEN_49)
                                       ? (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___sinkC_io_req_valid))
                                       : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT___data_ext_R0_data)))));
        bufp->chgBit(oldp+795,((1U & ((~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___T_43) 
                                          | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bypass_3))) 
                                      & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT___data_ext_R0_data 
                                                 >> 1U))))));
        bufp->chgBit(oldp+796,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__abc_mshrs_2__io_allocate_bits_prio_2));
        bufp->chgBit(oldp+797,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__abc_mshrs_2__io_allocate_bits_control));
        bufp->chgCData(oldp+798,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__abc_mshrs_2__io_allocate_bits_opcode),3);
        bufp->chgCData(oldp+799,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__abc_mshrs_2__io_allocate_bits_param),3);
        bufp->chgCData(oldp+800,((7U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___GEN_49)
                                         ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___view___05FWIRE_11_size)
                                         : (IData)(
                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT___data_ext_R0_data 
                                                    >> 0xaU))))),3);
        bufp->chgCData(oldp+801,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__abc_mshrs_2__io_allocate_bits_source),6);
        bufp->chgSData(oldp+802,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___GEN_8),13);
        bufp->chgCData(oldp+803,((0x3fU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___GEN_49)
                                            ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___view___05FWIRE_11_offset)
                                            : (IData)(
                                                      (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT___data_ext_R0_data 
                                                       >> 0x20U))))),6);
        bufp->chgCData(oldp+804,((0x3fU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___GEN_49)
                                            ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___view___05FWIRE_11_put)
                                            : (IData)(
                                                      (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT___data_ext_R0_data 
                                                       >> 0x26U))))),6);
        bufp->chgSData(oldp+805,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___T_43)
                                   ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__request_bits_set)
                                   : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT__request_set))),10);
        bufp->chgBit(oldp+806,(((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___T_43)) 
                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___GEN_8) 
                                   == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT__request_tag)))));
        bufp->chgBit(oldp+807,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directoryFanout) 
                                      >> 2U))));
        bufp->chgBit(oldp+808,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshr_selectOH) 
                                      >> 2U))));
        bufp->chgBit(oldp+809,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__abc_mshrs_2__io_sinkc_valid));
        bufp->chgBit(oldp+810,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__abc_mshrs_2__io_sinkd_valid));
        bufp->chgBit(oldp+811,(((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_e_q__DOT__empty)) 
                                & (2U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___tile_prci_domain_auto_tl_master_clock_xing_out_1_e_bits_sink)))));
        bufp->chgBit(oldp+812,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT__request_valid));
        bufp->chgSData(oldp+813,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT__request_set),10);
        bufp->chgSData(oldp+814,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT__request_tag),13);
        bufp->chgCData(oldp+815,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT__meta_way),3);
        bufp->chgBit(oldp+816,((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT__meta_valid)))));
        bufp->chgBit(oldp+817,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT__meta_valid) 
                                & (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT__w_rprobeackfirst)) 
                                    | (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT__w_pprobeackfirst))) 
                                   | (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT__w_grantfirst))))));
        bufp->chgBit(oldp+818,((((((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT___io_schedule_bits_a_valid_output) 
                                     | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT___io_schedule_bits_b_valid_output)) 
                                    | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT___io_schedule_bits_c_valid_output)) 
                                   | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT___io_schedule_bits_d_valid_output)) 
                                  | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT___io_schedule_bits_e_valid_output)) 
                                 | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT___io_schedule_bits_x_valid_output)) 
                                | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT___io_schedule_bits_dir_valid_output))));
        bufp->chgBit(oldp+819,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT___io_schedule_bits_a_valid_output));
        bufp->chgCData(oldp+820,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT__req_needT)
                                   ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT__meta_hit)
                                       ? 2U : 1U) : 0U)),3);
        bufp->chgBit(oldp+821,((1U & ((6U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT__request_size)) 
                                      | (~ ((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT__request_opcode)) 
                                            | (7U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT__request_opcode))))))));
        bufp->chgBit(oldp+822,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT___io_schedule_bits_b_valid_output));
        bufp->chgCData(oldp+823,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT__s_rprobe)
                                   ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT__request_prio_1)
                                       ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT__request_param)
                                       : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT__req_needT)
                                           ? 2U : 1U))
                                   : 2U)),3);
        bufp->chgSData(oldp+824,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT__s_rprobe)
                                   ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT__request_tag)
                                   : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT__meta_tag))),13);
        bufp->chgBit(oldp+825,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT__meta_clients) 
                                & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT__excluded_client)))));
        bufp->chgBit(oldp+826,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT___io_schedule_bits_c_valid_output));
        bufp->chgCData(oldp+827,((6U | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT__meta_dirty))),3);
        bufp->chgCData(oldp+828,(((1U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT__meta_state))
                                   ? 2U : 1U)),3);
        bufp->chgSData(oldp+829,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT__meta_tag),13);
        bufp->chgBit(oldp+830,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT__meta_dirty));
        bufp->chgBit(oldp+831,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT___io_schedule_bits_d_valid_output));
        bufp->chgBit(oldp+832,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT__request_prio_0));
        bufp->chgBit(oldp+833,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT__request_prio_2));
        bufp->chgCData(oldp+834,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT__request_opcode),3);
        bufp->chgCData(oldp+835,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT__req_acquire)
                                   ? ((1U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT__request_param))
                                       ? 1U : ((2U 
                                                == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT__request_param))
                                                ? (
                                                   (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT__meta_hit) 
                                                     & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT__meta_clients)) 
                                                    & (0x20U 
                                                       == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT__request_source)))
                                                    ? 2U
                                                    : 1U)
                                                : (
                                                   (0U 
                                                    == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT__request_param))
                                                    ? 
                                                   ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT__req_acquire) 
                                                    & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT__meta_hit)
                                                        ? 
                                                       ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT__meta_clients)) 
                                                        & (3U 
                                                           == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT__meta_state)))
                                                        : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT__gotT)))
                                                    : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT__request_param))))
                                   : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT__request_param))),3);
        bufp->chgCData(oldp+836,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT__request_size),3);
        bufp->chgCData(oldp+837,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT__request_source),6);
        bufp->chgCData(oldp+838,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT__request_offset),6);
        bufp->chgCData(oldp+839,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT__request_put),6);
        bufp->chgBit(oldp+840,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT__bad_grant));
        bufp->chgBit(oldp+841,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT___io_schedule_bits_e_valid_output));
        bufp->chgCData(oldp+842,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT__sink),3);
        bufp->chgBit(oldp+843,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT___io_schedule_bits_x_valid_output));
        bufp->chgBit(oldp+844,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT___io_schedule_bits_dir_valid_output));
        bufp->chgBit(oldp+845,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT__s_release) 
                                & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT___io_schedule_bits_dir_bits_data_WIRE_dirty))));
        bufp->chgCData(oldp+846,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT__s_release)
                                   ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT___io_schedule_bits_dir_bits_data_WIRE_state)
                                   : 0U)),2);
        bufp->chgBit(oldp+847,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT__s_release) 
                                & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT___io_schedule_bits_dir_bits_data_WIRE_clients))));
        bufp->chgSData(oldp+848,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT__s_release)
                                   ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT___GEN_0)
                                       ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT__meta_tag)
                                       : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT__request_tag))
                                   : 0U)),13);
        bufp->chgBit(oldp+849,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT__no_wait));
        bufp->chgBit(oldp+850,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT__request_prio_1));
        bufp->chgBit(oldp+851,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT__request_control));
        bufp->chgCData(oldp+852,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT__request_param),3);
        bufp->chgBit(oldp+853,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT__meta_valid));
        bufp->chgCData(oldp+854,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT__meta_state),2);
        bufp->chgBit(oldp+855,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT__meta_clients));
        bufp->chgBit(oldp+856,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT__meta_hit));
        bufp->chgBit(oldp+857,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT__s_rprobe));
        bufp->chgBit(oldp+858,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT__w_rprobeackfirst));
        bufp->chgBit(oldp+859,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT__w_rprobeacklast));
        bufp->chgBit(oldp+860,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT__s_release));
        bufp->chgBit(oldp+861,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT__w_releaseack));
        bufp->chgBit(oldp+862,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT__s_pprobe));
        bufp->chgBit(oldp+863,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT__s_acquire));
        bufp->chgBit(oldp+864,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT__s_flush));
        bufp->chgBit(oldp+865,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT__w_grantfirst));
        bufp->chgBit(oldp+866,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT__w_grantlast));
        bufp->chgBit(oldp+867,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT__w_grant));
        bufp->chgBit(oldp+868,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT__w_pprobeackfirst));
        bufp->chgBit(oldp+869,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT__w_pprobeacklast));
        bufp->chgBit(oldp+870,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT__w_pprobeack));
        bufp->chgBit(oldp+871,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT__s_grantack));
        bufp->chgBit(oldp+872,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT__s_execute));
        bufp->chgBit(oldp+873,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT__w_grantack));
        bufp->chgBit(oldp+874,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT__s_writeback));
        bufp->chgBit(oldp+875,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT__gotT));
        bufp->chgBit(oldp+876,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT__probes_done));
        bufp->chgBit(oldp+877,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT__probes_toN));
        bufp->chgBit(oldp+878,((0x20U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT__request_source))));
        bufp->chgBit(oldp+879,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT__req_needT));
        bufp->chgBit(oldp+880,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT__req_acquire));
        bufp->chgBit(oldp+881,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT__excluded_client));
        bufp->chgBit(oldp+882,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT__new_meta_hit));
        bufp->chgBit(oldp+883,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT__new_request_prio_2));
        bufp->chgBit(oldp+884,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT__new_meta_dirty));
        bufp->chgCData(oldp+885,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT__new_meta_state),2);
        bufp->chgBit(oldp+886,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT__new_meta_clients));
        bufp->chgBit(oldp+887,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT__new_request_control));
        bufp->chgCData(oldp+888,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT__new_request_opcode),3);
        bufp->chgCData(oldp+889,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT__new_request_param),3);
        bufp->chgBit(oldp+890,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT__new_needT));
        bufp->chgBit(oldp+891,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT__new_clientBit));
        bufp->chgBit(oldp+892,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT__last_probe));
        bufp->chgCData(oldp+893,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT__meta_hit)
                                   ? (0xfU & ((0x4200U 
                                               | ((((0x2000U 
                                                     & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT__meta_clients)) 
                                                        << 0xdU)) 
                                                    | (0x1000U 
                                                       & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT__meta_dirty)) 
                                                          << 0xcU))) 
                                                   | ((0x100U 
                                                       & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT__meta_dirty)) 
                                                          << 8U)) 
                                                      | (0x10U 
                                                         & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT__meta_clients)) 
                                                            << 4U)))) 
                                                  | (8U 
                                                     & ((~ (IData)(
                                                                   (0U 
                                                                    != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT__meta_state)))) 
                                                        << 3U)))) 
                                              >> (0xfU 
                                                  & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT__meta_state) 
                                                     << 2U))))
                                   : 8U)),4);
        bufp->chgCData(oldp+894,((0xfU & ((0x4200U 
                                           | ((((0x2000U 
                                                 & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT___io_schedule_bits_dir_bits_data_WIRE_clients)) 
                                                    << 0xdU)) 
                                                | (0x1000U 
                                                   & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT___io_schedule_bits_dir_bits_data_WIRE_dirty)) 
                                                      << 0xcU))) 
                                               | ((0x100U 
                                                   & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT___io_schedule_bits_dir_bits_data_WIRE_dirty)) 
                                                      << 8U)) 
                                                  | (0x10U 
                                                     & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT___io_schedule_bits_dir_bits_data_WIRE_clients)) 
                                                        << 4U)))) 
                                              | ((0U 
                                                  == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT___io_schedule_bits_dir_bits_data_WIRE_state)) 
                                                 << 3U))) 
                                          >> (0xfU 
                                              & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT___io_schedule_bits_dir_bits_data_WIRE_state) 
                                                 << 2U))))),4);
        bufp->chgBit(oldp+895,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__abc_mshrs_3__io_allocate_valid));
        bufp->chgBit(oldp+896,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___GEN_50)
                                       ? (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___sinkC_io_req_valid))
                                       : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT___data_ext_R0_data)))));
        bufp->chgBit(oldp+897,((1U & ((~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___T_47) 
                                          | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bypass_4))) 
                                      & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT___data_ext_R0_data 
                                                 >> 1U))))));
        bufp->chgBit(oldp+898,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__abc_mshrs_3__io_allocate_bits_prio_2));
        bufp->chgBit(oldp+899,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__abc_mshrs_3__io_allocate_bits_control));
        bufp->chgCData(oldp+900,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__abc_mshrs_3__io_allocate_bits_opcode),3);
        bufp->chgCData(oldp+901,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__abc_mshrs_3__io_allocate_bits_param),3);
        bufp->chgCData(oldp+902,((7U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___GEN_50)
                                         ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___view___05FWIRE_11_size)
                                         : (IData)(
                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT___data_ext_R0_data 
                                                    >> 0xaU))))),3);
        bufp->chgCData(oldp+903,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__abc_mshrs_3__io_allocate_bits_source),6);
        bufp->chgSData(oldp+904,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___GEN_7),13);
        bufp->chgCData(oldp+905,((0x3fU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___GEN_50)
                                            ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___view___05FWIRE_11_offset)
                                            : (IData)(
                                                      (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT___data_ext_R0_data 
                                                       >> 0x20U))))),6);
        bufp->chgCData(oldp+906,((0x3fU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___GEN_50)
                                            ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___view___05FWIRE_11_put)
                                            : (IData)(
                                                      (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT___data_ext_R0_data 
                                                       >> 0x26U))))),6);
        bufp->chgSData(oldp+907,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___T_47)
                                   ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__request_bits_set)
                                   : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__request_set))),10);
        bufp->chgBit(oldp+908,(((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___T_47)) 
                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___GEN_7) 
                                   == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__request_tag)))));
        bufp->chgBit(oldp+909,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directoryFanout) 
                                      >> 3U))));
        bufp->chgBit(oldp+910,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshr_selectOH) 
                                      >> 3U))));
        bufp->chgBit(oldp+911,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__abc_mshrs_3__io_sinkc_valid));
        bufp->chgBit(oldp+912,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__abc_mshrs_3__io_sinkd_valid));
        bufp->chgBit(oldp+913,(((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_e_q__DOT__empty)) 
                                & (3U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___tile_prci_domain_auto_tl_master_clock_xing_out_1_e_bits_sink)))));
        bufp->chgBit(oldp+914,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__request_valid));
        bufp->chgSData(oldp+915,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__request_set),10);
        bufp->chgSData(oldp+916,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__request_tag),13);
        bufp->chgCData(oldp+917,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__meta_way),3);
        bufp->chgBit(oldp+918,((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__meta_valid)))));
        bufp->chgBit(oldp+919,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__meta_valid) 
                                & (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__w_rprobeackfirst)) 
                                    | (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__w_pprobeackfirst))) 
                                   | (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__w_grantfirst))))));
        bufp->chgBit(oldp+920,((((((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT___io_schedule_bits_a_valid_output) 
                                     | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT___io_schedule_bits_b_valid_output)) 
                                    | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT___io_schedule_bits_c_valid_output)) 
                                   | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT___io_schedule_bits_d_valid_output)) 
                                  | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT___io_schedule_bits_e_valid_output)) 
                                 | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT___io_schedule_bits_x_valid_output)) 
                                | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT___io_schedule_bits_dir_valid_output))));
        bufp->chgBit(oldp+921,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT___io_schedule_bits_a_valid_output));
        bufp->chgCData(oldp+922,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__req_needT)
                                   ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__meta_hit)
                                       ? 2U : 1U) : 0U)),3);
        bufp->chgBit(oldp+923,((1U & ((6U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__request_size)) 
                                      | (~ ((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__request_opcode)) 
                                            | (7U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__request_opcode))))))));
        bufp->chgBit(oldp+924,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT___io_schedule_bits_b_valid_output));
        bufp->chgCData(oldp+925,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__s_rprobe)
                                   ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__request_prio_1)
                                       ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__request_param)
                                       : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__req_needT)
                                           ? 2U : 1U))
                                   : 2U)),3);
        bufp->chgSData(oldp+926,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__s_rprobe)
                                   ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__request_tag)
                                   : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__meta_tag))),13);
        bufp->chgBit(oldp+927,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__meta_clients) 
                                & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__excluded_client)))));
        bufp->chgBit(oldp+928,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT___io_schedule_bits_c_valid_output));
        bufp->chgCData(oldp+929,((6U | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__meta_dirty))),3);
        bufp->chgCData(oldp+930,(((1U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__meta_state))
                                   ? 2U : 1U)),3);
        bufp->chgSData(oldp+931,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__meta_tag),13);
        bufp->chgBit(oldp+932,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__meta_dirty));
        bufp->chgBit(oldp+933,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT___io_schedule_bits_d_valid_output));
        bufp->chgBit(oldp+934,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__request_prio_0));
        bufp->chgBit(oldp+935,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__request_prio_2));
        bufp->chgCData(oldp+936,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__request_opcode),3);
        bufp->chgCData(oldp+937,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__req_acquire)
                                   ? ((1U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__request_param))
                                       ? 1U : ((2U 
                                                == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__request_param))
                                                ? (
                                                   (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__meta_hit) 
                                                     & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__meta_clients)) 
                                                    & (0x20U 
                                                       == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__request_source)))
                                                    ? 2U
                                                    : 1U)
                                                : (
                                                   (0U 
                                                    == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__request_param))
                                                    ? 
                                                   ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__req_acquire) 
                                                    & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__meta_hit)
                                                        ? 
                                                       ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__meta_clients)) 
                                                        & (3U 
                                                           == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__meta_state)))
                                                        : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__gotT)))
                                                    : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__request_param))))
                                   : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__request_param))),3);
        bufp->chgCData(oldp+938,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__request_size),3);
        bufp->chgCData(oldp+939,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__request_source),6);
        bufp->chgCData(oldp+940,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__request_offset),6);
        bufp->chgCData(oldp+941,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__request_put),6);
        bufp->chgBit(oldp+942,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__bad_grant));
        bufp->chgBit(oldp+943,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT___io_schedule_bits_e_valid_output));
        bufp->chgCData(oldp+944,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__sink),3);
        bufp->chgBit(oldp+945,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT___io_schedule_bits_x_valid_output));
        bufp->chgBit(oldp+946,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT___io_schedule_bits_dir_valid_output));
        bufp->chgBit(oldp+947,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__s_release) 
                                & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT___io_schedule_bits_dir_bits_data_WIRE_dirty))));
        bufp->chgCData(oldp+948,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__s_release)
                                   ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT___io_schedule_bits_dir_bits_data_WIRE_state)
                                   : 0U)),2);
        bufp->chgBit(oldp+949,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__s_release) 
                                & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT___io_schedule_bits_dir_bits_data_WIRE_clients))));
        bufp->chgSData(oldp+950,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__s_release)
                                   ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT___GEN_0)
                                       ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__meta_tag)
                                       : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__request_tag))
                                   : 0U)),13);
        bufp->chgBit(oldp+951,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__no_wait));
        bufp->chgBit(oldp+952,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__request_prio_1));
        bufp->chgBit(oldp+953,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__request_control));
        bufp->chgCData(oldp+954,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__request_param),3);
        bufp->chgBit(oldp+955,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__meta_valid));
        bufp->chgCData(oldp+956,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__meta_state),2);
        bufp->chgBit(oldp+957,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__meta_clients));
        bufp->chgBit(oldp+958,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__meta_hit));
        bufp->chgBit(oldp+959,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__s_rprobe));
        bufp->chgBit(oldp+960,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__w_rprobeackfirst));
        bufp->chgBit(oldp+961,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__w_rprobeacklast));
        bufp->chgBit(oldp+962,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__s_release));
        bufp->chgBit(oldp+963,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__w_releaseack));
        bufp->chgBit(oldp+964,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__s_pprobe));
        bufp->chgBit(oldp+965,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__s_acquire));
        bufp->chgBit(oldp+966,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__s_flush));
        bufp->chgBit(oldp+967,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__w_grantfirst));
        bufp->chgBit(oldp+968,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__w_grantlast));
        bufp->chgBit(oldp+969,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__w_grant));
        bufp->chgBit(oldp+970,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__w_pprobeackfirst));
        bufp->chgBit(oldp+971,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__w_pprobeacklast));
        bufp->chgBit(oldp+972,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__w_pprobeack));
        bufp->chgBit(oldp+973,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__s_grantack));
        bufp->chgBit(oldp+974,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__s_execute));
        bufp->chgBit(oldp+975,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__w_grantack));
        bufp->chgBit(oldp+976,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__s_writeback));
        bufp->chgBit(oldp+977,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__gotT));
        bufp->chgBit(oldp+978,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__probes_done));
        bufp->chgBit(oldp+979,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__probes_toN));
        bufp->chgBit(oldp+980,((0x20U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__request_source))));
        bufp->chgBit(oldp+981,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__req_needT));
        bufp->chgBit(oldp+982,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__req_acquire));
        bufp->chgBit(oldp+983,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__excluded_client));
        bufp->chgBit(oldp+984,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__new_meta_hit));
        bufp->chgBit(oldp+985,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__new_request_prio_2));
        bufp->chgBit(oldp+986,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__new_meta_dirty));
        bufp->chgCData(oldp+987,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__new_meta_state),2);
        bufp->chgBit(oldp+988,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__new_meta_clients));
        bufp->chgBit(oldp+989,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__new_request_control));
        bufp->chgCData(oldp+990,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__new_request_opcode),3);
        bufp->chgCData(oldp+991,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__new_request_param),3);
        bufp->chgBit(oldp+992,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__new_needT));
        bufp->chgBit(oldp+993,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__new_clientBit));
        bufp->chgBit(oldp+994,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__last_probe));
        bufp->chgCData(oldp+995,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__meta_hit)
                                   ? (0xfU & ((0x4200U 
                                               | ((((0x2000U 
                                                     & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__meta_clients)) 
                                                        << 0xdU)) 
                                                    | (0x1000U 
                                                       & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__meta_dirty)) 
                                                          << 0xcU))) 
                                                   | ((0x100U 
                                                       & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__meta_dirty)) 
                                                          << 8U)) 
                                                      | (0x10U 
                                                         & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__meta_clients)) 
                                                            << 4U)))) 
                                                  | (8U 
                                                     & ((~ (IData)(
                                                                   (0U 
                                                                    != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__meta_state)))) 
                                                        << 3U)))) 
                                              >> (0xfU 
                                                  & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__meta_state) 
                                                     << 2U))))
                                   : 8U)),4);
        bufp->chgCData(oldp+996,((0xfU & ((0x4200U 
                                           | ((((0x2000U 
                                                 & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT___io_schedule_bits_dir_bits_data_WIRE_clients)) 
                                                    << 0xdU)) 
                                                | (0x1000U 
                                                   & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT___io_schedule_bits_dir_bits_data_WIRE_dirty)) 
                                                      << 0xcU))) 
                                               | ((0x100U 
                                                   & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT___io_schedule_bits_dir_bits_data_WIRE_dirty)) 
                                                      << 8U)) 
                                                  | (0x10U 
                                                     & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT___io_schedule_bits_dir_bits_data_WIRE_clients)) 
                                                        << 4U)))) 
                                              | ((0U 
                                                  == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT___io_schedule_bits_dir_bits_data_WIRE_state)) 
                                                 << 3U))) 
                                          >> (0xfU 
                                              & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT___io_schedule_bits_dir_bits_data_WIRE_state) 
                                                 << 2U))))),4);
        bufp->chgBit(oldp+997,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__abc_mshrs_4__io_allocate_valid));
        bufp->chgBit(oldp+998,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___GEN_51)
                                       ? (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___sinkC_io_req_valid))
                                       : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT___data_ext_R0_data)))));
        bufp->chgBit(oldp+999,((1U & ((~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___T_51) 
                                          | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bypass_5))) 
                                      & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT___data_ext_R0_data 
                                                 >> 1U))))));
        bufp->chgBit(oldp+1000,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__abc_mshrs_4__io_allocate_bits_prio_2));
        bufp->chgBit(oldp+1001,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__abc_mshrs_4__io_allocate_bits_control));
        bufp->chgCData(oldp+1002,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__abc_mshrs_4__io_allocate_bits_opcode),3);
        bufp->chgCData(oldp+1003,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__abc_mshrs_4__io_allocate_bits_param),3);
        bufp->chgCData(oldp+1004,((7U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___GEN_51)
                                          ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___view___05FWIRE_11_size)
                                          : (IData)(
                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT___data_ext_R0_data 
                                                     >> 0xaU))))),3);
        bufp->chgCData(oldp+1005,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__abc_mshrs_4__io_allocate_bits_source),6);
        bufp->chgSData(oldp+1006,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___GEN_6),13);
        bufp->chgCData(oldp+1007,((0x3fU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___GEN_51)
                                             ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___view___05FWIRE_11_offset)
                                             : (IData)(
                                                       (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT___data_ext_R0_data 
                                                        >> 0x20U))))),6);
        bufp->chgCData(oldp+1008,((0x3fU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___GEN_51)
                                             ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___view___05FWIRE_11_put)
                                             : (IData)(
                                                       (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT___data_ext_R0_data 
                                                        >> 0x26U))))),6);
        bufp->chgSData(oldp+1009,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___T_51)
                                    ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__request_bits_set)
                                    : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__request_set))),10);
        bufp->chgBit(oldp+1010,(((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___T_51)) 
                                 & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___GEN_6) 
                                    == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__request_tag)))));
        bufp->chgBit(oldp+1011,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directoryFanout) 
                                       >> 4U))));
        bufp->chgBit(oldp+1012,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshr_selectOH) 
                                       >> 4U))));
        bufp->chgBit(oldp+1013,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__abc_mshrs_4__io_sinkc_valid));
        bufp->chgBit(oldp+1014,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__abc_mshrs_4__io_sinkd_valid));
        bufp->chgBit(oldp+1015,(((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_e_q__DOT__empty)) 
                                 & (4U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___tile_prci_domain_auto_tl_master_clock_xing_out_1_e_bits_sink)))));
        bufp->chgBit(oldp+1016,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__request_valid));
        bufp->chgSData(oldp+1017,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__request_set),10);
        bufp->chgSData(oldp+1018,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__request_tag),13);
        bufp->chgCData(oldp+1019,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__meta_way),3);
        bufp->chgBit(oldp+1020,((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__meta_valid)))));
        bufp->chgBit(oldp+1021,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__meta_valid) 
                                 & (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__w_rprobeackfirst)) 
                                     | (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__w_pprobeackfirst))) 
                                    | (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__w_grantfirst))))));
        bufp->chgBit(oldp+1022,((((((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT___io_schedule_bits_a_valid_output) 
                                      | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT___io_schedule_bits_b_valid_output)) 
                                     | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT___io_schedule_bits_c_valid_output)) 
                                    | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT___io_schedule_bits_d_valid_output)) 
                                   | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT___io_schedule_bits_e_valid_output)) 
                                  | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT___io_schedule_bits_x_valid_output)) 
                                 | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT___io_schedule_bits_dir_valid_output))));
        bufp->chgBit(oldp+1023,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT___io_schedule_bits_a_valid_output));
        bufp->chgCData(oldp+1024,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__req_needT)
                                    ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__meta_hit)
                                        ? 2U : 1U) : 0U)),3);
        bufp->chgBit(oldp+1025,((1U & ((6U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__request_size)) 
                                       | (~ ((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__request_opcode)) 
                                             | (7U 
                                                == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__request_opcode))))))));
        bufp->chgBit(oldp+1026,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT___io_schedule_bits_b_valid_output));
        bufp->chgCData(oldp+1027,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__s_rprobe)
                                    ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__request_prio_1)
                                        ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__request_param)
                                        : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__req_needT)
                                            ? 2U : 1U))
                                    : 2U)),3);
        bufp->chgSData(oldp+1028,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__s_rprobe)
                                    ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__request_tag)
                                    : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__meta_tag))),13);
        bufp->chgBit(oldp+1029,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__meta_clients) 
                                 & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__excluded_client)))));
        bufp->chgBit(oldp+1030,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT___io_schedule_bits_c_valid_output));
        bufp->chgCData(oldp+1031,((6U | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__meta_dirty))),3);
        bufp->chgCData(oldp+1032,(((1U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__meta_state))
                                    ? 2U : 1U)),3);
        bufp->chgSData(oldp+1033,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__meta_tag),13);
        bufp->chgBit(oldp+1034,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__meta_dirty));
        bufp->chgBit(oldp+1035,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT___io_schedule_bits_d_valid_output));
        bufp->chgBit(oldp+1036,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__request_prio_0));
        bufp->chgBit(oldp+1037,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__request_prio_2));
        bufp->chgCData(oldp+1038,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__request_opcode),3);
        bufp->chgCData(oldp+1039,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__req_acquire)
                                    ? ((1U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__request_param))
                                        ? 1U : ((2U 
                                                 == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__request_param))
                                                 ? 
                                                ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__meta_hit) 
                                                   & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__meta_clients)) 
                                                  & (0x20U 
                                                     == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__request_source)))
                                                  ? 2U
                                                  : 1U)
                                                 : 
                                                ((0U 
                                                  == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__request_param))
                                                  ? 
                                                 ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__req_acquire) 
                                                  & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__meta_hit)
                                                      ? 
                                                     ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__meta_clients)) 
                                                      & (3U 
                                                         == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__meta_state)))
                                                      : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__gotT)))
                                                  : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__request_param))))
                                    : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__request_param))),3);
        bufp->chgCData(oldp+1040,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__request_size),3);
        bufp->chgCData(oldp+1041,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__request_source),6);
        bufp->chgCData(oldp+1042,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__request_offset),6);
        bufp->chgCData(oldp+1043,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__request_put),6);
        bufp->chgBit(oldp+1044,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__bad_grant));
        bufp->chgBit(oldp+1045,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT___io_schedule_bits_e_valid_output));
        bufp->chgCData(oldp+1046,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__sink),3);
        bufp->chgBit(oldp+1047,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT___io_schedule_bits_x_valid_output));
        bufp->chgBit(oldp+1048,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT___io_schedule_bits_dir_valid_output));
        bufp->chgBit(oldp+1049,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__s_release) 
                                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT___io_schedule_bits_dir_bits_data_WIRE_dirty))));
        bufp->chgCData(oldp+1050,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__s_release)
                                    ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT___io_schedule_bits_dir_bits_data_WIRE_state)
                                    : 0U)),2);
        bufp->chgBit(oldp+1051,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__s_release) 
                                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT___io_schedule_bits_dir_bits_data_WIRE_clients))));
        bufp->chgSData(oldp+1052,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__s_release)
                                    ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT___GEN_0)
                                        ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__meta_tag)
                                        : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__request_tag))
                                    : 0U)),13);
        bufp->chgBit(oldp+1053,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__no_wait));
        bufp->chgBit(oldp+1054,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__request_prio_1));
        bufp->chgBit(oldp+1055,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__request_control));
        bufp->chgCData(oldp+1056,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__request_param),3);
        bufp->chgBit(oldp+1057,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__meta_valid));
        bufp->chgCData(oldp+1058,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__meta_state),2);
        bufp->chgBit(oldp+1059,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__meta_clients));
        bufp->chgBit(oldp+1060,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__meta_hit));
        bufp->chgBit(oldp+1061,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__s_rprobe));
        bufp->chgBit(oldp+1062,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__w_rprobeackfirst));
        bufp->chgBit(oldp+1063,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__w_rprobeacklast));
        bufp->chgBit(oldp+1064,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__s_release));
        bufp->chgBit(oldp+1065,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__w_releaseack));
        bufp->chgBit(oldp+1066,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__s_pprobe));
        bufp->chgBit(oldp+1067,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__s_acquire));
        bufp->chgBit(oldp+1068,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__s_flush));
        bufp->chgBit(oldp+1069,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__w_grantfirst));
        bufp->chgBit(oldp+1070,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__w_grantlast));
        bufp->chgBit(oldp+1071,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__w_grant));
        bufp->chgBit(oldp+1072,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__w_pprobeackfirst));
        bufp->chgBit(oldp+1073,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__w_pprobeacklast));
        bufp->chgBit(oldp+1074,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__w_pprobeack));
        bufp->chgBit(oldp+1075,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__s_grantack));
        bufp->chgBit(oldp+1076,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__s_execute));
        bufp->chgBit(oldp+1077,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__w_grantack));
        bufp->chgBit(oldp+1078,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__s_writeback));
        bufp->chgBit(oldp+1079,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__gotT));
        bufp->chgBit(oldp+1080,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__probes_done));
        bufp->chgBit(oldp+1081,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__probes_toN));
        bufp->chgBit(oldp+1082,((0x20U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__request_source))));
        bufp->chgBit(oldp+1083,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__req_needT));
        bufp->chgBit(oldp+1084,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__req_acquire));
        bufp->chgBit(oldp+1085,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__excluded_client));
        bufp->chgBit(oldp+1086,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__new_meta_hit));
        bufp->chgBit(oldp+1087,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__new_request_prio_2));
        bufp->chgBit(oldp+1088,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__new_meta_dirty));
        bufp->chgCData(oldp+1089,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__new_meta_state),2);
        bufp->chgBit(oldp+1090,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__new_meta_clients));
        bufp->chgBit(oldp+1091,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__new_request_control));
        bufp->chgCData(oldp+1092,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__new_request_opcode),3);
        bufp->chgCData(oldp+1093,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__new_request_param),3);
        bufp->chgBit(oldp+1094,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__new_needT));
        bufp->chgBit(oldp+1095,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__new_clientBit));
        bufp->chgBit(oldp+1096,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__last_probe));
        bufp->chgCData(oldp+1097,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__meta_hit)
                                    ? (0xfU & ((0x4200U 
                                                | ((((0x2000U 
                                                      & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__meta_clients)) 
                                                         << 0xdU)) 
                                                     | (0x1000U 
                                                        & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__meta_dirty)) 
                                                           << 0xcU))) 
                                                    | ((0x100U 
                                                        & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__meta_dirty)) 
                                                           << 8U)) 
                                                       | (0x10U 
                                                          & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__meta_clients)) 
                                                             << 4U)))) 
                                                   | (8U 
                                                      & ((~ (IData)(
                                                                    (0U 
                                                                     != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__meta_state)))) 
                                                         << 3U)))) 
                                               >> (0xfU 
                                                   & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__meta_state) 
                                                      << 2U))))
                                    : 8U)),4);
        bufp->chgCData(oldp+1098,((0xfU & ((0x4200U 
                                            | ((((0x2000U 
                                                  & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT___io_schedule_bits_dir_bits_data_WIRE_clients)) 
                                                     << 0xdU)) 
                                                 | (0x1000U 
                                                    & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT___io_schedule_bits_dir_bits_data_WIRE_dirty)) 
                                                       << 0xcU))) 
                                                | ((0x100U 
                                                    & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT___io_schedule_bits_dir_bits_data_WIRE_dirty)) 
                                                       << 8U)) 
                                                   | (0x10U 
                                                      & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT___io_schedule_bits_dir_bits_data_WIRE_clients)) 
                                                         << 4U)))) 
                                               | ((0U 
                                                   == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT___io_schedule_bits_dir_bits_data_WIRE_state)) 
                                                  << 3U))) 
                                           >> (0xfU 
                                               & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT___io_schedule_bits_dir_bits_data_WIRE_state) 
                                                  << 2U))))),4);
        bufp->chgBit(oldp+1099,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__abc_mshrs_5__io_allocate_valid));
        bufp->chgBit(oldp+1100,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___GEN_52)
                                        ? (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___sinkC_io_req_valid))
                                        : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT___data_ext_R0_data)))));
        bufp->chgBit(oldp+1101,((1U & ((~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___T_55) 
                                           | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bypass_6))) 
                                       & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT___data_ext_R0_data 
                                                  >> 1U))))));
        bufp->chgBit(oldp+1102,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__abc_mshrs_5__io_allocate_bits_prio_2));
        bufp->chgBit(oldp+1103,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__abc_mshrs_5__io_allocate_bits_control));
        bufp->chgCData(oldp+1104,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__abc_mshrs_5__io_allocate_bits_opcode),3);
        bufp->chgCData(oldp+1105,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__abc_mshrs_5__io_allocate_bits_param),3);
        bufp->chgCData(oldp+1106,((7U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___GEN_52)
                                          ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___view___05FWIRE_11_size)
                                          : (IData)(
                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT___data_ext_R0_data 
                                                     >> 0xaU))))),3);
        bufp->chgCData(oldp+1107,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__abc_mshrs_5__io_allocate_bits_source),6);
        bufp->chgSData(oldp+1108,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___GEN_5),13);
        bufp->chgCData(oldp+1109,((0x3fU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___GEN_52)
                                             ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___view___05FWIRE_11_offset)
                                             : (IData)(
                                                       (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT___data_ext_R0_data 
                                                        >> 0x20U))))),6);
        bufp->chgCData(oldp+1110,((0x3fU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___GEN_52)
                                             ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___view___05FWIRE_11_put)
                                             : (IData)(
                                                       (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT___data_ext_R0_data 
                                                        >> 0x26U))))),6);
        bufp->chgSData(oldp+1111,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___T_55)
                                    ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__request_bits_set)
                                    : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT__request_set))),10);
        bufp->chgBit(oldp+1112,(((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___T_55)) 
                                 & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___GEN_5) 
                                    == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT__request_tag)))));
        bufp->chgBit(oldp+1113,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directoryFanout) 
                                       >> 5U))));
        bufp->chgBit(oldp+1114,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshr_selectOH) 
                                       >> 5U))));
        bufp->chgBit(oldp+1115,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__abc_mshrs_5__io_sinkc_valid));
        bufp->chgBit(oldp+1116,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__abc_mshrs_5__io_sinkd_valid));
        bufp->chgBit(oldp+1117,(((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_e_q__DOT__empty)) 
                                 & (5U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___tile_prci_domain_auto_tl_master_clock_xing_out_1_e_bits_sink)))));
        bufp->chgBit(oldp+1118,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT__request_valid));
        bufp->chgSData(oldp+1119,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT__request_set),10);
        bufp->chgSData(oldp+1120,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT__request_tag),13);
        bufp->chgCData(oldp+1121,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT__meta_way),3);
        bufp->chgBit(oldp+1122,((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT__meta_valid)))));
        bufp->chgBit(oldp+1123,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT__meta_valid) 
                                 & (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT__w_rprobeackfirst)) 
                                     | (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT__w_pprobeackfirst))) 
                                    | (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT__w_grantfirst))))));
        bufp->chgBit(oldp+1124,((((((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT___io_schedule_bits_a_valid_output) 
                                      | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT___io_schedule_bits_b_valid_output)) 
                                     | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT___io_schedule_bits_c_valid_output)) 
                                    | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT___io_schedule_bits_d_valid_output)) 
                                   | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT___io_schedule_bits_e_valid_output)) 
                                  | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT___io_schedule_bits_x_valid_output)) 
                                 | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT___io_schedule_bits_dir_valid_output))));
        bufp->chgBit(oldp+1125,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT___io_schedule_bits_a_valid_output));
        bufp->chgCData(oldp+1126,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT__req_needT)
                                    ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT__meta_hit)
                                        ? 2U : 1U) : 0U)),3);
        bufp->chgBit(oldp+1127,((1U & ((6U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT__request_size)) 
                                       | (~ ((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT__request_opcode)) 
                                             | (7U 
                                                == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT__request_opcode))))))));
        bufp->chgBit(oldp+1128,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT___io_schedule_bits_b_valid_output));
        bufp->chgCData(oldp+1129,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT__s_rprobe)
                                    ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT__request_prio_1)
                                        ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT__request_param)
                                        : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT__req_needT)
                                            ? 2U : 1U))
                                    : 2U)),3);
        bufp->chgSData(oldp+1130,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT__s_rprobe)
                                    ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT__request_tag)
                                    : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT__meta_tag))),13);
        bufp->chgBit(oldp+1131,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT__meta_clients) 
                                 & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT__excluded_client)))));
        bufp->chgBit(oldp+1132,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT___io_schedule_bits_c_valid_output));
        bufp->chgCData(oldp+1133,((6U | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT__meta_dirty))),3);
        bufp->chgCData(oldp+1134,(((1U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT__meta_state))
                                    ? 2U : 1U)),3);
        bufp->chgSData(oldp+1135,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT__meta_tag),13);
        bufp->chgBit(oldp+1136,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT__meta_dirty));
        bufp->chgBit(oldp+1137,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT___io_schedule_bits_d_valid_output));
        bufp->chgBit(oldp+1138,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT__request_prio_0));
        bufp->chgBit(oldp+1139,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT__request_prio_2));
        bufp->chgCData(oldp+1140,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT__request_opcode),3);
        bufp->chgCData(oldp+1141,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT__req_acquire)
                                    ? ((1U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT__request_param))
                                        ? 1U : ((2U 
                                                 == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT__request_param))
                                                 ? 
                                                ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT__meta_hit) 
                                                   & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT__meta_clients)) 
                                                  & (0x20U 
                                                     == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT__request_source)))
                                                  ? 2U
                                                  : 1U)
                                                 : 
                                                ((0U 
                                                  == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT__request_param))
                                                  ? 
                                                 ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT__req_acquire) 
                                                  & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT__meta_hit)
                                                      ? 
                                                     ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT__meta_clients)) 
                                                      & (3U 
                                                         == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT__meta_state)))
                                                      : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT__gotT)))
                                                  : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT__request_param))))
                                    : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT__request_param))),3);
        bufp->chgCData(oldp+1142,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT__request_size),3);
        bufp->chgCData(oldp+1143,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT__request_source),6);
        bufp->chgCData(oldp+1144,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT__request_offset),6);
        bufp->chgCData(oldp+1145,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT__request_put),6);
        bufp->chgBit(oldp+1146,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT__bad_grant));
        bufp->chgBit(oldp+1147,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT___io_schedule_bits_e_valid_output));
        bufp->chgCData(oldp+1148,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT__sink),3);
        bufp->chgBit(oldp+1149,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT___io_schedule_bits_x_valid_output));
        bufp->chgBit(oldp+1150,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT___io_schedule_bits_dir_valid_output));
        bufp->chgBit(oldp+1151,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT__s_release) 
                                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT___io_schedule_bits_dir_bits_data_WIRE_dirty))));
        bufp->chgCData(oldp+1152,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT__s_release)
                                    ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT___io_schedule_bits_dir_bits_data_WIRE_state)
                                    : 0U)),2);
        bufp->chgBit(oldp+1153,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT__s_release) 
                                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT___io_schedule_bits_dir_bits_data_WIRE_clients))));
        bufp->chgSData(oldp+1154,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT__s_release)
                                    ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT___GEN_0)
                                        ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT__meta_tag)
                                        : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT__request_tag))
                                    : 0U)),13);
        bufp->chgBit(oldp+1155,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT__no_wait));
        bufp->chgBit(oldp+1156,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT__request_prio_1));
        bufp->chgBit(oldp+1157,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT__request_control));
        bufp->chgCData(oldp+1158,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT__request_param),3);
        bufp->chgBit(oldp+1159,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT__meta_valid));
        bufp->chgCData(oldp+1160,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT__meta_state),2);
        bufp->chgBit(oldp+1161,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT__meta_clients));
        bufp->chgBit(oldp+1162,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT__meta_hit));
        bufp->chgBit(oldp+1163,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT__s_rprobe));
        bufp->chgBit(oldp+1164,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT__w_rprobeackfirst));
        bufp->chgBit(oldp+1165,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT__w_rprobeacklast));
        bufp->chgBit(oldp+1166,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT__s_release));
        bufp->chgBit(oldp+1167,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT__w_releaseack));
        bufp->chgBit(oldp+1168,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT__s_pprobe));
        bufp->chgBit(oldp+1169,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT__s_acquire));
        bufp->chgBit(oldp+1170,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT__s_flush));
        bufp->chgBit(oldp+1171,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT__w_grantfirst));
        bufp->chgBit(oldp+1172,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT__w_grantlast));
        bufp->chgBit(oldp+1173,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT__w_grant));
        bufp->chgBit(oldp+1174,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT__w_pprobeackfirst));
        bufp->chgBit(oldp+1175,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT__w_pprobeacklast));
        bufp->chgBit(oldp+1176,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT__w_pprobeack));
        bufp->chgBit(oldp+1177,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT__s_grantack));
        bufp->chgBit(oldp+1178,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT__s_execute));
        bufp->chgBit(oldp+1179,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT__w_grantack));
        bufp->chgBit(oldp+1180,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT__s_writeback));
        bufp->chgBit(oldp+1181,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT__gotT));
        bufp->chgBit(oldp+1182,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT__probes_done));
        bufp->chgBit(oldp+1183,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT__probes_toN));
        bufp->chgBit(oldp+1184,((0x20U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT__request_source))));
        bufp->chgBit(oldp+1185,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT__req_needT));
        bufp->chgBit(oldp+1186,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT__req_acquire));
        bufp->chgBit(oldp+1187,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT__excluded_client));
        bufp->chgBit(oldp+1188,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT__new_meta_hit));
        bufp->chgBit(oldp+1189,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT__new_request_prio_2));
        bufp->chgBit(oldp+1190,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT__new_meta_dirty));
        bufp->chgCData(oldp+1191,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT__new_meta_state),2);
        bufp->chgBit(oldp+1192,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT__new_meta_clients));
        bufp->chgBit(oldp+1193,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT__new_request_control));
        bufp->chgCData(oldp+1194,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT__new_request_opcode),3);
        bufp->chgCData(oldp+1195,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT__new_request_param),3);
        bufp->chgBit(oldp+1196,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT__new_needT));
        bufp->chgBit(oldp+1197,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT__new_clientBit));
        bufp->chgBit(oldp+1198,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT__last_probe));
        bufp->chgCData(oldp+1199,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT__meta_hit)
                                    ? (0xfU & ((0x4200U 
                                                | ((((0x2000U 
                                                      & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT__meta_clients)) 
                                                         << 0xdU)) 
                                                     | (0x1000U 
                                                        & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT__meta_dirty)) 
                                                           << 0xcU))) 
                                                    | ((0x100U 
                                                        & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT__meta_dirty)) 
                                                           << 8U)) 
                                                       | (0x10U 
                                                          & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT__meta_clients)) 
                                                             << 4U)))) 
                                                   | (8U 
                                                      & ((~ (IData)(
                                                                    (0U 
                                                                     != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT__meta_state)))) 
                                                         << 3U)))) 
                                               >> (0xfU 
                                                   & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT__meta_state) 
                                                      << 2U))))
                                    : 8U)),4);
        bufp->chgCData(oldp+1200,((0xfU & ((0x4200U 
                                            | ((((0x2000U 
                                                  & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT___io_schedule_bits_dir_bits_data_WIRE_clients)) 
                                                     << 0xdU)) 
                                                 | (0x1000U 
                                                    & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT___io_schedule_bits_dir_bits_data_WIRE_dirty)) 
                                                       << 0xcU))) 
                                                | ((0x100U 
                                                    & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT___io_schedule_bits_dir_bits_data_WIRE_dirty)) 
                                                       << 8U)) 
                                                   | (0x10U 
                                                      & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT___io_schedule_bits_dir_bits_data_WIRE_clients)) 
                                                         << 4U)))) 
                                               | ((0U 
                                                   == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT___io_schedule_bits_dir_bits_data_WIRE_state)) 
                                                  << 3U))) 
                                           >> (0xfU 
                                               & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT___io_schedule_bits_dir_bits_data_WIRE_state) 
                                                  << 2U))))),4);
        bufp->chgBit(oldp+1201,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__abc_mshrs_6__io_allocate_valid));
        bufp->chgBit(oldp+1202,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___GEN_53)
                                        ? (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___sinkC_io_req_valid))
                                        : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT___data_ext_R0_data)))));
        bufp->chgBit(oldp+1203,((1U & ((~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___T_59) 
                                           | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bypass_7))) 
                                       & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT___data_ext_R0_data 
                                                  >> 1U))))));
        bufp->chgBit(oldp+1204,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__abc_mshrs_6__io_allocate_bits_prio_2));
        bufp->chgBit(oldp+1205,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__abc_mshrs_6__io_allocate_bits_control));
        bufp->chgCData(oldp+1206,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__abc_mshrs_6__io_allocate_bits_opcode),3);
        bufp->chgCData(oldp+1207,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__abc_mshrs_6__io_allocate_bits_param),3);
        bufp->chgCData(oldp+1208,((7U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___GEN_53)
                                          ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___view___05FWIRE_11_size)
                                          : (IData)(
                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT___data_ext_R0_data 
                                                     >> 0xaU))))),3);
        bufp->chgCData(oldp+1209,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__abc_mshrs_6__io_allocate_bits_source),6);
        bufp->chgSData(oldp+1210,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___GEN_4),13);
        bufp->chgCData(oldp+1211,((0x3fU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___GEN_53)
                                             ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___view___05FWIRE_11_offset)
                                             : (IData)(
                                                       (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT___data_ext_R0_data 
                                                        >> 0x20U))))),6);
        bufp->chgCData(oldp+1212,((0x3fU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___GEN_53)
                                             ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___view___05FWIRE_11_put)
                                             : (IData)(
                                                       (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT___data_ext_R0_data 
                                                        >> 0x26U))))),6);
        bufp->chgSData(oldp+1213,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___T_59)
                                    ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__request_bits_set)
                                    : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT__request_set))),10);
        bufp->chgBit(oldp+1214,(((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___T_59)) 
                                 & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___GEN_4) 
                                    == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT__request_tag)))));
        bufp->chgBit(oldp+1215,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directoryFanout) 
                                       >> 6U))));
        bufp->chgBit(oldp+1216,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshr_selectOH) 
                                       >> 6U))));
        bufp->chgBit(oldp+1217,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__abc_mshrs_6__io_sinkc_valid));
        bufp->chgBit(oldp+1218,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__abc_mshrs_6__io_sinkd_valid));
        bufp->chgBit(oldp+1219,(((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_e_q__DOT__empty)) 
                                 & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___tile_prci_domain_auto_tl_master_clock_xing_out_1_e_bits_sink)))));
        bufp->chgBit(oldp+1220,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT__request_valid));
        bufp->chgSData(oldp+1221,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT__request_set),10);
        bufp->chgSData(oldp+1222,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT__request_tag),13);
        bufp->chgCData(oldp+1223,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT__meta_way),3);
        bufp->chgBit(oldp+1224,((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT__meta_valid)))));
        bufp->chgBit(oldp+1225,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT__meta_valid) 
                                 & (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT__w_rprobeackfirst)) 
                                     | (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT__w_pprobeackfirst))) 
                                    | (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT__w_grantfirst))))));
        bufp->chgBit(oldp+1226,((((((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT___io_schedule_bits_a_valid_output) 
                                      | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT___io_schedule_bits_b_valid_output)) 
                                     | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT___io_schedule_bits_c_valid_output)) 
                                    | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT___io_schedule_bits_d_valid_output)) 
                                   | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT___io_schedule_bits_e_valid_output)) 
                                  | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT___io_schedule_bits_x_valid_output)) 
                                 | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT___io_schedule_bits_dir_valid_output))));
        bufp->chgBit(oldp+1227,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT___io_schedule_bits_a_valid_output));
        bufp->chgCData(oldp+1228,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT__req_needT)
                                    ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT__meta_hit)
                                        ? 2U : 1U) : 0U)),3);
        bufp->chgBit(oldp+1229,((1U & ((6U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT__request_size)) 
                                       | (~ ((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT__request_opcode)) 
                                             | (7U 
                                                == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT__request_opcode))))))));
        bufp->chgBit(oldp+1230,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT___io_schedule_bits_b_valid_output));
        bufp->chgCData(oldp+1231,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT__s_rprobe)
                                    ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT__request_prio_1)
                                        ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT__request_param)
                                        : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT__req_needT)
                                            ? 2U : 1U))
                                    : 2U)),3);
        bufp->chgSData(oldp+1232,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT__s_rprobe)
                                    ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT__request_tag)
                                    : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT__meta_tag))),13);
        bufp->chgBit(oldp+1233,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT__meta_clients) 
                                 & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT__excluded_client)))));
        bufp->chgBit(oldp+1234,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT___io_schedule_bits_c_valid_output));
        bufp->chgCData(oldp+1235,((6U | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT__meta_dirty))),3);
        bufp->chgCData(oldp+1236,(((1U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT__meta_state))
                                    ? 2U : 1U)),3);
        bufp->chgSData(oldp+1237,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT__meta_tag),13);
        bufp->chgBit(oldp+1238,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT__meta_dirty));
        bufp->chgBit(oldp+1239,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT___io_schedule_bits_d_valid_output));
        bufp->chgBit(oldp+1240,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT__request_prio_0));
        bufp->chgBit(oldp+1241,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT__request_prio_2));
        bufp->chgCData(oldp+1242,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT__request_opcode),3);
        bufp->chgCData(oldp+1243,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT__req_acquire)
                                    ? ((1U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT__request_param))
                                        ? 1U : ((2U 
                                                 == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT__request_param))
                                                 ? 
                                                ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT__meta_hit) 
                                                   & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT__meta_clients)) 
                                                  & (0x20U 
                                                     == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT__request_source)))
                                                  ? 2U
                                                  : 1U)
                                                 : 
                                                ((0U 
                                                  == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT__request_param))
                                                  ? 
                                                 ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT__req_acquire) 
                                                  & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT__meta_hit)
                                                      ? 
                                                     ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT__meta_clients)) 
                                                      & (3U 
                                                         == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT__meta_state)))
                                                      : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT__gotT)))
                                                  : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT__request_param))))
                                    : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT__request_param))),3);
        bufp->chgCData(oldp+1244,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT__request_size),3);
        bufp->chgCData(oldp+1245,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT__request_source),6);
        bufp->chgCData(oldp+1246,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT__request_offset),6);
        bufp->chgCData(oldp+1247,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT__request_put),6);
        bufp->chgBit(oldp+1248,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT__bad_grant));
        bufp->chgBit(oldp+1249,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT___io_schedule_bits_e_valid_output));
        bufp->chgCData(oldp+1250,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT__sink),3);
        bufp->chgBit(oldp+1251,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT___io_schedule_bits_x_valid_output));
        bufp->chgBit(oldp+1252,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT___io_schedule_bits_dir_valid_output));
        bufp->chgBit(oldp+1253,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT__s_release) 
                                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT___io_schedule_bits_dir_bits_data_WIRE_dirty))));
        bufp->chgCData(oldp+1254,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT__s_release)
                                    ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT___io_schedule_bits_dir_bits_data_WIRE_state)
                                    : 0U)),2);
        bufp->chgBit(oldp+1255,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT__s_release) 
                                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT___io_schedule_bits_dir_bits_data_WIRE_clients))));
        bufp->chgSData(oldp+1256,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT__s_release)
                                    ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT___GEN_0)
                                        ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT__meta_tag)
                                        : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT__request_tag))
                                    : 0U)),13);
        bufp->chgBit(oldp+1257,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT__no_wait));
        bufp->chgBit(oldp+1258,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT__request_prio_1));
        bufp->chgBit(oldp+1259,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT__request_control));
        bufp->chgCData(oldp+1260,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT__request_param),3);
        bufp->chgBit(oldp+1261,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT__meta_valid));
        bufp->chgCData(oldp+1262,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT__meta_state),2);
        bufp->chgBit(oldp+1263,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT__meta_clients));
        bufp->chgBit(oldp+1264,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT__meta_hit));
        bufp->chgBit(oldp+1265,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT__s_rprobe));
        bufp->chgBit(oldp+1266,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT__w_rprobeackfirst));
        bufp->chgBit(oldp+1267,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT__w_rprobeacklast));
        bufp->chgBit(oldp+1268,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT__s_release));
        bufp->chgBit(oldp+1269,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT__w_releaseack));
        bufp->chgBit(oldp+1270,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT__s_pprobe));
        bufp->chgBit(oldp+1271,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT__s_acquire));
        bufp->chgBit(oldp+1272,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT__s_flush));
        bufp->chgBit(oldp+1273,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT__w_grantfirst));
        bufp->chgBit(oldp+1274,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT__w_grantlast));
        bufp->chgBit(oldp+1275,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT__w_grant));
        bufp->chgBit(oldp+1276,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT__w_pprobeackfirst));
        bufp->chgBit(oldp+1277,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT__w_pprobeacklast));
        bufp->chgBit(oldp+1278,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT__w_pprobeack));
        bufp->chgBit(oldp+1279,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT__s_grantack));
        bufp->chgBit(oldp+1280,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT__s_execute));
        bufp->chgBit(oldp+1281,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT__w_grantack));
        bufp->chgBit(oldp+1282,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT__s_writeback));
        bufp->chgBit(oldp+1283,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT__gotT));
        bufp->chgBit(oldp+1284,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT__probes_done));
        bufp->chgBit(oldp+1285,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT__probes_toN));
        bufp->chgBit(oldp+1286,((0x20U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT__request_source))));
        bufp->chgBit(oldp+1287,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT__req_needT));
        bufp->chgBit(oldp+1288,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT__req_acquire));
        bufp->chgBit(oldp+1289,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT__excluded_client));
        bufp->chgBit(oldp+1290,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT__new_meta_hit));
        bufp->chgBit(oldp+1291,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT__new_request_prio_2));
        bufp->chgBit(oldp+1292,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT__new_meta_dirty));
        bufp->chgCData(oldp+1293,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT__new_meta_state),2);
        bufp->chgBit(oldp+1294,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT__new_meta_clients));
        bufp->chgBit(oldp+1295,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT__new_request_control));
        bufp->chgCData(oldp+1296,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT__new_request_opcode),3);
        bufp->chgCData(oldp+1297,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT__new_request_param),3);
        bufp->chgBit(oldp+1298,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT__new_needT));
        bufp->chgBit(oldp+1299,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT__new_clientBit));
        bufp->chgBit(oldp+1300,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT__last_probe));
        bufp->chgCData(oldp+1301,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT__meta_hit)
                                    ? (0xfU & ((0x4200U 
                                                | ((((0x2000U 
                                                      & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT__meta_clients)) 
                                                         << 0xdU)) 
                                                     | (0x1000U 
                                                        & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT__meta_dirty)) 
                                                           << 0xcU))) 
                                                    | ((0x100U 
                                                        & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT__meta_dirty)) 
                                                           << 8U)) 
                                                       | (0x10U 
                                                          & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT__meta_clients)) 
                                                             << 4U)))) 
                                                   | (8U 
                                                      & ((~ (IData)(
                                                                    (0U 
                                                                     != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT__meta_state)))) 
                                                         << 3U)))) 
                                               >> (0xfU 
                                                   & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT__meta_state) 
                                                      << 2U))))
                                    : 8U)),4);
        bufp->chgCData(oldp+1302,((0xfU & ((0x4200U 
                                            | ((((0x2000U 
                                                  & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT___io_schedule_bits_dir_bits_data_WIRE_clients)) 
                                                     << 0xdU)) 
                                                 | (0x1000U 
                                                    & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT___io_schedule_bits_dir_bits_data_WIRE_dirty)) 
                                                       << 0xcU))) 
                                                | ((0x100U 
                                                    & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT___io_schedule_bits_dir_bits_data_WIRE_dirty)) 
                                                       << 8U)) 
                                                   | (0x10U 
                                                      & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT___io_schedule_bits_dir_bits_data_WIRE_clients)) 
                                                         << 4U)))) 
                                               | ((0U 
                                                   == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT___io_schedule_bits_dir_bits_data_WIRE_state)) 
                                                  << 3U))) 
                                           >> (0xfU 
                                               & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT___io_schedule_bits_dir_bits_data_WIRE_state) 
                                                  << 2U))))),4);
        bufp->chgBit(oldp+1303,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__abc_mshrs_7__io_allocate_valid));
        bufp->chgBit(oldp+1304,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___GEN_54)
                                        ? (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___sinkC_io_req_valid))
                                        : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT___data_ext_R0_data)))));
        bufp->chgBit(oldp+1305,((1U & ((~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___T_63) 
                                           | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bypass_8))) 
                                       & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT___data_ext_R0_data 
                                                  >> 1U))))));
        bufp->chgBit(oldp+1306,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__abc_mshrs_7__io_allocate_bits_prio_2));
        bufp->chgBit(oldp+1307,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__abc_mshrs_7__io_allocate_bits_control));
        bufp->chgCData(oldp+1308,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__abc_mshrs_7__io_allocate_bits_opcode),3);
        bufp->chgCData(oldp+1309,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__abc_mshrs_7__io_allocate_bits_param),3);
        bufp->chgCData(oldp+1310,((7U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___GEN_54)
                                          ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___view___05FWIRE_11_size)
                                          : (IData)(
                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT___data_ext_R0_data 
                                                     >> 0xaU))))),3);
        bufp->chgCData(oldp+1311,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__abc_mshrs_7__io_allocate_bits_source),6);
        bufp->chgSData(oldp+1312,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___GEN_3),13);
        bufp->chgCData(oldp+1313,((0x3fU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___GEN_54)
                                             ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___view___05FWIRE_11_offset)
                                             : (IData)(
                                                       (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT___data_ext_R0_data 
                                                        >> 0x20U))))),6);
        bufp->chgCData(oldp+1314,((0x3fU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___GEN_54)
                                             ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___view___05FWIRE_11_put)
                                             : (IData)(
                                                       (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT___data_ext_R0_data 
                                                        >> 0x26U))))),6);
        bufp->chgSData(oldp+1315,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___T_63)
                                    ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__request_bits_set)
                                    : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__request_set))),10);
        bufp->chgBit(oldp+1316,(((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___T_63)) 
                                 & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___GEN_3) 
                                    == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__request_tag)))));
        bufp->chgBit(oldp+1317,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directoryFanout) 
                                       >> 7U))));
        bufp->chgBit(oldp+1318,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshr_selectOH) 
                                       >> 7U))));
        bufp->chgBit(oldp+1319,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__abc_mshrs_7__io_sinkc_valid));
        bufp->chgBit(oldp+1320,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__abc_mshrs_7__io_sinkd_valid));
        bufp->chgBit(oldp+1321,(((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_e_q__DOT__empty)) 
                                 & (7U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___tile_prci_domain_auto_tl_master_clock_xing_out_1_e_bits_sink)))));
        bufp->chgBit(oldp+1322,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__request_valid));
        bufp->chgSData(oldp+1323,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__request_set),10);
        bufp->chgSData(oldp+1324,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__request_tag),13);
        bufp->chgCData(oldp+1325,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__meta_way),3);
        bufp->chgBit(oldp+1326,((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__meta_valid)))));
        bufp->chgBit(oldp+1327,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__meta_valid) 
                                 & (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__w_rprobeackfirst)) 
                                     | (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__w_pprobeackfirst))) 
                                    | (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__w_grantfirst))))));
        bufp->chgBit(oldp+1328,((((((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT___io_schedule_bits_a_valid_output) 
                                      | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT___io_schedule_bits_b_valid_output)) 
                                     | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT___io_schedule_bits_c_valid_output)) 
                                    | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT___io_schedule_bits_d_valid_output)) 
                                   | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT___io_schedule_bits_e_valid_output)) 
                                  | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT___io_schedule_bits_x_valid_output)) 
                                 | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT___io_schedule_bits_dir_valid_output))));
        bufp->chgBit(oldp+1329,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT___io_schedule_bits_a_valid_output));
        bufp->chgCData(oldp+1330,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__req_needT)
                                    ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__meta_hit)
                                        ? 2U : 1U) : 0U)),3);
        bufp->chgBit(oldp+1331,((1U & ((6U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__request_size)) 
                                       | (~ ((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__request_opcode)) 
                                             | (7U 
                                                == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__request_opcode))))))));
        bufp->chgBit(oldp+1332,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT___io_schedule_bits_b_valid_output));
        bufp->chgCData(oldp+1333,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__s_rprobe)
                                    ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__request_prio_1)
                                        ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__request_param)
                                        : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__req_needT)
                                            ? 2U : 1U))
                                    : 2U)),3);
        bufp->chgSData(oldp+1334,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__s_rprobe)
                                    ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__request_tag)
                                    : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__meta_tag))),13);
        bufp->chgBit(oldp+1335,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__meta_clients) 
                                 & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__excluded_client)))));
        bufp->chgBit(oldp+1336,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT___io_schedule_bits_c_valid_output));
        bufp->chgCData(oldp+1337,((6U | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__meta_dirty))),3);
        bufp->chgCData(oldp+1338,(((1U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__meta_state))
                                    ? 2U : 1U)),3);
        bufp->chgSData(oldp+1339,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__meta_tag),13);
        bufp->chgBit(oldp+1340,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__meta_dirty));
        bufp->chgBit(oldp+1341,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT___io_schedule_bits_d_valid_output));
        bufp->chgBit(oldp+1342,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__request_prio_0));
        bufp->chgBit(oldp+1343,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__request_prio_2));
        bufp->chgCData(oldp+1344,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__request_opcode),3);
        bufp->chgCData(oldp+1345,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__req_acquire)
                                    ? ((1U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__request_param))
                                        ? 1U : ((2U 
                                                 == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__request_param))
                                                 ? 
                                                ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__meta_hit) 
                                                   & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__meta_clients)) 
                                                  & (0x20U 
                                                     == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__request_source)))
                                                  ? 2U
                                                  : 1U)
                                                 : 
                                                ((0U 
                                                  == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__request_param))
                                                  ? 
                                                 ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__req_acquire) 
                                                  & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__meta_hit)
                                                      ? 
                                                     ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__meta_clients)) 
                                                      & (3U 
                                                         == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__meta_state)))
                                                      : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__gotT)))
                                                  : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__request_param))))
                                    : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__request_param))),3);
        bufp->chgCData(oldp+1346,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__request_size),3);
        bufp->chgCData(oldp+1347,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__request_source),6);
        bufp->chgCData(oldp+1348,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__request_offset),6);
        bufp->chgCData(oldp+1349,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__request_put),6);
        bufp->chgBit(oldp+1350,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__bad_grant));
        bufp->chgBit(oldp+1351,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT___io_schedule_bits_e_valid_output));
        bufp->chgCData(oldp+1352,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__sink),3);
        bufp->chgBit(oldp+1353,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT___io_schedule_bits_x_valid_output));
        bufp->chgBit(oldp+1354,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT___io_schedule_bits_dir_valid_output));
        bufp->chgBit(oldp+1355,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__s_release) 
                                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT___io_schedule_bits_dir_bits_data_WIRE_dirty))));
        bufp->chgCData(oldp+1356,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__s_release)
                                    ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT___io_schedule_bits_dir_bits_data_WIRE_state)
                                    : 0U)),2);
        bufp->chgBit(oldp+1357,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__s_release) 
                                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT___io_schedule_bits_dir_bits_data_WIRE_clients))));
        bufp->chgSData(oldp+1358,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__s_release)
                                    ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT___GEN_0)
                                        ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__meta_tag)
                                        : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__request_tag))
                                    : 0U)),13);
        bufp->chgBit(oldp+1359,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__no_wait));
        bufp->chgBit(oldp+1360,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__request_prio_1));
        bufp->chgBit(oldp+1361,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__request_control));
        bufp->chgCData(oldp+1362,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__request_param),3);
        bufp->chgBit(oldp+1363,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__meta_valid));
        bufp->chgCData(oldp+1364,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__meta_state),2);
        bufp->chgBit(oldp+1365,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__meta_clients));
        bufp->chgBit(oldp+1366,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__meta_hit));
        bufp->chgBit(oldp+1367,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__s_rprobe));
        bufp->chgBit(oldp+1368,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__w_rprobeackfirst));
        bufp->chgBit(oldp+1369,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__w_rprobeacklast));
        bufp->chgBit(oldp+1370,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__s_release));
        bufp->chgBit(oldp+1371,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__w_releaseack));
        bufp->chgBit(oldp+1372,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__s_pprobe));
        bufp->chgBit(oldp+1373,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__s_acquire));
        bufp->chgBit(oldp+1374,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__s_flush));
        bufp->chgBit(oldp+1375,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__w_grantfirst));
        bufp->chgBit(oldp+1376,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__w_grantlast));
        bufp->chgBit(oldp+1377,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__w_grant));
        bufp->chgBit(oldp+1378,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__w_pprobeackfirst));
        bufp->chgBit(oldp+1379,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__w_pprobeacklast));
        bufp->chgBit(oldp+1380,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__w_pprobeack));
        bufp->chgBit(oldp+1381,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__s_grantack));
        bufp->chgBit(oldp+1382,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__s_execute));
        bufp->chgBit(oldp+1383,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__w_grantack));
        bufp->chgBit(oldp+1384,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__s_writeback));
        bufp->chgBit(oldp+1385,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__gotT));
        bufp->chgBit(oldp+1386,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__probes_done));
        bufp->chgBit(oldp+1387,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__probes_toN));
        bufp->chgBit(oldp+1388,((0x20U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__request_source))));
        bufp->chgBit(oldp+1389,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__req_needT));
        bufp->chgBit(oldp+1390,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__req_acquire));
        bufp->chgBit(oldp+1391,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__excluded_client));
        bufp->chgBit(oldp+1392,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__new_meta_hit));
        bufp->chgBit(oldp+1393,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__new_request_prio_2));
        bufp->chgBit(oldp+1394,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__new_meta_dirty));
        bufp->chgCData(oldp+1395,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__new_meta_state),2);
        bufp->chgBit(oldp+1396,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__new_meta_clients));
        bufp->chgBit(oldp+1397,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__new_request_control));
        bufp->chgCData(oldp+1398,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__new_request_opcode),3);
        bufp->chgCData(oldp+1399,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__new_request_param),3);
        bufp->chgBit(oldp+1400,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__new_needT));
        bufp->chgBit(oldp+1401,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__new_clientBit));
        bufp->chgBit(oldp+1402,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__last_probe));
        bufp->chgCData(oldp+1403,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__meta_hit)
                                    ? (0xfU & ((0x4200U 
                                                | ((((0x2000U 
                                                      & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__meta_clients)) 
                                                         << 0xdU)) 
                                                     | (0x1000U 
                                                        & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__meta_dirty)) 
                                                           << 0xcU))) 
                                                    | ((0x100U 
                                                        & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__meta_dirty)) 
                                                           << 8U)) 
                                                       | (0x10U 
                                                          & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__meta_clients)) 
                                                             << 4U)))) 
                                                   | (8U 
                                                      & ((~ (IData)(
                                                                    (0U 
                                                                     != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__meta_state)))) 
                                                         << 3U)))) 
                                               >> (0xfU 
                                                   & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__meta_state) 
                                                      << 2U))))
                                    : 8U)),4);
        bufp->chgCData(oldp+1404,((0xfU & ((0x4200U 
                                            | ((((0x2000U 
                                                  & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT___io_schedule_bits_dir_bits_data_WIRE_clients)) 
                                                     << 0xdU)) 
                                                 | (0x1000U 
                                                    & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT___io_schedule_bits_dir_bits_data_WIRE_dirty)) 
                                                       << 0xcU))) 
                                                | ((0x100U 
                                                    & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT___io_schedule_bits_dir_bits_data_WIRE_dirty)) 
                                                       << 8U)) 
                                                   | (0x10U 
                                                      & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT___io_schedule_bits_dir_bits_data_WIRE_clients)) 
                                                         << 4U)))) 
                                               | ((0U 
                                                   == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT___io_schedule_bits_dir_bits_data_WIRE_state)) 
                                                  << 3U))) 
                                           >> (0xfU 
                                               & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT___io_schedule_bits_dir_bits_data_WIRE_state) 
                                                  << 2U))))),4);
        bufp->chgBit(oldp+1405,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__abc_mshrs_8__io_allocate_valid));
        bufp->chgBit(oldp+1406,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___GEN_55)
                                        ? (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___sinkC_io_req_valid))
                                        : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT___data_ext_R0_data)))));
        bufp->chgBit(oldp+1407,((1U & ((~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___T_67) 
                                           | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bypass_9))) 
                                       & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT___data_ext_R0_data 
                                                  >> 1U))))));
        bufp->chgBit(oldp+1408,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__abc_mshrs_8__io_allocate_bits_prio_2));
        bufp->chgBit(oldp+1409,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__abc_mshrs_8__io_allocate_bits_control));
        bufp->chgCData(oldp+1410,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__abc_mshrs_8__io_allocate_bits_opcode),3);
        bufp->chgCData(oldp+1411,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__abc_mshrs_8__io_allocate_bits_param),3);
        bufp->chgCData(oldp+1412,((7U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___GEN_55)
                                          ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___view___05FWIRE_11_size)
                                          : (IData)(
                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT___data_ext_R0_data 
                                                     >> 0xaU))))),3);
        bufp->chgCData(oldp+1413,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__abc_mshrs_8__io_allocate_bits_source),6);
        bufp->chgSData(oldp+1414,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___GEN_2),13);
        bufp->chgCData(oldp+1415,((0x3fU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___GEN_55)
                                             ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___view___05FWIRE_11_offset)
                                             : (IData)(
                                                       (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT___data_ext_R0_data 
                                                        >> 0x20U))))),6);
        bufp->chgCData(oldp+1416,((0x3fU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___GEN_55)
                                             ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___view___05FWIRE_11_put)
                                             : (IData)(
                                                       (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT___data_ext_R0_data 
                                                        >> 0x26U))))),6);
        bufp->chgSData(oldp+1417,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___T_67)
                                    ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__request_bits_set)
                                    : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__request_set))),10);
        bufp->chgBit(oldp+1418,(((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___T_67)) 
                                 & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___GEN_2) 
                                    == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__request_tag)))));
        bufp->chgBit(oldp+1419,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directoryFanout) 
                                       >> 8U))));
        bufp->chgBit(oldp+1420,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshr_selectOH) 
                                       >> 8U))));
        bufp->chgBit(oldp+1421,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__abc_mshrs_8__io_sinkc_valid));
        bufp->chgBit(oldp+1422,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__abc_mshrs_8__io_sinkd_valid));
        bufp->chgBit(oldp+1423,(((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_e_q__DOT__empty)) 
                                 & (8U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___tile_prci_domain_auto_tl_master_clock_xing_out_1_e_bits_sink)))));
        bufp->chgBit(oldp+1424,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__request_valid));
        bufp->chgSData(oldp+1425,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__request_set),10);
        bufp->chgSData(oldp+1426,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__request_tag),13);
        bufp->chgCData(oldp+1427,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__meta_way),3);
        bufp->chgBit(oldp+1428,((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__meta_valid)))));
        bufp->chgBit(oldp+1429,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__meta_valid) 
                                 & (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__w_rprobeackfirst)) 
                                     | (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__w_pprobeackfirst))) 
                                    | (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__w_grantfirst))))));
        bufp->chgBit(oldp+1430,((((((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT___io_schedule_bits_a_valid_output) 
                                      | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT___io_schedule_bits_b_valid_output)) 
                                     | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT___io_schedule_bits_c_valid_output)) 
                                    | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT___io_schedule_bits_d_valid_output)) 
                                   | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT___io_schedule_bits_e_valid_output)) 
                                  | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT___io_schedule_bits_x_valid_output)) 
                                 | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT___io_schedule_bits_dir_valid_output))));
        bufp->chgBit(oldp+1431,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT___io_schedule_bits_a_valid_output));
        bufp->chgCData(oldp+1432,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__req_needT)
                                    ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__meta_hit)
                                        ? 2U : 1U) : 0U)),3);
        bufp->chgBit(oldp+1433,((1U & ((6U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__request_size)) 
                                       | (~ ((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__request_opcode)) 
                                             | (7U 
                                                == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__request_opcode))))))));
        bufp->chgBit(oldp+1434,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT___io_schedule_bits_b_valid_output));
        bufp->chgCData(oldp+1435,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__s_rprobe)
                                    ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__request_prio_1)
                                        ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__request_param)
                                        : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__req_needT)
                                            ? 2U : 1U))
                                    : 2U)),3);
        bufp->chgSData(oldp+1436,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__s_rprobe)
                                    ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__request_tag)
                                    : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__meta_tag))),13);
        bufp->chgBit(oldp+1437,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__meta_clients) 
                                 & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__excluded_client)))));
        bufp->chgBit(oldp+1438,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT___io_schedule_bits_c_valid_output));
        bufp->chgCData(oldp+1439,((6U | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__meta_dirty))),3);
        bufp->chgCData(oldp+1440,(((1U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__meta_state))
                                    ? 2U : 1U)),3);
        bufp->chgSData(oldp+1441,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__meta_tag),13);
        bufp->chgBit(oldp+1442,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__meta_dirty));
        bufp->chgBit(oldp+1443,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT___io_schedule_bits_d_valid_output));
        bufp->chgBit(oldp+1444,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__request_prio_0));
        bufp->chgBit(oldp+1445,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__request_prio_2));
        bufp->chgCData(oldp+1446,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__request_opcode),3);
        bufp->chgCData(oldp+1447,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__req_acquire)
                                    ? ((1U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__request_param))
                                        ? 1U : ((2U 
                                                 == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__request_param))
                                                 ? 
                                                ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__meta_hit) 
                                                   & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__meta_clients)) 
                                                  & (0x20U 
                                                     == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__request_source)))
                                                  ? 2U
                                                  : 1U)
                                                 : 
                                                ((0U 
                                                  == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__request_param))
                                                  ? 
                                                 ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__req_acquire) 
                                                  & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__meta_hit)
                                                      ? 
                                                     ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__meta_clients)) 
                                                      & (3U 
                                                         == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__meta_state)))
                                                      : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__gotT)))
                                                  : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__request_param))))
                                    : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__request_param))),3);
        bufp->chgCData(oldp+1448,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__request_size),3);
        bufp->chgCData(oldp+1449,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__request_source),6);
        bufp->chgCData(oldp+1450,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__request_offset),6);
        bufp->chgCData(oldp+1451,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__request_put),6);
        bufp->chgBit(oldp+1452,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__bad_grant));
        bufp->chgBit(oldp+1453,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT___io_schedule_bits_e_valid_output));
        bufp->chgCData(oldp+1454,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__sink),3);
        bufp->chgBit(oldp+1455,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT___io_schedule_bits_x_valid_output));
        bufp->chgBit(oldp+1456,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT___io_schedule_bits_dir_valid_output));
        bufp->chgBit(oldp+1457,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__s_release) 
                                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT___io_schedule_bits_dir_bits_data_WIRE_dirty))));
        bufp->chgCData(oldp+1458,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__s_release)
                                    ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT___io_schedule_bits_dir_bits_data_WIRE_state)
                                    : 0U)),2);
        bufp->chgBit(oldp+1459,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__s_release) 
                                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT___io_schedule_bits_dir_bits_data_WIRE_clients))));
        bufp->chgSData(oldp+1460,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__s_release)
                                    ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT___GEN_0)
                                        ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__meta_tag)
                                        : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__request_tag))
                                    : 0U)),13);
        bufp->chgBit(oldp+1461,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__no_wait));
        bufp->chgBit(oldp+1462,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__request_prio_1));
        bufp->chgBit(oldp+1463,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__request_control));
        bufp->chgCData(oldp+1464,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__request_param),3);
        bufp->chgBit(oldp+1465,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__meta_valid));
        bufp->chgCData(oldp+1466,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__meta_state),2);
        bufp->chgBit(oldp+1467,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__meta_clients));
        bufp->chgBit(oldp+1468,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__meta_hit));
        bufp->chgBit(oldp+1469,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__s_rprobe));
        bufp->chgBit(oldp+1470,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__w_rprobeackfirst));
        bufp->chgBit(oldp+1471,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__w_rprobeacklast));
        bufp->chgBit(oldp+1472,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__s_release));
        bufp->chgBit(oldp+1473,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__w_releaseack));
        bufp->chgBit(oldp+1474,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__s_pprobe));
        bufp->chgBit(oldp+1475,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__s_acquire));
        bufp->chgBit(oldp+1476,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__s_flush));
        bufp->chgBit(oldp+1477,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__w_grantfirst));
        bufp->chgBit(oldp+1478,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__w_grantlast));
        bufp->chgBit(oldp+1479,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__w_grant));
        bufp->chgBit(oldp+1480,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__w_pprobeackfirst));
        bufp->chgBit(oldp+1481,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__w_pprobeacklast));
        bufp->chgBit(oldp+1482,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__w_pprobeack));
        bufp->chgBit(oldp+1483,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__s_grantack));
        bufp->chgBit(oldp+1484,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__s_execute));
        bufp->chgBit(oldp+1485,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__w_grantack));
        bufp->chgBit(oldp+1486,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__s_writeback));
        bufp->chgBit(oldp+1487,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__gotT));
        bufp->chgBit(oldp+1488,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__probes_done));
        bufp->chgBit(oldp+1489,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__probes_toN));
        bufp->chgBit(oldp+1490,((0x20U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__request_source))));
        bufp->chgBit(oldp+1491,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__req_needT));
        bufp->chgBit(oldp+1492,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__req_acquire));
        bufp->chgBit(oldp+1493,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__excluded_client));
        bufp->chgBit(oldp+1494,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__new_meta_hit));
        bufp->chgBit(oldp+1495,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__new_request_prio_2));
        bufp->chgBit(oldp+1496,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__new_meta_dirty));
        bufp->chgCData(oldp+1497,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__new_meta_state),2);
        bufp->chgBit(oldp+1498,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__new_meta_clients));
        bufp->chgBit(oldp+1499,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__new_request_control));
        bufp->chgCData(oldp+1500,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__new_request_opcode),3);
        bufp->chgCData(oldp+1501,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__new_request_param),3);
        bufp->chgBit(oldp+1502,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__new_needT));
        bufp->chgBit(oldp+1503,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__new_clientBit));
        bufp->chgBit(oldp+1504,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__last_probe));
        bufp->chgCData(oldp+1505,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__meta_hit)
                                    ? (0xfU & ((0x4200U 
                                                | ((((0x2000U 
                                                      & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__meta_clients)) 
                                                         << 0xdU)) 
                                                     | (0x1000U 
                                                        & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__meta_dirty)) 
                                                           << 0xcU))) 
                                                    | ((0x100U 
                                                        & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__meta_dirty)) 
                                                           << 8U)) 
                                                       | (0x10U 
                                                          & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__meta_clients)) 
                                                             << 4U)))) 
                                                   | (8U 
                                                      & ((~ (IData)(
                                                                    (0U 
                                                                     != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__meta_state)))) 
                                                         << 3U)))) 
                                               >> (0xfU 
                                                   & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__meta_state) 
                                                      << 2U))))
                                    : 8U)),4);
        bufp->chgCData(oldp+1506,((0xfU & ((0x4200U 
                                            | ((((0x2000U 
                                                  & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT___io_schedule_bits_dir_bits_data_WIRE_clients)) 
                                                     << 0xdU)) 
                                                 | (0x1000U 
                                                    & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT___io_schedule_bits_dir_bits_data_WIRE_dirty)) 
                                                       << 0xcU))) 
                                                | ((0x100U 
                                                    & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT___io_schedule_bits_dir_bits_data_WIRE_dirty)) 
                                                       << 8U)) 
                                                   | (0x10U 
                                                      & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT___io_schedule_bits_dir_bits_data_WIRE_clients)) 
                                                         << 4U)))) 
                                               | ((0U 
                                                   == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT___io_schedule_bits_dir_bits_data_WIRE_state)) 
                                                  << 3U))) 
                                           >> (0xfU 
                                               & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT___io_schedule_bits_dir_bits_data_WIRE_state) 
                                                  << 2U))))),4);
        bufp->chgBit(oldp+1507,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__abc_mshrs_9__io_allocate_valid));
        bufp->chgBit(oldp+1508,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___GEN_56)
                                        ? (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___sinkC_io_req_valid))
                                        : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT___data_ext_R0_data)))));
        bufp->chgBit(oldp+1509,((1U & ((~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___T_71) 
                                           | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bypass_10))) 
                                       & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT___data_ext_R0_data 
                                                  >> 1U))))));
        bufp->chgBit(oldp+1510,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__abc_mshrs_9__io_allocate_bits_prio_2));
        bufp->chgBit(oldp+1511,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__abc_mshrs_9__io_allocate_bits_control));
        bufp->chgCData(oldp+1512,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__abc_mshrs_9__io_allocate_bits_opcode),3);
        bufp->chgCData(oldp+1513,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__abc_mshrs_9__io_allocate_bits_param),3);
        bufp->chgCData(oldp+1514,((7U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___GEN_56)
                                          ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___view___05FWIRE_11_size)
                                          : (IData)(
                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT___data_ext_R0_data 
                                                     >> 0xaU))))),3);
        bufp->chgCData(oldp+1515,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__abc_mshrs_9__io_allocate_bits_source),6);
        bufp->chgSData(oldp+1516,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___GEN_1),13);
        bufp->chgCData(oldp+1517,((0x3fU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___GEN_56)
                                             ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___view___05FWIRE_11_offset)
                                             : (IData)(
                                                       (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT___data_ext_R0_data 
                                                        >> 0x20U))))),6);
        bufp->chgCData(oldp+1518,((0x3fU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___GEN_56)
                                             ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___view___05FWIRE_11_put)
                                             : (IData)(
                                                       (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT___data_ext_R0_data 
                                                        >> 0x26U))))),6);
        bufp->chgSData(oldp+1519,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___T_71)
                                    ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__request_bits_set)
                                    : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__request_set))),10);
        bufp->chgBit(oldp+1520,(((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___T_71)) 
                                 & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___GEN_1) 
                                    == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__request_tag)))));
        bufp->chgBit(oldp+1521,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directoryFanout) 
                                       >> 9U))));
        bufp->chgBit(oldp+1522,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshr_selectOH) 
                                       >> 9U))));
        bufp->chgBit(oldp+1523,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__abc_mshrs_9__io_sinkc_valid));
        bufp->chgBit(oldp+1524,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__abc_mshrs_9__io_sinkd_valid));
        bufp->chgBit(oldp+1525,(((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_e_q__DOT__empty)) 
                                 & (9U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___tile_prci_domain_auto_tl_master_clock_xing_out_1_e_bits_sink)))));
        bufp->chgBit(oldp+1526,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__request_valid));
        bufp->chgSData(oldp+1527,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__request_set),10);
        bufp->chgSData(oldp+1528,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__request_tag),13);
        bufp->chgCData(oldp+1529,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__meta_way),3);
        bufp->chgBit(oldp+1530,((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__meta_valid)))));
        bufp->chgBit(oldp+1531,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__meta_valid) 
                                 & (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__w_rprobeackfirst)) 
                                     | (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__w_pprobeackfirst))) 
                                    | (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__w_grantfirst))))));
        bufp->chgBit(oldp+1532,((((((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT___io_schedule_bits_a_valid_output) 
                                      | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT___io_schedule_bits_b_valid_output)) 
                                     | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT___io_schedule_bits_c_valid_output)) 
                                    | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT___io_schedule_bits_d_valid_output)) 
                                   | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT___io_schedule_bits_e_valid_output)) 
                                  | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT___io_schedule_bits_x_valid_output)) 
                                 | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT___io_schedule_bits_dir_valid_output))));
        bufp->chgBit(oldp+1533,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT___io_schedule_bits_a_valid_output));
        bufp->chgCData(oldp+1534,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__req_needT)
                                    ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__meta_hit)
                                        ? 2U : 1U) : 0U)),3);
        bufp->chgBit(oldp+1535,((1U & ((6U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__request_size)) 
                                       | (~ ((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__request_opcode)) 
                                             | (7U 
                                                == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__request_opcode))))))));
        bufp->chgBit(oldp+1536,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT___io_schedule_bits_b_valid_output));
        bufp->chgCData(oldp+1537,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__s_rprobe)
                                    ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__request_prio_1)
                                        ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__request_param)
                                        : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__req_needT)
                                            ? 2U : 1U))
                                    : 2U)),3);
        bufp->chgSData(oldp+1538,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__s_rprobe)
                                    ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__request_tag)
                                    : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__meta_tag))),13);
        bufp->chgBit(oldp+1539,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__meta_clients) 
                                 & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__excluded_client)))));
        bufp->chgBit(oldp+1540,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT___io_schedule_bits_c_valid_output));
        bufp->chgCData(oldp+1541,((6U | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__meta_dirty))),3);
        bufp->chgCData(oldp+1542,(((1U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__meta_state))
                                    ? 2U : 1U)),3);
        bufp->chgSData(oldp+1543,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__meta_tag),13);
        bufp->chgBit(oldp+1544,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__meta_dirty));
        bufp->chgBit(oldp+1545,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT___io_schedule_bits_d_valid_output));
        bufp->chgBit(oldp+1546,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__request_prio_0));
        bufp->chgBit(oldp+1547,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__request_prio_2));
        bufp->chgCData(oldp+1548,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__request_opcode),3);
        bufp->chgCData(oldp+1549,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__req_acquire)
                                    ? ((1U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__request_param))
                                        ? 1U : ((2U 
                                                 == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__request_param))
                                                 ? 
                                                ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__meta_hit) 
                                                   & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__meta_clients)) 
                                                  & (0x20U 
                                                     == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__request_source)))
                                                  ? 2U
                                                  : 1U)
                                                 : 
                                                ((0U 
                                                  == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__request_param))
                                                  ? 
                                                 ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__req_acquire) 
                                                  & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__meta_hit)
                                                      ? 
                                                     ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__meta_clients)) 
                                                      & (3U 
                                                         == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__meta_state)))
                                                      : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__gotT)))
                                                  : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__request_param))))
                                    : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__request_param))),3);
        bufp->chgCData(oldp+1550,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__request_size),3);
        bufp->chgCData(oldp+1551,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__request_source),6);
        bufp->chgCData(oldp+1552,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__request_offset),6);
        bufp->chgCData(oldp+1553,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__request_put),6);
        bufp->chgBit(oldp+1554,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__bad_grant));
        bufp->chgBit(oldp+1555,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT___io_schedule_bits_e_valid_output));
        bufp->chgCData(oldp+1556,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__sink),3);
        bufp->chgBit(oldp+1557,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT___io_schedule_bits_x_valid_output));
        bufp->chgBit(oldp+1558,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT___io_schedule_bits_dir_valid_output));
        bufp->chgBit(oldp+1559,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__s_release) 
                                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT___io_schedule_bits_dir_bits_data_WIRE_dirty))));
        bufp->chgCData(oldp+1560,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__s_release)
                                    ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT___io_schedule_bits_dir_bits_data_WIRE_state)
                                    : 0U)),2);
        bufp->chgBit(oldp+1561,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__s_release) 
                                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT___io_schedule_bits_dir_bits_data_WIRE_clients))));
        bufp->chgSData(oldp+1562,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__s_release)
                                    ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT___GEN_0)
                                        ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__meta_tag)
                                        : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__request_tag))
                                    : 0U)),13);
        bufp->chgBit(oldp+1563,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__no_wait));
        bufp->chgBit(oldp+1564,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__request_prio_1));
        bufp->chgBit(oldp+1565,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__request_control));
        bufp->chgCData(oldp+1566,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__request_param),3);
        bufp->chgBit(oldp+1567,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__meta_valid));
        bufp->chgCData(oldp+1568,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__meta_state),2);
        bufp->chgBit(oldp+1569,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__meta_clients));
        bufp->chgBit(oldp+1570,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__meta_hit));
        bufp->chgBit(oldp+1571,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__s_rprobe));
        bufp->chgBit(oldp+1572,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__w_rprobeackfirst));
        bufp->chgBit(oldp+1573,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__w_rprobeacklast));
        bufp->chgBit(oldp+1574,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__s_release));
        bufp->chgBit(oldp+1575,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__w_releaseack));
        bufp->chgBit(oldp+1576,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__s_pprobe));
        bufp->chgBit(oldp+1577,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__s_acquire));
        bufp->chgBit(oldp+1578,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__s_flush));
        bufp->chgBit(oldp+1579,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__w_grantfirst));
        bufp->chgBit(oldp+1580,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__w_grantlast));
        bufp->chgBit(oldp+1581,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__w_grant));
        bufp->chgBit(oldp+1582,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__w_pprobeackfirst));
        bufp->chgBit(oldp+1583,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__w_pprobeacklast));
        bufp->chgBit(oldp+1584,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__w_pprobeack));
        bufp->chgBit(oldp+1585,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__s_grantack));
        bufp->chgBit(oldp+1586,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__s_execute));
        bufp->chgBit(oldp+1587,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__w_grantack));
        bufp->chgBit(oldp+1588,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__s_writeback));
        bufp->chgBit(oldp+1589,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__gotT));
        bufp->chgBit(oldp+1590,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__probes_done));
        bufp->chgBit(oldp+1591,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__probes_toN));
        bufp->chgBit(oldp+1592,((0x20U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__request_source))));
        bufp->chgBit(oldp+1593,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__req_needT));
        bufp->chgBit(oldp+1594,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__req_acquire));
        bufp->chgBit(oldp+1595,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__excluded_client));
        bufp->chgBit(oldp+1596,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__new_meta_hit));
        bufp->chgBit(oldp+1597,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__new_request_prio_2));
        bufp->chgBit(oldp+1598,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__new_meta_dirty));
        bufp->chgCData(oldp+1599,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__new_meta_state),2);
        bufp->chgBit(oldp+1600,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__new_meta_clients));
        bufp->chgBit(oldp+1601,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__new_request_control));
        bufp->chgCData(oldp+1602,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__new_request_opcode),3);
        bufp->chgCData(oldp+1603,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__new_request_param),3);
        bufp->chgBit(oldp+1604,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__new_needT));
        bufp->chgBit(oldp+1605,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__new_clientBit));
        bufp->chgBit(oldp+1606,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__last_probe));
        bufp->chgCData(oldp+1607,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__meta_hit)
                                    ? (0xfU & ((0x4200U 
                                                | ((((0x2000U 
                                                      & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__meta_clients)) 
                                                         << 0xdU)) 
                                                     | (0x1000U 
                                                        & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__meta_dirty)) 
                                                           << 0xcU))) 
                                                    | ((0x100U 
                                                        & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__meta_dirty)) 
                                                           << 8U)) 
                                                       | (0x10U 
                                                          & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__meta_clients)) 
                                                             << 4U)))) 
                                                   | (8U 
                                                      & ((~ (IData)(
                                                                    (0U 
                                                                     != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__meta_state)))) 
                                                         << 3U)))) 
                                               >> (0xfU 
                                                   & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__meta_state) 
                                                      << 2U))))
                                    : 8U)),4);
        bufp->chgCData(oldp+1608,((0xfU & ((0x4200U 
                                            | ((((0x2000U 
                                                  & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT___io_schedule_bits_dir_bits_data_WIRE_clients)) 
                                                     << 0xdU)) 
                                                 | (0x1000U 
                                                    & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT___io_schedule_bits_dir_bits_data_WIRE_dirty)) 
                                                       << 0xcU))) 
                                                | ((0x100U 
                                                    & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT___io_schedule_bits_dir_bits_data_WIRE_dirty)) 
                                                       << 8U)) 
                                                   | (0x10U 
                                                      & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT___io_schedule_bits_dir_bits_data_WIRE_clients)) 
                                                         << 4U)))) 
                                               | ((0U 
                                                   == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT___io_schedule_bits_dir_bits_data_WIRE_state)) 
                                                  << 3U))) 
                                           >> (0xfU 
                                               & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT___io_schedule_bits_dir_bits_data_WIRE_state) 
                                                  << 2U))))),4);
        bufp->chgBit(oldp+1609,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__io_bs_adr_q__DOT__maybe_full));
        bufp->chgBit(oldp+1610,((1U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__io_bs_adr_q__DOT__ram_ext__DOT__Memory
                                 [0U])));
        bufp->chgCData(oldp+1611,((7U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__io_bs_adr_q__DOT__ram_ext__DOT__Memory
                                         [0U] >> 1U))),3);
        bufp->chgSData(oldp+1612,((0x3ffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__io_bs_adr_q__DOT__ram_ext__DOT__Memory
                                             [0U] >> 4U))),10);
        bufp->chgCData(oldp+1613,((3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__io_bs_adr_q__DOT__ram_ext__DOT__Memory
                                         [0U] >> 0xeU))),2);
        bufp->chgCData(oldp+1614,((3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__io_bs_adr_q__DOT__ram_ext__DOT__Memory
                                         [0U] >> 0x10U))),2);
        bufp->chgWData(oldp+1615,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__io_bs_dat_data_r),128);
        bufp->chgBit(oldp+1619,(((0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkD__DOT__counter)) 
                                 | ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkD__DOT__d__DOT__empty)) 
                                    & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___sourceD_io_grant_safe)))));
        bufp->chgBit(oldp+1620,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkD__DOT__d__DOT__empty) 
                                       | (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkD__DOT__d__DOT___ram_ext_R0_data[0U])))));
        bufp->chgCData(oldp+1621,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__sinkD__io_way),3);
        bufp->chgSData(oldp+1622,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__sinkD__io_set),10);
        bufp->chgCData(oldp+1623,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___sinkD_io_bs_adr_bits_beat),3);
        bufp->chgQData(oldp+1624,((((QData)((IData)(
                                                    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkD__DOT__d__DOT___ram_ext_R0_data[2U])) 
                                    << 0x30U) | (((QData)((IData)(
                                                                  vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkD__DOT__d__DOT___ram_ext_R0_data[1U])) 
                                                  << 0x10U) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkD__DOT__d__DOT___ram_ext_R0_data[0U])) 
                                                    >> 0x10U)))),64);
        bufp->chgBit(oldp+1626,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT___io_bs_adr_valid_output));
        bufp->chgCData(oldp+1627,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__req_way),3);
        bufp->chgSData(oldp+1628,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__req_set),10);
        bufp->chgCData(oldp+1629,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__beat),3);
        bufp->chgBit(oldp+1630,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT___io_bs_radr_valid_output));
        bufp->chgCData(oldp+1631,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s1_req_way),3);
        bufp->chgSData(oldp+1632,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s1_req_set),10);
        bufp->chgCData(oldp+1633,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s1_beat),2);
        bufp->chgCData(oldp+1634,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s1_mask),2);
        bufp->chgBit(oldp+1635,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_full) 
                                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_need_bs))));
        bufp->chgCData(oldp+1636,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_way),3);
        bufp->chgSData(oldp+1637,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_set),10);
        bufp->chgCData(oldp+1638,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_beat),2);
        bufp->chgCData(oldp+1639,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___sourceD_io_bs_wadr_bits_mask),2);
        bufp->chgWData(oldp+1640,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT___atomics_io_data_out),128);
        bufp->chgBit(oldp+1644,((1U & (0xfU >> (3U 
                                                & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__io_bs_adr_q__DOT__ram_ext__DOT__Memory
                                                   [0U] 
                                                   >> 0xeU))))));
        bufp->chgBit(oldp+1645,((1U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT___sinkD_req_io_sinkD_adr_ready_T_1))));
        bufp->chgBit(oldp+1646,(((7U >= (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__beat))
                                  ? (1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__sourceC_req_ready) 
                                           >> (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__beat)))
                                  : 0U)));
        bufp->chgQData(oldp+1647,((((((((((1U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__regsel_sourceC))
                                           ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__regout_r
                                           : 0ULL) 
                                         | ((2U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__regsel_sourceC))
                                             ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__regout_r_1
                                             : 0ULL)) 
                                        | ((4U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__regsel_sourceC))
                                            ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__regout_r_2
                                            : 0ULL)) 
                                       | ((8U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__regsel_sourceC))
                                           ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__regout_r_3
                                           : 0ULL)) 
                                      | ((0x10U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__regsel_sourceC))
                                          ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__regout_r_4
                                          : 0ULL)) 
                                     | ((0x20U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__regsel_sourceC))
                                         ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__regout_r_5
                                         : 0ULL)) | 
                                    ((0x40U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__regsel_sourceC))
                                      ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__regout_r_6
                                      : 0ULL)) | ((0x80U 
                                                   & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__regsel_sourceC))
                                                   ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__regout_r_7
                                                   : 0ULL))),64);
        bufp->chgBit(oldp+1649,((1U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT___sourceD_rreq_io_sourceD_radr_ready_T_1))));
        bufp->chgWData(oldp+1650,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___bankedStore_io_sourceD_rdat_data),128);
        bufp->chgBit(oldp+1654,((1U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT___sourceD_wreq_io_sourceD_wadr_ready_T_1))));
        bufp->chgBit(oldp+1655,(((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__regout_wen_7)) 
                                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__regout_en_7))));
        bufp->chgBit(oldp+1656,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__regout_wen_7) 
                                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__regout_en_7))));
        bufp->chgBit(oldp+1657,(((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__regout_wen_6)) 
                                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__regout_en_6))));
        bufp->chgBit(oldp+1658,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__regout_wen_6) 
                                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__regout_en_6))));
        bufp->chgBit(oldp+1659,(((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__regout_wen_5)) 
                                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__regout_en_5))));
        bufp->chgBit(oldp+1660,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__regout_wen_5) 
                                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__regout_en_5))));
        bufp->chgBit(oldp+1661,(((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__regout_wen_4)) 
                                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__regout_en_4))));
        bufp->chgBit(oldp+1662,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__regout_wen_4) 
                                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__regout_en_4))));
        bufp->chgBit(oldp+1663,(((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__regout_wen_3)) 
                                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__regout_en_3))));
        bufp->chgBit(oldp+1664,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__regout_wen_3) 
                                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__regout_en_3))));
        bufp->chgBit(oldp+1665,(((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__regout_wen_2)) 
                                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__regout_en_2))));
        bufp->chgBit(oldp+1666,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__regout_wen_2) 
                                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__regout_en_2))));
        bufp->chgBit(oldp+1667,(((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__regout_wen_1)) 
                                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__regout_en_1))));
        bufp->chgBit(oldp+1668,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__regout_wen_1) 
                                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__regout_en_1))));
        bufp->chgBit(oldp+1669,(((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__regout_wen)) 
                                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__regout_en))));
        bufp->chgBit(oldp+1670,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__regout_wen) 
                                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__regout_en))));
        bufp->chgCData(oldp+1671,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__reqs_4_bankSum),8);
        bufp->chgCData(oldp+1672,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__reqs_3_bankSum),8);
        bufp->chgCData(oldp+1673,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__reqs_2_bankSum),8);
        bufp->chgSData(oldp+1674,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__reqs_0_index),13);
        bufp->chgCData(oldp+1675,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__reqs_1_bankSum),8);
        bufp->chgCData(oldp+1676,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__reqs_0_bankEn),8);
        bufp->chgCData(oldp+1677,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__sinkD_req_ready),8);
        bufp->chgSData(oldp+1678,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__reqs_2_index),13);
        bufp->chgCData(oldp+1679,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__reqs_2_bankSel),8);
        bufp->chgCData(oldp+1680,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__reqs_2_bankEn),8);
        bufp->chgCData(oldp+1681,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__sourceC_req_ready),8);
        bufp->chgSData(oldp+1682,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__reqs_1_index),13);
        bufp->chgCData(oldp+1683,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__reqs_1_bankSel),8);
        bufp->chgCData(oldp+1684,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__reqs_1_bankEn),8);
        bufp->chgSData(oldp+1685,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__reqs_4_index),13);
        bufp->chgCData(oldp+1686,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__reqs_4_bankEn),8);
        bufp->chgSData(oldp+1687,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__reqs_3_index),13);
        bufp->chgCData(oldp+1688,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__reqs_3_bankSel),8);
        bufp->chgCData(oldp+1689,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__reqs_3_bankEn),8);
        bufp->chgBit(oldp+1690,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__regout_en));
        bufp->chgBit(oldp+1691,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__regout_wen));
        bufp->chgBit(oldp+1692,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__regout_REG));
        bufp->chgQData(oldp+1693,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__regout_r),64);
        bufp->chgBit(oldp+1695,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__regout_en_1));
        bufp->chgBit(oldp+1696,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__regout_wen_1));
        bufp->chgBit(oldp+1697,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__regout_REG_1));
        bufp->chgQData(oldp+1698,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__regout_r_1),64);
        bufp->chgBit(oldp+1700,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__regout_en_2));
        bufp->chgBit(oldp+1701,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__regout_wen_2));
        bufp->chgBit(oldp+1702,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__regout_REG_2));
        bufp->chgQData(oldp+1703,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__regout_r_2),64);
        bufp->chgBit(oldp+1705,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__regout_en_3));
        bufp->chgBit(oldp+1706,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__regout_wen_3));
        bufp->chgBit(oldp+1707,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__regout_REG_3));
        bufp->chgQData(oldp+1708,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__regout_r_3),64);
        bufp->chgBit(oldp+1710,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__regout_en_4));
        bufp->chgBit(oldp+1711,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__regout_wen_4));
        bufp->chgBit(oldp+1712,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__regout_REG_4));
        bufp->chgQData(oldp+1713,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__regout_r_4),64);
        bufp->chgBit(oldp+1715,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__regout_en_5));
        bufp->chgBit(oldp+1716,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__regout_wen_5));
        bufp->chgBit(oldp+1717,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__regout_REG_5));
        bufp->chgQData(oldp+1718,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__regout_r_5),64);
        bufp->chgBit(oldp+1720,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__regout_en_6));
        bufp->chgBit(oldp+1721,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__regout_wen_6));
        bufp->chgBit(oldp+1722,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__regout_REG_6));
        bufp->chgQData(oldp+1723,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__regout_r_6),64);
        bufp->chgBit(oldp+1725,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__regout_en_7));
        bufp->chgBit(oldp+1726,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__regout_wen_7));
        bufp->chgBit(oldp+1727,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__regout_REG_7));
        bufp->chgQData(oldp+1728,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__regout_r_7),64);
        bufp->chgCData(oldp+1730,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__regsel_sourceC_REG),8);
        bufp->chgCData(oldp+1731,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__regsel_sourceC),8);
        bufp->chgCData(oldp+1732,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__regsel_sourceD_REG),8);
        bufp->chgCData(oldp+1733,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__regsel_sourceD),8);
        bufp->chgSData(oldp+1734,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT____Vcellinp__cc_banks_0__RW0_addr),13);
        bufp->chgBit(oldp+1735,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT____Vcellinp__cc_banks_0__RW0_en));
        bufp->chgQData(oldp+1736,(((1U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__reqs_1_bankSum))
                                    ? (((QData)((IData)(
                                                        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__io_bs_dat_data_r[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__io_bs_dat_data_r[0U])))
                                    : ((1U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__reqs_1_bankSel))
                                        ? 0ULL : ((1U 
                                                   & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__reqs_2_bankSel))
                                                   ? 
                                                  (((QData)((IData)(
                                                                    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkD__DOT__d__DOT___ram_ext_R0_data[2U])) 
                                                    << 0x30U) 
                                                   | (((QData)((IData)(
                                                                       vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkD__DOT__d__DOT___ram_ext_R0_data[1U])) 
                                                       << 0x10U) 
                                                      | ((QData)((IData)(
                                                                         vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkD__DOT__d__DOT___ram_ext_R0_data[0U])) 
                                                         >> 0x10U)))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__reqs_3_bankSel))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT___atomics_io_data_out[1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT___atomics_io_data_out[0U])))
                                                    : 0ULL))))),64);
        bufp->chgQData(oldp+1738,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__cc_banks_0__DOT__cc_banks_0_ext__DOT__mem_0_0__DOT__ram
                                  [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__cc_banks_0__DOT__cc_banks_0_ext__DOT__mem_0_0__DOT__ram_RW_0_r_addr_pipe_0]),64);
        bufp->chgBit(oldp+1740,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__cc_banks_0__DOT__cc_banks_0_ext__DOT__mem_0_0__DOT__ram_RW_0_r_en_pipe_0));
        bufp->chgSData(oldp+1741,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__cc_banks_0__DOT__cc_banks_0_ext__DOT__mem_0_0__DOT__ram_RW_0_r_addr_pipe_0),13);
        bufp->chgBit(oldp+1742,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT____Vcellinp__cc_banks_0__RW0_en) 
                                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__regout_wen))));
        bufp->chgSData(oldp+1743,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT____Vcellinp__cc_banks_1__RW0_addr),13);
        bufp->chgBit(oldp+1744,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT____Vcellinp__cc_banks_1__RW0_en));
        bufp->chgQData(oldp+1745,(((2U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__reqs_1_bankSum))
                                    ? (((QData)((IData)(
                                                        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__io_bs_dat_data_r[3U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__io_bs_dat_data_r[2U])))
                                    : ((2U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__reqs_1_bankSel))
                                        ? 0ULL : ((2U 
                                                   & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__reqs_2_bankSel))
                                                   ? 
                                                  (((QData)((IData)(
                                                                    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkD__DOT__d__DOT___ram_ext_R0_data[2U])) 
                                                    << 0x30U) 
                                                   | (((QData)((IData)(
                                                                       vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkD__DOT__d__DOT___ram_ext_R0_data[1U])) 
                                                       << 0x10U) 
                                                      | ((QData)((IData)(
                                                                         vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkD__DOT__d__DOT___ram_ext_R0_data[0U])) 
                                                         >> 0x10U)))
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__reqs_3_bankSel))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT___atomics_io_data_out[3U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT___atomics_io_data_out[2U])))
                                                    : 0ULL))))),64);
        bufp->chgQData(oldp+1747,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__cc_banks_1__DOT__cc_banks_0_ext__DOT__mem_0_0__DOT__ram
                                  [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__cc_banks_1__DOT__cc_banks_0_ext__DOT__mem_0_0__DOT__ram_RW_0_r_addr_pipe_0]),64);
        bufp->chgBit(oldp+1749,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__cc_banks_1__DOT__cc_banks_0_ext__DOT__mem_0_0__DOT__ram_RW_0_r_en_pipe_0));
        bufp->chgSData(oldp+1750,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__cc_banks_1__DOT__cc_banks_0_ext__DOT__mem_0_0__DOT__ram_RW_0_r_addr_pipe_0),13);
        bufp->chgBit(oldp+1751,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT____Vcellinp__cc_banks_1__RW0_en) 
                                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__regout_wen_1))));
        bufp->chgSData(oldp+1752,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT____Vcellinp__cc_banks_2__RW0_addr),13);
        bufp->chgBit(oldp+1753,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT____Vcellinp__cc_banks_2__RW0_en));
        bufp->chgQData(oldp+1754,(((4U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__reqs_1_bankSum))
                                    ? (((QData)((IData)(
                                                        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__io_bs_dat_data_r[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__io_bs_dat_data_r[0U])))
                                    : ((4U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__reqs_1_bankSel))
                                        ? 0ULL : ((4U 
                                                   & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__reqs_2_bankSel))
                                                   ? 
                                                  (((QData)((IData)(
                                                                    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkD__DOT__d__DOT___ram_ext_R0_data[2U])) 
                                                    << 0x30U) 
                                                   | (((QData)((IData)(
                                                                       vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkD__DOT__d__DOT___ram_ext_R0_data[1U])) 
                                                       << 0x10U) 
                                                      | ((QData)((IData)(
                                                                         vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkD__DOT__d__DOT___ram_ext_R0_data[0U])) 
                                                         >> 0x10U)))
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__reqs_3_bankSel))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT___atomics_io_data_out[1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT___atomics_io_data_out[0U])))
                                                    : 0ULL))))),64);
        bufp->chgQData(oldp+1756,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__cc_banks_2__DOT__cc_banks_0_ext__DOT__mem_0_0__DOT__ram
                                  [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__cc_banks_2__DOT__cc_banks_0_ext__DOT__mem_0_0__DOT__ram_RW_0_r_addr_pipe_0]),64);
        bufp->chgBit(oldp+1758,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__cc_banks_2__DOT__cc_banks_0_ext__DOT__mem_0_0__DOT__ram_RW_0_r_en_pipe_0));
        bufp->chgSData(oldp+1759,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__cc_banks_2__DOT__cc_banks_0_ext__DOT__mem_0_0__DOT__ram_RW_0_r_addr_pipe_0),13);
        bufp->chgBit(oldp+1760,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT____Vcellinp__cc_banks_2__RW0_en) 
                                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__regout_wen_2))));
        bufp->chgSData(oldp+1761,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT____Vcellinp__cc_banks_3__RW0_addr),13);
        bufp->chgBit(oldp+1762,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT____Vcellinp__cc_banks_3__RW0_en));
        bufp->chgQData(oldp+1763,(((8U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__reqs_1_bankSum))
                                    ? (((QData)((IData)(
                                                        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__io_bs_dat_data_r[3U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__io_bs_dat_data_r[2U])))
                                    : ((8U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__reqs_1_bankSel))
                                        ? 0ULL : ((8U 
                                                   & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__reqs_2_bankSel))
                                                   ? 
                                                  (((QData)((IData)(
                                                                    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkD__DOT__d__DOT___ram_ext_R0_data[2U])) 
                                                    << 0x30U) 
                                                   | (((QData)((IData)(
                                                                       vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkD__DOT__d__DOT___ram_ext_R0_data[1U])) 
                                                       << 0x10U) 
                                                      | ((QData)((IData)(
                                                                         vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkD__DOT__d__DOT___ram_ext_R0_data[0U])) 
                                                         >> 0x10U)))
                                                   : 
                                                  ((8U 
                                                    & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__reqs_3_bankSel))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT___atomics_io_data_out[3U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT___atomics_io_data_out[2U])))
                                                    : 0ULL))))),64);
        bufp->chgQData(oldp+1765,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__cc_banks_3__DOT__cc_banks_0_ext__DOT__mem_0_0__DOT__ram
                                  [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__cc_banks_3__DOT__cc_banks_0_ext__DOT__mem_0_0__DOT__ram_RW_0_r_addr_pipe_0]),64);
        bufp->chgBit(oldp+1767,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__cc_banks_3__DOT__cc_banks_0_ext__DOT__mem_0_0__DOT__ram_RW_0_r_en_pipe_0));
        bufp->chgSData(oldp+1768,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__cc_banks_3__DOT__cc_banks_0_ext__DOT__mem_0_0__DOT__ram_RW_0_r_addr_pipe_0),13);
        bufp->chgBit(oldp+1769,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT____Vcellinp__cc_banks_3__RW0_en) 
                                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__regout_wen_3))));
        bufp->chgSData(oldp+1770,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT____Vcellinp__cc_banks_4__RW0_addr),13);
        bufp->chgBit(oldp+1771,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT____Vcellinp__cc_banks_4__RW0_en));
        bufp->chgQData(oldp+1772,(((0x10U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__reqs_1_bankSum))
                                    ? (((QData)((IData)(
                                                        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__io_bs_dat_data_r[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__io_bs_dat_data_r[0U])))
                                    : ((0x10U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__reqs_1_bankSel))
                                        ? 0ULL : ((0x10U 
                                                   & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__reqs_2_bankSel))
                                                   ? 
                                                  (((QData)((IData)(
                                                                    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkD__DOT__d__DOT___ram_ext_R0_data[2U])) 
                                                    << 0x30U) 
                                                   | (((QData)((IData)(
                                                                       vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkD__DOT__d__DOT___ram_ext_R0_data[1U])) 
                                                       << 0x10U) 
                                                      | ((QData)((IData)(
                                                                         vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkD__DOT__d__DOT___ram_ext_R0_data[0U])) 
                                                         >> 0x10U)))
                                                   : 
                                                  ((0x10U 
                                                    & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__reqs_3_bankSel))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT___atomics_io_data_out[1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT___atomics_io_data_out[0U])))
                                                    : 0ULL))))),64);
        bufp->chgQData(oldp+1774,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__cc_banks_4__DOT__cc_banks_0_ext__DOT__mem_0_0__DOT__ram
                                  [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__cc_banks_4__DOT__cc_banks_0_ext__DOT__mem_0_0__DOT__ram_RW_0_r_addr_pipe_0]),64);
        bufp->chgBit(oldp+1776,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__cc_banks_4__DOT__cc_banks_0_ext__DOT__mem_0_0__DOT__ram_RW_0_r_en_pipe_0));
        bufp->chgSData(oldp+1777,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__cc_banks_4__DOT__cc_banks_0_ext__DOT__mem_0_0__DOT__ram_RW_0_r_addr_pipe_0),13);
        bufp->chgBit(oldp+1778,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT____Vcellinp__cc_banks_4__RW0_en) 
                                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__regout_wen_4))));
        bufp->chgSData(oldp+1779,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT____Vcellinp__cc_banks_5__RW0_addr),13);
        bufp->chgBit(oldp+1780,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT____Vcellinp__cc_banks_5__RW0_en));
        bufp->chgQData(oldp+1781,(((0x20U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__reqs_1_bankSum))
                                    ? (((QData)((IData)(
                                                        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__io_bs_dat_data_r[3U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__io_bs_dat_data_r[2U])))
                                    : ((0x20U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__reqs_1_bankSel))
                                        ? 0ULL : ((0x20U 
                                                   & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__reqs_2_bankSel))
                                                   ? 
                                                  (((QData)((IData)(
                                                                    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkD__DOT__d__DOT___ram_ext_R0_data[2U])) 
                                                    << 0x30U) 
                                                   | (((QData)((IData)(
                                                                       vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkD__DOT__d__DOT___ram_ext_R0_data[1U])) 
                                                       << 0x10U) 
                                                      | ((QData)((IData)(
                                                                         vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkD__DOT__d__DOT___ram_ext_R0_data[0U])) 
                                                         >> 0x10U)))
                                                   : 
                                                  ((0x20U 
                                                    & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__reqs_3_bankSel))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT___atomics_io_data_out[3U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT___atomics_io_data_out[2U])))
                                                    : 0ULL))))),64);
        bufp->chgQData(oldp+1783,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__cc_banks_5__DOT__cc_banks_0_ext__DOT__mem_0_0__DOT__ram
                                  [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__cc_banks_5__DOT__cc_banks_0_ext__DOT__mem_0_0__DOT__ram_RW_0_r_addr_pipe_0]),64);
        bufp->chgBit(oldp+1785,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__cc_banks_5__DOT__cc_banks_0_ext__DOT__mem_0_0__DOT__ram_RW_0_r_en_pipe_0));
        bufp->chgSData(oldp+1786,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__cc_banks_5__DOT__cc_banks_0_ext__DOT__mem_0_0__DOT__ram_RW_0_r_addr_pipe_0),13);
        bufp->chgBit(oldp+1787,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT____Vcellinp__cc_banks_5__RW0_en) 
                                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__regout_wen_5))));
        bufp->chgSData(oldp+1788,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT____Vcellinp__cc_banks_6__RW0_addr),13);
        bufp->chgBit(oldp+1789,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT____Vcellinp__cc_banks_6__RW0_en));
        bufp->chgQData(oldp+1790,(((0x40U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__reqs_1_bankSum))
                                    ? (((QData)((IData)(
                                                        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__io_bs_dat_data_r[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__io_bs_dat_data_r[0U])))
                                    : ((0x40U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__reqs_1_bankSel))
                                        ? 0ULL : ((0x40U 
                                                   & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__reqs_2_bankSel))
                                                   ? 
                                                  (((QData)((IData)(
                                                                    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkD__DOT__d__DOT___ram_ext_R0_data[2U])) 
                                                    << 0x30U) 
                                                   | (((QData)((IData)(
                                                                       vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkD__DOT__d__DOT___ram_ext_R0_data[1U])) 
                                                       << 0x10U) 
                                                      | ((QData)((IData)(
                                                                         vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkD__DOT__d__DOT___ram_ext_R0_data[0U])) 
                                                         >> 0x10U)))
                                                   : 
                                                  ((0x40U 
                                                    & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__reqs_3_bankSel))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT___atomics_io_data_out[1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT___atomics_io_data_out[0U])))
                                                    : 0ULL))))),64);
        bufp->chgQData(oldp+1792,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__cc_banks_6__DOT__cc_banks_0_ext__DOT__mem_0_0__DOT__ram
                                  [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__cc_banks_6__DOT__cc_banks_0_ext__DOT__mem_0_0__DOT__ram_RW_0_r_addr_pipe_0]),64);
        bufp->chgBit(oldp+1794,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__cc_banks_6__DOT__cc_banks_0_ext__DOT__mem_0_0__DOT__ram_RW_0_r_en_pipe_0));
        bufp->chgSData(oldp+1795,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__cc_banks_6__DOT__cc_banks_0_ext__DOT__mem_0_0__DOT__ram_RW_0_r_addr_pipe_0),13);
        bufp->chgBit(oldp+1796,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT____Vcellinp__cc_banks_6__RW0_en) 
                                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__regout_wen_6))));
        bufp->chgSData(oldp+1797,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT____Vcellinp__cc_banks_7__RW0_addr),13);
        bufp->chgBit(oldp+1798,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT____Vcellinp__cc_banks_7__RW0_en));
        bufp->chgQData(oldp+1799,(((0x80U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__reqs_1_bankSum))
                                    ? (((QData)((IData)(
                                                        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__io_bs_dat_data_r[3U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__io_bs_dat_data_r[2U])))
                                    : ((0x80U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__reqs_1_bankSel))
                                        ? 0ULL : ((0x80U 
                                                   & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__reqs_2_bankSel))
                                                   ? 
                                                  (((QData)((IData)(
                                                                    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkD__DOT__d__DOT___ram_ext_R0_data[2U])) 
                                                    << 0x30U) 
                                                   | (((QData)((IData)(
                                                                       vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkD__DOT__d__DOT___ram_ext_R0_data[1U])) 
                                                       << 0x10U) 
                                                      | ((QData)((IData)(
                                                                         vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkD__DOT__d__DOT___ram_ext_R0_data[0U])) 
                                                         >> 0x10U)))
                                                   : 
                                                  ((0x80U 
                                                    & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__reqs_3_bankSel))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT___atomics_io_data_out[3U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT___atomics_io_data_out[2U])))
                                                    : 0ULL))))),64);
        bufp->chgQData(oldp+1801,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__cc_banks_7__DOT__cc_banks_0_ext__DOT__mem_0_0__DOT__ram
                                  [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__cc_banks_7__DOT__cc_banks_0_ext__DOT__mem_0_0__DOT__ram_RW_0_r_addr_pipe_0]),64);
        bufp->chgBit(oldp+1803,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__cc_banks_7__DOT__cc_banks_0_ext__DOT__mem_0_0__DOT__ram_RW_0_r_en_pipe_0));
        bufp->chgSData(oldp+1804,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__cc_banks_7__DOT__cc_banks_0_ext__DOT__mem_0_0__DOT__ram_RW_0_r_addr_pipe_0),13);
        bufp->chgBit(oldp+1805,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT____Vcellinp__cc_banks_7__RW0_en) 
                                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__regout_wen_7))));
        bufp->chgBit(oldp+1806,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__bc_mshr__io_allocate_valid));
        bufp->chgBit(oldp+1807,((1U & ((~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___T_75) 
                                           | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bypass_11))) 
                                       & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT___data_ext_R0_data 
                                                  >> 1U))))));
        bufp->chgBit(oldp+1808,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__bc_mshr__io_allocate_bits_prio_2));
        bufp->chgBit(oldp+1809,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__bc_mshr__io_allocate_bits_control));
        bufp->chgCData(oldp+1810,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__bc_mshr__io_allocate_bits_opcode),3);
        bufp->chgCData(oldp+1811,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__bc_mshr__io_allocate_bits_param),3);
        bufp->chgCData(oldp+1812,((7U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___GEN_57)
                                          ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___view___05FWIRE_11_size)
                                          : (IData)(
                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT___data_ext_R0_data 
                                                     >> 0xaU))))),3);
        bufp->chgCData(oldp+1813,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__bc_mshr__io_allocate_bits_source),6);
        bufp->chgSData(oldp+1814,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___GEN_0),13);
        bufp->chgCData(oldp+1815,((0x3fU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___GEN_57)
                                             ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___view___05FWIRE_11_offset)
                                             : (IData)(
                                                       (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT___data_ext_R0_data 
                                                        >> 0x20U))))),6);
        bufp->chgCData(oldp+1816,((0x3fU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___GEN_57)
                                             ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___view___05FWIRE_11_put)
                                             : (IData)(
                                                       (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT___data_ext_R0_data 
                                                        >> 0x26U))))),6);
        bufp->chgSData(oldp+1817,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___T_75)
                                    ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__request_bits_set)
                                    : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__request_set))),10);
        bufp->chgBit(oldp+1818,(((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___T_75)) 
                                 & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___GEN_0) 
                                    == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__request_tag)))));
        bufp->chgBit(oldp+1819,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directoryFanout) 
                                       >> 0xaU))));
        bufp->chgBit(oldp+1820,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshr_selectOH) 
                                       >> 0xaU))));
        bufp->chgBit(oldp+1821,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__bc_mshr__io_sinkc_valid));
        bufp->chgBit(oldp+1822,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__bc_mshr__io_sinkd_valid));
        bufp->chgBit(oldp+1823,(((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_e_q__DOT__empty)) 
                                 & (0xaU == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___tile_prci_domain_auto_tl_master_clock_xing_out_1_e_bits_sink)))));
        bufp->chgBit(oldp+1824,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__request_valid));
        bufp->chgSData(oldp+1825,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__request_set),10);
        bufp->chgSData(oldp+1826,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__request_tag),13);
        bufp->chgCData(oldp+1827,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__meta_way),3);
        bufp->chgBit(oldp+1828,((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__meta_valid)))));
        bufp->chgBit(oldp+1829,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__meta_valid) 
                                 & (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__w_rprobeackfirst)) 
                                     | (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__w_pprobeackfirst))) 
                                    | (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__w_grantfirst))))));
        bufp->chgBit(oldp+1830,((((((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___io_schedule_bits_a_valid_output) 
                                      | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___io_schedule_bits_b_valid_output)) 
                                     | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___io_schedule_bits_c_valid_output)) 
                                    | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___io_schedule_bits_d_valid_output)) 
                                   | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___io_schedule_bits_e_valid_output)) 
                                  | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___io_schedule_bits_x_valid_output)) 
                                 | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___io_schedule_bits_dir_valid_output))));
        bufp->chgBit(oldp+1831,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___io_schedule_bits_a_valid_output));
        bufp->chgCData(oldp+1832,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__req_needT)
                                    ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__meta_hit)
                                        ? 2U : 1U) : 0U)),3);
        bufp->chgBit(oldp+1833,((1U & ((6U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__request_size)) 
                                       | (~ ((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__request_opcode)) 
                                             | (7U 
                                                == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__request_opcode))))))));
        bufp->chgBit(oldp+1834,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___io_schedule_bits_b_valid_output));
        bufp->chgCData(oldp+1835,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__s_rprobe)
                                    ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__request_prio_1)
                                        ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__request_param)
                                        : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__req_needT)
                                            ? 2U : 1U))
                                    : 2U)),3);
        bufp->chgSData(oldp+1836,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__s_rprobe)
                                    ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__request_tag)
                                    : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__meta_tag))),13);
        bufp->chgBit(oldp+1837,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__meta_clients) 
                                 & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__excluded_client)))));
        bufp->chgBit(oldp+1838,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___io_schedule_bits_c_valid_output));
        bufp->chgCData(oldp+1839,((6U | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__meta_dirty))),3);
        bufp->chgCData(oldp+1840,(((1U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__meta_state))
                                    ? 2U : 1U)),3);
        bufp->chgSData(oldp+1841,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__meta_tag),13);
        bufp->chgBit(oldp+1842,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__meta_dirty));
        bufp->chgBit(oldp+1843,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___io_schedule_bits_d_valid_output));
        bufp->chgBit(oldp+1844,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__request_prio_0));
        bufp->chgBit(oldp+1845,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__request_prio_2));
        bufp->chgCData(oldp+1846,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__request_opcode),3);
        bufp->chgCData(oldp+1847,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__req_acquire)
                                    ? ((1U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__request_param))
                                        ? 1U : ((2U 
                                                 == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__request_param))
                                                 ? 
                                                ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__meta_hit) 
                                                   & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__meta_clients)) 
                                                  & (0x20U 
                                                     == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__request_source)))
                                                  ? 2U
                                                  : 1U)
                                                 : 
                                                ((0U 
                                                  == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__request_param))
                                                  ? 
                                                 ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__req_acquire) 
                                                  & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__meta_hit)
                                                      ? 
                                                     ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__meta_clients)) 
                                                      & (3U 
                                                         == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__meta_state)))
                                                      : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__gotT)))
                                                  : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__request_param))))
                                    : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__request_param))),3);
        bufp->chgCData(oldp+1848,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__request_size),3);
        bufp->chgCData(oldp+1849,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__request_source),6);
        bufp->chgCData(oldp+1850,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__request_offset),6);
        bufp->chgCData(oldp+1851,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__request_put),6);
        bufp->chgBit(oldp+1852,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__bad_grant));
        bufp->chgBit(oldp+1853,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___io_schedule_bits_e_valid_output));
        bufp->chgCData(oldp+1854,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__sink),3);
        bufp->chgBit(oldp+1855,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___io_schedule_bits_x_valid_output));
        bufp->chgBit(oldp+1856,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___io_schedule_bits_dir_valid_output));
        bufp->chgBit(oldp+1857,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__s_release) 
                                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___io_schedule_bits_dir_bits_data_WIRE_dirty))));
        bufp->chgCData(oldp+1858,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___bc_mshr_io_schedule_bits_dir_bits_data_state),2);
        bufp->chgBit(oldp+1859,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__s_release) 
                                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___io_schedule_bits_dir_bits_data_WIRE_clients))));
        bufp->chgSData(oldp+1860,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__s_release)
                                    ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___GEN_0)
                                        ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__meta_tag)
                                        : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__request_tag))
                                    : 0U)),13);
        bufp->chgBit(oldp+1861,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__no_wait));
        bufp->chgBit(oldp+1862,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__request_prio_1));
        bufp->chgBit(oldp+1863,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__request_control));
        bufp->chgCData(oldp+1864,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__request_param),3);
        bufp->chgBit(oldp+1865,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__meta_valid));
        bufp->chgCData(oldp+1866,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__meta_state),2);
        bufp->chgBit(oldp+1867,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__meta_clients));
        bufp->chgBit(oldp+1868,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__meta_hit));
        bufp->chgBit(oldp+1869,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__s_rprobe));
        bufp->chgBit(oldp+1870,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__w_rprobeackfirst));
        bufp->chgBit(oldp+1871,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__w_rprobeacklast));
        bufp->chgBit(oldp+1872,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__s_release));
        bufp->chgBit(oldp+1873,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__w_releaseack));
        bufp->chgBit(oldp+1874,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__s_pprobe));
        bufp->chgBit(oldp+1875,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__s_acquire));
        bufp->chgBit(oldp+1876,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__s_flush));
        bufp->chgBit(oldp+1877,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__w_grantfirst));
        bufp->chgBit(oldp+1878,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__w_grantlast));
        bufp->chgBit(oldp+1879,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__w_grant));
        bufp->chgBit(oldp+1880,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__w_pprobeackfirst));
        bufp->chgBit(oldp+1881,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__w_pprobeacklast));
        bufp->chgBit(oldp+1882,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__w_pprobeack));
        bufp->chgBit(oldp+1883,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__s_grantack));
        bufp->chgBit(oldp+1884,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__s_execute));
        bufp->chgBit(oldp+1885,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__w_grantack));
        bufp->chgBit(oldp+1886,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__s_writeback));
        bufp->chgBit(oldp+1887,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__gotT));
        bufp->chgBit(oldp+1888,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__probes_done));
        bufp->chgBit(oldp+1889,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__probes_toN));
        bufp->chgBit(oldp+1890,((0x20U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__request_source))));
        bufp->chgBit(oldp+1891,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__req_needT));
        bufp->chgBit(oldp+1892,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__req_acquire));
        bufp->chgBit(oldp+1893,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__excluded_client));
        bufp->chgBit(oldp+1894,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__new_meta_hit));
        bufp->chgBit(oldp+1895,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__new_request_prio_2));
        bufp->chgBit(oldp+1896,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__new_meta_dirty));
        bufp->chgCData(oldp+1897,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__new_meta_state),2);
        bufp->chgBit(oldp+1898,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__new_meta_clients));
        bufp->chgBit(oldp+1899,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__new_request_control));
        bufp->chgCData(oldp+1900,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__new_request_opcode),3);
        bufp->chgCData(oldp+1901,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__new_request_param),3);
        bufp->chgBit(oldp+1902,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__new_needT));
        bufp->chgBit(oldp+1903,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__new_clientBit));
        bufp->chgBit(oldp+1904,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__last_probe));
        bufp->chgCData(oldp+1905,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__meta_hit)
                                    ? (0xfU & ((0x4200U 
                                                | ((((0x2000U 
                                                      & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__meta_clients)) 
                                                         << 0xdU)) 
                                                     | (0x1000U 
                                                        & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__meta_dirty)) 
                                                           << 0xcU))) 
                                                    | ((0x100U 
                                                        & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__meta_dirty)) 
                                                           << 8U)) 
                                                       | (0x10U 
                                                          & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__meta_clients)) 
                                                             << 4U)))) 
                                                   | (8U 
                                                      & ((~ (IData)(
                                                                    (0U 
                                                                     != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__meta_state)))) 
                                                         << 3U)))) 
                                               >> (0xfU 
                                                   & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__meta_state) 
                                                      << 2U))))
                                    : 8U)),4);
        bufp->chgCData(oldp+1906,((0xfU & ((0x4200U 
                                            | ((((0x2000U 
                                                  & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___io_schedule_bits_dir_bits_data_WIRE_clients)) 
                                                     << 0xdU)) 
                                                 | (0x1000U 
                                                    & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___io_schedule_bits_dir_bits_data_WIRE_dirty)) 
                                                       << 0xcU))) 
                                                | ((0x100U 
                                                    & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___io_schedule_bits_dir_bits_data_WIRE_dirty)) 
                                                       << 8U)) 
                                                   | (0x10U 
                                                      & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___io_schedule_bits_dir_bits_data_WIRE_clients)) 
                                                         << 4U)))) 
                                               | ((0U 
                                                   == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___io_schedule_bits_dir_bits_data_WIRE_state)) 
                                                  << 3U))) 
                                           >> (0xfU 
                                               & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___io_schedule_bits_dir_bits_data_WIRE_state) 
                                                  << 2U))))),4);
        bufp->chgBit(oldp+1907,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__c_mshr__io_allocate_valid));
        bufp->chgBit(oldp+1908,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__c_mshr__io_allocate_bits_prio_2));
        bufp->chgBit(oldp+1909,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__c_mshr__io_allocate_bits_control));
        bufp->chgCData(oldp+1910,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__c_mshr__io_allocate_bits_opcode),3);
        bufp->chgCData(oldp+1911,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__c_mshr__io_allocate_bits_param),3);
        bufp->chgCData(oldp+1912,((7U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___GEN_59)
                                          ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___view___05FWIRE_11_size)
                                          : (IData)(
                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT___data_ext_R0_data 
                                                     >> 0xaU))))),3);
        bufp->chgCData(oldp+1913,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__c_mshr__io_allocate_bits_source),6);
        bufp->chgSData(oldp+1914,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___GEN),13);
        bufp->chgCData(oldp+1915,((0x3fU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___GEN_59)
                                             ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___view___05FWIRE_11_offset)
                                             : (IData)(
                                                       (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT___data_ext_R0_data 
                                                        >> 0x20U))))),6);
        bufp->chgCData(oldp+1916,((0x3fU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___GEN_59)
                                             ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___view___05FWIRE_11_put)
                                             : (IData)(
                                                       (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT___data_ext_R0_data 
                                                        >> 0x26U))))),6);
        bufp->chgSData(oldp+1917,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___GEN_58)
                                    ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__request_bits_set)
                                    : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__request_set))),10);
        bufp->chgBit(oldp+1918,(((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___GEN_58)) 
                                 & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___GEN) 
                                    == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__request_tag)))));
        bufp->chgBit(oldp+1919,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directoryFanout) 
                                       >> 0xbU))));
        bufp->chgBit(oldp+1920,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshr_selectOH) 
                                       >> 0xbU))));
        bufp->chgBit(oldp+1921,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__c_mshr__io_sinkc_valid));
        bufp->chgBit(oldp+1922,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__c_mshr__io_sinkd_valid));
        bufp->chgBit(oldp+1923,(((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_e_q__DOT__empty)) 
                                 & (0xbU == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___tile_prci_domain_auto_tl_master_clock_xing_out_1_e_bits_sink)))));
        bufp->chgBit(oldp+1924,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__request_valid));
        bufp->chgSData(oldp+1925,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__request_set),10);
        bufp->chgSData(oldp+1926,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__request_tag),13);
        bufp->chgCData(oldp+1927,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__meta_way),3);
        bufp->chgBit(oldp+1928,((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__meta_valid)))));
        bufp->chgBit(oldp+1929,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__meta_valid) 
                                 & (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__w_rprobeackfirst)) 
                                     | (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__w_pprobeackfirst))) 
                                    | (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__w_grantfirst))))));
        bufp->chgBit(oldp+1930,((((((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT___io_schedule_bits_a_valid_output) 
                                      | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT___io_schedule_bits_b_valid_output)) 
                                     | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT___io_schedule_bits_c_valid_output)) 
                                    | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT___io_schedule_bits_d_valid_output)) 
                                   | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT___io_schedule_bits_e_valid_output)) 
                                  | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT___io_schedule_bits_x_valid_output)) 
                                 | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT___io_schedule_bits_dir_valid_output))));
        bufp->chgBit(oldp+1931,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT___io_schedule_bits_a_valid_output));
        bufp->chgCData(oldp+1932,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__req_needT)
                                    ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__meta_hit)
                                        ? 2U : 1U) : 0U)),3);
        bufp->chgBit(oldp+1933,((1U & ((6U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__request_size)) 
                                       | (~ ((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__request_opcode)) 
                                             | (7U 
                                                == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__request_opcode))))))));
        bufp->chgBit(oldp+1934,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT___io_schedule_bits_b_valid_output));
        bufp->chgCData(oldp+1935,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__s_rprobe)
                                    ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__request_prio_1)
                                        ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__request_param)
                                        : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__req_needT)
                                            ? 2U : 1U))
                                    : 2U)),3);
        bufp->chgSData(oldp+1936,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__s_rprobe)
                                    ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__request_tag)
                                    : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__meta_tag))),13);
        bufp->chgBit(oldp+1937,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__meta_clients) 
                                 & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__excluded_client)))));
        bufp->chgBit(oldp+1938,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT___io_schedule_bits_c_valid_output));
        bufp->chgCData(oldp+1939,((6U | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__meta_dirty))),3);
        bufp->chgCData(oldp+1940,(((1U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__meta_state))
                                    ? 2U : 1U)),3);
        bufp->chgSData(oldp+1941,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__meta_tag),13);
        bufp->chgBit(oldp+1942,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__meta_dirty));
        bufp->chgBit(oldp+1943,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT___io_schedule_bits_d_valid_output));
        bufp->chgBit(oldp+1944,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__request_prio_0));
        bufp->chgBit(oldp+1945,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__request_prio_2));
        bufp->chgCData(oldp+1946,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__request_opcode),3);
        bufp->chgCData(oldp+1947,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__req_acquire)
                                    ? ((1U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__request_param))
                                        ? 1U : ((2U 
                                                 == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__request_param))
                                                 ? 
                                                ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__meta_hit) 
                                                   & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__meta_clients)) 
                                                  & (0x20U 
                                                     == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__request_source)))
                                                  ? 2U
                                                  : 1U)
                                                 : 
                                                ((0U 
                                                  == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__request_param))
                                                  ? 
                                                 ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__req_acquire) 
                                                  & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__meta_hit)
                                                      ? 
                                                     ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__meta_clients)) 
                                                      & (3U 
                                                         == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__meta_state)))
                                                      : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__gotT)))
                                                  : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__request_param))))
                                    : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__request_param))),3);
        bufp->chgCData(oldp+1948,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__request_size),3);
        bufp->chgCData(oldp+1949,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__request_source),6);
        bufp->chgCData(oldp+1950,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__request_offset),6);
        bufp->chgCData(oldp+1951,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__request_put),6);
        bufp->chgBit(oldp+1952,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__bad_grant));
        bufp->chgBit(oldp+1953,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT___io_schedule_bits_e_valid_output));
        bufp->chgCData(oldp+1954,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__sink),3);
        bufp->chgBit(oldp+1955,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT___io_schedule_bits_x_valid_output));
        bufp->chgBit(oldp+1956,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT___io_schedule_bits_dir_valid_output));
        bufp->chgBit(oldp+1957,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___c_mshr_io_schedule_bits_dir_bits_data_dirty));
        bufp->chgCData(oldp+1958,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__s_release)
                                    ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT___io_schedule_bits_dir_bits_data_WIRE_state)
                                    : 0U)),2);
        bufp->chgBit(oldp+1959,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__s_release) 
                                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT___io_schedule_bits_dir_bits_data_WIRE_clients))));
        bufp->chgSData(oldp+1960,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__s_release)
                                    ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT___GEN_0)
                                        ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__meta_tag)
                                        : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__request_tag))
                                    : 0U)),13);
        bufp->chgBit(oldp+1961,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__no_wait));
        bufp->chgBit(oldp+1962,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__request_prio_1));
        bufp->chgBit(oldp+1963,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__request_control));
        bufp->chgCData(oldp+1964,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__request_param),3);
        bufp->chgBit(oldp+1965,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__meta_valid));
        bufp->chgCData(oldp+1966,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__meta_state),2);
        bufp->chgBit(oldp+1967,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__meta_clients));
        bufp->chgBit(oldp+1968,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__meta_hit));
        bufp->chgBit(oldp+1969,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__s_rprobe));
        bufp->chgBit(oldp+1970,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__w_rprobeackfirst));
        bufp->chgBit(oldp+1971,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__w_rprobeacklast));
        bufp->chgBit(oldp+1972,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__s_release));
        bufp->chgBit(oldp+1973,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__w_releaseack));
        bufp->chgBit(oldp+1974,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__s_pprobe));
        bufp->chgBit(oldp+1975,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__s_acquire));
        bufp->chgBit(oldp+1976,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__s_flush));
        bufp->chgBit(oldp+1977,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__w_grantfirst));
        bufp->chgBit(oldp+1978,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__w_grantlast));
        bufp->chgBit(oldp+1979,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__w_grant));
        bufp->chgBit(oldp+1980,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__w_pprobeackfirst));
        bufp->chgBit(oldp+1981,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__w_pprobeacklast));
        bufp->chgBit(oldp+1982,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__w_pprobeack));
        bufp->chgBit(oldp+1983,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__s_grantack));
        bufp->chgBit(oldp+1984,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__s_execute));
        bufp->chgBit(oldp+1985,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__w_grantack));
        bufp->chgBit(oldp+1986,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__s_writeback));
        bufp->chgBit(oldp+1987,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__gotT));
        bufp->chgBit(oldp+1988,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__probes_done));
        bufp->chgBit(oldp+1989,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__probes_toN));
        bufp->chgBit(oldp+1990,((0x20U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__request_source))));
        bufp->chgBit(oldp+1991,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__req_needT));
        bufp->chgBit(oldp+1992,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__req_acquire));
        bufp->chgBit(oldp+1993,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__excluded_client));
        bufp->chgBit(oldp+1994,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__new_meta_hit));
        bufp->chgBit(oldp+1995,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__new_request_prio_2));
        bufp->chgBit(oldp+1996,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__new_meta_dirty));
        bufp->chgCData(oldp+1997,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__new_meta_state),2);
        bufp->chgBit(oldp+1998,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__new_meta_clients));
        bufp->chgBit(oldp+1999,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__new_request_control));
        bufp->chgCData(oldp+2000,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__new_request_opcode),3);
        bufp->chgCData(oldp+2001,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__new_request_param),3);
        bufp->chgBit(oldp+2002,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__new_needT));
        bufp->chgBit(oldp+2003,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__new_clientBit));
        bufp->chgBit(oldp+2004,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__last_probe));
        bufp->chgCData(oldp+2005,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__meta_hit)
                                    ? (0xfU & ((0x4200U 
                                                | ((((0x2000U 
                                                      & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__meta_clients)) 
                                                         << 0xdU)) 
                                                     | (0x1000U 
                                                        & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__meta_dirty)) 
                                                           << 0xcU))) 
                                                    | ((0x100U 
                                                        & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__meta_dirty)) 
                                                           << 8U)) 
                                                       | (0x10U 
                                                          & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__meta_clients)) 
                                                             << 4U)))) 
                                                   | (8U 
                                                      & ((~ (IData)(
                                                                    (0U 
                                                                     != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__meta_state)))) 
                                                         << 3U)))) 
                                               >> (0xfU 
                                                   & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__meta_state) 
                                                      << 2U))))
                                    : 8U)),4);
        bufp->chgCData(oldp+2006,((0xfU & ((0x4200U 
                                            | ((((0x2000U 
                                                  & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT___io_schedule_bits_dir_bits_data_WIRE_clients)) 
                                                     << 0xdU)) 
                                                 | (0x1000U 
                                                    & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT___io_schedule_bits_dir_bits_data_WIRE_dirty)) 
                                                       << 0xcU))) 
                                                | ((0x100U 
                                                    & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT___io_schedule_bits_dir_bits_data_WIRE_dirty)) 
                                                       << 8U)) 
                                                   | (0x10U 
                                                      & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT___io_schedule_bits_dir_bits_data_WIRE_clients)) 
                                                         << 4U)))) 
                                               | ((0U 
                                                   == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT___io_schedule_bits_dir_bits_data_WIRE_state)) 
                                                  << 3U))) 
                                           >> (0xfU 
                                               & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT___io_schedule_bits_dir_bits_data_WIRE_state) 
                                                  << 2U))))),4);
        bufp->chgBit(oldp+2007,((((((((((((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshr_selectOH) 
                                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT___io_schedule_bits_dir_valid_output)) 
                                           | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshr_selectOH) 
                                               >> 1U) 
                                              & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT___io_schedule_bits_dir_valid_output))) 
                                          | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshr_selectOH) 
                                              >> 2U) 
                                             & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT___io_schedule_bits_dir_valid_output))) 
                                         | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshr_selectOH) 
                                             >> 3U) 
                                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT___io_schedule_bits_dir_valid_output))) 
                                        | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshr_selectOH) 
                                            >> 4U) 
                                           & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT___io_schedule_bits_dir_valid_output))) 
                                       | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshr_selectOH) 
                                           >> 5U) & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT___io_schedule_bits_dir_valid_output))) 
                                      | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshr_selectOH) 
                                          >> 6U) & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT___io_schedule_bits_dir_valid_output))) 
                                     | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshr_selectOH) 
                                         >> 7U) & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT___io_schedule_bits_dir_valid_output))) 
                                    | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshr_selectOH) 
                                        >> 8U) & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT___io_schedule_bits_dir_valid_output))) 
                                   | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshr_selectOH) 
                                       >> 9U) & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT___io_schedule_bits_dir_valid_output))) 
                                  | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshr_selectOH) 
                                      >> 0xaU) & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___io_schedule_bits_dir_valid_output))) 
                                 | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshr_selectOH) 
                                     >> 0xbU) & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT___io_schedule_bits_dir_valid_output)))));
        bufp->chgSData(oldp+2008,((((((((((((((1U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshr_selectOH))
                                               ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT__request_set)
                                               : 0U) 
                                             | ((2U 
                                                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshr_selectOH))
                                                 ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT__request_set)
                                                 : 0U)) 
                                            | ((4U 
                                                & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshr_selectOH))
                                                ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT__request_set)
                                                : 0U)) 
                                           | ((8U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshr_selectOH))
                                               ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__request_set)
                                               : 0U)) 
                                          | ((0x10U 
                                              & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshr_selectOH))
                                              ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__request_set)
                                              : 0U)) 
                                         | ((0x20U 
                                             & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshr_selectOH))
                                             ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT__request_set)
                                             : 0U)) 
                                        | ((0x40U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshr_selectOH))
                                            ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT__request_set)
                                            : 0U)) 
                                       | ((0x80U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshr_selectOH))
                                           ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__request_set)
                                           : 0U)) | 
                                      ((0x100U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshr_selectOH))
                                        ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__request_set)
                                        : 0U)) | ((0x200U 
                                                   & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshr_selectOH))
                                                   ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__request_set)
                                                   : 0U)) 
                                    | ((0x400U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshr_selectOH))
                                        ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__request_set)
                                        : 0U)) | ((0x800U 
                                                   & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshr_selectOH))
                                                   ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__request_set)
                                                   : 0U))),10);
        bufp->chgCData(oldp+2009,((((((((((((((1U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshr_selectOH))
                                               ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT__meta_way)
                                               : 0U) 
                                             | ((2U 
                                                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshr_selectOH))
                                                 ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT__meta_way)
                                                 : 0U)) 
                                            | ((4U 
                                                & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshr_selectOH))
                                                ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT__meta_way)
                                                : 0U)) 
                                           | ((8U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshr_selectOH))
                                               ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__meta_way)
                                               : 0U)) 
                                          | ((0x10U 
                                              & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshr_selectOH))
                                              ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__meta_way)
                                              : 0U)) 
                                         | ((0x20U 
                                             & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshr_selectOH))
                                             ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT__meta_way)
                                             : 0U)) 
                                        | ((0x40U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshr_selectOH))
                                            ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT__meta_way)
                                            : 0U)) 
                                       | ((0x80U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshr_selectOH))
                                           ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__meta_way)
                                           : 0U)) | 
                                      ((0x100U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshr_selectOH))
                                        ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__meta_way)
                                        : 0U)) | ((0x200U 
                                                   & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshr_selectOH))
                                                   ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__meta_way)
                                                   : 0U)) 
                                    | ((0x400U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshr_selectOH))
                                        ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__meta_way)
                                        : 0U)) | ((0x800U 
                                                   & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshr_selectOH))
                                                   ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__meta_way)
                                                   : 0U))),3);
        bufp->chgBit(oldp+2010,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__directory__io_write_bits_data_dirty));
        bufp->chgCData(oldp+2011,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__directory__io_write_bits_data_state),2);
        bufp->chgBit(oldp+2012,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__directory__io_write_bits_data_clients));
        bufp->chgSData(oldp+2013,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__directory__io_write_bits_data_tag),13);
        bufp->chgBit(oldp+2014,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__directory__io_read_valid));
        bufp->chgSData(oldp+2015,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__directory__io_read_bits_set),10);
        bufp->chgSData(oldp+2016,((0x1fffU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshr_uses_directory_for_lb)
                                               ? (IData)(
                                                         (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT___data_ext_R0_data 
                                                          >> 0x13U))
                                               : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___view___05FWIRE_11_tag)))),13);
        bufp->chgBit(oldp+2017,((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__write__DOT__maybe_full)))));
        bufp->chgBit(oldp+2018,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__wipeCount) 
                                       >> 0xaU))));
        bufp->chgBit(oldp+2019,((1U & ((7U == (7U & 
                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__write__DOT__ram_ext__DOT__Memory
                                                [0U] 
                                                >> 0xaU))) 
                                       | (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__wipeCount) 
                                             >> 0xaU))))));
        bufp->chgBit(oldp+2020,((1U & ((6U == (7U & 
                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__write__DOT__ram_ext__DOT__Memory
                                                [0U] 
                                                >> 0xaU))) 
                                       | (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__wipeCount) 
                                             >> 0xaU))))));
        bufp->chgBit(oldp+2021,((1U & ((5U == (7U & 
                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__write__DOT__ram_ext__DOT__Memory
                                                [0U] 
                                                >> 0xaU))) 
                                       | (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__wipeCount) 
                                             >> 0xaU))))));
        bufp->chgBit(oldp+2022,((1U & ((4U == (7U & 
                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__write__DOT__ram_ext__DOT__Memory
                                                [0U] 
                                                >> 0xaU))) 
                                       | (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__wipeCount) 
                                             >> 0xaU))))));
        bufp->chgBit(oldp+2023,((1U & ((3U == (7U & 
                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__write__DOT__ram_ext__DOT__Memory
                                                [0U] 
                                                >> 0xaU))) 
                                       | (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__wipeCount) 
                                             >> 0xaU))))));
        bufp->chgBit(oldp+2024,((1U & ((2U == (7U & 
                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__write__DOT__ram_ext__DOT__Memory
                                                [0U] 
                                                >> 0xaU))) 
                                       | (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__wipeCount) 
                                             >> 0xaU))))));
        bufp->chgBit(oldp+2025,((1U & ((1U == (7U & 
                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__write__DOT__ram_ext__DOT__Memory
                                                [0U] 
                                                >> 0xaU))) 
                                       | (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__wipeCount) 
                                             >> 0xaU))))));
        bufp->chgBit(oldp+2026,((1U & ((0U == (7U & 
                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__write__DOT__ram_ext__DOT__Memory
                                                [0U] 
                                                >> 0xaU))) 
                                       | (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__wipeCount) 
                                             >> 0xaU))))));
        bufp->chgSData(oldp+2027,((0x3ffU & ((0x400U 
                                              & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__wipeCount))
                                              ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__write__DOT__ram_ext__DOT__Memory
                                             [0U] : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__wipeCount)))),10);
        bufp->chgBit(oldp+2028,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__cc_dir_MPORT_en));
        bufp->chgSData(oldp+2029,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__wipeCount),11);
        bufp->chgBit(oldp+2030,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__wipeOff));
        bufp->chgBit(oldp+2031,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__ren1));
        bufp->chgSData(oldp+2032,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__tag),13);
        bufp->chgSData(oldp+2033,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__set),10);
        bufp->chgSData(oldp+2034,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__victimLFSR),10);
        bufp->chgCData(oldp+2035,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__victimWayOH),8);
        bufp->chgCData(oldp+2036,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__victimWay),3);
        bufp->chgBit(oldp+2037,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__setQuash));
        bufp->chgBit(oldp+2038,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__tagMatch));
        bufp->chgCData(oldp+2039,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__hits),8);
        bufp->chgSData(oldp+2040,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT____Vcellinp__cc_dir__RW0_addr),10);
        bufp->chgBit(oldp+2041,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT____Vcellinp__cc_dir__RW0_en));
        bufp->chgBit(oldp+2042,((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__directory__io_read_valid)))));
        bufp->chgWData(oldp+2043,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT____Vcellinp__cc_dir__RW0_wdata),136);
        bufp->chgCData(oldp+2048,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT____Vcellinp__cc_dir__RW0_wmask),8);
        bufp->chgWData(oldp+2049,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT___cc_dir_RW0_rdata),136);
        bufp->chgIData(oldp+2054,((0x1ffffU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT____Vcellinp__cc_dir__RW0_wdata[0U])),17);
        bufp->chgIData(oldp+2055,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__cc_dir__DOT__cc_dir_ext__DOT__mem_0_0__DOT__ram
                                  [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__cc_dir__DOT__cc_dir_ext__DOT__mem_0_0__DOT__ram_RW_0_r_addr_pipe_0]),17);
        bufp->chgBit(oldp+2056,((1U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT____Vcellinp__cc_dir__RW0_wmask))));
        bufp->chgIData(oldp+2057,((0x1ffffU & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT____Vcellinp__cc_dir__RW0_wdata[1U] 
                                                << 0xfU) 
                                               | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT____Vcellinp__cc_dir__RW0_wdata[0U] 
                                                  >> 0x11U)))),17);
        bufp->chgIData(oldp+2058,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__cc_dir__DOT__cc_dir_ext__DOT__mem_0_1__DOT__ram
                                  [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__cc_dir__DOT__cc_dir_ext__DOT__mem_0_1__DOT__ram_RW_0_r_addr_pipe_0]),17);
        bufp->chgBit(oldp+2059,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT____Vcellinp__cc_dir__RW0_wmask) 
                                       >> 1U))));
        bufp->chgIData(oldp+2060,((0x1ffffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT____Vcellinp__cc_dir__RW0_wdata[1U] 
                                               >> 2U))),17);
        bufp->chgIData(oldp+2061,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__cc_dir__DOT__cc_dir_ext__DOT__mem_0_2__DOT__ram
                                  [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__cc_dir__DOT__cc_dir_ext__DOT__mem_0_2__DOT__ram_RW_0_r_addr_pipe_0]),17);
        bufp->chgBit(oldp+2062,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT____Vcellinp__cc_dir__RW0_wmask) 
                                       >> 2U))));
        bufp->chgIData(oldp+2063,((0x1ffffU & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT____Vcellinp__cc_dir__RW0_wdata[2U] 
                                                << 0xdU) 
                                               | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT____Vcellinp__cc_dir__RW0_wdata[1U] 
                                                  >> 0x13U)))),17);
        bufp->chgIData(oldp+2064,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__cc_dir__DOT__cc_dir_ext__DOT__mem_0_3__DOT__ram
                                  [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__cc_dir__DOT__cc_dir_ext__DOT__mem_0_3__DOT__ram_RW_0_r_addr_pipe_0]),17);
        bufp->chgBit(oldp+2065,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT____Vcellinp__cc_dir__RW0_wmask) 
                                       >> 3U))));
        bufp->chgIData(oldp+2066,((0x1ffffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT____Vcellinp__cc_dir__RW0_wdata[2U] 
                                               >> 4U))),17);
        bufp->chgIData(oldp+2067,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__cc_dir__DOT__cc_dir_ext__DOT__mem_0_4__DOT__ram
                                  [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__cc_dir__DOT__cc_dir_ext__DOT__mem_0_4__DOT__ram_RW_0_r_addr_pipe_0]),17);
        bufp->chgBit(oldp+2068,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT____Vcellinp__cc_dir__RW0_wmask) 
                                       >> 4U))));
        bufp->chgIData(oldp+2069,((0x1ffffU & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT____Vcellinp__cc_dir__RW0_wdata[3U] 
                                                << 0xbU) 
                                               | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT____Vcellinp__cc_dir__RW0_wdata[2U] 
                                                  >> 0x15U)))),17);
        bufp->chgIData(oldp+2070,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__cc_dir__DOT__cc_dir_ext__DOT__mem_0_5__DOT__ram
                                  [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__cc_dir__DOT__cc_dir_ext__DOT__mem_0_5__DOT__ram_RW_0_r_addr_pipe_0]),17);
        bufp->chgBit(oldp+2071,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT____Vcellinp__cc_dir__RW0_wmask) 
                                       >> 5U))));
        bufp->chgIData(oldp+2072,((0x1ffffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT____Vcellinp__cc_dir__RW0_wdata[3U] 
                                               >> 6U))),17);
        bufp->chgIData(oldp+2073,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__cc_dir__DOT__cc_dir_ext__DOT__mem_0_6__DOT__ram
                                  [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__cc_dir__DOT__cc_dir_ext__DOT__mem_0_6__DOT__ram_RW_0_r_addr_pipe_0]),17);
        bufp->chgBit(oldp+2074,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT____Vcellinp__cc_dir__RW0_wmask) 
                                       >> 6U))));
        bufp->chgIData(oldp+2075,((0x1ffffU & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT____Vcellinp__cc_dir__RW0_wdata[4U] 
                                                << 9U) 
                                               | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT____Vcellinp__cc_dir__RW0_wdata[3U] 
                                                  >> 0x17U)))),17);
        bufp->chgIData(oldp+2076,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__cc_dir__DOT__cc_dir_ext__DOT__mem_0_7__DOT__ram
                                  [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__cc_dir__DOT__cc_dir_ext__DOT__mem_0_7__DOT__ram_RW_0_r_addr_pipe_0]),17);
        bufp->chgBit(oldp+2077,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT____Vcellinp__cc_dir__RW0_wmask) 
                                       >> 7U))));
        __Vtemp_hb39b41e3__0[0U] = (IData)((((QData)((IData)(
                                                             vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__cc_dir__DOT__cc_dir_ext__DOT__mem_0_2__DOT__ram
                                                             [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__cc_dir__DOT__cc_dir_ext__DOT__mem_0_2__DOT__ram_RW_0_r_addr_pipe_0])) 
                                             << 0x22U) 
                                            | (((QData)((IData)(
                                                                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__cc_dir__DOT__cc_dir_ext__DOT__mem_0_1__DOT__ram
                                                                [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__cc_dir__DOT__cc_dir_ext__DOT__mem_0_1__DOT__ram_RW_0_r_addr_pipe_0])) 
                                                << 0x11U) 
                                               | (QData)((IData)(
                                                                 vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__cc_dir__DOT__cc_dir_ext__DOT__mem_0_0__DOT__ram
                                                                 [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__cc_dir__DOT__cc_dir_ext__DOT__mem_0_0__DOT__ram_RW_0_r_addr_pipe_0])))));
        __Vtemp_hb39b41e3__0[1U] = ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__cc_dir__DOT__cc_dir_ext__DOT__mem_0_3__DOT__ram
                                     [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__cc_dir__DOT__cc_dir_ext__DOT__mem_0_3__DOT__ram_RW_0_r_addr_pipe_0] 
                                     << 0x13U) | (IData)(
                                                         ((((QData)((IData)(
                                                                            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__cc_dir__DOT__cc_dir_ext__DOT__mem_0_2__DOT__ram
                                                                            [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__cc_dir__DOT__cc_dir_ext__DOT__mem_0_2__DOT__ram_RW_0_r_addr_pipe_0])) 
                                                            << 0x22U) 
                                                           | (((QData)((IData)(
                                                                               vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__cc_dir__DOT__cc_dir_ext__DOT__mem_0_1__DOT__ram
                                                                               [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__cc_dir__DOT__cc_dir_ext__DOT__mem_0_1__DOT__ram_RW_0_r_addr_pipe_0])) 
                                                               << 0x11U) 
                                                              | (QData)((IData)(
                                                                                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__cc_dir__DOT__cc_dir_ext__DOT__mem_0_0__DOT__ram
                                                                                [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__cc_dir__DOT__cc_dir_ext__DOT__mem_0_0__DOT__ram_RW_0_r_addr_pipe_0])))) 
                                                          >> 0x20U)));
        __Vtemp_hb39b41e3__0[2U] = ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__cc_dir__DOT__cc_dir_ext__DOT__mem_0_5__DOT__ram
                                     [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__cc_dir__DOT__cc_dir_ext__DOT__mem_0_5__DOT__ram_RW_0_r_addr_pipe_0] 
                                     << 0x15U) | ((
                                                   vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__cc_dir__DOT__cc_dir_ext__DOT__mem_0_4__DOT__ram
                                                   [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__cc_dir__DOT__cc_dir_ext__DOT__mem_0_4__DOT__ram_RW_0_r_addr_pipe_0] 
                                                   << 4U) 
                                                  | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__cc_dir__DOT__cc_dir_ext__DOT__mem_0_3__DOT__ram
                                                     [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__cc_dir__DOT__cc_dir_ext__DOT__mem_0_3__DOT__ram_RW_0_r_addr_pipe_0] 
                                                     >> 0xdU)));
        __Vtemp_hb39b41e3__0[3U] = ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__cc_dir__DOT__cc_dir_ext__DOT__mem_0_7__DOT__ram
                                     [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__cc_dir__DOT__cc_dir_ext__DOT__mem_0_7__DOT__ram_RW_0_r_addr_pipe_0] 
                                     << 0x17U) | ((
                                                   vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__cc_dir__DOT__cc_dir_ext__DOT__mem_0_6__DOT__ram
                                                   [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__cc_dir__DOT__cc_dir_ext__DOT__mem_0_6__DOT__ram_RW_0_r_addr_pipe_0] 
                                                   << 6U) 
                                                  | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__cc_dir__DOT__cc_dir_ext__DOT__mem_0_5__DOT__ram
                                                     [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__cc_dir__DOT__cc_dir_ext__DOT__mem_0_5__DOT__ram_RW_0_r_addr_pipe_0] 
                                                     >> 0xbU)));
        __Vtemp_hb39b41e3__0[4U] = (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__cc_dir__DOT__cc_dir_ext__DOT__mem_0_7__DOT__ram
                                    [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__cc_dir__DOT__cc_dir_ext__DOT__mem_0_7__DOT__ram_RW_0_r_addr_pipe_0] 
                                    >> 9U);
        bufp->chgWData(oldp+2078,(__Vtemp_hb39b41e3__0),136);
        bufp->chgBit(oldp+2083,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__cc_dir__DOT__cc_dir_ext__DOT__mem_0_0__DOT__ram_RW_0_r_en_pipe_0));
        bufp->chgSData(oldp+2084,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__cc_dir__DOT__cc_dir_ext__DOT__mem_0_0__DOT__ram_RW_0_r_addr_pipe_0),10);
        bufp->chgBit(oldp+2085,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT____Vcellinp__cc_dir__RW0_en) 
                                 & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__directory__io_read_valid)))));
        bufp->chgBit(oldp+2086,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__cc_dir__DOT__cc_dir_ext__DOT__mem_0_1__DOT__ram_RW_0_r_en_pipe_0));
        bufp->chgSData(oldp+2087,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__cc_dir__DOT__cc_dir_ext__DOT__mem_0_1__DOT__ram_RW_0_r_addr_pipe_0),10);
        bufp->chgBit(oldp+2088,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__cc_dir__DOT__cc_dir_ext__DOT__mem_0_2__DOT__ram_RW_0_r_en_pipe_0));
        bufp->chgSData(oldp+2089,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__cc_dir__DOT__cc_dir_ext__DOT__mem_0_2__DOT__ram_RW_0_r_addr_pipe_0),10);
        bufp->chgBit(oldp+2090,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__cc_dir__DOT__cc_dir_ext__DOT__mem_0_3__DOT__ram_RW_0_r_en_pipe_0));
        bufp->chgSData(oldp+2091,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__cc_dir__DOT__cc_dir_ext__DOT__mem_0_3__DOT__ram_RW_0_r_addr_pipe_0),10);
        bufp->chgBit(oldp+2092,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__cc_dir__DOT__cc_dir_ext__DOT__mem_0_4__DOT__ram_RW_0_r_en_pipe_0));
        bufp->chgSData(oldp+2093,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__cc_dir__DOT__cc_dir_ext__DOT__mem_0_4__DOT__ram_RW_0_r_addr_pipe_0),10);
        bufp->chgBit(oldp+2094,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__cc_dir__DOT__cc_dir_ext__DOT__mem_0_5__DOT__ram_RW_0_r_en_pipe_0));
        bufp->chgSData(oldp+2095,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__cc_dir__DOT__cc_dir_ext__DOT__mem_0_5__DOT__ram_RW_0_r_addr_pipe_0),10);
        bufp->chgBit(oldp+2096,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__cc_dir__DOT__cc_dir_ext__DOT__mem_0_6__DOT__ram_RW_0_r_en_pipe_0));
        bufp->chgSData(oldp+2097,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__cc_dir__DOT__cc_dir_ext__DOT__mem_0_6__DOT__ram_RW_0_r_addr_pipe_0),10);
        bufp->chgBit(oldp+2098,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__cc_dir__DOT__cc_dir_ext__DOT__mem_0_7__DOT__ram_RW_0_r_en_pipe_0));
        bufp->chgSData(oldp+2099,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__cc_dir__DOT__cc_dir_ext__DOT__mem_0_7__DOT__ram_RW_0_r_addr_pipe_0),10);
        bufp->chgBit(oldp+2100,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__victimLFSR_prng__DOT__state_0));
        bufp->chgBit(oldp+2101,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__victimLFSR_prng__DOT__state_1));
        bufp->chgBit(oldp+2102,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__victimLFSR_prng__DOT__state_2));
        bufp->chgBit(oldp+2103,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__victimLFSR_prng__DOT__state_3));
        bufp->chgBit(oldp+2104,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__victimLFSR_prng__DOT__state_4));
        bufp->chgBit(oldp+2105,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__victimLFSR_prng__DOT__state_5));
        bufp->chgBit(oldp+2106,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__victimLFSR_prng__DOT__state_6));
        bufp->chgBit(oldp+2107,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__victimLFSR_prng__DOT__state_7));
        bufp->chgBit(oldp+2108,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__victimLFSR_prng__DOT__state_8));
        bufp->chgBit(oldp+2109,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__victimLFSR_prng__DOT__state_9));
        bufp->chgBit(oldp+2110,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__victimLFSR_prng__DOT__state_10));
        bufp->chgBit(oldp+2111,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__victimLFSR_prng__DOT__state_11));
        bufp->chgBit(oldp+2112,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__victimLFSR_prng__DOT__state_12));
        bufp->chgBit(oldp+2113,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__victimLFSR_prng__DOT__state_13));
        bufp->chgBit(oldp+2114,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__victimLFSR_prng__DOT__state_14));
        bufp->chgBit(oldp+2115,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__victimLFSR_prng__DOT__state_15));
        bufp->chgBit(oldp+2116,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__write__DOT__maybe_full));
        bufp->chgSData(oldp+2117,((0x3ffU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__write__DOT__ram_ext__DOT__Memory
                                   [0U])),10);
        bufp->chgCData(oldp+2118,((7U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__write__DOT__ram_ext__DOT__Memory
                                         [0U] >> 0xaU))),3);
        bufp->chgBit(oldp+2119,((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__write__DOT__ram_ext__DOT__Memory
                                       [0U] >> 0xdU))));
        bufp->chgCData(oldp+2120,((3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__write__DOT__ram_ext__DOT__Memory
                                         [0U] >> 0xeU))),2);
        bufp->chgBit(oldp+2121,((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__write__DOT__ram_ext__DOT__Memory
                                       [0U] >> 0x10U))));
        bufp->chgSData(oldp+2122,((0x1fffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__write__DOT__ram_ext__DOT__Memory
                                              [0U] 
                                              >> 0x11U))),13);
        bufp->chgBit(oldp+2123,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__write__DOT__do_enq));
        bufp->chgIData(oldp+2124,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__write__DOT____Vcellinp__ram_ext__W0_data),30);
        bufp->chgIData(oldp+2125,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__write__DOT__ram_ext__DOT__Memory
                                  [0U]),30);
        bufp->chgIData(oldp+2126,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__write__DOT__ram_ext__DOT__Memory[0]),30);
        bufp->chgBit(oldp+2127,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___requests_io_push_valid_T) 
                                 & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bypassQueue)))));
        bufp->chgCData(oldp+2128,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__requests__io_push_bits_index),6);
        bufp->chgBit(oldp+2129,((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___sinkC_io_req_valid)))));
        bufp->chgBit(oldp+2130,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___sinkC_io_req_valid));
        bufp->chgBit(oldp+2131,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___view___05FWIRE_11_control));
        bufp->chgCData(oldp+2132,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___view___05FWIRE_11_opcode),3);
        bufp->chgCData(oldp+2133,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___view___05FWIRE_11_param),3);
        bufp->chgCData(oldp+2134,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___view___05FWIRE_11_size),3);
        bufp->chgCData(oldp+2135,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___view___05FWIRE_11_source),6);
        bufp->chgSData(oldp+2136,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___view___05FWIRE_11_tag),13);
        bufp->chgCData(oldp+2137,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___view___05FWIRE_11_offset),6);
        bufp->chgCData(oldp+2138,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___view___05FWIRE_11_put),6);
        bufp->chgCData(oldp+2139,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__requests__io_pop_bits),6);
        bufp->chgBit(oldp+2140,((0xfffffffU != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT__used)));
        bufp->chgQData(oldp+2141,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT__valid),36);
        bufp->chgBit(oldp+2143,((1U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT___data_ext_R0_data))));
        bufp->chgBit(oldp+2144,((1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT___data_ext_R0_data 
                                               >> 1U)))));
        bufp->chgBit(oldp+2145,((1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT___data_ext_R0_data 
                                               >> 2U)))));
        bufp->chgBit(oldp+2146,((1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT___data_ext_R0_data 
                                               >> 3U)))));
        bufp->chgCData(oldp+2147,((7U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT___data_ext_R0_data 
                                                 >> 4U)))),3);
        bufp->chgCData(oldp+2148,((7U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT___data_ext_R0_data 
                                                 >> 7U)))),3);
        bufp->chgCData(oldp+2149,((7U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT___data_ext_R0_data 
                                                 >> 0xaU)))),3);
        bufp->chgCData(oldp+2150,((0x3fU & (IData)(
                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT___data_ext_R0_data 
                                                    >> 0xdU)))),6);
        bufp->chgSData(oldp+2151,((0x1fffU & (IData)(
                                                     (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT___data_ext_R0_data 
                                                      >> 0x13U)))),13);
        bufp->chgCData(oldp+2152,((0x3fU & (IData)(
                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT___data_ext_R0_data 
                                                    >> 0x20U)))),6);
        bufp->chgCData(oldp+2153,((0x3fU & (IData)(
                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT___data_ext_R0_data 
                                                    >> 0x26U)))),6);
        bufp->chgIData(oldp+2154,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT__used),28);
        bufp->chgIData(oldp+2155,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT__freeOH),29);
        bufp->chgCData(oldp+2156,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT__data_MPORT_addr),5);
        bufp->chgBit(oldp+2157,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT__data_MPORT_en));
        bufp->chgCData(oldp+2158,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT___head_ext_R0_data),5);
        bufp->chgQData(oldp+2159,((((QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___view___05FWIRE_11_put)) 
                                    << 0x26U) | (((QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___view___05FWIRE_11_offset)) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___view___05FWIRE_11_tag) 
                                                                     << 0x13U) 
                                                                    | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___view___05FWIRE_11_source) 
                                                                        << 0xdU) 
                                                                       | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___view___05FWIRE_11_size) 
                                                                           << 0xaU) 
                                                                          | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___view___05FWIRE_11_param) 
                                                                              << 7U) 
                                                                             | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___view___05FWIRE_11_opcode) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___view___05FWIRE_11_control) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___sinkC_io_req_valid) 
                                                                                << 2U) 
                                                                                | (1U 
                                                                                & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___sinkC_io_req_valid))))))))))))))),44);
        bufp->chgQData(oldp+2161,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT___data_ext_R0_data),44);
        bufp->chgQData(oldp+2163,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT__data_ext__DOT__Memory[0]),44);
        bufp->chgQData(oldp+2165,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT__data_ext__DOT__Memory[1]),44);
        bufp->chgQData(oldp+2167,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT__data_ext__DOT__Memory[2]),44);
        bufp->chgQData(oldp+2169,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT__data_ext__DOT__Memory[3]),44);
        bufp->chgQData(oldp+2171,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT__data_ext__DOT__Memory[4]),44);
        bufp->chgQData(oldp+2173,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT__data_ext__DOT__Memory[5]),44);
        bufp->chgQData(oldp+2175,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT__data_ext__DOT__Memory[6]),44);
        bufp->chgQData(oldp+2177,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT__data_ext__DOT__Memory[7]),44);
        bufp->chgQData(oldp+2179,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT__data_ext__DOT__Memory[8]),44);
        bufp->chgQData(oldp+2181,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT__data_ext__DOT__Memory[9]),44);
        bufp->chgQData(oldp+2183,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT__data_ext__DOT__Memory[10]),44);
        bufp->chgQData(oldp+2185,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT__data_ext__DOT__Memory[11]),44);
        bufp->chgQData(oldp+2187,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT__data_ext__DOT__Memory[12]),44);
        bufp->chgQData(oldp+2189,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT__data_ext__DOT__Memory[13]),44);
        bufp->chgQData(oldp+2191,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT__data_ext__DOT__Memory[14]),44);
        bufp->chgQData(oldp+2193,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT__data_ext__DOT__Memory[15]),44);
        bufp->chgQData(oldp+2195,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT__data_ext__DOT__Memory[16]),44);
        bufp->chgQData(oldp+2197,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT__data_ext__DOT__Memory[17]),44);
        bufp->chgQData(oldp+2199,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT__data_ext__DOT__Memory[18]),44);
        bufp->chgQData(oldp+2201,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT__data_ext__DOT__Memory[19]),44);
        bufp->chgQData(oldp+2203,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT__data_ext__DOT__Memory[20]),44);
        bufp->chgQData(oldp+2205,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT__data_ext__DOT__Memory[21]),44);
        bufp->chgQData(oldp+2207,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT__data_ext__DOT__Memory[22]),44);
        bufp->chgQData(oldp+2209,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT__data_ext__DOT__Memory[23]),44);
        bufp->chgQData(oldp+2211,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT__data_ext__DOT__Memory[24]),44);
        bufp->chgQData(oldp+2213,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT__data_ext__DOT__Memory[25]),44);
        bufp->chgQData(oldp+2215,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT__data_ext__DOT__Memory[26]),44);
        bufp->chgQData(oldp+2217,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT__data_ext__DOT__Memory[27]),44);
        bufp->chgBit(oldp+2219,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT__data_MPORT_en) 
                                 & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT___push_valid_T)))));
        bufp->chgCData(oldp+2220,(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT__data_MPORT_en) 
                                     & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT___push_valid_T)) 
                                    & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT___tail_ext_R1_data) 
                                       == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT___head_ext_R0_data)))
                                    ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT__data_MPORT_addr)
                                    : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__will_pop)
                                        ? ((0x1bU >= (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT___head_ext_R0_data))
                                            ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT__next_ext__DOT__Memory
                                           [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT___head_ext_R0_data]
                                            : 0U) : 0U))),5);
        bufp->chgCData(oldp+2221,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT___tail_ext_R1_data),5);
        bufp->chgBit(oldp+2222,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT__data_MPORT_en) 
                                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT___push_valid_T))));
        bufp->chgCData(oldp+2223,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__will_pop)
                                    ? ((0x1bU >= (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT___head_ext_R0_data))
                                        ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT__next_ext__DOT__Memory
                                       [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT___head_ext_R0_data]
                                        : 0U) : 0U)),5);
        bufp->chgCData(oldp+2224,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT__next_ext__DOT__Memory[0]),5);
        bufp->chgCData(oldp+2225,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT__next_ext__DOT__Memory[1]),5);
        bufp->chgCData(oldp+2226,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT__next_ext__DOT__Memory[2]),5);
        bufp->chgCData(oldp+2227,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT__next_ext__DOT__Memory[3]),5);
        bufp->chgCData(oldp+2228,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT__next_ext__DOT__Memory[4]),5);
        bufp->chgCData(oldp+2229,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT__next_ext__DOT__Memory[5]),5);
        bufp->chgCData(oldp+2230,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT__next_ext__DOT__Memory[6]),5);
        bufp->chgCData(oldp+2231,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT__next_ext__DOT__Memory[7]),5);
        bufp->chgCData(oldp+2232,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT__next_ext__DOT__Memory[8]),5);
        bufp->chgCData(oldp+2233,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT__next_ext__DOT__Memory[9]),5);
        bufp->chgCData(oldp+2234,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT__next_ext__DOT__Memory[10]),5);
        bufp->chgCData(oldp+2235,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT__next_ext__DOT__Memory[11]),5);
        bufp->chgCData(oldp+2236,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT__next_ext__DOT__Memory[12]),5);
        bufp->chgCData(oldp+2237,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT__next_ext__DOT__Memory[13]),5);
        bufp->chgCData(oldp+2238,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT__next_ext__DOT__Memory[14]),5);
        bufp->chgCData(oldp+2239,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT__next_ext__DOT__Memory[15]),5);
        bufp->chgCData(oldp+2240,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT__next_ext__DOT__Memory[16]),5);
        bufp->chgCData(oldp+2241,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT__next_ext__DOT__Memory[17]),5);
        bufp->chgCData(oldp+2242,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT__next_ext__DOT__Memory[18]),5);
        bufp->chgCData(oldp+2243,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT__next_ext__DOT__Memory[19]),5);
        bufp->chgCData(oldp+2244,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT__next_ext__DOT__Memory[20]),5);
        bufp->chgCData(oldp+2245,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT__next_ext__DOT__Memory[21]),5);
        bufp->chgCData(oldp+2246,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT__next_ext__DOT__Memory[22]),5);
        bufp->chgCData(oldp+2247,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT__next_ext__DOT__Memory[23]),5);
        bufp->chgCData(oldp+2248,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT__next_ext__DOT__Memory[24]),5);
        bufp->chgCData(oldp+2249,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT__next_ext__DOT__Memory[25]),5);
        bufp->chgCData(oldp+2250,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT__next_ext__DOT__Memory[26]),5);
        bufp->chgCData(oldp+2251,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT__next_ext__DOT__Memory[27]),5);
        bufp->chgCData(oldp+2252,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__will_pop)
                                    ? ((0x23U >= (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__requests__io_pop_bits))
                                        ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT__tail_ext__DOT__Memory
                                       [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__requests__io_pop_bits]
                                        : 0U) : 0U)),5);
        bufp->chgBit(oldp+2253,((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___sinkA_io_req_ready_T) 
                                  & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___sinkC_io_req_valid))) 
                                 & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkX__DOT__x__DOT__maybe_full)))));
        bufp->chgBit(oldp+2254,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s2_valid_pb) 
                                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s2_req_prio_0))));
        bufp->chgCData(oldp+2255,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s2_req_put),6);
        bufp->chgBit(oldp+2256,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s2_last));
        bufp->chgBit(oldp+2257,((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkA__DOT___T_3) 
                                  & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkA__DOT__buf_block))) 
                                 & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkA__DOT__set_block)))));
        bufp->chgSData(oldp+2258,(((0x1000U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_a_bits_address 
                                               >> 0x13U)) 
                                   | (0xfffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_a_bits_address 
                                                >> 0x10U)))),13);
        bufp->chgCData(oldp+2259,((0x3fU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_a_bits_address)),6);
        bufp->chgCData(oldp+2260,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkA__DOT__put),6);
        bufp->chgSData(oldp+2261,((0x3ffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_a_bits_address 
                                             >> 6U))),10);
        bufp->chgBit(oldp+2262,((1U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkA__DOT___io_pb_pop_ready_T))));
        __Vtemp_h03716693__0[0U] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkA__DOT__putbuffer__DOT___data_ext_R0_data[0U];
        __Vtemp_h03716693__0[1U] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkA__DOT__putbuffer__DOT___data_ext_R0_data[1U];
        __Vtemp_h03716693__0[2U] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkA__DOT__putbuffer__DOT___data_ext_R0_data[2U];
        __Vtemp_h03716693__0[3U] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkA__DOT__putbuffer__DOT___data_ext_R0_data[3U];
        bufp->chgWData(oldp+2263,(__Vtemp_h03716693__0),128);
        bufp->chgSData(oldp+2267,((0xffffU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkA__DOT__putbuffer__DOT___data_ext_R0_data[4U])),16);
        bufp->chgBit(oldp+2268,((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkA__DOT__putbuffer__DOT___data_ext_R0_data[4U] 
                                       >> 0x10U))));
        bufp->chgQData(oldp+2269,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkA__DOT__lists),40);
        bufp->chgQData(oldp+2271,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkA__DOT__freeOH),41);
        bufp->chgCData(oldp+2273,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkA__DOT__freeIdx),6);
        bufp->chgCData(oldp+2274,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkA__DOT__first_counter),2);
        bufp->chgBit(oldp+2275,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkA__DOT__first_counter))));
        bufp->chgBit(oldp+2276,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkA__DOT__req_block));
        bufp->chgBit(oldp+2277,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkA__DOT__buf_block));
        bufp->chgBit(oldp+2278,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkA__DOT__set_block));
        bufp->chgCData(oldp+2279,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkA__DOT__put_r),6);
        bufp->chgBit(oldp+2280,(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__x1_a_q__DOT___io_deq_valid_output) 
                                   & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_a_bits_opcode) 
                                         >> 2U))) & 
                                  (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkA__DOT__req_block))) 
                                 & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkA__DOT__set_block)))));
        bufp->chgBit(oldp+2281,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkA__DOT___T_9));
        bufp->chgBit(oldp+2282,((0xffffffffffULL != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkA__DOT__putbuffer__DOT__used)));
        bufp->chgQData(oldp+2283,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkA__DOT__putbuffer__DOT__valid),40);
        bufp->chgQData(oldp+2285,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkA__DOT__putbuffer__DOT__used),40);
        bufp->chgQData(oldp+2287,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkA__DOT__putbuffer__DOT__freeOH),41);
        bufp->chgCData(oldp+2289,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkA__DOT__putbuffer__DOT__data_MPORT_addr),6);
        bufp->chgBit(oldp+2290,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkA__DOT__putbuffer__DOT__data_MPORT_en));
        bufp->chgCData(oldp+2291,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkA__DOT__putbuffer__DOT___head_ext_R0_data),6);
        if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__x1_a_q__DOT__maybe_full) {
            __Vtemp_h40e7dcfe__0[0U] = ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                         [0U][2U] << 1U) 
                                        | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                           [0U][1U] 
                                           >> 0x1fU));
            __Vtemp_h40e7dcfe__0[1U] = ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                         [0U][3U] << 1U) 
                                        | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                           [0U][2U] 
                                           >> 0x1fU));
            __Vtemp_h40e7dcfe__0[2U] = ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                         [0U][4U] << 1U) 
                                        | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                           [0U][3U] 
                                           >> 0x1fU));
            __Vtemp_h40e7dcfe__0[3U] = ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                         [0U][5U] << 1U) 
                                        | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                           [0U][4U] 
                                           >> 0x1fU));
        } else {
            __Vtemp_h40e7dcfe__0[0U] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_l2_widget_out_a_bits_data[0U];
            __Vtemp_h40e7dcfe__0[1U] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_l2_widget_out_a_bits_data[1U];
            __Vtemp_h40e7dcfe__0[2U] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_l2_widget_out_a_bits_data[2U];
            __Vtemp_h40e7dcfe__0[3U] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_l2_widget_out_a_bits_data[3U];
        }
        __Vtemp_h40e7dcfe__0[4U] = ((0x10000U & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__x1_a_q__DOT__maybe_full)
                                                   ? 
                                                  (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                   [0U][5U] 
                                                   >> 0x1fU)
                                                   : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_l2_widget_out_a_bits_corrupt)) 
                                                 << 0x10U)) 
                                    | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_a_bits_mask));
        bufp->chgWData(oldp+2292,(__Vtemp_h40e7dcfe__0),145);
        bufp->chgWData(oldp+2297,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkA__DOT__putbuffer__DOT___data_ext_R0_data),145);
        bufp->chgBit(oldp+2302,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkA__DOT__putbuffer__DOT__data_MPORT_en) 
                                 & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkA__DOT__putbuffer__DOT___push_valid_T)))));
        bufp->chgCData(oldp+2303,(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkA__DOT__putbuffer__DOT__data_MPORT_en) 
                                     & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkA__DOT__putbuffer__DOT___push_valid_T)) 
                                    & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkA__DOT__putbuffer__DOT___tail_ext_R1_data) 
                                       == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkA__DOT__putbuffer__DOT___head_ext_R0_data)))
                                    ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkA__DOT__putbuffer__DOT__data_MPORT_addr)
                                    : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkA__DOT___T_9)
                                        ? ((0x27U >= (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkA__DOT__putbuffer__DOT___head_ext_R0_data))
                                            ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkA__DOT__putbuffer__DOT__next_ext__DOT__Memory
                                           [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkA__DOT__putbuffer__DOT___head_ext_R0_data]
                                            : 0U) : 0U))),6);
        bufp->chgCData(oldp+2304,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkA__DOT__putbuffer__DOT___tail_ext_R1_data),6);
        bufp->chgBit(oldp+2305,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkA__DOT__putbuffer__DOT__data_MPORT_en) 
                                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkA__DOT__putbuffer__DOT___push_valid_T))));
        bufp->chgCData(oldp+2306,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkA__DOT___T_9)
                                    ? ((0x27U >= (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkA__DOT__putbuffer__DOT___head_ext_R0_data))
                                        ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkA__DOT__putbuffer__DOT__next_ext__DOT__Memory
                                       [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkA__DOT__putbuffer__DOT___head_ext_R0_data]
                                        : 0U) : 0U)),6);
        bufp->chgCData(oldp+2307,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkA__DOT___T_9)
                                    ? ((0x27U >= (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s2_req_put))
                                        ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkA__DOT__putbuffer__DOT__tail_ext__DOT__Memory
                                       [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s2_req_put]
                                        : 0U) : 0U)),6);
        bufp->chgBit(oldp+2308,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___sinkA_io_req_ready_T));
        bufp->chgCData(oldp+2309,((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__request_valid) 
                                    & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__request_set) 
                                       == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT___io_set_output)))
                                    ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__meta_way)
                                    : ((((((((((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT__request_valid) 
                                                 & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT__request_set) 
                                                    == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT___io_set_output)))
                                                 ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT__meta_way)
                                                 : 0U) 
                                               | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT__request_valid) 
                                                   & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT__request_set) 
                                                      == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT___io_set_output)))
                                                   ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT__meta_way)
                                                   : 0U)) 
                                              | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT__request_valid) 
                                                  & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT__request_set) 
                                                     == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT___io_set_output)))
                                                  ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT__meta_way)
                                                  : 0U)) 
                                             | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__request_valid) 
                                                 & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__request_set) 
                                                    == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT___io_set_output)))
                                                 ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__meta_way)
                                                 : 0U)) 
                                            | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__request_valid) 
                                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__request_set) 
                                                   == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT___io_set_output)))
                                                ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__meta_way)
                                                : 0U)) 
                                           | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT__request_valid) 
                                               & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT__request_set) 
                                                  == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT___io_set_output)))
                                               ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT__meta_way)
                                               : 0U)) 
                                          | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT__request_valid) 
                                              & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT__request_set) 
                                                 == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT___io_set_output)))
                                              ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT__meta_way)
                                              : 0U)) 
                                         | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__request_valid) 
                                             & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__request_set) 
                                                == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT___io_set_output)))
                                             ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__meta_way)
                                             : 0U)) 
                                        | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__request_valid) 
                                            & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__request_set) 
                                               == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT___io_set_output)))
                                            ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__meta_way)
                                            : 0U)) 
                                       | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__request_valid) 
                                           & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__request_set) 
                                              == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT___io_set_output)))
                                           ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__meta_way)
                                           : 0U)))),3);
        bufp->chgBit(oldp+2310,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s2_valid_pb) 
                                 & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s2_req_prio_0)))));
        bufp->chgCData(oldp+2311,((7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__c__DOT___ram_ext_R0_data[0U])),3);
        bufp->chgCData(oldp+2312,((7U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__c__DOT___ram_ext_R0_data[0U] 
                                         >> 6U))),3);
        bufp->chgCData(oldp+2313,((0x3fU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__c__DOT___ram_ext_R0_data[0U] 
                                            >> 0xfU))),6);
        bufp->chgCData(oldp+2314,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__put),6);
        bufp->chgSData(oldp+2315,((0x3ffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__c__DOT___ram_ext_R0_data[0U] 
                                             >> 0x15U))),10);
        bufp->chgBit(oldp+2316,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___sinkC_io_resp_valid));
        bufp->chgSData(oldp+2317,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT___io_set_output),10);
        bufp->chgBit(oldp+2318,((1U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT___io_rel_pop_ready_T))));
        __Vtemp_h64830217__0[0U] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__putbuffer__DOT___data_ext_R0_data[0U];
        __Vtemp_h64830217__0[1U] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__putbuffer__DOT___data_ext_R0_data[1U];
        __Vtemp_h64830217__0[2U] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__putbuffer__DOT___data_ext_R0_data[2U];
        __Vtemp_h64830217__0[3U] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__putbuffer__DOT___data_ext_R0_data[3U];
        bufp->chgWData(oldp+2319,(__Vtemp_h64830217__0),128);
        bufp->chgBit(oldp+2323,((1U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__putbuffer__DOT___data_ext_R0_data[4U])));
        bufp->chgCData(oldp+2324,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__beats1),2);
        bufp->chgCData(oldp+2325,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__counter),2);
        bufp->chgCData(oldp+2326,((3U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__counter) 
                                         - (IData)(1U)))),2);
        bufp->chgCData(oldp+2327,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__beat),2);
        bufp->chgBit(oldp+2328,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__raw_resp));
        bufp->chgBit(oldp+2329,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__resp_r));
        bufp->chgBit(oldp+2330,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__resp));
        bufp->chgSData(oldp+2331,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__io_set_r),10);
        bufp->chgBit(oldp+2332,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__bs_adr_valid));
        bufp->chgCData(oldp+2333,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__bs_adr_bits_beat_r),2);
        bufp->chgCData(oldp+2334,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__lists),2);
        bufp->chgCData(oldp+2335,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT___GEN) 
                                         >> 1U))),2);
        bufp->chgBit(oldp+2336,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__req_block));
        bufp->chgBit(oldp+2337,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__buf_block));
        bufp->chgBit(oldp+2338,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__set_block));
        bufp->chgCData(oldp+2339,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__put_r),2);
        bufp->chgCData(oldp+2340,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__put),2);
        bufp->chgBit(oldp+2341,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT___c_io_deq_ready_T_7));
        bufp->chgBit(oldp+2342,((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__c__DOT__empty)))));
        bufp->chgIData(oldp+2343,(((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__c__DOT___ram_ext_R0_data[1U] 
                                    << 0x11U) | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__c__DOT___ram_ext_R0_data[0U] 
                                                 >> 0xfU))),32);
        __Vtemp_h3b577ff8__0[0U] = ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__c__DOT___ram_ext_R0_data[2U] 
                                     << 0x11U) | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__c__DOT___ram_ext_R0_data[1U] 
                                                  >> 0xfU));
        __Vtemp_h3b577ff8__0[1U] = ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__c__DOT___ram_ext_R0_data[3U] 
                                     << 0x11U) | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__c__DOT___ram_ext_R0_data[2U] 
                                                  >> 0xfU));
        __Vtemp_h3b577ff8__0[2U] = ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__c__DOT___ram_ext_R0_data[4U] 
                                     << 0x11U) | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__c__DOT___ram_ext_R0_data[3U] 
                                                  >> 0xfU));
        __Vtemp_h3b577ff8__0[3U] = ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__c__DOT___ram_ext_R0_data[5U] 
                                     << 0x11U) | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__c__DOT___ram_ext_R0_data[4U] 
                                                  >> 0xfU));
        bufp->chgWData(oldp+2344,(__Vtemp_h3b577ff8__0),128);
        bufp->chgBit(oldp+2348,((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__c__DOT___ram_ext_R0_data[5U] 
                                       >> 0xfU))));
        bufp->chgBit(oldp+2349,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__c__DOT__enq_ptr_value));
        bufp->chgBit(oldp+2350,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__c__DOT__deq_ptr_value));
        bufp->chgBit(oldp+2351,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__c__DOT__maybe_full));
        bufp->chgBit(oldp+2352,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__c__DOT__ptr_match));
        bufp->chgBit(oldp+2353,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__c__DOT__empty));
        bufp->chgBit(oldp+2354,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__c__DOT__full));
        bufp->chgBit(oldp+2355,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__c__DOT__do_enq));
        bufp->chgBit(oldp+2356,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__c__DOT__do_deq));
        __Vtemp_h9b871b97__0[0U] = (0x4000U | ((0xffff8000U 
                                                & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[0U] 
                                                   << 3U)) 
                                               | ((0x600U 
                                                   & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[0U] 
                                                      >> 1U)) 
                                                  | (0x1ffU 
                                                     & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[0U]))));
        __Vtemp_h9b871b97__0[1U] = (((0x7ff8U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[1U] 
                                                 << 3U)) 
                                     | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[0U] 
                                        >> 0x1dU)) 
                                    | (0xffff8000U 
                                       & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[1U] 
                                          << 3U)));
        __Vtemp_h9b871b97__0[2U] = (((0x7ff8U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[2U] 
                                                 << 3U)) 
                                     | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[1U] 
                                        >> 0x1dU)) 
                                    | (0xffff8000U 
                                       & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[2U] 
                                          << 3U)));
        __Vtemp_h9b871b97__0[3U] = (((0x7ff8U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[3U] 
                                                 << 3U)) 
                                     | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[2U] 
                                        >> 0x1dU)) 
                                    | (0xffff8000U 
                                       & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[3U] 
                                          << 3U)));
        __Vtemp_h9b871b97__0[4U] = (((0x7ff8U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[4U] 
                                                 << 3U)) 
                                     | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[3U] 
                                        >> 0x1dU)) 
                                    | (0xffff8000U 
                                       & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[4U] 
                                          << 3U)));
        __Vtemp_h9b871b97__0[5U] = ((0x8000U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[5U] 
                                                << 3U)) 
                                    | ((0x7ff8U & (
                                                   vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[5U] 
                                                   << 3U)) 
                                       | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[4U] 
                                          >> 0x1dU)));
        bufp->chgWData(oldp+2357,(__Vtemp_h9b871b97__0),176);
        bufp->chgWData(oldp+2363,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__c__DOT___ram_ext_R0_data),176);
        bufp->chgWData(oldp+2369,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__c__DOT__ram_ext__DOT__Memory[0]),176);
        bufp->chgWData(oldp+2375,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__c__DOT__ram_ext__DOT__Memory[1]),176);
        bufp->chgCData(oldp+2381,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__c__DOT__empty)
                                    ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__bs_adr_bits_beat_r)
                                    : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__beat))),2);
        bufp->chgBit(oldp+2382,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__io_bs_adr_q__DOT___io_enq_ready_output));
        bufp->chgBit(oldp+2383,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__io_bs_adr_q__DOT__do_enq));
        bufp->chgIData(oldp+2384,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__io_bs_adr_q__DOT____Vcellinp__ram_ext__W0_data),18);
        bufp->chgIData(oldp+2385,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__io_bs_adr_q__DOT__ram_ext__DOT__Memory
                                  [0U]),18);
        bufp->chgIData(oldp+2386,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__io_bs_adr_q__DOT__ram_ext__DOT__Memory[0]),18);
        bufp->chgBit(oldp+2387,((1U & (((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__resp)) 
                                          & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__c__DOT__empty))) 
                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__c__DOT___ram_ext_R0_data[0U]) 
                                        & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__req_block))) 
                                       & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__set_block))))));
        bufp->chgBit(oldp+2388,((1U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__put))));
        bufp->chgBit(oldp+2389,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT___T_25));
        bufp->chgBit(oldp+2390,((1U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s2_req_put))));
        bufp->chgBit(oldp+2391,((0xffU != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__putbuffer__DOT__used))));
        bufp->chgCData(oldp+2392,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__putbuffer__DOT__valid),2);
        bufp->chgCData(oldp+2393,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__putbuffer__DOT__used),8);
        bufp->chgBit(oldp+2394,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__putbuffer__DOT__data_MPORT_en));
        bufp->chgCData(oldp+2395,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__putbuffer__DOT___head_ext_R0_data),3);
        bufp->chgCData(oldp+2396,((((IData)((0U != 
                                             (0xfU 
                                              & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__putbuffer__DOT___GEN_1) 
                                                 >> 4U)))) 
                                    << 2U) | (((IData)(
                                                       (0U 
                                                        != 
                                                        (3U 
                                                         & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__putbuffer__DOT___GEN_2) 
                                                            >> 1U)))) 
                                               << 1U) 
                                              | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__putbuffer__DOT___freeIdx_T_6)))),3);
        __Vtemp_h35c13fc7__0[0U] = ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__c__DOT___ram_ext_R0_data[2U] 
                                     << 0x11U) | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__c__DOT___ram_ext_R0_data[1U] 
                                                  >> 0xfU));
        __Vtemp_h35c13fc7__0[1U] = ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__c__DOT___ram_ext_R0_data[3U] 
                                     << 0x11U) | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__c__DOT___ram_ext_R0_data[2U] 
                                                  >> 0xfU));
        __Vtemp_h35c13fc7__0[2U] = ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__c__DOT___ram_ext_R0_data[4U] 
                                     << 0x11U) | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__c__DOT___ram_ext_R0_data[3U] 
                                                  >> 0xfU));
        __Vtemp_h35c13fc7__0[3U] = ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__c__DOT___ram_ext_R0_data[5U] 
                                     << 0x11U) | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__c__DOT___ram_ext_R0_data[4U] 
                                                  >> 0xfU));
        __Vtemp_h35c13fc7__0[4U] = (1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__c__DOT___ram_ext_R0_data[5U] 
                                          >> 0xfU));
        bufp->chgWData(oldp+2397,(__Vtemp_h35c13fc7__0),129);
        bufp->chgWData(oldp+2402,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__putbuffer__DOT___data_ext_R0_data),129);
        bufp->chgWData(oldp+2407,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__putbuffer__DOT__data_ext__DOT__Memory[0]),129);
        bufp->chgWData(oldp+2412,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__putbuffer__DOT__data_ext__DOT__Memory[1]),129);
        bufp->chgWData(oldp+2417,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__putbuffer__DOT__data_ext__DOT__Memory[2]),129);
        bufp->chgWData(oldp+2422,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__putbuffer__DOT__data_ext__DOT__Memory[3]),129);
        bufp->chgWData(oldp+2427,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__putbuffer__DOT__data_ext__DOT__Memory[4]),129);
        bufp->chgWData(oldp+2432,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__putbuffer__DOT__data_ext__DOT__Memory[5]),129);
        bufp->chgWData(oldp+2437,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__putbuffer__DOT__data_ext__DOT__Memory[6]),129);
        bufp->chgWData(oldp+2442,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__putbuffer__DOT__data_ext__DOT__Memory[7]),129);
        bufp->chgBit(oldp+2447,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__putbuffer__DOT__data_MPORT_en) 
                                 & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__putbuffer__DOT___push_valid_T)))));
        bufp->chgCData(oldp+2448,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__putbuffer__DOT___GEN_4),3);
        bufp->chgCData(oldp+2449,(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__putbuffer__DOT__data_MPORT_en) 
                                     & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__putbuffer__DOT___push_valid_T)) 
                                    & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__putbuffer__DOT___tail_ext_R1_data) 
                                       == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__putbuffer__DOT___head_ext_R0_data)))
                                    ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__putbuffer__DOT___GEN_4)
                                    : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT___T_25)
                                        ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__putbuffer__DOT__next_ext__DOT__Memory
                                       [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__putbuffer__DOT___head_ext_R0_data]
                                        : 0U))),3);
        bufp->chgCData(oldp+2450,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__putbuffer__DOT__head_ext__DOT__Memory[0]),3);
        bufp->chgCData(oldp+2451,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__putbuffer__DOT__head_ext__DOT__Memory[1]),3);
        bufp->chgCData(oldp+2452,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__putbuffer__DOT___tail_ext_R1_data),3);
        bufp->chgBit(oldp+2453,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__putbuffer__DOT__data_MPORT_en) 
                                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__putbuffer__DOT___push_valid_T))));
        bufp->chgCData(oldp+2454,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT___T_25)
                                    ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__putbuffer__DOT__next_ext__DOT__Memory
                                   [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__putbuffer__DOT___head_ext_R0_data]
                                    : 0U)),3);
        bufp->chgCData(oldp+2455,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__putbuffer__DOT__next_ext__DOT__Memory[0]),3);
        bufp->chgCData(oldp+2456,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__putbuffer__DOT__next_ext__DOT__Memory[1]),3);
        bufp->chgCData(oldp+2457,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__putbuffer__DOT__next_ext__DOT__Memory[2]),3);
        bufp->chgCData(oldp+2458,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__putbuffer__DOT__next_ext__DOT__Memory[3]),3);
        bufp->chgCData(oldp+2459,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__putbuffer__DOT__next_ext__DOT__Memory[4]),3);
        bufp->chgCData(oldp+2460,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__putbuffer__DOT__next_ext__DOT__Memory[5]),3);
        bufp->chgCData(oldp+2461,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__putbuffer__DOT__next_ext__DOT__Memory[6]),3);
        bufp->chgCData(oldp+2462,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__putbuffer__DOT__next_ext__DOT__Memory[7]),3);
        bufp->chgCData(oldp+2463,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT___T_25)
                                    ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__putbuffer__DOT__tail_ext__DOT__Memory
                                   [(1U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s2_req_put))]
                                    : 0U)),3);
        bufp->chgCData(oldp+2464,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__putbuffer__DOT__tail_ext__DOT__Memory[0]),3);
        bufp->chgCData(oldp+2465,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__putbuffer__DOT__tail_ext__DOT__Memory[1]),3);
        bufp->chgBit(oldp+2466,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___sourceD_io_grant_safe));
        bufp->chgBit(oldp+2467,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___sinkD_io_resp_valid));
        bufp->chgCData(oldp+2468,((0xfU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkD__DOT__d__DOT___ram_ext_R0_data[0U] 
                                           >> 8U))),4);
        bufp->chgCData(oldp+2469,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___sinkD_io_source),4);
        bufp->chgCData(oldp+2470,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkD__DOT__beats1),3);
        bufp->chgCData(oldp+2471,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkD__DOT__counter),3);
        bufp->chgCData(oldp+2472,((7U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkD__DOT__counter) 
                                         - (IData)(1U)))),3);
        bufp->chgCData(oldp+2473,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkD__DOT__beat),3);
        bufp->chgCData(oldp+2474,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkD__DOT__io_source_r),4);
        bufp->chgCData(oldp+2475,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkD__DOT__io_bs_adr_bits_beat_r),3);
        bufp->chgBit(oldp+2476,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkD__DOT___d_io_deq_ready_T_2));
        bufp->chgBit(oldp+2477,((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkD__DOT__d__DOT__empty)))));
        bufp->chgCData(oldp+2478,((3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkD__DOT__d__DOT___ram_ext_R0_data[0U] 
                                         >> 3U))),2);
        bufp->chgCData(oldp+2479,((7U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkD__DOT__d__DOT___ram_ext_R0_data[0U] 
                                         >> 5U))),3);
        bufp->chgBit(oldp+2480,((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkD__DOT__d__DOT___ram_ext_R0_data[2U] 
                                       >> 0x10U))));
        bufp->chgBit(oldp+2481,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkD__DOT__d__DOT__enq_ptr_value));
        bufp->chgBit(oldp+2482,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkD__DOT__d__DOT__deq_ptr_value));
        bufp->chgBit(oldp+2483,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkD__DOT__d__DOT__maybe_full));
        bufp->chgBit(oldp+2484,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkD__DOT__d__DOT__ptr_match));
        bufp->chgBit(oldp+2485,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkD__DOT__d__DOT__empty));
        bufp->chgBit(oldp+2486,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkD__DOT__d__DOT__full));
        bufp->chgBit(oldp+2487,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkD__DOT__d__DOT__do_enq));
        bufp->chgBit(oldp+2488,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkD__DOT__d__DOT__do_deq));
        __Vtemp_hfdba7ae2__0[0U] = (((IData)(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__muxStateEarly_1_0)
                                                 ? 
                                                (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__muxStateEarly_0)
                                                   ? vlSelf->TestHarness__DOT__simdram__DOT_____05Fr_data_reg
                                                   : 0ULL) 
                                                 | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__muxStateEarly_1)
                                                     ? 
                                                    (((QData)((IData)(
                                                                      vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[2U])) 
                                                      << 0x32U) 
                                                     | (((QData)((IData)(
                                                                         vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[1U])) 
                                                         << 0x12U) 
                                                        | ((QData)((IData)(
                                                                           vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U])) 
                                                           >> 0xeU)))
                                                     : 0ULL))
                                                 : 0ULL) 
                                               | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__muxStateEarly_1_1)
                                                   ? 
                                                  (((QData)((IData)(
                                                                    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__q__DOT___ram_ext_R0_data[2U])) 
                                                    << 0x30U) 
                                                   | (((QData)((IData)(
                                                                       vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__q__DOT___ram_ext_R0_data[1U])) 
                                                       << 0x10U) 
                                                      | ((QData)((IData)(
                                                                         vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__q__DOT___ram_ext_R0_data[0U])) 
                                                         >> 0x10U)))
                                                   : 0ULL)) 
                                              | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__muxStateEarly_1_2)
                                                  ? 
                                                 (((QData)((IData)(
                                                                   vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__q_1__DOT___ram_ext_R0_data[2U])) 
                                                   << 0x30U) 
                                                  | (((QData)((IData)(
                                                                      vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__q_1__DOT___ram_ext_R0_data[1U])) 
                                                      << 0x10U) 
                                                     | ((QData)((IData)(
                                                                        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__q_1__DOT___ram_ext_R0_data[0U])) 
                                                        >> 0x10U)))
                                                  : 0ULL))) 
                                     << 0x10U) | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__out_6_bits_denied) 
                                                   << 0xfU) 
                                                  | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__bundleIn_0_d_bits_sink) 
                                                      << 0xcU) 
                                                     | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__out_6_bits_source) 
                                                         << 8U) 
                                                        | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__out_6_bits_size) 
                                                            << 5U) 
                                                           | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__out_6_bits_param) 
                                                               << 3U) 
                                                              | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__out_6_bits_opcode)))))));
        __Vtemp_hfdba7ae2__0[1U] = (((IData)(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__muxStateEarly_1_0)
                                                 ? 
                                                (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__muxStateEarly_0)
                                                   ? vlSelf->TestHarness__DOT__simdram__DOT_____05Fr_data_reg
                                                   : 0ULL) 
                                                 | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__muxStateEarly_1)
                                                     ? 
                                                    (((QData)((IData)(
                                                                      vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[2U])) 
                                                      << 0x32U) 
                                                     | (((QData)((IData)(
                                                                         vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[1U])) 
                                                         << 0x12U) 
                                                        | ((QData)((IData)(
                                                                           vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U])) 
                                                           >> 0xeU)))
                                                     : 0ULL))
                                                 : 0ULL) 
                                               | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__muxStateEarly_1_1)
                                                   ? 
                                                  (((QData)((IData)(
                                                                    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__q__DOT___ram_ext_R0_data[2U])) 
                                                    << 0x30U) 
                                                   | (((QData)((IData)(
                                                                       vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__q__DOT___ram_ext_R0_data[1U])) 
                                                       << 0x10U) 
                                                      | ((QData)((IData)(
                                                                         vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__q__DOT___ram_ext_R0_data[0U])) 
                                                         >> 0x10U)))
                                                   : 0ULL)) 
                                              | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__muxStateEarly_1_2)
                                                  ? 
                                                 (((QData)((IData)(
                                                                   vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__q_1__DOT___ram_ext_R0_data[2U])) 
                                                   << 0x30U) 
                                                  | (((QData)((IData)(
                                                                      vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__q_1__DOT___ram_ext_R0_data[1U])) 
                                                      << 0x10U) 
                                                     | ((QData)((IData)(
                                                                        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__q_1__DOT___ram_ext_R0_data[0U])) 
                                                        >> 0x10U)))
                                                  : 0ULL))) 
                                     >> 0x10U) | ((IData)(
                                                          (((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__muxStateEarly_1_0)
                                                               ? 
                                                              (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__muxStateEarly_0)
                                                                 ? vlSelf->TestHarness__DOT__simdram__DOT_____05Fr_data_reg
                                                                 : 0ULL) 
                                                               | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__muxStateEarly_1)
                                                                   ? 
                                                                  (((QData)((IData)(
                                                                                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[2U])) 
                                                                    << 0x32U) 
                                                                   | (((QData)((IData)(
                                                                                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[1U])) 
                                                                       << 0x12U) 
                                                                      | ((QData)((IData)(
                                                                                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U])) 
                                                                         >> 0xeU)))
                                                                   : 0ULL))
                                                               : 0ULL) 
                                                             | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__muxStateEarly_1_1)
                                                                 ? 
                                                                (((QData)((IData)(
                                                                                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__q__DOT___ram_ext_R0_data[2U])) 
                                                                  << 0x30U) 
                                                                 | (((QData)((IData)(
                                                                                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__q__DOT___ram_ext_R0_data[1U])) 
                                                                     << 0x10U) 
                                                                    | ((QData)((IData)(
                                                                                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__q__DOT___ram_ext_R0_data[0U])) 
                                                                       >> 0x10U)))
                                                                 : 0ULL)) 
                                                            | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__muxStateEarly_1_2)
                                                                ? 
                                                               (((QData)((IData)(
                                                                                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__q_1__DOT___ram_ext_R0_data[2U])) 
                                                                 << 0x30U) 
                                                                | (((QData)((IData)(
                                                                                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__q_1__DOT___ram_ext_R0_data[1U])) 
                                                                    << 0x10U) 
                                                                   | ((QData)((IData)(
                                                                                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__q_1__DOT___ram_ext_R0_data[0U])) 
                                                                      >> 0x10U)))
                                                                : 0ULL)) 
                                                           >> 0x20U)) 
                                                  << 0x10U));
        __Vtemp_hfdba7ae2__0[2U] = ((IData)((((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__muxStateEarly_1_0)
                                                 ? 
                                                (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__muxStateEarly_0)
                                                   ? vlSelf->TestHarness__DOT__simdram__DOT_____05Fr_data_reg
                                                   : 0ULL) 
                                                 | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__muxStateEarly_1)
                                                     ? 
                                                    (((QData)((IData)(
                                                                      vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[2U])) 
                                                      << 0x32U) 
                                                     | (((QData)((IData)(
                                                                         vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[1U])) 
                                                         << 0x12U) 
                                                        | ((QData)((IData)(
                                                                           vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U])) 
                                                           >> 0xeU)))
                                                     : 0ULL))
                                                 : 0ULL) 
                                               | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__muxStateEarly_1_1)
                                                   ? 
                                                  (((QData)((IData)(
                                                                    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__q__DOT___ram_ext_R0_data[2U])) 
                                                    << 0x30U) 
                                                   | (((QData)((IData)(
                                                                       vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__q__DOT___ram_ext_R0_data[1U])) 
                                                       << 0x10U) 
                                                      | ((QData)((IData)(
                                                                         vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__q__DOT___ram_ext_R0_data[0U])) 
                                                         >> 0x10U)))
                                                   : 0ULL)) 
                                              | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__muxStateEarly_1_2)
                                                  ? 
                                                 (((QData)((IData)(
                                                                   vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__q_1__DOT___ram_ext_R0_data[2U])) 
                                                   << 0x30U) 
                                                  | (((QData)((IData)(
                                                                      vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__q_1__DOT___ram_ext_R0_data[1U])) 
                                                      << 0x10U) 
                                                     | ((QData)((IData)(
                                                                        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__q_1__DOT___ram_ext_R0_data[0U])) 
                                                        >> 0x10U)))
                                                  : 0ULL)) 
                                             >> 0x20U)) 
                                    >> 0x10U);
        __Vtemp_hd9c9b24d__0[0U] = __Vtemp_hfdba7ae2__0[0U];
        __Vtemp_hd9c9b24d__0[1U] = __Vtemp_hfdba7ae2__0[1U];
        __Vtemp_hd9c9b24d__0[2U] = ((0xffff0000U & 
                                     (((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__muxStateEarly_1_0) 
                                         << 0x10U) 
                                        & ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__muxStateEarly_0) 
                                             & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins) 
                                                & ((0U 
                                                    != (IData)(vlSelf->TestHarness__DOT__simdram__DOT_____05Fr_resp_reg)) 
                                                   | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_d_denied)))) 
                                            << 0x10U) 
                                           | (0xffff0000U 
                                              & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__muxStateEarly_1) 
                                                  << 0x10U) 
                                                 & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[2U] 
                                                    << 2U))))) 
                                       | (0xffff0000U 
                                          & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__muxStateEarly_1_1) 
                                              << 0x10U) 
                                             & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__q__DOT___ram_ext_R0_data[2U]))) 
                                      | (0xffff0000U 
                                         & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__muxStateEarly_1_2) 
                                             << 0x10U) 
                                            & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__q_1__DOT___ram_ext_R0_data[2U])))) 
                                    | __Vtemp_hfdba7ae2__0[2U]);
        bufp->chgWData(oldp+2489,(__Vtemp_hd9c9b24d__0),81);
        bufp->chgWData(oldp+2492,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkD__DOT__d__DOT___ram_ext_R0_data),81);
        bufp->chgWData(oldp+2495,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkD__DOT__d__DOT__ram_ext__DOT__Memory[0]),81);
        bufp->chgWData(oldp+2498,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkD__DOT__d__DOT__ram_ext__DOT__Memory[1]),81);
        bufp->chgBit(oldp+2501,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___sinkA_io_req_ready_T) 
                                 & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___sinkC_io_req_valid)))));
        bufp->chgBit(oldp+2502,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkX__DOT__x__DOT__maybe_full));
        bufp->chgSData(oldp+2503,(((0x1000U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkX__DOT__x__DOT__ram_address_ext__DOT__Memory
                                               [0U] 
                                               >> 0x13U)) 
                                   | (0xfffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkX__DOT__x__DOT__ram_address_ext__DOT__Memory
                                                [0U] 
                                                >> 0x10U)))),13);
        bufp->chgSData(oldp+2504,((0x3ffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkX__DOT__x__DOT__ram_address_ext__DOT__Memory
                                             [0U] >> 6U))),10);
        bufp->chgIData(oldp+2505,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkX__DOT__x__DOT__ram_address_ext__DOT__Memory
                                  [0U]),32);
        bufp->chgBit(oldp+2506,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkX__DOT__x__DOT__do_enq));
        bufp->chgIData(oldp+2507,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkX__DOT__x__DOT__ram_address_ext__DOT__Memory[0]),32);
        bufp->chgBit(oldp+2508,((((((((((((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshr_selectOH) 
                                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT___io_schedule_bits_a_valid_output)) 
                                           | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshr_selectOH) 
                                               >> 1U) 
                                              & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT___io_schedule_bits_a_valid_output))) 
                                          | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshr_selectOH) 
                                              >> 2U) 
                                             & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT___io_schedule_bits_a_valid_output))) 
                                         | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshr_selectOH) 
                                             >> 3U) 
                                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT___io_schedule_bits_a_valid_output))) 
                                        | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshr_selectOH) 
                                            >> 4U) 
                                           & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT___io_schedule_bits_a_valid_output))) 
                                       | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshr_selectOH) 
                                           >> 5U) & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT___io_schedule_bits_a_valid_output))) 
                                      | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshr_selectOH) 
                                          >> 6U) & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT___io_schedule_bits_a_valid_output))) 
                                     | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshr_selectOH) 
                                         >> 7U) & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT___io_schedule_bits_a_valid_output))) 
                                    | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshr_selectOH) 
                                        >> 8U) & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT___io_schedule_bits_a_valid_output))) 
                                   | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshr_selectOH) 
                                       >> 9U) & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT___io_schedule_bits_a_valid_output))) 
                                  | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshr_selectOH) 
                                      >> 0xaU) & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___io_schedule_bits_a_valid_output))) 
                                 | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshr_selectOH) 
                                     >> 0xbU) & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT___io_schedule_bits_a_valid_output)))));
        bufp->chgSData(oldp+2509,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__sourceA__io_req_bits_tag),13);
        bufp->chgCData(oldp+2510,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__sourceA__io_req_bits_param),3);
        bufp->chgBit(oldp+2511,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__sourceA__io_req_bits_block));
        bufp->chgBit(oldp+2512,((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT__full)))));
        bufp->chgCData(oldp+2513,((6U | (1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__sourceA__io_req_bits_block))))),3);
        bufp->chgIData(oldp+2514,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT____Vcellinp__io_a_q__io_enq_bits_address),32);
        bufp->chgBit(oldp+2515,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT__enq_ptr_value));
        bufp->chgBit(oldp+2516,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT__deq_ptr_value));
        bufp->chgBit(oldp+2517,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT__maybe_full));
        bufp->chgBit(oldp+2518,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT__ptr_match));
        bufp->chgBit(oldp+2519,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT__empty));
        bufp->chgBit(oldp+2520,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT__full));
        bufp->chgBit(oldp+2521,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT__do_enq));
        bufp->chgBit(oldp+2522,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT__do_deq));
        __Vtemp_h0352ed4b__0[0U] = (IData)((((QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT____Vcellinp__io_a_q__io_enq_bits_address)) 
                                             << 0xdU) 
                                            | (QData)((IData)(
                                                              (0x186U 
                                                               | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__schedule_d_bits_sink) 
                                                                   << 9U) 
                                                                  | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__sourceA__io_req_bits_param) 
                                                                      << 3U) 
                                                                     | (1U 
                                                                        & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__sourceA__io_req_bits_block))))))))));
        __Vtemp_h0352ed4b__0[1U] = (0x1fe000U | (IData)(
                                                        ((((QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT____Vcellinp__io_a_q__io_enq_bits_address)) 
                                                           << 0xdU) 
                                                          | (QData)((IData)(
                                                                            (0x186U 
                                                                             | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__schedule_d_bits_sink) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__sourceA__io_req_bits_param) 
                                                                                << 3U) 
                                                                                | (1U 
                                                                                & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__sourceA__io_req_bits_block))))))))) 
                                                         >> 0x20U)));
        __Vtemp_h0352ed4b__0[2U] = 0U;
        __Vtemp_h0352ed4b__0[3U] = 0U;
        bufp->chgWData(oldp+2523,(__Vtemp_h0352ed4b__0),118);
        bufp->chgWData(oldp+2527,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data),118);
        bufp->chgWData(oldp+2531,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT__ram_ext__DOT__Memory[0]),118);
        bufp->chgWData(oldp+2535,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT__ram_ext__DOT__Memory[1]),118);
        bufp->chgBit(oldp+2539,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__sourceB__io_req_valid));
        bufp->chgCData(oldp+2540,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__sourceB__io_req_bits_param),3);
        bufp->chgSData(oldp+2541,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__sourceB__io_req_bits_tag),13);
        bufp->chgSData(oldp+2542,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__sourceB__io_req_bits_set),10);
        bufp->chgBit(oldp+2543,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__sourceB__io_req_bits_clients));
        bufp->chgBit(oldp+2544,((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceB__DOT__remain)))));
        bufp->chgBit(oldp+2545,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceB__DOT__remain));
        bufp->chgSData(oldp+2546,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceB__DOT__tag_r),13);
        bufp->chgSData(oldp+2547,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceB__DOT__tag),13);
        bufp->chgSData(oldp+2548,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceB__DOT__set_r),10);
        bufp->chgCData(oldp+2549,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceB__DOT__param_r),3);
        bufp->chgBit(oldp+2550,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__sourceC__io_req_valid));
        bufp->chgCData(oldp+2551,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___schedule_WIRE_46),3);
        bufp->chgCData(oldp+2552,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__sourceC__io_req_bits_param),3);
        bufp->chgCData(oldp+2553,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__sourceC__io_req_bits_source),4);
        bufp->chgSData(oldp+2554,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__sourceC__io_req_bits_tag),13);
        bufp->chgSData(oldp+2555,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__sourceC__io_req_bits_set),10);
        bufp->chgCData(oldp+2556,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__sourceC__io_req_bits_way),3);
        bufp->chgBit(oldp+2557,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__sourceC__io_req_bits_dirty));
        bufp->chgBit(oldp+2558,((1U & ((((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__busy)) 
                                           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__req_way) 
                                              != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s1_req_reg_way))) 
                                          | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__req_set) 
                                             != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s1_req_reg_set))) 
                                         & (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s2_full)) 
                                             | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__req_way) 
                                                != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s2_req_way))) 
                                            | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__req_set) 
                                               != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s2_req_set)))) 
                                        & (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s3_full)) 
                                            | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__req_way) 
                                               != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s3_req_way))) 
                                           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__req_set) 
                                              != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s3_req_set)))) 
                                       & (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_full)) 
                                           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__req_way) 
                                              != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_way))) 
                                          | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__req_set) 
                                             != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_set)))))));
        bufp->chgBit(oldp+2559,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT___io_req_ready_output));
        bufp->chgCData(oldp+2560,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__fill),4);
        bufp->chgBit(oldp+2561,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__room));
        bufp->chgBit(oldp+2562,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__busy));
        bufp->chgCData(oldp+2563,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__req_r_opcode),3);
        bufp->chgCData(oldp+2564,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__req_r_param),3);
        bufp->chgCData(oldp+2565,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__req_r_source),4);
        bufp->chgSData(oldp+2566,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__req_r_tag),13);
        bufp->chgSData(oldp+2567,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__req_r_set),10);
        bufp->chgCData(oldp+2568,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__req_r_way),3);
        bufp->chgBit(oldp+2569,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__want_data));
        bufp->chgBit(oldp+2570,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__s2_valid));
        bufp->chgCData(oldp+2571,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__s2_req_opcode),3);
        bufp->chgCData(oldp+2572,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__s2_req_param),3);
        bufp->chgCData(oldp+2573,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__s2_req_source),4);
        bufp->chgSData(oldp+2574,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__s2_req_tag),13);
        bufp->chgSData(oldp+2575,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__s2_req_set),10);
        bufp->chgBit(oldp+2576,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__s3_valid));
        bufp->chgCData(oldp+2577,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__s3_req_opcode),3);
        bufp->chgCData(oldp+2578,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__s3_req_param),3);
        bufp->chgCData(oldp+2579,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__s3_req_source),4);
        bufp->chgSData(oldp+2580,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__s3_req_tag),13);
        bufp->chgSData(oldp+2581,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__s3_req_set),10);
        bufp->chgIData(oldp+2582,(((0x80000000U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__s3_req_tag) 
                                                   << 0x13U)) 
                                   | ((0xfff0000U & 
                                       ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__s3_req_tag) 
                                        << 0x10U)) 
                                      | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__s3_req_set) 
                                         << 6U)))),32);
        bufp->chgBit(oldp+2583,((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT__full)))));
        bufp->chgCData(oldp+2584,((0xfU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT__ptr_match)
                                            ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT__maybe_full)
                                                ? 0xcU
                                                : 0U)
                                            : (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT__deq_ptr_value) 
                                                > (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT__enq_ptr_value))
                                                ? (
                                                   ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT__enq_ptr_value) 
                                                    - (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT__deq_ptr_value)) 
                                                   - (IData)(4U))
                                                : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT__enq_ptr_value) 
                                                   - (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT__deq_ptr_value)))))),4);
        bufp->chgCData(oldp+2585,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT__enq_ptr_value),4);
        bufp->chgCData(oldp+2586,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT__deq_ptr_value),4);
        bufp->chgBit(oldp+2587,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT__maybe_full));
        bufp->chgBit(oldp+2588,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT__ptr_match));
        bufp->chgBit(oldp+2589,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT__empty));
        bufp->chgBit(oldp+2590,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT__full));
        bufp->chgBit(oldp+2591,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT__do_enq));
        bufp->chgCData(oldp+2592,((0xfU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT__enq_ptr_value) 
                                           - (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT__deq_ptr_value)))),4);
        bufp->chgBit(oldp+2593,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT__do_deq));
        VL_EXTEND_WQ(65,64, __Vtemp_h7d59051d__0, (
                                                   ((((((((1U 
                                                           & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__regsel_sourceC))
                                                           ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__regout_r
                                                           : 0ULL) 
                                                         | ((2U 
                                                             & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__regsel_sourceC))
                                                             ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__regout_r_1
                                                             : 0ULL)) 
                                                        | ((4U 
                                                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__regsel_sourceC))
                                                            ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__regout_r_2
                                                            : 0ULL)) 
                                                       | ((8U 
                                                           & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__regsel_sourceC))
                                                           ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__regout_r_3
                                                           : 0ULL)) 
                                                      | ((0x10U 
                                                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__regsel_sourceC))
                                                          ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__regout_r_4
                                                          : 0ULL)) 
                                                     | ((0x20U 
                                                         & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__regsel_sourceC))
                                                         ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__regout_r_5
                                                         : 0ULL)) 
                                                    | ((0x40U 
                                                        & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__regsel_sourceC))
                                                        ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__regout_r_6
                                                        : 0ULL)) 
                                                   | ((0x80U 
                                                       & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__regsel_sourceC))
                                                       ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__regout_r_7
                                                       : 0ULL)));
        __Vtemp_hd08ac353__0[0U] = (IData)((((QData)((IData)(
                                                             ((0x80000000U 
                                                               & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__s3_req_tag) 
                                                                  << 0x13U)) 
                                                              | ((0xfff0000U 
                                                                  & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__s3_req_tag) 
                                                                     << 0x10U)) 
                                                                 | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__s3_req_set) 
                                                                    << 6U))))) 
                                             << 0xdU) 
                                            | (QData)((IData)(
                                                              (0x180U 
                                                               | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__s3_req_source) 
                                                                   << 9U) 
                                                                  | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__s3_req_param) 
                                                                      << 3U) 
                                                                     | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__s3_req_opcode))))))));
        __Vtemp_hd08ac353__0[1U] = ((__Vtemp_h7d59051d__0[0U] 
                                     << 0xdU) | (IData)(
                                                        ((((QData)((IData)(
                                                                           ((0x80000000U 
                                                                             & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__s3_req_tag) 
                                                                                << 0x13U)) 
                                                                            | ((0xfff0000U 
                                                                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__s3_req_tag) 
                                                                                << 0x10U)) 
                                                                               | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__s3_req_set) 
                                                                                << 6U))))) 
                                                           << 0xdU) 
                                                          | (QData)((IData)(
                                                                            (0x180U 
                                                                             | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__s3_req_source) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__s3_req_param) 
                                                                                << 3U) 
                                                                                | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__s3_req_opcode))))))) 
                                                         >> 0x20U)));
        __Vtemp_hd08ac353__0[2U] = ((__Vtemp_h7d59051d__0[0U] 
                                     >> 0x13U) | (__Vtemp_h7d59051d__0[1U] 
                                                  << 0xdU));
        __Vtemp_hd08ac353__0[3U] = ((__Vtemp_h7d59051d__0[1U] 
                                     >> 0x13U) | (__Vtemp_h7d59051d__0[2U] 
                                                  << 0xdU));
        bufp->chgWData(oldp+2594,(__Vtemp_hd08ac353__0),110);
        bufp->chgWData(oldp+2598,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT___ram_ext_R0_data),110);
        bufp->chgWData(oldp+2602,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT__ram_ext__DOT__Memory[0]),110);
        bufp->chgWData(oldp+2606,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT__ram_ext__DOT__Memory[1]),110);
        bufp->chgWData(oldp+2610,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT__ram_ext__DOT__Memory[2]),110);
        bufp->chgWData(oldp+2614,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT__ram_ext__DOT__Memory[3]),110);
        bufp->chgWData(oldp+2618,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT__ram_ext__DOT__Memory[4]),110);
        bufp->chgWData(oldp+2622,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT__ram_ext__DOT__Memory[5]),110);
        bufp->chgWData(oldp+2626,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT__ram_ext__DOT__Memory[6]),110);
        bufp->chgWData(oldp+2630,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT__ram_ext__DOT__Memory[7]),110);
        bufp->chgWData(oldp+2634,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT__ram_ext__DOT__Memory[8]),110);
        bufp->chgWData(oldp+2638,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT__ram_ext__DOT__Memory[9]),110);
        bufp->chgWData(oldp+2642,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT__ram_ext__DOT__Memory[10]),110);
        bufp->chgWData(oldp+2646,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT__ram_ext__DOT__Memory[11]),110);
        bufp->chgBit(oldp+2650,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__sourceD__io_req_valid));
        bufp->chgBit(oldp+2651,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__sourceD__io_req_bits_prio_0));
        bufp->chgBit(oldp+2652,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__sourceD__io_req_bits_prio_2));
        bufp->chgCData(oldp+2653,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__sourceD__io_req_bits_opcode),3);
        bufp->chgCData(oldp+2654,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__sourceD__io_req_bits_param),3);
        bufp->chgCData(oldp+2655,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__sourceD__io_req_bits_size),3);
        bufp->chgCData(oldp+2656,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__sourceD__io_req_bits_source),6);
        bufp->chgCData(oldp+2657,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__sourceD__io_req_bits_offset),6);
        bufp->chgCData(oldp+2658,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__sourceD__io_req_bits_put),6);
        bufp->chgSData(oldp+2659,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__sourceD__io_req_bits_set),10);
        bufp->chgCData(oldp+2660,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__sourceD__io_req_bits_way),3);
        bufp->chgBit(oldp+2661,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__sourceD__io_req_bits_bad));
        bufp->chgBit(oldp+2662,((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__busy)))));
        bufp->chgCData(oldp+2663,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s1_x_bypass),2);
        bufp->chgBit(oldp+2664,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_ready));
        bufp->chgBit(oldp+2665,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s3_ready));
        bufp->chgBit(oldp+2666,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s3_valid));
        bufp->chgBit(oldp+2667,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__busy));
        bufp->chgBit(oldp+2668,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s1_block_r));
        bufp->chgCData(oldp+2669,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s1_counter),2);
        bufp->chgBit(oldp+2670,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s1_req_reg_prio_0));
        bufp->chgBit(oldp+2671,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s1_req_reg_prio_2));
        bufp->chgCData(oldp+2672,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s1_req_reg_opcode),3);
        bufp->chgCData(oldp+2673,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s1_req_reg_param),3);
        bufp->chgCData(oldp+2674,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s1_req_reg_size),3);
        bufp->chgCData(oldp+2675,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s1_req_reg_source),6);
        bufp->chgCData(oldp+2676,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s1_req_reg_offset),6);
        bufp->chgCData(oldp+2677,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s1_req_reg_put),6);
    }
}
