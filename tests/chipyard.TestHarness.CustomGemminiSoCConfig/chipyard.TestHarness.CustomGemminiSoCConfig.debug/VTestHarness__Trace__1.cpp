// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VTestHarness__Syms.h"


void VTestHarness::traceChgThis__62(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+625);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(oldp+0,((1U & (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_address 
                                    >> 2U))));
        vcdp->chgBit(oldp+1,((1U & (~ (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_address 
                                       >> 2U)))));
        vcdp->chgBit(oldp+2,(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_acc));
        vcdp->chgBit(oldp+3,(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_acc_1));
        vcdp->chgBit(oldp+4,((1U & (((IData)(1U) << 
                                     (3U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag))) 
                                    >> 1U))));
        vcdp->chgBit(oldp+5,((1U & (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_address 
                                    >> 1U))));
        vcdp->chgBit(oldp+6,((1U & (~ (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_address 
                                       >> 1U)))));
        vcdp->chgBit(oldp+7,(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_eq_2));
        vcdp->chgBit(oldp+8,(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_acc_2));
        vcdp->chgBit(oldp+9,(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_eq_3));
        vcdp->chgBit(oldp+10,(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_acc_3));
        vcdp->chgBit(oldp+11,(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_eq_4));
        vcdp->chgBit(oldp+12,(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_acc_4));
        vcdp->chgBit(oldp+13,(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_eq_5));
        vcdp->chgBit(oldp+14,(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_acc_5));
        vcdp->chgBit(oldp+15,((1U & vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_address)));
        vcdp->chgBit(oldp+16,((1U & (~ vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_address))));
        vcdp->chgBit(oldp+17,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_eq_2) 
                               & (~ vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_address))));
        vcdp->chgBit(oldp+18,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_acc_2) 
                               | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_eq_2) 
                                  & (~ vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_address)))));
        vcdp->chgBit(oldp+19,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_eq_2) 
                               & vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_address)));
        vcdp->chgBit(oldp+20,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_acc_2) 
                               | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_eq_2) 
                                  & vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_address))));
    }
}

void VTestHarness::traceChgThis__64(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+646);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(oldp+0,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_eq_3) 
                              & (~ vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_address))));
        vcdp->chgBit(oldp+1,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_acc_3) 
                              | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_eq_3) 
                                 & (~ vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_address)))));
        vcdp->chgBit(oldp+2,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_eq_3) 
                              & vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_address)));
        vcdp->chgBit(oldp+3,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_acc_3) 
                              | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_eq_3) 
                                 & vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_address))));
        vcdp->chgBit(oldp+4,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_eq_4) 
                              & (~ vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_address))));
        vcdp->chgBit(oldp+5,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_acc_4) 
                              | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_eq_4) 
                                 & (~ vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_address)))));
        vcdp->chgBit(oldp+6,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_eq_4) 
                              & vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_address)));
        vcdp->chgBit(oldp+7,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_acc_4) 
                              | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_eq_4) 
                                 & vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_address))));
        vcdp->chgBit(oldp+8,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_eq_5) 
                              & (~ vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_address))));
        vcdp->chgBit(oldp+9,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_acc_5) 
                              | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_eq_5) 
                                 & (~ vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_address)))));
        vcdp->chgBit(oldp+10,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_eq_5) 
                               & vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_address)));
        vcdp->chgBit(oldp+11,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_acc_5) 
                               | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_eq_5) 
                                  & vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_address))));
    }
}

void VTestHarness::traceChgThis__66(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+658);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Variables
    // Begin mtask footprint all: 
    WData/*255:0*/ __Vtemp19156[8];
    WData/*255:0*/ __Vtemp19157[8];
    WData/*255:0*/ __Vtemp19160[8];
    WData/*255:0*/ __Vtemp19161[8];
    WData/*255:0*/ __Vtemp19162[8];
    WData/*255:0*/ __Vtemp19165[8];
    WData/*1023:0*/ __Vtemp19170[32];
    WData/*1023:0*/ __Vtemp19171[32];
    WData/*1023:0*/ __Vtemp19174[32];
    WData/*1023:0*/ __Vtemp19177[32];
    WData/*1023:0*/ __Vtemp19178[32];
    WData/*2079:0*/ __Vtemp19180[65];
    WData/*2079:0*/ __Vtemp19181[65];
    WData/*1023:0*/ __Vtemp19186[32];
    // Body
    {
        vcdp->chgCData(oldp+0,(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask),8);
        vcdp->chgBit(oldp+1,(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done));
        vcdp->chgBit(oldp+2,(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done));
        vcdp->chgCData(oldp+3,((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                                 & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                                 ? (1U | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode) 
                                          << 1U)) : 0U)),4);
        vcdp->chgCData(oldp+4,((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                                 & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                                 ? (1U | (6U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag) 
                                                << 1U)))
                                 : 0U)),3);
        __Vtemp19156[0U] = 1U;
        __Vtemp19156[1U] = 0U;
        __Vtemp19156[2U] = 0U;
        __Vtemp19156[3U] = 0U;
        __Vtemp19156[4U] = 0U;
        __Vtemp19156[5U] = 0U;
        __Vtemp19156[6U] = 0U;
        __Vtemp19156[7U] = 0U;
        VL_SHIFTL_WWI(256,256,8, __Vtemp19157, __Vtemp19156, (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source));
        __Vtemp19160[0U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                             ? __Vtemp19157[0U] : 0U);
        __Vtemp19160[1U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                             ? __Vtemp19157[1U] : 0U);
        __Vtemp19160[2U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                             ? __Vtemp19157[2U] : 0U);
        __Vtemp19160[3U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                             ? __Vtemp19157[3U] : 0U);
        __Vtemp19160[4U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                             ? __Vtemp19157[4U] : 0U);
        __Vtemp19160[5U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                             ? __Vtemp19157[5U] : 0U);
        __Vtemp19160[6U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                             ? __Vtemp19157[6U] : 0U);
        __Vtemp19160[7U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                             ? __Vtemp19157[7U] : 0U);
        vcdp->chgWData(oldp+5,(__Vtemp19160),256);
        __Vtemp19161[0U] = 1U;
        __Vtemp19161[1U] = 0U;
        __Vtemp19161[2U] = 0U;
        __Vtemp19161[3U] = 0U;
        __Vtemp19161[4U] = 0U;
        __Vtemp19161[5U] = 0U;
        __Vtemp19161[6U] = 0U;
        __Vtemp19161[7U] = 0U;
        VL_SHIFTL_WWI(256,256,8, __Vtemp19162, __Vtemp19161, (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source));
        __Vtemp19165[0U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter_1)))
                             ? __Vtemp19162[0U] : 0U);
        __Vtemp19165[1U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter_1)))
                             ? __Vtemp19162[1U] : 0U);
        __Vtemp19165[2U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter_1)))
                             ? __Vtemp19162[2U] : 0U);
        __Vtemp19165[3U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter_1)))
                             ? __Vtemp19162[3U] : 0U);
        __Vtemp19165[4U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter_1)))
                             ? __Vtemp19162[4U] : 0U);
        __Vtemp19165[5U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter_1)))
                             ? __Vtemp19162[5U] : 0U);
        __Vtemp19165[6U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter_1)))
                             ? __Vtemp19162[6U] : 0U);
        __Vtemp19165[7U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter_1)))
                             ? __Vtemp19162[7U] : 0U);
        vcdp->chgWData(oldp+13,(__Vtemp19165),256);
        vcdp->chgBit(oldp+21,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                               & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))));
        __Vtemp19170[0U] = (7U & (vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                                  >> 1U));
        __Vtemp19170[1U] = 0U;
        __Vtemp19170[2U] = 0U;
        __Vtemp19170[3U] = 0U;
        __Vtemp19170[4U] = 0U;
        __Vtemp19170[5U] = 0U;
        __Vtemp19170[6U] = 0U;
        __Vtemp19170[7U] = 0U;
        __Vtemp19170[8U] = 0U;
        __Vtemp19170[9U] = 0U;
        __Vtemp19170[0xaU] = 0U;
        __Vtemp19170[0xbU] = 0U;
        __Vtemp19170[0xcU] = 0U;
        __Vtemp19170[0xdU] = 0U;
        __Vtemp19170[0xeU] = 0U;
        __Vtemp19170[0xfU] = 0U;
        __Vtemp19170[0x10U] = 0U;
        __Vtemp19170[0x11U] = 0U;
        __Vtemp19170[0x12U] = 0U;
        __Vtemp19170[0x13U] = 0U;
        __Vtemp19170[0x14U] = 0U;
        __Vtemp19170[0x15U] = 0U;
        __Vtemp19170[0x16U] = 0U;
        __Vtemp19170[0x17U] = 0U;
        __Vtemp19170[0x18U] = 0U;
        __Vtemp19170[0x19U] = 0U;
        __Vtemp19170[0x1aU] = 0U;
        __Vtemp19170[0x1bU] = 0U;
        __Vtemp19170[0x1cU] = 0U;
        __Vtemp19170[0x1dU] = 0U;
        __Vtemp19170[0x1eU] = 0U;
        __Vtemp19170[0x1fU] = 0U;
        VL_EXTEND_WW(1024,1023, __Vtemp19171, __Vtemp19170);
        vcdp->chgCData(oldp+22,((0xfU & __Vtemp19171[0U])),4);
        VL_SHIFTR_WWI(1024,1024,11, __Vtemp19174, vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes, 
                      ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source) 
                       << 2U));
        __Vtemp19177[0U] = (7U & (__Vtemp19174[0U] 
                                  >> 1U));
        __Vtemp19177[1U] = 0U;
        __Vtemp19177[2U] = 0U;
        __Vtemp19177[3U] = 0U;
        __Vtemp19177[4U] = 0U;
        __Vtemp19177[5U] = 0U;
        __Vtemp19177[6U] = 0U;
        __Vtemp19177[7U] = 0U;
        __Vtemp19177[8U] = 0U;
        __Vtemp19177[9U] = 0U;
        __Vtemp19177[0xaU] = 0U;
        __Vtemp19177[0xbU] = 0U;
        __Vtemp19177[0xcU] = 0U;
        __Vtemp19177[0xdU] = 0U;
        __Vtemp19177[0xeU] = 0U;
        __Vtemp19177[0xfU] = 0U;
        __Vtemp19177[0x10U] = 0U;
        __Vtemp19177[0x11U] = 0U;
        __Vtemp19177[0x12U] = 0U;
        __Vtemp19177[0x13U] = 0U;
        __Vtemp19177[0x14U] = 0U;
        __Vtemp19177[0x15U] = 0U;
        __Vtemp19177[0x16U] = 0U;
        __Vtemp19177[0x17U] = 0U;
        __Vtemp19177[0x18U] = 0U;
        __Vtemp19177[0x19U] = 0U;
        __Vtemp19177[0x1aU] = 0U;
        __Vtemp19177[0x1bU] = 0U;
        __Vtemp19177[0x1cU] = 0U;
        __Vtemp19177[0x1dU] = 0U;
        __Vtemp19177[0x1eU] = 0U;
        __Vtemp19177[0x1fU] = 0U;
        VL_EXTEND_WW(1024,1023, __Vtemp19178, __Vtemp19177);
        vcdp->chgCData(oldp+23,((0xfU & __Vtemp19178[0U])),4);
        VL_EXTEND_WI(2051,4, __Vtemp19180, (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                                             ? (1U 
                                                | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode) 
                                                   << 1U))
                                             : 0U));
        VL_SHIFTL_WWI(2051,2051,11, __Vtemp19181, __Vtemp19180, 
                      ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source) 
                       << 2U));
        __Vtemp19186[0U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                             ? __Vtemp19181[0U] : 0U);
        __Vtemp19186[1U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                             ? __Vtemp19181[1U] : 0U);
        __Vtemp19186[2U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                             ? __Vtemp19181[2U] : 0U);
        __Vtemp19186[3U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                             ? __Vtemp19181[3U] : 0U);
        __Vtemp19186[4U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                             ? __Vtemp19181[4U] : 0U);
        __Vtemp19186[5U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                             ? __Vtemp19181[5U] : 0U);
        __Vtemp19186[6U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                             ? __Vtemp19181[6U] : 0U);
        __Vtemp19186[7U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                             ? __Vtemp19181[7U] : 0U);
        __Vtemp19186[8U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                             ? __Vtemp19181[8U] : 0U);
        __Vtemp19186[9U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                             ? __Vtemp19181[9U] : 0U);
        __Vtemp19186[0xaU] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                               & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                               ? __Vtemp19181[0xaU]
                               : 0U);
        __Vtemp19186[0xbU] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                               & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                               ? __Vtemp19181[0xbU]
                               : 0U);
        __Vtemp19186[0xcU] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                               & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                               ? __Vtemp19181[0xcU]
                               : 0U);
        __Vtemp19186[0xdU] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                               & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                               ? __Vtemp19181[0xdU]
                               : 0U);
        __Vtemp19186[0xeU] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                               & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                               ? __Vtemp19181[0xeU]
                               : 0U);
        __Vtemp19186[0xfU] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                               & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                               ? __Vtemp19181[0xfU]
                               : 0U);
        __Vtemp19186[0x10U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                                ? __Vtemp19181[0x10U]
                                : 0U);
        __Vtemp19186[0x11U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                                ? __Vtemp19181[0x11U]
                                : 0U);
        __Vtemp19186[0x12U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                                ? __Vtemp19181[0x12U]
                                : 0U);
        __Vtemp19186[0x13U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                                ? __Vtemp19181[0x13U]
                                : 0U);
        __Vtemp19186[0x14U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                                ? __Vtemp19181[0x14U]
                                : 0U);
        __Vtemp19186[0x15U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                                ? __Vtemp19181[0x15U]
                                : 0U);
        __Vtemp19186[0x16U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                                ? __Vtemp19181[0x16U]
                                : 0U);
        __Vtemp19186[0x17U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                                ? __Vtemp19181[0x17U]
                                : 0U);
        __Vtemp19186[0x18U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                                ? __Vtemp19181[0x18U]
                                : 0U);
        __Vtemp19186[0x19U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                                ? __Vtemp19181[0x19U]
                                : 0U);
        __Vtemp19186[0x1aU] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                                ? __Vtemp19181[0x1aU]
                                : 0U);
        __Vtemp19186[0x1bU] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                                ? __Vtemp19181[0x1bU]
                                : 0U);
        __Vtemp19186[0x1cU] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                                ? __Vtemp19181[0x1cU]
                                : 0U);
        __Vtemp19186[0x1dU] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                                ? __Vtemp19181[0x1dU]
                                : 0U);
        __Vtemp19186[0x1eU] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                                ? __Vtemp19181[0x1eU]
                                : 0U);
        __Vtemp19186[0x1fU] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                                ? __Vtemp19181[0x1fU]
                                : 0U);
        vcdp->chgWData(oldp+24,(__Vtemp19186),1024);
    }
}

