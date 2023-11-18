// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VTestHarness__Syms.h"


void VTestHarness::traceChgThis__636(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+7158);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(oldp+0,((1U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_address 
                                    >> 2U))));
        vcdp->chgBit(oldp+1,((1U & (~ (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_address 
                                       >> 2U)))));
        vcdp->chgBit(oldp+2,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__mask_acc));
        vcdp->chgBit(oldp+3,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__mask_acc_1));
        vcdp->chgBit(oldp+4,((1U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_address 
                                    >> 1U))));
        vcdp->chgBit(oldp+5,((1U & (~ (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_address 
                                       >> 1U)))));
        vcdp->chgBit(oldp+6,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__mask_eq_2));
        vcdp->chgBit(oldp+7,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__mask_acc_2));
        vcdp->chgBit(oldp+8,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__mask_eq_3));
        vcdp->chgBit(oldp+9,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__mask_acc_3));
        vcdp->chgBit(oldp+10,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__mask_eq_4));
        vcdp->chgBit(oldp+11,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__mask_acc_4));
        vcdp->chgBit(oldp+12,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__mask_eq_5));
        vcdp->chgBit(oldp+13,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__mask_acc_5));
        vcdp->chgBit(oldp+14,((1U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_address)));
        vcdp->chgBit(oldp+15,((1U & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_address))));
        vcdp->chgBit(oldp+16,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__mask_eq_2) 
                               & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_address))));
        vcdp->chgBit(oldp+17,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__mask_acc_2) 
                               | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__mask_eq_2) 
                                  & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_address)))));
        vcdp->chgBit(oldp+18,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__mask_eq_2) 
                               & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_address)));
        vcdp->chgBit(oldp+19,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__mask_acc_2) 
                               | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__mask_eq_2) 
                                  & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_address))));
        vcdp->chgBit(oldp+20,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__mask_eq_3) 
                               & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_address))));
        vcdp->chgBit(oldp+21,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__mask_acc_3) 
                               | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__mask_eq_3) 
                                  & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_address)))));
    }
}

void VTestHarness::traceChgThis__638(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+7180);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(oldp+0,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__mask_eq_3) 
                              & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_address)));
        vcdp->chgBit(oldp+1,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__mask_acc_3) 
                              | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__mask_eq_3) 
                                 & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_address))));
        vcdp->chgBit(oldp+2,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__mask_eq_4) 
                              & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_address))));
        vcdp->chgBit(oldp+3,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__mask_acc_4) 
                              | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__mask_eq_4) 
                                 & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_address)))));
        vcdp->chgBit(oldp+4,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__mask_eq_4) 
                              & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_address)));
        vcdp->chgBit(oldp+5,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__mask_acc_4) 
                              | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__mask_eq_4) 
                                 & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_address))));
        vcdp->chgBit(oldp+6,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__mask_eq_5) 
                              & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_address))));
        vcdp->chgBit(oldp+7,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__mask_acc_5) 
                              | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__mask_eq_5) 
                                 & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_address)))));
        vcdp->chgBit(oldp+8,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__mask_eq_5) 
                              & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_address)));
        vcdp->chgBit(oldp+9,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__mask_acc_5) 
                              | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__mask_eq_5) 
                                 & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_address))));
        vcdp->chgCData(oldp+10,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__mask),8);
        vcdp->chgCData(oldp+11,((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT___a_first_T) 
                                  & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__a_first_counter_1)))
                                  ? (1U | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode) 
                                           << 1U)) : 0U)),4);
        vcdp->chgCData(oldp+12,((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT___a_first_T) 
                                  & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__a_first_counter_1)))
                                  ? (1U | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_size) 
                                           << 1U)) : 0U)),4);
    }
}

void VTestHarness::traceChgThis__640(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+7193);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Variables
    // Begin mtask footprint all: 
    WData/*95:0*/ __Vtemp23074[3];
    WData/*95:0*/ __Vtemp23075[3];
    WData/*95:0*/ __Vtemp23078[3];
    WData/*95:0*/ __Vtemp23081[3];
    WData/*95:0*/ __Vtemp23082[3];
    // Body
    {
        vcdp->chgBit(oldp+0,((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                               & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__a_first_counter_1))) 
                              & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_source) 
                                 == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__sourceIdMap_bundleIn_0_d_bits_source_MPORT_data)))));
        __Vtemp23074[0U] = (7U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT___a_opcode_lookup_T_1[0U] 
                                  >> 1U));
        __Vtemp23074[1U] = 0U;
        __Vtemp23074[2U] = 0U;
        VL_EXTEND_WW(80,79, __Vtemp23075, __Vtemp23074);
        vcdp->chgCData(oldp+1,((0xfU & __Vtemp23075[0U])),4);
        VL_SHIFTR_WWI(80,80,8, __Vtemp23078, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__inflight_sizes, 
                      ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__sourceIdMap_bundleIn_0_d_bits_source_MPORT_data) 
                       << 2U));
        __Vtemp23081[0U] = (7U & (__Vtemp23078[0U] 
                                  >> 1U));
        __Vtemp23081[1U] = 0U;
        __Vtemp23081[2U] = 0U;
        VL_EXTEND_WW(80,79, __Vtemp23082, __Vtemp23081);
        vcdp->chgCData(oldp+2,((0xfU & __Vtemp23082[0U])),4);
        vcdp->chgIData(oldp+3,((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                                 & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__a_first_counter_1)))
                                 ? (0xfffffU & ((IData)(1U) 
                                                << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_source)))
                                 : 0U)),20);
        vcdp->chgIData(oldp+4,(((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                                  & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__d_first_counter_1))) 
                                 & (6U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                                 ? (0xfffffU & ((IData)(1U) 
                                                << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__sourceIdMap_bundleIn_0_d_bits_source_MPORT_data)))
                                 : 0U)),20);
        vcdp->chgIData(oldp+5,((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT___a_first_T) 
                                 & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__a_first_counter_1)))
                                 ? (0xfffffU & ((IData)(1U) 
                                                << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_source)))
                                 : 0U)),20);
        vcdp->chgIData(oldp+6,(((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT___d_first_T) 
                                  & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__d_first_counter_1))) 
                                 & (6U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                                 ? (0xfffffU & ((IData)(1U) 
                                                << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__sourceIdMap_bundleIn_0_d_bits_source_MPORT_data)))
                                 : 0U)),20);
    }
}

void VTestHarness::traceChgThis__642(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+7200);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Variables
    // Begin mtask footprint all: 
    WData/*287:0*/ __Vtemp23125[9];
    WData/*287:0*/ __Vtemp23126[9];
    WData/*95:0*/ __Vtemp23132[3];
    WData/*95:0*/ __Vtemp23135[3];
    WData/*287:0*/ __Vtemp23138[9];
    WData/*287:0*/ __Vtemp23139[9];
    WData/*95:0*/ __Vtemp23145[3];
    WData/*95:0*/ __Vtemp23148[3];
    WData/*95:0*/ __Vtemp23151[3];
    WData/*95:0*/ __Vtemp23152[3];
    WData/*287:0*/ __Vtemp23155[9];
    WData/*287:0*/ __Vtemp23156[9];
    WData/*95:0*/ __Vtemp23162[3];
    // Body
    {
        VL_EXTEND_WI(259,4, __Vtemp23125, (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT___a_first_T) 
                                            & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__a_first_counter_1)))
                                            ? (1U | 
                                               ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode) 
                                                << 1U))
                                            : 0U));
        VL_SHIFTL_WWI(259,259,8, __Vtemp23126, __Vtemp23125, 
                      ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_source) 
                       << 2U));
        __Vtemp23132[0U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT___a_first_T) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__a_first_counter_1)))
                             ? __Vtemp23126[0U] : 0U);
        __Vtemp23132[1U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT___a_first_T) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__a_first_counter_1)))
                             ? __Vtemp23126[1U] : 0U);
        __Vtemp23132[2U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT___a_first_T) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__a_first_counter_1)))
                             ? (0xffffU & __Vtemp23126[2U])
                             : 0U);
        vcdp->chgWData(oldp+0,(__Vtemp23132),80);
        __Vtemp23135[0U] = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT___GEN_23[0U];
        __Vtemp23135[1U] = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT___GEN_23[1U];
        __Vtemp23135[2U] = (0xffffU & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT___GEN_23[2U]);
        vcdp->chgWData(oldp+3,(__Vtemp23135),80);
        VL_EXTEND_WI(259,4, __Vtemp23138, (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT___a_first_T) 
                                            & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__a_first_counter_1)))
                                            ? (1U | 
                                               ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_size) 
                                                << 1U))
                                            : 0U));
        VL_SHIFTL_WWI(259,259,8, __Vtemp23139, __Vtemp23138, 
                      ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_source) 
                       << 2U));
        __Vtemp23145[0U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT___a_first_T) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__a_first_counter_1)))
                             ? __Vtemp23139[0U] : 0U);
        __Vtemp23145[1U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT___a_first_T) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__a_first_counter_1)))
                             ? __Vtemp23139[1U] : 0U);
        __Vtemp23145[2U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT___a_first_T) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__a_first_counter_1)))
                             ? (0xffffU & __Vtemp23139[2U])
                             : 0U);
        vcdp->chgWData(oldp+6,(__Vtemp23145),80);
        VL_SHIFTR_WWI(80,80,8, __Vtemp23148, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__inflight_sizes_1, 
                      ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__sourceIdMap_bundleIn_0_d_bits_source_MPORT_data) 
                       << 2U));
        __Vtemp23151[0U] = (7U & (__Vtemp23148[0U] 
                                  >> 1U));
        __Vtemp23151[1U] = 0U;
        __Vtemp23151[2U] = 0U;
        VL_EXTEND_WW(80,79, __Vtemp23152, __Vtemp23151);
        vcdp->chgCData(oldp+9,((0xfU & __Vtemp23152[0U])),4);
        vcdp->chgIData(oldp+10,(((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT___d_first_T) 
                                   & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__d_first_counter_2))) 
                                  & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                                  ? (0xfffffU & ((IData)(1U) 
                                                 << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__sourceIdMap_bundleIn_0_d_bits_source_MPORT_data)))
                                  : 0U)),20);
        __Vtemp23155[0U] = 0xfU;
        __Vtemp23155[1U] = 0U;
        __Vtemp23155[2U] = 0U;
        __Vtemp23155[3U] = 0U;
        __Vtemp23155[4U] = 0U;
        __Vtemp23155[5U] = 0U;
        __Vtemp23155[6U] = 0U;
        __Vtemp23155[7U] = 0U;
        __Vtemp23155[8U] = 0U;
        VL_SHIFTL_WWI(271,271,8, __Vtemp23156, __Vtemp23155, 
                      ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__sourceIdMap_bundleIn_0_d_bits_source_MPORT_data) 
                       << 2U));
        __Vtemp23162[0U] = ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT___d_first_T) 
                              & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__d_first_counter_2))) 
                             & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                             ? __Vtemp23156[0U] : 0U);
        __Vtemp23162[1U] = ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT___d_first_T) 
                              & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__d_first_counter_2))) 
                             & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                             ? __Vtemp23156[1U] : 0U);
        __Vtemp23162[2U] = ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT___d_first_T) 
                              & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__d_first_counter_2))) 
                             & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                             ? (0xffffU & __Vtemp23156[2U])
                             : 0U);
        vcdp->chgWData(oldp+11,(__Vtemp23162),80);
    }
}

void VTestHarness::traceChgThis__644(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+7214);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(oldp+0,(((IData)(vlTOPp->TestHarness__DOT__simdram__DOT_____05Faw_ready_reg) 
                              & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___GEN_95))));
        vcdp->chgBit(oldp+1,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_out_aw_valid));
        vcdp->chgCData(oldp+2,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_bits_echo_tl_state_size),4);
        vcdp->chgCData(oldp+3,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_bits_echo_tl_state_source),5);
        vcdp->chgBit(oldp+4,((1U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_bits_id) 
                                    >> 4U))));
        vcdp->chgCData(oldp+5,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank_auto_in_b_bits_echo_tl_state_size),4);
        vcdp->chgCData(oldp+6,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank_auto_in_b_bits_echo_tl_state_source),5);
        vcdp->chgBit(oldp+7,(((IData)(vlTOPp->TestHarness__DOT__simdram__DOT_____05Far_ready_reg) 
                              & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___GEN_15))));
        vcdp->chgBit(oldp+8,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_out_ar_valid));
        vcdp->chgCData(oldp+9,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank_auto_in_r_bits_echo_tl_state_size),4);
        vcdp->chgCData(oldp+10,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank_auto_in_r_bits_echo_tl_state_source),5);
        vcdp->chgCData(oldp+11,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_bits_id),5);
        vcdp->chgBit(oldp+12,((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility__DOT__full)))));
        vcdp->chgBit(oldp+13,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_io_enq_valid));
        vcdp->chgBit(oldp+14,((0xffffU & ((((IData)(vlTOPp->TestHarness__DOT__simdram__DOT_____05Fr_valid_reg) 
                                            & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_out_r_ready)) 
                                           & ((IData)(1U) 
                                              << (IData)(vlTOPp->TestHarness__DOT__simdram__DOT_____05Fr_id_reg))) 
                                          & (IData)(vlTOPp->TestHarness__DOT__simdram__DOT_____05Fr_last_reg)))));
        vcdp->chgBit(oldp+15,((1U & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility__DOT__ptr_match) 
                                        & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility__DOT__maybe_full)))))));
        vcdp->chgBit(oldp+16,((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_1__DOT__full)))));
        vcdp->chgBit(oldp+17,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_1_io_enq_valid));
        vcdp->chgBit(oldp+18,((0x7fffU & ((((IData)(vlTOPp->TestHarness__DOT__simdram__DOT_____05Fr_valid_reg) 
                                            & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_out_r_ready)) 
                                           & (((IData)(1U) 
                                               << (IData)(vlTOPp->TestHarness__DOT__simdram__DOT_____05Fr_id_reg)) 
                                              >> 1U)) 
                                          & (IData)(vlTOPp->TestHarness__DOT__simdram__DOT_____05Fr_last_reg)))));
        vcdp->chgBit(oldp+19,((1U & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_1__DOT__ptr_match) 
                                        & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_1__DOT__maybe_full)))))));
        vcdp->chgBit(oldp+20,((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__full)))));
        vcdp->chgBit(oldp+21,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_2_io_enq_valid));
        vcdp->chgBit(oldp+22,((0x3fffU & ((((IData)(vlTOPp->TestHarness__DOT__simdram__DOT_____05Fr_valid_reg) 
                                            & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_out_r_ready)) 
                                           & (((IData)(1U) 
                                               << (IData)(vlTOPp->TestHarness__DOT__simdram__DOT_____05Fr_id_reg)) 
                                              >> 2U)) 
                                          & (IData)(vlTOPp->TestHarness__DOT__simdram__DOT_____05Fr_last_reg)))));
        vcdp->chgBit(oldp+23,((1U & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__ptr_match) 
                                        & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__maybe_full)))))));
    }
}

void VTestHarness::traceChgThis__646(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+7238);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(oldp+0,((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_3__DOT__full)))));
        vcdp->chgBit(oldp+1,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_3_io_enq_valid));
        vcdp->chgBit(oldp+2,((0x1fffU & ((((IData)(vlTOPp->TestHarness__DOT__simdram__DOT_____05Fr_valid_reg) 
                                           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_out_r_ready)) 
                                          & (((IData)(1U) 
                                              << (IData)(vlTOPp->TestHarness__DOT__simdram__DOT_____05Fr_id_reg)) 
                                             >> 3U)) 
                                         & (IData)(vlTOPp->TestHarness__DOT__simdram__DOT_____05Fr_last_reg)))));
        vcdp->chgBit(oldp+3,((1U & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_3__DOT__ptr_match) 
                                       & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_3__DOT__maybe_full)))))));
        vcdp->chgBit(oldp+4,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_4_io_enq_valid));
        vcdp->chgBit(oldp+5,((0xfffU & ((((IData)(vlTOPp->TestHarness__DOT__simdram__DOT_____05Fr_valid_reg) 
                                          & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_out_r_ready)) 
                                         & (((IData)(1U) 
                                             << (IData)(vlTOPp->TestHarness__DOT__simdram__DOT_____05Fr_id_reg)) 
                                            >> 4U)) 
                                        & (IData)(vlTOPp->TestHarness__DOT__simdram__DOT_____05Fr_last_reg)))));
        vcdp->chgBit(oldp+6,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_5_io_enq_valid));
        vcdp->chgBit(oldp+7,((0x7ffU & ((((IData)(vlTOPp->TestHarness__DOT__simdram__DOT_____05Fr_valid_reg) 
                                          & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_out_r_ready)) 
                                         & (((IData)(1U) 
                                             << (IData)(vlTOPp->TestHarness__DOT__simdram__DOT_____05Fr_id_reg)) 
                                            >> 5U)) 
                                        & (IData)(vlTOPp->TestHarness__DOT__simdram__DOT_____05Fr_last_reg)))));
        vcdp->chgBit(oldp+8,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_6_io_enq_valid));
        vcdp->chgBit(oldp+9,((0x3ffU & ((((IData)(vlTOPp->TestHarness__DOT__simdram__DOT_____05Fr_valid_reg) 
                                          & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_out_r_ready)) 
                                         & (((IData)(1U) 
                                             << (IData)(vlTOPp->TestHarness__DOT__simdram__DOT_____05Fr_id_reg)) 
                                            >> 6U)) 
                                        & (IData)(vlTOPp->TestHarness__DOT__simdram__DOT_____05Fr_last_reg)))));
        vcdp->chgBit(oldp+10,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_7_io_enq_valid));
        vcdp->chgBit(oldp+11,((0x1ffU & ((((IData)(vlTOPp->TestHarness__DOT__simdram__DOT_____05Fr_valid_reg) 
                                           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_out_r_ready)) 
                                          & (((IData)(1U) 
                                              << (IData)(vlTOPp->TestHarness__DOT__simdram__DOT_____05Fr_id_reg)) 
                                             >> 7U)) 
                                         & (IData)(vlTOPp->TestHarness__DOT__simdram__DOT_____05Fr_last_reg)))));
        vcdp->chgBit(oldp+12,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_8_io_enq_valid));
        vcdp->chgBit(oldp+13,((0xffU & ((((IData)(vlTOPp->TestHarness__DOT__simdram__DOT_____05Fr_valid_reg) 
                                          & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_out_r_ready)) 
                                         & (((IData)(1U) 
                                             << (IData)(vlTOPp->TestHarness__DOT__simdram__DOT_____05Fr_id_reg)) 
                                            >> 8U)) 
                                        & (IData)(vlTOPp->TestHarness__DOT__simdram__DOT_____05Fr_last_reg)))));
        vcdp->chgBit(oldp+14,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_9_io_enq_valid));
    }
}

void VTestHarness::traceChgThis__648(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+7253);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(oldp+0,((0x7fU & ((((IData)(vlTOPp->TestHarness__DOT__simdram__DOT_____05Fr_valid_reg) 
                                         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_out_r_ready)) 
                                        & (((IData)(1U) 
                                            << (IData)(vlTOPp->TestHarness__DOT__simdram__DOT_____05Fr_id_reg)) 
                                           >> 9U)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__simdram__DOT_____05Fr_last_reg)))));
        vcdp->chgBit(oldp+1,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_10_io_enq_valid));
        vcdp->chgBit(oldp+2,((0x3fU & ((((IData)(vlTOPp->TestHarness__DOT__simdram__DOT_____05Fr_valid_reg) 
                                         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_out_r_ready)) 
                                        & (((IData)(1U) 
                                            << (IData)(vlTOPp->TestHarness__DOT__simdram__DOT_____05Fr_id_reg)) 
                                           >> 0xaU)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__simdram__DOT_____05Fr_last_reg)))));
        vcdp->chgBit(oldp+3,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_11_io_enq_valid));
        vcdp->chgBit(oldp+4,((0x1fU & ((((IData)(vlTOPp->TestHarness__DOT__simdram__DOT_____05Fr_valid_reg) 
                                         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_out_r_ready)) 
                                        & (((IData)(1U) 
                                            << (IData)(vlTOPp->TestHarness__DOT__simdram__DOT_____05Fr_id_reg)) 
                                           >> 0xbU)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__simdram__DOT_____05Fr_last_reg)))));
        vcdp->chgBit(oldp+5,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_12_io_enq_valid));
        vcdp->chgBit(oldp+6,((0xfU & ((((IData)(vlTOPp->TestHarness__DOT__simdram__DOT_____05Fr_valid_reg) 
                                        & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_out_r_ready)) 
                                       & (((IData)(1U) 
                                           << (IData)(vlTOPp->TestHarness__DOT__simdram__DOT_____05Fr_id_reg)) 
                                          >> 0xcU)) 
                                      & (IData)(vlTOPp->TestHarness__DOT__simdram__DOT_____05Fr_last_reg)))));
        vcdp->chgBit(oldp+7,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_13_io_enq_valid));
        vcdp->chgBit(oldp+8,((7U & ((((IData)(vlTOPp->TestHarness__DOT__simdram__DOT_____05Fr_valid_reg) 
                                      & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_out_r_ready)) 
                                     & (((IData)(1U) 
                                         << (IData)(vlTOPp->TestHarness__DOT__simdram__DOT_____05Fr_id_reg)) 
                                        >> 0xdU)) & (IData)(vlTOPp->TestHarness__DOT__simdram__DOT_____05Fr_last_reg)))));
        vcdp->chgBit(oldp+9,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_14_io_enq_valid));
        vcdp->chgBit(oldp+10,((3U & ((((IData)(vlTOPp->TestHarness__DOT__simdram__DOT_____05Fr_valid_reg) 
                                       & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_out_r_ready)) 
                                      & (((IData)(1U) 
                                          << (IData)(vlTOPp->TestHarness__DOT__simdram__DOT_____05Fr_id_reg)) 
                                         >> 0xeU)) 
                                     & (IData)(vlTOPp->TestHarness__DOT__simdram__DOT_____05Fr_last_reg)))));
        vcdp->chgBit(oldp+11,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_15_io_enq_valid));
        vcdp->chgBit(oldp+12,((1U & ((((IData)(vlTOPp->TestHarness__DOT__simdram__DOT_____05Fr_valid_reg) 
                                       & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_out_r_ready)) 
                                      & (((IData)(1U) 
                                          << (IData)(vlTOPp->TestHarness__DOT__simdram__DOT_____05Fr_id_reg)) 
                                         >> 0xfU)) 
                                     & (IData)(vlTOPp->TestHarness__DOT__simdram__DOT_____05Fr_last_reg)))));
    }
}