void VTestHarness::traceChgThis__68(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+714);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Variables
    // Begin mtask footprint all: 
    WData/*1023:0*/ __Vtemp19196[32];
    WData/*2079:0*/ __Vtemp19198[65];
    WData/*2079:0*/ __Vtemp19199[65];
    WData/*1023:0*/ __Vtemp19204[32];
    // Body
    {
        __Vtemp19196[0U] = vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0U];
        __Vtemp19196[1U] = vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[1U];
        __Vtemp19196[2U] = vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[2U];
        __Vtemp19196[3U] = vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[3U];
        __Vtemp19196[4U] = vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[4U];
        __Vtemp19196[5U] = vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[5U];
        __Vtemp19196[6U] = vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[6U];
        __Vtemp19196[7U] = vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[7U];
        __Vtemp19196[8U] = vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[8U];
        __Vtemp19196[9U] = vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[9U];
        __Vtemp19196[0xaU] = vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0xaU];
        __Vtemp19196[0xbU] = vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0xbU];
        __Vtemp19196[0xcU] = vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0xcU];
        __Vtemp19196[0xdU] = vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0xdU];
        __Vtemp19196[0xeU] = vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0xeU];
        __Vtemp19196[0xfU] = vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0xfU];
        __Vtemp19196[0x10U] = vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0x10U];
        __Vtemp19196[0x11U] = vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0x11U];
        __Vtemp19196[0x12U] = vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0x12U];
        __Vtemp19196[0x13U] = vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0x13U];
        __Vtemp19196[0x14U] = vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0x14U];
        __Vtemp19196[0x15U] = vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0x15U];
        __Vtemp19196[0x16U] = vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0x16U];
        __Vtemp19196[0x17U] = vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0x17U];
        __Vtemp19196[0x18U] = vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0x18U];
        __Vtemp19196[0x19U] = vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0x19U];
        __Vtemp19196[0x1aU] = vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0x1aU];
        __Vtemp19196[0x1bU] = vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0x1bU];
        __Vtemp19196[0x1cU] = vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0x1cU];
        __Vtemp19196[0x1dU] = vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0x1dU];
        __Vtemp19196[0x1eU] = vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0x1eU];
        __Vtemp19196[0x1fU] = vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0x1fU];
        vcdp->chgWData(oldp+0,(__Vtemp19196),1024);
        VL_EXTEND_WI(2050,3, __Vtemp19198, (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                                             ? (1U 
                                                | (6U 
                                                   & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag) 
                                                      << 1U)))
                                             : 0U));
        VL_SHIFTL_WWI(2050,2050,11, __Vtemp19199, __Vtemp19198, 
                      ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source) 
                       << 2U));
        __Vtemp19204[0U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                             ? __Vtemp19199[0U] : 0U);
        __Vtemp19204[1U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                             ? __Vtemp19199[1U] : 0U);
        __Vtemp19204[2U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                             ? __Vtemp19199[2U] : 0U);
        __Vtemp19204[3U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                             ? __Vtemp19199[3U] : 0U);
        __Vtemp19204[4U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                             ? __Vtemp19199[4U] : 0U);
        __Vtemp19204[5U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                             ? __Vtemp19199[5U] : 0U);
        __Vtemp19204[6U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                             ? __Vtemp19199[6U] : 0U);
        __Vtemp19204[7U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                             ? __Vtemp19199[7U] : 0U);
        __Vtemp19204[8U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                             ? __Vtemp19199[8U] : 0U);
        __Vtemp19204[9U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                             ? __Vtemp19199[9U] : 0U);
        __Vtemp19204[0xaU] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                               & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                               ? __Vtemp19199[0xaU]
                               : 0U);
        __Vtemp19204[0xbU] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                               & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                               ? __Vtemp19199[0xbU]
                               : 0U);
        __Vtemp19204[0xcU] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                               & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                               ? __Vtemp19199[0xcU]
                               : 0U);
        __Vtemp19204[0xdU] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                               & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                               ? __Vtemp19199[0xdU]
                               : 0U);
        __Vtemp19204[0xeU] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                               & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                               ? __Vtemp19199[0xeU]
                               : 0U);
        __Vtemp19204[0xfU] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                               & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                               ? __Vtemp19199[0xfU]
                               : 0U);
        __Vtemp19204[0x10U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                                ? __Vtemp19199[0x10U]
                                : 0U);
        __Vtemp19204[0x11U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                                ? __Vtemp19199[0x11U]
                                : 0U);
        __Vtemp19204[0x12U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                                ? __Vtemp19199[0x12U]
                                : 0U);
        __Vtemp19204[0x13U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                                ? __Vtemp19199[0x13U]
                                : 0U);
        __Vtemp19204[0x14U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                                ? __Vtemp19199[0x14U]
                                : 0U);
        __Vtemp19204[0x15U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                                ? __Vtemp19199[0x15U]
                                : 0U);
        __Vtemp19204[0x16U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                                ? __Vtemp19199[0x16U]
                                : 0U);
        __Vtemp19204[0x17U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                                ? __Vtemp19199[0x17U]
                                : 0U);
        __Vtemp19204[0x18U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                                ? __Vtemp19199[0x18U]
                                : 0U);
        __Vtemp19204[0x19U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                                ? __Vtemp19199[0x19U]
                                : 0U);
        __Vtemp19204[0x1aU] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                                ? __Vtemp19199[0x1aU]
                                : 0U);
        __Vtemp19204[0x1bU] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                                ? __Vtemp19199[0x1bU]
                                : 0U);
        __Vtemp19204[0x1cU] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                                ? __Vtemp19199[0x1cU]
                                : 0U);
        __Vtemp19204[0x1dU] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                                ? __Vtemp19199[0x1dU]
                                : 0U);
        __Vtemp19204[0x1eU] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                                ? __Vtemp19199[0x1eU]
                                : 0U);
        __Vtemp19204[0x1fU] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                                ? __Vtemp19199[0x1fU]
                                : 0U);
        vcdp->chgWData(oldp+32,(__Vtemp19204),1024);
        vcdp->chgBit(oldp+64,(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_a_ready));
        vcdp->chgBit(oldp+65,(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_valid));
        vcdp->chgCData(oldp+66,(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_opcode),3);
        vcdp->chgCData(oldp+67,(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_param),2);
        vcdp->chgCData(oldp+68,(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_size),3);
        vcdp->chgCData(oldp+69,(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_source),4);
        vcdp->chgBit(oldp+70,(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_sink));
        vcdp->chgBit(oldp+71,(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_denied));
        vcdp->chgCData(oldp+72,(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__readys_valid),2);
        vcdp->chgCData(oldp+73,(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__readys_filter),4);
        vcdp->chgCData(oldp+74,(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__readys_unready),4);
        vcdp->chgCData(oldp+75,((3U & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT___readys_readys_T_2)))),2);
        vcdp->chgBit(oldp+76,((1U & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT___readys_readys_T_2)))));
        vcdp->chgBit(oldp+77,(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__earlyWinner_0));
        vcdp->chgBit(oldp+78,(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__muxStateEarly_0));
        vcdp->chgBit(oldp+79,((1U & (~ ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT___readys_readys_T_2) 
                                        >> 1U)))));
        vcdp->chgBit(oldp+80,(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__earlyWinner_1));
        vcdp->chgBit(oldp+81,(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__muxStateEarly_1));
        vcdp->chgBit(oldp+82,((0U == (0x10000000U & 
                                      (0x10000000U 
                                       ^ ((vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                           << 0x16U) 
                                          | (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                             >> 0xaU)))))));
        vcdp->chgBit(oldp+83,((0U == (0x10000000U & 
                                      ((vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                        << 0x16U) | 
                                       (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                        >> 0xaU))))));
    }
}

void VTestHarness::traceChgThis__70(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+798);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgCData(oldp+0,((7U & (~ (0x3ffU & (
                                                   ((IData)(0x3fU) 
                                                    << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_in_d_bits_size)) 
                                                   >> 3U))))),3);
        vcdp->chgBit(oldp+1,((1U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))));
        vcdp->chgCData(oldp+2,(((1U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))
                                 ? (7U & (~ (0x3ffU 
                                             & (((IData)(0x3fU) 
                                                 << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_in_d_bits_size)) 
                                                >> 3U))))
                                 : 0U)),3);
        vcdp->chgCData(oldp+3,((7U & (~ (0x3ffU & (
                                                   ((IData)(0x3fU) 
                                                    << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_in_d_bits_size)) 
                                                   >> 3U))))),3);
        vcdp->chgBit(oldp+4,(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__latch));
        vcdp->chgCData(oldp+5,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__earlyWinner_0)
                                 ? ((1U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))
                                     ? (7U & (~ (0x3ffU 
                                                 & (((IData)(0x3fU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_in_d_bits_size)) 
                                                    >> 3U))))
                                     : 0U) : 0U)),3);
        vcdp->chgCData(oldp+6,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__earlyWinner_1)
                                 ? (7U & (~ (0x3ffU 
                                             & (((IData)(0x3fU) 
                                                 << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_in_d_bits_size)) 
                                                >> 3U))))
                                 : 0U)),3);
        vcdp->chgCData(oldp+7,((7U & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__earlyWinner_0)
                                        ? ((1U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))
                                            ? (~ (0x3ffU 
                                                  & (((IData)(0x3fU) 
                                                      << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_in_d_bits_size)) 
                                                     >> 3U)))
                                            : 0U) : 0U) 
                                      | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__earlyWinner_1)
                                          ? (~ (0x3ffU 
                                                & (((IData)(0x3fU) 
                                                    << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_in_d_bits_size)) 
                                                   >> 3U)))
                                          : 0U)))),3);
        vcdp->chgBit(oldp+8,(((0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__beatsLeft))
                               ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT___T_10)
                               : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT___sink_ACancel_earlyValid_T_3))));
        vcdp->chgBit(oldp+9,((1U & ((0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__beatsLeft))
                                     ? (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT___readys_readys_T_2))
                                     : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__state_0)))));
    }
}

void VTestHarness::traceChgThis__72(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+808);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(oldp+0,((1U & ((0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__beatsLeft))
                                     ? (~ ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT___readys_readys_T_2) 
                                           >> 1U)) : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__state_1)))));
        vcdp->chgCData(oldp+1,((0x3fU & (~ (0x1fffU 
                                            & ((IData)(0x3fU) 
                                               << (7U 
                                                   & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                      >> 0xeU))))))),6);
        vcdp->chgBit(oldp+2,((0U == (0x3fU & (((vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                << 0x16U) 
                                               | (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                                  >> 0xaU)) 
                                              & (~ 
                                                 (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << 
                                                     (7U 
                                                      & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                         >> 0xeU))))))))));
        vcdp->chgCData(oldp+3,((3U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                      >> 0xeU))),2);
        vcdp->chgCData(oldp+4,((7U & (1U | (0xfU & 
                                            ((IData)(1U) 
                                             << (3U 
                                                 & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                    >> 0xeU))))))),3);
        vcdp->chgBit(oldp+5,((1U & (((IData)(1U) << 
                                     (3U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                            >> 0xeU))) 
                                    >> 2U))));
        vcdp->chgBit(oldp+6,((1U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                    >> 0xcU))));
        vcdp->chgBit(oldp+7,((1U & (~ (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                       >> 0xcU)))));
        vcdp->chgBit(oldp+8,(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_acc));
        vcdp->chgBit(oldp+9,(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_acc_1));
        vcdp->chgBit(oldp+10,((1U & (((IData)(1U) << 
                                      (3U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                             >> 0xeU))) 
                                     >> 1U))));
    }
}

void VTestHarness::traceChgThis__74(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+819);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(oldp+0,((1U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                    >> 0xbU))));
        vcdp->chgBit(oldp+1,((1U & (~ (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                       >> 0xbU)))));
        vcdp->chgBit(oldp+2,(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_eq_2));
        vcdp->chgBit(oldp+3,(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_acc_2));
        vcdp->chgBit(oldp+4,(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_eq_3));
        vcdp->chgBit(oldp+5,(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_acc_3));
        vcdp->chgBit(oldp+6,(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_eq_4));
        vcdp->chgBit(oldp+7,(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_acc_4));
        vcdp->chgBit(oldp+8,(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_eq_5));
        vcdp->chgBit(oldp+9,(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_acc_5));
        vcdp->chgBit(oldp+10,((1U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                     >> 0xaU))));
        vcdp->chgBit(oldp+11,((1U & (~ (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                        >> 0xaU)))));
        vcdp->chgBit(oldp+12,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_eq_2) 
                               & (~ (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                     >> 0xaU)))));
        vcdp->chgBit(oldp+13,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_acc_2) 
                               | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_eq_2) 
                                  & (~ (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                        >> 0xaU))))));
        vcdp->chgBit(oldp+14,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_eq_2) 
                               & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                  >> 0xaU))));
        vcdp->chgBit(oldp+15,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_acc_2) 
                               | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_eq_2) 
                                  & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                     >> 0xaU)))));
        vcdp->chgBit(oldp+16,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_eq_3) 
                               & (~ (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                     >> 0xaU)))));
        vcdp->chgBit(oldp+17,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_acc_3) 
                               | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_eq_3) 
                                  & (~ (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                        >> 0xaU))))));
        vcdp->chgBit(oldp+18,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_eq_3) 
                               & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                  >> 0xaU))));
        vcdp->chgBit(oldp+19,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_acc_3) 
                               | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_eq_3) 
                                  & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                     >> 0xaU)))));
    }
}

void VTestHarness::traceChgThis__76(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+839);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(oldp+0,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_eq_4) 
                              & (~ (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                    >> 0xaU)))));
        vcdp->chgBit(oldp+1,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_acc_4) 
                              | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_eq_4) 
                                 & (~ (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                       >> 0xaU))))));
        vcdp->chgBit(oldp+2,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_eq_4) 
                              & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                 >> 0xaU))));
        vcdp->chgBit(oldp+3,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_acc_4) 
                              | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_eq_4) 
                                 & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                    >> 0xaU)))));
        vcdp->chgBit(oldp+4,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_eq_5) 
                              & (~ (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                    >> 0xaU)))));
        vcdp->chgBit(oldp+5,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_acc_5) 
                              | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_eq_5) 
                                 & (~ (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                       >> 0xaU))))));
        vcdp->chgBit(oldp+6,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_eq_5) 
                              & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                 >> 0xaU))));
        vcdp->chgBit(oldp+7,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_acc_5) 
                              | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_eq_5) 
                                 & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                    >> 0xaU)))));
        vcdp->chgCData(oldp+8,(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask),8);
        vcdp->chgCData(oldp+9,((7U & (~ (0x3ffU & (
                                                   ((IData)(0x3fU) 
                                                    << 
                                                    (7U 
                                                     & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                        >> 0xeU))) 
                                                   >> 3U))))),3);
        vcdp->chgBit(oldp+10,((1U & (~ (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                        >> 0x17U)))));
        vcdp->chgCData(oldp+11,((7U & (~ (0x3ffU & 
                                          (((IData)(0x3fU) 
                                            << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_size)) 
                                           >> 3U))))),3);
        vcdp->chgBit(oldp+12,((1U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))));
        vcdp->chgCData(oldp+13,((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                                  & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                                  ? (1U | (0xeU & (
                                                   vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                   >> 0x14U)))
                                  : 0U)),4);
    }
}