void VTestHarness::traceChgThis__650(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+7266);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(oldp+0,((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_16__DOT__full)))));
        vcdp->chgBit(oldp+1,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_16_io_enq_valid));
        vcdp->chgBit(oldp+2,((0xffffU & (((IData)(vlTOPp->TestHarness__DOT__simdram__DOT_____05Fb_valid_reg) 
                                          & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_out_b_ready)) 
                                         & ((IData)(1U) 
                                            << (IData)(vlTOPp->TestHarness__DOT__simdram__DOT_____05Fb_id_reg))))));
        vcdp->chgBit(oldp+3,((1U & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_16__DOT__ptr_match) 
                                       & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_16__DOT__maybe_full)))))));
        vcdp->chgBit(oldp+4,((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_17__DOT__full)))));
        vcdp->chgBit(oldp+5,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_17_io_enq_valid));
        vcdp->chgBit(oldp+6,((0x7fffU & (((IData)(vlTOPp->TestHarness__DOT__simdram__DOT_____05Fb_valid_reg) 
                                          & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_out_b_ready)) 
                                         & (((IData)(1U) 
                                             << (IData)(vlTOPp->TestHarness__DOT__simdram__DOT_____05Fb_id_reg)) 
                                            >> 1U)))));
        vcdp->chgBit(oldp+7,((1U & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_17__DOT__ptr_match) 
                                       & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_17__DOT__maybe_full)))))));
        vcdp->chgBit(oldp+8,((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_18__DOT__full)))));
        vcdp->chgBit(oldp+9,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_18_io_enq_valid));
        vcdp->chgBit(oldp+10,((0x3fffU & (((IData)(vlTOPp->TestHarness__DOT__simdram__DOT_____05Fb_valid_reg) 
                                           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_out_b_ready)) 
                                          & (((IData)(1U) 
                                              << (IData)(vlTOPp->TestHarness__DOT__simdram__DOT_____05Fb_id_reg)) 
                                             >> 2U)))));
        vcdp->chgBit(oldp+11,((1U & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_18__DOT__ptr_match) 
                                        & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_18__DOT__maybe_full)))))));
        vcdp->chgBit(oldp+12,((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_19__DOT__full)))));
        vcdp->chgBit(oldp+13,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_19_io_enq_valid));
        vcdp->chgBit(oldp+14,((0x1fffU & (((IData)(vlTOPp->TestHarness__DOT__simdram__DOT_____05Fb_valid_reg) 
                                           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_out_b_ready)) 
                                          & (((IData)(1U) 
                                              << (IData)(vlTOPp->TestHarness__DOT__simdram__DOT_____05Fb_id_reg)) 
                                             >> 3U)))));
        vcdp->chgBit(oldp+15,((1U & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_19__DOT__ptr_match) 
                                        & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_19__DOT__maybe_full)))))));
        vcdp->chgBit(oldp+16,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_20_io_enq_valid));
        vcdp->chgBit(oldp+17,((0xfffU & (((IData)(vlTOPp->TestHarness__DOT__simdram__DOT_____05Fb_valid_reg) 
                                          & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_out_b_ready)) 
                                         & (((IData)(1U) 
                                             << (IData)(vlTOPp->TestHarness__DOT__simdram__DOT_____05Fb_id_reg)) 
                                            >> 4U)))));
    }
}

void VTestHarness::traceChgThis__652(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+7284);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(oldp+0,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_21_io_enq_valid));
        vcdp->chgBit(oldp+1,((0x7ffU & (((IData)(vlTOPp->TestHarness__DOT__simdram__DOT_____05Fb_valid_reg) 
                                         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_out_b_ready)) 
                                        & (((IData)(1U) 
                                            << (IData)(vlTOPp->TestHarness__DOT__simdram__DOT_____05Fb_id_reg)) 
                                           >> 5U)))));
        vcdp->chgBit(oldp+2,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_22_io_enq_valid));
        vcdp->chgBit(oldp+3,((0x3ffU & (((IData)(vlTOPp->TestHarness__DOT__simdram__DOT_____05Fb_valid_reg) 
                                         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_out_b_ready)) 
                                        & (((IData)(1U) 
                                            << (IData)(vlTOPp->TestHarness__DOT__simdram__DOT_____05Fb_id_reg)) 
                                           >> 6U)))));
        vcdp->chgBit(oldp+4,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_23_io_enq_valid));
        vcdp->chgBit(oldp+5,((0x1ffU & (((IData)(vlTOPp->TestHarness__DOT__simdram__DOT_____05Fb_valid_reg) 
                                         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_out_b_ready)) 
                                        & (((IData)(1U) 
                                            << (IData)(vlTOPp->TestHarness__DOT__simdram__DOT_____05Fb_id_reg)) 
                                           >> 7U)))));
        vcdp->chgBit(oldp+6,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_24_io_enq_valid));
        vcdp->chgBit(oldp+7,((0xffU & (((IData)(vlTOPp->TestHarness__DOT__simdram__DOT_____05Fb_valid_reg) 
                                        & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_out_b_ready)) 
                                       & (((IData)(1U) 
                                           << (IData)(vlTOPp->TestHarness__DOT__simdram__DOT_____05Fb_id_reg)) 
                                          >> 8U)))));
        vcdp->chgBit(oldp+8,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_25_io_enq_valid));
        vcdp->chgBit(oldp+9,((0x7fU & (((IData)(vlTOPp->TestHarness__DOT__simdram__DOT_____05Fb_valid_reg) 
                                        & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_out_b_ready)) 
                                       & (((IData)(1U) 
                                           << (IData)(vlTOPp->TestHarness__DOT__simdram__DOT_____05Fb_id_reg)) 
                                          >> 9U)))));
        vcdp->chgBit(oldp+10,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_26_io_enq_valid));
        vcdp->chgBit(oldp+11,((0x3fU & (((IData)(vlTOPp->TestHarness__DOT__simdram__DOT_____05Fb_valid_reg) 
                                         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_out_b_ready)) 
                                        & (((IData)(1U) 
                                            << (IData)(vlTOPp->TestHarness__DOT__simdram__DOT_____05Fb_id_reg)) 
                                           >> 0xaU)))));
        vcdp->chgBit(oldp+12,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_27_io_enq_valid));
        vcdp->chgBit(oldp+13,((0x1fU & (((IData)(vlTOPp->TestHarness__DOT__simdram__DOT_____05Fb_valid_reg) 
                                         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_out_b_ready)) 
                                        & (((IData)(1U) 
                                            << (IData)(vlTOPp->TestHarness__DOT__simdram__DOT_____05Fb_id_reg)) 
                                           >> 0xbU)))));
        vcdp->chgBit(oldp+14,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_28_io_enq_valid));
        vcdp->chgBit(oldp+15,((0xfU & (((IData)(vlTOPp->TestHarness__DOT__simdram__DOT_____05Fb_valid_reg) 
                                        & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_out_b_ready)) 
                                       & (((IData)(1U) 
                                           << (IData)(vlTOPp->TestHarness__DOT__simdram__DOT_____05Fb_id_reg)) 
                                          >> 0xcU)))));
    }
}

void VTestHarness::traceChgThis__654(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+7300);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(oldp+0,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_29_io_enq_valid));
        vcdp->chgBit(oldp+1,((7U & (((IData)(vlTOPp->TestHarness__DOT__simdram__DOT_____05Fb_valid_reg) 
                                     & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_out_b_ready)) 
                                    & (((IData)(1U) 
                                        << (IData)(vlTOPp->TestHarness__DOT__simdram__DOT_____05Fb_id_reg)) 
                                       >> 0xdU)))));
        vcdp->chgBit(oldp+2,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_30_io_enq_valid));
        vcdp->chgBit(oldp+3,((3U & (((IData)(vlTOPp->TestHarness__DOT__simdram__DOT_____05Fb_valid_reg) 
                                     & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_out_b_ready)) 
                                    & (((IData)(1U) 
                                        << (IData)(vlTOPp->TestHarness__DOT__simdram__DOT_____05Fb_id_reg)) 
                                       >> 0xeU)))));
        vcdp->chgBit(oldp+4,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_31_io_enq_valid));
        vcdp->chgBit(oldp+5,((1U & (((IData)(vlTOPp->TestHarness__DOT__simdram__DOT_____05Fb_valid_reg) 
                                     & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_out_b_ready)) 
                                    & (((IData)(1U) 
                                        << (IData)(vlTOPp->TestHarness__DOT__simdram__DOT_____05Fb_id_reg)) 
                                       >> 0xfU)))));
        vcdp->chgBit(oldp+6,((1U & ((IData)(1U) << 
                                    (0xfU & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_bits_id))))));
        vcdp->chgBit(oldp+7,((1U & (((IData)(1U) << 
                                     (0xfU & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_bits_id))) 
                                    >> 1U))));
        vcdp->chgBit(oldp+8,((1U & (((IData)(1U) << 
                                     (0xfU & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_bits_id))) 
                                    >> 2U))));
        vcdp->chgBit(oldp+9,((1U & (((IData)(1U) << 
                                     (0xfU & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_bits_id))) 
                                    >> 3U))));
        vcdp->chgBit(oldp+10,((1U & (((IData)(1U) << 
                                      (0xfU & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_bits_id))) 
                                     >> 4U))));
        vcdp->chgBit(oldp+11,((1U & (((IData)(1U) << 
                                      (0xfU & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_bits_id))) 
                                     >> 5U))));
        vcdp->chgBit(oldp+12,((1U & (((IData)(1U) << 
                                      (0xfU & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_bits_id))) 
                                     >> 6U))));
    }
}

void VTestHarness::traceChgThis__656(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+7313);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(oldp+0,((1U & (((IData)(1U) << 
                                     (0xfU & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_bits_id))) 
                                    >> 7U))));
        vcdp->chgBit(oldp+1,((1U & (((IData)(1U) << 
                                     (0xfU & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_bits_id))) 
                                    >> 8U))));
        vcdp->chgBit(oldp+2,((1U & (((IData)(1U) << 
                                     (0xfU & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_bits_id))) 
                                    >> 9U))));
        vcdp->chgBit(oldp+3,((1U & (((IData)(1U) << 
                                     (0xfU & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_bits_id))) 
                                    >> 0xaU))));
        vcdp->chgBit(oldp+4,((1U & (((IData)(1U) << 
                                     (0xfU & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_bits_id))) 
                                    >> 0xbU))));
        vcdp->chgBit(oldp+5,((1U & (((IData)(1U) << 
                                     (0xfU & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_bits_id))) 
                                    >> 0xcU))));
        vcdp->chgBit(oldp+6,((1U & (((IData)(1U) << 
                                     (0xfU & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_bits_id))) 
                                    >> 0xdU))));
        vcdp->chgBit(oldp+7,((1U & (((IData)(1U) << 
                                     (0xfU & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_bits_id))) 
                                    >> 0xeU))));
        vcdp->chgBit(oldp+8,((1U & (((IData)(1U) << 
                                     (0xfU & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_bits_id))) 
                                    >> 0xfU))));
        vcdp->chgBit(oldp+9,(((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility__DOT__full)) 
                              & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_io_enq_valid))));
        vcdp->chgBit(oldp+10,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility__DOT__ptr_match));
        vcdp->chgBit(oldp+11,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility__DOT__ptr_match) 
                               & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility__DOT__maybe_full)))));
    }
}

void VTestHarness::traceChgThis__658(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+7325);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(oldp+0,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility__DOT__full));
        vcdp->chgBit(oldp+1,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility__DOT__do_enq));
        vcdp->chgBit(oldp+2,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility__DOT__do_deq));
        vcdp->chgBit(oldp+3,(((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_1__DOT__full)) 
                              & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_1_io_enq_valid))));
        vcdp->chgBit(oldp+4,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_1__DOT__ptr_match));
        vcdp->chgBit(oldp+5,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_1__DOT__ptr_match) 
                              & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_1__DOT__maybe_full)))));
        vcdp->chgBit(oldp+6,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_1__DOT__full));
        vcdp->chgBit(oldp+7,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_1__DOT__do_enq));
        vcdp->chgBit(oldp+8,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_1__DOT__do_deq));
        vcdp->chgBit(oldp+9,(((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__full)) 
                              & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_2_io_enq_valid))));
        vcdp->chgBit(oldp+10,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__ptr_match));
        vcdp->chgBit(oldp+11,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__ptr_match) 
                               & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__maybe_full)))));
        vcdp->chgBit(oldp+12,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__full));
        vcdp->chgBit(oldp+13,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__do_enq));
        vcdp->chgBit(oldp+14,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__do_deq));
        vcdp->chgBit(oldp+15,(((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_3__DOT__full)) 
                               & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_3_io_enq_valid))));
        vcdp->chgBit(oldp+16,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_3__DOT__ptr_match));
        vcdp->chgBit(oldp+17,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_3__DOT__ptr_match) 
                               & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_3__DOT__maybe_full)))));
        vcdp->chgBit(oldp+18,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_3__DOT__full));
        vcdp->chgBit(oldp+19,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_3__DOT__do_enq));
        vcdp->chgBit(oldp+20,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_3__DOT__do_deq));
        vcdp->chgBit(oldp+21,(((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_4__DOT__maybe_full)) 
                               & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_4_io_enq_valid))));
        vcdp->chgBit(oldp+22,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_4__DOT__do_enq));
        vcdp->chgBit(oldp+23,((0xfffU & (((((IData)(vlTOPp->TestHarness__DOT__simdram__DOT_____05Fr_valid_reg) 
                                            & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_out_r_ready)) 
                                           & (((IData)(1U) 
                                               << (IData)(vlTOPp->TestHarness__DOT__simdram__DOT_____05Fr_id_reg)) 
                                              >> 4U)) 
                                          & (IData)(vlTOPp->TestHarness__DOT__simdram__DOT_____05Fr_last_reg)) 
                                         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_4__DOT__maybe_full)))));
        vcdp->chgBit(oldp+24,(((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_5__DOT__maybe_full)) 
                               & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_5_io_enq_valid))));
        vcdp->chgBit(oldp+25,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_5__DOT__do_enq));
        vcdp->chgBit(oldp+26,((0x7ffU & (((((IData)(vlTOPp->TestHarness__DOT__simdram__DOT_____05Fr_valid_reg) 
                                            & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_out_r_ready)) 
                                           & (((IData)(1U) 
                                               << (IData)(vlTOPp->TestHarness__DOT__simdram__DOT_____05Fr_id_reg)) 
                                              >> 5U)) 
                                          & (IData)(vlTOPp->TestHarness__DOT__simdram__DOT_____05Fr_last_reg)) 
                                         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_5__DOT__maybe_full)))));
    }
}

void VTestHarness::traceChgThis__660(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+7352);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(oldp+0,(((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_6__DOT__maybe_full)) 
                              & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_6_io_enq_valid))));
        vcdp->chgBit(oldp+1,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_6__DOT__do_enq));
        vcdp->chgBit(oldp+2,((0x3ffU & (((((IData)(vlTOPp->TestHarness__DOT__simdram__DOT_____05Fr_valid_reg) 
                                           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_out_r_ready)) 
                                          & (((IData)(1U) 
                                              << (IData)(vlTOPp->TestHarness__DOT__simdram__DOT_____05Fr_id_reg)) 
                                             >> 6U)) 
                                         & (IData)(vlTOPp->TestHarness__DOT__simdram__DOT_____05Fr_last_reg)) 
                                        & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_6__DOT__maybe_full)))));
        vcdp->chgBit(oldp+3,(((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_7__DOT__maybe_full)) 
                              & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_7_io_enq_valid))));
        vcdp->chgBit(oldp+4,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_7__DOT__do_enq));
        vcdp->chgBit(oldp+5,((0x1ffU & (((((IData)(vlTOPp->TestHarness__DOT__simdram__DOT_____05Fr_valid_reg) 
                                           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_out_r_ready)) 
                                          & (((IData)(1U) 
                                              << (IData)(vlTOPp->TestHarness__DOT__simdram__DOT_____05Fr_id_reg)) 
                                             >> 7U)) 
                                         & (IData)(vlTOPp->TestHarness__DOT__simdram__DOT_____05Fr_last_reg)) 
                                        & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_7__DOT__maybe_full)))));
        vcdp->chgBit(oldp+6,(((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_8__DOT__maybe_full)) 
                              & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_8_io_enq_valid))));
        vcdp->chgBit(oldp+7,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_8__DOT__do_enq));
        vcdp->chgBit(oldp+8,((0xffU & (((((IData)(vlTOPp->TestHarness__DOT__simdram__DOT_____05Fr_valid_reg) 
                                          & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_out_r_ready)) 
                                         & (((IData)(1U) 
                                             << (IData)(vlTOPp->TestHarness__DOT__simdram__DOT_____05Fr_id_reg)) 
                                            >> 8U)) 
                                        & (IData)(vlTOPp->TestHarness__DOT__simdram__DOT_____05Fr_last_reg)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_8__DOT__maybe_full)))));
        vcdp->chgBit(oldp+9,(((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_9__DOT__maybe_full)) 
                              & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_9_io_enq_valid))));
        vcdp->chgBit(oldp+10,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_9__DOT__do_enq));
        vcdp->chgBit(oldp+11,((0x7fU & (((((IData)(vlTOPp->TestHarness__DOT__simdram__DOT_____05Fr_valid_reg) 
                                           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_out_r_ready)) 
                                          & (((IData)(1U) 
                                              << (IData)(vlTOPp->TestHarness__DOT__simdram__DOT_____05Fr_id_reg)) 
                                             >> 9U)) 
                                         & (IData)(vlTOPp->TestHarness__DOT__simdram__DOT_____05Fr_last_reg)) 
                                        & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_9__DOT__maybe_full)))));
        vcdp->chgBit(oldp+12,(((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_10__DOT__maybe_full)) 
                               & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_10_io_enq_valid))));
        vcdp->chgBit(oldp+13,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_10__DOT__do_enq));
        vcdp->chgBit(oldp+14,((0x3fU & (((((IData)(vlTOPp->TestHarness__DOT__simdram__DOT_____05Fr_valid_reg) 
                                           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_out_r_ready)) 
                                          & (((IData)(1U) 
                                              << (IData)(vlTOPp->TestHarness__DOT__simdram__DOT_____05Fr_id_reg)) 
                                             >> 0xaU)) 
                                         & (IData)(vlTOPp->TestHarness__DOT__simdram__DOT_____05Fr_last_reg)) 
                                        & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_10__DOT__maybe_full)))));
    }
}

void VTestHarness::traceChgThis__662(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+7367);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(oldp+0,(((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_11__DOT__maybe_full)) 
                              & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_11_io_enq_valid))));
        vcdp->chgBit(oldp+1,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_11__DOT__do_enq));
        vcdp->chgBit(oldp+2,((0x1fU & (((((IData)(vlTOPp->TestHarness__DOT__simdram__DOT_____05Fr_valid_reg) 
                                          & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_out_r_ready)) 
                                         & (((IData)(1U) 
                                             << (IData)(vlTOPp->TestHarness__DOT__simdram__DOT_____05Fr_id_reg)) 
                                            >> 0xbU)) 
                                        & (IData)(vlTOPp->TestHarness__DOT__simdram__DOT_____05Fr_last_reg)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_11__DOT__maybe_full)))));
        vcdp->chgBit(oldp+3,(((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_12__DOT__maybe_full)) 
                              & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_12_io_enq_valid))));
        vcdp->chgBit(oldp+4,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_12__DOT__do_enq));
        vcdp->chgBit(oldp+5,((0xfU & (((((IData)(vlTOPp->TestHarness__DOT__simdram__DOT_____05Fr_valid_reg) 
                                         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_out_r_ready)) 
                                        & (((IData)(1U) 
                                            << (IData)(vlTOPp->TestHarness__DOT__simdram__DOT_____05Fr_id_reg)) 
                                           >> 0xcU)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__simdram__DOT_____05Fr_last_reg)) 
                                      & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_12__DOT__maybe_full)))));
        vcdp->chgBit(oldp+6,(((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_13__DOT__maybe_full)) 
                              & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_13_io_enq_valid))));
        vcdp->chgBit(oldp+7,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_13__DOT__do_enq));
        vcdp->chgBit(oldp+8,((7U & (((((IData)(vlTOPp->TestHarness__DOT__simdram__DOT_____05Fr_valid_reg) 
                                       & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_out_r_ready)) 
                                      & (((IData)(1U) 
                                          << (IData)(vlTOPp->TestHarness__DOT__simdram__DOT_____05Fr_id_reg)) 
                                         >> 0xdU)) 
                                     & (IData)(vlTOPp->TestHarness__DOT__simdram__DOT_____05Fr_last_reg)) 
                                    & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_13__DOT__maybe_full)))));
        vcdp->chgBit(oldp+9,(((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_14__DOT__maybe_full)) 
                              & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_14_io_enq_valid))));
        vcdp->chgBit(oldp+10,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_14__DOT__do_enq));
        vcdp->chgBit(oldp+11,((3U & (((((IData)(vlTOPp->TestHarness__DOT__simdram__DOT_____05Fr_valid_reg) 
                                        & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_out_r_ready)) 
                                       & (((IData)(1U) 
                                           << (IData)(vlTOPp->TestHarness__DOT__simdram__DOT_____05Fr_id_reg)) 
                                          >> 0xeU)) 
                                      & (IData)(vlTOPp->TestHarness__DOT__simdram__DOT_____05Fr_last_reg)) 
                                     & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_14__DOT__maybe_full)))));
        vcdp->chgBit(oldp+12,(((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_15__DOT__maybe_full)) 
                               & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_15_io_enq_valid))));
        vcdp->chgBit(oldp+13,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_15__DOT__do_enq));
        vcdp->chgBit(oldp+14,((1U & (((((IData)(vlTOPp->TestHarness__DOT__simdram__DOT_____05Fr_valid_reg) 
                                        & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_out_r_ready)) 
                                       & (((IData)(1U) 
                                           << (IData)(vlTOPp->TestHarness__DOT__simdram__DOT_____05Fr_id_reg)) 
                                          >> 0xfU)) 
                                      & (IData)(vlTOPp->TestHarness__DOT__simdram__DOT_____05Fr_last_reg)) 
                                     & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_15__DOT__maybe_full)))));
    }
}