void VTestHarness::traceChgThis__78(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+853);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Variables
    // Begin mtask footprint all: 
    WData/*159:0*/ __Vtemp19213[5];
    WData/*159:0*/ __Vtemp19214[5];
    // Body
    {
        vcdp->chgCData(oldp+0,((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                                 & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                                 ? (1U | (0xeU & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                  >> 0xdU)))
                                 : 0U)),4);
        vcdp->chgSData(oldp+1,((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                                 & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                                 ? (0xffffU & ((IData)(1U) 
                                               << (0xfU 
                                                   & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                      >> 0xaU))))
                                 : 0U)),16);
        vcdp->chgSData(oldp+2,(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT___d_first_T) 
                                  & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__d_first_counter_1))) 
                                 & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                                 ? (0xffffU & ((IData)(1U) 
                                               << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_source)))
                                 : 0U)),16);
        vcdp->chgBit(oldp+3,((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
                               & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__a_first_counter_1))) 
                              & ((0xfU & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0xaU)) 
                                 == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_source)))));
        vcdp->chgCData(oldp+4,((0xfU & (IData)((VL_ULL(7) 
                                                & (vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                   >> 1U))))),4);
        vcdp->chgCData(oldp+5,((0xfU & (IData)((VL_ULL(0x7fffffffffffffff) 
                                                & (((0x3fU 
                                                     >= 
                                                     ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                      << 2U))
                                                     ? 
                                                    (VL_ULL(0xf) 
                                                     & (vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__inflight_sizes 
                                                        >> 
                                                        ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                         << 2U)))
                                                     : VL_ULL(0)) 
                                                   >> 1U))))),4);
        VL_EXTEND_WI(131,4, __Vtemp19213, (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                                            & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                                            ? (1U | 
                                               (0xeU 
                                                & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                   >> 0x14U)))
                                            : 0U));
        VL_SHIFTL_WWI(131,131,7, __Vtemp19214, __Vtemp19213, 
                      (0x3cU & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                >> 8U)));
        vcdp->chgQData(oldp+6,((((QData)((IData)((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                                                   & (0U 
                                                      == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                                                   ? 
                                                  __Vtemp19214[1U]
                                                   : 0U))) 
                                 << 0x20U) | (QData)((IData)(
                                                             (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                                                               & (0U 
                                                                  == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                                                               ? 
                                                              __Vtemp19214[0U]
                                                               : 0U))))),64);
    }
}

void VTestHarness::traceChgThis__80(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+861);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Variables
    // Begin mtask footprint all: 
    WData/*159:0*/ __Vtemp19234[5];
    WData/*159:0*/ __Vtemp19235[5];
    WData/*159:0*/ __Vtemp19241[5];
    WData/*159:0*/ __Vtemp19242[5];
    // Body
    {
        vcdp->chgQData(oldp+0,((((QData)((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT___GEN_23[1U])) 
                                 << 0x20U) | (QData)((IData)(
                                                             vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT___GEN_23[0U])))),64);
        VL_EXTEND_WI(131,4, __Vtemp19234, (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                                            & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                                            ? (1U | 
                                               (0xeU 
                                                & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                   >> 0xdU)))
                                            : 0U));
        VL_SHIFTL_WWI(131,131,7, __Vtemp19235, __Vtemp19234, 
                      (0x3cU & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                >> 8U)));
        vcdp->chgQData(oldp+2,((((QData)((IData)((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                                                   & (0U 
                                                      == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                                                   ? 
                                                  __Vtemp19235[1U]
                                                   : 0U))) 
                                 << 0x20U) | (QData)((IData)(
                                                             (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                                                               & (0U 
                                                                  == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                                                               ? 
                                                              __Vtemp19235[0U]
                                                               : 0U))))),64);
        vcdp->chgSData(oldp+4,(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT___d_first_T) 
                                  & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__d_first_counter_2))) 
                                 & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                                 ? (0xffffU & ((IData)(1U) 
                                               << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_source)))
                                 : 0U)),16);
        vcdp->chgCData(oldp+5,((0xfU & (IData)((VL_ULL(0x7fffffffffffffff) 
                                                & (((0x3fU 
                                                     >= 
                                                     ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                      << 2U))
                                                     ? 
                                                    (VL_ULL(0xf) 
                                                     & (vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1 
                                                        >> 
                                                        ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                         << 2U)))
                                                     : VL_ULL(0)) 
                                                   >> 1U))))),4);
        __Vtemp19241[0U] = 0xfU;
        __Vtemp19241[1U] = 0U;
        __Vtemp19241[2U] = 0U;
        __Vtemp19241[3U] = 0U;
        __Vtemp19241[4U] = 0U;
        VL_SHIFTL_WWI(143,143,7, __Vtemp19242, __Vtemp19241, 
                      ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                       << 2U));
        vcdp->chgQData(oldp+6,((((QData)((IData)(((
                                                   ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT___d_first_T) 
                                                    & (0U 
                                                       == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__d_first_counter_2))) 
                                                   & (6U 
                                                      == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                                                   ? 
                                                  __Vtemp19242[1U]
                                                   : 0U))) 
                                 << 0x20U) | (QData)((IData)(
                                                             ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT___d_first_T) 
                                                                & (0U 
                                                                   == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__d_first_counter_2))) 
                                                               & (6U 
                                                                  == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                                                               ? 
                                                              __Vtemp19242[0U]
                                                               : 0U))))),64);
        vcdp->chgCData(oldp+8,((7U & (~ (0x3fU & ((IData)(7U) 
                                                  << 
                                                  (3U 
                                                   & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__aFrag))))))),3);
    }
}

void VTestHarness::traceChgThis__82(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+870);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(oldp+0,((0U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address 
                                           & (~ (0x3fU 
                                                 & ((IData)(7U) 
                                                    << 
                                                    (3U 
                                                     & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__aFrag))))))))));
        vcdp->chgCData(oldp+1,((7U & (1U | (0xfU & 
                                            ((IData)(1U) 
                                             << (3U 
                                                 & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__aFrag))))))),3);
        vcdp->chgBit(oldp+2,((1U & (((IData)(1U) << 
                                     (3U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__aFrag))) 
                                    >> 2U))));
        vcdp->chgBit(oldp+3,((1U & (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address 
                                    >> 2U))));
        vcdp->chgBit(oldp+4,((1U & (~ (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address 
                                       >> 2U)))));
        vcdp->chgBit(oldp+5,(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_acc));
        vcdp->chgBit(oldp+6,(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_acc_1));
        vcdp->chgBit(oldp+7,((1U & (((IData)(1U) << 
                                     (3U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__aFrag))) 
                                    >> 1U))));
        vcdp->chgBit(oldp+8,((1U & (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address 
                                    >> 1U))));
        vcdp->chgBit(oldp+9,((1U & (~ (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address 
                                       >> 1U)))));
        vcdp->chgBit(oldp+10,(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_eq_2));
        vcdp->chgBit(oldp+11,(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_acc_2));
        vcdp->chgBit(oldp+12,(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_eq_3));
        vcdp->chgBit(oldp+13,(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_acc_3));
        vcdp->chgBit(oldp+14,(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_eq_4));
        vcdp->chgBit(oldp+15,(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_acc_4));
        vcdp->chgBit(oldp+16,(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_eq_5));
        vcdp->chgBit(oldp+17,(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_acc_5));
        vcdp->chgBit(oldp+18,((1U & vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address)));
    }
}

void VTestHarness::traceChgThis__84(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+889);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(oldp+0,((1U & (~ vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address))));
        vcdp->chgBit(oldp+1,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_eq_2) 
                              & (~ vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address))));
        vcdp->chgBit(oldp+2,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_acc_2) 
                              | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_eq_2) 
                                 & (~ vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address)))));
        vcdp->chgBit(oldp+3,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_eq_2) 
                              & vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address)));
        vcdp->chgBit(oldp+4,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_acc_2) 
                              | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_eq_2) 
                                 & vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address))));
        vcdp->chgBit(oldp+5,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_eq_3) 
                              & (~ vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address))));
        vcdp->chgBit(oldp+6,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_acc_3) 
                              | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_eq_3) 
                                 & (~ vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address)))));
        vcdp->chgBit(oldp+7,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_eq_3) 
                              & vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address)));
        vcdp->chgBit(oldp+8,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_acc_3) 
                              | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_eq_3) 
                                 & vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address))));
        vcdp->chgBit(oldp+9,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_eq_4) 
                              & (~ vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address))));
        vcdp->chgBit(oldp+10,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_acc_4) 
                               | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_eq_4) 
                                  & (~ vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address)))));
        vcdp->chgBit(oldp+11,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_eq_4) 
                               & vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address)));
        vcdp->chgBit(oldp+12,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_acc_4) 
                               | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_eq_4) 
                                  & vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address))));
    }
}

void VTestHarness::traceChgThis__86(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+902);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Variables
    // Begin mtask footprint all: 
    WData/*255:0*/ __Vtemp19262[8];
    WData/*255:0*/ __Vtemp19263[8];
    WData/*255:0*/ __Vtemp19266[8];
    WData/*255:0*/ __Vtemp19267[8];
    WData/*255:0*/ __Vtemp19268[8];
    WData/*255:0*/ __Vtemp19271[8];
    WData/*255:0*/ __Vtemp19272[8];
    WData/*255:0*/ __Vtemp19273[8];
    WData/*255:0*/ __Vtemp19276[8];
    // Body
    {
        vcdp->chgBit(oldp+0,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_eq_5) 
                              & (~ vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address))));
        vcdp->chgBit(oldp+1,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_acc_5) 
                              | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_eq_5) 
                                 & (~ vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address)))));
        vcdp->chgBit(oldp+2,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_eq_5) 
                              & vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address)));
        vcdp->chgBit(oldp+3,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_acc_5) 
                              | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_eq_5) 
                                 & vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address))));
        vcdp->chgCData(oldp+4,(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask),8);
        vcdp->chgBit(oldp+5,(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done));
        vcdp->chgBit(oldp+6,(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done));
        vcdp->chgWData(oldp+7,(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_set_wo_ready),256);
        vcdp->chgCData(oldp+15,((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                                  & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                  ? (1U | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode) 
                                           << 1U)) : 0U)),4);
        vcdp->chgCData(oldp+16,((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                                  & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                  ? (1U | (6U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__aFrag) 
                                                 << 1U)))
                                  : 0U)),3);
        __Vtemp19262[0U] = 1U;
        __Vtemp19262[1U] = 0U;
        __Vtemp19262[2U] = 0U;
        __Vtemp19262[3U] = 0U;
        __Vtemp19262[4U] = 0U;
        __Vtemp19262[5U] = 0U;
        __Vtemp19262[6U] = 0U;
        __Vtemp19262[7U] = 0U;
        VL_SHIFTL_WWI(256,256,8, __Vtemp19263, __Vtemp19262, (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_source));
        __Vtemp19266[0U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                             ? __Vtemp19263[0U] : 0U);
        __Vtemp19266[1U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                             ? __Vtemp19263[1U] : 0U);
        __Vtemp19266[2U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                             ? __Vtemp19263[2U] : 0U);
        __Vtemp19266[3U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                             ? __Vtemp19263[3U] : 0U);
        __Vtemp19266[4U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                             ? __Vtemp19263[4U] : 0U);
        __Vtemp19266[5U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                             ? __Vtemp19263[5U] : 0U);
        __Vtemp19266[6U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                             ? __Vtemp19263[6U] : 0U);
        __Vtemp19266[7U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                             ? __Vtemp19263[7U] : 0U);
        vcdp->chgWData(oldp+17,(__Vtemp19266),256);
        __Vtemp19267[0U] = 1U;
        __Vtemp19267[1U] = 0U;
        __Vtemp19267[2U] = 0U;
        __Vtemp19267[3U] = 0U;
        __Vtemp19267[4U] = 0U;
        __Vtemp19267[5U] = 0U;
        __Vtemp19267[6U] = 0U;
        __Vtemp19267[7U] = 0U;
        VL_SHIFTL_WWI(256,256,8, __Vtemp19268, __Vtemp19267, (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data));
        __Vtemp19271[0U] = ((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                              & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                             & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                             ? __Vtemp19268[0U] : 0U);
        __Vtemp19271[1U] = ((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                              & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                             & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                             ? __Vtemp19268[1U] : 0U);
        __Vtemp19271[2U] = ((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                              & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                             & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                             ? __Vtemp19268[2U] : 0U);
        __Vtemp19271[3U] = ((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                              & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                             & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                             ? __Vtemp19268[3U] : 0U);
        __Vtemp19271[4U] = ((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                              & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                             & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                             ? __Vtemp19268[4U] : 0U);
        __Vtemp19271[5U] = ((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                              & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                             & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                             ? __Vtemp19268[5U] : 0U);
        __Vtemp19271[6U] = ((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                              & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                             & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                             ? __Vtemp19268[6U] : 0U);
        __Vtemp19271[7U] = ((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                              & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                             & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                             ? __Vtemp19268[7U] : 0U);
        vcdp->chgWData(oldp+25,(__Vtemp19271),256);
        __Vtemp19272[0U] = 1U;
        __Vtemp19272[1U] = 0U;
        __Vtemp19272[2U] = 0U;
        __Vtemp19272[3U] = 0U;
        __Vtemp19272[4U] = 0U;
        __Vtemp19272[5U] = 0U;
        __Vtemp19272[6U] = 0U;
        __Vtemp19272[7U] = 0U;
        VL_SHIFTL_WWI(256,256,8, __Vtemp19273, __Vtemp19272, (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data));
        __Vtemp19276[0U] = ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
                              & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                             & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                             ? __Vtemp19273[0U] : 0U);
        __Vtemp19276[1U] = ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
                              & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                             & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                             ? __Vtemp19273[1U] : 0U);
        __Vtemp19276[2U] = ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
                              & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                             & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                             ? __Vtemp19273[2U] : 0U);
        __Vtemp19276[3U] = ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
                              & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                             & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                             ? __Vtemp19273[3U] : 0U);
        __Vtemp19276[4U] = ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
                              & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                             & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                             ? __Vtemp19273[4U] : 0U);
        __Vtemp19276[5U] = ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
                              & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                             & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                             ? __Vtemp19273[5U] : 0U);
        __Vtemp19276[6U] = ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
                              & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                             & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                             ? __Vtemp19273[6U] : 0U);
        __Vtemp19276[7U] = ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
                              & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                             & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                             ? __Vtemp19273[7U] : 0U);
        vcdp->chgWData(oldp+33,(__Vtemp19276),256);
    }
}

void VTestHarness::traceChgThis__88(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+943);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Variables
    // Begin mtask footprint all: 
    WData/*1023:0*/ __Vtemp19316[32];
    WData/*1023:0*/ __Vtemp19317[32];
    WData/*1023:0*/ __Vtemp19320[32];
    WData/*1023:0*/ __Vtemp19323[32];
    WData/*1023:0*/ __Vtemp19324[32];
    WData/*2079:0*/ __Vtemp19326[65];
    WData/*2079:0*/ __Vtemp19327[65];
    WData/*1023:0*/ __Vtemp19332[32];
    WData/*1023:0*/ __Vtemp19333[32];
    WData/*2079:0*/ __Vtemp19335[65];
    WData/*2079:0*/ __Vtemp19336[65];
    WData/*1023:0*/ __Vtemp19341[32];
    WData/*255:0*/ __Vtemp19342[8];
    WData/*255:0*/ __Vtemp19343[8];
    WData/*255:0*/ __Vtemp19346[8];
    // Body
    {
        vcdp->chgBit(oldp+0,((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                               & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1))) 
                              & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_source) 
                                 == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)))));
        __Vtemp19316[0U] = (7U & (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                                  >> 1U));
        __Vtemp19316[1U] = 0U;
        __Vtemp19316[2U] = 0U;
        __Vtemp19316[3U] = 0U;
        __Vtemp19316[4U] = 0U;
        __Vtemp19316[5U] = 0U;
        __Vtemp19316[6U] = 0U;
        __Vtemp19316[7U] = 0U;
        __Vtemp19316[8U] = 0U;
        __Vtemp19316[9U] = 0U;
        __Vtemp19316[0xaU] = 0U;
        __Vtemp19316[0xbU] = 0U;
        __Vtemp19316[0xcU] = 0U;
        __Vtemp19316[0xdU] = 0U;
        __Vtemp19316[0xeU] = 0U;
        __Vtemp19316[0xfU] = 0U;
        __Vtemp19316[0x10U] = 0U;
        __Vtemp19316[0x11U] = 0U;
        __Vtemp19316[0x12U] = 0U;
        __Vtemp19316[0x13U] = 0U;
        __Vtemp19316[0x14U] = 0U;
        __Vtemp19316[0x15U] = 0U;
        __Vtemp19316[0x16U] = 0U;
        __Vtemp19316[0x17U] = 0U;
        __Vtemp19316[0x18U] = 0U;
        __Vtemp19316[0x19U] = 0U;
        __Vtemp19316[0x1aU] = 0U;
        __Vtemp19316[0x1bU] = 0U;
        __Vtemp19316[0x1cU] = 0U;
        __Vtemp19316[0x1dU] = 0U;
        __Vtemp19316[0x1eU] = 0U;
        __Vtemp19316[0x1fU] = 0U;
        VL_EXTEND_WW(1024,1023, __Vtemp19317, __Vtemp19316);
        vcdp->chgCData(oldp+1,((0xfU & __Vtemp19317[0U])),4);
        VL_SHIFTR_WWI(1024,1024,11, __Vtemp19320, vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes, 
                      ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                       << 2U));
        __Vtemp19323[0U] = (7U & (__Vtemp19320[0U] 
                                  >> 1U));
        __Vtemp19323[1U] = 0U;
        __Vtemp19323[2U] = 0U;
        __Vtemp19323[3U] = 0U;
        __Vtemp19323[4U] = 0U;
        __Vtemp19323[5U] = 0U;
        __Vtemp19323[6U] = 0U;
        __Vtemp19323[7U] = 0U;
        __Vtemp19323[8U] = 0U;
        __Vtemp19323[9U] = 0U;
        __Vtemp19323[0xaU] = 0U;
        __Vtemp19323[0xbU] = 0U;
        __Vtemp19323[0xcU] = 0U;
        __Vtemp19323[0xdU] = 0U;
        __Vtemp19323[0xeU] = 0U;
        __Vtemp19323[0xfU] = 0U;
        __Vtemp19323[0x10U] = 0U;
        __Vtemp19323[0x11U] = 0U;
        __Vtemp19323[0x12U] = 0U;
        __Vtemp19323[0x13U] = 0U;
        __Vtemp19323[0x14U] = 0U;
        __Vtemp19323[0x15U] = 0U;
        __Vtemp19323[0x16U] = 0U;
        __Vtemp19323[0x17U] = 0U;
        __Vtemp19323[0x18U] = 0U;
        __Vtemp19323[0x19U] = 0U;
        __Vtemp19323[0x1aU] = 0U;
        __Vtemp19323[0x1bU] = 0U;
        __Vtemp19323[0x1cU] = 0U;
        __Vtemp19323[0x1dU] = 0U;
        __Vtemp19323[0x1eU] = 0U;
        __Vtemp19323[0x1fU] = 0U;
        VL_EXTEND_WW(1024,1023, __Vtemp19324, __Vtemp19323);
        vcdp->chgCData(oldp+2,((0xfU & __Vtemp19324[0U])),4);
        VL_EXTEND_WI(2051,4, __Vtemp19326, (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                             ? (1U 
                                                | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode) 
                                                   << 1U))
                                             : 0U));
        VL_SHIFTL_WWI(2051,2051,11, __Vtemp19327, __Vtemp19326, 
                      ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_source) 
                       << 2U));
        __Vtemp19332[0U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                             ? __Vtemp19327[0U] : 0U);
        __Vtemp19332[1U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                             ? __Vtemp19327[1U] : 0U);
        __Vtemp19332[2U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                             ? __Vtemp19327[2U] : 0U);
        __Vtemp19332[3U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                             ? __Vtemp19327[3U] : 0U);
        __Vtemp19332[4U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                             ? __Vtemp19327[4U] : 0U);
        __Vtemp19332[5U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                             ? __Vtemp19327[5U] : 0U);
        __Vtemp19332[6U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                             ? __Vtemp19327[6U] : 0U);
        __Vtemp19332[7U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                             ? __Vtemp19327[7U] : 0U);
        __Vtemp19332[8U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                             ? __Vtemp19327[8U] : 0U);
        __Vtemp19332[9U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                             ? __Vtemp19327[9U] : 0U);
        __Vtemp19332[0xaU] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                               & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                               ? __Vtemp19327[0xaU]
                               : 0U);
        __Vtemp19332[0xbU] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                               & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                               ? __Vtemp19327[0xbU]
                               : 0U);
        __Vtemp19332[0xcU] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                               & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                               ? __Vtemp19327[0xcU]
                               : 0U);
        __Vtemp19332[0xdU] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                               & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                               ? __Vtemp19327[0xdU]
                               : 0U);
        __Vtemp19332[0xeU] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                               & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                               ? __Vtemp19327[0xeU]
                               : 0U);
        __Vtemp19332[0xfU] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                               & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                               ? __Vtemp19327[0xfU]
                               : 0U);
        __Vtemp19332[0x10U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                ? __Vtemp19327[0x10U]
                                : 0U);
        __Vtemp19332[0x11U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                ? __Vtemp19327[0x11U]
                                : 0U);
        __Vtemp19332[0x12U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                ? __Vtemp19327[0x12U]
                                : 0U);
        __Vtemp19332[0x13U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                ? __Vtemp19327[0x13U]
                                : 0U);
        __Vtemp19332[0x14U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                ? __Vtemp19327[0x14U]
                                : 0U);
        __Vtemp19332[0x15U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                ? __Vtemp19327[0x15U]
                                : 0U);
        __Vtemp19332[0x16U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                ? __Vtemp19327[0x16U]
                                : 0U);
        __Vtemp19332[0x17U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                ? __Vtemp19327[0x17U]
                                : 0U);
        __Vtemp19332[0x18U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                ? __Vtemp19327[0x18U]
                                : 0U);
        __Vtemp19332[0x19U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                ? __Vtemp19327[0x19U]
                                : 0U);
        __Vtemp19332[0x1aU] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                ? __Vtemp19327[0x1aU]
                                : 0U);
        __Vtemp19332[0x1bU] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                ? __Vtemp19327[0x1bU]
                                : 0U);
        __Vtemp19332[0x1cU] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                ? __Vtemp19327[0x1cU]
                                : 0U);
        __Vtemp19332[0x1dU] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                ? __Vtemp19327[0x1dU]
                                : 0U);
        __Vtemp19332[0x1eU] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                ? __Vtemp19327[0x1eU]
                                : 0U);
        __Vtemp19332[0x1fU] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                ? __Vtemp19327[0x1fU]
                                : 0U);
        vcdp->chgWData(oldp+3,(__Vtemp19332),1024);
        __Vtemp19333[0U] = vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[0U];
        __Vtemp19333[1U] = vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[1U];
        __Vtemp19333[2U] = vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[2U];
        __Vtemp19333[3U] = vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[3U];
        __Vtemp19333[4U] = vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[4U];
        __Vtemp19333[5U] = vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[5U];
        __Vtemp19333[6U] = vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[6U];
        __Vtemp19333[7U] = vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[7U];
        __Vtemp19333[8U] = vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[8U];
        __Vtemp19333[9U] = vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[9U];
        __Vtemp19333[0xaU] = vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[0xaU];
        __Vtemp19333[0xbU] = vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[0xbU];
        __Vtemp19333[0xcU] = vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[0xcU];
        __Vtemp19333[0xdU] = vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[0xdU];
        __Vtemp19333[0xeU] = vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[0xeU];
        __Vtemp19333[0xfU] = vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[0xfU];
        __Vtemp19333[0x10U] = vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[0x10U];
        __Vtemp19333[0x11U] = vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[0x11U];
        __Vtemp19333[0x12U] = vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[0x12U];
        __Vtemp19333[0x13U] = vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[0x13U];
        __Vtemp19333[0x14U] = vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[0x14U];
        __Vtemp19333[0x15U] = vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[0x15U];
        __Vtemp19333[0x16U] = vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[0x16U];
        __Vtemp19333[0x17U] = vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[0x17U];
        __Vtemp19333[0x18U] = vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[0x18U];
        __Vtemp19333[0x19U] = vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[0x19U];
        __Vtemp19333[0x1aU] = vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[0x1aU];
        __Vtemp19333[0x1bU] = vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[0x1bU];
        __Vtemp19333[0x1cU] = vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[0x1cU];
        __Vtemp19333[0x1dU] = vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[0x1dU];
        __Vtemp19333[0x1eU] = vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[0x1eU];
        __Vtemp19333[0x1fU] = vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[0x1fU];
        vcdp->chgWData(oldp+35,(__Vtemp19333),1024);
        VL_EXTEND_WI(2050,3, __Vtemp19335, (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                             ? (1U 
                                                | (6U 
                                                   & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__aFrag) 
                                                      << 1U)))
                                             : 0U));
        VL_SHIFTL_WWI(2050,2050,11, __Vtemp19336, __Vtemp19335, 
                      ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_source) 
                       << 2U));
        __Vtemp19341[0U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                             ? __Vtemp19336[0U] : 0U);
        __Vtemp19341[1U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                             ? __Vtemp19336[1U] : 0U);
        __Vtemp19341[2U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                             ? __Vtemp19336[2U] : 0U);
        __Vtemp19341[3U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                             ? __Vtemp19336[3U] : 0U);
        __Vtemp19341[4U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                             ? __Vtemp19336[4U] : 0U);
        __Vtemp19341[5U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                             ? __Vtemp19336[5U] : 0U);
        __Vtemp19341[6U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                             ? __Vtemp19336[6U] : 0U);
        __Vtemp19341[7U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                             ? __Vtemp19336[7U] : 0U);
        __Vtemp19341[8U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                             ? __Vtemp19336[8U] : 0U);
        __Vtemp19341[9U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                             ? __Vtemp19336[9U] : 0U);
        __Vtemp19341[0xaU] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                               & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                               ? __Vtemp19336[0xaU]
                               : 0U);
        __Vtemp19341[0xbU] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                               & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                               ? __Vtemp19336[0xbU]
                               : 0U);
        __Vtemp19341[0xcU] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                               & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                               ? __Vtemp19336[0xcU]
                               : 0U);
        __Vtemp19341[0xdU] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                               & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                               ? __Vtemp19336[0xdU]
                               : 0U);
        __Vtemp19341[0xeU] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                               & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                               ? __Vtemp19336[0xeU]
                               : 0U);
        __Vtemp19341[0xfU] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                               & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                               ? __Vtemp19336[0xfU]
                               : 0U);
        __Vtemp19341[0x10U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                ? __Vtemp19336[0x10U]
                                : 0U);
        __Vtemp19341[0x11U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                ? __Vtemp19336[0x11U]
                                : 0U);
        __Vtemp19341[0x12U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                ? __Vtemp19336[0x12U]
                                : 0U);
        __Vtemp19341[0x13U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                ? __Vtemp19336[0x13U]
                                : 0U);
        __Vtemp19341[0x14U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                ? __Vtemp19336[0x14U]
                                : 0U);
        __Vtemp19341[0x15U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                ? __Vtemp19336[0x15U]
                                : 0U);
        __Vtemp19341[0x16U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                ? __Vtemp19336[0x16U]
                                : 0U);
        __Vtemp19341[0x17U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                ? __Vtemp19336[0x17U]
                                : 0U);
        __Vtemp19341[0x18U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                ? __Vtemp19336[0x18U]
                                : 0U);
        __Vtemp19341[0x19U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                ? __Vtemp19336[0x19U]
                                : 0U);
        __Vtemp19341[0x1aU] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                ? __Vtemp19336[0x1aU]
                                : 0U);
        __Vtemp19341[0x1bU] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                ? __Vtemp19336[0x1bU]
                                : 0U);
        __Vtemp19341[0x1cU] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                ? __Vtemp19336[0x1cU]
                                : 0U);
        __Vtemp19341[0x1dU] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                ? __Vtemp19336[0x1dU]
                                : 0U);
        __Vtemp19341[0x1eU] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                ? __Vtemp19336[0x1eU]
                                : 0U);
        __Vtemp19341[0x1fU] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                ? __Vtemp19336[0x1fU]
                                : 0U);
        vcdp->chgWData(oldp+67,(__Vtemp19341),1024);
        __Vtemp19342[0U] = 1U;
        __Vtemp19342[1U] = 0U;
        __Vtemp19342[2U] = 0U;
        __Vtemp19342[3U] = 0U;
        __Vtemp19342[4U] = 0U;
        __Vtemp19342[5U] = 0U;
        __Vtemp19342[6U] = 0U;
        __Vtemp19342[7U] = 0U;
        VL_SHIFTL_WWI(256,256,8, __Vtemp19343, __Vtemp19342, (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data));
        __Vtemp19346[0U] = ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
                              & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))) 
                             & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                             ? __Vtemp19343[0U] : 0U);
        __Vtemp19346[1U] = ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
                              & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))) 
                             & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                             ? __Vtemp19343[1U] : 0U);
        __Vtemp19346[2U] = ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
                              & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))) 
                             & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                             ? __Vtemp19343[2U] : 0U);
        __Vtemp19346[3U] = ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
                              & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))) 
                             & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                             ? __Vtemp19343[3U] : 0U);
        __Vtemp19346[4U] = ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
                              & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))) 
                             & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                             ? __Vtemp19343[4U] : 0U);
        __Vtemp19346[5U] = ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
                              & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))) 
                             & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                             ? __Vtemp19343[5U] : 0U);
        __Vtemp19346[6U] = ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
                              & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))) 
                             & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                             ? __Vtemp19343[6U] : 0U);
        __Vtemp19346[7U] = ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
                              & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))) 
                             & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                             ? __Vtemp19343[7U] : 0U);
        vcdp->chgWData(oldp+99,(__Vtemp19346),256);
    }
}