void VTestHarness::traceChgThis__664(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+7382);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(oldp+0,(((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_16__DOT__full)) 
                              & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_16_io_enq_valid))));
        vcdp->chgBit(oldp+1,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_16__DOT__ptr_match));
        vcdp->chgBit(oldp+2,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_16__DOT__ptr_match) 
                              & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_16__DOT__maybe_full)))));
        vcdp->chgBit(oldp+3,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_16__DOT__full));
        vcdp->chgBit(oldp+4,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_16__DOT__do_enq));
        vcdp->chgBit(oldp+5,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_16__DOT__do_deq));
        vcdp->chgBit(oldp+6,(((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_17__DOT__full)) 
                              & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_17_io_enq_valid))));
        vcdp->chgBit(oldp+7,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_17__DOT__ptr_match));
        vcdp->chgBit(oldp+8,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_17__DOT__ptr_match) 
                              & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_17__DOT__maybe_full)))));
        vcdp->chgBit(oldp+9,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_17__DOT__full));
        vcdp->chgBit(oldp+10,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_17__DOT__do_enq));
        vcdp->chgBit(oldp+11,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_17__DOT__do_deq));
        vcdp->chgBit(oldp+12,(((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_18__DOT__full)) 
                               & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_18_io_enq_valid))));
        vcdp->chgBit(oldp+13,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_18__DOT__ptr_match));
        vcdp->chgBit(oldp+14,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_18__DOT__ptr_match) 
                               & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_18__DOT__maybe_full)))));
        vcdp->chgBit(oldp+15,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_18__DOT__full));
        vcdp->chgBit(oldp+16,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_18__DOT__do_enq));
        vcdp->chgBit(oldp+17,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_18__DOT__do_deq));
        vcdp->chgBit(oldp+18,(((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_19__DOT__full)) 
                               & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_19_io_enq_valid))));
        vcdp->chgBit(oldp+19,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_19__DOT__ptr_match));
        vcdp->chgBit(oldp+20,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_19__DOT__ptr_match) 
                               & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_19__DOT__maybe_full)))));
        vcdp->chgBit(oldp+21,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_19__DOT__full));
        vcdp->chgBit(oldp+22,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_19__DOT__do_enq));
        vcdp->chgBit(oldp+23,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_19__DOT__do_deq));
        vcdp->chgBit(oldp+24,(((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_20__DOT__maybe_full)) 
                               & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_20_io_enq_valid))));
        vcdp->chgBit(oldp+25,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_20__DOT__do_enq));
        vcdp->chgBit(oldp+26,((0xfffU & ((((IData)(vlTOPp->TestHarness__DOT__simdram__DOT_____05Fb_valid_reg) 
                                           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_out_b_ready)) 
                                          & (((IData)(1U) 
                                              << (IData)(vlTOPp->TestHarness__DOT__simdram__DOT_____05Fb_id_reg)) 
                                             >> 4U)) 
                                         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_20__DOT__maybe_full)))));
        vcdp->chgBit(oldp+27,(((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_21__DOT__maybe_full)) 
                               & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_21_io_enq_valid))));
        vcdp->chgBit(oldp+28,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_21__DOT__do_enq));
        vcdp->chgBit(oldp+29,((0x7ffU & ((((IData)(vlTOPp->TestHarness__DOT__simdram__DOT_____05Fb_valid_reg) 
                                           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_out_b_ready)) 
                                          & (((IData)(1U) 
                                              << (IData)(vlTOPp->TestHarness__DOT__simdram__DOT_____05Fb_id_reg)) 
                                             >> 5U)) 
                                         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_21__DOT__maybe_full)))));
    }
}

void VTestHarness::traceChgThis__666(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+7412);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(oldp+0,(((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_22__DOT__maybe_full)) 
                              & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_22_io_enq_valid))));
        vcdp->chgBit(oldp+1,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_22__DOT__do_enq));
        vcdp->chgBit(oldp+2,((0x3ffU & ((((IData)(vlTOPp->TestHarness__DOT__simdram__DOT_____05Fb_valid_reg) 
                                          & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_out_b_ready)) 
                                         & (((IData)(1U) 
                                             << (IData)(vlTOPp->TestHarness__DOT__simdram__DOT_____05Fb_id_reg)) 
                                            >> 6U)) 
                                        & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_22__DOT__maybe_full)))));
        vcdp->chgBit(oldp+3,(((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_23__DOT__maybe_full)) 
                              & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_23_io_enq_valid))));
        vcdp->chgBit(oldp+4,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_23__DOT__do_enq));
        vcdp->chgBit(oldp+5,((0x1ffU & ((((IData)(vlTOPp->TestHarness__DOT__simdram__DOT_____05Fb_valid_reg) 
                                          & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_out_b_ready)) 
                                         & (((IData)(1U) 
                                             << (IData)(vlTOPp->TestHarness__DOT__simdram__DOT_____05Fb_id_reg)) 
                                            >> 7U)) 
                                        & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_23__DOT__maybe_full)))));
        vcdp->chgBit(oldp+6,(((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_24__DOT__maybe_full)) 
                              & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_24_io_enq_valid))));
        vcdp->chgBit(oldp+7,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_24__DOT__do_enq));
        vcdp->chgBit(oldp+8,((0xffU & ((((IData)(vlTOPp->TestHarness__DOT__simdram__DOT_____05Fb_valid_reg) 
                                         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_out_b_ready)) 
                                        & (((IData)(1U) 
                                            << (IData)(vlTOPp->TestHarness__DOT__simdram__DOT_____05Fb_id_reg)) 
                                           >> 8U)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_24__DOT__maybe_full)))));
        vcdp->chgBit(oldp+9,(((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_25__DOT__maybe_full)) 
                              & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_25_io_enq_valid))));
        vcdp->chgBit(oldp+10,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_25__DOT__do_enq));
        vcdp->chgBit(oldp+11,((0x7fU & ((((IData)(vlTOPp->TestHarness__DOT__simdram__DOT_____05Fb_valid_reg) 
                                          & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_out_b_ready)) 
                                         & (((IData)(1U) 
                                             << (IData)(vlTOPp->TestHarness__DOT__simdram__DOT_____05Fb_id_reg)) 
                                            >> 9U)) 
                                        & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_25__DOT__maybe_full)))));
        vcdp->chgBit(oldp+12,(((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_26__DOT__maybe_full)) 
                               & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_26_io_enq_valid))));
        vcdp->chgBit(oldp+13,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_26__DOT__do_enq));
        vcdp->chgBit(oldp+14,((0x3fU & ((((IData)(vlTOPp->TestHarness__DOT__simdram__DOT_____05Fb_valid_reg) 
                                          & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_out_b_ready)) 
                                         & (((IData)(1U) 
                                             << (IData)(vlTOPp->TestHarness__DOT__simdram__DOT_____05Fb_id_reg)) 
                                            >> 0xaU)) 
                                        & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_26__DOT__maybe_full)))));
        vcdp->chgBit(oldp+15,(((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_27__DOT__maybe_full)) 
                               & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_27_io_enq_valid))));
    }
}

void VTestHarness::traceChgThis__668(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+7428);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(oldp+0,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_27__DOT__do_enq));
        vcdp->chgBit(oldp+1,((0x1fU & ((((IData)(vlTOPp->TestHarness__DOT__simdram__DOT_____05Fb_valid_reg) 
                                         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_out_b_ready)) 
                                        & (((IData)(1U) 
                                            << (IData)(vlTOPp->TestHarness__DOT__simdram__DOT_____05Fb_id_reg)) 
                                           >> 0xbU)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_27__DOT__maybe_full)))));
        vcdp->chgBit(oldp+2,(((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_28__DOT__maybe_full)) 
                              & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_28_io_enq_valid))));
        vcdp->chgBit(oldp+3,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_28__DOT__do_enq));
        vcdp->chgBit(oldp+4,((0xfU & ((((IData)(vlTOPp->TestHarness__DOT__simdram__DOT_____05Fb_valid_reg) 
                                        & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_out_b_ready)) 
                                       & (((IData)(1U) 
                                           << (IData)(vlTOPp->TestHarness__DOT__simdram__DOT_____05Fb_id_reg)) 
                                          >> 0xcU)) 
                                      & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_28__DOT__maybe_full)))));
        vcdp->chgBit(oldp+5,(((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_29__DOT__maybe_full)) 
                              & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_29_io_enq_valid))));
        vcdp->chgBit(oldp+6,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_29__DOT__do_enq));
        vcdp->chgBit(oldp+7,((7U & ((((IData)(vlTOPp->TestHarness__DOT__simdram__DOT_____05Fb_valid_reg) 
                                      & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_out_b_ready)) 
                                     & (((IData)(1U) 
                                         << (IData)(vlTOPp->TestHarness__DOT__simdram__DOT_____05Fb_id_reg)) 
                                        >> 0xdU)) & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_29__DOT__maybe_full)))));
        vcdp->chgBit(oldp+8,(((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_30__DOT__maybe_full)) 
                              & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_30_io_enq_valid))));
        vcdp->chgBit(oldp+9,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_30__DOT__do_enq));
        vcdp->chgBit(oldp+10,((3U & ((((IData)(vlTOPp->TestHarness__DOT__simdram__DOT_____05Fb_valid_reg) 
                                       & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_out_b_ready)) 
                                      & (((IData)(1U) 
                                          << (IData)(vlTOPp->TestHarness__DOT__simdram__DOT_____05Fb_id_reg)) 
                                         >> 0xeU)) 
                                     & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_30__DOT__maybe_full)))));
        vcdp->chgBit(oldp+11,(((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_31__DOT__maybe_full)) 
                               & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_31_io_enq_valid))));
        vcdp->chgBit(oldp+12,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_31__DOT__do_enq));
        vcdp->chgBit(oldp+13,((1U & ((((IData)(vlTOPp->TestHarness__DOT__simdram__DOT_____05Fb_valid_reg) 
                                       & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_out_b_ready)) 
                                      & (((IData)(1U) 
                                          << (IData)(vlTOPp->TestHarness__DOT__simdram__DOT_____05Fb_id_reg)) 
                                         >> 0xfU)) 
                                     & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_31__DOT__maybe_full)))));
        vcdp->chgBit(oldp+14,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor_io_in_a_ready));
        vcdp->chgBit(oldp+15,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_valid));
        vcdp->chgCData(oldp+16,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_bits_size),3);
    }
}

void VTestHarness::traceChgThis__670(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+7445);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgCData(oldp+0,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source),5);
        vcdp->chgBit(oldp+1,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_bits_denied));
        vcdp->chgBit(oldp+2,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__deq_io_enq_valid));
        vcdp->chgBit(oldp+3,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__deq_io_enq_bits_last));
        vcdp->chgBit(oldp+4,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq_io_enq_valid));
        vcdp->chgCData(oldp+5,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq_io_enq_bits_id),5);
        vcdp->chgCData(oldp+6,((0xffU & (~ (0x7fffU 
                                            & (((IData)(0x7ffU) 
                                                << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_size)) 
                                               >> 3U))))),8);
        vcdp->chgCData(oldp+7,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq_io_enq_bits_size),3);
        vcdp->chgCData(oldp+8,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_size),4);
        vcdp->chgBit(oldp+9,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_ready));
        vcdp->chgBit(oldp+10,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_valid));
        vcdp->chgBit(oldp+11,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_bits_wen));
        vcdp->chgBit(oldp+12,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__stall));
        vcdp->chgBit(oldp+13,(((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__stall)) 
                               & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___bundleIn_0_a_ready_T_3))));
        vcdp->chgCData(oldp+14,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__beats1),3);
        vcdp->chgBit(oldp+15,(((1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__counter)) 
                               | (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__beats1)))));
        vcdp->chgCData(oldp+16,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id),5);
        vcdp->chgBit(oldp+17,((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__stall)) 
                                & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_0_a_valid)) 
                               & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___out_arw_valid_T_4))));
        vcdp->chgBit(oldp+18,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins));
        vcdp->chgBit(oldp+19,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_0_d_ready) 
                               & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins))));
        vcdp->chgBit(oldp+20,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_0_d_ready) 
                               & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)))));
        vcdp->chgBit(oldp+21,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                ? (IData)(vlTOPp->TestHarness__DOT__simdram__DOT_____05Fr_valid_reg)
                                : (IData)(vlTOPp->TestHarness__DOT__simdram__DOT_____05Fb_valid_reg))));
        vcdp->chgBit(oldp+22,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_d_corrupt));
        vcdp->chgCData(oldp+23,((7U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank_auto_in_r_bits_echo_tl_state_size))),3);
        vcdp->chgCData(oldp+24,((7U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank_auto_in_b_bits_echo_tl_state_size))),3);
        vcdp->chgBit(oldp+25,((1U & ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id)))));
        vcdp->chgBit(oldp+26,((1U & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id)) 
                                     >> 1U))));
        vcdp->chgBit(oldp+27,((1U & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id)) 
                                     >> 2U))));
    }
}

void VTestHarness::traceChgThis__672(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+7473);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(oldp+0,((1U & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id)) 
                                    >> 3U))));
        vcdp->chgBit(oldp+1,((1U & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id)) 
                                    >> 4U))));
        vcdp->chgBit(oldp+2,((1U & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id)) 
                                    >> 5U))));
        vcdp->chgBit(oldp+3,((1U & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id)) 
                                    >> 6U))));
        vcdp->chgBit(oldp+4,((1U & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id)) 
                                    >> 7U))));
        vcdp->chgBit(oldp+5,((1U & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id)) 
                                    >> 8U))));
        vcdp->chgBit(oldp+6,((1U & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id)) 
                                    >> 9U))));
        vcdp->chgBit(oldp+7,((1U & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id)) 
                                    >> 0xaU))));
        vcdp->chgBit(oldp+8,((1U & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id)) 
                                    >> 0xbU))));
        vcdp->chgBit(oldp+9,((1U & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id)) 
                                    >> 0xcU))));
        vcdp->chgBit(oldp+10,((1U & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id)) 
                                     >> 0xdU))));
        vcdp->chgBit(oldp+11,((1U & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id)) 
                                     >> 0xeU))));
        vcdp->chgBit(oldp+12,((1U & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id)) 
                                     >> 0xfU))));
        vcdp->chgBit(oldp+13,((1U & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id)) 
                                     >> 0x10U))));
        vcdp->chgBit(oldp+14,((1U & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id)) 
                                     >> 0x11U))));
    }
}

void VTestHarness::traceChgThis__674(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+7488);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(oldp+0,((1U & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id)) 
                                    >> 0x12U))));
        vcdp->chgBit(oldp+1,((1U & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id)) 
                                    >> 0x13U))));
        vcdp->chgCData(oldp+2,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount),5);
        vcdp->chgBit(oldp+3,((1U & ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount)))));
        vcdp->chgBit(oldp+4,((1U & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                                    >> 1U))));
        vcdp->chgBit(oldp+5,((1U & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                                    >> 2U))));
        vcdp->chgBit(oldp+6,((1U & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                                    >> 3U))));
        vcdp->chgBit(oldp+7,((1U & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                                    >> 4U))));
        vcdp->chgBit(oldp+8,((1U & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                                    >> 5U))));
        vcdp->chgBit(oldp+9,((1U & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                                    >> 6U))));
        vcdp->chgBit(oldp+10,((1U & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                                     >> 7U))));
        vcdp->chgBit(oldp+11,((1U & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                                     >> 8U))));
        vcdp->chgBit(oldp+12,((1U & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                                     >> 9U))));
        vcdp->chgBit(oldp+13,((1U & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                                     >> 0xaU))));
        vcdp->chgBit(oldp+14,((1U & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                                     >> 0xbU))));
        vcdp->chgBit(oldp+15,((1U & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                                     >> 0xcU))));
    }
}

void VTestHarness::traceChgThis__676(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+7504);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(oldp+0,((1U & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                                    >> 0xdU))));
        vcdp->chgBit(oldp+1,((1U & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                                    >> 0xeU))));
        vcdp->chgBit(oldp+2,((1U & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                                    >> 0xfU))));
        vcdp->chgBit(oldp+3,((1U & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                                    >> 0x10U))));
        vcdp->chgBit(oldp+4,((1U & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                                    >> 0x11U))));
        vcdp->chgBit(oldp+5,((1U & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                                    >> 0x12U))));
        vcdp->chgBit(oldp+6,((1U & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                                    >> 0x13U))));
        vcdp->chgBit(oldp+7,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last));
        vcdp->chgBit(oldp+8,((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id)) 
                              & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))));
        vcdp->chgBit(oldp+9,(((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                               & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                              & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))));
        vcdp->chgBit(oldp+10,(((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id)) 
                                >> 1U) & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))));
        vcdp->chgBit(oldp+11,((((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                                 >> 1U) & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                               & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))));
        vcdp->chgBit(oldp+12,(((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id)) 
                                >> 2U) & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))));
        vcdp->chgBit(oldp+13,((((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                                 >> 2U) & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                               & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))));
    }
}

void VTestHarness::traceChgThis__678(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+7518);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(oldp+0,(((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id)) 
                               >> 3U) & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))));
        vcdp->chgBit(oldp+1,((((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                                >> 3U) & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                              & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))));
        vcdp->chgBit(oldp+2,(((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id)) 
                               >> 4U) & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))));
        vcdp->chgBit(oldp+3,((((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                                >> 4U) & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                              & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))));
        vcdp->chgBit(oldp+4,(((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id)) 
                               >> 5U) & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))));
        vcdp->chgBit(oldp+5,((((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                                >> 5U) & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                              & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))));
        vcdp->chgBit(oldp+6,(((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id)) 
                               >> 6U) & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))));
        vcdp->chgBit(oldp+7,((((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                                >> 6U) & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                              & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))));
        vcdp->chgBit(oldp+8,(((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id)) 
                               >> 7U) & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))));
        vcdp->chgBit(oldp+9,((((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                                >> 7U) & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                              & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))));
        vcdp->chgBit(oldp+10,(((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id)) 
                                >> 8U) & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))));
    }
}

void VTestHarness::traceChgThis__680(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+7529);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(oldp+0,((((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                                >> 8U) & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                              & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))));
        vcdp->chgBit(oldp+1,(((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id)) 
                               >> 9U) & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))));
        vcdp->chgBit(oldp+2,((((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                                >> 9U) & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                              & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))));
        vcdp->chgBit(oldp+3,(((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id)) 
                               >> 0xaU) & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))));
        vcdp->chgBit(oldp+4,((((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                                >> 0xaU) & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                              & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))));
        vcdp->chgBit(oldp+5,(((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id)) 
                               >> 0xbU) & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))));
        vcdp->chgBit(oldp+6,((((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                                >> 0xbU) & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                              & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))));
        vcdp->chgBit(oldp+7,(((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id)) 
                               >> 0xcU) & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))));
        vcdp->chgBit(oldp+8,((((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                                >> 0xcU) & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                              & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))));
        vcdp->chgBit(oldp+9,(((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id)) 
                               >> 0xdU) & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))));
        vcdp->chgBit(oldp+10,((((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                                 >> 0xdU) & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                               & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))));
    }
}

void VTestHarness::traceChgThis__682(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+7540);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(oldp+0,(((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id)) 
                               >> 0xeU) & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))));
        vcdp->chgBit(oldp+1,((((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                                >> 0xeU) & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                              & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))));
        vcdp->chgBit(oldp+2,(((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id)) 
                               >> 0xfU) & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))));
        vcdp->chgBit(oldp+3,((((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                                >> 0xfU) & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                              & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))));
        vcdp->chgBit(oldp+4,(((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id)) 
                               >> 0x10U) & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))));
        vcdp->chgBit(oldp+5,((((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                                >> 0x10U) & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                              & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))));
        vcdp->chgBit(oldp+6,(((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id)) 
                               >> 0x11U) & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))));
        vcdp->chgBit(oldp+7,((((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                                >> 0x11U) & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                              & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))));
        vcdp->chgBit(oldp+8,(((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id)) 
                               >> 0x12U) & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))));
        vcdp->chgBit(oldp+9,((((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                                >> 0x12U) & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                              & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))));
        vcdp->chgBit(oldp+10,(((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id)) 
                                >> 0x13U) & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))));
    }
}

void VTestHarness::traceChgThis__684(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+7551);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(oldp+0,((((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                                >> 0x13U) & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                              & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))));
        vcdp->chgBit(oldp+1,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__mask_acc));
        vcdp->chgBit(oldp+2,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__mask_acc_1));
        vcdp->chgBit(oldp+3,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__mask_eq_2));
        vcdp->chgBit(oldp+4,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__mask_acc_2));
        vcdp->chgBit(oldp+5,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__mask_eq_3));
        vcdp->chgBit(oldp+6,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__mask_acc_3));
        vcdp->chgBit(oldp+7,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__mask_eq_4));
        vcdp->chgBit(oldp+8,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__mask_acc_4));
        vcdp->chgBit(oldp+9,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__mask_eq_5));
        vcdp->chgBit(oldp+10,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__mask_acc_5));
        vcdp->chgBit(oldp+11,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__mask_eq_2) 
                               & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_address))));
        vcdp->chgBit(oldp+12,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__mask_acc_2) 
                               | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__mask_eq_2) 
                                  & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_address)))));
        vcdp->chgBit(oldp+13,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__mask_eq_2) 
                               & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_address)));
        vcdp->chgBit(oldp+14,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__mask_acc_2) 
                               | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__mask_eq_2) 
                                  & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_address))));
        vcdp->chgBit(oldp+15,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__mask_eq_3) 
                               & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_address))));
        vcdp->chgBit(oldp+16,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__mask_acc_3) 
                               | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__mask_eq_3) 
                                  & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_address)))));
        vcdp->chgBit(oldp+17,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__mask_eq_3) 
                               & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_address)));
        vcdp->chgBit(oldp+18,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__mask_acc_3) 
                               | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__mask_eq_3) 
                                  & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_address))));
        vcdp->chgBit(oldp+19,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__mask_eq_4) 
                               & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_address))));
    }
}