void VTestHarness::traceChgThis__90(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+1050);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Variables
    // Begin mtask footprint all: 
    WData/*1023:0*/ __Vtemp19364[32];
    WData/*1023:0*/ __Vtemp19367[32];
    WData/*1023:0*/ __Vtemp19368[32];
    WData/*2079:0*/ __Vtemp19370[65];
    WData/*2079:0*/ __Vtemp19371[65];
    WData/*1023:0*/ __Vtemp19376[32];
    IData/*31:0*/ __Vilp;
    // Body
    {
        VL_SHIFTR_WWI(1024,1024,11, __Vtemp19364, vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1, 
                      ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                       << 2U));
        __Vtemp19367[0U] = (7U & (__Vtemp19364[0U] 
                                  >> 1U));
        __Vtemp19367[1U] = 0U;
        __Vtemp19367[2U] = 0U;
        __Vtemp19367[3U] = 0U;
        __Vtemp19367[4U] = 0U;
        __Vtemp19367[5U] = 0U;
        __Vtemp19367[6U] = 0U;
        __Vtemp19367[7U] = 0U;
        __Vtemp19367[8U] = 0U;
        __Vtemp19367[9U] = 0U;
        __Vtemp19367[0xaU] = 0U;
        __Vtemp19367[0xbU] = 0U;
        __Vtemp19367[0xcU] = 0U;
        __Vtemp19367[0xdU] = 0U;
        __Vtemp19367[0xeU] = 0U;
        __Vtemp19367[0xfU] = 0U;
        __Vtemp19367[0x10U] = 0U;
        __Vtemp19367[0x11U] = 0U;
        __Vtemp19367[0x12U] = 0U;
        __Vtemp19367[0x13U] = 0U;
        __Vtemp19367[0x14U] = 0U;
        __Vtemp19367[0x15U] = 0U;
        __Vtemp19367[0x16U] = 0U;
        __Vtemp19367[0x17U] = 0U;
        __Vtemp19367[0x18U] = 0U;
        __Vtemp19367[0x19U] = 0U;
        __Vtemp19367[0x1aU] = 0U;
        __Vtemp19367[0x1bU] = 0U;
        __Vtemp19367[0x1cU] = 0U;
        __Vtemp19367[0x1dU] = 0U;
        __Vtemp19367[0x1eU] = 0U;
        __Vtemp19367[0x1fU] = 0U;
        VL_EXTEND_WW(1024,1023, __Vtemp19368, __Vtemp19367);
        vcdp->chgCData(oldp+0,((0xfU & __Vtemp19368[0U])),4);
        __Vtemp19370[0U] = 0xfU;
        __Vilp = 1U;
        while ((__Vilp <= 0x40U)) {
            __Vtemp19370[__Vilp] = 0U;
            __Vilp = ((IData)(1U) + __Vilp);
        }
        VL_SHIFTL_WWI(2063,2063,11, __Vtemp19371, __Vtemp19370, 
                      ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                       << 2U));
        __Vtemp19376[0U] = ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
                              & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))) 
                             & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                             ? __Vtemp19371[0U] : 0U);
        __Vtemp19376[1U] = ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
                              & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))) 
                             & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                             ? __Vtemp19371[1U] : 0U);
        __Vtemp19376[2U] = ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
                              & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))) 
                             & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                             ? __Vtemp19371[2U] : 0U);
        __Vtemp19376[3U] = ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
                              & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))) 
                             & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                             ? __Vtemp19371[3U] : 0U);
        __Vtemp19376[4U] = ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
                              & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))) 
                             & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                             ? __Vtemp19371[4U] : 0U);
        __Vtemp19376[5U] = ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
                              & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))) 
                             & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                             ? __Vtemp19371[5U] : 0U);
        __Vtemp19376[6U] = ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
                              & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))) 
                             & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                             ? __Vtemp19371[6U] : 0U);
        __Vtemp19376[7U] = ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
                              & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))) 
                             & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                             ? __Vtemp19371[7U] : 0U);
        __Vtemp19376[8U] = ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
                              & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))) 
                             & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                             ? __Vtemp19371[8U] : 0U);
        __Vtemp19376[9U] = ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
                              & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))) 
                             & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                             ? __Vtemp19371[9U] : 0U);
        __Vtemp19376[0xaU] = ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))) 
                               & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                               ? __Vtemp19371[0xaU]
                               : 0U);
        __Vtemp19376[0xbU] = ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))) 
                               & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                               ? __Vtemp19371[0xbU]
                               : 0U);
        __Vtemp19376[0xcU] = ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))) 
                               & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                               ? __Vtemp19371[0xcU]
                               : 0U);
        __Vtemp19376[0xdU] = ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))) 
                               & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                               ? __Vtemp19371[0xdU]
                               : 0U);
        __Vtemp19376[0xeU] = ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))) 
                               & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                               ? __Vtemp19371[0xeU]
                               : 0U);
        __Vtemp19376[0xfU] = ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))) 
                               & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                               ? __Vtemp19371[0xfU]
                               : 0U);
        __Vtemp19376[0x10U] = ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
                                 & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))) 
                                & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                                ? __Vtemp19371[0x10U]
                                : 0U);
        __Vtemp19376[0x11U] = ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
                                 & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))) 
                                & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                                ? __Vtemp19371[0x11U]
                                : 0U);
        __Vtemp19376[0x12U] = ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
                                 & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))) 
                                & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                                ? __Vtemp19371[0x12U]
                                : 0U);
        __Vtemp19376[0x13U] = ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
                                 & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))) 
                                & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                                ? __Vtemp19371[0x13U]
                                : 0U);
        __Vtemp19376[0x14U] = ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
                                 & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))) 
                                & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                                ? __Vtemp19371[0x14U]
                                : 0U);
        __Vtemp19376[0x15U] = ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
                                 & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))) 
                                & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                                ? __Vtemp19371[0x15U]
                                : 0U);
        __Vtemp19376[0x16U] = ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
                                 & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))) 
                                & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                                ? __Vtemp19371[0x16U]
                                : 0U);
        __Vtemp19376[0x17U] = ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
                                 & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))) 
                                & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                                ? __Vtemp19371[0x17U]
                                : 0U);
        __Vtemp19376[0x18U] = ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
                                 & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))) 
                                & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                                ? __Vtemp19371[0x18U]
                                : 0U);
        __Vtemp19376[0x19U] = ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
                                 & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))) 
                                & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                                ? __Vtemp19371[0x19U]
                                : 0U);
        __Vtemp19376[0x1aU] = ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
                                 & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))) 
                                & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                                ? __Vtemp19371[0x1aU]
                                : 0U);
        __Vtemp19376[0x1bU] = ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
                                 & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))) 
                                & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                                ? __Vtemp19371[0x1bU]
                                : 0U);
        __Vtemp19376[0x1cU] = ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
                                 & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))) 
                                & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                                ? __Vtemp19371[0x1cU]
                                : 0U);
        __Vtemp19376[0x1dU] = ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
                                 & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))) 
                                & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                                ? __Vtemp19371[0x1dU]
                                : 0U);
        __Vtemp19376[0x1eU] = ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
                                 & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))) 
                                & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                                ? __Vtemp19371[0x1eU]
                                : 0U);
        __Vtemp19376[0x1fU] = ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
                                 & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))) 
                                & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                                ? __Vtemp19371[0x1fU]
                                : 0U);
        vcdp->chgWData(oldp+1,(__Vtemp19376),1024);
        vcdp->chgBit(oldp+33,(((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__full)) 
                               & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid))));
        vcdp->chgBit(oldp+34,(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ptr_match));
        vcdp->chgBit(oldp+35,(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty));
        vcdp->chgBit(oldp+36,(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__full));
        vcdp->chgBit(oldp+37,(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__do_enq));
        vcdp->chgBit(oldp+38,(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__do_deq));
        vcdp->chgBit(oldp+39,(((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__full)) 
                               & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_full))));
        vcdp->chgBit(oldp+40,(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ptr_match));
        vcdp->chgBit(oldp+41,(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty));
        vcdp->chgBit(oldp+42,(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__full));
        vcdp->chgBit(oldp+43,(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__do_enq));
        vcdp->chgBit(oldp+44,(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__do_deq));
        vcdp->chgBit(oldp+45,(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor_io_in_d_valid));
        vcdp->chgCData(oldp+46,(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor_io_in_d_bits_size),3);
        vcdp->chgBit(oldp+47,(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_repeat));
        vcdp->chgCData(oldp+48,(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_size),3);
        vcdp->chgCData(oldp+49,((0xfU & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__full)
                                          ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__saved_source)
                                          : (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                             >> 0xaU)))),4);
        vcdp->chgIData(oldp+50,((0x1fffffffU & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__full)
                                                 ? vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__saved_address
                                                 : 
                                                ((vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                  << 0x16U) 
                                                 | (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                                    >> 0xaU))))),29);
        vcdp->chgCData(oldp+51,((0xffU & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__full)
                                           ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__saved_mask)
                                           : ((vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[1U] 
                                               << 0x1fU) 
                                              | (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                                 >> 1U))))),8);
        vcdp->chgCData(oldp+52,((7U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))),3);
    }
}

void VTestHarness::traceChgThis__92(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+1103);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(oldp+0,((0U == (7U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)))));
        vcdp->chgCData(oldp+1,((0xfU & ((IData)(1U) 
                                        << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data)))),4);
        vcdp->chgCData(oldp+2,((7U & (~ (0x3fU & ((IData)(7U) 
                                                  << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data)))))),3);
        vcdp->chgBit(oldp+3,((1U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                                    | (1U & (((IData)(1U) 
                                              << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                                             >> 3U))))));
        vcdp->chgCData(oldp+4,((7U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT___dFirst_size_T_6) 
                                      >> 4U))),3);
        vcdp->chgCData(oldp+5,((0xfU & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT___dFirst_size_T_6))),4);
        vcdp->chgCData(oldp+6,((3U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT___dFirst_size_T_8) 
                                      >> 2U))),2);
        vcdp->chgCData(oldp+7,((3U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT___dFirst_size_T_8))),2);
        vcdp->chgCData(oldp+8,(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__dFirst_size),3);
        vcdp->chgBit(oldp+9,(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__drop));
        vcdp->chgBit(oldp+10,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_0_d_ready) 
                               | (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__drop))));
        vcdp->chgCData(oldp+11,(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__aFrag),3);
        vcdp->chgCData(oldp+12,((0x3fU & (~ (0x1fffU 
                                             & ((IData)(0x3fU) 
                                                << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_size)))))),6);
        vcdp->chgCData(oldp+13,((7U & (~ (0x3ffU & 
                                          ((IData)(7U) 
                                           << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__aFrag)))))),3);
        vcdp->chgBit(oldp+14,((1U & (~ ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode) 
                                        >> 2U)))));
        vcdp->chgCData(oldp+15,(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__old_gennum1),3);
        vcdp->chgCData(oldp+16,(((0x1eU & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__full)
                                             ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__saved_source)
                                             : (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                >> 0xaU)) 
                                           << 1U)) 
                                 | (1U & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__gennum))
                                              ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__dToggle)
                                              : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__aToggle_r)))))),5);
    }
}

void VTestHarness::traceChgThis__94(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+1120);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(oldp+0,(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_acc));
        vcdp->chgBit(oldp+1,(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_acc_1));
        vcdp->chgBit(oldp+2,(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_eq_2));
        vcdp->chgBit(oldp+3,(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_acc_2));
        vcdp->chgBit(oldp+4,(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_eq_3));
        vcdp->chgBit(oldp+5,(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_acc_3));
        vcdp->chgBit(oldp+6,(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_eq_4));
        vcdp->chgBit(oldp+7,(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_acc_4));
        vcdp->chgBit(oldp+8,(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_eq_5));
        vcdp->chgBit(oldp+9,(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_acc_5));
        vcdp->chgBit(oldp+10,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_eq_2) 
                               & (~ (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                     >> 0xaU)))));
        vcdp->chgBit(oldp+11,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_acc_2) 
                               | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_eq_2) 
                                  & (~ (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                        >> 0xaU))))));
        vcdp->chgBit(oldp+12,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_eq_2) 
                               & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                  >> 0xaU))));
        vcdp->chgBit(oldp+13,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_acc_2) 
                               | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_eq_2) 
                                  & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                     >> 0xaU)))));
        vcdp->chgBit(oldp+14,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_eq_3) 
                               & (~ (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                     >> 0xaU)))));
        vcdp->chgBit(oldp+15,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_acc_3) 
                               | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_eq_3) 
                                  & (~ (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                        >> 0xaU))))));
        vcdp->chgBit(oldp+16,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_eq_3) 
                               & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                  >> 0xaU))));
        vcdp->chgBit(oldp+17,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_acc_3) 
                               | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_eq_3) 
                                  & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                     >> 0xaU)))));
        vcdp->chgBit(oldp+18,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_eq_4) 
                               & (~ (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                     >> 0xaU)))));
        vcdp->chgBit(oldp+19,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_acc_4) 
                               | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_eq_4) 
                                  & (~ (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                        >> 0xaU))))));
    }
}