void VTestHarness::traceChgThis__686(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+7571);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(oldp+0,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__mask_acc_4) 
                              | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__mask_eq_4) 
                                 & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_address)))));
        vcdp->chgBit(oldp+1,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__mask_eq_4) 
                              & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_address)));
        vcdp->chgBit(oldp+2,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__mask_acc_4) 
                              | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__mask_eq_4) 
                                 & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_address))));
        vcdp->chgBit(oldp+3,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__mask_eq_5) 
                              & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_address))));
        vcdp->chgBit(oldp+4,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__mask_acc_5) 
                              | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__mask_eq_5) 
                                 & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_address)))));
        vcdp->chgBit(oldp+5,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__mask_eq_5) 
                              & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_address)));
        vcdp->chgBit(oldp+6,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__mask_acc_5) 
                              | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__mask_eq_5) 
                                 & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_address))));
        vcdp->chgCData(oldp+7,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__mask),8);
        vcdp->chgCData(oldp+8,((7U & (~ (0x3ffU & (
                                                   ((IData)(0x3fU) 
                                                    << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_bits_size)) 
                                                   >> 3U))))),3);
        vcdp->chgCData(oldp+9,((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT___a_first_T) 
                                 & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter_1)))
                                 ? (1U | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode) 
                                          << 1U)) : 0U)),4);
        vcdp->chgCData(oldp+10,((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT___a_first_T) 
                                  & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter_1)))
                                  ? (1U | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_size) 
                                           << 1U)) : 0U)),4);
        vcdp->chgBit(oldp+11,((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_0_a_valid) 
                                & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter_1))) 
                               & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_source) 
                                  == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source)))));
    }
}

void VTestHarness::traceChgThis__688(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+7583);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Variables
    // Begin mtask footprint all: 
    WData/*95:0*/ __Vtemp23190[3];
    WData/*95:0*/ __Vtemp23191[3];
    WData/*95:0*/ __Vtemp23194[3];
    WData/*95:0*/ __Vtemp23197[3];
    WData/*95:0*/ __Vtemp23198[3];
    WData/*287:0*/ __Vtemp23201[9];
    WData/*287:0*/ __Vtemp23202[9];
    WData/*95:0*/ __Vtemp23208[3];
    // Body
    {
        __Vtemp23190[0U] = (7U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                                  >> 1U));
        __Vtemp23190[1U] = 0U;
        __Vtemp23190[2U] = 0U;
        VL_EXTEND_WW(80,79, __Vtemp23191, __Vtemp23190);
        vcdp->chgCData(oldp+0,((0xfU & __Vtemp23191[0U])),4);
        VL_SHIFTR_WWI(80,80,8, __Vtemp23194, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__inflight_sizes, 
                      ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source) 
                       << 2U));
        __Vtemp23197[0U] = (7U & (__Vtemp23194[0U] 
                                  >> 1U));
        __Vtemp23197[1U] = 0U;
        __Vtemp23197[2U] = 0U;
        VL_EXTEND_WW(80,79, __Vtemp23198, __Vtemp23197);
        vcdp->chgCData(oldp+1,((0xfU & __Vtemp23198[0U])),4);
        vcdp->chgIData(oldp+2,((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_0_a_valid) 
                                 & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter_1)))
                                 ? (0xfffffU & ((IData)(1U) 
                                                << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_source)))
                                 : 0U)),20);
        vcdp->chgIData(oldp+3,(((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                                  & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__d_first_counter_1))) 
                                 & (6U != ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                            ? 1U : 0U)))
                                 ? (0xfffffU & ((IData)(1U) 
                                                << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source)))
                                 : 0U)),20);
        vcdp->chgIData(oldp+4,((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT___a_first_T) 
                                 & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter_1)))
                                 ? (0xfffffU & ((IData)(1U) 
                                                << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_source)))
                                 : 0U)),20);
        vcdp->chgIData(oldp+5,(((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT___d_first_T) 
                                  & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__d_first_counter_1))) 
                                 & (6U != ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                            ? 1U : 0U)))
                                 ? (0xfffffU & ((IData)(1U) 
                                                << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source)))
                                 : 0U)),20);
        VL_EXTEND_WI(259,4, __Vtemp23201, (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT___a_first_T) 
                                            & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter_1)))
                                            ? (1U | 
                                               ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode) 
                                                << 1U))
                                            : 0U));
        VL_SHIFTL_WWI(259,259,8, __Vtemp23202, __Vtemp23201, 
                      ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_source) 
                       << 2U));
        __Vtemp23208[0U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT___a_first_T) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter_1)))
                             ? __Vtemp23202[0U] : 0U);
        __Vtemp23208[1U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT___a_first_T) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter_1)))
                             ? __Vtemp23202[1U] : 0U);
        __Vtemp23208[2U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT___a_first_T) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter_1)))
                             ? (0xffffU & __Vtemp23202[2U])
                             : 0U);
        vcdp->chgWData(oldp+6,(__Vtemp23208),80);
    }
}

void VTestHarness::traceChgThis__690(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+7592);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Variables
    // Begin mtask footprint all: 
    WData/*95:0*/ __Vtemp23241[3];
    WData/*287:0*/ __Vtemp23244[9];
    WData/*287:0*/ __Vtemp23245[9];
    WData/*95:0*/ __Vtemp23251[3];
    WData/*95:0*/ __Vtemp23254[3];
    WData/*95:0*/ __Vtemp23257[3];
    WData/*95:0*/ __Vtemp23258[3];
    WData/*287:0*/ __Vtemp23261[9];
    WData/*287:0*/ __Vtemp23262[9];
    WData/*95:0*/ __Vtemp23268[3];
    // Body
    {
        __Vtemp23241[0U] = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT___GEN_23[0U];
        __Vtemp23241[1U] = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT___GEN_23[1U];
        __Vtemp23241[2U] = (0xffffU & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT___GEN_23[2U]);
        vcdp->chgWData(oldp+0,(__Vtemp23241),80);
        VL_EXTEND_WI(259,4, __Vtemp23244, (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT___a_first_T) 
                                            & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter_1)))
                                            ? (1U | 
                                               ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_size) 
                                                << 1U))
                                            : 0U));
        VL_SHIFTL_WWI(259,259,8, __Vtemp23245, __Vtemp23244, 
                      ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_source) 
                       << 2U));
        __Vtemp23251[0U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT___a_first_T) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter_1)))
                             ? __Vtemp23245[0U] : 0U);
        __Vtemp23251[1U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT___a_first_T) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter_1)))
                             ? __Vtemp23245[1U] : 0U);
        __Vtemp23251[2U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT___a_first_T) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter_1)))
                             ? (0xffffU & __Vtemp23245[2U])
                             : 0U);
        vcdp->chgWData(oldp+3,(__Vtemp23251),80);
        VL_SHIFTR_WWI(80,80,8, __Vtemp23254, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__inflight_sizes_1, 
                      ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source) 
                       << 2U));
        __Vtemp23257[0U] = (7U & (__Vtemp23254[0U] 
                                  >> 1U));
        __Vtemp23257[1U] = 0U;
        __Vtemp23257[2U] = 0U;
        VL_EXTEND_WW(80,79, __Vtemp23258, __Vtemp23257);
        vcdp->chgCData(oldp+6,((0xfU & __Vtemp23258[0U])),4);
        vcdp->chgIData(oldp+7,(((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT___d_first_T) 
                                  & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__d_first_counter_2))) 
                                 & (6U == ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                            ? 1U : 0U)))
                                 ? (0xfffffU & ((IData)(1U) 
                                                << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source)))
                                 : 0U)),20);
        __Vtemp23261[0U] = 0xfU;
        __Vtemp23261[1U] = 0U;
        __Vtemp23261[2U] = 0U;
        __Vtemp23261[3U] = 0U;
        __Vtemp23261[4U] = 0U;
        __Vtemp23261[5U] = 0U;
        __Vtemp23261[6U] = 0U;
        __Vtemp23261[7U] = 0U;
        __Vtemp23261[8U] = 0U;
        VL_SHIFTL_WWI(271,271,8, __Vtemp23262, __Vtemp23261, 
                      ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source) 
                       << 2U));
        __Vtemp23268[0U] = ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT___d_first_T) 
                              & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__d_first_counter_2))) 
                             & (6U == ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                        ? 1U : 0U)))
                             ? __Vtemp23262[0U] : 0U);
        __Vtemp23268[1U] = ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT___d_first_T) 
                              & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__d_first_counter_2))) 
                             & (6U == ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                        ? 1U : 0U)))
                             ? __Vtemp23262[1U] : 0U);
        __Vtemp23268[2U] = ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT___d_first_T) 
                              & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__d_first_counter_2))) 
                             & (6U == ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                        ? 1U : 0U)))
                             ? (0xffffU & __Vtemp23262[2U])
                             : 0U);
        vcdp->chgWData(oldp+8,(__Vtemp23268),80);
        vcdp->chgBit(oldp+11,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__deq__DOT__maybe_full)
                                ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__deq__DOT___do_enq_T)
                                : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__deq__DOT___GEN_11))));
        vcdp->chgBit(oldp+12,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__deq__DOT__maybe_full) 
                               & ((IData)(vlTOPp->TestHarness__DOT__simdram__DOT_____05Fw_ready_reg) 
                                  & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__deq_io_deq_valid)))));
    }
}

void VTestHarness::traceChgThis__692(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+7605);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(oldp+0,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__maybe_full)
                               ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T)
                               : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT___GEN_20))));
        vcdp->chgBit(oldp+1,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__maybe_full) 
                              & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_ready) 
                                 & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_valid)))));
        vcdp->chgBit(oldp+2,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__monitor_io_in_a_ready));
        vcdp->chgCData(oldp+3,((0xfU & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__nextFree))),4);
        vcdp->chgBit(oldp+4,(((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__a_first_counter)) 
                              & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT___a_first_T))));
        vcdp->chgIData(oldp+5,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__nextFreeOH),17);
        vcdp->chgBit(oldp+6,((1U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__nextFreeOH 
                                    >> 0x10U))));
        vcdp->chgSData(oldp+7,((0xffffU & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__nextFreeOH)),16);
        vcdp->chgCData(oldp+8,((0xffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT___nextFree_T_1) 
                                         >> 8U))),8);
        vcdp->chgCData(oldp+9,((0xffU & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT___nextFree_T_1))),8);
        vcdp->chgCData(oldp+10,((0xfU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT___nextFree_T_3) 
                                         >> 4U))),4);
        vcdp->chgCData(oldp+11,((0xfU & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT___nextFree_T_3))),4);
        vcdp->chgCData(oldp+12,((3U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT___nextFree_T_5) 
                                       >> 2U))),2);
        vcdp->chgCData(oldp+13,((3U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT___nextFree_T_5))),2);
        vcdp->chgCData(oldp+14,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__nextFree),5);
        vcdp->chgBit(oldp+15,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__block));
        vcdp->chgBit(oldp+16,((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleOut_0_a_q__DOT__full)) 
                                     & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__block))))));
        vcdp->chgBit(oldp+17,(((1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__d_last_counter)) 
                               | (0U == ((1U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))
                                          ? (7U & (~ 
                                                   (0x3ffU 
                                                    & (((IData)(0x3fU) 
                                                        << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                                                       >> 3U))))
                                          : 0U)))));
        vcdp->chgBit(oldp+18,((((1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__d_last_counter)) 
                                | (0U == ((1U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))
                                           ? (7U & 
                                              (~ (0x3ffU 
                                                  & (((IData)(0x3fU) 
                                                      << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                                                     >> 3U))))
                                           : 0U))) 
                               & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT___d_last_T))));
    }
}

void VTestHarness::traceChgThis__694(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+7624);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgIData(oldp+0,((((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__a_first_counter)) 
                                 & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT___a_first_T))
                                 ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__nextFreeOH
                                 : 0U)),17);
        vcdp->chgSData(oldp+1,(((((1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__d_last_counter)) 
                                  | (0U == ((1U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))
                                             ? (7U 
                                                & (~ 
                                                   (0x3ffU 
                                                    & (((IData)(0x3fU) 
                                                        << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                                                       >> 3U))))
                                             : 0U))) 
                                 & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT___d_last_T))
                                 ? (0xffffU & ((IData)(1U) 
                                               << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)))
                                 : 0U)),16);
        vcdp->chgBit(oldp+2,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__monitor__DOT__mask_acc));
        vcdp->chgBit(oldp+3,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__monitor__DOT__mask_acc_1));
        vcdp->chgBit(oldp+4,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__monitor__DOT__mask_eq_2));
        vcdp->chgBit(oldp+5,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__monitor__DOT__mask_acc_2));
        vcdp->chgBit(oldp+6,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__monitor__DOT__mask_eq_3));
        vcdp->chgBit(oldp+7,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__monitor__DOT__mask_acc_3));
        vcdp->chgBit(oldp+8,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__monitor__DOT__mask_eq_4));
        vcdp->chgBit(oldp+9,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__monitor__DOT__mask_acc_4));
        vcdp->chgBit(oldp+10,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__monitor__DOT__mask_eq_5));
        vcdp->chgBit(oldp+11,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__monitor__DOT__mask_acc_5));
        vcdp->chgBit(oldp+12,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__monitor__DOT__mask_eq_2) 
                               & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_address))));
        vcdp->chgBit(oldp+13,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__monitor__DOT__mask_acc_2) 
                               | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__monitor__DOT__mask_eq_2) 
                                  & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_address)))));
        vcdp->chgBit(oldp+14,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__monitor__DOT__mask_eq_2) 
                               & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_address)));
        vcdp->chgBit(oldp+15,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__monitor__DOT__mask_acc_2) 
                               | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__monitor__DOT__mask_eq_2) 
                                  & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_address))));
        vcdp->chgBit(oldp+16,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__monitor__DOT__mask_eq_3) 
                               & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_address))));
        vcdp->chgBit(oldp+17,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__monitor__DOT__mask_acc_3) 
                               | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__monitor__DOT__mask_eq_3) 
                                  & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_address)))));
    }
}

void VTestHarness::traceChgThis__696(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+7642);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(oldp+0,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__monitor__DOT__mask_eq_3) 
                              & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_address)));
        vcdp->chgBit(oldp+1,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__monitor__DOT__mask_acc_3) 
                              | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__monitor__DOT__mask_eq_3) 
                                 & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_address))));
        vcdp->chgBit(oldp+2,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__monitor__DOT__mask_eq_4) 
                              & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_address))));
        vcdp->chgBit(oldp+3,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__monitor__DOT__mask_acc_4) 
                              | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__monitor__DOT__mask_eq_4) 
                                 & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_address)))));
        vcdp->chgBit(oldp+4,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__monitor__DOT__mask_eq_4) 
                              & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_address)));
        vcdp->chgBit(oldp+5,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__monitor__DOT__mask_acc_4) 
                              | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__monitor__DOT__mask_eq_4) 
                                 & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_address))));
        vcdp->chgBit(oldp+6,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__monitor__DOT__mask_eq_5) 
                              & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_address))));
        vcdp->chgBit(oldp+7,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__monitor__DOT__mask_acc_5) 
                              | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__monitor__DOT__mask_eq_5) 
                                 & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_address)))));
        vcdp->chgBit(oldp+8,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__monitor__DOT__mask_eq_5) 
                              & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_address)));
        vcdp->chgBit(oldp+9,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__monitor__DOT__mask_acc_5) 
                              | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__monitor__DOT__mask_eq_5) 
                                 & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_address))));
        vcdp->chgCData(oldp+10,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__monitor__DOT__mask),8);
        vcdp->chgCData(oldp+11,((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__monitor__DOT___a_first_T) 
                                  & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__monitor__DOT__a_first_counter_1)))
                                  ? (1U | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode) 
                                           << 1U)) : 0U)),4);
        vcdp->chgCData(oldp+12,((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__monitor__DOT___a_first_T) 
                                  & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__monitor__DOT__a_first_counter_1)))
                                  ? (1U | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_size) 
                                           << 1U)) : 0U)),4);
    }
}

void VTestHarness::traceChgThis__698(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+7655);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Variables
    // Begin mtask footprint all: 
    WData/*95:0*/ __Vtemp23286[3];
    WData/*95:0*/ __Vtemp23287[3];
    WData/*95:0*/ __Vtemp23290[3];
    WData/*95:0*/ __Vtemp23293[3];
    WData/*95:0*/ __Vtemp23294[3];
    // Body
    {
        vcdp->chgBit(oldp+0,((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                               & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__monitor__DOT__a_first_counter_1))) 
                              & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_source) 
                                 == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__sourceIdMap_bundleIn_0_d_bits_source_MPORT_data)))));
        __Vtemp23286[0U] = (7U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                                  >> 1U));
        __Vtemp23286[1U] = 0U;
        __Vtemp23286[2U] = 0U;
        VL_EXTEND_WW(80,79, __Vtemp23287, __Vtemp23286);
        vcdp->chgCData(oldp+1,((0xfU & __Vtemp23287[0U])),4);
        VL_SHIFTR_WWI(80,80,8, __Vtemp23290, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__monitor__DOT__inflight_sizes, 
                      ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__sourceIdMap_bundleIn_0_d_bits_source_MPORT_data) 
                       << 2U));
        __Vtemp23293[0U] = (7U & (__Vtemp23290[0U] 
                                  >> 1U));
        __Vtemp23293[1U] = 0U;
        __Vtemp23293[2U] = 0U;
        VL_EXTEND_WW(80,79, __Vtemp23294, __Vtemp23293);
        vcdp->chgCData(oldp+2,((0xfU & __Vtemp23294[0U])),4);
        vcdp->chgIData(oldp+3,((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                                 & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__monitor__DOT__a_first_counter_1)))
                                 ? (0xfffffU & ((IData)(1U) 
                                                << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_source)))
                                 : 0U)),20);
        vcdp->chgIData(oldp+4,(((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                                  & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__monitor__DOT__d_first_counter_1))) 
                                 & (6U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                                 ? (0xfffffU & ((IData)(1U) 
                                                << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__sourceIdMap_bundleIn_0_d_bits_source_MPORT_data)))
                                 : 0U)),20);
        vcdp->chgIData(oldp+5,((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__monitor__DOT___a_first_T) 
                                 & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__monitor__DOT__a_first_counter_1)))
                                 ? (0xfffffU & ((IData)(1U) 
                                                << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_source)))
                                 : 0U)),20);
        vcdp->chgIData(oldp+6,(((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__monitor__DOT___d_first_T) 
                                  & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__monitor__DOT__d_first_counter_1))) 
                                 & (6U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                                 ? (0xfffffU & ((IData)(1U) 
                                                << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__sourceIdMap_bundleIn_0_d_bits_source_MPORT_data)))
                                 : 0U)),20);
    }
}