void VTestHarness::traceChgThis__96(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+1140);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(oldp+0,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_eq_4) 
                              & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                 >> 0xaU))));
        vcdp->chgBit(oldp+1,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_acc_4) 
                              | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_eq_4) 
                                 & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                    >> 0xaU)))));
        vcdp->chgBit(oldp+2,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_eq_5) 
                              & (~ (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                    >> 0xaU)))));
        vcdp->chgBit(oldp+3,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_acc_5) 
                              | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_eq_5) 
                                 & (~ (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                       >> 0xaU))))));
        vcdp->chgBit(oldp+4,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_eq_5) 
                              & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                 >> 0xaU))));
        vcdp->chgBit(oldp+5,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_acc_5) 
                              | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_eq_5) 
                                 & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                    >> 0xaU)))));
        vcdp->chgCData(oldp+6,(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask),8);
        vcdp->chgCData(oldp+7,((7U & (~ (0x3ffU & (
                                                   ((IData)(0x3fU) 
                                                    << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor_io_in_d_bits_size)) 
                                                   >> 3U))))),3);
        vcdp->chgSData(oldp+8,(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__a_set_wo_ready),16);
        vcdp->chgCData(oldp+9,((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___a_first_T) 
                                 & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1)))
                                 ? (1U | (0xeU & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                  >> 0x14U)))
                                 : 0U)),4);
        vcdp->chgCData(oldp+10,((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___a_first_T) 
                                  & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1)))
                                  ? (1U | (0xeU & (
                                                   vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                   >> 0xdU)))
                                  : 0U)),4);
        vcdp->chgSData(oldp+11,((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___a_first_T) 
                                  & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1)))
                                  ? (0xffffU & ((IData)(1U) 
                                                << 
                                                (0xfU 
                                                 & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                    >> 0xaU))))
                                  : 0U)),16);
    }
}

void VTestHarness::traceChgThis__98(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+1152);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Variables
    // Begin mtask footprint all: 
    WData/*159:0*/ __Vtemp19385[5];
    WData/*159:0*/ __Vtemp19386[5];
    // Body
    {
        vcdp->chgSData(oldp+0,(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor_io_in_d_valid) 
                                  & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1))) 
                                 & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                                 ? (0xffffU & ((IData)(1U) 
                                               << (0xfU 
                                                   & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                                      >> 4U))))
                                 : 0U)),16);
        vcdp->chgSData(oldp+1,(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___d_first_T) 
                                  & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1))) 
                                 & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                                 ? (0xffffU & ((IData)(1U) 
                                               << (0xfU 
                                                   & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                                      >> 4U))))
                                 : 0U)),16);
        vcdp->chgBit(oldp+2,((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_0_a_valid) 
                               & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1))) 
                              & ((0xfU & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0xaU)) 
                                 == (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                             >> 4U))))));
        vcdp->chgCData(oldp+3,((0xfU & (IData)((VL_ULL(7) 
                                                & (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                   >> 1U))))),4);
        vcdp->chgCData(oldp+4,((0xfU & (IData)((VL_ULL(0x7fffffffffffffff) 
                                                & (((0x3fU 
                                                     >= 
                                                     (0x3cU 
                                                      & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                                         >> 2U)))
                                                     ? 
                                                    (VL_ULL(0xf) 
                                                     & (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes 
                                                        >> 
                                                        (0x3cU 
                                                         & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                                            >> 2U))))
                                                     : VL_ULL(0)) 
                                                   >> 1U))))),4);
        VL_EXTEND_WI(131,4, __Vtemp19385, (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___a_first_T) 
                                            & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1)))
                                            ? (1U | 
                                               (0xeU 
                                                & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                   >> 0x14U)))
                                            : 0U));
        VL_SHIFTL_WWI(131,131,7, __Vtemp19386, __Vtemp19385, 
                      (0x3cU & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                >> 8U)));
        vcdp->chgQData(oldp+5,((((QData)((IData)((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___a_first_T) 
                                                   & (0U 
                                                      == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1)))
                                                   ? 
                                                  __Vtemp19386[1U]
                                                   : 0U))) 
                                 << 0x20U) | (QData)((IData)(
                                                             (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___a_first_T) 
                                                               & (0U 
                                                                  == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1)))
                                                               ? 
                                                              __Vtemp19386[0U]
                                                               : 0U))))),64);
    }
}

void VTestHarness::traceChgThis__100(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+1159);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Variables
    // Begin mtask footprint all: 
    WData/*159:0*/ __Vtemp19406[5];
    WData/*159:0*/ __Vtemp19407[5];
    WData/*159:0*/ __Vtemp19413[5];
    WData/*159:0*/ __Vtemp19414[5];
    // Body
    {
        vcdp->chgQData(oldp+0,((((QData)((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___GEN_23[1U])) 
                                 << 0x20U) | (QData)((IData)(
                                                             vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___GEN_23[0U])))),64);
        VL_EXTEND_WI(131,4, __Vtemp19406, (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___a_first_T) 
                                            & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1)))
                                            ? (1U | 
                                               (0xeU 
                                                & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                   >> 0xdU)))
                                            : 0U));
        VL_SHIFTL_WWI(131,131,7, __Vtemp19407, __Vtemp19406, 
                      (0x3cU & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                >> 8U)));
        vcdp->chgQData(oldp+2,((((QData)((IData)((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___a_first_T) 
                                                   & (0U 
                                                      == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1)))
                                                   ? 
                                                  __Vtemp19407[1U]
                                                   : 0U))) 
                                 << 0x20U) | (QData)((IData)(
                                                             (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___a_first_T) 
                                                               & (0U 
                                                                  == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1)))
                                                               ? 
                                                              __Vtemp19407[0U]
                                                               : 0U))))),64);
        vcdp->chgSData(oldp+4,(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___d_first_T) 
                                  & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_2))) 
                                 & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                                 ? (0xffffU & ((IData)(1U) 
                                               << (0xfU 
                                                   & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                                      >> 4U))))
                                 : 0U)),16);
        vcdp->chgCData(oldp+5,((0xfU & (IData)((VL_ULL(0x7fffffffffffffff) 
                                                & (((0x3fU 
                                                     >= 
                                                     (0x3cU 
                                                      & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                                         >> 2U)))
                                                     ? 
                                                    (VL_ULL(0xf) 
                                                     & (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes_1 
                                                        >> 
                                                        (0x3cU 
                                                         & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                                            >> 2U))))
                                                     : VL_ULL(0)) 
                                                   >> 1U))))),4);
        __Vtemp19413[0U] = 0xfU;
        __Vtemp19413[1U] = 0U;
        __Vtemp19413[2U] = 0U;
        __Vtemp19413[3U] = 0U;
        __Vtemp19413[4U] = 0U;
        VL_SHIFTL_WWI(143,143,7, __Vtemp19414, __Vtemp19413, 
                      (0x3cU & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                >> 2U)));
        vcdp->chgQData(oldp+6,((((QData)((IData)(((
                                                   ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___d_first_T) 
                                                    & (0U 
                                                       == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_2))) 
                                                   & (6U 
                                                      == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                                                   ? 
                                                  __Vtemp19414[1U]
                                                   : 0U))) 
                                 << 0x20U) | (QData)((IData)(
                                                             ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___d_first_T) 
                                                                & (0U 
                                                                   == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_2))) 
                                                               & (6U 
                                                                  == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                                                               ? 
                                                              __Vtemp19414[0U]
                                                               : 0U))))),64);
    }
}

void VTestHarness::traceChgThis__102(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+1167);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgCData(oldp+0,(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor_io_in_d_bits_size),3);
        vcdp->chgBit(oldp+1,((0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__old_gennum1))));
        vcdp->chgCData(oldp+2,(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_size),3);
        vcdp->chgCData(oldp+3,((0xfU & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full)
                                         ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_source)
                                         : (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                            >> 0xaU)))),4);
        vcdp->chgIData(oldp+4,((0x3ffffU & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full)
                                             ? vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_address
                                             : ((vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                 << 0x16U) 
                                                | (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                                   >> 0xaU))))),18);
        vcdp->chgCData(oldp+5,((0xffU & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full)
                                          ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_mask)
                                          : ((vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[1U] 
                                              << 0x1fU) 
                                             | (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                                >> 1U))))),8);
        vcdp->chgCData(oldp+6,((7U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source))),3);
        vcdp->chgCData(oldp+7,((7U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT___dFirst_size_T_6) 
                                      >> 4U))),3);
        vcdp->chgCData(oldp+8,((0xfU & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT___dFirst_size_T_6))),4);
        vcdp->chgCData(oldp+9,((3U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT___dFirst_size_T_8) 
                                      >> 2U))),2);
        vcdp->chgCData(oldp+10,((3U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT___dFirst_size_T_8))),2);
        vcdp->chgCData(oldp+11,(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__dFirst_size),3);
        vcdp->chgCData(oldp+12,(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag),3);
        vcdp->chgCData(oldp+13,((0x3fU & (~ (0x1fffU 
                                             & ((IData)(0x3fU) 
                                                << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_size)))))),6);
        vcdp->chgCData(oldp+14,((7U & (~ (0x3ffU & 
                                          ((IData)(7U) 
                                           << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag)))))),3);
        vcdp->chgCData(oldp+15,(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__old_gennum1),3);
        vcdp->chgCData(oldp+16,(((0x1eU & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full)
                                             ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_source)
                                             : (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                >> 0xaU)) 
                                           << 1U)) 
                                 | (1U & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__gennum))
                                              ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__dToggle)
                                              : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aToggle_r)))))),5);
        vcdp->chgBit(oldp+17,((0U == (0x3fU & (((vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                 << 0x16U) 
                                                | (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                                   >> 0xaU)) 
                                               & (~ 
                                                  (0x1fffU 
                                                   & ((IData)(0x3fU) 
                                                      << 
                                                      (7U 
                                                       & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                          >> 0xeU))))))))));
    }
}

void VTestHarness::traceChgThis__104(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+1185);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(oldp+0,(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_acc));
        vcdp->chgBit(oldp+1,(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_acc_1));
        vcdp->chgBit(oldp+2,(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_eq_2));
        vcdp->chgBit(oldp+3,(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_acc_2));
        vcdp->chgBit(oldp+4,(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_eq_3));
        vcdp->chgBit(oldp+5,(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_acc_3));
        vcdp->chgBit(oldp+6,(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_eq_4));
        vcdp->chgBit(oldp+7,(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_acc_4));
        vcdp->chgBit(oldp+8,(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_eq_5));
        vcdp->chgBit(oldp+9,(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_acc_5));
        vcdp->chgBit(oldp+10,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_eq_2) 
                               & (~ (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                     >> 0xaU)))));
        vcdp->chgBit(oldp+11,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_acc_2) 
                               | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_eq_2) 
                                  & (~ (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                        >> 0xaU))))));
        vcdp->chgBit(oldp+12,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_eq_2) 
                               & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                  >> 0xaU))));
        vcdp->chgBit(oldp+13,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_acc_2) 
                               | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_eq_2) 
                                  & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                     >> 0xaU)))));
        vcdp->chgBit(oldp+14,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_eq_3) 
                               & (~ (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                     >> 0xaU)))));
        vcdp->chgBit(oldp+15,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_acc_3) 
                               | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_eq_3) 
                                  & (~ (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                        >> 0xaU))))));
        vcdp->chgBit(oldp+16,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_eq_3) 
                               & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                  >> 0xaU))));
        vcdp->chgBit(oldp+17,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_acc_3) 
                               | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_eq_3) 
                                  & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                     >> 0xaU)))));
        vcdp->chgBit(oldp+18,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_eq_4) 
                               & (~ (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                     >> 0xaU)))));
        vcdp->chgBit(oldp+19,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_acc_4) 
                               | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_eq_4) 
                                  & (~ (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                        >> 0xaU))))));
    }
}

void VTestHarness::traceChgThis__106(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+1205);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(oldp+0,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_eq_4) 
                              & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                 >> 0xaU))));
        vcdp->chgBit(oldp+1,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_acc_4) 
                              | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_eq_4) 
                                 & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                    >> 0xaU)))));
        vcdp->chgBit(oldp+2,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_eq_5) 
                              & (~ (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                    >> 0xaU)))));
        vcdp->chgBit(oldp+3,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_acc_5) 
                              | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_eq_5) 
                                 & (~ (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                       >> 0xaU))))));
        vcdp->chgBit(oldp+4,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_eq_5) 
                              & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                 >> 0xaU))));
        vcdp->chgBit(oldp+5,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_acc_5) 
                              | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_eq_5) 
                                 & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                    >> 0xaU)))));
        vcdp->chgCData(oldp+6,(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask),8);
        vcdp->chgBit(oldp+7,(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__a_first_done));
        vcdp->chgCData(oldp+8,((7U & (~ (0x3ffU & (
                                                   ((IData)(0x3fU) 
                                                    << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor_io_in_d_bits_size)) 
                                                   >> 3U))))),3);
        vcdp->chgCData(oldp+9,((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__a_first_done) 
                                 & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__a_first_counter_1)))
                                 ? (1U | (0xeU & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                  >> 0x14U)))
                                 : 0U)),4);
        vcdp->chgCData(oldp+10,((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__a_first_done) 
                                  & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__a_first_counter_1)))
                                  ? (1U | (0xeU & (
                                                   vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                   >> 0xdU)))
                                  : 0U)),4);
        vcdp->chgSData(oldp+11,((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__a_first_done) 
                                  & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__a_first_counter_1)))
                                  ? (0xffffU & ((IData)(1U) 
                                                << 
                                                (0xfU 
                                                 & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                    >> 0xaU))))
                                  : 0U)),16);
    }
}