void VTestHarness::traceChgThis__700(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+7662);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Variables
    // Begin mtask footprint all: 
    WData/*287:0*/ __Vtemp23337[9];
    WData/*287:0*/ __Vtemp23338[9];
    WData/*95:0*/ __Vtemp23344[3];
    WData/*95:0*/ __Vtemp23347[3];
    WData/*287:0*/ __Vtemp23350[9];
    WData/*287:0*/ __Vtemp23351[9];
    WData/*95:0*/ __Vtemp23357[3];
    WData/*95:0*/ __Vtemp23360[3];
    WData/*95:0*/ __Vtemp23363[3];
    WData/*95:0*/ __Vtemp23364[3];
    WData/*287:0*/ __Vtemp23367[9];
    WData/*287:0*/ __Vtemp23368[9];
    WData/*95:0*/ __Vtemp23374[3];
    // Body
    {
        VL_EXTEND_WI(259,4, __Vtemp23337, (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__monitor__DOT___a_first_T) 
                                            & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__monitor__DOT__a_first_counter_1)))
                                            ? (1U | 
                                               ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode) 
                                                << 1U))
                                            : 0U));
        VL_SHIFTL_WWI(259,259,8, __Vtemp23338, __Vtemp23337, 
                      ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_source) 
                       << 2U));
        __Vtemp23344[0U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__monitor__DOT___a_first_T) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__monitor__DOT__a_first_counter_1)))
                             ? __Vtemp23338[0U] : 0U);
        __Vtemp23344[1U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__monitor__DOT___a_first_T) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__monitor__DOT__a_first_counter_1)))
                             ? __Vtemp23338[1U] : 0U);
        __Vtemp23344[2U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__monitor__DOT___a_first_T) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__monitor__DOT__a_first_counter_1)))
                             ? (0xffffU & __Vtemp23338[2U])
                             : 0U);
        vcdp->chgWData(oldp+0,(__Vtemp23344),80);
        __Vtemp23347[0U] = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__monitor__DOT___GEN_23[0U];
        __Vtemp23347[1U] = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__monitor__DOT___GEN_23[1U];
        __Vtemp23347[2U] = (0xffffU & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__monitor__DOT___GEN_23[2U]);
        vcdp->chgWData(oldp+3,(__Vtemp23347),80);
        VL_EXTEND_WI(259,4, __Vtemp23350, (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__monitor__DOT___a_first_T) 
                                            & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__monitor__DOT__a_first_counter_1)))
                                            ? (1U | 
                                               ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_size) 
                                                << 1U))
                                            : 0U));
        VL_SHIFTL_WWI(259,259,8, __Vtemp23351, __Vtemp23350, 
                      ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_source) 
                       << 2U));
        __Vtemp23357[0U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__monitor__DOT___a_first_T) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__monitor__DOT__a_first_counter_1)))
                             ? __Vtemp23351[0U] : 0U);
        __Vtemp23357[1U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__monitor__DOT___a_first_T) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__monitor__DOT__a_first_counter_1)))
                             ? __Vtemp23351[1U] : 0U);
        __Vtemp23357[2U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__monitor__DOT___a_first_T) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__monitor__DOT__a_first_counter_1)))
                             ? (0xffffU & __Vtemp23351[2U])
                             : 0U);
        vcdp->chgWData(oldp+6,(__Vtemp23357),80);
        VL_SHIFTR_WWI(80,80,8, __Vtemp23360, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__monitor__DOT__inflight_sizes_1, 
                      ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__sourceIdMap_bundleIn_0_d_bits_source_MPORT_data) 
                       << 2U));
        __Vtemp23363[0U] = (7U & (__Vtemp23360[0U] 
                                  >> 1U));
        __Vtemp23363[1U] = 0U;
        __Vtemp23363[2U] = 0U;
        VL_EXTEND_WW(80,79, __Vtemp23364, __Vtemp23363);
        vcdp->chgCData(oldp+9,((0xfU & __Vtemp23364[0U])),4);
        vcdp->chgIData(oldp+10,(((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__monitor__DOT___d_first_T) 
                                   & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__monitor__DOT__d_first_counter_2))) 
                                  & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                                  ? (0xfffffU & ((IData)(1U) 
                                                 << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__sourceIdMap_bundleIn_0_d_bits_source_MPORT_data)))
                                  : 0U)),20);
        __Vtemp23367[0U] = 0xfU;
        __Vtemp23367[1U] = 0U;
        __Vtemp23367[2U] = 0U;
        __Vtemp23367[3U] = 0U;
        __Vtemp23367[4U] = 0U;
        __Vtemp23367[5U] = 0U;
        __Vtemp23367[6U] = 0U;
        __Vtemp23367[7U] = 0U;
        __Vtemp23367[8U] = 0U;
        VL_SHIFTL_WWI(271,271,8, __Vtemp23368, __Vtemp23367, 
                      ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__sourceIdMap_bundleIn_0_d_bits_source_MPORT_data) 
                       << 2U));
        __Vtemp23374[0U] = ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__monitor__DOT___d_first_T) 
                              & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__monitor__DOT__d_first_counter_2))) 
                             & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                             ? __Vtemp23368[0U] : 0U);
        __Vtemp23374[1U] = ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__monitor__DOT___d_first_T) 
                              & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__monitor__DOT__d_first_counter_2))) 
                             & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                             ? __Vtemp23368[1U] : 0U);
        __Vtemp23374[2U] = ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__monitor__DOT___d_first_T) 
                              & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__monitor__DOT__d_first_counter_2))) 
                             & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                             ? (0xffffU & __Vtemp23368[2U])
                             : 0U);
        vcdp->chgWData(oldp+11,(__Vtemp23374),80);
    }
}

void VTestHarness::traceChgThis__702(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+7676);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Variables
    // Begin mtask footprint all: 
    WData/*127:0*/ __Vtemp23378[4];
    // Body
    {
        vcdp->chgBit(oldp+0,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkA_io_a_ready));
        vcdp->chgBit(oldp+1,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__bundleOut_0_a_q_io_deq_valid));
        vcdp->chgCData(oldp+2,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__bundleOut_0_a_q_io_deq_bits_opcode),3);
        vcdp->chgCData(oldp+3,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__bundleOut_0_a_q_io_deq_bits_param),3);
        vcdp->chgCData(oldp+4,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__bundleOut_0_a_q_io_deq_bits_size),3);
        vcdp->chgCData(oldp+5,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__bundleOut_0_a_q_io_deq_bits_source),6);
        vcdp->chgIData(oldp+6,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__bundleOut_0_a_q_io_deq_bits_address),32);
        vcdp->chgSData(oldp+7,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__bundleOut_0_a_q__DOT__maybe_full)
                                 ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__bundleOut_0_a_q__DOT__ram_mask
                                [0U] : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_a_bits_mask))),16);
        __Vtemp23378[0U] = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__bundleOut_0_a_q__DOT__maybe_full)
                             ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__bundleOut_0_a_q__DOT__ram_data
                            [0U][0U] : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_a_bits_data[0U]);
        __Vtemp23378[1U] = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__bundleOut_0_a_q__DOT__maybe_full)
                             ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__bundleOut_0_a_q__DOT__ram_data
                            [0U][1U] : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_a_bits_data[1U]);
        __Vtemp23378[2U] = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__bundleOut_0_a_q__DOT__maybe_full)
                             ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__bundleOut_0_a_q__DOT__ram_data
                            [0U][2U] : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_a_bits_data[2U]);
        __Vtemp23378[3U] = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__bundleOut_0_a_q__DOT__maybe_full)
                             ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__bundleOut_0_a_q__DOT__ram_data
                            [0U][3U] : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_a_bits_data[3U]);
        vcdp->chgWData(oldp+8,(__Vtemp23378),128);
        vcdp->chgBit(oldp+12,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__bundleOut_0_a_q__DOT__maybe_full)
                                ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt
                               [0U] : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_a_bits_corrupt))));
        vcdp->chgCData(oldp+13,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD_io_d_bits_opcode),3);
        vcdp->chgCData(oldp+14,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD_io_d_bits_param),2);
        vcdp->chgWData(oldp+15,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD_io_d_bits_data),128);
        vcdp->chgBit(oldp+19,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD_io_d_bits_corrupt));
        vcdp->chgBit(oldp+20,((1U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__toD)
                                      ? (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__q_1__DOT__full))
                                      : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__out_1_ready)))));
        vcdp->chgBit(oldp+21,((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__io_a_q__DOT__empty)))));
        vcdp->chgCData(oldp+22,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__io_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data),3);
        vcdp->chgCData(oldp+23,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__io_a_q__DOT__ram_param_io_deq_bits_MPORT_data),3);
        vcdp->chgCData(oldp+24,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__io_a_q__DOT__ram_size_io_deq_bits_MPORT_data),3);
        vcdp->chgCData(oldp+25,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__io_a_q__DOT__ram_source_io_deq_bits_MPORT_data),4);
        vcdp->chgIData(oldp+26,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2_auto_out_a_bits_address),32);
        vcdp->chgCData(oldp+27,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__io_a_q__DOT__ram_mask_io_deq_bits_MPORT_data),8);
        vcdp->chgBit(oldp+28,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_in_c_ready));
        vcdp->chgBit(oldp+29,((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__empty)))));
        vcdp->chgCData(oldp+30,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_opcode_io_deq_bits_MPORT_data),3);
        vcdp->chgCData(oldp+31,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_param_io_deq_bits_MPORT_data),3);
        vcdp->chgCData(oldp+32,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_size_io_deq_bits_MPORT_data),3);
        vcdp->chgCData(oldp+33,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_source_io_deq_bits_MPORT_data),4);
        vcdp->chgIData(oldp+34,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2_auto_out_c_bits_address),32);
        vcdp->chgBit(oldp+35,((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT__full)))));
        vcdp->chgBit(oldp+36,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_in_d_valid));
        vcdp->chgCData(oldp+37,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_144) 
                                 | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_143))),3);
        vcdp->chgCData(oldp+38,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_139) 
                                 | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_138))),2);
        vcdp->chgCData(oldp+39,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_134) 
                                 | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_133))),3);
        vcdp->chgCData(oldp+40,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_129) 
                                 | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_128))),4);
        vcdp->chgBit(oldp+41,(((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__muxStateEarly_1_0) 
                                 & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_in_d_bits_denied)) 
                                | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__muxStateEarly_1_1) 
                                   & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__q__DOT__ram_denied_io_deq_bits_MPORT_data))) 
                               | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__muxStateEarly_1_2) 
                                  & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__q_1__DOT__ram_denied_io_deq_bits_MPORT_data)))));
    }
}

void VTestHarness::traceChgThis__704(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+7718);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgQData(oldp+0,(((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__muxStateEarly_1_0)
                                   ? (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__muxStateEarly_0)
                                        ? vlTOPp->TestHarness__DOT__simdram__DOT_____05Fr_data_reg
                                        : VL_ULL(0)) 
                                      | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__muxStateEarly_1)
                                          ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_data
                                         [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value_1]
                                          : VL_ULL(0)))
                                   : VL_ULL(0)) | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__muxStateEarly_1_1)
                                                    ? 
                                                   vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__q__DOT__ram_data
                                                   [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__q__DOT__value_1]
                                                    : VL_ULL(0))) 
                                | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__muxStateEarly_1_2)
                                    ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__q_1__DOT__ram_data
                                   [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__q_1__DOT__value_1]
                                    : VL_ULL(0)))),64);
        vcdp->chgBit(oldp+2,(((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__muxStateEarly_1_0) 
                                & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_in_d_bits_corrupt)) 
                               | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__muxStateEarly_1_1) 
                                  & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__q__DOT__ram_corrupt
                                  [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__q__DOT__value_1])) 
                              | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__muxStateEarly_1_2) 
                                 & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__q_1__DOT__ram_corrupt
                                 [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__q_1__DOT__value_1]))));
        vcdp->chgBit(oldp+3,((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceE__DOT__io_e_q__DOT__empty)))));
        vcdp->chgCData(oldp+4,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceE__DOT__io_e_q__DOT__ram_sink_io_deq_bits_MPORT_data),3);
        vcdp->chgIData(oldp+5,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_io_in_b_bits_address),32);
        vcdp->chgBit(oldp+6,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1_io_in_a_ready));
        vcdp->chgBit(oldp+7,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1_io_in_d_valid));
        vcdp->chgBit(oldp+8,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_back_io_enq_valid));
        vcdp->chgBit(oldp+9,(((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__maybe_full)) 
                              & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_oready))));
        vcdp->chgIData(oldp+10,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceB_io_b_bits_address),32);
        vcdp->chgIData(oldp+11,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__io_a_q__DOT__ram_address_io_deq_bits_MPORT_data),32);
        vcdp->chgIData(oldp+12,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_address_io_deq_bits_MPORT_data),32);
        vcdp->chgBit(oldp+13,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0_io_req_valid));
        vcdp->chgCData(oldp+14,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_oindex),2);
        vcdp->chgBit(oldp+15,((1U & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_oindex)) 
                                     >> 3U))));
        vcdp->chgBit(oldp+16,((1U & (((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_back__DOT__maybe_full) 
                                        & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__maybe_full))) 
                                       & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_back__DOT__ram_read
                                          [0U])) & 
                                      (((IData)(1U) 
                                        << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_oindex)) 
                                       >> 3U)) & (0U 
                                                  == 
                                                  (0x1b7U 
                                                   & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_back__DOT__ram_index
                                                   [0U]))))));
    }
}

void VTestHarness::traceChgThis__706(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+7735);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgQData(oldp+0,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_backMask),64);
        vcdp->chgBit(oldp+2,((0xffffffffU == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_backMask))));
        vcdp->chgBit(oldp+3,((1U & ((((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_back__DOT__maybe_full) 
                                        & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__maybe_full))) 
                                       & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_back__DOT__ram_read
                                          [0U])) & 
                                      (((IData)(1U) 
                                        << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_oindex)) 
                                       >> 3U)) & (0U 
                                                  == 
                                                  (0x1b7U 
                                                   & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_back__DOT__ram_index
                                                   [0U]))) 
                                    & (0xffffffffU 
                                       == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_backMask))))));
        vcdp->chgBit(oldp+4,((1U & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_oindex)) 
                                    >> 2U))));
        vcdp->chgBit(oldp+5,((3U & (((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_back__DOT__maybe_full) 
                                       & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__maybe_full))) 
                                      & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_back__DOT__ram_read
                                         [0U])) & (
                                                   ((IData)(1U) 
                                                    << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_oindex)) 
                                                   >> 2U)) 
                                    & (0U == (0x1b7U 
                                              & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_back__DOT__ram_index
                                              [0U]))))));
        vcdp->chgBit(oldp+6,((VL_ULL(0xffffffffffffffff) 
                              == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_backMask)));
        vcdp->chgBit(oldp+7,((3U & ((((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_back__DOT__maybe_full) 
                                        & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__maybe_full))) 
                                       & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_back__DOT__ram_read
                                          [0U])) & 
                                      (((IData)(1U) 
                                        << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_oindex)) 
                                       >> 2U)) & (0U 
                                                  == 
                                                  (0x1b7U 
                                                   & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_back__DOT__ram_index
                                                   [0U]))) 
                                    & (VL_ULL(0xffffffffffffffff) 
                                       == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_backMask)))));
    }
}

void VTestHarness::traceChgThis__708(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+7743);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(oldp+0,(((1U & ((((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_back__DOT__maybe_full) 
                                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__maybe_full))) 
                                        & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_back__DOT__ram_read
                                           [0U])) & 
                                       (((IData)(1U) 
                                         << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_oindex)) 
                                        >> 3U)) & (0U 
                                                   == 
                                                   (0x1b7U 
                                                    & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_back__DOT__ram_index
                                                    [0U]))) 
                                     & (0xffffffffU 
                                        == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_backMask)))) 
                              | (3U & ((((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_back__DOT__maybe_full) 
                                           & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__maybe_full))) 
                                          & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_back__DOT__ram_read
                                             [0U])) 
                                         & (((IData)(1U) 
                                             << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_oindex)) 
                                            >> 2U)) 
                                        & (0U == (0x1b7U 
                                                  & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_back__DOT__ram_index
                                                  [0U]))) 
                                       & (VL_ULL(0xffffffffffffffff) 
                                          == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_backMask))))));
        vcdp->chgBit(oldp+1,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__flushSelect));
        vcdp->chgBit(oldp+2,((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__flushSelect)))));
        vcdp->chgBit(oldp+3,((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__flushSelect) 
                               & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkX__DOT__x__DOT__maybe_full))) 
                              | ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__flushSelect)) 
                                 & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__flushInValid)))));
        vcdp->chgQData(oldp+4,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_frontMask),64);
        vcdp->chgBit(oldp+6,((VL_ULL(0xffffffffffffffff) 
                              == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_frontMask)));
        vcdp->chgCData(oldp+7,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_iindex),2);
        vcdp->chgBit(oldp+8,((1U & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_iindex)) 
                                    >> 2U))));
        vcdp->chgBit(oldp+9,((3U & (((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__maybe_full) 
                                       & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_back__DOT__maybe_full))) 
                                      & (4U != vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode
                                         [0U])) & (
                                                   ((IData)(1U) 
                                                    << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_iindex)) 
                                                   >> 2U)) 
                                    & (0U == (0x1b7U 
                                              & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address
                                                 [0U] 
                                                 >> 3U)))))));
    }
}

void VTestHarness::traceChgThis__710(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+7753);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(oldp+0,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_f_wivalid));
        vcdp->chgBit(oldp+1,((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__flushInValid)) 
                                    | (~ (IData)((VL_ULL(0xffffffffffffffff) 
                                                  == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_frontMask)))))));
        vcdp->chgBit(oldp+2,((1U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__flushOutValid) 
                                    | (~ (IData)((VL_ULL(0xffffffffffffffff) 
                                                  == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_backMask)))))));
        vcdp->chgBit(oldp+3,((0xffffffffU == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_frontMask))));
        vcdp->chgBit(oldp+4,((1U & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_iindex)) 
                                    >> 3U))));
        vcdp->chgBit(oldp+5,((1U & (((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__maybe_full) 
                                       & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_back__DOT__maybe_full))) 
                                      & (4U != vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode
                                         [0U])) & (
                                                   ((IData)(1U) 
                                                    << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_iindex)) 
                                                   >> 3U)) 
                                    & (0U == (0x1b7U 
                                              & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address
                                                 [0U] 
                                                 >> 3U)))))));
        vcdp->chgBit(oldp+6,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_f_wivalid_1));
        vcdp->chgBit(oldp+7,((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__flushInValid)) 
                                    | (~ (IData)((0xffffffffU 
                                                  == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_frontMask))))))));
        vcdp->chgBit(oldp+8,((1U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__flushOutValid) 
                                    | (~ (IData)((0xffffffffU 
                                                  == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_backMask))))))));
        vcdp->chgBit(oldp+9,((1U & ((3U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_iindex))
                                     ? (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__flushInValid)) 
                                         | (~ (IData)(
                                                      (0xffffffffU 
                                                       == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_frontMask))))) 
                                        | (0U != (0x1b7U 
                                                  & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address
                                                     [0U] 
                                                     >> 3U))))
                                     : ((2U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_iindex)) 
                                        | (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__flushInValid)) 
                                            | (~ (IData)(
                                                         (VL_ULL(0xffffffffffffffff) 
                                                          == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_frontMask)))) 
                                           | (0U != 
                                              (0x1b7U 
                                               & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address
                                                  [0U] 
                                                  >> 3U)))))))));
    }
}

void VTestHarness::traceChgThis__712(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+7763);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(oldp+0,((1U & ((3U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_oindex))
                                     ? (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__flushOutValid) 
                                         | (~ (IData)(
                                                      (0xffffffffU 
                                                       == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_backMask))))) 
                                        | (0U != (0x1b7U 
                                                  & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_back__DOT__ram_index
                                                  [0U])))
                                     : ((2U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_oindex)) 
                                        | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__flushOutValid) 
                                            | (~ (IData)(
                                                         (VL_ULL(0xffffffffffffffff) 
                                                          == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_backMask)))) 
                                           | (0U != 
                                              (0x1b7U 
                                               & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_back__DOT__ram_index
                                               [0U]))))))));
        vcdp->chgBit(oldp+1,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_iready));
        vcdp->chgBit(oldp+2,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_oready));
        vcdp->chgBit(oldp+3,((VL_ULL(0) == (VL_ULL(0x80020000) 
                                            & (QData)((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__io_a_q__DOT__ram_address_io_deq_bits_MPORT_data))))));
        vcdp->chgBit(oldp+4,((VL_ULL(0) == (VL_ULL(0x80020000) 
                                            & (QData)((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceB_io_b_bits_address))))));
        vcdp->chgBit(oldp+5,((VL_ULL(0) == (VL_ULL(0x80020000) 
                                            & (QData)((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_address_io_deq_bits_MPORT_data))))));
        vcdp->chgBit(oldp+6,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__source_ok));
        vcdp->chgCData(oldp+7,((0x3fU & (~ (0x1fffU 
                                            & ((IData)(0x3fU) 
                                               << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__bundleOut_0_a_q_io_deq_bits_size)))))),6);
        vcdp->chgBit(oldp+8,((0U == (0x3fU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__bundleOut_0_a_q_io_deq_bits_address 
                                              & (~ 
                                                 (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__bundleOut_0_a_q_io_deq_bits_size)))))))));
        vcdp->chgCData(oldp+9,((3U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__bundleOut_0_a_q_io_deq_bits_size))),2);
        vcdp->chgCData(oldp+10,((0xfU & (1U | ((IData)(1U) 
                                               << (3U 
                                                   & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__bundleOut_0_a_q_io_deq_bits_size)))))),4);
    }
}

void VTestHarness::traceChgThis__714(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+7774);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(oldp+0,((1U & (((IData)(1U) << 
                                     (3U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__bundleOut_0_a_q_io_deq_bits_size))) 
                                    >> 3U))));
        vcdp->chgBit(oldp+1,((1U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__bundleOut_0_a_q_io_deq_bits_address 
                                    >> 3U))));
        vcdp->chgBit(oldp+2,((1U & (~ (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__bundleOut_0_a_q_io_deq_bits_address 
                                       >> 3U)))));
        vcdp->chgBit(oldp+3,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__mask_acc));
        vcdp->chgBit(oldp+4,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__mask_acc_1));
        vcdp->chgBit(oldp+5,((1U & (((IData)(1U) << 
                                     (3U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__bundleOut_0_a_q_io_deq_bits_size))) 
                                    >> 2U))));
        vcdp->chgBit(oldp+6,((1U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__bundleOut_0_a_q_io_deq_bits_address 
                                    >> 2U))));
        vcdp->chgBit(oldp+7,((1U & (~ (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__bundleOut_0_a_q_io_deq_bits_address 
                                       >> 2U)))));
        vcdp->chgBit(oldp+8,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__mask_eq_2));
        vcdp->chgBit(oldp+9,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__mask_acc_2));
        vcdp->chgBit(oldp+10,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__mask_eq_3));
        vcdp->chgBit(oldp+11,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__mask_acc_3));
        vcdp->chgBit(oldp+12,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__mask_eq_4));
        vcdp->chgBit(oldp+13,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__mask_acc_4));
        vcdp->chgBit(oldp+14,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__mask_eq_5));
        vcdp->chgBit(oldp+15,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__mask_acc_5));
        vcdp->chgBit(oldp+16,((1U & (((IData)(1U) << 
                                      (3U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__bundleOut_0_a_q_io_deq_bits_size))) 
                                     >> 1U))));
        vcdp->chgBit(oldp+17,((1U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__bundleOut_0_a_q_io_deq_bits_address 
                                     >> 1U))));
        vcdp->chgBit(oldp+18,((1U & (~ (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__bundleOut_0_a_q_io_deq_bits_address 
                                        >> 1U)))));
        vcdp->chgBit(oldp+19,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__mask_eq_6));
        vcdp->chgBit(oldp+20,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__mask_acc_6));
        vcdp->chgBit(oldp+21,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__mask_eq_7));
        vcdp->chgBit(oldp+22,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__mask_acc_7));
        vcdp->chgBit(oldp+23,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__mask_eq_8));
    }
}

void VTestHarness::traceChgThis__716(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+7798);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(oldp+0,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__mask_acc_8));
        vcdp->chgBit(oldp+1,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__mask_eq_9));
        vcdp->chgBit(oldp+2,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__mask_acc_9));
        vcdp->chgBit(oldp+3,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__mask_eq_10));
        vcdp->chgBit(oldp+4,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__mask_acc_10));
        vcdp->chgBit(oldp+5,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__mask_eq_11));
        vcdp->chgBit(oldp+6,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__mask_acc_11));
        vcdp->chgBit(oldp+7,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__mask_eq_12));
        vcdp->chgBit(oldp+8,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__mask_acc_12));
        vcdp->chgBit(oldp+9,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__mask_eq_13));
        vcdp->chgBit(oldp+10,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__mask_acc_13));
        vcdp->chgBit(oldp+11,((1U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__bundleOut_0_a_q_io_deq_bits_address)));
        vcdp->chgBit(oldp+12,((1U & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__bundleOut_0_a_q_io_deq_bits_address))));
        vcdp->chgBit(oldp+13,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__mask_eq_6) 
                               & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__bundleOut_0_a_q_io_deq_bits_address))));
        vcdp->chgBit(oldp+14,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__mask_acc_6) 
                               | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__mask_eq_6) 
                                  & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__bundleOut_0_a_q_io_deq_bits_address)))));
        vcdp->chgBit(oldp+15,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__mask_eq_6) 
                               & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__bundleOut_0_a_q_io_deq_bits_address)));
        vcdp->chgBit(oldp+16,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__mask_acc_6) 
                               | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__mask_eq_6) 
                                  & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__bundleOut_0_a_q_io_deq_bits_address))));
        vcdp->chgBit(oldp+17,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__mask_eq_7) 
                               & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__bundleOut_0_a_q_io_deq_bits_address))));
        vcdp->chgBit(oldp+18,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__mask_acc_7) 
                               | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__mask_eq_7) 
                                  & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__bundleOut_0_a_q_io_deq_bits_address)))));
        vcdp->chgBit(oldp+19,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__mask_eq_7) 
                               & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__bundleOut_0_a_q_io_deq_bits_address)));
        vcdp->chgBit(oldp+20,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__mask_acc_7) 
                               | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__mask_eq_7) 
                                  & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__bundleOut_0_a_q_io_deq_bits_address))));
    }
}

void VTestHarness::traceChgThis__718(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+7819);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(oldp+0,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__mask_eq_8) 
                              & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__bundleOut_0_a_q_io_deq_bits_address))));
        vcdp->chgBit(oldp+1,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__mask_acc_8) 
                              | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__mask_eq_8) 
                                 & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__bundleOut_0_a_q_io_deq_bits_address)))));
        vcdp->chgBit(oldp+2,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__mask_eq_8) 
                              & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__bundleOut_0_a_q_io_deq_bits_address)));
        vcdp->chgBit(oldp+3,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__mask_acc_8) 
                              | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__mask_eq_8) 
                                 & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__bundleOut_0_a_q_io_deq_bits_address))));
        vcdp->chgBit(oldp+4,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__mask_eq_9) 
                              & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__bundleOut_0_a_q_io_deq_bits_address))));
        vcdp->chgBit(oldp+5,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__mask_acc_9) 
                              | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__mask_eq_9) 
                                 & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__bundleOut_0_a_q_io_deq_bits_address)))));
        vcdp->chgBit(oldp+6,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__mask_eq_9) 
                              & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__bundleOut_0_a_q_io_deq_bits_address)));
        vcdp->chgBit(oldp+7,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__mask_acc_9) 
                              | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__mask_eq_9) 
                                 & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__bundleOut_0_a_q_io_deq_bits_address))));
        vcdp->chgBit(oldp+8,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__mask_eq_10) 
                              & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__bundleOut_0_a_q_io_deq_bits_address))));
        vcdp->chgBit(oldp+9,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__mask_acc_10) 
                              | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__mask_eq_10) 
                                 & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__bundleOut_0_a_q_io_deq_bits_address)))));
        vcdp->chgBit(oldp+10,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__mask_eq_10) 
                               & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__bundleOut_0_a_q_io_deq_bits_address)));
        vcdp->chgBit(oldp+11,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__mask_acc_10) 
                               | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__mask_eq_10) 
                                  & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__bundleOut_0_a_q_io_deq_bits_address))));
    }
}

void VTestHarness::traceChgThis__720(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+7831);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(oldp+0,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__mask_eq_11) 
                              & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__bundleOut_0_a_q_io_deq_bits_address))));
        vcdp->chgBit(oldp+1,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__mask_acc_11) 
                              | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__mask_eq_11) 
                                 & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__bundleOut_0_a_q_io_deq_bits_address)))));
        vcdp->chgBit(oldp+2,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__mask_eq_11) 
                              & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__bundleOut_0_a_q_io_deq_bits_address)));
        vcdp->chgBit(oldp+3,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__mask_acc_11) 
                              | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__mask_eq_11) 
                                 & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__bundleOut_0_a_q_io_deq_bits_address))));
        vcdp->chgBit(oldp+4,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__mask_eq_12) 
                              & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__bundleOut_0_a_q_io_deq_bits_address))));
        vcdp->chgBit(oldp+5,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__mask_acc_12) 
                              | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__mask_eq_12) 
                                 & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__bundleOut_0_a_q_io_deq_bits_address)))));
        vcdp->chgBit(oldp+6,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__mask_eq_12) 
                              & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__bundleOut_0_a_q_io_deq_bits_address)));
        vcdp->chgBit(oldp+7,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__mask_acc_12) 
                              | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__mask_eq_12) 
                                 & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__bundleOut_0_a_q_io_deq_bits_address))));
        vcdp->chgBit(oldp+8,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__mask_eq_13) 
                              & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__bundleOut_0_a_q_io_deq_bits_address))));
        vcdp->chgBit(oldp+9,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__mask_acc_13) 
                              | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__mask_eq_13) 
                                 & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__bundleOut_0_a_q_io_deq_bits_address)))));
        vcdp->chgBit(oldp+10,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__mask_eq_13) 
                               & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__bundleOut_0_a_q_io_deq_bits_address)));
        vcdp->chgBit(oldp+11,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__mask_acc_13) 
                               | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__mask_eq_13) 
                                  & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__bundleOut_0_a_q_io_deq_bits_address))));
    }
}

void VTestHarness::traceChgThis__722(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+7843);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgCData(oldp+0,(((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__mask_acc_9) 
                                  | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__mask_eq_9) 
                                     & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__bundleOut_0_a_q_io_deq_bits_address)) 
                                 << 7U) | ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__mask_acc_9) 
                                             | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__mask_eq_9) 
                                                & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__bundleOut_0_a_q_io_deq_bits_address))) 
                                            << 6U) 
                                           | ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__mask_acc_8) 
                                                | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__mask_eq_8) 
                                                   & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__bundleOut_0_a_q_io_deq_bits_address)) 
                                               << 5U) 
                                              | ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__mask_acc_8) 
                                                   | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__mask_eq_8) 
                                                      & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__bundleOut_0_a_q_io_deq_bits_address))) 
                                                  << 4U) 
                                                 | ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__mask_acc_7) 
                                                      | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__mask_eq_7) 
                                                         & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__bundleOut_0_a_q_io_deq_bits_address)) 
                                                     << 3U) 
                                                    | ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__mask_acc_7) 
                                                         | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__mask_eq_7) 
                                                            & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__bundleOut_0_a_q_io_deq_bits_address))) 
                                                        << 2U) 
                                                       | ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__mask_acc_6) 
                                                            | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__mask_eq_6) 
                                                               & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__bundleOut_0_a_q_io_deq_bits_address)) 
                                                           << 1U) 
                                                          | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__mask_acc_6) 
                                                             | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__mask_eq_6) 
                                                                & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__bundleOut_0_a_q_io_deq_bits_address))))))))))),8);
        vcdp->chgSData(oldp+1,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__mask),16);
        vcdp->chgBit(oldp+2,((((VL_ULL(0) == (VL_ULL(0x1f0000000) 
                                              & (QData)((IData)(
                                                                (0x80000000U 
                                                                 ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_io_in_b_bits_address))))) 
                               | (VL_ULL(0) == (VL_ULL(0x1fffff000) 
                                                & (QData)((IData)(
                                                                  (0x10000000U 
                                                                   ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_io_in_b_bits_address)))))) 
                              | (VL_ULL(0) == (VL_ULL(0x1ffff0000) 
                                               & (QData)((IData)(
                                                                 (0x20000U 
                                                                  ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_io_in_b_bits_address))))))));
    }
}

void VTestHarness::traceChgThis__724(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+7846);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(oldp+0,((0U == (0x3fU & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_io_in_b_bits_address))));
        vcdp->chgBit(oldp+1,((((((0x24U == (0x20U | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                                 | (1U == (3U & (2U 
                                                 | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                                    >> 4U))))) 
                                | (0U == (3U & (2U 
                                                | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                                   >> 4U))))) 
                               | (0x20U == (0x20U | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT__ram_source_io_deq_bits_MPORT_data)))) 
                              | (0x22U == (0x20U | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT__ram_source_io_deq_bits_MPORT_data))))));
        vcdp->chgCData(oldp+2,((0x3fU & (~ (0x1fffU 
                                            & ((IData)(0x3fU) 
                                               << (7U 
                                                   & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT__ram_size_io_deq_bits_MPORT_data))))))),6);
        vcdp->chgBit(oldp+3,((0U == (0x3fU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                              & (~ 
                                                 (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << 
                                                     (7U 
                                                      & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT__ram_size_io_deq_bits_MPORT_data))))))))));
        vcdp->chgBit(oldp+4,((((VL_ULL(0) == (VL_ULL(0x1f0000000) 
                                              & (QData)((IData)(
                                                                (0x80000000U 
                                                                 ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT__ram_address_io_deq_bits_MPORT_data))))) 
                               | (VL_ULL(0) == (VL_ULL(0x1fffff000) 
                                                & (QData)((IData)(
                                                                  (0x10000000U 
                                                                   ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT__ram_address_io_deq_bits_MPORT_data)))))) 
                              | (VL_ULL(0) == (VL_ULL(0x1ffff0000) 
                                               & (QData)((IData)(
                                                                 (0x20000U 
                                                                  ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT__ram_address_io_deq_bits_MPORT_data))))))));
    }
}

void VTestHarness::traceChgThis__726(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+7851);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Variables
    // Begin mtask footprint all: 
    WData/*159:0*/ __Vtemp23389[5];
    WData/*159:0*/ __Vtemp23390[5];
    // Body
    {
        vcdp->chgBit(oldp+0,((0xcU > (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_e_q__DOT__ram_sink_io_deq_bits_MPORT_data))));
        vcdp->chgCData(oldp+1,((3U & (~ (0x1ffU & (
                                                   ((IData)(0x3fU) 
                                                    << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__bundleOut_0_a_q_io_deq_bits_size)) 
                                                   >> 4U))))),2);
        vcdp->chgBit(oldp+2,((1U & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__bundleOut_0_a_q_io_deq_bits_opcode) 
                                       >> 2U)))));
        vcdp->chgBit(oldp+3,((1U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD_io_d_bits_opcode))));
        vcdp->chgBit(oldp+4,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__b_first_done));
        vcdp->chgCData(oldp+5,((3U & (~ (0x1ffU & (
                                                   ((IData)(0x3fU) 
                                                    << 
                                                    (7U 
                                                     & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT__ram_size_io_deq_bits_MPORT_data))) 
                                                   >> 4U))))),2);
        vcdp->chgCData(oldp+6,((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT___a_first_T) 
                                 & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__a_first_counter_1)))
                                 ? (1U | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__bundleOut_0_a_q_io_deq_bits_opcode) 
                                          << 1U)) : 0U)),4);
        vcdp->chgCData(oldp+7,((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT___a_first_T) 
                                 & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__a_first_counter_1)))
                                 ? (1U | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__bundleOut_0_a_q_io_deq_bits_size) 
                                          << 1U)) : 0U)),4);
        vcdp->chgBit(oldp+8,((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__bundleOut_0_a_q_io_deq_valid) 
                               & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__a_first_counter_1))) 
                              & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__bundleOut_0_a_q_io_deq_bits_source) 
                                 == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s3_req_source)))));
        __Vtemp23389[0U] = (7U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                                  >> 1U));
        __Vtemp23389[1U] = 0U;
        __Vtemp23389[2U] = 0U;
        __Vtemp23389[3U] = 0U;
        __Vtemp23389[4U] = 0U;
        VL_EXTEND_WW(148,147, __Vtemp23390, __Vtemp23389);
        vcdp->chgCData(oldp+9,((0xfU & __Vtemp23390[0U])),4);
        vcdp->chgQData(oldp+10,((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__bundleOut_0_a_q_io_deq_valid) 
                                  & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__a_first_counter_1)))
                                  ? (VL_ULL(0x1fffffffff) 
                                     & (VL_ULL(1) << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__bundleOut_0_a_q_io_deq_bits_source)))
                                  : VL_ULL(0))),37);
        vcdp->chgQData(oldp+12,(((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s3_valid_d) 
                                   & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__d_first_counter_1))) 
                                  & (6U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD_io_d_bits_opcode)))
                                  ? (VL_ULL(0x1fffffffff) 
                                     & (VL_ULL(1) << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s3_req_source)))
                                  : VL_ULL(0))),37);
    }
}

void VTestHarness::traceChgThis__728(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+7865);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Variables
    // Begin mtask footprint all: 
    WData/*543:0*/ __Vtemp23416[17];
    WData/*543:0*/ __Vtemp23417[17];
    WData/*159:0*/ __Vtemp23423[5];
    WData/*159:0*/ __Vtemp23426[5];
    WData/*543:0*/ __Vtemp23429[17];
    WData/*543:0*/ __Vtemp23430[17];
    WData/*159:0*/ __Vtemp23436[5];
    // Body
    {
        vcdp->chgQData(oldp+0,((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT___a_first_T) 
                                 & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__a_first_counter_1)))
                                 ? (VL_ULL(0x1fffffffff) 
                                    & (VL_ULL(1) << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__bundleOut_0_a_q_io_deq_bits_source)))
                                 : VL_ULL(0))),37);
        vcdp->chgQData(oldp+2,(((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT___d_first_T) 
                                  & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__d_first_counter_1))) 
                                 & (6U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD_io_d_bits_opcode)))
                                 ? (VL_ULL(0x1fffffffff) 
                                    & (VL_ULL(1) << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s3_req_source)))
                                 : VL_ULL(0))),37);
        VL_EXTEND_WI(515,4, __Vtemp23416, (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT___a_first_T) 
                                            & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__a_first_counter_1)))
                                            ? (1U | 
                                               ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__bundleOut_0_a_q_io_deq_bits_opcode) 
                                                << 1U))
                                            : 0U));
        VL_SHIFTL_WWI(515,515,9, __Vtemp23417, __Vtemp23416, 
                      ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__bundleOut_0_a_q_io_deq_bits_source) 
                       << 2U));
        __Vtemp23423[0U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT___a_first_T) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__a_first_counter_1)))
                             ? __Vtemp23417[0U] : 0U);
        __Vtemp23423[1U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT___a_first_T) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__a_first_counter_1)))
                             ? __Vtemp23417[1U] : 0U);
        __Vtemp23423[2U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT___a_first_T) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__a_first_counter_1)))
                             ? __Vtemp23417[2U] : 0U);
        __Vtemp23423[3U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT___a_first_T) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__a_first_counter_1)))
                             ? __Vtemp23417[3U] : 0U);
        __Vtemp23423[4U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT___a_first_T) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__a_first_counter_1)))
                             ? (0xfffffU & __Vtemp23417[4U])
                             : 0U);
        vcdp->chgWData(oldp+4,(__Vtemp23423),148);
        __Vtemp23426[0U] = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT___GEN_35[0U];
        __Vtemp23426[1U] = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT___GEN_35[1U];
        __Vtemp23426[2U] = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT___GEN_35[2U];
        __Vtemp23426[3U] = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT___GEN_35[3U];
        __Vtemp23426[4U] = (0xfffffU & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT___GEN_35[4U]);
        vcdp->chgWData(oldp+9,(__Vtemp23426),148);
        VL_EXTEND_WI(515,4, __Vtemp23429, (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT___a_first_T) 
                                            & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__a_first_counter_1)))
                                            ? (1U | 
                                               ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__bundleOut_0_a_q_io_deq_bits_size) 
                                                << 1U))
                                            : 0U));
        VL_SHIFTL_WWI(515,515,9, __Vtemp23430, __Vtemp23429, 
                      ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__bundleOut_0_a_q_io_deq_bits_source) 
                       << 2U));
        __Vtemp23436[0U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT___a_first_T) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__a_first_counter_1)))
                             ? __Vtemp23430[0U] : 0U);
        __Vtemp23436[1U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT___a_first_T) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__a_first_counter_1)))
                             ? __Vtemp23430[1U] : 0U);
        __Vtemp23436[2U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT___a_first_T) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__a_first_counter_1)))
                             ? __Vtemp23430[2U] : 0U);
        __Vtemp23436[3U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT___a_first_T) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__a_first_counter_1)))
                             ? __Vtemp23430[3U] : 0U);
        __Vtemp23436[4U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT___a_first_T) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__a_first_counter_1)))
                             ? (0xfffffU & __Vtemp23430[4U])
                             : 0U);
        vcdp->chgWData(oldp+14,(__Vtemp23436),148);
        vcdp->chgCData(oldp+19,(((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT___c_first_T) 
                                   & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__c_first_counter_1))) 
                                  & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT___T_1851))
                                  ? (1U | (0xeU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT__ram_size_io_deq_bits_MPORT_data) 
                                                   << 1U)))
                                  : 0U)),4);
    }
}

void VTestHarness::traceChgThis__730(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+7885);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Variables
    // Begin mtask footprint all: 
    WData/*543:0*/ __Vtemp23449[17];
    WData/*543:0*/ __Vtemp23450[17];
    WData/*159:0*/ __Vtemp23456[5];
    // Body
    {
        vcdp->chgBit(oldp+0,(((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT__empty)) 
                                & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__c_first_counter_1))) 
                               & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT___T_1851)) 
                              & ((0x20U | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                                 == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s3_req_source)))));
        vcdp->chgQData(oldp+1,(((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT__empty)) 
                                  & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__c_first_counter_1))) 
                                 & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT___T_1851))
                                 ? (VL_ULL(0x1fffffffff) 
                                    & (VL_ULL(1) << 
                                       (0x20U | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT__ram_source_io_deq_bits_MPORT_data))))
                                 : VL_ULL(0))),37);
        vcdp->chgQData(oldp+3,(((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s3_valid_d) 
                                  & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__d_first_counter_2))) 
                                 & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD_io_d_bits_opcode)))
                                 ? (VL_ULL(0x1fffffffff) 
                                    & (VL_ULL(1) << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s3_req_source)))
                                 : VL_ULL(0))),37);
        vcdp->chgQData(oldp+5,(((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT___c_first_T) 
                                  & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__c_first_counter_1))) 
                                 & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT___T_1851))
                                 ? (VL_ULL(0x1fffffffff) 
                                    & (VL_ULL(1) << 
                                       (0x20U | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT__ram_source_io_deq_bits_MPORT_data))))
                                 : VL_ULL(0))),37);
        vcdp->chgQData(oldp+7,(((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT___d_first_T) 
                                  & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__d_first_counter_2))) 
                                 & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD_io_d_bits_opcode)))
                                 ? (VL_ULL(0x1fffffffff) 
                                    & (VL_ULL(1) << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s3_req_source)))
                                 : VL_ULL(0))),37);
        __Vtemp23449[0U] = 0xfU;
        __Vtemp23449[1U] = 0U;
        __Vtemp23449[2U] = 0U;
        __Vtemp23449[3U] = 0U;
        __Vtemp23449[4U] = 0U;
        __Vtemp23449[5U] = 0U;
        __Vtemp23449[6U] = 0U;
        __Vtemp23449[7U] = 0U;
        __Vtemp23449[8U] = 0U;
        __Vtemp23449[9U] = 0U;
        __Vtemp23449[0xaU] = 0U;
        __Vtemp23449[0xbU] = 0U;
        __Vtemp23449[0xcU] = 0U;
        __Vtemp23449[0xdU] = 0U;
        __Vtemp23449[0xeU] = 0U;
        __Vtemp23449[0xfU] = 0U;
        __Vtemp23449[0x10U] = 0U;
        VL_SHIFTL_WWI(527,527,9, __Vtemp23450, __Vtemp23449, 
                      ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s3_req_source) 
                       << 2U));
        __Vtemp23456[0U] = ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT___d_first_T) 
                              & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__d_first_counter_2))) 
                             & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD_io_d_bits_opcode)))
                             ? __Vtemp23450[0U] : 0U);
        __Vtemp23456[1U] = ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT___d_first_T) 
                              & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__d_first_counter_2))) 
                             & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD_io_d_bits_opcode)))
                             ? __Vtemp23450[1U] : 0U);
        __Vtemp23456[2U] = ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT___d_first_T) 
                              & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__d_first_counter_2))) 
                             & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD_io_d_bits_opcode)))
                             ? __Vtemp23450[2U] : 0U);
        __Vtemp23456[3U] = ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT___d_first_T) 
                              & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__d_first_counter_2))) 
                             & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD_io_d_bits_opcode)))
                             ? __Vtemp23450[3U] : 0U);
        __Vtemp23456[4U] = ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT___d_first_T) 
                              & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__d_first_counter_2))) 
                             & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD_io_d_bits_opcode)))
                             ? (0xfffffU & __Vtemp23450[4U])
                             : 0U);
        vcdp->chgWData(oldp+9,(__Vtemp23456),148);
    }
}