void VTestHarness::traceChgThis__108(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+1217);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Variables
    // Begin mtask footprint all: 
    WData/*159:0*/ __Vtemp19434[5];
    WData/*159:0*/ __Vtemp19435[5];
    WData/*159:0*/ __Vtemp19441[5];
    WData/*159:0*/ __Vtemp19442[5];
    // Body
    {
        vcdp->chgSData(oldp+0,((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT___d_first_T) 
                                 & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__d_first_counter_1)))
                                 ? (0xffffU & ((IData)(1U) 
                                               << (0xfU 
                                                   & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source) 
                                                      >> 4U))))
                                 : 0U)),16);
        vcdp->chgBit(oldp+1,((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                               & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__a_first_counter_1))) 
                              & ((0xfU & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0xaU)) 
                                 == (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source) 
                                             >> 4U))))));
        vcdp->chgCData(oldp+2,((0xfU & (IData)((VL_ULL(7) 
                                                & (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                   >> 1U))))),4);
        vcdp->chgCData(oldp+3,((0xfU & (IData)((VL_ULL(0x7fffffffffffffff) 
                                                & (((0x3fU 
                                                     >= 
                                                     (0x3cU 
                                                      & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source) 
                                                         >> 2U)))
                                                     ? 
                                                    (VL_ULL(0xf) 
                                                     & (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__inflight_sizes 
                                                        >> 
                                                        (0x3cU 
                                                         & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source) 
                                                            >> 2U))))
                                                     : VL_ULL(0)) 
                                                   >> 1U))))),4);
        VL_EXTEND_WI(131,4, __Vtemp19434, (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__a_first_done) 
                                            & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__a_first_counter_1)))
                                            ? (1U | 
                                               (0xeU 
                                                & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                   >> 0x14U)))
                                            : 0U));
        VL_SHIFTL_WWI(131,131,7, __Vtemp19435, __Vtemp19434, 
                      (0x3cU & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                >> 8U)));
        vcdp->chgQData(oldp+4,((((QData)((IData)((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__a_first_done) 
                                                   & (0U 
                                                      == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__a_first_counter_1)))
                                                   ? 
                                                  __Vtemp19435[1U]
                                                   : 0U))) 
                                 << 0x20U) | (QData)((IData)(
                                                             (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__a_first_done) 
                                                               & (0U 
                                                                  == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__a_first_counter_1)))
                                                               ? 
                                                              __Vtemp19435[0U]
                                                               : 0U))))),64);
        vcdp->chgQData(oldp+6,((((QData)((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT___GEN_23[1U])) 
                                 << 0x20U) | (QData)((IData)(
                                                             vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT___GEN_23[0U])))),64);
        VL_EXTEND_WI(131,4, __Vtemp19441, (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__a_first_done) 
                                            & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__a_first_counter_1)))
                                            ? (1U | 
                                               (0xeU 
                                                & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                   >> 0xdU)))
                                            : 0U));
        VL_SHIFTL_WWI(131,131,7, __Vtemp19442, __Vtemp19441, 
                      (0x3cU & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                >> 8U)));
        vcdp->chgQData(oldp+8,((((QData)((IData)((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__a_first_done) 
                                                   & (0U 
                                                      == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__a_first_counter_1)))
                                                   ? 
                                                  __Vtemp19442[1U]
                                                   : 0U))) 
                                 << 0x20U) | (QData)((IData)(
                                                             (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__a_first_done) 
                                                               & (0U 
                                                                  == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__a_first_counter_1)))
                                                               ? 
                                                              __Vtemp19442[0U]
                                                               : 0U))))),64);
    }
}

void VTestHarness::traceChgThis__110(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+1227);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgCData(oldp+0,(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data),3);
        vcdp->chgCData(oldp+1,(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data),4);
        vcdp->chgBit(oldp+2,(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data));
        vcdp->chgSData(oldp+3,((0xfffU & (~ (0x7ffffffU 
                                             & ((IData)(0xfffU) 
                                                << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size)))))),12);
        vcdp->chgBit(oldp+4,((0U == (0xfffU & (vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address 
                                               & (~ 
                                                  (0x7ffffffU 
                                                   & ((IData)(0xfffU) 
                                                      << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size)))))))));
        vcdp->chgCData(oldp+5,((3U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size))),2);
        vcdp->chgCData(oldp+6,((7U & (1U | (0xfU & 
                                            ((IData)(1U) 
                                             << (3U 
                                                 & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size))))))),3);
        vcdp->chgBit(oldp+7,((1U & (((IData)(1U) << 
                                     (3U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size))) 
                                    >> 2U))));
        vcdp->chgBit(oldp+8,((1U & (vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address 
                                    >> 2U))));
        vcdp->chgBit(oldp+9,((1U & (~ (vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address 
                                       >> 2U)))));
        vcdp->chgBit(oldp+10,(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask_acc));
        vcdp->chgBit(oldp+11,(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask_acc_1));
        vcdp->chgBit(oldp+12,((1U & (((IData)(1U) << 
                                      (3U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size))) 
                                     >> 1U))));
        vcdp->chgBit(oldp+13,((1U & (vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address 
                                     >> 1U))));
        vcdp->chgBit(oldp+14,((1U & (~ (vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address 
                                        >> 1U)))));
        vcdp->chgBit(oldp+15,(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask_eq_2));
    }
}

void VTestHarness::traceChgThis__112(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+1243);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(oldp+0,(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask_acc_2));
        vcdp->chgBit(oldp+1,(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask_eq_3));
        vcdp->chgBit(oldp+2,(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask_acc_3));
        vcdp->chgBit(oldp+3,(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask_eq_4));
        vcdp->chgBit(oldp+4,(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask_acc_4));
        vcdp->chgBit(oldp+5,(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask_eq_5));
        vcdp->chgBit(oldp+6,(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask_acc_5));
        vcdp->chgBit(oldp+7,((1U & vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)));
        vcdp->chgBit(oldp+8,((1U & (~ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address))));
        vcdp->chgBit(oldp+9,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask_eq_2) 
                              & (~ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address))));
        vcdp->chgBit(oldp+10,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask_acc_2) 
                               | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask_eq_2) 
                                  & (~ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))));
        vcdp->chgBit(oldp+11,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask_eq_2) 
                               & vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)));
        vcdp->chgBit(oldp+12,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask_acc_2) 
                               | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask_eq_2) 
                                  & vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address))));
        vcdp->chgBit(oldp+13,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask_eq_3) 
                               & (~ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address))));
        vcdp->chgBit(oldp+14,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask_acc_3) 
                               | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask_eq_3) 
                                  & (~ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))));
        vcdp->chgBit(oldp+15,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask_eq_3) 
                               & vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)));
        vcdp->chgBit(oldp+16,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask_acc_3) 
                               | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask_eq_3) 
                                  & vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address))));
        vcdp->chgBit(oldp+17,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask_eq_4) 
                               & (~ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address))));
    }
}

void VTestHarness::traceChgThis__114(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+1261);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(oldp+0,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask_acc_4) 
                              | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask_eq_4) 
                                 & (~ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))));
        vcdp->chgBit(oldp+1,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask_eq_4) 
                              & vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)));
        vcdp->chgBit(oldp+2,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask_acc_4) 
                              | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask_eq_4) 
                                 & vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address))));
        vcdp->chgBit(oldp+3,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask_eq_5) 
                              & (~ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address))));
        vcdp->chgBit(oldp+4,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask_acc_5) 
                              | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask_eq_5) 
                                 & (~ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))));
        vcdp->chgBit(oldp+5,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask_eq_5) 
                              & vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)));
        vcdp->chgBit(oldp+6,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask_acc_5) 
                              | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask_eq_5) 
                                 & vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address))));
        vcdp->chgCData(oldp+7,(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask),8);
        vcdp->chgSData(oldp+8,((0x1ffU & (~ (0xffffffU 
                                             & (((IData)(0xfffU) 
                                                 << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size)) 
                                                >> 3U))))),9);
        vcdp->chgSData(oldp+9,((0x1ffU & (~ (0xffffffU 
                                             & (((IData)(0xfffU) 
                                                 << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                                                >> 3U))))),9);
        vcdp->chgBit(oldp+10,((1U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))));
        vcdp->chgCData(oldp+11,((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___a_first_T) 
                                  & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_first_counter_1)))
                                  ? (1U | (((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                             ? 1U : 4U) 
                                           << 1U)) : 0U)),4);
    }
}

void VTestHarness::traceChgThis__116(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+1273);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgCData(oldp+0,((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___a_first_T) 
                                 & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_first_counter_1)))
                                 ? (1U | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size) 
                                          << 1U)) : 0U)),5);
        vcdp->chgBit(oldp+1,((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                               & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_first_counter_1))) 
                              & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)))));
        vcdp->chgCData(oldp+2,((7U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___a_opcode_lookup_T_1) 
                                      >> 1U))),4);
        vcdp->chgCData(oldp+3,((0x7fU & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__inflight_sizes) 
                                          >> ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                              << 3U)) 
                                         >> 1U))),8);
        vcdp->chgBit(oldp+4,((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                               & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_first_counter_1)))
                               ? 1U : 0U)));
        vcdp->chgBit(oldp+5,(((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                                & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter_1))) 
                               & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                               ? (1U & ((IData)(1U) 
                                        << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)))
                               : 0U)));
        vcdp->chgBit(oldp+6,((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___a_first_T) 
                               & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_first_counter_1)))
                               ? 1U : 0U)));
        vcdp->chgBit(oldp+7,(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___d_first_T) 
                                & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter_1))) 
                               & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                               ? (1U & ((IData)(1U) 
                                        << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)))
                               : 0U)));
    }
}

void VTestHarness::traceChgThis__118(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+1281);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgCData(oldp+0,((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___a_first_T) 
                                 & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_first_counter_1)))
                                 ? (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___a_first_T) 
                                     & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_first_counter_1)))
                                     ? (0xfU & (1U 
                                                | (((7U 
                                                     == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                                     ? 1U
                                                     : 4U) 
                                                   << 1U)))
                                     : 0U) : 0U)),4);
        vcdp->chgCData(oldp+1,(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___d_first_T) 
                                  & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter_1))) 
                                 & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                                 ? (0xfU & ((IData)(0xfU) 
                                            << ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                                << 2U)))
                                 : 0U)),4);
        vcdp->chgCData(oldp+2,((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___a_first_T) 
                                 & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_first_counter_1)))
                                 ? (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___a_first_T) 
                                     & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_first_counter_1)))
                                     ? (0xffU & (1U 
                                                 | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size) 
                                                    << 1U)))
                                     : 0U) : 0U)),8);
        vcdp->chgCData(oldp+3,(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___d_first_T) 
                                  & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter_1))) 
                                 & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                                 ? (0xffU & ((IData)(0xffU) 
                                             << ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                                 << 3U)))
                                 : 0U)),8);
        vcdp->chgCData(oldp+4,((0x7fU & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__inflight_sizes_1) 
                                          >> ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                              << 3U)) 
                                         >> 1U))),8);
    }
}

void VTestHarness::traceChgThis__120(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+1286);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgCData(oldp+0,(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___d_first_T) 
                                  & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter_2))) 
                                 & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                                 ? (0xffU & ((IData)(0xffU) 
                                             << ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                                 << 3U)))
                                 : 0U)),8);
        vcdp->chgBit(oldp+1,(((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__full)) 
                              & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid))));
        vcdp->chgBit(oldp+2,(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ptr_match));
        vcdp->chgBit(oldp+3,(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty));
        vcdp->chgBit(oldp+4,(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__full));
        vcdp->chgBit(oldp+5,(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__do_enq));
        vcdp->chgBit(oldp+6,(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__do_deq));
        vcdp->chgBit(oldp+7,(((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__full)) 
                              & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser_auto_manager_in_d_valid))));
        vcdp->chgBit(oldp+8,(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ptr_match));
        vcdp->chgBit(oldp+9,(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty));
        vcdp->chgBit(oldp+10,(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__full));
        vcdp->chgBit(oldp+11,(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__do_enq));
        vcdp->chgBit(oldp+12,(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__do_deq));
        vcdp->chgBit(oldp+13,((1U & (~ (IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txfifo__DOT__full)))));
        vcdp->chgBit(oldp+14,(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txfifo_io_enq_valid));
        vcdp->chgBit(oldp+15,((1U & (~ (IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txfifo__DOT__empty)))));
        vcdp->chgBit(oldp+16,((1U & (~ (IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__rxfifo__DOT__full)))));
        vcdp->chgBit(oldp+17,(((((2U == (IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__rxState)) 
                                 & (IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__rxDataWrap)) 
                                & (IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__rxBaudWrap)) 
                               & (~ (IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txfifo__DOT__full)))));
        vcdp->chgBit(oldp+18,((1U & (~ (IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__rxfifo__DOT__empty)))));
        vcdp->chgBit(oldp+19,(((IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT___T_1) 
                               & (7U == (IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txDataIdx)))));
        vcdp->chgBit(oldp+20,(((IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT___T_3) 
                               & (0x363U == (IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txBaudCount)))));
        vcdp->chgBit(oldp+21,(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__rxBaudWrap));
        vcdp->chgBit(oldp+22,(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__rxDataWrap));
        vcdp->chgBit(oldp+23,(((~ (IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txfifo__DOT__full)) 
                               & (IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txfifo_io_enq_valid))));
        vcdp->chgBit(oldp+24,(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txfifo__DOT__ptr_match));
        vcdp->chgBit(oldp+25,(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txfifo__DOT__empty));
        vcdp->chgBit(oldp+26,(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txfifo__DOT__full));
    }
}

void VTestHarness::traceChgThis__122(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+1313);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(oldp+0,(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txfifo__DOT__do_enq));
        vcdp->chgBit(oldp+1,(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txfifo__DOT__do_deq));
        vcdp->chgBit(oldp+2,(((~ (IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__rxfifo__DOT__full)) 
                              & (IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__sim__DOT_____05Fin_valid_reg))));
        vcdp->chgBit(oldp+3,(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__rxfifo__DOT__ptr_match));
        vcdp->chgBit(oldp+4,(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__rxfifo__DOT__empty));
        vcdp->chgBit(oldp+5,(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__rxfifo__DOT__full));
        vcdp->chgBit(oldp+6,(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__rxfifo__DOT__do_enq));
        vcdp->chgBit(oldp+7,(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__rxfifo__DOT__do_deq));
    }
}

void VTestHarness::traceChgThis__123(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+1321);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(oldp+0,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___T) 
                              & (3U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__recvCount)))));
    }
}

void VTestHarness::traceChgThis__124(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+1322);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(oldp+0,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__outSer__DOT___T) 
                              & (3U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__outSer__DOT__sendCount)))));
    }
}

void VTestHarness::traceChgThis__125(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+1323);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(oldp+0,(vlTOPp->TestHarness__DOT__bits_out_queue__DOT__sink_io_deq_valid));
        vcdp->chgBit(oldp+1,(vlTOPp->TestHarness__DOT__bits_in_queue__DOT__source_io_enq_ready));
        vcdp->chgCData(oldp+2,(vlTOPp->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__widx_widx_gray_io_q),4);
    }
}

void VTestHarness::traceChgThis__126(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+1326);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(oldp+0,(((IData)(vlTOPp->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
                              & ((IData)(vlTOPp->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__ridx) 
                                 != (IData)(vlTOPp->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__widx_widx_gray_io_q)))));
    }
}