void VTestHarness::traceChgThis__732(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+7899);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Variables
    // Begin mtask footprint all: 
    WData/*543:0*/ __Vtemp23469[17];
    WData/*543:0*/ __Vtemp23470[17];
    WData/*159:0*/ __Vtemp23476[5];
    // Body
    {
        VL_EXTEND_WI(515,4, __Vtemp23469, ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT___c_first_T) 
                                             & (0U 
                                                == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__c_first_counter_1))) 
                                            & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT___T_1851))
                                            ? (1U | 
                                               (0xeU 
                                                & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT__ram_size_io_deq_bits_MPORT_data) 
                                                   << 1U)))
                                            : 0U));
        VL_SHIFTL_WWI(515,515,9, __Vtemp23470, __Vtemp23469, 
                      (0x80U | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                << 2U)));
        __Vtemp23476[0U] = ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT___c_first_T) 
                              & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__c_first_counter_1))) 
                             & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT___T_1851))
                             ? __Vtemp23470[0U] : 0U);
        __Vtemp23476[1U] = ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT___c_first_T) 
                              & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__c_first_counter_1))) 
                             & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT___T_1851))
                             ? __Vtemp23470[1U] : 0U);
        __Vtemp23476[2U] = ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT___c_first_T) 
                              & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__c_first_counter_1))) 
                             & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT___T_1851))
                             ? __Vtemp23470[2U] : 0U);
        __Vtemp23476[3U] = ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT___c_first_T) 
                              & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__c_first_counter_1))) 
                             & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT___T_1851))
                             ? __Vtemp23470[3U] : 0U);
        __Vtemp23476[4U] = ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT___c_first_T) 
                              & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__c_first_counter_1))) 
                             & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT___T_1851))
                             ? (0xfffffU & __Vtemp23470[4U])
                             : 0U);
        vcdp->chgWData(oldp+0,(__Vtemp23476),148);
        vcdp->chgSData(oldp+5,((0xfffU & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT___GEN_84))),12);
        vcdp->chgSData(oldp+6,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_e_q__DOT__empty)
                                 ? 0U : (0xfffU & ((IData)(1U) 
                                                   << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_e_q__DOT__ram_sink_io_deq_bits_MPORT_data))))),12);
        vcdp->chgBit(oldp+7,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__mask_acc));
        vcdp->chgBit(oldp+8,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__mask_acc_1));
        vcdp->chgBit(oldp+9,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__mask_eq_2));
        vcdp->chgBit(oldp+10,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__mask_acc_2));
        vcdp->chgBit(oldp+11,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__mask_eq_3));
        vcdp->chgBit(oldp+12,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__mask_acc_3));
        vcdp->chgBit(oldp+13,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__mask_eq_4));
        vcdp->chgBit(oldp+14,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__mask_acc_4));
        vcdp->chgBit(oldp+15,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__mask_eq_5));
        vcdp->chgBit(oldp+16,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__mask_acc_5));
        vcdp->chgBit(oldp+17,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__mask_eq_2) 
                               & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address
                                  [0U]))));
        vcdp->chgBit(oldp+18,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__mask_acc_2) 
                               | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__mask_eq_2) 
                                  & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address
                                     [0U])))));
        vcdp->chgBit(oldp+19,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__mask_eq_2) 
                               & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address
                               [0U])));
    }
}

void VTestHarness::traceChgThis__734(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+7919);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(oldp+0,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__mask_acc_2) 
                              | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__mask_eq_2) 
                                 & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address
                                 [0U]))));
        vcdp->chgBit(oldp+1,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__mask_eq_3) 
                              & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address
                                 [0U]))));
        vcdp->chgBit(oldp+2,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__mask_acc_3) 
                              | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__mask_eq_3) 
                                 & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address
                                    [0U])))));
        vcdp->chgBit(oldp+3,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__mask_eq_3) 
                              & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address
                              [0U])));
        vcdp->chgBit(oldp+4,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__mask_acc_3) 
                              | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__mask_eq_3) 
                                 & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address
                                 [0U]))));
        vcdp->chgBit(oldp+5,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__mask_eq_4) 
                              & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address
                                 [0U]))));
        vcdp->chgBit(oldp+6,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__mask_acc_4) 
                              | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__mask_eq_4) 
                                 & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address
                                    [0U])))));
        vcdp->chgBit(oldp+7,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__mask_eq_4) 
                              & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address
                              [0U])));
        vcdp->chgBit(oldp+8,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__mask_acc_4) 
                              | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__mask_eq_4) 
                                 & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address
                                 [0U]))));
        vcdp->chgBit(oldp+9,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__mask_eq_5) 
                              & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address
                                 [0U]))));
    }
}

void VTestHarness::traceChgThis__736(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+7929);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Variables
    // Begin mtask footprint all: 
    WData/*4159:0*/ __Vtemp23503[130];
    WData/*4159:0*/ __Vtemp23504[130];
    WData/*2047:0*/ __Vtemp23506[64];
    WData/*2047:0*/ __Vtemp23507[64];
    WData/*1055:0*/ __Vtemp23512[33];
    WData/*2047:0*/ __Vtemp23514[64];
    WData/*2047:0*/ __Vtemp23515[64];
    WData/*1055:0*/ __Vtemp23520[33];
    IData/*31:0*/ __Vilp;
    // Body
    {
        vcdp->chgBit(oldp+0,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__mask_acc_5) 
                              | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__mask_eq_5) 
                                 & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address
                                    [0U])))));
        vcdp->chgBit(oldp+1,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__mask_eq_5) 
                              & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address
                              [0U])));
        vcdp->chgBit(oldp+2,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__mask_acc_5) 
                              | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__mask_eq_5) 
                                 & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address
                                 [0U]))));
        vcdp->chgCData(oldp+3,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__mask),8);
        vcdp->chgBit(oldp+4,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done));
        vcdp->chgBit(oldp+5,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__d_first_done));
        vcdp->chgCData(oldp+6,((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                 & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                 ? (1U | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode
                                          [0U] << 1U))
                                 : 0U)),4);
        vcdp->chgCData(oldp+7,((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                 & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                 ? (1U | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size
                                          [0U] << 1U))
                                 : 0U)),3);
        __Vtemp23503[0U] = (7U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT___a_opcode_lookup_T_1[0U] 
                                  >> 1U));
        __Vilp = 1U;
        while ((__Vilp <= 0x81U)) {
            __Vtemp23503[__Vilp] = 0U;
            __Vilp = ((IData)(1U) + __Vilp);
        }
        VL_EXTEND_WW(4160,4159, __Vtemp23504, __Vtemp23503);
        vcdp->chgCData(oldp+8,((0xfU & __Vtemp23504[0U])),4);
        __Vtemp23506[0U] = 1U;
        __Vilp = 1U;
        while ((__Vilp <= 0x3fU)) {
            __Vtemp23506[__Vilp] = 0U;
            __Vilp = ((IData)(1U) + __Vilp);
        }
        VL_SHIFTL_WWI(2048,2048,11, __Vtemp23507, __Vtemp23506, 
                      vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_back__DOT__ram_extra_tlrr_extra_source
                      [0U]);
        __Vtemp23512[0U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1_io_in_d_valid) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__d_first_counter_1)))
                             ? __Vtemp23507[0U] : 0U);
        __Vtemp23512[1U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1_io_in_d_valid) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__d_first_counter_1)))
                             ? __Vtemp23507[1U] : 0U);
        __Vtemp23512[2U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1_io_in_d_valid) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__d_first_counter_1)))
                             ? __Vtemp23507[2U] : 0U);
        __Vtemp23512[3U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1_io_in_d_valid) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__d_first_counter_1)))
                             ? __Vtemp23507[3U] : 0U);
        __Vtemp23512[4U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1_io_in_d_valid) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__d_first_counter_1)))
                             ? __Vtemp23507[4U] : 0U);
        __Vtemp23512[5U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1_io_in_d_valid) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__d_first_counter_1)))
                             ? __Vtemp23507[5U] : 0U);
        __Vtemp23512[6U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1_io_in_d_valid) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__d_first_counter_1)))
                             ? __Vtemp23507[6U] : 0U);
        __Vtemp23512[7U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1_io_in_d_valid) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__d_first_counter_1)))
                             ? __Vtemp23507[7U] : 0U);
        __Vtemp23512[8U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1_io_in_d_valid) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__d_first_counter_1)))
                             ? __Vtemp23507[8U] : 0U);
        __Vtemp23512[9U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1_io_in_d_valid) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__d_first_counter_1)))
                             ? __Vtemp23507[9U] : 0U);
        __Vtemp23512[0xaU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1_io_in_d_valid) 
                               & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__d_first_counter_1)))
                               ? __Vtemp23507[0xaU]
                               : 0U);
        __Vtemp23512[0xbU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1_io_in_d_valid) 
                               & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__d_first_counter_1)))
                               ? __Vtemp23507[0xbU]
                               : 0U);
        __Vtemp23512[0xcU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1_io_in_d_valid) 
                               & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__d_first_counter_1)))
                               ? __Vtemp23507[0xcU]
                               : 0U);
        __Vtemp23512[0xdU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1_io_in_d_valid) 
                               & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__d_first_counter_1)))
                               ? __Vtemp23507[0xdU]
                               : 0U);
        __Vtemp23512[0xeU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1_io_in_d_valid) 
                               & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__d_first_counter_1)))
                               ? __Vtemp23507[0xeU]
                               : 0U);
        __Vtemp23512[0xfU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1_io_in_d_valid) 
                               & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__d_first_counter_1)))
                               ? __Vtemp23507[0xfU]
                               : 0U);
        __Vtemp23512[0x10U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1_io_in_d_valid) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__d_first_counter_1)))
                                ? __Vtemp23507[0x10U]
                                : 0U);
        __Vtemp23512[0x11U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1_io_in_d_valid) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__d_first_counter_1)))
                                ? __Vtemp23507[0x11U]
                                : 0U);
        __Vtemp23512[0x12U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1_io_in_d_valid) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__d_first_counter_1)))
                                ? __Vtemp23507[0x12U]
                                : 0U);
        __Vtemp23512[0x13U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1_io_in_d_valid) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__d_first_counter_1)))
                                ? __Vtemp23507[0x13U]
                                : 0U);
        __Vtemp23512[0x14U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1_io_in_d_valid) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__d_first_counter_1)))
                                ? __Vtemp23507[0x14U]
                                : 0U);
        __Vtemp23512[0x15U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1_io_in_d_valid) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__d_first_counter_1)))
                                ? __Vtemp23507[0x15U]
                                : 0U);
        __Vtemp23512[0x16U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1_io_in_d_valid) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__d_first_counter_1)))
                                ? __Vtemp23507[0x16U]
                                : 0U);
        __Vtemp23512[0x17U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1_io_in_d_valid) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__d_first_counter_1)))
                                ? __Vtemp23507[0x17U]
                                : 0U);
        __Vtemp23512[0x18U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1_io_in_d_valid) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__d_first_counter_1)))
                                ? __Vtemp23507[0x18U]
                                : 0U);
        __Vtemp23512[0x19U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1_io_in_d_valid) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__d_first_counter_1)))
                                ? __Vtemp23507[0x19U]
                                : 0U);
        __Vtemp23512[0x1aU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1_io_in_d_valid) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__d_first_counter_1)))
                                ? __Vtemp23507[0x1aU]
                                : 0U);
        __Vtemp23512[0x1bU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1_io_in_d_valid) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__d_first_counter_1)))
                                ? __Vtemp23507[0x1bU]
                                : 0U);
        __Vtemp23512[0x1cU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1_io_in_d_valid) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__d_first_counter_1)))
                                ? __Vtemp23507[0x1cU]
                                : 0U);
        __Vtemp23512[0x1dU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1_io_in_d_valid) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__d_first_counter_1)))
                                ? __Vtemp23507[0x1dU]
                                : 0U);
        __Vtemp23512[0x1eU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1_io_in_d_valid) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__d_first_counter_1)))
                                ? __Vtemp23507[0x1eU]
                                : 0U);
        __Vtemp23512[0x1fU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1_io_in_d_valid) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__d_first_counter_1)))
                                ? __Vtemp23507[0x1fU]
                                : 0U);
        __Vtemp23512[0x20U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1_io_in_d_valid) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__d_first_counter_1)))
                                ? (0xffffU & __Vtemp23507[0x20U])
                                : 0U);
        vcdp->chgWData(oldp+9,(__Vtemp23512),1040);
        __Vtemp23514[0U] = 1U;
        __Vilp = 1U;
        while ((__Vilp <= 0x3fU)) {
            __Vtemp23514[__Vilp] = 0U;
            __Vilp = ((IData)(1U) + __Vilp);
        }
        VL_SHIFTL_WWI(2048,2048,11, __Vtemp23515, __Vtemp23514, 
                      vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source
                      [0U]);
        __Vtemp23520[0U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                             ? __Vtemp23515[0U] : 0U);
        __Vtemp23520[1U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                             ? __Vtemp23515[1U] : 0U);
        __Vtemp23520[2U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                             ? __Vtemp23515[2U] : 0U);
        __Vtemp23520[3U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                             ? __Vtemp23515[3U] : 0U);
        __Vtemp23520[4U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                             ? __Vtemp23515[4U] : 0U);
        __Vtemp23520[5U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                             ? __Vtemp23515[5U] : 0U);
        __Vtemp23520[6U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                             ? __Vtemp23515[6U] : 0U);
        __Vtemp23520[7U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                             ? __Vtemp23515[7U] : 0U);
        __Vtemp23520[8U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                             ? __Vtemp23515[8U] : 0U);
        __Vtemp23520[9U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                             ? __Vtemp23515[9U] : 0U);
        __Vtemp23520[0xaU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                               & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                               ? __Vtemp23515[0xaU]
                               : 0U);
        __Vtemp23520[0xbU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                               & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                               ? __Vtemp23515[0xbU]
                               : 0U);
        __Vtemp23520[0xcU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                               & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                               ? __Vtemp23515[0xcU]
                               : 0U);
        __Vtemp23520[0xdU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                               & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                               ? __Vtemp23515[0xdU]
                               : 0U);
        __Vtemp23520[0xeU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                               & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                               ? __Vtemp23515[0xeU]
                               : 0U);
        __Vtemp23520[0xfU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                               & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                               ? __Vtemp23515[0xfU]
                               : 0U);
        __Vtemp23520[0x10U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23515[0x10U]
                                : 0U);
        __Vtemp23520[0x11U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23515[0x11U]
                                : 0U);
        __Vtemp23520[0x12U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23515[0x12U]
                                : 0U);
        __Vtemp23520[0x13U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23515[0x13U]
                                : 0U);
        __Vtemp23520[0x14U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23515[0x14U]
                                : 0U);
        __Vtemp23520[0x15U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23515[0x15U]
                                : 0U);
        __Vtemp23520[0x16U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23515[0x16U]
                                : 0U);
        __Vtemp23520[0x17U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23515[0x17U]
                                : 0U);
        __Vtemp23520[0x18U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23515[0x18U]
                                : 0U);
        __Vtemp23520[0x19U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23515[0x19U]
                                : 0U);
        __Vtemp23520[0x1aU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23515[0x1aU]
                                : 0U);
        __Vtemp23520[0x1bU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23515[0x1bU]
                                : 0U);
        __Vtemp23520[0x1cU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23515[0x1cU]
                                : 0U);
        __Vtemp23520[0x1dU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23515[0x1dU]
                                : 0U);
        __Vtemp23520[0x1eU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23515[0x1eU]
                                : 0U);
        __Vtemp23520[0x1fU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23515[0x1fU]
                                : 0U);
        __Vtemp23520[0x20U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? (0xffffU & __Vtemp23515[0x20U])
                                : 0U);
        vcdp->chgWData(oldp+42,(__Vtemp23520),1040);
    }
}

void VTestHarness::traceChgThis__738(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+8004);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Variables
    // Begin mtask footprint all: 
    WData/*2047:0*/ __Vtemp23547[64];
    WData/*2047:0*/ __Vtemp23548[64];
    WData/*1055:0*/ __Vtemp23553[33];
    WData/*16415:0*/ __Vtemp23555[513];
    WData/*16415:0*/ __Vtemp23556[513];
    WData/*4159:0*/ __Vtemp23561[130];
    WData/*4159:0*/ __Vtemp23562[130];
    WData/*16415:0*/ __Vtemp23564[513];
    WData/*16415:0*/ __Vtemp23565[513];
    WData/*4159:0*/ __Vtemp23570[130];
    IData/*31:0*/ __Vilp;
    // Body
    {
        __Vtemp23547[0U] = 1U;
        __Vilp = 1U;
        while ((__Vilp <= 0x3fU)) {
            __Vtemp23547[__Vilp] = 0U;
            __Vilp = ((IData)(1U) + __Vilp);
        }
        VL_SHIFTL_WWI(2048,2048,11, __Vtemp23548, __Vtemp23547, 
                      vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_back__DOT__ram_extra_tlrr_extra_source
                      [0U]);
        __Vtemp23553[0U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__d_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__d_first_counter_1)))
                             ? __Vtemp23548[0U] : 0U);
        __Vtemp23553[1U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__d_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__d_first_counter_1)))
                             ? __Vtemp23548[1U] : 0U);
        __Vtemp23553[2U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__d_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__d_first_counter_1)))
                             ? __Vtemp23548[2U] : 0U);
        __Vtemp23553[3U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__d_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__d_first_counter_1)))
                             ? __Vtemp23548[3U] : 0U);
        __Vtemp23553[4U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__d_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__d_first_counter_1)))
                             ? __Vtemp23548[4U] : 0U);
        __Vtemp23553[5U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__d_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__d_first_counter_1)))
                             ? __Vtemp23548[5U] : 0U);
        __Vtemp23553[6U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__d_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__d_first_counter_1)))
                             ? __Vtemp23548[6U] : 0U);
        __Vtemp23553[7U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__d_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__d_first_counter_1)))
                             ? __Vtemp23548[7U] : 0U);
        __Vtemp23553[8U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__d_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__d_first_counter_1)))
                             ? __Vtemp23548[8U] : 0U);
        __Vtemp23553[9U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__d_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__d_first_counter_1)))
                             ? __Vtemp23548[9U] : 0U);
        __Vtemp23553[0xaU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__d_first_done) 
                               & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__d_first_counter_1)))
                               ? __Vtemp23548[0xaU]
                               : 0U);
        __Vtemp23553[0xbU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__d_first_done) 
                               & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__d_first_counter_1)))
                               ? __Vtemp23548[0xbU]
                               : 0U);
        __Vtemp23553[0xcU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__d_first_done) 
                               & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__d_first_counter_1)))
                               ? __Vtemp23548[0xcU]
                               : 0U);
        __Vtemp23553[0xdU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__d_first_done) 
                               & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__d_first_counter_1)))
                               ? __Vtemp23548[0xdU]
                               : 0U);
        __Vtemp23553[0xeU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__d_first_done) 
                               & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__d_first_counter_1)))
                               ? __Vtemp23548[0xeU]
                               : 0U);
        __Vtemp23553[0xfU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__d_first_done) 
                               & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__d_first_counter_1)))
                               ? __Vtemp23548[0xfU]
                               : 0U);
        __Vtemp23553[0x10U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__d_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__d_first_counter_1)))
                                ? __Vtemp23548[0x10U]
                                : 0U);
        __Vtemp23553[0x11U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__d_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__d_first_counter_1)))
                                ? __Vtemp23548[0x11U]
                                : 0U);
        __Vtemp23553[0x12U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__d_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__d_first_counter_1)))
                                ? __Vtemp23548[0x12U]
                                : 0U);
        __Vtemp23553[0x13U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__d_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__d_first_counter_1)))
                                ? __Vtemp23548[0x13U]
                                : 0U);
        __Vtemp23553[0x14U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__d_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__d_first_counter_1)))
                                ? __Vtemp23548[0x14U]
                                : 0U);
        __Vtemp23553[0x15U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__d_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__d_first_counter_1)))
                                ? __Vtemp23548[0x15U]
                                : 0U);
        __Vtemp23553[0x16U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__d_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__d_first_counter_1)))
                                ? __Vtemp23548[0x16U]
                                : 0U);
        __Vtemp23553[0x17U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__d_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__d_first_counter_1)))
                                ? __Vtemp23548[0x17U]
                                : 0U);
        __Vtemp23553[0x18U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__d_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__d_first_counter_1)))
                                ? __Vtemp23548[0x18U]
                                : 0U);
        __Vtemp23553[0x19U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__d_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__d_first_counter_1)))
                                ? __Vtemp23548[0x19U]
                                : 0U);
        __Vtemp23553[0x1aU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__d_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__d_first_counter_1)))
                                ? __Vtemp23548[0x1aU]
                                : 0U);
        __Vtemp23553[0x1bU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__d_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__d_first_counter_1)))
                                ? __Vtemp23548[0x1bU]
                                : 0U);
        __Vtemp23553[0x1cU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__d_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__d_first_counter_1)))
                                ? __Vtemp23548[0x1cU]
                                : 0U);
        __Vtemp23553[0x1dU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__d_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__d_first_counter_1)))
                                ? __Vtemp23548[0x1dU]
                                : 0U);
        __Vtemp23553[0x1eU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__d_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__d_first_counter_1)))
                                ? __Vtemp23548[0x1eU]
                                : 0U);
        __Vtemp23553[0x1fU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__d_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__d_first_counter_1)))
                                ? __Vtemp23548[0x1fU]
                                : 0U);
        __Vtemp23553[0x20U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__d_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__d_first_counter_1)))
                                ? (0xffffU & __Vtemp23548[0x20U])
                                : 0U);
        vcdp->chgWData(oldp+0,(__Vtemp23553),1040);
        VL_EXTEND_WI(16387,4, __Vtemp23555, (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                              & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                              ? (1U 
                                                 | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode
                                                    [0U] 
                                                    << 1U))
                                              : 0U));
        VL_SHIFTL_WWI(16387,16387,14, __Vtemp23556, __Vtemp23555, 
                      (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source
                       [0U] << 2U));
        __Vtemp23561[0U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                             ? __Vtemp23556[0U] : 0U);
        __Vtemp23561[1U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                             ? __Vtemp23556[1U] : 0U);
        __Vtemp23561[2U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                             ? __Vtemp23556[2U] : 0U);
        __Vtemp23561[3U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                             ? __Vtemp23556[3U] : 0U);
        __Vtemp23561[4U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                             ? __Vtemp23556[4U] : 0U);
        __Vtemp23561[5U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                             ? __Vtemp23556[5U] : 0U);
        __Vtemp23561[6U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                             ? __Vtemp23556[6U] : 0U);
        __Vtemp23561[7U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                             ? __Vtemp23556[7U] : 0U);
        __Vtemp23561[8U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                             ? __Vtemp23556[8U] : 0U);
        __Vtemp23561[9U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                             ? __Vtemp23556[9U] : 0U);
        __Vtemp23561[0xaU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                               & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                               ? __Vtemp23556[0xaU]
                               : 0U);
        __Vtemp23561[0xbU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                               & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                               ? __Vtemp23556[0xbU]
                               : 0U);
        __Vtemp23561[0xcU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                               & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                               ? __Vtemp23556[0xcU]
                               : 0U);
        __Vtemp23561[0xdU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                               & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                               ? __Vtemp23556[0xdU]
                               : 0U);
        __Vtemp23561[0xeU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                               & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                               ? __Vtemp23556[0xeU]
                               : 0U);
        __Vtemp23561[0xfU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                               & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                               ? __Vtemp23556[0xfU]
                               : 0U);
        __Vtemp23561[0x10U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23556[0x10U]
                                : 0U);
        __Vtemp23561[0x11U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23556[0x11U]
                                : 0U);
        __Vtemp23561[0x12U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23556[0x12U]
                                : 0U);
        __Vtemp23561[0x13U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23556[0x13U]
                                : 0U);
        __Vtemp23561[0x14U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23556[0x14U]
                                : 0U);
        __Vtemp23561[0x15U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23556[0x15U]
                                : 0U);
        __Vtemp23561[0x16U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23556[0x16U]
                                : 0U);
        __Vtemp23561[0x17U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23556[0x17U]
                                : 0U);
        __Vtemp23561[0x18U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23556[0x18U]
                                : 0U);
        __Vtemp23561[0x19U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23556[0x19U]
                                : 0U);
        __Vtemp23561[0x1aU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23556[0x1aU]
                                : 0U);
        __Vtemp23561[0x1bU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23556[0x1bU]
                                : 0U);
        __Vtemp23561[0x1cU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23556[0x1cU]
                                : 0U);
        __Vtemp23561[0x1dU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23556[0x1dU]
                                : 0U);
        __Vtemp23561[0x1eU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23556[0x1eU]
                                : 0U);
        __Vtemp23561[0x1fU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23556[0x1fU]
                                : 0U);
        __Vtemp23561[0x20U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23556[0x20U]
                                : 0U);
        __Vtemp23561[0x21U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23556[0x21U]
                                : 0U);
        __Vtemp23561[0x22U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23556[0x22U]
                                : 0U);
        __Vtemp23561[0x23U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23556[0x23U]
                                : 0U);
        __Vtemp23561[0x24U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23556[0x24U]
                                : 0U);
        __Vtemp23561[0x25U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23556[0x25U]
                                : 0U);
        __Vtemp23561[0x26U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23556[0x26U]
                                : 0U);
        __Vtemp23561[0x27U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23556[0x27U]
                                : 0U);
        __Vtemp23561[0x28U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23556[0x28U]
                                : 0U);
        __Vtemp23561[0x29U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23556[0x29U]
                                : 0U);
        __Vtemp23561[0x2aU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23556[0x2aU]
                                : 0U);
        __Vtemp23561[0x2bU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23556[0x2bU]
                                : 0U);
        __Vtemp23561[0x2cU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23556[0x2cU]
                                : 0U);
        __Vtemp23561[0x2dU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23556[0x2dU]
                                : 0U);
        __Vtemp23561[0x2eU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23556[0x2eU]
                                : 0U);
        __Vtemp23561[0x2fU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23556[0x2fU]
                                : 0U);
        __Vtemp23561[0x30U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23556[0x30U]
                                : 0U);
        __Vtemp23561[0x31U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23556[0x31U]
                                : 0U);
        __Vtemp23561[0x32U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23556[0x32U]
                                : 0U);
        __Vtemp23561[0x33U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23556[0x33U]
                                : 0U);
        __Vtemp23561[0x34U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23556[0x34U]
                                : 0U);
        __Vtemp23561[0x35U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23556[0x35U]
                                : 0U);
        __Vtemp23561[0x36U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23556[0x36U]
                                : 0U);
        __Vtemp23561[0x37U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23556[0x37U]
                                : 0U);
        __Vtemp23561[0x38U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23556[0x38U]
                                : 0U);
        __Vtemp23561[0x39U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23556[0x39U]
                                : 0U);
        __Vtemp23561[0x3aU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23556[0x3aU]
                                : 0U);
        __Vtemp23561[0x3bU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23556[0x3bU]
                                : 0U);
        __Vtemp23561[0x3cU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23556[0x3cU]
                                : 0U);
        __Vtemp23561[0x3dU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23556[0x3dU]
                                : 0U);
        __Vtemp23561[0x3eU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23556[0x3eU]
                                : 0U);
        __Vtemp23561[0x3fU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23556[0x3fU]
                                : 0U);
        __Vtemp23561[0x40U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23556[0x40U]
                                : 0U);
        __Vtemp23561[0x41U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23556[0x41U]
                                : 0U);
        __Vtemp23561[0x42U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23556[0x42U]
                                : 0U);
        __Vtemp23561[0x43U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23556[0x43U]
                                : 0U);
        __Vtemp23561[0x44U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23556[0x44U]
                                : 0U);
        __Vtemp23561[0x45U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23556[0x45U]
                                : 0U);
        __Vtemp23561[0x46U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23556[0x46U]
                                : 0U);
        __Vtemp23561[0x47U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23556[0x47U]
                                : 0U);
        __Vtemp23561[0x48U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23556[0x48U]
                                : 0U);
        __Vtemp23561[0x49U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23556[0x49U]
                                : 0U);
        __Vtemp23561[0x4aU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23556[0x4aU]
                                : 0U);
        __Vtemp23561[0x4bU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23556[0x4bU]
                                : 0U);
        __Vtemp23561[0x4cU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23556[0x4cU]
                                : 0U);
        __Vtemp23561[0x4dU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23556[0x4dU]
                                : 0U);
        __Vtemp23561[0x4eU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23556[0x4eU]
                                : 0U);
        __Vtemp23561[0x4fU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23556[0x4fU]
                                : 0U);
        __Vtemp23561[0x50U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23556[0x50U]
                                : 0U);
        __Vtemp23561[0x51U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23556[0x51U]
                                : 0U);
        __Vtemp23561[0x52U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23556[0x52U]
                                : 0U);
        __Vtemp23561[0x53U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23556[0x53U]
                                : 0U);
        __Vtemp23561[0x54U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23556[0x54U]
                                : 0U);
        __Vtemp23561[0x55U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23556[0x55U]
                                : 0U);
        __Vtemp23561[0x56U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23556[0x56U]
                                : 0U);
        __Vtemp23561[0x57U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23556[0x57U]
                                : 0U);
        __Vtemp23561[0x58U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23556[0x58U]
                                : 0U);
        __Vtemp23561[0x59U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23556[0x59U]
                                : 0U);
        __Vtemp23561[0x5aU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23556[0x5aU]
                                : 0U);
        __Vtemp23561[0x5bU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23556[0x5bU]
                                : 0U);
        __Vtemp23561[0x5cU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23556[0x5cU]
                                : 0U);
        __Vtemp23561[0x5dU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23556[0x5dU]
                                : 0U);
        __Vtemp23561[0x5eU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23556[0x5eU]
                                : 0U);
        __Vtemp23561[0x5fU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23556[0x5fU]
                                : 0U);
        __Vtemp23561[0x60U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23556[0x60U]
                                : 0U);
        __Vtemp23561[0x61U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23556[0x61U]
                                : 0U);
        __Vtemp23561[0x62U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23556[0x62U]
                                : 0U);
        __Vtemp23561[0x63U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23556[0x63U]
                                : 0U);
        __Vtemp23561[0x64U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23556[0x64U]
                                : 0U);
        __Vtemp23561[0x65U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23556[0x65U]
                                : 0U);
        __Vtemp23561[0x66U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23556[0x66U]
                                : 0U);
        __Vtemp23561[0x67U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23556[0x67U]
                                : 0U);
        __Vtemp23561[0x68U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23556[0x68U]
                                : 0U);
        __Vtemp23561[0x69U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23556[0x69U]
                                : 0U);
        __Vtemp23561[0x6aU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23556[0x6aU]
                                : 0U);
        __Vtemp23561[0x6bU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23556[0x6bU]
                                : 0U);
        __Vtemp23561[0x6cU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23556[0x6cU]
                                : 0U);
        __Vtemp23561[0x6dU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23556[0x6dU]
                                : 0U);
        __Vtemp23561[0x6eU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23556[0x6eU]
                                : 0U);
        __Vtemp23561[0x6fU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23556[0x6fU]
                                : 0U);
        __Vtemp23561[0x70U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23556[0x70U]
                                : 0U);
        __Vtemp23561[0x71U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23556[0x71U]
                                : 0U);
        __Vtemp23561[0x72U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23556[0x72U]
                                : 0U);
        __Vtemp23561[0x73U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23556[0x73U]
                                : 0U);
        __Vtemp23561[0x74U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23556[0x74U]
                                : 0U);
        __Vtemp23561[0x75U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23556[0x75U]
                                : 0U);
        __Vtemp23561[0x76U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23556[0x76U]
                                : 0U);
        __Vtemp23561[0x77U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23556[0x77U]
                                : 0U);
        __Vtemp23561[0x78U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23556[0x78U]
                                : 0U);
        __Vtemp23561[0x79U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23556[0x79U]
                                : 0U);
        __Vtemp23561[0x7aU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23556[0x7aU]
                                : 0U);
        __Vtemp23561[0x7bU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23556[0x7bU]
                                : 0U);
        __Vtemp23561[0x7cU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23556[0x7cU]
                                : 0U);
        __Vtemp23561[0x7dU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23556[0x7dU]
                                : 0U);
        __Vtemp23561[0x7eU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23556[0x7eU]
                                : 0U);
        __Vtemp23561[0x7fU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23556[0x7fU]
                                : 0U);
        __Vtemp23561[0x80U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23556[0x80U]
                                : 0U);
        __Vtemp23561[0x81U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23556[0x81U]
                                : 0U);
        vcdp->chgWData(oldp+33,(__Vtemp23561),4160);
        __Vilp = 0U;
        while ((__Vilp <= 0x81U)) {
            __Vtemp23562[__Vilp] = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT___GEN_23[__Vilp];
            __Vilp = ((IData)(1U) + __Vilp);
        }
        vcdp->chgWData(oldp+163,(__Vtemp23562),4160);
        VL_EXTEND_WI(16386,3, __Vtemp23564, (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                              & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                              ? (1U 
                                                 | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size
                                                    [0U] 
                                                    << 1U))
                                              : 0U));
        VL_SHIFTL_WWI(16386,16386,14, __Vtemp23565, __Vtemp23564, 
                      (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source
                       [0U] << 2U));
        __Vtemp23570[0U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                             ? __Vtemp23565[0U] : 0U);
        __Vtemp23570[1U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                             ? __Vtemp23565[1U] : 0U);
        __Vtemp23570[2U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                             ? __Vtemp23565[2U] : 0U);
        __Vtemp23570[3U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                             ? __Vtemp23565[3U] : 0U);
        __Vtemp23570[4U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                             ? __Vtemp23565[4U] : 0U);
        __Vtemp23570[5U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                             ? __Vtemp23565[5U] : 0U);
        __Vtemp23570[6U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                             ? __Vtemp23565[6U] : 0U);
        __Vtemp23570[7U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                             ? __Vtemp23565[7U] : 0U);
        __Vtemp23570[8U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                             ? __Vtemp23565[8U] : 0U);
        __Vtemp23570[9U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                             ? __Vtemp23565[9U] : 0U);
        __Vtemp23570[0xaU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                               & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                               ? __Vtemp23565[0xaU]
                               : 0U);
        __Vtemp23570[0xbU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                               & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                               ? __Vtemp23565[0xbU]
                               : 0U);
        __Vtemp23570[0xcU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                               & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                               ? __Vtemp23565[0xcU]
                               : 0U);
        __Vtemp23570[0xdU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                               & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                               ? __Vtemp23565[0xdU]
                               : 0U);
        __Vtemp23570[0xeU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                               & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                               ? __Vtemp23565[0xeU]
                               : 0U);
        __Vtemp23570[0xfU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                               & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                               ? __Vtemp23565[0xfU]
                               : 0U);
        __Vtemp23570[0x10U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23565[0x10U]
                                : 0U);
        __Vtemp23570[0x11U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23565[0x11U]
                                : 0U);
        __Vtemp23570[0x12U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23565[0x12U]
                                : 0U);
        __Vtemp23570[0x13U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23565[0x13U]
                                : 0U);
        __Vtemp23570[0x14U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23565[0x14U]
                                : 0U);
        __Vtemp23570[0x15U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23565[0x15U]
                                : 0U);
        __Vtemp23570[0x16U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23565[0x16U]
                                : 0U);
        __Vtemp23570[0x17U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23565[0x17U]
                                : 0U);
        __Vtemp23570[0x18U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23565[0x18U]
                                : 0U);
        __Vtemp23570[0x19U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23565[0x19U]
                                : 0U);
        __Vtemp23570[0x1aU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23565[0x1aU]
                                : 0U);
        __Vtemp23570[0x1bU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23565[0x1bU]
                                : 0U);
        __Vtemp23570[0x1cU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23565[0x1cU]
                                : 0U);
        __Vtemp23570[0x1dU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23565[0x1dU]
                                : 0U);
        __Vtemp23570[0x1eU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23565[0x1eU]
                                : 0U);
        __Vtemp23570[0x1fU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23565[0x1fU]
                                : 0U);
        __Vtemp23570[0x20U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23565[0x20U]
                                : 0U);
        __Vtemp23570[0x21U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23565[0x21U]
                                : 0U);
        __Vtemp23570[0x22U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23565[0x22U]
                                : 0U);
        __Vtemp23570[0x23U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23565[0x23U]
                                : 0U);
        __Vtemp23570[0x24U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23565[0x24U]
                                : 0U);
        __Vtemp23570[0x25U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23565[0x25U]
                                : 0U);
        __Vtemp23570[0x26U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23565[0x26U]
                                : 0U);
        __Vtemp23570[0x27U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23565[0x27U]
                                : 0U);
        __Vtemp23570[0x28U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23565[0x28U]
                                : 0U);
        __Vtemp23570[0x29U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23565[0x29U]
                                : 0U);
        __Vtemp23570[0x2aU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23565[0x2aU]
                                : 0U);
        __Vtemp23570[0x2bU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23565[0x2bU]
                                : 0U);
        __Vtemp23570[0x2cU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23565[0x2cU]
                                : 0U);
        __Vtemp23570[0x2dU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23565[0x2dU]
                                : 0U);
        __Vtemp23570[0x2eU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23565[0x2eU]
                                : 0U);
        __Vtemp23570[0x2fU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23565[0x2fU]
                                : 0U);
        __Vtemp23570[0x30U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23565[0x30U]
                                : 0U);
        __Vtemp23570[0x31U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23565[0x31U]
                                : 0U);
        __Vtemp23570[0x32U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23565[0x32U]
                                : 0U);
        __Vtemp23570[0x33U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23565[0x33U]
                                : 0U);
        __Vtemp23570[0x34U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23565[0x34U]
                                : 0U);
        __Vtemp23570[0x35U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23565[0x35U]
                                : 0U);
        __Vtemp23570[0x36U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23565[0x36U]
                                : 0U);
        __Vtemp23570[0x37U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23565[0x37U]
                                : 0U);
        __Vtemp23570[0x38U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23565[0x38U]
                                : 0U);
        __Vtemp23570[0x39U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23565[0x39U]
                                : 0U);
        __Vtemp23570[0x3aU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23565[0x3aU]
                                : 0U);
        __Vtemp23570[0x3bU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23565[0x3bU]
                                : 0U);
        __Vtemp23570[0x3cU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23565[0x3cU]
                                : 0U);
        __Vtemp23570[0x3dU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23565[0x3dU]
                                : 0U);
        __Vtemp23570[0x3eU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23565[0x3eU]
                                : 0U);
        __Vtemp23570[0x3fU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23565[0x3fU]
                                : 0U);
        __Vtemp23570[0x40U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23565[0x40U]
                                : 0U);
        __Vtemp23570[0x41U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23565[0x41U]
                                : 0U);
        __Vtemp23570[0x42U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23565[0x42U]
                                : 0U);
        __Vtemp23570[0x43U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23565[0x43U]
                                : 0U);
        __Vtemp23570[0x44U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23565[0x44U]
                                : 0U);
        __Vtemp23570[0x45U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23565[0x45U]
                                : 0U);
        __Vtemp23570[0x46U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23565[0x46U]
                                : 0U);
        __Vtemp23570[0x47U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23565[0x47U]
                                : 0U);
        __Vtemp23570[0x48U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23565[0x48U]
                                : 0U);
        __Vtemp23570[0x49U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23565[0x49U]
                                : 0U);
        __Vtemp23570[0x4aU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23565[0x4aU]
                                : 0U);
        __Vtemp23570[0x4bU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23565[0x4bU]
                                : 0U);
        __Vtemp23570[0x4cU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23565[0x4cU]
                                : 0U);
        __Vtemp23570[0x4dU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23565[0x4dU]
                                : 0U);
        __Vtemp23570[0x4eU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23565[0x4eU]
                                : 0U);
        __Vtemp23570[0x4fU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23565[0x4fU]
                                : 0U);
        __Vtemp23570[0x50U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23565[0x50U]
                                : 0U);
        __Vtemp23570[0x51U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23565[0x51U]
                                : 0U);
        __Vtemp23570[0x52U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23565[0x52U]
                                : 0U);
        __Vtemp23570[0x53U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23565[0x53U]
                                : 0U);
        __Vtemp23570[0x54U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23565[0x54U]
                                : 0U);
        __Vtemp23570[0x55U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23565[0x55U]
                                : 0U);
        __Vtemp23570[0x56U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23565[0x56U]
                                : 0U);
        __Vtemp23570[0x57U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23565[0x57U]
                                : 0U);
        __Vtemp23570[0x58U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23565[0x58U]
                                : 0U);
        __Vtemp23570[0x59U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23565[0x59U]
                                : 0U);
        __Vtemp23570[0x5aU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23565[0x5aU]
                                : 0U);
        __Vtemp23570[0x5bU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23565[0x5bU]
                                : 0U);
        __Vtemp23570[0x5cU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23565[0x5cU]
                                : 0U);
        __Vtemp23570[0x5dU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23565[0x5dU]
                                : 0U);
        __Vtemp23570[0x5eU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23565[0x5eU]
                                : 0U);
        __Vtemp23570[0x5fU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23565[0x5fU]
                                : 0U);
        __Vtemp23570[0x60U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23565[0x60U]
                                : 0U);
        __Vtemp23570[0x61U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23565[0x61U]
                                : 0U);
        __Vtemp23570[0x62U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23565[0x62U]
                                : 0U);
        __Vtemp23570[0x63U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23565[0x63U]
                                : 0U);
        __Vtemp23570[0x64U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23565[0x64U]
                                : 0U);
        __Vtemp23570[0x65U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23565[0x65U]
                                : 0U);
        __Vtemp23570[0x66U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23565[0x66U]
                                : 0U);
        __Vtemp23570[0x67U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23565[0x67U]
                                : 0U);
        __Vtemp23570[0x68U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23565[0x68U]
                                : 0U);
        __Vtemp23570[0x69U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23565[0x69U]
                                : 0U);
        __Vtemp23570[0x6aU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23565[0x6aU]
                                : 0U);
        __Vtemp23570[0x6bU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23565[0x6bU]
                                : 0U);
        __Vtemp23570[0x6cU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23565[0x6cU]
                                : 0U);
        __Vtemp23570[0x6dU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23565[0x6dU]
                                : 0U);
        __Vtemp23570[0x6eU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23565[0x6eU]
                                : 0U);
        __Vtemp23570[0x6fU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23565[0x6fU]
                                : 0U);
        __Vtemp23570[0x70U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23565[0x70U]
                                : 0U);
        __Vtemp23570[0x71U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23565[0x71U]
                                : 0U);
        __Vtemp23570[0x72U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23565[0x72U]
                                : 0U);
        __Vtemp23570[0x73U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23565[0x73U]
                                : 0U);
        __Vtemp23570[0x74U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23565[0x74U]
                                : 0U);
        __Vtemp23570[0x75U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23565[0x75U]
                                : 0U);
        __Vtemp23570[0x76U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23565[0x76U]
                                : 0U);
        __Vtemp23570[0x77U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23565[0x77U]
                                : 0U);
        __Vtemp23570[0x78U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23565[0x78U]
                                : 0U);
        __Vtemp23570[0x79U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23565[0x79U]
                                : 0U);
        __Vtemp23570[0x7aU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23565[0x7aU]
                                : 0U);
        __Vtemp23570[0x7bU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23565[0x7bU]
                                : 0U);
        __Vtemp23570[0x7cU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23565[0x7cU]
                                : 0U);
        __Vtemp23570[0x7dU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23565[0x7dU]
                                : 0U);
        __Vtemp23570[0x7eU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23565[0x7eU]
                                : 0U);
        __Vtemp23570[0x7fU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23565[0x7fU]
                                : 0U);
        __Vtemp23570[0x80U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23565[0x80U]
                                : 0U);
        __Vtemp23570[0x81U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp23565[0x81U]
                                : 0U);
        vcdp->chgWData(oldp+293,(__Vtemp23570),4160);
        vcdp->chgBit(oldp+423,(((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_back__DOT__maybe_full)) 
                                & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_back_io_enq_valid))));
        vcdp->chgBit(oldp+424,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_back__DOT__do_enq));
        vcdp->chgBit(oldp+425,((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__maybe_full)) 
                                 & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_oready)) 
                                & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_back__DOT__maybe_full))));
        vcdp->chgBit(oldp+426,((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__io_a_q__DOT__full)))));
        vcdp->chgBit(oldp+427,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA_io_req_valid));
    }
}