void VTestHarness::traceChgThis__127(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+1327);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(oldp+0,(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGen__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_clock_ClockDivideBy1_clk_out));
        vcdp->chgBit(oldp+1,(vlTOPp->TestHarness__DOT__chiptop__DOT__gated_clock_debug_clock_gate_out));
        vcdp->chgBit(oldp+2,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__fq_reset));
        vcdp->chgBit(oldp+3,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__bundleOut_0_a_source__DOT__source_valid_0_reset));
        vcdp->chgBit(oldp+4,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleOut_0_a_sink__DOT__sink_valid_0_reset));
        vcdp->chgBit(oldp+5,(vlTOPp->TestHarness__DOT__chiptop__DOT__gated_clock_debug_clock_gate__DOT__en_latched));
    }
}

void VTestHarness::traceChgThis__128(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+1333);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgCData(oldp+0,((7U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT___a_opcode_lookup_T_1) 
                                      >> 1U))),4);
    }
}

void VTestHarness::traceChgThis__129(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+1334);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgIData(oldp+0,((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__muxStateEarly_0)
                                  ? ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__bypass)
                                      ? 0U : (IData)(
                                                     (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                      >> 1U)))
                                  : 0U) | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__muxStateEarly_1)
                                            ? ((0U 
                                                == 
                                                (5U 
                                                 & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl_auto_out_a_bits_address) 
                                                    >> 2U)))
                                                ? (
                                                   (8U 
                                                    & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl_auto_out_a_bits_address))
                                                    ? 0x112380U
                                                    : 
                                                   (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_haltreq) 
                                                     << 0x1fU) 
                                                    | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_ndmreset) 
                                                        << 1U) 
                                                       | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_dmactive) 
                                                          & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmactiveAck_dmactiveAckSync__DOT__output_chain__DOT__sync_0)))))
                                                : 0U)
                                            : 0U))),32);
        vcdp->chgIData(oldp+1,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__busy)
                                 ? 0U : ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar_auto_in_d_valid)
                                          ? (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__muxStateEarly_0)
                                               ? ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__bypass)
                                                   ? 0U
                                                   : (IData)(
                                                             (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                              >> 1U)))
                                               : 0U) 
                                             | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__muxStateEarly_1)
                                                 ? 
                                                ((0U 
                                                  == 
                                                  (5U 
                                                   & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl_auto_out_a_bits_address) 
                                                      >> 2U)))
                                                  ? 
                                                 ((8U 
                                                   & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl_auto_out_a_bits_address))
                                                   ? 0x112380U
                                                   : 
                                                  (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_haltreq) 
                                                    << 0x1fU) 
                                                   | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_ndmreset) 
                                                       << 1U) 
                                                      | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_dmactive) 
                                                         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmactiveAck_dmactiveAckSync__DOT__output_chain__DOT__sync_0)))))
                                                  : 0U)
                                                 : 0U))
                                          : 0U))),32);
    }
}

void VTestHarness::traceChgThis__131(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+1336);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgCData(oldp+0,((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__a_first_done) 
                                 & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__a_first_counter_1)))
                                 ? (1U | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl_auto_out_a_bits_opcode) 
                                          << 1U)) : 0U)),4);
        vcdp->chgCData(oldp+1,((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__a_first_done) 
                                 & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__a_first_counter_1)))
                                 ? (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__a_first_done) 
                                     & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__a_first_counter_1)))
                                     ? (0xfU & (1U 
                                                | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl_auto_out_a_bits_opcode) 
                                                   << 1U)))
                                     : 0U) : 0U)),4);
    }
}

void VTestHarness::traceChgThis__132(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+1338);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgCData(oldp+0,((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__a_first_done) 
                                 & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__a_first_counter_1)))
                                 ? (1U | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl_auto_out_a_bits_opcode) 
                                          << 1U)) : 0U)),4);
        vcdp->chgCData(oldp+1,((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__a_first_done) 
                                 & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__a_first_counter_1)))
                                 ? (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__a_first_done) 
                                     & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__a_first_counter_1)))
                                     ? (0xfU & (1U 
                                                | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl_auto_out_a_bits_opcode) 
                                                   << 1U)))
                                     : 0U) : 0U)),4);
        vcdp->chgCData(oldp+2,((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__a_first_done) 
                                 & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__a_first_counter_1)))
                                 ? (1U | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl_auto_out_a_bits_opcode) 
                                          << 1U)) : 0U)),4);
        vcdp->chgCData(oldp+3,((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__a_first_done) 
                                 & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__a_first_counter_1)))
                                 ? (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__a_first_done) 
                                     & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__a_first_counter_1)))
                                     ? (0xfU & (1U 
                                                | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl_auto_out_a_bits_opcode) 
                                                   << 1U)))
                                     : 0U) : 0U)),4);
        vcdp->chgCData(oldp+4,((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__a_first_done) 
                                 & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__a_first_counter_1)))
                                 ? (1U | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl_auto_out_a_bits_opcode) 
                                          << 1U)) : 0U)),4);
        vcdp->chgCData(oldp+5,((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__a_first_done) 
                                 & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__a_first_counter_1)))
                                 ? (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__a_first_done) 
                                     & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__a_first_counter_1)))
                                     ? (0xfU & (1U 
                                                | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl_auto_out_a_bits_opcode) 
                                                   << 1U)))
                                     : 0U) : 0U)),4);
    }
}

void VTestHarness::traceChgThis__134(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+1344);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgCData(oldp+0,((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__a_first_done) 
                                 & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__a_first_counter_1)))
                                 ? (1U | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl_auto_out_a_bits_opcode) 
                                          << 1U)) : 0U)),4);
        vcdp->chgCData(oldp+1,((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__a_first_done) 
                                 & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__a_first_counter_1)))
                                 ? (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__a_first_done) 
                                     & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__a_first_counter_1)))
                                     ? (0xfU & (1U 
                                                | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl_auto_out_a_bits_opcode) 
                                                   << 1U)))
                                     : 0U) : 0U)),4);
    }
}

void VTestHarness::traceChgThis__136(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+1346);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(oldp+0,(((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink_io_deq_valid) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__d_first_counter_1))) 
                               & (6U != (7U & (IData)(
                                                      (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                       >> 0x28U)))))
                               ? (1U & ((IData)(1U) 
                                        << (1U & (IData)(
                                                         (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                          >> 0x23U)))))
                               : 0U)));
    }
}

void VTestHarness::traceChgThis__137(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+1347);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(oldp+0,((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar_auto_out_0_a_valid) 
                               & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__a_first_counter_1))) 
                              & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor_io_in_d_bits_source)))));
    }
}

void VTestHarness::traceChgThis__138(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+1348);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(oldp+0,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__muxStateEarly_0) 
                              & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__bypass)
                                  ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error_auto_in_d_bits_corrupt)
                                  : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg)))));
        vcdp->chgCData(oldp+1,((7U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__bypass)
                                       ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error_auto_in_d_bits_opcode)
                                       : (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                  >> 0x28U))))),3);
        vcdp->chgCData(oldp+2,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__bypass)
                                 ? 0U : (3U & (IData)(
                                                      (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                       >> 0x26U))))),2);
        vcdp->chgCData(oldp+3,((3U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__bypass)
                                       ? ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__muxStateEarly_1)
                                           ? 2U : 0U)
                                       : (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                  >> 0x24U))))),2);
        vcdp->chgBit(oldp+4,((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__bypass)) 
                                    & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                               >> 0x22U))))));
        vcdp->chgIData(oldp+5,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__bypass)
                                 ? 0U : (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                 >> 1U)))),32);
        vcdp->chgBit(oldp+6,((1U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__bypass)
                                     ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error_auto_in_d_bits_corrupt)
                                     : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg)))));
        vcdp->chgBit(oldp+7,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__beatsLeft)
                               ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___sink_ACancel_earlyValid_T_3)
                               : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_10))));
        vcdp->chgBit(oldp+8,((1U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__beatsLeft)
                                     ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__state_0)
                                     : (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___readys_readys_T_2))))));
        vcdp->chgBit(oldp+9,((1U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__beatsLeft)
                                     ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__state_1)
                                     : (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___readys_readys_T_2) 
                                           >> 1U))))));
        vcdp->chgCData(oldp+10,((7U & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__inflight_sizes) 
                                        >> ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor_io_in_d_bits_source) 
                                            << 2U)) 
                                       >> 1U))),4);
    }
}

void VTestHarness::traceChgThis__140(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+1359);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgCData(oldp+0,((7U & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__inflight_sizes_1) 
                                       >> ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor_io_in_d_bits_source) 
                                           << 2U)) 
                                      >> 1U))),4);
        vcdp->chgBit(oldp+1,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__beatsLeft)
                               ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT___sink_ACancel_earlyValid_T_2)
                               : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__da_valid))));
        vcdp->chgCData(oldp+2,((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__a_first_done) 
                                 & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__a_first_counter_1)))
                                 ? 5U : 0U)),3);
        vcdp->chgBit(oldp+3,((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar_auto_out_1_a_valid) 
                               & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__a_first_counter_1))) 
                              & (~ (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                            >> 0x23U))))));
        vcdp->chgBit(oldp+4,((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar_auto_out_1_a_valid) 
                               & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__a_first_counter_1)))
                               ? 1U : 0U)));
        vcdp->chgBit(oldp+5,((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__a_first_done) 
                               & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__a_first_counter_1)))
                               ? 1U : 0U)));
        vcdp->chgCData(oldp+6,((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__a_first_done) 
                                 & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__a_first_counter_1)))
                                 ? (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__a_first_done) 
                                     & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__a_first_counter_1)))
                                     ? 5U : 0U) : 0U)),4);
        vcdp->chgCData(oldp+7,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__busy)
                                 ? 0U : ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar_auto_in_d_valid)
                                          ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dmiReqReg_addr)
                                          : 0U))),7);
    }
}

void VTestHarness::traceChgThis__142(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+1367);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(oldp+0,(((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__d_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__d_first_counter_1))) 
                               & (6U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor_io_in_d_bits_opcode)))
                               ? 1U : 0U)));
        vcdp->chgCData(oldp+1,(((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__d_first_done) 
                                  & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__d_first_counter_2))) 
                                 & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor_io_in_d_bits_opcode)))
                                 ? 0xfU : 0U)),4);
        vcdp->chgBit(oldp+2,((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__done_3) 
                               & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__counter_3))) 
                              & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__in_d_bits_opcode) 
                                  >> 2U) & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__in_d_bits_opcode) 
                                               >> 1U))))));
        vcdp->chgBit(oldp+3,(((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__d_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__d_first_counter_1))) 
                               & (6U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor_io_in_d_bits_opcode)))
                               ? (1U & ((IData)(1U) 
                                        << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor_io_in_d_bits_source)))
                               : 0U)));
        vcdp->chgCData(oldp+4,(((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__d_first_done) 
                                  & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__d_first_counter_2))) 
                                 & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor_io_in_d_bits_opcode)))
                                 ? (0xfU & ((IData)(0xfU) 
                                            << ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor_io_in_d_bits_source) 
                                                << 2U)))
                                 : 0U)),4);
        vcdp->chgBit(oldp+5,(((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__d_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__d_first_counter_1))) 
                               & (6U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor_io_in_d_bits_opcode)))
                               ? 1U : 0U)));
        vcdp->chgCData(oldp+6,(((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__d_first_done) 
                                  & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__d_first_counter_2))) 
                                 & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor_io_in_d_bits_opcode)))
                                 ? 0xfU : 0U)),4);
    }
}

void VTestHarness::traceChgThis__144(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+1374);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgCData(oldp+0,((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__a_first_done) 
                                 & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__a_first_counter_1)))
                                 ? 5U : 0U)),3);
        vcdp->chgBit(oldp+1,((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__a_first_done) 
                               & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__a_first_counter_1)))
                               ? 1U : 0U)));
        vcdp->chgCData(oldp+2,((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__a_first_done) 
                                 & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__a_first_counter_1)))
                                 ? (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__a_first_done) 
                                     & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__a_first_counter_1)))
                                     ? 5U : 0U) : 0U)),4);
        vcdp->chgCData(oldp+3,((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__a_first_done) 
                                 & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__a_first_counter_1)))
                                 ? 5U : 0U)),3);
        vcdp->chgBit(oldp+4,((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__a_first_done) 
                               & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__a_first_counter_1)))
                               ? 1U : 0U)));
        vcdp->chgBit(oldp+5,((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__d_first_done) 
                               & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__d_first_counter_1)))
                               ? 1U : 0U)));
        vcdp->chgCData(oldp+6,((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__a_first_done) 
                                 & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__a_first_counter_1)))
                                 ? (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__a_first_done) 
                                     & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__a_first_counter_1)))
                                     ? 5U : 0U) : 0U)),4);
        vcdp->chgBit(oldp+7,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__out_1_ready) 
                              & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__idle))));
        vcdp->chgBit(oldp+8,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__done) 
                              & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__counter)))));
        vcdp->chgCData(oldp+9,((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__a_first_done) 
                                 & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__a_first_counter_1)))
                                 ? 5U : 0U)),3);
    }
}

void VTestHarness::traceChgThis__146(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+1384);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(oldp+0,((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__a_first_done) 
                               & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__a_first_counter_1)))
                               ? 1U : 0U)));
        vcdp->chgCData(oldp+1,((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__a_first_done) 
                                 & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__a_first_counter_1)))
                                 ? (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__a_first_done) 
                                     & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__a_first_counter_1)))
                                     ? 5U : 0U) : 0U)),4);
        vcdp->chgBit(oldp+2,(((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__beatsLeft)) 
                              & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar_auto_out_0_d_ready))));
        vcdp->chgCData(oldp+3,((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__a_first_done) 
                                 & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__a_first_counter_1)))
                                 ? 5U : 0U)),3);
        vcdp->chgBit(oldp+4,((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__a_first_done) 
                               & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__a_first_counter_1)))
                               ? 1U : 0U)));
        vcdp->chgCData(oldp+5,((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__a_first_done) 
                                 & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__a_first_counter_1)))
                                 ? (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__a_first_done) 
                                     & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__a_first_counter_1)))
                                     ? 5U : 0U) : 0U)),4);
        vcdp->chgBit(oldp+6,(((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__d_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__d_first_counter_1))) 
                               & (6U != (7U & (IData)(
                                                      (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                       >> 0x28U)))))
                               ? (1U & ((IData)(1U) 
                                        << (1U & (IData)(
                                                         (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                          >> 0x23U)))))
                               : 0U)));
        vcdp->chgCData(oldp+7,(((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__d_first_done) 
                                  & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__d_first_counter_2))) 
                                 & (6U == (7U & (IData)(
                                                        (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                         >> 0x28U)))))
                                 ? (0xfU & ((IData)(0xfU) 
                                            << (4U 
                                                & ((IData)(
                                                           (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                            >> 0x23U)) 
                                                   << 2U))))
                                 : 0U)),4);
    }
}
