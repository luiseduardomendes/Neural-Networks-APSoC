// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VTestHarness__Syms.h"


extern const VlWide<64>/*2047:0*/ VTestHarness__ConstPool__CONST_ha056d847_0;
extern const VlWide<33>/*1055:0*/ VTestHarness__ConstPool__CONST_hf1d89c7e_0;
extern const VlWide<33>/*1055:0*/ VTestHarness__ConstPool__CONST_hd0572db1_0;

void VTestHarness___024root__trace_chg_sub_2(VTestHarness___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root__trace_chg_sub_2\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 8187);
    VlWide<4>/*127:0*/ __Vtemp_hf9b0eb77__0;
    VlWide<64>/*2047:0*/ __Vtemp_h7e4025de__0;
    VlWide<64>/*2047:0*/ __Vtemp_ha5d123b6__0;
    VlWide<33>/*1055:0*/ __Vtemp_h813fff03__0;
    VlWide<3>/*95:0*/ __Vtemp_h255c43d3__0;
    VlWide<3>/*95:0*/ __Vtemp_h095083c4__3;
    VlWide<3>/*95:0*/ __Vtemp_h18400d3d__0;
    VlWide<3>/*95:0*/ __Vtemp_h28047a85__0;
    VlWide<3>/*95:0*/ __Vtemp_h25ff00c9__0;
    VlWide<3>/*95:0*/ __Vtemp_hf311be31__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__0;
    VlWide<4>/*127:0*/ __Vtemp_h26700e2c__0;
    VlWide<4>/*127:0*/ __Vtemp_hde152b8c__0;
    VlWide<3>/*95:0*/ __Vtemp_hd812b4ec__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__1;
    VlWide<4>/*127:0*/ __Vtemp_h341f8578__0;
    VlWide<4>/*127:0*/ __Vtemp_h3e24771a__0;
    VlWide<3>/*95:0*/ __Vtemp_h3899dcc7__0;
    VlWide<4>/*127:0*/ __Vtemp_he0d2b28b__0;
    VlWide<3>/*95:0*/ __Vtemp_h853ebe42__0;
    VlWide<4>/*127:0*/ __Vtemp_h17e60f1b__0;
    VlWide<4>/*127:0*/ __Vtemp_hd5e745fd__0;
    VlWide<4>/*127:0*/ __Vtemp_hb29d6795__0;
    VlWide<4>/*127:0*/ __Vtemp_h12654ca7__0;
    VlWide<4>/*127:0*/ __Vtemp_hee5a28af__0;
    VlWide<4>/*127:0*/ __Vtemp_ha8797595__0;
    VlWide<4>/*127:0*/ __Vtemp_h4f040797__0;
    VlWide<4>/*127:0*/ __Vtemp_hb6ff69bc__0;
    VlWide<4>/*127:0*/ __Vtemp_hdd67964f__0;
    VlWide<4>/*127:0*/ __Vtemp_hbbb61d8f__0;
    VlWide<4>/*127:0*/ __Vtemp_hac93f5a5__0;
    VlWide<5>/*159:0*/ __Vtemp_ha9b66031__0;
    VlWide<6>/*191:0*/ __Vtemp_h7e3593b0__0;
    VlWide<5>/*159:0*/ __Vtemp_hb0bd69a9__0;
    VlWide<4>/*127:0*/ __Vtemp_h6082bd7b__0;
    VlWide<5>/*159:0*/ __Vtemp_h3ad90bbb__0;
    VlWide<6>/*191:0*/ __Vtemp_hc05c661f__0;
    VlWide<4>/*127:0*/ __Vtemp_hb6ff69bc__1;
    VlWide<5>/*159:0*/ __Vtemp_h7e033faf__0;
    VlWide<6>/*191:0*/ __Vtemp_h828bc3e4__0;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[6U])) {
        bufp->chgSData(oldp+0,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s1_req_reg_set),10);
        bufp->chgCData(oldp+1,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s1_req_reg_sink),4);
        bufp->chgCData(oldp+2,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s1_req_reg_way),3);
        bufp->chgBit(oldp+3,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s1_req_reg_bad));
        bufp->chgBit(oldp+4,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s1_req_prio_0));
        bufp->chgCData(oldp+5,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s1_req_opcode),3);
        bufp->chgCData(oldp+6,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s1_req_size),3);
        bufp->chgBit(oldp+7,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s1_latch_bypass));
        bufp->chgCData(oldp+8,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s1_bypass_r),2);
        bufp->chgBit(oldp+9,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s1_grant));
        bufp->chgBit(oldp+10,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s1_need_r));
        bufp->chgBit(oldp+11,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__queue_io_enq_valid_REG));
        bufp->chgBit(oldp+12,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__queue_io_enq_valid_REG_1));
        bufp->chgBit(oldp+13,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s2_full));
        bufp->chgBit(oldp+14,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s2_valid_pb));
        bufp->chgCData(oldp+15,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s2_beat),2);
        bufp->chgCData(oldp+16,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s2_bypass),2);
        bufp->chgBit(oldp+17,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s2_req_prio_0));
        bufp->chgBit(oldp+18,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s2_req_prio_2));
        bufp->chgCData(oldp+19,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s2_req_opcode),3);
        bufp->chgCData(oldp+20,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s2_req_param),3);
        bufp->chgCData(oldp+21,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s2_req_size),3);
        bufp->chgCData(oldp+22,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s2_req_source),6);
        bufp->chgCData(oldp+23,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s2_req_offset),6);
        bufp->chgSData(oldp+24,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s2_req_set),10);
        bufp->chgCData(oldp+25,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s2_req_sink),4);
        bufp->chgCData(oldp+26,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s2_req_way),3);
        bufp->chgBit(oldp+27,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s2_req_bad));
        bufp->chgBit(oldp+28,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s2_need_r));
        bufp->chgBit(oldp+29,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s2_need_pb));
        bufp->chgBit(oldp+30,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s2_retires));
        bufp->chgBit(oldp+31,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s2_need_d));
        bufp->chgWData(oldp+32,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s2_pdata_r_data),128);
        bufp->chgSData(oldp+36,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s2_pdata_r_mask),16);
        bufp->chgBit(oldp+37,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s2_pdata_r_corrupt));
        bufp->chgBit(oldp+38,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__pb_ready));
        bufp->chgBit(oldp+39,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s2_ready));
        bufp->chgBit(oldp+40,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s3_full));
        bufp->chgCData(oldp+41,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s3_beat),2);
        bufp->chgCData(oldp+42,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s3_bypass),2);
        bufp->chgBit(oldp+43,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s3_req_prio_0));
        bufp->chgBit(oldp+44,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s3_req_prio_2));
        bufp->chgCData(oldp+45,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s3_req_opcode),3);
        bufp->chgCData(oldp+46,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s3_req_param),3);
        bufp->chgCData(oldp+47,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s3_req_offset),6);
        bufp->chgSData(oldp+48,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s3_req_set),10);
        bufp->chgCData(oldp+49,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s3_req_way),3);
        bufp->chgWData(oldp+50,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s3_pdata_data),128);
        bufp->chgSData(oldp+54,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s3_pdata_mask),16);
        bufp->chgBit(oldp+55,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s3_pdata_corrupt));
        bufp->chgBit(oldp+56,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s3_need_bs));
        bufp->chgBit(oldp+57,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s3_retires));
        bufp->chgBit(oldp+58,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s3_need_r));
        bufp->chgBit(oldp+59,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_full));
        bufp->chgBit(oldp+60,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_need_bs));
        bufp->chgBit(oldp+61,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_need_pb));
        bufp->chgBit(oldp+62,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_prio_2));
        bufp->chgCData(oldp+63,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param),3);
        bufp->chgCData(oldp+64,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_size),3);
        bufp->chgCData(oldp+65,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_offset),6);
        bufp->chgCData(oldp+66,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_adjusted_opcode),3);
        bufp->chgWData(oldp+67,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data),128);
        bufp->chgSData(oldp+71,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_mask),16);
        bufp->chgBit(oldp+72,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_corrupt));
        bufp->chgWData(oldp+73,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata),128);
        bufp->chgCData(oldp+77,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s5_req_size),3);
        bufp->chgCData(oldp+78,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s5_req_offset),6);
        bufp->chgSData(oldp+79,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s5_req_set),10);
        bufp->chgCData(oldp+80,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s5_req_way),3);
        bufp->chgCData(oldp+81,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s5_beat),2);
        bufp->chgWData(oldp+82,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s5_dat),128);
        bufp->chgCData(oldp+86,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s6_req_size),3);
        bufp->chgCData(oldp+87,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s6_req_offset),6);
        bufp->chgSData(oldp+88,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s6_req_set),10);
        bufp->chgCData(oldp+89,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s6_req_way),3);
        bufp->chgCData(oldp+90,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s6_beat),2);
        bufp->chgWData(oldp+91,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s6_dat),128);
        bufp->chgWData(oldp+95,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s7_dat),128);
        bufp->chgCData(oldp+99,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s3_bypass_data_REG),2);
        bufp->chgWData(oldp+100,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s3_bypass_data_REG_1),128);
        bufp->chgBit(oldp+104,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s1_single));
        bufp->chgBit(oldp+105,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s1_last));
        bufp->chgBit(oldp+106,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s2_latch));
        bufp->chgBit(oldp+107,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s3_latch));
        bufp->chgBit(oldp+108,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_latch));
        bufp->chgBit(oldp+109,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__retire));
        bufp->chgSData(oldp+110,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__pre_s3_req_set),10);
        bufp->chgCData(oldp+111,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__pre_s3_req_way),3);
        bufp->chgBit(oldp+112,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__pre_s3_5_bypass_bit));
        bufp->chgBit(oldp+113,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__pre_s3_6_bypass_bit));
        bufp->chgCData(oldp+114,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__pre_s3_beat),2);
        bufp->chgWData(oldp+115,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__pre_s5_dat),128);
        bufp->chgWData(oldp+119,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__pre_s6_dat),128);
        bufp->chgWData(oldp+123,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__pre_s7_dat),128);
        bufp->chgCData(oldp+127,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__pre_s3_5_bypass),2);
        bufp->chgCData(oldp+128,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__pre_s3_6_bypass),2);
        bufp->chgBit(oldp+129,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__pre_s3_4_bypass_bit));
        bufp->chgSData(oldp+130,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__atomics__DOT__signBit),16);
        bufp->chgCData(oldp+131,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__atomics__DOT__select),2);
        bufp->chgBit(oldp+132,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT____Vcellinp__queue__io_deq_ready));
        bufp->chgBit(oldp+133,((1U & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__queue__DOT__ptr_match) 
                                         & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__queue__DOT__maybe_full))))));
        bufp->chgBit(oldp+134,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__queue_io_enq_valid_REG_1) 
                                      | (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__queue__DOT__empty))))));
        bufp->chgWData(oldp+135,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT___queue_io_deq_bits_data),128);
        bufp->chgCData(oldp+139,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__queue__DOT__enq_ptr_value),2);
        bufp->chgCData(oldp+140,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__queue__DOT__deq_ptr_value),2);
        bufp->chgBit(oldp+141,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__queue__DOT__maybe_full));
        bufp->chgBit(oldp+142,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__queue__DOT__ptr_match));
        bufp->chgBit(oldp+143,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__queue__DOT__empty));
        bufp->chgBit(oldp+144,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__queue__DOT__ptr_match) 
                                & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__queue__DOT__maybe_full))));
        bufp->chgBit(oldp+145,((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__queue__DOT__empty)) 
                                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT____Vcellinp__queue__io_deq_ready)) 
                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__queue_io_enq_valid_REG_1) 
                                   | (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__queue__DOT__empty))))));
        bufp->chgBit(oldp+146,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__queue__DOT__do_enq));
        if ((2U >= (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__queue__DOT__deq_ptr_value))) {
            __Vtemp_hf9b0eb77__0[0U] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__queue__DOT__ram_data_ext__DOT__Memory
                [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__queue__DOT__deq_ptr_value][0U];
            __Vtemp_hf9b0eb77__0[1U] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__queue__DOT__ram_data_ext__DOT__Memory
                [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__queue__DOT__deq_ptr_value][1U];
            __Vtemp_hf9b0eb77__0[2U] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__queue__DOT__ram_data_ext__DOT__Memory
                [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__queue__DOT__deq_ptr_value][2U];
            __Vtemp_hf9b0eb77__0[3U] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__queue__DOT__ram_data_ext__DOT__Memory
                [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__queue__DOT__deq_ptr_value][3U];
        } else {
            __Vtemp_hf9b0eb77__0[0U] = 0U;
            __Vtemp_hf9b0eb77__0[1U] = 0U;
            __Vtemp_hf9b0eb77__0[2U] = 0U;
            __Vtemp_hf9b0eb77__0[3U] = 0U;
        }
        bufp->chgWData(oldp+147,(__Vtemp_hf9b0eb77__0),128);
        bufp->chgWData(oldp+151,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__queue__DOT__ram_data_ext__DOT__Memory[0]),128);
        bufp->chgWData(oldp+155,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__queue__DOT__ram_data_ext__DOT__Memory[1]),128);
        bufp->chgWData(oldp+159,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__queue__DOT__ram_data_ext__DOT__Memory[2]),128);
        bufp->chgBit(oldp+163,((((((((((((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshr_selectOH) 
                                           & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT___io_schedule_bits_e_valid_output)) 
                                          | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshr_selectOH) 
                                              >> 1U) 
                                             & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT___io_schedule_bits_e_valid_output))) 
                                         | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshr_selectOH) 
                                             >> 2U) 
                                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT___io_schedule_bits_e_valid_output))) 
                                        | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshr_selectOH) 
                                            >> 3U) 
                                           & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT___io_schedule_bits_e_valid_output))) 
                                       | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshr_selectOH) 
                                           >> 4U) & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT___io_schedule_bits_e_valid_output))) 
                                      | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshr_selectOH) 
                                          >> 5U) & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT___io_schedule_bits_e_valid_output))) 
                                     | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshr_selectOH) 
                                         >> 6U) & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT___io_schedule_bits_e_valid_output))) 
                                    | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshr_selectOH) 
                                        >> 7U) & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT___io_schedule_bits_e_valid_output))) 
                                   | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshr_selectOH) 
                                       >> 8U) & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT___io_schedule_bits_e_valid_output))) 
                                  | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshr_selectOH) 
                                      >> 9U) & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT___io_schedule_bits_e_valid_output))) 
                                 | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshr_selectOH) 
                                     >> 0xaU) & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___io_schedule_bits_e_valid_output))) 
                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshr_selectOH) 
                                    >> 0xbU) & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT___io_schedule_bits_e_valid_output)))));
        bufp->chgCData(oldp+164,((((((((((((((1U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshr_selectOH))
                                              ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT__sink)
                                              : 0U) 
                                            | ((2U 
                                                & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshr_selectOH))
                                                ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT__sink)
                                                : 0U)) 
                                           | ((4U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshr_selectOH))
                                               ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT__sink)
                                               : 0U)) 
                                          | ((8U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshr_selectOH))
                                              ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__sink)
                                              : 0U)) 
                                         | ((0x10U 
                                             & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshr_selectOH))
                                             ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__sink)
                                             : 0U)) 
                                        | ((0x20U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshr_selectOH))
                                            ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT__sink)
                                            : 0U)) 
                                       | ((0x40U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshr_selectOH))
                                           ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT__sink)
                                           : 0U)) | 
                                      ((0x80U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshr_selectOH))
                                        ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__sink)
                                        : 0U)) | ((0x100U 
                                                   & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshr_selectOH))
                                                   ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__sink)
                                                   : 0U)) 
                                    | ((0x200U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshr_selectOH))
                                        ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__sink)
                                        : 0U)) | ((0x400U 
                                                   & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshr_selectOH))
                                                   ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__sink)
                                                   : 0U)) 
                                  | ((0x800U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshr_selectOH))
                                      ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__sink)
                                      : 0U))),3);
        bufp->chgBit(oldp+165,((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceE__DOT__io_e_q__DOT__full)))));
        bufp->chgBit(oldp+166,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceE__DOT__io_e_q__DOT__enq_ptr_value));
        bufp->chgBit(oldp+167,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceE__DOT__io_e_q__DOT__deq_ptr_value));
        bufp->chgBit(oldp+168,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceE__DOT__io_e_q__DOT__maybe_full));
        bufp->chgBit(oldp+169,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceE__DOT__io_e_q__DOT__ptr_match));
        bufp->chgBit(oldp+170,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceE__DOT__io_e_q__DOT__empty));
        bufp->chgBit(oldp+171,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceE__DOT__io_e_q__DOT__full));
        bufp->chgBit(oldp+172,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceE__DOT__io_e_q__DOT__do_enq));
        bufp->chgCData(oldp+173,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceE__DOT__io_e_q__DOT__ram_sink_ext__DOT__Memory[0]),3);
        bufp->chgCData(oldp+174,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceE__DOT__io_e_q__DOT__ram_sink_ext__DOT__Memory[1]),3);
        bufp->chgBit(oldp+175,((((((((((((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshr_selectOH) 
                                           & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT___io_schedule_bits_x_valid_output)) 
                                          | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshr_selectOH) 
                                              >> 1U) 
                                             & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT___io_schedule_bits_x_valid_output))) 
                                         | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshr_selectOH) 
                                             >> 2U) 
                                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT___io_schedule_bits_x_valid_output))) 
                                        | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshr_selectOH) 
                                            >> 3U) 
                                           & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT___io_schedule_bits_x_valid_output))) 
                                       | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshr_selectOH) 
                                           >> 4U) & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT___io_schedule_bits_x_valid_output))) 
                                      | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshr_selectOH) 
                                          >> 5U) & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT___io_schedule_bits_x_valid_output))) 
                                     | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshr_selectOH) 
                                         >> 6U) & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT___io_schedule_bits_x_valid_output))) 
                                    | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshr_selectOH) 
                                        >> 7U) & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT___io_schedule_bits_x_valid_output))) 
                                   | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshr_selectOH) 
                                       >> 8U) & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT___io_schedule_bits_x_valid_output))) 
                                  | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshr_selectOH) 
                                      >> 9U) & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT___io_schedule_bits_x_valid_output))) 
                                 | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshr_selectOH) 
                                     >> 0xaU) & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___io_schedule_bits_x_valid_output))) 
                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshr_selectOH) 
                                    >> 0xbU) & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT___io_schedule_bits_x_valid_output)))));
        bufp->chgBit(oldp+176,((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceX__DOT__io_x_q__DOT__maybe_full)))));
        bufp->chgBit(oldp+177,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceX__DOT__io_x_q__DOT__do_enq));
        bufp->chgCData(oldp+178,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__a_first_counter),2);
        bufp->chgCData(oldp+179,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__opcode),3);
        bufp->chgCData(oldp+180,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__param),3);
        bufp->chgCData(oldp+181,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__size),3);
        bufp->chgCData(oldp+182,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__source),6);
        bufp->chgIData(oldp+183,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__address),32);
        bufp->chgCData(oldp+184,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__d_first_counter),2);
        bufp->chgCData(oldp+185,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__opcode_1),3);
        bufp->chgCData(oldp+186,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__param_1),2);
        bufp->chgCData(oldp+187,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__size_1),3);
        bufp->chgCData(oldp+188,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__source_1),6);
        bufp->chgCData(oldp+189,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__sink),4);
        bufp->chgBit(oldp+190,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__denied));
        bufp->chgCData(oldp+191,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__c_first_counter),2);
        bufp->chgCData(oldp+192,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__opcode_3),3);
        bufp->chgCData(oldp+193,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__param_3),3);
        bufp->chgCData(oldp+194,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__size_3),3);
        bufp->chgCData(oldp+195,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__source_3),6);
        bufp->chgIData(oldp+196,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__address_2),32);
        bufp->chgQData(oldp+197,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__inflight),37);
        bufp->chgWData(oldp+199,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__inflight_opcodes),148);
        bufp->chgWData(oldp+204,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__inflight_sizes),148);
        bufp->chgCData(oldp+209,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__a_first_counter_1),2);
        bufp->chgBit(oldp+210,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__a_first_counter_1))));
        bufp->chgCData(oldp+211,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__d_first_counter_1),2);
        bufp->chgBit(oldp+212,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__d_first_counter_1))));
        bufp->chgBit(oldp+213,((6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__d_bits_opcode))));
        bufp->chgIData(oldp+214,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__watchdog),32);
        bufp->chgQData(oldp+215,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__inflight_1),37);
        bufp->chgWData(oldp+217,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__inflight_sizes_1),148);
        bufp->chgCData(oldp+222,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__c_first_counter_1),2);
        bufp->chgBit(oldp+223,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__c_first_counter_1))));
        bufp->chgCData(oldp+224,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__d_first_counter_2),2);
        bufp->chgBit(oldp+225,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__d_first_counter_2))));
        bufp->chgIData(oldp+226,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__watchdog_1),32);
        bufp->chgSData(oldp+227,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__inflight_2),12);
        bufp->chgCData(oldp+228,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__d_first_counter_3),2);
        bufp->chgBit(oldp+229,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__d_first_counter_3))));
        bufp->chgSData(oldp+230,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__d_set),12);
        bufp->chgBit(oldp+231,((1U & (((((0x24U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_a_bits_source)) 
                                         | (1U == (3U 
                                                   & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_a_bits_source) 
                                                      >> 4U)))) 
                                        | (~ (IData)(
                                                     (0U 
                                                      != 
                                                      (3U 
                                                       & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_a_bits_source) 
                                                          >> 4U)))))) 
                                       | (0x20U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_a_bits_source))) 
                                      | (0x22U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_a_bits_source))))));
        bufp->chgBit(oldp+232,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__mask_acc));
        bufp->chgBit(oldp+233,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__mask_acc_1));
        bufp->chgBit(oldp+234,((2U == (3U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_a_bits_size)))));
        bufp->chgBit(oldp+235,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__mask_eq_2));
        bufp->chgBit(oldp+236,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__mask_acc_2));
        bufp->chgBit(oldp+237,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__mask_eq_3));
        bufp->chgBit(oldp+238,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__mask_acc_3));
        bufp->chgBit(oldp+239,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__mask_eq_4));
        bufp->chgBit(oldp+240,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__mask_acc_4));
        bufp->chgBit(oldp+241,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__mask_eq_5));
        bufp->chgBit(oldp+242,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__mask_acc_5));
        bufp->chgBit(oldp+243,((1U == (3U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_a_bits_size)))));
        bufp->chgBit(oldp+244,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__mask_eq_6));
        bufp->chgBit(oldp+245,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__mask_acc_6));
        bufp->chgBit(oldp+246,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__mask_eq_7));
        bufp->chgBit(oldp+247,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__mask_acc_7));
        bufp->chgBit(oldp+248,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__mask_eq_8));
        bufp->chgBit(oldp+249,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__mask_acc_8));
        bufp->chgBit(oldp+250,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__mask_eq_9));
        bufp->chgBit(oldp+251,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__mask_acc_9));
        bufp->chgBit(oldp+252,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__mask_eq_10));
        bufp->chgBit(oldp+253,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__mask_acc_10));
        bufp->chgBit(oldp+254,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__mask_eq_11));
        bufp->chgBit(oldp+255,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__mask_acc_11));
        bufp->chgBit(oldp+256,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__mask_eq_12));
        bufp->chgBit(oldp+257,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__mask_acc_12));
        bufp->chgBit(oldp+258,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__mask_eq_13));
        bufp->chgBit(oldp+259,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__mask_acc_13));
        bufp->chgSData(oldp+260,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__mask),16);
        bufp->chgBit(oldp+261,((((((0x24U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s3_req_source)) 
                                   | (1U == (3U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s3_req_source) 
                                                   >> 4U)))) 
                                  | (0U == (3U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s3_req_source) 
                                                  >> 4U)))) 
                                 | (0x20U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s3_req_source))) 
                                | (0x22U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s3_req_source)))));
        bufp->chgQData(oldp+262,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT___same_cycle_resp_T_1)
                                   ? (0x1fffffffffULL 
                                      & VL_SHIFTL_QQQ(37,64,64, 1ULL, (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_a_bits_source))))
                                   : 0ULL)),37);
        bufp->chgBit(oldp+264,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__same_cycle_resp));
        bufp->chgQData(oldp+265,((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT___same_cycle_resp_T_3) 
                                   & (6U == (6U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[0U])))
                                   ? (0x1fffffffffULL 
                                      & VL_SHIFTL_QQQ(37,64,64, 1ULL, (QData)((IData)(
                                                                                (0x20U 
                                                                                | (3U 
                                                                                & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[0U] 
                                                                                >> 0xaU)))))))
                                   : 0ULL)),37);
        bufp->chgBit(oldp+267,((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT___same_cycle_resp_T_3) 
                                 & (6U == (6U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[0U]))) 
                                & ((0x20U | (3U & (
                                                   vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 0xaU))) 
                                   == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s3_req_source)))));
        bufp->chgBit(oldp+268,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done));
        bufp->chgWData(oldp+269,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__inflight),1040);
        bufp->chgWData(oldp+302,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__inflight_opcodes),4160);
        bufp->chgWData(oldp+432,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__inflight_sizes),4160);
        bufp->chgIData(oldp+562,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__watchdog),32);
        bufp->chgBit(oldp+563,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__d_first_done));
        bufp->chgBit(oldp+564,((2U == (3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                             [0U][0U] 
                                             >> 6U)))));
        bufp->chgBit(oldp+565,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__mask_acc));
        bufp->chgBit(oldp+566,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__mask_acc_1));
        bufp->chgBit(oldp+567,((1U == (3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                             [0U][0U] 
                                             >> 6U)))));
        bufp->chgBit(oldp+568,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__mask_eq_2));
        bufp->chgBit(oldp+569,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__mask_acc_2));
        bufp->chgBit(oldp+570,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__mask_eq_3));
        bufp->chgBit(oldp+571,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__mask_acc_3));
        bufp->chgBit(oldp+572,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__mask_eq_4));
        bufp->chgBit(oldp+573,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__mask_acc_4));
        bufp->chgBit(oldp+574,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__mask_eq_5));
        bufp->chgBit(oldp+575,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__mask_acc_5));
        bufp->chgCData(oldp+576,(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__mask_acc_5) 
                                    << 7U) | (0xfff80U 
                                              & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__mask_eq_5) 
                                                  << 7U) 
                                                 & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                    [0U][0U] 
                                                    >> 0xcU)))) 
                                  | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__mask_acc_5) 
                                       | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__mask_eq_5) 
                                          & (~ (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                [0U][0U] 
                                                >> 0x13U)))) 
                                      << 6U) | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__mask_acc_4) 
                                                  << 5U) 
                                                 | (0x3ffe0U 
                                                    & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__mask_eq_4) 
                                                        << 5U) 
                                                       & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                          [0U][0U] 
                                                          >> 0xeU)))) 
                                                | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__mask_acc_4) 
                                                     | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__mask_eq_4) 
                                                        & (~ 
                                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                            [0U][0U] 
                                                            >> 0x13U)))) 
                                                    << 4U) 
                                                   | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__mask_acc_3) 
                                                        << 3U) 
                                                       | (0xfff8U 
                                                          & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__mask_eq_3) 
                                                              << 3U) 
                                                             & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                                [0U][0U] 
                                                                >> 0x10U)))) 
                                                      | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__mask_acc_3) 
                                                           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__mask_eq_3) 
                                                              & (~ 
                                                                 (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                                  [0U][0U] 
                                                                  >> 0x13U)))) 
                                                          << 2U) 
                                                         | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__mask_acc_2) 
                                                              << 1U) 
                                                             | (0x3ffeU 
                                                                & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__mask_eq_2) 
                                                                    << 1U) 
                                                                   & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                                      [0U][0U] 
                                                                      >> 0x12U)))) 
                                                            | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__mask_acc_2) 
                                                               | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__mask_eq_2) 
                                                                  & (~ 
                                                                     (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                                      [0U][0U] 
                                                                      >> 0x13U)))))))))))),8);
        VL_EXTEND_WI(2048,11, __Vtemp_h7e4025de__0, 
                     (0x7ffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                [0U][0U] >> 8U)));
        VL_SHIFTL_WWW(2048,2048,2048, __Vtemp_ha5d123b6__0, VTestHarness__ConstPool__CONST_ha056d847_0, __Vtemp_h7e4025de__0);
        __Vtemp_h813fff03__0[0U] = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0U] 
                                    & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__maybe_full)
                                        ? __Vtemp_ha5d123b6__0[0U]
                                        : VTestHarness__ConstPool__CONST_hd0572db1_0[0U]));
        __Vtemp_h813fff03__0[1U] = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[1U] 
                                    & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__maybe_full)
                                        ? __Vtemp_ha5d123b6__0[1U]
                                        : VTestHarness__ConstPool__CONST_hd0572db1_0[1U]));
        __Vtemp_h813fff03__0[2U] = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[2U] 
                                    & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__maybe_full)
                                        ? __Vtemp_ha5d123b6__0[2U]
                                        : VTestHarness__ConstPool__CONST_hd0572db1_0[2U]));
        __Vtemp_h813fff03__0[3U] = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[3U] 
                                    & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__maybe_full)
                                        ? __Vtemp_ha5d123b6__0[3U]
                                        : VTestHarness__ConstPool__CONST_hd0572db1_0[3U]));
        __Vtemp_h813fff03__0[4U] = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[4U] 
                                    & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__maybe_full)
                                        ? __Vtemp_ha5d123b6__0[4U]
                                        : VTestHarness__ConstPool__CONST_hd0572db1_0[4U]));
        __Vtemp_h813fff03__0[5U] = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[5U] 
                                    & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__maybe_full)
                                        ? __Vtemp_ha5d123b6__0[5U]
                                        : VTestHarness__ConstPool__CONST_hd0572db1_0[5U]));
        __Vtemp_h813fff03__0[6U] = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[6U] 
                                    & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__maybe_full)
                                        ? __Vtemp_ha5d123b6__0[6U]
                                        : VTestHarness__ConstPool__CONST_hd0572db1_0[6U]));
        __Vtemp_h813fff03__0[7U] = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[7U] 
                                    & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__maybe_full)
                                        ? __Vtemp_ha5d123b6__0[7U]
                                        : VTestHarness__ConstPool__CONST_hd0572db1_0[7U]));
        __Vtemp_h813fff03__0[8U] = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[8U] 
                                    & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__maybe_full)
                                        ? __Vtemp_ha5d123b6__0[8U]
                                        : VTestHarness__ConstPool__CONST_hd0572db1_0[8U]));
        __Vtemp_h813fff03__0[9U] = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[9U] 
                                    & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__maybe_full)
                                        ? __Vtemp_ha5d123b6__0[9U]
                                        : VTestHarness__ConstPool__CONST_hd0572db1_0[9U]));
        __Vtemp_h813fff03__0[0xaU] = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0xaU] 
                                      & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__maybe_full)
                                          ? __Vtemp_ha5d123b6__0[0xaU]
                                          : VTestHarness__ConstPool__CONST_hd0572db1_0[0xaU]));
        __Vtemp_h813fff03__0[0xbU] = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0xbU] 
                                      & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__maybe_full)
                                          ? __Vtemp_ha5d123b6__0[0xbU]
                                          : VTestHarness__ConstPool__CONST_hd0572db1_0[0xbU]));
        __Vtemp_h813fff03__0[0xcU] = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0xcU] 
                                      & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__maybe_full)
                                          ? __Vtemp_ha5d123b6__0[0xcU]
                                          : VTestHarness__ConstPool__CONST_hd0572db1_0[0xcU]));
        __Vtemp_h813fff03__0[0xdU] = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0xdU] 
                                      & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__maybe_full)
                                          ? __Vtemp_ha5d123b6__0[0xdU]
                                          : VTestHarness__ConstPool__CONST_hd0572db1_0[0xdU]));
        __Vtemp_h813fff03__0[0xeU] = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0xeU] 
                                      & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__maybe_full)
                                          ? __Vtemp_ha5d123b6__0[0xeU]
                                          : VTestHarness__ConstPool__CONST_hd0572db1_0[0xeU]));
        __Vtemp_h813fff03__0[0xfU] = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0xfU] 
                                      & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__maybe_full)
                                          ? __Vtemp_ha5d123b6__0[0xfU]
                                          : VTestHarness__ConstPool__CONST_hd0572db1_0[0xfU]));
        __Vtemp_h813fff03__0[0x10U] = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x10U] 
                                       & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__maybe_full)
                                           ? __Vtemp_ha5d123b6__0[0x10U]
                                           : VTestHarness__ConstPool__CONST_hd0572db1_0[0x10U]));
        __Vtemp_h813fff03__0[0x11U] = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x11U] 
                                       & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__maybe_full)
                                           ? __Vtemp_ha5d123b6__0[0x11U]
                                           : VTestHarness__ConstPool__CONST_hd0572db1_0[0x11U]));
        __Vtemp_h813fff03__0[0x12U] = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x12U] 
                                       & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__maybe_full)
                                           ? __Vtemp_ha5d123b6__0[0x12U]
                                           : VTestHarness__ConstPool__CONST_hd0572db1_0[0x12U]));
        __Vtemp_h813fff03__0[0x13U] = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x13U] 
                                       & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__maybe_full)
                                           ? __Vtemp_ha5d123b6__0[0x13U]
                                           : VTestHarness__ConstPool__CONST_hd0572db1_0[0x13U]));
        __Vtemp_h813fff03__0[0x14U] = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x14U] 
                                       & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__maybe_full)
                                           ? __Vtemp_ha5d123b6__0[0x14U]
                                           : VTestHarness__ConstPool__CONST_hd0572db1_0[0x14U]));
        __Vtemp_h813fff03__0[0x15U] = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x15U] 
                                       & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__maybe_full)
                                           ? __Vtemp_ha5d123b6__0[0x15U]
                                           : VTestHarness__ConstPool__CONST_hd0572db1_0[0x15U]));
        __Vtemp_h813fff03__0[0x16U] = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x16U] 
                                       & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__maybe_full)
                                           ? __Vtemp_ha5d123b6__0[0x16U]
                                           : VTestHarness__ConstPool__CONST_hd0572db1_0[0x16U]));
        __Vtemp_h813fff03__0[0x17U] = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x17U] 
                                       & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__maybe_full)
                                           ? __Vtemp_ha5d123b6__0[0x17U]
                                           : VTestHarness__ConstPool__CONST_hd0572db1_0[0x17U]));
        __Vtemp_h813fff03__0[0x18U] = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x18U] 
                                       & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__maybe_full)
                                           ? __Vtemp_ha5d123b6__0[0x18U]
                                           : VTestHarness__ConstPool__CONST_hd0572db1_0[0x18U]));
        __Vtemp_h813fff03__0[0x19U] = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x19U] 
                                       & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__maybe_full)
                                           ? __Vtemp_ha5d123b6__0[0x19U]
                                           : VTestHarness__ConstPool__CONST_hd0572db1_0[0x19U]));
        __Vtemp_h813fff03__0[0x1aU] = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x1aU] 
                                       & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__maybe_full)
                                           ? __Vtemp_ha5d123b6__0[0x1aU]
                                           : VTestHarness__ConstPool__CONST_hd0572db1_0[0x1aU]));
        __Vtemp_h813fff03__0[0x1bU] = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x1bU] 
                                       & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__maybe_full)
                                           ? __Vtemp_ha5d123b6__0[0x1bU]
                                           : VTestHarness__ConstPool__CONST_hd0572db1_0[0x1bU]));
        __Vtemp_h813fff03__0[0x1cU] = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x1cU] 
                                       & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__maybe_full)
                                           ? __Vtemp_ha5d123b6__0[0x1cU]
                                           : VTestHarness__ConstPool__CONST_hd0572db1_0[0x1cU]));
        __Vtemp_h813fff03__0[0x1dU] = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x1dU] 
                                       & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__maybe_full)
                                           ? __Vtemp_ha5d123b6__0[0x1dU]
                                           : VTestHarness__ConstPool__CONST_hd0572db1_0[0x1dU]));
        __Vtemp_h813fff03__0[0x1eU] = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x1eU] 
                                       & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__maybe_full)
                                           ? __Vtemp_ha5d123b6__0[0x1eU]
                                           : VTestHarness__ConstPool__CONST_hd0572db1_0[0x1eU]));
        __Vtemp_h813fff03__0[0x1fU] = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x1fU] 
                                       & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__maybe_full)
                                           ? __Vtemp_ha5d123b6__0[0x1fU]
                                           : VTestHarness__ConstPool__CONST_hd0572db1_0[0x1fU]));
        __Vtemp_h813fff03__0[0x20U] = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x20U] 
                                       & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__maybe_full)
                                           ? __Vtemp_ha5d123b6__0[0x20U]
                                           : VTestHarness__ConstPool__CONST_hd0572db1_0[0x20U]));
        bufp->chgWData(oldp+577,(__Vtemp_h813fff03__0),1040);
        bufp->chgBit(oldp+610,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__same_cycle_resp));
        bufp->chgBit(oldp+611,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__maybe_full) 
                                & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_iready))));
        bufp->chgSData(oldp+612,((0x1ffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                            [0U][0U] 
                                            >> 0x16U))),9);
        bufp->chgBit(oldp+613,(((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__maybe_full)) 
                                & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_oready))));
        bufp->chgBit(oldp+614,((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_back__DOT__maybe_full)))));
        bufp->chgBit(oldp+615,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_back__DOT__maybe_full));
        bufp->chgBit(oldp+616,((1U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_back__DOT__ram_ext__DOT__Memory
                                [0U][0U])));
        bufp->chgSData(oldp+617,((0x1ffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_back__DOT__ram_ext__DOT__Memory
                                            [0U][0U] 
                                            >> 1U))),9);
        bufp->chgCData(oldp+618,((0xffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_back__DOT__ram_ext__DOT__Memory
                                           [0U][2U] 
                                           >> 0xaU))),8);
        bufp->chgBit(oldp+619,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_back__DOT__do_enq));
        __Vtemp_h255c43d3__0[0U] = (((IData)((((QData)((IData)(
                                                               vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                               [0U][3U])) 
                                               << 0x2bU) 
                                              | (((QData)((IData)(
                                                                  vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                                  [0U][2U])) 
                                                  << 0xbU) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                                    [0U][1U])) 
                                                    >> 0x15U)))) 
                                     << 0xaU) | ((0x3feU 
                                                  & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                     [0U][0U] 
                                                     >> 0x15U)) 
                                                 | (4U 
                                                    == 
                                                    (7U 
                                                     & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                     [0U][0U]))));
        __Vtemp_h255c43d3__0[1U] = (((IData)((((QData)((IData)(
                                                               vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                               [0U][3U])) 
                                               << 0x2bU) 
                                              | (((QData)((IData)(
                                                                  vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                                  [0U][2U])) 
                                                  << 0xbU) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                                    [0U][1U])) 
                                                    >> 0x15U)))) 
                                     >> 0x16U) | ((IData)(
                                                          ((((QData)((IData)(
                                                                             vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                                             [0U][3U])) 
                                                             << 0x2bU) 
                                                            | (((QData)((IData)(
                                                                                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                                                [0U][2U])) 
                                                                << 0xbU) 
                                                               | ((QData)((IData)(
                                                                                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                                                [0U][1U])) 
                                                                  >> 0x15U))) 
                                                           >> 0x20U)) 
                                                  << 0xaU));
        __Vtemp_h255c43d3__0[2U] = ((0x60000000U & 
                                     (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                      [0U][0U] << 0x17U)) 
                                    | ((0x1ffc0000U 
                                        & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                           [0U][0U] 
                                           << 0xaU)) 
                                       | ((0x3fc00U 
                                           & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                              [0U][1U] 
                                              >> 3U)) 
                                          | ((IData)(
                                                     ((((QData)((IData)(
                                                                        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                                        [0U][3U])) 
                                                        << 0x2bU) 
                                                       | (((QData)((IData)(
                                                                           vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                                           [0U][2U])) 
                                                           << 0xbU) 
                                                          | ((QData)((IData)(
                                                                             vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                                             [0U][1U])) 
                                                             >> 0x15U))) 
                                                      >> 0x20U)) 
                                             >> 0x16U))));
        bufp->chgWData(oldp+620,(__Vtemp_h255c43d3__0),95);
        __Vtemp_h095083c4__3[0U] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_back__DOT__ram_ext__DOT__Memory
            [0U][0U];
        __Vtemp_h095083c4__3[1U] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_back__DOT__ram_ext__DOT__Memory
            [0U][1U];
        __Vtemp_h095083c4__3[2U] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_back__DOT__ram_ext__DOT__Memory
            [0U][2U];
        bufp->chgWData(oldp+623,(__Vtemp_h095083c4__3),95);
        bufp->chgWData(oldp+626,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_back__DOT__ram_ext__DOT__Memory[0]),95);
        bufp->chgBit(oldp+629,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT___subsystem_mbus_xbar_auto_out_0_a_valid));
        bufp->chgBit(oldp+630,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT___subsystem_mbus_xbar_auto_out_0_d_ready));
        bufp->chgBit(oldp+631,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__bundleIn_0_a_ready));
        bufp->chgBit(oldp+632,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__bundleIn_0_d_valid));
        bufp->chgCData(oldp+633,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins),3);
        bufp->chgCData(oldp+634,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__bundleIn_0_d_bits_size),3);
        bufp->chgCData(oldp+635,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__bundleIn_0_d_bits_source),5);
        bufp->chgBit(oldp+636,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__bundleIn_0_d_bits_denied));
        bufp->chgBit(oldp+637,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins) 
                                & ((0U != (IData)(vlSelf->TestHarness__DOT__simdram__DOT_____05Fr_resp_reg)) 
                                   | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_d_denied)))));
        bufp->chgBit(oldp+638,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT___tl2axi4_auto_out_aw_valid));
        bufp->chgCData(oldp+639,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___queue_arw_deq_io_deq_bits_id),5);
        bufp->chgCData(oldp+640,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___queue_arw_deq_io_deq_bits_echo_tl_state_size),4);
        bufp->chgCData(oldp+641,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___queue_arw_deq_io_deq_bits_echo_tl_state_source),5);
        bufp->chgBit(oldp+642,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT___tl2axi4_auto_out_ar_valid));
        bufp->chgBit(oldp+643,(((IData)(vlSelf->TestHarness__DOT__simdram__DOT_____05Faw_ready_reg) 
                                & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___GEN_5))));
        bufp->chgCData(oldp+644,((0xfU & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___GEN_8 
                                                  >> 
                                                  (0x3fU 
                                                   & ((IData)(vlSelf->TestHarness__DOT__simdram__DOT_____05Fb_id_reg) 
                                                      << 2U)))))),4);
        bufp->chgCData(oldp+645,(((0x4fU >= (0x7fU 
                                             & ((IData)(5U) 
                                                * (IData)(vlSelf->TestHarness__DOT__simdram__DOT_____05Fb_id_reg))))
                                   ? (0x1fU & (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & ((IData)(5U) 
                                                     * (IData)(vlSelf->TestHarness__DOT__simdram__DOT_____05Fb_id_reg))))
                                                 ? 0U
                                                 : 
                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___GEN_9[
                                                 (((IData)(4U) 
                                                   + 
                                                   (0x7fU 
                                                    & ((IData)(5U) 
                                                       * (IData)(vlSelf->TestHarness__DOT__simdram__DOT_____05Fb_id_reg)))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(5U) 
                                                      * (IData)(vlSelf->TestHarness__DOT__simdram__DOT_____05Fb_id_reg)))))) 
                                               | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___GEN_9[
                                                  (3U 
                                                   & (((IData)(5U) 
                                                       * (IData)(vlSelf->TestHarness__DOT__simdram__DOT_____05Fb_id_reg)) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(5U) 
                                                      * (IData)(vlSelf->TestHarness__DOT__simdram__DOT_____05Fb_id_reg))))))
                                   : 0U)),5);
        bufp->chgBit(oldp+646,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___GEN_10) 
                                      >> (IData)(vlSelf->TestHarness__DOT__simdram__DOT_____05Fb_id_reg)))));
        bufp->chgBit(oldp+647,(((IData)(vlSelf->TestHarness__DOT__simdram__DOT_____05Far_ready_reg) 
                                & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___GEN_0))));
        bufp->chgCData(oldp+648,((0xfU & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___GEN_1 
                                                  >> 
                                                  (0x3fU 
                                                   & ((IData)(vlSelf->TestHarness__DOT__simdram__DOT_____05Fr_id_reg) 
                                                      << 2U)))))),4);
        bufp->chgCData(oldp+649,(((0x4fU >= (0x7fU 
                                             & ((IData)(5U) 
                                                * (IData)(vlSelf->TestHarness__DOT__simdram__DOT_____05Fr_id_reg))))
                                   ? (0x1fU & (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & ((IData)(5U) 
                                                     * (IData)(vlSelf->TestHarness__DOT__simdram__DOT_____05Fr_id_reg))))
                                                 ? 0U
                                                 : 
                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___GEN_2[
                                                 (((IData)(4U) 
                                                   + 
                                                   (0x7fU 
                                                    & ((IData)(5U) 
                                                       * (IData)(vlSelf->TestHarness__DOT__simdram__DOT_____05Fr_id_reg)))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(5U) 
                                                      * (IData)(vlSelf->TestHarness__DOT__simdram__DOT_____05Fr_id_reg)))))) 
                                               | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___GEN_2[
                                                  (3U 
                                                   & (((IData)(5U) 
                                                       * (IData)(vlSelf->TestHarness__DOT__simdram__DOT_____05Fr_id_reg)) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(5U) 
                                                      * (IData)(vlSelf->TestHarness__DOT__simdram__DOT_____05Fr_id_reg))))))
                                   : 0U)),5);
        bufp->chgBit(oldp+650,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___GEN_3) 
                                      >> (IData)(vlSelf->TestHarness__DOT__simdram__DOT_____05Fr_id_reg)))));
        bufp->chgCData(oldp+651,(((0x10U & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___GEN_10) 
                                             >> (IData)(vlSelf->TestHarness__DOT__simdram__DOT_____05Fb_id_reg)) 
                                            << 4U)) 
                                  | (IData)(vlSelf->TestHarness__DOT__simdram__DOT_____05Fb_id_reg))),5);
        bufp->chgCData(oldp+652,(((0x10U & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___GEN_3) 
                                             >> (IData)(vlSelf->TestHarness__DOT__simdram__DOT_____05Fr_id_reg)) 
                                            << 4U)) 
                                  | (IData)(vlSelf->TestHarness__DOT__simdram__DOT_____05Fr_id_reg))),5);
        bufp->chgBit(oldp+653,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___queue_arw_deq_io_deq_bits_id) 
                                      >> 4U))));
        bufp->chgBit(oldp+654,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___T_83) 
                                & (0U == (0xfU & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___queue_arw_deq_io_deq_bits_id))))));
        bufp->chgBit(oldp+655,((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___T_80) 
                                 & (0U == (IData)(vlSelf->TestHarness__DOT__simdram__DOT_____05Fr_id_reg))) 
                                & (IData)(vlSelf->TestHarness__DOT__simdram__DOT_____05Fr_last_reg))));
        bufp->chgBit(oldp+656,((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue__DOT__full)))));
        bufp->chgBit(oldp+657,((1U & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue__DOT__ptr_match) 
                                         & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue__DOT__maybe_full)))))));
        bufp->chgCData(oldp+658,((0xfU & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue__DOT___ram_ext_R0_data))),4);
        bufp->chgCData(oldp+659,((0x1fU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue__DOT___ram_ext_R0_data) 
                                           >> 4U))),5);
        bufp->chgBit(oldp+660,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue__DOT___ram_ext_R0_data) 
                                      >> 9U))));
        bufp->chgBit(oldp+661,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue__DOT__enq_ptr_value));
        bufp->chgBit(oldp+662,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue__DOT__deq_ptr_value));
        bufp->chgBit(oldp+663,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue__DOT__maybe_full));
        bufp->chgBit(oldp+664,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue__DOT__ptr_match));
        bufp->chgBit(oldp+665,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue__DOT__ptr_match) 
                                & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue__DOT__maybe_full)))));
        bufp->chgBit(oldp+666,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue__DOT__full));
        bufp->chgBit(oldp+667,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue__DOT__do_enq));
        bufp->chgBit(oldp+668,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue__DOT__do_deq));
        bufp->chgSData(oldp+669,(((0x200U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___queue_arw_deq_io_deq_bits_id) 
                                             << 5U)) 
                                  | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___queue_arw_deq_io_deq_bits_echo_tl_state_source) 
                                      << 4U) | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___queue_arw_deq_io_deq_bits_echo_tl_state_size)))),10);
        bufp->chgSData(oldp+670,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue__DOT___ram_ext_R0_data),10);
        bufp->chgSData(oldp+671,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue__DOT__ram_ext__DOT__Memory[0]),10);
        bufp->chgSData(oldp+672,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue__DOT__ram_ext__DOT__Memory[1]),10);
        bufp->chgBit(oldp+673,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___T_83) 
                                & (1U == (0xfU & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___queue_arw_deq_io_deq_bits_id))))));
        bufp->chgBit(oldp+674,((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___T_80) 
                                 & (1U == (IData)(vlSelf->TestHarness__DOT__simdram__DOT_____05Fr_id_reg))) 
                                & (IData)(vlSelf->TestHarness__DOT__simdram__DOT_____05Fr_last_reg))));
        bufp->chgBit(oldp+675,((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_1__DOT__full)))));
        bufp->chgBit(oldp+676,((1U & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_1__DOT__ptr_match) 
                                         & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_1__DOT__maybe_full)))))));
        bufp->chgCData(oldp+677,((0xfU & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_1__DOT___ram_ext_R0_data))),4);
        bufp->chgCData(oldp+678,((0x1fU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_1__DOT___ram_ext_R0_data) 
                                           >> 4U))),5);
        bufp->chgBit(oldp+679,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_1__DOT___ram_ext_R0_data) 
                                      >> 9U))));
        bufp->chgBit(oldp+680,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_1__DOT__enq_ptr_value));
        bufp->chgBit(oldp+681,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_1__DOT__deq_ptr_value));
        bufp->chgBit(oldp+682,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_1__DOT__maybe_full));
        bufp->chgBit(oldp+683,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_1__DOT__ptr_match));
        bufp->chgBit(oldp+684,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_1__DOT__ptr_match) 
                                & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_1__DOT__maybe_full)))));
        bufp->chgBit(oldp+685,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_1__DOT__full));
        bufp->chgBit(oldp+686,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_1__DOT__do_enq));
        bufp->chgBit(oldp+687,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_1__DOT__do_deq));
        bufp->chgSData(oldp+688,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_1__DOT___ram_ext_R0_data),10);
        bufp->chgSData(oldp+689,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_1__DOT__ram_ext__DOT__Memory[0]),10);
        bufp->chgSData(oldp+690,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_1__DOT__ram_ext__DOT__Memory[1]),10);
        bufp->chgBit(oldp+691,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___T_83) 
                                & (0xaU == (0xfU & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___queue_arw_deq_io_deq_bits_id))))));
        bufp->chgBit(oldp+692,((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___T_80) 
                                 & (0xaU == (IData)(vlSelf->TestHarness__DOT__simdram__DOT_____05Fr_id_reg))) 
                                & (IData)(vlSelf->TestHarness__DOT__simdram__DOT_____05Fr_last_reg))));
        bufp->chgBit(oldp+693,((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_10__DOT__maybe_full)))));
        bufp->chgBit(oldp+694,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_10__DOT__maybe_full));
        bufp->chgCData(oldp+695,((0xfU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_10__DOT__ram_ext__DOT__Memory
                                  [0U])),4);
        bufp->chgCData(oldp+696,((0x1fU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_10__DOT__ram_ext__DOT__Memory
                                           [0U] >> 4U))),5);
        bufp->chgBit(oldp+697,((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_10__DOT__ram_ext__DOT__Memory
                                      [0U] >> 9U))));
        bufp->chgBit(oldp+698,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_10__DOT__do_enq));
        bufp->chgSData(oldp+699,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_10__DOT__ram_ext__DOT__Memory
                                 [0U]),10);
        bufp->chgSData(oldp+700,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_10__DOT__ram_ext__DOT__Memory[0]),10);
        bufp->chgBit(oldp+701,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___T_83) 
                                & (0xbU == (0xfU & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___queue_arw_deq_io_deq_bits_id))))));
        bufp->chgBit(oldp+702,((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___T_80) 
                                 & (0xbU == (IData)(vlSelf->TestHarness__DOT__simdram__DOT_____05Fr_id_reg))) 
                                & (IData)(vlSelf->TestHarness__DOT__simdram__DOT_____05Fr_last_reg))));
        bufp->chgBit(oldp+703,((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_11__DOT__maybe_full)))));
        bufp->chgBit(oldp+704,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_11__DOT__maybe_full));
        bufp->chgCData(oldp+705,((0xfU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_11__DOT__ram_ext__DOT__Memory
                                  [0U])),4);
        bufp->chgCData(oldp+706,((0x1fU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_11__DOT__ram_ext__DOT__Memory
                                           [0U] >> 4U))),5);
        bufp->chgBit(oldp+707,((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_11__DOT__ram_ext__DOT__Memory
                                      [0U] >> 9U))));
        bufp->chgBit(oldp+708,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_11__DOT__do_enq));
        bufp->chgSData(oldp+709,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_11__DOT__ram_ext__DOT__Memory
                                 [0U]),10);
        bufp->chgSData(oldp+710,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_11__DOT__ram_ext__DOT__Memory[0]),10);
        bufp->chgBit(oldp+711,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___T_83) 
                                & (0xcU == (0xfU & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___queue_arw_deq_io_deq_bits_id))))));
        bufp->chgBit(oldp+712,((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___T_80) 
                                 & (0xcU == (IData)(vlSelf->TestHarness__DOT__simdram__DOT_____05Fr_id_reg))) 
                                & (IData)(vlSelf->TestHarness__DOT__simdram__DOT_____05Fr_last_reg))));
        bufp->chgBit(oldp+713,((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_12__DOT__maybe_full)))));
        bufp->chgBit(oldp+714,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_12__DOT__maybe_full));
        bufp->chgCData(oldp+715,((0xfU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_12__DOT__ram_ext__DOT__Memory
                                  [0U])),4);
        bufp->chgCData(oldp+716,((0x1fU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_12__DOT__ram_ext__DOT__Memory
                                           [0U] >> 4U))),5);
        bufp->chgBit(oldp+717,((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_12__DOT__ram_ext__DOT__Memory
                                      [0U] >> 9U))));
        bufp->chgBit(oldp+718,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_12__DOT__do_enq));
        bufp->chgSData(oldp+719,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_12__DOT__ram_ext__DOT__Memory
                                 [0U]),10);
        bufp->chgSData(oldp+720,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_12__DOT__ram_ext__DOT__Memory[0]),10);
        bufp->chgBit(oldp+721,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___T_83) 
                                & (0xdU == (0xfU & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___queue_arw_deq_io_deq_bits_id))))));
        bufp->chgBit(oldp+722,((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___T_80) 
                                 & (0xdU == (IData)(vlSelf->TestHarness__DOT__simdram__DOT_____05Fr_id_reg))) 
                                & (IData)(vlSelf->TestHarness__DOT__simdram__DOT_____05Fr_last_reg))));
        bufp->chgBit(oldp+723,((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_13__DOT__maybe_full)))));
        bufp->chgBit(oldp+724,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_13__DOT__maybe_full));
        bufp->chgCData(oldp+725,((0xfU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_13__DOT__ram_ext__DOT__Memory
                                  [0U])),4);
        bufp->chgCData(oldp+726,((0x1fU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_13__DOT__ram_ext__DOT__Memory
                                           [0U] >> 4U))),5);
        bufp->chgBit(oldp+727,((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_13__DOT__ram_ext__DOT__Memory
                                      [0U] >> 9U))));
        bufp->chgBit(oldp+728,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_13__DOT__do_enq));
        bufp->chgSData(oldp+729,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_13__DOT__ram_ext__DOT__Memory
                                 [0U]),10);
        bufp->chgSData(oldp+730,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_13__DOT__ram_ext__DOT__Memory[0]),10);
        bufp->chgBit(oldp+731,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___T_83) 
                                & (0xeU == (0xfU & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___queue_arw_deq_io_deq_bits_id))))));
        bufp->chgBit(oldp+732,((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___T_80) 
                                 & (0xeU == (IData)(vlSelf->TestHarness__DOT__simdram__DOT_____05Fr_id_reg))) 
                                & (IData)(vlSelf->TestHarness__DOT__simdram__DOT_____05Fr_last_reg))));
        bufp->chgBit(oldp+733,((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_14__DOT__maybe_full)))));
        bufp->chgBit(oldp+734,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_14__DOT__maybe_full));
        bufp->chgCData(oldp+735,((0xfU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_14__DOT__ram_ext__DOT__Memory
                                  [0U])),4);
        bufp->chgCData(oldp+736,((0x1fU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_14__DOT__ram_ext__DOT__Memory
                                           [0U] >> 4U))),5);
        bufp->chgBit(oldp+737,((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_14__DOT__ram_ext__DOT__Memory
                                      [0U] >> 9U))));
        bufp->chgBit(oldp+738,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_14__DOT__do_enq));
        bufp->chgSData(oldp+739,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_14__DOT__ram_ext__DOT__Memory
                                 [0U]),10);
        bufp->chgSData(oldp+740,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_14__DOT__ram_ext__DOT__Memory[0]),10);
        bufp->chgBit(oldp+741,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___T_83) 
                                & (0xfU == (0xfU & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___queue_arw_deq_io_deq_bits_id))))));
        bufp->chgBit(oldp+742,((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___T_80) 
                                 & (0xfU == (IData)(vlSelf->TestHarness__DOT__simdram__DOT_____05Fr_id_reg))) 
                                & (IData)(vlSelf->TestHarness__DOT__simdram__DOT_____05Fr_last_reg))));
        bufp->chgBit(oldp+743,((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_15__DOT__maybe_full)))));
        bufp->chgBit(oldp+744,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_15__DOT__maybe_full));
        bufp->chgCData(oldp+745,((0xfU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_15__DOT__ram_ext__DOT__Memory
                                  [0U])),4);
        bufp->chgCData(oldp+746,((0x1fU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_15__DOT__ram_ext__DOT__Memory
                                           [0U] >> 4U))),5);
        bufp->chgBit(oldp+747,((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_15__DOT__ram_ext__DOT__Memory
                                      [0U] >> 9U))));
        bufp->chgBit(oldp+748,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_15__DOT__do_enq));
        bufp->chgSData(oldp+749,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_15__DOT__ram_ext__DOT__Memory
                                 [0U]),10);
        bufp->chgSData(oldp+750,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_15__DOT__ram_ext__DOT__Memory[0]),10);
        bufp->chgBit(oldp+751,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___T_152) 
                                & (0U == (0xfU & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___queue_arw_deq_io_deq_bits_id))))));
        bufp->chgBit(oldp+752,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___T_150) 
                                & (0U == (IData)(vlSelf->TestHarness__DOT__simdram__DOT_____05Fb_id_reg)))));
        bufp->chgBit(oldp+753,((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_16__DOT__full)))));
        bufp->chgBit(oldp+754,((1U & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_16__DOT__ptr_match) 
                                         & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_16__DOT__maybe_full)))))));
        bufp->chgCData(oldp+755,((0xfU & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_16__DOT___ram_ext_R0_data))),4);
        bufp->chgCData(oldp+756,((0x1fU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_16__DOT___ram_ext_R0_data) 
                                           >> 4U))),5);
        bufp->chgBit(oldp+757,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_16__DOT___ram_ext_R0_data) 
                                      >> 9U))));
        bufp->chgBit(oldp+758,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_16__DOT__enq_ptr_value));
        bufp->chgBit(oldp+759,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_16__DOT__deq_ptr_value));
        bufp->chgBit(oldp+760,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_16__DOT__maybe_full));
        bufp->chgBit(oldp+761,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_16__DOT__ptr_match));
        bufp->chgBit(oldp+762,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_16__DOT__ptr_match) 
                                & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_16__DOT__maybe_full)))));
        bufp->chgBit(oldp+763,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_16__DOT__full));
        bufp->chgBit(oldp+764,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_16__DOT__do_enq));
        bufp->chgBit(oldp+765,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_16__DOT__do_deq));
        bufp->chgSData(oldp+766,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_16__DOT___ram_ext_R0_data),10);
        bufp->chgSData(oldp+767,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_16__DOT__ram_ext__DOT__Memory[0]),10);
        bufp->chgSData(oldp+768,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_16__DOT__ram_ext__DOT__Memory[1]),10);
        bufp->chgBit(oldp+769,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___T_152) 
                                & (1U == (0xfU & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___queue_arw_deq_io_deq_bits_id))))));
        bufp->chgBit(oldp+770,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___T_150) 
                                & (1U == (IData)(vlSelf->TestHarness__DOT__simdram__DOT_____05Fb_id_reg)))));
        bufp->chgBit(oldp+771,((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_17__DOT__full)))));
        bufp->chgBit(oldp+772,((1U & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_17__DOT__ptr_match) 
                                         & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_17__DOT__maybe_full)))))));
        bufp->chgCData(oldp+773,((0xfU & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_17__DOT___ram_ext_R0_data))),4);
        bufp->chgCData(oldp+774,((0x1fU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_17__DOT___ram_ext_R0_data) 
                                           >> 4U))),5);
        bufp->chgBit(oldp+775,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_17__DOT___ram_ext_R0_data) 
                                      >> 9U))));
        bufp->chgBit(oldp+776,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_17__DOT__enq_ptr_value));
        bufp->chgBit(oldp+777,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_17__DOT__deq_ptr_value));
        bufp->chgBit(oldp+778,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_17__DOT__maybe_full));
        bufp->chgBit(oldp+779,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_17__DOT__ptr_match));
        bufp->chgBit(oldp+780,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_17__DOT__ptr_match) 
                                & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_17__DOT__maybe_full)))));
        bufp->chgBit(oldp+781,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_17__DOT__full));
        bufp->chgBit(oldp+782,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_17__DOT__do_enq));
        bufp->chgBit(oldp+783,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_17__DOT__do_deq));
        bufp->chgSData(oldp+784,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_17__DOT___ram_ext_R0_data),10);
        bufp->chgSData(oldp+785,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_17__DOT__ram_ext__DOT__Memory[0]),10);
        bufp->chgSData(oldp+786,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_17__DOT__ram_ext__DOT__Memory[1]),10);
        bufp->chgBit(oldp+787,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___T_152) 
                                & (2U == (0xfU & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___queue_arw_deq_io_deq_bits_id))))));
        bufp->chgBit(oldp+788,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___T_150) 
                                & (2U == (IData)(vlSelf->TestHarness__DOT__simdram__DOT_____05Fb_id_reg)))));
        bufp->chgBit(oldp+789,((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_18__DOT__full)))));
        bufp->chgBit(oldp+790,((1U & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_18__DOT__ptr_match) 
                                         & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_18__DOT__maybe_full)))))));
        bufp->chgCData(oldp+791,((0xfU & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_18__DOT___ram_ext_R0_data))),4);
        bufp->chgCData(oldp+792,((0x1fU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_18__DOT___ram_ext_R0_data) 
                                           >> 4U))),5);
        bufp->chgBit(oldp+793,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_18__DOT___ram_ext_R0_data) 
                                      >> 9U))));
        bufp->chgBit(oldp+794,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_18__DOT__enq_ptr_value));
        bufp->chgBit(oldp+795,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_18__DOT__deq_ptr_value));
        bufp->chgBit(oldp+796,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_18__DOT__maybe_full));
        bufp->chgBit(oldp+797,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_18__DOT__ptr_match));
        bufp->chgBit(oldp+798,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_18__DOT__ptr_match) 
                                & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_18__DOT__maybe_full)))));
        bufp->chgBit(oldp+799,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_18__DOT__full));
        bufp->chgBit(oldp+800,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_18__DOT__do_enq));
        bufp->chgBit(oldp+801,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_18__DOT__do_deq));
        bufp->chgSData(oldp+802,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_18__DOT___ram_ext_R0_data),10);
        bufp->chgSData(oldp+803,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_18__DOT__ram_ext__DOT__Memory[0]),10);
        bufp->chgSData(oldp+804,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_18__DOT__ram_ext__DOT__Memory[1]),10);
        bufp->chgBit(oldp+805,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___T_152) 
                                & (3U == (0xfU & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___queue_arw_deq_io_deq_bits_id))))));
        bufp->chgBit(oldp+806,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___T_150) 
                                & (3U == (IData)(vlSelf->TestHarness__DOT__simdram__DOT_____05Fb_id_reg)))));
        bufp->chgBit(oldp+807,((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_19__DOT__full)))));
        bufp->chgBit(oldp+808,((1U & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_19__DOT__ptr_match) 
                                         & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_19__DOT__maybe_full)))))));
        bufp->chgCData(oldp+809,((0xfU & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_19__DOT___ram_ext_R0_data))),4);
        bufp->chgCData(oldp+810,((0x1fU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_19__DOT___ram_ext_R0_data) 
                                           >> 4U))),5);
        bufp->chgBit(oldp+811,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_19__DOT___ram_ext_R0_data) 
                                      >> 9U))));
        bufp->chgBit(oldp+812,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_19__DOT__enq_ptr_value));
        bufp->chgBit(oldp+813,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_19__DOT__deq_ptr_value));
        bufp->chgBit(oldp+814,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_19__DOT__maybe_full));
        bufp->chgBit(oldp+815,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_19__DOT__ptr_match));
        bufp->chgBit(oldp+816,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_19__DOT__ptr_match) 
                                & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_19__DOT__maybe_full)))));
        bufp->chgBit(oldp+817,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_19__DOT__full));
        bufp->chgBit(oldp+818,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_19__DOT__do_enq));
        bufp->chgBit(oldp+819,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_19__DOT__do_deq));
        bufp->chgSData(oldp+820,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_19__DOT___ram_ext_R0_data),10);
        bufp->chgSData(oldp+821,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_19__DOT__ram_ext__DOT__Memory[0]),10);
        bufp->chgSData(oldp+822,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_19__DOT__ram_ext__DOT__Memory[1]),10);
        bufp->chgBit(oldp+823,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___T_83) 
                                & (2U == (0xfU & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___queue_arw_deq_io_deq_bits_id))))));
        bufp->chgBit(oldp+824,((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___T_80) 
                                 & (2U == (IData)(vlSelf->TestHarness__DOT__simdram__DOT_____05Fr_id_reg))) 
                                & (IData)(vlSelf->TestHarness__DOT__simdram__DOT_____05Fr_last_reg))));
        bufp->chgBit(oldp+825,((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_2__DOT__full)))));
        bufp->chgBit(oldp+826,((1U & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_2__DOT__ptr_match) 
                                         & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_2__DOT__maybe_full)))))));
        bufp->chgCData(oldp+827,((0xfU & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_2__DOT___ram_ext_R0_data))),4);
        bufp->chgCData(oldp+828,((0x1fU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_2__DOT___ram_ext_R0_data) 
                                           >> 4U))),5);
        bufp->chgBit(oldp+829,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_2__DOT___ram_ext_R0_data) 
                                      >> 9U))));
        bufp->chgBit(oldp+830,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_2__DOT__enq_ptr_value));
        bufp->chgBit(oldp+831,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_2__DOT__deq_ptr_value));
        bufp->chgBit(oldp+832,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_2__DOT__maybe_full));
        bufp->chgBit(oldp+833,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_2__DOT__ptr_match));
        bufp->chgBit(oldp+834,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_2__DOT__ptr_match) 
                                & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_2__DOT__maybe_full)))));
        bufp->chgBit(oldp+835,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_2__DOT__full));
        bufp->chgBit(oldp+836,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_2__DOT__do_enq));
        bufp->chgBit(oldp+837,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_2__DOT__do_deq));
        bufp->chgSData(oldp+838,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_2__DOT___ram_ext_R0_data),10);
        bufp->chgSData(oldp+839,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_2__DOT__ram_ext__DOT__Memory[0]),10);
        bufp->chgSData(oldp+840,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_2__DOT__ram_ext__DOT__Memory[1]),10);
        bufp->chgBit(oldp+841,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___T_152) 
                                & (4U == (0xfU & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___queue_arw_deq_io_deq_bits_id))))));
        bufp->chgBit(oldp+842,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___T_150) 
                                & (4U == (IData)(vlSelf->TestHarness__DOT__simdram__DOT_____05Fb_id_reg)))));
        bufp->chgBit(oldp+843,((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_20__DOT__maybe_full)))));
        bufp->chgBit(oldp+844,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_20__DOT__maybe_full));
        bufp->chgCData(oldp+845,((0xfU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_20__DOT__ram_ext__DOT__Memory
                                  [0U])),4);
        bufp->chgCData(oldp+846,((0x1fU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_20__DOT__ram_ext__DOT__Memory
                                           [0U] >> 4U))),5);
        bufp->chgBit(oldp+847,((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_20__DOT__ram_ext__DOT__Memory
                                      [0U] >> 9U))));
        bufp->chgBit(oldp+848,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_20__DOT__do_enq));
        bufp->chgSData(oldp+849,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_20__DOT__ram_ext__DOT__Memory
                                 [0U]),10);
        bufp->chgSData(oldp+850,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_20__DOT__ram_ext__DOT__Memory[0]),10);
        bufp->chgBit(oldp+851,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___T_152) 
                                & (5U == (0xfU & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___queue_arw_deq_io_deq_bits_id))))));
        bufp->chgBit(oldp+852,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___T_150) 
                                & (5U == (IData)(vlSelf->TestHarness__DOT__simdram__DOT_____05Fb_id_reg)))));
        bufp->chgBit(oldp+853,((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_21__DOT__maybe_full)))));
        bufp->chgBit(oldp+854,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_21__DOT__maybe_full));
        bufp->chgCData(oldp+855,((0xfU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_21__DOT__ram_ext__DOT__Memory
                                  [0U])),4);
        bufp->chgCData(oldp+856,((0x1fU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_21__DOT__ram_ext__DOT__Memory
                                           [0U] >> 4U))),5);
        bufp->chgBit(oldp+857,((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_21__DOT__ram_ext__DOT__Memory
                                      [0U] >> 9U))));
        bufp->chgBit(oldp+858,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_21__DOT__do_enq));
        bufp->chgSData(oldp+859,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_21__DOT__ram_ext__DOT__Memory
                                 [0U]),10);
        bufp->chgSData(oldp+860,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_21__DOT__ram_ext__DOT__Memory[0]),10);
        bufp->chgBit(oldp+861,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___T_152) 
                                & (6U == (0xfU & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___queue_arw_deq_io_deq_bits_id))))));
        bufp->chgBit(oldp+862,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___T_150) 
                                & (6U == (IData)(vlSelf->TestHarness__DOT__simdram__DOT_____05Fb_id_reg)))));
        bufp->chgBit(oldp+863,((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_22__DOT__maybe_full)))));
        bufp->chgBit(oldp+864,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_22__DOT__maybe_full));
        bufp->chgCData(oldp+865,((0xfU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_22__DOT__ram_ext__DOT__Memory
                                  [0U])),4);
        bufp->chgCData(oldp+866,((0x1fU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_22__DOT__ram_ext__DOT__Memory
                                           [0U] >> 4U))),5);
        bufp->chgBit(oldp+867,((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_22__DOT__ram_ext__DOT__Memory
                                      [0U] >> 9U))));
        bufp->chgBit(oldp+868,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_22__DOT__do_enq));
        bufp->chgSData(oldp+869,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_22__DOT__ram_ext__DOT__Memory
                                 [0U]),10);
        bufp->chgSData(oldp+870,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_22__DOT__ram_ext__DOT__Memory[0]),10);
        bufp->chgBit(oldp+871,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___T_152) 
                                & (7U == (0xfU & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___queue_arw_deq_io_deq_bits_id))))));
        bufp->chgBit(oldp+872,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___T_150) 
                                & (7U == (IData)(vlSelf->TestHarness__DOT__simdram__DOT_____05Fb_id_reg)))));
        bufp->chgBit(oldp+873,((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_23__DOT__maybe_full)))));
        bufp->chgBit(oldp+874,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_23__DOT__maybe_full));
        bufp->chgCData(oldp+875,((0xfU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_23__DOT__ram_ext__DOT__Memory
                                  [0U])),4);
        bufp->chgCData(oldp+876,((0x1fU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_23__DOT__ram_ext__DOT__Memory
                                           [0U] >> 4U))),5);
        bufp->chgBit(oldp+877,((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_23__DOT__ram_ext__DOT__Memory
                                      [0U] >> 9U))));
        bufp->chgBit(oldp+878,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_23__DOT__do_enq));
        bufp->chgSData(oldp+879,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_23__DOT__ram_ext__DOT__Memory
                                 [0U]),10);
        bufp->chgSData(oldp+880,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_23__DOT__ram_ext__DOT__Memory[0]),10);
        bufp->chgBit(oldp+881,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___T_152) 
                                & (8U == (0xfU & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___queue_arw_deq_io_deq_bits_id))))));
        bufp->chgBit(oldp+882,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___T_150) 
                                & (8U == (IData)(vlSelf->TestHarness__DOT__simdram__DOT_____05Fb_id_reg)))));
        bufp->chgBit(oldp+883,((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_24__DOT__maybe_full)))));
        bufp->chgBit(oldp+884,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_24__DOT__maybe_full));
        bufp->chgCData(oldp+885,((0xfU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_24__DOT__ram_ext__DOT__Memory
                                  [0U])),4);
        bufp->chgCData(oldp+886,((0x1fU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_24__DOT__ram_ext__DOT__Memory
                                           [0U] >> 4U))),5);
        bufp->chgBit(oldp+887,((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_24__DOT__ram_ext__DOT__Memory
                                      [0U] >> 9U))));
        bufp->chgBit(oldp+888,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_24__DOT__do_enq));
        bufp->chgSData(oldp+889,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_24__DOT__ram_ext__DOT__Memory
                                 [0U]),10);
        bufp->chgSData(oldp+890,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_24__DOT__ram_ext__DOT__Memory[0]),10);
        bufp->chgBit(oldp+891,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___T_152) 
                                & (9U == (0xfU & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___queue_arw_deq_io_deq_bits_id))))));
        bufp->chgBit(oldp+892,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___T_150) 
                                & (9U == (IData)(vlSelf->TestHarness__DOT__simdram__DOT_____05Fb_id_reg)))));
        bufp->chgBit(oldp+893,((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_25__DOT__maybe_full)))));
        bufp->chgBit(oldp+894,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_25__DOT__maybe_full));
        bufp->chgCData(oldp+895,((0xfU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_25__DOT__ram_ext__DOT__Memory
                                  [0U])),4);
        bufp->chgCData(oldp+896,((0x1fU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_25__DOT__ram_ext__DOT__Memory
                                           [0U] >> 4U))),5);
        bufp->chgBit(oldp+897,((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_25__DOT__ram_ext__DOT__Memory
                                      [0U] >> 9U))));
        bufp->chgBit(oldp+898,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_25__DOT__do_enq));
        bufp->chgSData(oldp+899,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_25__DOT__ram_ext__DOT__Memory
                                 [0U]),10);
        bufp->chgSData(oldp+900,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_25__DOT__ram_ext__DOT__Memory[0]),10);
        bufp->chgBit(oldp+901,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___T_152) 
                                & (0xaU == (0xfU & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___queue_arw_deq_io_deq_bits_id))))));
        bufp->chgBit(oldp+902,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___T_150) 
                                & (0xaU == (IData)(vlSelf->TestHarness__DOT__simdram__DOT_____05Fb_id_reg)))));
        bufp->chgBit(oldp+903,((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_26__DOT__maybe_full)))));
        bufp->chgBit(oldp+904,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_26__DOT__maybe_full));
        bufp->chgCData(oldp+905,((0xfU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_26__DOT__ram_ext__DOT__Memory
                                  [0U])),4);
        bufp->chgCData(oldp+906,((0x1fU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_26__DOT__ram_ext__DOT__Memory
                                           [0U] >> 4U))),5);
        bufp->chgBit(oldp+907,((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_26__DOT__ram_ext__DOT__Memory
                                      [0U] >> 9U))));
        bufp->chgBit(oldp+908,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_26__DOT__do_enq));
        bufp->chgSData(oldp+909,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_26__DOT__ram_ext__DOT__Memory
                                 [0U]),10);
        bufp->chgSData(oldp+910,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_26__DOT__ram_ext__DOT__Memory[0]),10);
        bufp->chgBit(oldp+911,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___T_152) 
                                & (0xbU == (0xfU & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___queue_arw_deq_io_deq_bits_id))))));
        bufp->chgBit(oldp+912,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___T_150) 
                                & (0xbU == (IData)(vlSelf->TestHarness__DOT__simdram__DOT_____05Fb_id_reg)))));
        bufp->chgBit(oldp+913,((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_27__DOT__maybe_full)))));
        bufp->chgBit(oldp+914,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_27__DOT__maybe_full));
        bufp->chgCData(oldp+915,((0xfU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_27__DOT__ram_ext__DOT__Memory
                                  [0U])),4);
        bufp->chgCData(oldp+916,((0x1fU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_27__DOT__ram_ext__DOT__Memory
                                           [0U] >> 4U))),5);
        bufp->chgBit(oldp+917,((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_27__DOT__ram_ext__DOT__Memory
                                      [0U] >> 9U))));
        bufp->chgBit(oldp+918,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_27__DOT__do_enq));
        bufp->chgSData(oldp+919,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_27__DOT__ram_ext__DOT__Memory
                                 [0U]),10);
        bufp->chgSData(oldp+920,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_27__DOT__ram_ext__DOT__Memory[0]),10);
        bufp->chgBit(oldp+921,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___T_152) 
                                & (0xcU == (0xfU & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___queue_arw_deq_io_deq_bits_id))))));
        bufp->chgBit(oldp+922,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___T_150) 
                                & (0xcU == (IData)(vlSelf->TestHarness__DOT__simdram__DOT_____05Fb_id_reg)))));
        bufp->chgBit(oldp+923,((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_28__DOT__maybe_full)))));
        bufp->chgBit(oldp+924,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_28__DOT__maybe_full));
        bufp->chgCData(oldp+925,((0xfU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_28__DOT__ram_ext__DOT__Memory
                                  [0U])),4);
        bufp->chgCData(oldp+926,((0x1fU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_28__DOT__ram_ext__DOT__Memory
                                           [0U] >> 4U))),5);
        bufp->chgBit(oldp+927,((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_28__DOT__ram_ext__DOT__Memory
                                      [0U] >> 9U))));
        bufp->chgBit(oldp+928,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_28__DOT__do_enq));
        bufp->chgSData(oldp+929,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_28__DOT__ram_ext__DOT__Memory
                                 [0U]),10);
        bufp->chgSData(oldp+930,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_28__DOT__ram_ext__DOT__Memory[0]),10);
        bufp->chgBit(oldp+931,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___T_152) 
                                & (0xdU == (0xfU & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___queue_arw_deq_io_deq_bits_id))))));
        bufp->chgBit(oldp+932,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___T_150) 
                                & (0xdU == (IData)(vlSelf->TestHarness__DOT__simdram__DOT_____05Fb_id_reg)))));
        bufp->chgBit(oldp+933,((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_29__DOT__maybe_full)))));
        bufp->chgBit(oldp+934,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_29__DOT__maybe_full));
        bufp->chgCData(oldp+935,((0xfU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_29__DOT__ram_ext__DOT__Memory
                                  [0U])),4);
        bufp->chgCData(oldp+936,((0x1fU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_29__DOT__ram_ext__DOT__Memory
                                           [0U] >> 4U))),5);
        bufp->chgBit(oldp+937,((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_29__DOT__ram_ext__DOT__Memory
                                      [0U] >> 9U))));
        bufp->chgBit(oldp+938,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_29__DOT__do_enq));
        bufp->chgSData(oldp+939,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_29__DOT__ram_ext__DOT__Memory
                                 [0U]),10);
        bufp->chgSData(oldp+940,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_29__DOT__ram_ext__DOT__Memory[0]),10);
        bufp->chgBit(oldp+941,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___T_83) 
                                & (3U == (0xfU & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___queue_arw_deq_io_deq_bits_id))))));
        bufp->chgBit(oldp+942,((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___T_80) 
                                 & (3U == (IData)(vlSelf->TestHarness__DOT__simdram__DOT_____05Fr_id_reg))) 
                                & (IData)(vlSelf->TestHarness__DOT__simdram__DOT_____05Fr_last_reg))));
        bufp->chgBit(oldp+943,((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_3__DOT__full)))));
        bufp->chgBit(oldp+944,((1U & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_3__DOT__ptr_match) 
                                         & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_3__DOT__maybe_full)))))));
        bufp->chgCData(oldp+945,((0xfU & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_3__DOT___ram_ext_R0_data))),4);
        bufp->chgCData(oldp+946,((0x1fU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_3__DOT___ram_ext_R0_data) 
                                           >> 4U))),5);
        bufp->chgBit(oldp+947,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_3__DOT___ram_ext_R0_data) 
                                      >> 9U))));
        bufp->chgBit(oldp+948,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_3__DOT__enq_ptr_value));
        bufp->chgBit(oldp+949,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_3__DOT__deq_ptr_value));
        bufp->chgBit(oldp+950,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_3__DOT__maybe_full));
        bufp->chgBit(oldp+951,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_3__DOT__ptr_match));
        bufp->chgBit(oldp+952,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_3__DOT__ptr_match) 
                                & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_3__DOT__maybe_full)))));
        bufp->chgBit(oldp+953,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_3__DOT__full));
        bufp->chgBit(oldp+954,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_3__DOT__do_enq));
        bufp->chgBit(oldp+955,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_3__DOT__do_deq));
        bufp->chgSData(oldp+956,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_3__DOT___ram_ext_R0_data),10);
        bufp->chgSData(oldp+957,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_3__DOT__ram_ext__DOT__Memory[0]),10);
        bufp->chgSData(oldp+958,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_3__DOT__ram_ext__DOT__Memory[1]),10);
        bufp->chgBit(oldp+959,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___T_152) 
                                & (0xeU == (0xfU & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___queue_arw_deq_io_deq_bits_id))))));
        bufp->chgBit(oldp+960,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___T_150) 
                                & (0xeU == (IData)(vlSelf->TestHarness__DOT__simdram__DOT_____05Fb_id_reg)))));
        bufp->chgBit(oldp+961,((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_30__DOT__maybe_full)))));
        bufp->chgBit(oldp+962,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_30__DOT__maybe_full));
        bufp->chgCData(oldp+963,((0xfU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_30__DOT__ram_ext__DOT__Memory
                                  [0U])),4);
        bufp->chgCData(oldp+964,((0x1fU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_30__DOT__ram_ext__DOT__Memory
                                           [0U] >> 4U))),5);
        bufp->chgBit(oldp+965,((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_30__DOT__ram_ext__DOT__Memory
                                      [0U] >> 9U))));
        bufp->chgBit(oldp+966,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_30__DOT__do_enq));
        bufp->chgSData(oldp+967,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_30__DOT__ram_ext__DOT__Memory
                                 [0U]),10);
        bufp->chgSData(oldp+968,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_30__DOT__ram_ext__DOT__Memory[0]),10);
        bufp->chgBit(oldp+969,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___T_152) 
                                & (0xfU == (0xfU & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___queue_arw_deq_io_deq_bits_id))))));
        bufp->chgBit(oldp+970,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___T_150) 
                                & (0xfU == (IData)(vlSelf->TestHarness__DOT__simdram__DOT_____05Fb_id_reg)))));
        bufp->chgBit(oldp+971,((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_31__DOT__maybe_full)))));
        bufp->chgBit(oldp+972,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_31__DOT__maybe_full));
        bufp->chgCData(oldp+973,((0xfU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_31__DOT__ram_ext__DOT__Memory
                                  [0U])),4);
        bufp->chgCData(oldp+974,((0x1fU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_31__DOT__ram_ext__DOT__Memory
                                           [0U] >> 4U))),5);
        bufp->chgBit(oldp+975,((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_31__DOT__ram_ext__DOT__Memory
                                      [0U] >> 9U))));
        bufp->chgBit(oldp+976,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_31__DOT__do_enq));
        bufp->chgSData(oldp+977,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_31__DOT__ram_ext__DOT__Memory
                                 [0U]),10);
        bufp->chgSData(oldp+978,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_31__DOT__ram_ext__DOT__Memory[0]),10);
        bufp->chgBit(oldp+979,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___T_83) 
                                & (4U == (0xfU & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___queue_arw_deq_io_deq_bits_id))))));
        bufp->chgBit(oldp+980,((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___T_80) 
                                 & (4U == (IData)(vlSelf->TestHarness__DOT__simdram__DOT_____05Fr_id_reg))) 
                                & (IData)(vlSelf->TestHarness__DOT__simdram__DOT_____05Fr_last_reg))));
        bufp->chgBit(oldp+981,((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_4__DOT__maybe_full)))));
        bufp->chgBit(oldp+982,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_4__DOT__maybe_full));
        bufp->chgCData(oldp+983,((0xfU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_4__DOT__ram_ext__DOT__Memory
                                  [0U])),4);
        bufp->chgCData(oldp+984,((0x1fU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_4__DOT__ram_ext__DOT__Memory
                                           [0U] >> 4U))),5);
        bufp->chgBit(oldp+985,((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_4__DOT__ram_ext__DOT__Memory
                                      [0U] >> 9U))));
        bufp->chgBit(oldp+986,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_4__DOT__do_enq));
        bufp->chgSData(oldp+987,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_4__DOT__ram_ext__DOT__Memory
                                 [0U]),10);
        bufp->chgSData(oldp+988,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_4__DOT__ram_ext__DOT__Memory[0]),10);
        bufp->chgBit(oldp+989,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___T_83) 
                                & (5U == (0xfU & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___queue_arw_deq_io_deq_bits_id))))));
        bufp->chgBit(oldp+990,((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___T_80) 
                                 & (5U == (IData)(vlSelf->TestHarness__DOT__simdram__DOT_____05Fr_id_reg))) 
                                & (IData)(vlSelf->TestHarness__DOT__simdram__DOT_____05Fr_last_reg))));
        bufp->chgBit(oldp+991,((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_5__DOT__maybe_full)))));
        bufp->chgBit(oldp+992,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_5__DOT__maybe_full));
        bufp->chgCData(oldp+993,((0xfU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_5__DOT__ram_ext__DOT__Memory
                                  [0U])),4);
        bufp->chgCData(oldp+994,((0x1fU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_5__DOT__ram_ext__DOT__Memory
                                           [0U] >> 4U))),5);
        bufp->chgBit(oldp+995,((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_5__DOT__ram_ext__DOT__Memory
                                      [0U] >> 9U))));
        bufp->chgBit(oldp+996,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_5__DOT__do_enq));
        bufp->chgSData(oldp+997,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_5__DOT__ram_ext__DOT__Memory
                                 [0U]),10);
        bufp->chgSData(oldp+998,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_5__DOT__ram_ext__DOT__Memory[0]),10);
        bufp->chgBit(oldp+999,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___T_83) 
                                & (6U == (0xfU & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___queue_arw_deq_io_deq_bits_id))))));
        bufp->chgBit(oldp+1000,((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___T_80) 
                                  & (6U == (IData)(vlSelf->TestHarness__DOT__simdram__DOT_____05Fr_id_reg))) 
                                 & (IData)(vlSelf->TestHarness__DOT__simdram__DOT_____05Fr_last_reg))));
        bufp->chgBit(oldp+1001,((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_6__DOT__maybe_full)))));
        bufp->chgBit(oldp+1002,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_6__DOT__maybe_full));
        bufp->chgCData(oldp+1003,((0xfU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_6__DOT__ram_ext__DOT__Memory
                                   [0U])),4);
        bufp->chgCData(oldp+1004,((0x1fU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_6__DOT__ram_ext__DOT__Memory
                                            [0U] >> 4U))),5);
        bufp->chgBit(oldp+1005,((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_6__DOT__ram_ext__DOT__Memory
                                       [0U] >> 9U))));
        bufp->chgBit(oldp+1006,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_6__DOT__do_enq));
        bufp->chgSData(oldp+1007,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_6__DOT__ram_ext__DOT__Memory
                                  [0U]),10);
        bufp->chgSData(oldp+1008,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_6__DOT__ram_ext__DOT__Memory[0]),10);
        bufp->chgBit(oldp+1009,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___T_83) 
                                 & (7U == (0xfU & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___queue_arw_deq_io_deq_bits_id))))));
        bufp->chgBit(oldp+1010,((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___T_80) 
                                  & (7U == (IData)(vlSelf->TestHarness__DOT__simdram__DOT_____05Fr_id_reg))) 
                                 & (IData)(vlSelf->TestHarness__DOT__simdram__DOT_____05Fr_last_reg))));
        bufp->chgBit(oldp+1011,((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_7__DOT__maybe_full)))));
        bufp->chgBit(oldp+1012,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_7__DOT__maybe_full));
        bufp->chgCData(oldp+1013,((0xfU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_7__DOT__ram_ext__DOT__Memory
                                   [0U])),4);
        bufp->chgCData(oldp+1014,((0x1fU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_7__DOT__ram_ext__DOT__Memory
                                            [0U] >> 4U))),5);
        bufp->chgBit(oldp+1015,((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_7__DOT__ram_ext__DOT__Memory
                                       [0U] >> 9U))));
        bufp->chgBit(oldp+1016,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_7__DOT__do_enq));
        bufp->chgSData(oldp+1017,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_7__DOT__ram_ext__DOT__Memory
                                  [0U]),10);
        bufp->chgSData(oldp+1018,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_7__DOT__ram_ext__DOT__Memory[0]),10);
        bufp->chgBit(oldp+1019,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___T_83) 
                                 & (8U == (0xfU & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___queue_arw_deq_io_deq_bits_id))))));
        bufp->chgBit(oldp+1020,((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___T_80) 
                                  & (8U == (IData)(vlSelf->TestHarness__DOT__simdram__DOT_____05Fr_id_reg))) 
                                 & (IData)(vlSelf->TestHarness__DOT__simdram__DOT_____05Fr_last_reg))));
        bufp->chgBit(oldp+1021,((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_8__DOT__maybe_full)))));
        bufp->chgBit(oldp+1022,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_8__DOT__maybe_full));
        bufp->chgCData(oldp+1023,((0xfU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_8__DOT__ram_ext__DOT__Memory
                                   [0U])),4);
        bufp->chgCData(oldp+1024,((0x1fU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_8__DOT__ram_ext__DOT__Memory
                                            [0U] >> 4U))),5);
        bufp->chgBit(oldp+1025,((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_8__DOT__ram_ext__DOT__Memory
                                       [0U] >> 9U))));
        bufp->chgBit(oldp+1026,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_8__DOT__do_enq));
        bufp->chgSData(oldp+1027,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_8__DOT__ram_ext__DOT__Memory
                                  [0U]),10);
        bufp->chgSData(oldp+1028,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_8__DOT__ram_ext__DOT__Memory[0]),10);
        bufp->chgBit(oldp+1029,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___T_83) 
                                 & (9U == (0xfU & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___queue_arw_deq_io_deq_bits_id))))));
        bufp->chgBit(oldp+1030,((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___T_80) 
                                  & (9U == (IData)(vlSelf->TestHarness__DOT__simdram__DOT_____05Fr_id_reg))) 
                                 & (IData)(vlSelf->TestHarness__DOT__simdram__DOT_____05Fr_last_reg))));
        bufp->chgBit(oldp+1031,((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_9__DOT__maybe_full)))));
        bufp->chgBit(oldp+1032,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_9__DOT__maybe_full));
        bufp->chgCData(oldp+1033,((0xfU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_9__DOT__ram_ext__DOT__Memory
                                   [0U])),4);
        bufp->chgCData(oldp+1034,((0x1fU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_9__DOT__ram_ext__DOT__Memory
                                            [0U] >> 4U))),5);
        bufp->chgBit(oldp+1035,((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_9__DOT__ram_ext__DOT__Memory
                                       [0U] >> 9U))));
        bufp->chgBit(oldp+1036,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_9__DOT__do_enq));
        bufp->chgSData(oldp+1037,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_9__DOT__ram_ext__DOT__Memory
                                  [0U]),10);
        bufp->chgSData(oldp+1038,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_9__DOT__ram_ext__DOT__Memory[0]),10);
        bufp->chgBit(oldp+1039,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_20));
        bufp->chgBit(oldp+1040,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_19));
        bufp->chgBit(oldp+1041,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_18));
        bufp->chgBit(oldp+1042,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_17));
        bufp->chgBit(oldp+1043,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_16));
        bufp->chgBit(oldp+1044,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_15));
        bufp->chgBit(oldp+1045,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_14));
        bufp->chgBit(oldp+1046,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_13));
        bufp->chgBit(oldp+1047,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_12));
        bufp->chgBit(oldp+1048,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_11));
        bufp->chgBit(oldp+1049,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_10));
        bufp->chgBit(oldp+1050,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_9));
        bufp->chgBit(oldp+1051,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_8));
        bufp->chgBit(oldp+1052,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_7));
        bufp->chgBit(oldp+1053,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_6));
        bufp->chgBit(oldp+1054,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_5));
        bufp->chgBit(oldp+1055,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_4));
        bufp->chgBit(oldp+1056,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_3));
        bufp->chgBit(oldp+1057,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_2));
        bufp->chgBit(oldp+1058,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_1));
        bufp->chgCData(oldp+1059,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__counter),3);
        bufp->chgBit(oldp+1060,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__counter))));
        bufp->chgBit(oldp+1061,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_w_bits_last));
        bufp->chgBit(oldp+1062,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__doneAW));
        bufp->chgCData(oldp+1063,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id),5);
        bufp->chgBit(oldp+1064,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__stall));
        bufp->chgBit(oldp+1065,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_valid));
        bufp->chgBit(oldp+1066,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_holds_d));
        bufp->chgCData(oldp+1067,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__b_delay),3);
        bufp->chgBit(oldp+1068,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins));
        bufp->chgBit(oldp+1069,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_first));
        bufp->chgBit(oldp+1070,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_denied_r));
        bufp->chgBit(oldp+1071,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_d_denied));
        bufp->chgCData(oldp+1072,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount),5);
        bufp->chgBit(oldp+1073,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last));
        bufp->chgBit(oldp+1074,(((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id)) 
                                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T_19))));
        bufp->chgBit(oldp+1075,((((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                                  & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_39))));
        bufp->chgBit(oldp+1076,(((1U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id)) 
                                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T_19))));
        bufp->chgBit(oldp+1077,((((1U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                                  & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_39))));
        bufp->chgBit(oldp+1078,(((2U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id)) 
                                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T_19))));
        bufp->chgBit(oldp+1079,((((2U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                                  & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_39))));
        bufp->chgBit(oldp+1080,(((3U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id)) 
                                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T_19))));
        bufp->chgBit(oldp+1081,((((3U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                                  & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_39))));
        bufp->chgBit(oldp+1082,(((4U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id)) 
                                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T_19))));
        bufp->chgBit(oldp+1083,((((4U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                                  & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_39))));
        bufp->chgBit(oldp+1084,(((5U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id)) 
                                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T_19))));
        bufp->chgBit(oldp+1085,((((5U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                                  & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_39))));
        bufp->chgBit(oldp+1086,(((6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id)) 
                                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T_19))));
        bufp->chgBit(oldp+1087,((((6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                                  & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_39))));
        bufp->chgBit(oldp+1088,(((7U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id)) 
                                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T_19))));
        bufp->chgBit(oldp+1089,((((7U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                                  & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_39))));
        bufp->chgBit(oldp+1090,(((8U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id)) 
                                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T_19))));
        bufp->chgBit(oldp+1091,((((8U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                                  & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_39))));
        bufp->chgBit(oldp+1092,(((9U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id)) 
                                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T_19))));
        bufp->chgBit(oldp+1093,((((9U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                                  & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_39))));
        bufp->chgBit(oldp+1094,(((0xaU == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id)) 
                                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T_19))));
        bufp->chgBit(oldp+1095,((((0xaU == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                                  & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_39))));
        bufp->chgBit(oldp+1096,(((0xbU == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id)) 
                                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T_19))));
        bufp->chgBit(oldp+1097,((((0xbU == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                                  & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_39))));
        bufp->chgBit(oldp+1098,(((0xcU == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id)) 
                                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T_19))));
        bufp->chgBit(oldp+1099,((((0xcU == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                                  & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_39))));
        bufp->chgBit(oldp+1100,(((0xdU == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id)) 
                                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T_19))));
        bufp->chgBit(oldp+1101,((((0xdU == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                                  & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_39))));
        bufp->chgBit(oldp+1102,(((0xeU == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id)) 
                                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T_19))));
        bufp->chgBit(oldp+1103,((((0xeU == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                                  & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_39))));
        bufp->chgBit(oldp+1104,(((0xfU == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id)) 
                                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T_19))));
        bufp->chgBit(oldp+1105,((((0xfU == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                                  & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_39))));
        bufp->chgBit(oldp+1106,(((0x10U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id)) 
                                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T_19))));
        bufp->chgBit(oldp+1107,((((0x10U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                                  & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_39))));
        bufp->chgBit(oldp+1108,(((0x11U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id)) 
                                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T_19))));
        bufp->chgBit(oldp+1109,((((0x11U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                                  & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_39))));
        bufp->chgBit(oldp+1110,(((0x12U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id)) 
                                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T_19))));
        bufp->chgBit(oldp+1111,((((0x12U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                                  & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_39))));
        bufp->chgBit(oldp+1112,(((0x13U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id)) 
                                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T_19))));
        bufp->chgBit(oldp+1113,((((0x13U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                                  & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_39))));
        bufp->chgBit(oldp+1114,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____Vcellinp__deq__io_enq_valid));
        bufp->chgBit(oldp+1115,((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__deq__DOT__maybe_full)))));
        bufp->chgBit(oldp+1116,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__deq__DOT__maybe_full));
        bufp->chgBit(oldp+1117,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__deq__DOT__do_enq));
        __Vtemp_h18400d3d__0[0U] = (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_data);
        __Vtemp_h18400d3d__0[1U] = (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_data 
                                            >> 0x20U));
        __Vtemp_h18400d3d__0[2U] = (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_w_bits_last) 
                                     << 8U) | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_mask));
        bufp->chgWData(oldp+1118,(__Vtemp_h18400d3d__0),73);
        __Vtemp_h28047a85__0[0U] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__deq__DOT__ram_ext__DOT__Memory
            [0U][0U];
        __Vtemp_h28047a85__0[1U] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__deq__DOT__ram_ext__DOT__Memory
            [0U][1U];
        __Vtemp_h28047a85__0[2U] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__deq__DOT__ram_ext__DOT__Memory
            [0U][2U];
        bufp->chgWData(oldp+1121,(__Vtemp_h28047a85__0),73);
        bufp->chgWData(oldp+1124,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__deq__DOT__ram_ext__DOT__Memory[0]),73);
        bufp->chgCData(oldp+1127,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter),3);
        bufp->chgCData(oldp+1128,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__opcode),3);
        bufp->chgCData(oldp+1129,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__param),3);
        bufp->chgCData(oldp+1130,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__size),3);
        bufp->chgCData(oldp+1131,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__source),5);
        bufp->chgIData(oldp+1132,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__address),32);
        bufp->chgCData(oldp+1133,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__d_first_counter),3);
        bufp->chgCData(oldp+1134,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__opcode_1),3);
        bufp->chgCData(oldp+1135,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__param_1),2);
        bufp->chgCData(oldp+1136,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__size_1),3);
        bufp->chgCData(oldp+1137,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__source_1),5);
        bufp->chgBit(oldp+1138,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__sink));
        bufp->chgBit(oldp+1139,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__denied));
        bufp->chgIData(oldp+1140,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__inflight),20);
        bufp->chgWData(oldp+1141,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__inflight_opcodes),80);
        bufp->chgWData(oldp+1144,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__inflight_sizes),80);
        bufp->chgCData(oldp+1147,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter_1),3);
        bufp->chgBit(oldp+1148,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter_1))));
        bufp->chgCData(oldp+1149,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__d_first_counter_1),3);
        bufp->chgBit(oldp+1150,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__d_first_counter_1))));
        bufp->chgIData(oldp+1151,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__watchdog),32);
        bufp->chgCData(oldp+1152,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__d_first_counter_2),3);
        bufp->chgBit(oldp+1153,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__d_first_counter_2))));
        bufp->chgBit(oldp+1154,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__mask_acc));
        bufp->chgBit(oldp+1155,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__mask_acc_1));
        bufp->chgBit(oldp+1156,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__mask_eq_2));
        bufp->chgBit(oldp+1157,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__mask_acc_2));
        bufp->chgBit(oldp+1158,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__mask_eq_3));
        bufp->chgBit(oldp+1159,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__mask_acc_3));
        bufp->chgBit(oldp+1160,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__mask_eq_4));
        bufp->chgBit(oldp+1161,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__mask_acc_4));
        bufp->chgBit(oldp+1162,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__mask_eq_5));
        bufp->chgBit(oldp+1163,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__mask_acc_5));
        bufp->chgCData(oldp+1164,(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__mask_acc_5) 
                                     | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__mask_eq_5) 
                                        & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_address)) 
                                    << 7U) | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__mask_acc_5) 
                                                | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__mask_eq_5) 
                                                   & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_address))) 
                                               << 6U) 
                                              | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__mask_acc_4) 
                                                   | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__mask_eq_4) 
                                                      & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_address)) 
                                                  << 5U) 
                                                 | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__mask_acc_4) 
                                                      | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__mask_eq_4) 
                                                         & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_address))) 
                                                     << 4U) 
                                                    | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__mask_acc_3) 
                                                         | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__mask_eq_3) 
                                                            & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_address)) 
                                                        << 3U) 
                                                       | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__mask_acc_3) 
                                                            | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__mask_eq_3) 
                                                               & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_address))) 
                                                           << 2U) 
                                                          | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__mask_acc_2) 
                                                               | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__mask_eq_2) 
                                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_address)) 
                                                              << 1U) 
                                                             | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__mask_acc_2) 
                                                                | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__mask_eq_2) 
                                                                   & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_address))))))))))),8);
        bufp->chgIData(oldp+1165,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT___same_cycle_resp_T_1)
                                    ? ((0x1fU >= (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_source))
                                        ? (0xfffffU 
                                           & ((IData)(1U) 
                                              << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_source)))
                                        : 0U) : 0U)),20);
        bufp->chgBit(oldp+1166,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__same_cycle_resp));
        bufp->chgCData(oldp+1167,((0xffU & (~ (0x7fffU 
                                               & (((IData)(0x7ffU) 
                                                   << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_size)) 
                                                  >> 3U))))),8);
        bufp->chgCData(oldp+1168,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq__io_enq_bits_size),3);
        bufp->chgCData(oldp+1169,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_size),4);
        bufp->chgBit(oldp+1170,((1U & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_opcode) 
                                          >> 2U)))));
        bufp->chgBit(oldp+1171,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq__io_deq_ready));
        bufp->chgBit(oldp+1172,((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__maybe_full)))));
        bufp->chgBit(oldp+1173,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT___io_deq_valid_output));
        bufp->chgBit(oldp+1174,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___queue_arw_deq_io_deq_bits_wen));
        bufp->chgBit(oldp+1175,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__maybe_full));
        bufp->chgBit(oldp+1176,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__do_enq));
        __Vtemp_h25ff00c9__0[0U] = (IData)((0x81000000000000ULL 
                                            | (((QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq__io_enq_bits_size)) 
                                                << 0x2dU) 
                                               | (((QData)((IData)(
                                                                   (0xffU 
                                                                    & (~ 
                                                                       (0x7fffU 
                                                                        & (((IData)(0x7ffU) 
                                                                            << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_size)) 
                                                                           >> 3U)))))) 
                                                   << 0x25U) 
                                                  | (((QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_address)) 
                                                      << 5U) 
                                                     | (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id)))))));
        __Vtemp_h25ff00c9__0[1U] = (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_size) 
                                     << 0x1eU) | (IData)(
                                                         ((0x81000000000000ULL 
                                                           | (((QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq__io_enq_bits_size)) 
                                                               << 0x2dU) 
                                                              | (((QData)((IData)(
                                                                                (0xffU 
                                                                                & (~ 
                                                                                (0x7fffU 
                                                                                & (((IData)(0x7ffU) 
                                                                                << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_size)) 
                                                                                >> 3U)))))) 
                                                                  << 0x25U) 
                                                                 | (((QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_address)) 
                                                                     << 5U) 
                                                                    | (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id)))))) 
                                                          >> 0x20U)));
        __Vtemp_h25ff00c9__0[2U] = ((0x80U & ((~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_opcode) 
                                                  >> 2U)) 
                                              << 7U)) 
                                    | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_source) 
                                        << 2U) | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_size) 
                                                  >> 2U)));
        bufp->chgWData(oldp+1177,(__Vtemp_h25ff00c9__0),72);
        __Vtemp_hf311be31__0[0U] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_ext__DOT__Memory
            [0U][0U];
        __Vtemp_hf311be31__0[1U] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_ext__DOT__Memory
            [0U][1U];
        __Vtemp_hf311be31__0[2U] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_ext__DOT__Memory
            [0U][2U];
        bufp->chgWData(oldp+1180,(__Vtemp_hf311be31__0),72);
        bufp->chgWData(oldp+1183,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_ext__DOT__Memory[0]),72);
        bufp->chgBit(oldp+1186,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT___subsystem_mbus_xbar_auto_out_1_a_valid));
        bufp->chgBit(oldp+1187,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__bundleIn_0_a_ready));
        bufp->chgCData(oldp+1188,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT___sourceIdMap_ext_R0_data),5);
        bufp->chgSData(oldp+1189,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__allocated),16);
        bufp->chgCData(oldp+1190,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__a_first_counter),3);
        bufp->chgBit(oldp+1191,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__a_first_counter))));
        bufp->chgCData(oldp+1192,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__d_last_counter),3);
        bufp->chgBit(oldp+1193,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__block));
        bufp->chgCData(oldp+1194,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__x1_a_bits_source_r),5);
        bufp->chgCData(oldp+1195,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__monitor__DOT__a_first_counter),3);
        bufp->chgCData(oldp+1196,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__monitor__DOT__opcode),3);
        bufp->chgCData(oldp+1197,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__monitor__DOT__param),3);
        bufp->chgCData(oldp+1198,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__monitor__DOT__size),3);
        bufp->chgCData(oldp+1199,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__monitor__DOT__source),5);
        bufp->chgIData(oldp+1200,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__monitor__DOT__address),29);
        bufp->chgCData(oldp+1201,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__monitor__DOT__d_first_counter),3);
        bufp->chgCData(oldp+1202,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__monitor__DOT__opcode_1),3);
        bufp->chgCData(oldp+1203,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__monitor__DOT__param_1),2);
        bufp->chgCData(oldp+1204,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__monitor__DOT__size_1),3);
        bufp->chgCData(oldp+1205,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__monitor__DOT__source_1),5);
        bufp->chgBit(oldp+1206,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__monitor__DOT__sink));
        bufp->chgBit(oldp+1207,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__monitor__DOT__denied));
        bufp->chgIData(oldp+1208,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__monitor__DOT__inflight),20);
        bufp->chgWData(oldp+1209,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__monitor__DOT__inflight_opcodes),80);
        bufp->chgWData(oldp+1212,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__monitor__DOT__inflight_sizes),80);
        bufp->chgCData(oldp+1215,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__monitor__DOT__a_first_counter_1),3);
        bufp->chgBit(oldp+1216,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__monitor__DOT__a_first_counter_1))));
        bufp->chgCData(oldp+1217,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__monitor__DOT__d_first_counter_1),3);
        bufp->chgBit(oldp+1218,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__monitor__DOT__d_first_counter_1))));
        bufp->chgIData(oldp+1219,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__monitor__DOT__watchdog),32);
        bufp->chgCData(oldp+1220,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__monitor__DOT__d_first_counter_2),3);
        bufp->chgBit(oldp+1221,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__monitor__DOT__d_first_counter_2))));
        bufp->chgBit(oldp+1222,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__monitor__DOT__mask_acc));
        bufp->chgBit(oldp+1223,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__monitor__DOT__mask_acc_1));
        bufp->chgBit(oldp+1224,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__monitor__DOT__mask_eq_2));
        bufp->chgBit(oldp+1225,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__monitor__DOT__mask_acc_2));
        bufp->chgBit(oldp+1226,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__monitor__DOT__mask_eq_3));
        bufp->chgBit(oldp+1227,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__monitor__DOT__mask_acc_3));
        bufp->chgBit(oldp+1228,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__monitor__DOT__mask_eq_4));
        bufp->chgBit(oldp+1229,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__monitor__DOT__mask_acc_4));
        bufp->chgBit(oldp+1230,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__monitor__DOT__mask_eq_5));
        bufp->chgBit(oldp+1231,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__monitor__DOT__mask_acc_5));
        bufp->chgCData(oldp+1232,(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__monitor__DOT__mask_acc_5) 
                                     | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__monitor__DOT__mask_eq_5) 
                                        & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_address)) 
                                    << 7U) | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__monitor__DOT__mask_acc_5) 
                                                | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__monitor__DOT__mask_eq_5) 
                                                   & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_address))) 
                                               << 6U) 
                                              | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__monitor__DOT__mask_acc_4) 
                                                   | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__monitor__DOT__mask_eq_4) 
                                                      & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_address)) 
                                                  << 5U) 
                                                 | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__monitor__DOT__mask_acc_4) 
                                                      | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__monitor__DOT__mask_eq_4) 
                                                         & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_address))) 
                                                     << 4U) 
                                                    | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__monitor__DOT__mask_acc_3) 
                                                         | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__monitor__DOT__mask_eq_3) 
                                                            & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_address)) 
                                                        << 3U) 
                                                       | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__monitor__DOT__mask_acc_3) 
                                                            | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__monitor__DOT__mask_eq_3) 
                                                               & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_address))) 
                                                           << 2U) 
                                                          | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__monitor__DOT__mask_acc_2) 
                                                               | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__monitor__DOT__mask_eq_2) 
                                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_address)) 
                                                              << 1U) 
                                                             | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__monitor__DOT__mask_acc_2) 
                                                                | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__monitor__DOT__mask_eq_2) 
                                                                   & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_address))))))))))),8);
        bufp->chgIData(oldp+1233,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__monitor__DOT___same_cycle_resp_T_1)
                                    ? ((0x1fU >= (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_source))
                                        ? (0xfffffU 
                                           & ((IData)(1U) 
                                              << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_source)))
                                        : 0U) : 0U)),20);
        bufp->chgBit(oldp+1234,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__monitor__DOT__same_cycle_resp));
        bufp->chgCData(oldp+1235,((((IData)((0U != 
                                             (0xffU 
                                              & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT___GEN_2) 
                                                 >> 8U)))) 
                                    << 3U) | (((IData)(
                                                       (0U 
                                                        != 
                                                        (0xfU 
                                                         & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT___GEN_3) 
                                                            >> 3U)))) 
                                               << 2U) 
                                              | (((IData)(
                                                          (0U 
                                                           != 
                                                           (3U 
                                                            & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT___GEN_4) 
                                                               >> 1U)))) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT___nextFree_T_8))))),4);
        bufp->chgBit(oldp+1236,(((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__a_first_counter)) 
                                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT___alloc_T))));
        bufp->chgCData(oldp+1237,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__sourceIdMap_ext__DOT__Memory[0]),5);
        bufp->chgCData(oldp+1238,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__sourceIdMap_ext__DOT__Memory[1]),5);
        bufp->chgCData(oldp+1239,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__sourceIdMap_ext__DOT__Memory[2]),5);
        bufp->chgCData(oldp+1240,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__sourceIdMap_ext__DOT__Memory[3]),5);
        bufp->chgCData(oldp+1241,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__sourceIdMap_ext__DOT__Memory[4]),5);
        bufp->chgCData(oldp+1242,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__sourceIdMap_ext__DOT__Memory[5]),5);
        bufp->chgCData(oldp+1243,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__sourceIdMap_ext__DOT__Memory[6]),5);
        bufp->chgCData(oldp+1244,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__sourceIdMap_ext__DOT__Memory[7]),5);
        bufp->chgCData(oldp+1245,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__sourceIdMap_ext__DOT__Memory[8]),5);
        bufp->chgCData(oldp+1246,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__sourceIdMap_ext__DOT__Memory[9]),5);
        bufp->chgCData(oldp+1247,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__sourceIdMap_ext__DOT__Memory[10]),5);
        bufp->chgCData(oldp+1248,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__sourceIdMap_ext__DOT__Memory[11]),5);
        bufp->chgCData(oldp+1249,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__sourceIdMap_ext__DOT__Memory[12]),5);
        bufp->chgCData(oldp+1250,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__sourceIdMap_ext__DOT__Memory[13]),5);
        bufp->chgCData(oldp+1251,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__sourceIdMap_ext__DOT__Memory[14]),5);
        bufp->chgCData(oldp+1252,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__sourceIdMap_ext__DOT__Memory[15]),5);
        bufp->chgCData(oldp+1253,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__a_first_counter),3);
        bufp->chgCData(oldp+1254,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__opcode),3);
        bufp->chgCData(oldp+1255,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__param),3);
        bufp->chgCData(oldp+1256,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__size),3);
        bufp->chgCData(oldp+1257,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__source),5);
        bufp->chgIData(oldp+1258,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__address),32);
        bufp->chgCData(oldp+1259,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__d_first_counter),3);
        bufp->chgCData(oldp+1260,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__opcode_1),3);
        bufp->chgCData(oldp+1261,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__param_1),2);
        bufp->chgCData(oldp+1262,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__size_1),3);
        bufp->chgCData(oldp+1263,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__source_1),5);
        bufp->chgBit(oldp+1264,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__sink));
        bufp->chgBit(oldp+1265,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__denied));
        bufp->chgIData(oldp+1266,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__inflight),20);
        bufp->chgWData(oldp+1267,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__inflight_opcodes),80);
        bufp->chgWData(oldp+1270,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes),80);
        bufp->chgCData(oldp+1273,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__a_first_counter_1),3);
        bufp->chgBit(oldp+1274,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__a_first_counter_1))));
        bufp->chgCData(oldp+1275,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_1),3);
        bufp->chgBit(oldp+1276,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_1))));
        bufp->chgIData(oldp+1277,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__watchdog),32);
        bufp->chgCData(oldp+1278,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_2),3);
        bufp->chgBit(oldp+1279,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_2))));
        bufp->chgBit(oldp+1280,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__mask_acc));
        bufp->chgBit(oldp+1281,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__mask_acc_1));
        bufp->chgBit(oldp+1282,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__mask_eq_2));
        bufp->chgBit(oldp+1283,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__mask_acc_2));
        bufp->chgBit(oldp+1284,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__mask_eq_3));
        bufp->chgBit(oldp+1285,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__mask_acc_3));
        bufp->chgBit(oldp+1286,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__mask_eq_4));
        bufp->chgBit(oldp+1287,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__mask_acc_4));
        bufp->chgBit(oldp+1288,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__mask_eq_5));
        bufp->chgBit(oldp+1289,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__mask_acc_5));
        bufp->chgCData(oldp+1290,(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__mask_acc_5) 
                                     | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__mask_eq_5) 
                                        & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_address)) 
                                    << 7U) | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__mask_acc_5) 
                                                | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__mask_eq_5) 
                                                   & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_address))) 
                                               << 6U) 
                                              | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__mask_acc_4) 
                                                   | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__mask_eq_4) 
                                                      & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_address)) 
                                                  << 5U) 
                                                 | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__mask_acc_4) 
                                                      | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__mask_eq_4) 
                                                         & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_address))) 
                                                     << 4U) 
                                                    | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__mask_acc_3) 
                                                         | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__mask_eq_3) 
                                                            & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_address)) 
                                                        << 3U) 
                                                       | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__mask_acc_3) 
                                                            | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__mask_eq_3) 
                                                               & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_address))) 
                                                           << 2U) 
                                                          | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__mask_acc_2) 
                                                               | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__mask_eq_2) 
                                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_address)) 
                                                              << 1U) 
                                                             | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__mask_acc_2) 
                                                                | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__mask_eq_2) 
                                                                   & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_address))))))))))),8);
        bufp->chgIData(oldp+1291,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT___same_cycle_resp_T_1)
                                    ? ((0x1fU >= (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_source))
                                        ? (0xfffffU 
                                           & ((IData)(1U) 
                                              << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_source)))
                                        : 0U) : 0U)),20);
        bufp->chgBit(oldp+1292,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__same_cycle_resp));
        bufp->chgCData(oldp+1293,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor__DOT__a_first_counter),3);
        bufp->chgCData(oldp+1294,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor__DOT__opcode),3);
        bufp->chgCData(oldp+1295,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor__DOT__param),3);
        bufp->chgCData(oldp+1296,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor__DOT__size),3);
        bufp->chgCData(oldp+1297,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor__DOT__source),5);
        bufp->chgIData(oldp+1298,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor__DOT__address),32);
        bufp->chgCData(oldp+1299,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor__DOT__d_first_counter),3);
        bufp->chgCData(oldp+1300,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor__DOT__opcode_1),3);
        bufp->chgCData(oldp+1301,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor__DOT__param_1),2);
        bufp->chgCData(oldp+1302,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor__DOT__size_1),3);
        bufp->chgCData(oldp+1303,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor__DOT__source_1),5);
        bufp->chgBit(oldp+1304,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor__DOT__sink));
        bufp->chgBit(oldp+1305,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor__DOT__denied));
        bufp->chgIData(oldp+1306,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor__DOT__inflight),20);
        bufp->chgWData(oldp+1307,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor__DOT__inflight_opcodes),80);
        bufp->chgWData(oldp+1310,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor__DOT__inflight_sizes),80);
        bufp->chgCData(oldp+1313,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor__DOT__a_first_counter_1),3);
        bufp->chgBit(oldp+1314,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor__DOT__a_first_counter_1))));
        bufp->chgCData(oldp+1315,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor__DOT__d_first_counter_1),3);
        bufp->chgBit(oldp+1316,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor__DOT__d_first_counter_1))));
        bufp->chgIData(oldp+1317,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor__DOT__watchdog),32);
        bufp->chgCData(oldp+1318,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor__DOT__d_first_counter_2),3);
        bufp->chgBit(oldp+1319,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor__DOT__d_first_counter_2))));
        bufp->chgBit(oldp+1320,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor__DOT__mask_acc));
        bufp->chgBit(oldp+1321,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor__DOT__mask_acc_1));
        bufp->chgBit(oldp+1322,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor__DOT__mask_eq_2));
        bufp->chgBit(oldp+1323,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor__DOT__mask_acc_2));
        bufp->chgBit(oldp+1324,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor__DOT__mask_eq_3));
        bufp->chgBit(oldp+1325,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor__DOT__mask_acc_3));
        bufp->chgBit(oldp+1326,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor__DOT__mask_eq_4));
        bufp->chgBit(oldp+1327,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor__DOT__mask_acc_4));
        bufp->chgBit(oldp+1328,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor__DOT__mask_eq_5));
        bufp->chgBit(oldp+1329,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor__DOT__mask_acc_5));
        bufp->chgCData(oldp+1330,(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor__DOT__mask_acc_5) 
                                     | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor__DOT__mask_eq_5) 
                                        & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_address)) 
                                    << 7U) | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor__DOT__mask_acc_5) 
                                                | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor__DOT__mask_eq_5) 
                                                   & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_address))) 
                                               << 6U) 
                                              | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor__DOT__mask_acc_4) 
                                                   | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor__DOT__mask_eq_4) 
                                                      & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_address)) 
                                                  << 5U) 
                                                 | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor__DOT__mask_acc_4) 
                                                      | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor__DOT__mask_eq_4) 
                                                         & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_address))) 
                                                     << 4U) 
                                                    | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor__DOT__mask_acc_3) 
                                                         | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor__DOT__mask_eq_3) 
                                                            & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_address)) 
                                                        << 3U) 
                                                       | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor__DOT__mask_acc_3) 
                                                            | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor__DOT__mask_eq_3) 
                                                               & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_address))) 
                                                           << 2U) 
                                                          | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor__DOT__mask_acc_2) 
                                                               | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor__DOT__mask_eq_2) 
                                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_address)) 
                                                              << 1U) 
                                                             | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor__DOT__mask_acc_2) 
                                                                | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor__DOT__mask_eq_2) 
                                                                   & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_address))))))))))),8);
        bufp->chgIData(oldp+1331,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor__DOT___same_cycle_resp_T_1)
                                    ? ((0x1fU >= (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_source))
                                        ? (0xfffffU 
                                           & ((IData)(1U) 
                                              << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_source)))
                                        : 0U) : 0U)),20);
        bufp->chgBit(oldp+1332,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor__DOT__same_cycle_resp));
        bufp->chgCData(oldp+1333,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__a_first_counter),3);
        bufp->chgCData(oldp+1334,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__opcode),3);
        bufp->chgCData(oldp+1335,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__param),3);
        bufp->chgCData(oldp+1336,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__size),3);
        bufp->chgCData(oldp+1337,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__source),5);
        bufp->chgIData(oldp+1338,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__address),29);
        bufp->chgCData(oldp+1339,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__d_first_counter),3);
        bufp->chgCData(oldp+1340,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__opcode_1),3);
        bufp->chgCData(oldp+1341,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__param_1),2);
        bufp->chgCData(oldp+1342,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__size_1),3);
        bufp->chgCData(oldp+1343,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__source_1),5);
        bufp->chgBit(oldp+1344,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__sink));
        bufp->chgBit(oldp+1345,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__denied));
        bufp->chgIData(oldp+1346,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__inflight),20);
        bufp->chgWData(oldp+1347,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__inflight_opcodes),80);
        bufp->chgWData(oldp+1350,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__inflight_sizes),80);
        bufp->chgCData(oldp+1353,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__a_first_counter_1),3);
        bufp->chgBit(oldp+1354,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__a_first_counter_1))));
        bufp->chgCData(oldp+1355,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__d_first_counter_1),3);
        bufp->chgBit(oldp+1356,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__d_first_counter_1))));
        bufp->chgIData(oldp+1357,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__watchdog),32);
        bufp->chgCData(oldp+1358,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__d_first_counter_2),3);
        bufp->chgBit(oldp+1359,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__d_first_counter_2))));
        bufp->chgBit(oldp+1360,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__mask_acc));
        bufp->chgBit(oldp+1361,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__mask_acc_1));
        bufp->chgBit(oldp+1362,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__mask_eq_2));
        bufp->chgBit(oldp+1363,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__mask_acc_2));
        bufp->chgBit(oldp+1364,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__mask_eq_3));
        bufp->chgBit(oldp+1365,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__mask_acc_3));
        bufp->chgBit(oldp+1366,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__mask_eq_4));
        bufp->chgBit(oldp+1367,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__mask_acc_4));
        bufp->chgBit(oldp+1368,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__mask_eq_5));
        bufp->chgBit(oldp+1369,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__mask_acc_5));
        bufp->chgCData(oldp+1370,(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__mask_acc_5) 
                                     | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__mask_eq_5) 
                                        & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_address)) 
                                    << 7U) | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__mask_acc_5) 
                                                | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__mask_eq_5) 
                                                   & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_address))) 
                                               << 6U) 
                                              | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__mask_acc_4) 
                                                   | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__mask_eq_4) 
                                                      & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_address)) 
                                                  << 5U) 
                                                 | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__mask_acc_4) 
                                                      | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__mask_eq_4) 
                                                         & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_address))) 
                                                     << 4U) 
                                                    | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__mask_acc_3) 
                                                         | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__mask_eq_3) 
                                                            & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_address)) 
                                                        << 3U) 
                                                       | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__mask_acc_3) 
                                                            | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__mask_eq_3) 
                                                               & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_address))) 
                                                           << 2U) 
                                                          | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__mask_acc_2) 
                                                               | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__mask_eq_2) 
                                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_address)) 
                                                              << 1U) 
                                                             | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__mask_acc_2) 
                                                                | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__mask_eq_2) 
                                                                   & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_address))))))))))),8);
        bufp->chgIData(oldp+1371,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT___same_cycle_resp_T_1)
                                    ? ((0x1fU >= (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_source))
                                        ? (0xfffffU 
                                           & ((IData)(1U) 
                                              << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_source)))
                                        : 0U) : 0U)),20);
        bufp->chgBit(oldp+1372,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__same_cycle_resp));
        bufp->chgCData(oldp+1373,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__beatsLeft),3);
        bufp->chgBit(oldp+1374,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__beatsLeft))));
        bufp->chgCData(oldp+1375,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__readys_valid),2);
        bufp->chgCData(oldp+1376,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__readys_mask),2);
        bufp->chgCData(oldp+1377,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__readys_readys),2);
        bufp->chgBit(oldp+1378,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__readys_readys) 
                                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__bundleIn_0_d_valid))));
        bufp->chgBit(oldp+1379,((IData)((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__readys_readys) 
                                          >> 1U) & 
                                         (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty))))));
        bufp->chgBit(oldp+1380,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__state_0));
        bufp->chgBit(oldp+1381,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__state_1));
        bufp->chgBit(oldp+1382,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__muxStateEarly_0));
        bufp->chgBit(oldp+1383,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__muxStateEarly_1));
        bufp->chgBit(oldp+1384,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__latch));
        bufp->chgBit(oldp+1385,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__winnerQual_0));
        bufp->chgBit(oldp+1386,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__winnerQual_1));
        bufp->chgCData(oldp+1387,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__monitor__DOT__a_first_counter),3);
        bufp->chgCData(oldp+1388,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__monitor__DOT__opcode),3);
        bufp->chgCData(oldp+1389,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__monitor__DOT__param),3);
        bufp->chgCData(oldp+1390,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__monitor__DOT__size),3);
        bufp->chgCData(oldp+1391,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__monitor__DOT__source),5);
        bufp->chgIData(oldp+1392,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__monitor__DOT__address),32);
        bufp->chgCData(oldp+1393,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__monitor__DOT__d_first_counter),3);
        bufp->chgCData(oldp+1394,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__monitor__DOT__opcode_1),3);
        bufp->chgCData(oldp+1395,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__monitor__DOT__param_1),2);
        bufp->chgCData(oldp+1396,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__monitor__DOT__size_1),3);
        bufp->chgCData(oldp+1397,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__monitor__DOT__source_1),5);
        bufp->chgBit(oldp+1398,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__monitor__DOT__sink));
        bufp->chgBit(oldp+1399,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__monitor__DOT__denied));
        bufp->chgIData(oldp+1400,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__monitor__DOT__inflight),20);
        bufp->chgWData(oldp+1401,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__monitor__DOT__inflight_opcodes),80);
        bufp->chgWData(oldp+1404,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__monitor__DOT__inflight_sizes),80);
        bufp->chgCData(oldp+1407,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__monitor__DOT__a_first_counter_1),3);
        bufp->chgBit(oldp+1408,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__monitor__DOT__a_first_counter_1))));
        bufp->chgCData(oldp+1409,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__monitor__DOT__d_first_counter_1),3);
        bufp->chgBit(oldp+1410,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__monitor__DOT__d_first_counter_1))));
        bufp->chgIData(oldp+1411,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__monitor__DOT__watchdog),32);
        bufp->chgCData(oldp+1412,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__monitor__DOT__d_first_counter_2),3);
        bufp->chgBit(oldp+1413,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__monitor__DOT__d_first_counter_2))));
        bufp->chgBit(oldp+1414,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__monitor__DOT__mask_acc));
        bufp->chgBit(oldp+1415,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__monitor__DOT__mask_acc_1));
        bufp->chgBit(oldp+1416,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__monitor__DOT__mask_eq_2));
        bufp->chgBit(oldp+1417,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__monitor__DOT__mask_acc_2));
        bufp->chgBit(oldp+1418,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__monitor__DOT__mask_eq_3));
        bufp->chgBit(oldp+1419,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__monitor__DOT__mask_acc_3));
        bufp->chgBit(oldp+1420,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__monitor__DOT__mask_eq_4));
        bufp->chgBit(oldp+1421,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__monitor__DOT__mask_acc_4));
        bufp->chgBit(oldp+1422,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__monitor__DOT__mask_eq_5));
        bufp->chgBit(oldp+1423,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__monitor__DOT__mask_acc_5));
        bufp->chgCData(oldp+1424,(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__monitor__DOT__mask_acc_5) 
                                     | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__monitor__DOT__mask_eq_5) 
                                        & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_address)) 
                                    << 7U) | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__monitor__DOT__mask_acc_5) 
                                                | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__monitor__DOT__mask_eq_5) 
                                                   & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_address))) 
                                               << 6U) 
                                              | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__monitor__DOT__mask_acc_4) 
                                                   | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__monitor__DOT__mask_eq_4) 
                                                      & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_address)) 
                                                  << 5U) 
                                                 | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__monitor__DOT__mask_acc_4) 
                                                      | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__monitor__DOT__mask_eq_4) 
                                                         & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_address))) 
                                                     << 4U) 
                                                    | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__monitor__DOT__mask_acc_3) 
                                                         | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__monitor__DOT__mask_eq_3) 
                                                            & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_address)) 
                                                        << 3U) 
                                                       | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__monitor__DOT__mask_acc_3) 
                                                            | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__monitor__DOT__mask_eq_3) 
                                                               & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_address))) 
                                                           << 2U) 
                                                          | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__monitor__DOT__mask_acc_2) 
                                                               | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__monitor__DOT__mask_eq_2) 
                                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_address)) 
                                                              << 1U) 
                                                             | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__monitor__DOT__mask_acc_2) 
                                                                | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__monitor__DOT__mask_eq_2) 
                                                                   & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_address))))))))))),8);
        bufp->chgIData(oldp+1425,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__monitor__DOT___same_cycle_resp_T_1)
                                    ? ((0x1fU >= (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_source))
                                        ? (0xfffffU 
                                           & ((IData)(1U) 
                                              << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_source)))
                                        : 0U) : 0U)),20);
        bufp->chgBit(oldp+1426,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__monitor__DOT__same_cycle_resp));
        bufp->chgQData(oldp+1427,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__bootAddrReg),64);
        bufp->chgBit(oldp+1429,((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__x1_a_q__DOT__empty)))));
        bufp->chgCData(oldp+1430,((7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U])),3);
        bufp->chgCData(oldp+1431,((7U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                         >> 3U))),3);
        bufp->chgCData(oldp+1432,((7U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                         >> 6U))),3);
        bufp->chgCData(oldp+1433,((0x7fU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                            >> 9U))),7);
        bufp->chgIData(oldp+1434,((0x7fffffffU & ((
                                                   vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                                                   << 0x10U) 
                                                  | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                     >> 0x10U)))),31);
        bufp->chgCData(oldp+1435,((0xffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                                            >> 0xfU))),8);
        bufp->chgQData(oldp+1436,((((QData)((IData)(
                                                    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[3U])) 
                                    << 0x29U) | (((QData)((IData)(
                                                                  vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[2U])) 
                                                  << 9U) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[1U])) 
                                                    >> 0x17U)))),64);
        bufp->chgBit(oldp+1438,((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[3U] 
                                       >> 0x17U))));
        bufp->chgBit(oldp+1439,((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__full)))));
        bufp->chgBit(oldp+1440,((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__x1_a_q__DOT__full)))));
        bufp->chgBit(oldp+1441,((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)))));
        bufp->chgCData(oldp+1442,((7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U])),3);
        bufp->chgCData(oldp+1443,((3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                         >> 3U))),2);
        bufp->chgCData(oldp+1444,((7U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                         >> 5U))),3);
        bufp->chgCData(oldp+1445,((0x7fU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                            >> 8U))),7);
        bufp->chgBit(oldp+1446,((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                       >> 0xfU))));
        bufp->chgBit(oldp+1447,((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                       >> 0x10U))));
        bufp->chgQData(oldp+1448,((((QData)((IData)(
                                                    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[2U])) 
                                    << 0x2fU) | (((QData)((IData)(
                                                                  vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[1U])) 
                                                  << 0xfU) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U])) 
                                                    >> 0x11U)))),64);
        bufp->chgBit(oldp+1450,((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[2U] 
                                       >> 0x11U))));
        bufp->chgBit(oldp+1451,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__bundleIn_0_a_ready));
        bufp->chgBit(oldp+1452,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__bundleIn_0_d_valid));
        bufp->chgCData(oldp+1453,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__bundleIn_0_d_bits_opcode),3);
        bufp->chgBit(oldp+1454,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__bundleIn_0_d_bits_denied));
        bufp->chgQData(oldp+1455,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__d_replace)
                                    ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_d_0_data
                                    : (((QData)((IData)(
                                                        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[2U])) 
                                        << 0x2fU) | 
                                       (((QData)((IData)(
                                                         vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[1U])) 
                                         << 0xfU) | 
                                        ((QData)((IData)(
                                                         vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U])) 
                                         >> 0x11U))))),64);
        bufp->chgBit(oldp+1457,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__d_replace)
                                        ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_d_0_corrupt) 
                                           | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                              >> 0x10U))
                                        : (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[2U] 
                                           >> 0x11U)))));
        bufp->chgBit(oldp+1458,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__out_2_valid));
        bufp->chgCData(oldp+1459,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT___atomics_auto_out_a_bits_opcode),3);
        bufp->chgCData(oldp+1460,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT___atomics_auto_out_a_bits_param),3);
        bufp->chgCData(oldp+1461,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT___atomics_auto_out_a_bits_size),3);
        bufp->chgCData(oldp+1462,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT___atomics_auto_out_a_bits_source),7);
        bufp->chgIData(oldp+1463,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT___atomics_auto_out_a_bits_address),31);
        bufp->chgCData(oldp+1464,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT___atomics_auto_out_a_bits_mask),8);
        bufp->chgQData(oldp+1465,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT___atomics_auto_out_a_bits_data),64);
        bufp->chgBit(oldp+1467,((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__muxStateEarly_0) 
                                  & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_corrupt) 
                                     | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_d_0_corrupt))) 
                                 | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__muxStateEarly_1) 
                                    & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[3U] 
                                       >> 0x17U)))));
        bufp->chgBit(oldp+1468,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__x1_d_ready));
        bufp->chgBit(oldp+1469,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__out_1_ready));
        bufp->chgCData(oldp+1470,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_s_0_state),2);
        bufp->chgCData(oldp+1471,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_opcode),3);
        bufp->chgCData(oldp+1472,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_param),3);
        bufp->chgCData(oldp+1473,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_size),3);
        bufp->chgCData(oldp+1474,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_source),7);
        bufp->chgIData(oldp+1475,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_address),31);
        bufp->chgCData(oldp+1476,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_mask),8);
        bufp->chgQData(oldp+1477,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_data),64);
        bufp->chgBit(oldp+1479,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_corrupt));
        bufp->chgBit(oldp+1480,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_fifoId));
        bufp->chgCData(oldp+1481,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_lut),4);
        bufp->chgQData(oldp+1482,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_d_0_data),64);
        bufp->chgBit(oldp+1484,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_d_0_denied));
        bufp->chgBit(oldp+1485,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_d_0_corrupt));
        bufp->chgBit(oldp+1486,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_s_0_state))));
        bufp->chgBit(oldp+1487,((2U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_s_0_state))));
        bufp->chgQData(oldp+1488,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__wide_mask),64);
        bufp->chgQData(oldp+1490,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__a_a_ext),64);
        bufp->chgQData(oldp+1492,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__a_d_ext),64);
        bufp->chgQData(oldp+1494,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__adder_out),64);
        bufp->chgBit(oldp+1496,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__a_allow));
        bufp->chgBit(oldp+1497,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__out_1_earlyValid));
        bufp->chgBit(oldp+1498,((2U == (3U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_size)))));
        bufp->chgBit(oldp+1499,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__source_c_bits_a_mask_acc));
        bufp->chgBit(oldp+1500,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__source_c_bits_a_mask_acc_1));
        bufp->chgBit(oldp+1501,((1U == (3U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_size)))));
        bufp->chgBit(oldp+1502,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__source_c_bits_a_mask_eq_2));
        bufp->chgBit(oldp+1503,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__source_c_bits_a_mask_acc_2));
        bufp->chgBit(oldp+1504,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__source_c_bits_a_mask_eq_3));
        bufp->chgBit(oldp+1505,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__source_c_bits_a_mask_acc_3));
        bufp->chgBit(oldp+1506,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__source_c_bits_a_mask_eq_4));
        bufp->chgBit(oldp+1507,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__source_c_bits_a_mask_acc_4));
        bufp->chgBit(oldp+1508,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__source_c_bits_a_mask_eq_5));
        bufp->chgBit(oldp+1509,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__source_c_bits_a_mask_acc_5));
        bufp->chgCData(oldp+1510,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__beatsLeft),3);
        bufp->chgBit(oldp+1511,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__beatsLeft))));
        bufp->chgBit(oldp+1512,(((2U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_s_0_state)) 
                                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__out_1_earlyValid))));
        bufp->chgBit(oldp+1513,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__state_0));
        bufp->chgBit(oldp+1514,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__state_1));
        bufp->chgBit(oldp+1515,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__muxStateEarly_0));
        bufp->chgBit(oldp+1516,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__muxStateEarly_1));
        bufp->chgCData(oldp+1517,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__d_first_counter),3);
        bufp->chgBit(oldp+1518,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__d_first_counter))));
        bufp->chgBit(oldp+1519,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__d_cam_sel_match_0));
        bufp->chgBit(oldp+1520,((1U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))));
        bufp->chgBit(oldp+1521,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__d_drop));
        bufp->chgBit(oldp+1522,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__d_replace));
        bufp->chgBit(oldp+1523,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__winnerQual_1));
        bufp->chgCData(oldp+1524,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__a_first_counter),3);
        bufp->chgCData(oldp+1525,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__opcode),3);
        bufp->chgCData(oldp+1526,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__param),3);
        bufp->chgCData(oldp+1527,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__size),3);
        bufp->chgCData(oldp+1528,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__source),7);
        bufp->chgIData(oldp+1529,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__address),31);
        bufp->chgCData(oldp+1530,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__d_first_counter),3);
        bufp->chgCData(oldp+1531,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__opcode_1),3);
        bufp->chgCData(oldp+1532,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__param_1),2);
        bufp->chgCData(oldp+1533,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__size_1),3);
        bufp->chgCData(oldp+1534,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__source_1),7);
        bufp->chgBit(oldp+1535,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__sink));
        bufp->chgBit(oldp+1536,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__denied));
        bufp->chgWData(oldp+1537,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__inflight),65);
        bufp->chgWData(oldp+1540,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__inflight_opcodes),260);
        bufp->chgWData(oldp+1549,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__inflight_sizes),260);
        bufp->chgCData(oldp+1558,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__a_first_counter_1),3);
        bufp->chgBit(oldp+1559,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__a_first_counter_1))));
        bufp->chgCData(oldp+1560,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__d_first_counter_1),3);
        bufp->chgBit(oldp+1561,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__d_first_counter_1))));
        bufp->chgBit(oldp+1562,((6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__bundleIn_0_d_bits_opcode))));
        bufp->chgIData(oldp+1563,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__watchdog),32);
        bufp->chgCData(oldp+1564,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__d_first_counter_2),3);
        bufp->chgBit(oldp+1565,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__d_first_counter_2))));
        bufp->chgBit(oldp+1566,((1U & (((((((0x24U 
                                             == (0x7fU 
                                                 & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                    >> 9U))) 
                                            | (1U == 
                                               (7U 
                                                & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 0xdU)))) 
                                           | (~ (IData)(
                                                        (0U 
                                                         != 
                                                         (7U 
                                                          & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                             >> 0xdU)))))) 
                                          | (0x20U 
                                             == (0x7fU 
                                                 & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                    >> 9U)))) 
                                         | (0x21U == 
                                            (0x7fU 
                                             & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                >> 9U)))) 
                                        | (0x22U == 
                                           (0x7fU & 
                                            (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                             >> 9U)))) 
                                       | (0x40U == 
                                          (0x7fU & 
                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                            >> 9U)))))));
        bufp->chgBit(oldp+1567,((2U == (3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                              >> 6U)))));
        bufp->chgBit(oldp+1568,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__mask_acc));
        bufp->chgBit(oldp+1569,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__mask_acc_1));
        bufp->chgBit(oldp+1570,((1U == (3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                              >> 6U)))));
        bufp->chgBit(oldp+1571,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__mask_eq_2));
        bufp->chgBit(oldp+1572,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__mask_acc_2));
        bufp->chgBit(oldp+1573,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__mask_eq_3));
        bufp->chgBit(oldp+1574,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__mask_acc_3));
        bufp->chgBit(oldp+1575,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__mask_eq_4));
        bufp->chgBit(oldp+1576,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__mask_acc_4));
        bufp->chgBit(oldp+1577,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__mask_eq_5));
        bufp->chgBit(oldp+1578,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__mask_acc_5));
        bufp->chgCData(oldp+1579,(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__mask_acc_5) 
                                     << 7U) | (0x7fff80U 
                                               & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__mask_eq_5) 
                                                   << 7U) 
                                                  & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                     >> 9U)))) 
                                   | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__mask_acc_5) 
                                        | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__mask_eq_5) 
                                           & (~ (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                 >> 0x10U)))) 
                                       << 6U) | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__mask_acc_4) 
                                                   << 5U) 
                                                  | (0x1fffe0U 
                                                     & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__mask_eq_4) 
                                                         << 5U) 
                                                        & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                           >> 0xbU)))) 
                                                 | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__mask_acc_4) 
                                                      | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__mask_eq_4) 
                                                         & (~ 
                                                            (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                             >> 0x10U)))) 
                                                     << 4U) 
                                                    | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__mask_acc_3) 
                                                         << 3U) 
                                                        | (0x7fff8U 
                                                           & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__mask_eq_3) 
                                                               << 3U) 
                                                              & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                 >> 0xdU)))) 
                                                       | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__mask_acc_3) 
                                                            | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__mask_eq_3) 
                                                               & (~ 
                                                                  (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                   >> 0x10U)))) 
                                                           << 2U) 
                                                          | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__mask_acc_2) 
                                                               << 1U) 
                                                              | (0x1fffeU 
                                                                 & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__mask_eq_2) 
                                                                     << 1U) 
                                                                    & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                       >> 0xfU)))) 
                                                             | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__mask_acc_2) 
                                                                | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__mask_eq_2) 
                                                                   & (~ 
                                                                      (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                       >> 0x10U)))))))))))),8);
        bufp->chgBit(oldp+1580,((((((((0x24U == (0x7fU 
                                                 & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                    >> 8U))) 
                                      | (1U == (7U 
                                                & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 0xcU)))) 
                                     | (0U == (7U & 
                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                >> 0xcU)))) 
                                    | (0x20U == (0x7fU 
                                                 & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                    >> 8U)))) 
                                   | (0x21U == (0x7fU 
                                                & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 8U)))) 
                                  | (0x22U == (0x7fU 
                                               & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                  >> 8U)))) 
                                 | (0x40U == (0x7fU 
                                              & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                 >> 8U))))));
        __Vtemp_hc961d23f__0[0U] = 1U;
        __Vtemp_hc961d23f__0[1U] = 0U;
        __Vtemp_hc961d23f__0[2U] = 0U;
        __Vtemp_hc961d23f__0[3U] = 0U;
        VL_EXTEND_WI(128,7, __Vtemp_h26700e2c__0, (0x7fU 
                                                   & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                      >> 9U)));
        VL_SHIFTL_WWW(128,128,128, __Vtemp_hde152b8c__0, __Vtemp_hc961d23f__0, __Vtemp_h26700e2c__0);
        if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___same_cycle_resp_T_1) {
            __Vtemp_hd812b4ec__0[0U] = __Vtemp_hde152b8c__0[0U];
            __Vtemp_hd812b4ec__0[1U] = __Vtemp_hde152b8c__0[1U];
            __Vtemp_hd812b4ec__0[2U] = (1U & __Vtemp_hde152b8c__0[2U]);
        } else {
            __Vtemp_hd812b4ec__0[0U] = 0U;
            __Vtemp_hd812b4ec__0[1U] = 0U;
            __Vtemp_hd812b4ec__0[2U] = 0U;
        }
        bufp->chgWData(oldp+1581,(__Vtemp_hd812b4ec__0),65);
        bufp->chgBit(oldp+1584,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__same_cycle_resp));
        bufp->chgBit(oldp+1585,((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__x1_a_q__DOT__empty)))));
        bufp->chgBit(oldp+1586,((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__full)))));
        bufp->chgBit(oldp+1587,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__enq_ptr_value));
        bufp->chgBit(oldp+1588,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__deq_ptr_value));
        bufp->chgBit(oldp+1589,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__maybe_full));
        bufp->chgBit(oldp+1590,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ptr_match));
        bufp->chgBit(oldp+1591,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty));
        bufp->chgBit(oldp+1592,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__full));
        bufp->chgBit(oldp+1593,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__do_deq));
        bufp->chgWData(oldp+1594,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data),82);
        bufp->chgWData(oldp+1597,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory[0]),82);
        bufp->chgWData(oldp+1600,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory[1]),82);
        bufp->chgCData(oldp+1603,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__monitor__DOT__a_first_counter),3);
        bufp->chgCData(oldp+1604,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__monitor__DOT__opcode),3);
        bufp->chgCData(oldp+1605,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__monitor__DOT__param),3);
        bufp->chgCData(oldp+1606,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__monitor__DOT__size),3);
        bufp->chgCData(oldp+1607,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__monitor__DOT__source),7);
        bufp->chgIData(oldp+1608,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__monitor__DOT__address),31);
        bufp->chgCData(oldp+1609,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__monitor__DOT__d_first_counter),3);
        bufp->chgCData(oldp+1610,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__monitor__DOT__opcode_1),3);
        bufp->chgCData(oldp+1611,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__monitor__DOT__param_1),2);
        bufp->chgCData(oldp+1612,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__monitor__DOT__size_1),3);
        bufp->chgCData(oldp+1613,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__monitor__DOT__source_1),7);
        bufp->chgBit(oldp+1614,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__monitor__DOT__sink));
        bufp->chgBit(oldp+1615,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__monitor__DOT__denied));
        bufp->chgWData(oldp+1616,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__monitor__DOT__inflight),65);
        bufp->chgWData(oldp+1619,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__monitor__DOT__inflight_opcodes),260);
        bufp->chgWData(oldp+1628,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__monitor__DOT__inflight_sizes),260);
        bufp->chgCData(oldp+1637,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__monitor__DOT__a_first_counter_1),3);
        bufp->chgBit(oldp+1638,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__monitor__DOT__a_first_counter_1))));
        bufp->chgCData(oldp+1639,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__monitor__DOT__d_first_counter_1),3);
        bufp->chgBit(oldp+1640,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))));
        bufp->chgBit(oldp+1641,((6U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))));
        bufp->chgIData(oldp+1642,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__monitor__DOT__watchdog),32);
        bufp->chgCData(oldp+1643,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__monitor__DOT__d_first_counter_2),3);
        bufp->chgBit(oldp+1644,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))));
        bufp->chgBit(oldp+1645,((1U & (((((((0x24U 
                                             == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT___atomics_auto_out_a_bits_source)) 
                                            | (1U == 
                                               (7U 
                                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT___atomics_auto_out_a_bits_source) 
                                                   >> 4U)))) 
                                           | (~ (IData)(
                                                        (0U 
                                                         != 
                                                         (7U 
                                                          & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT___atomics_auto_out_a_bits_source) 
                                                             >> 4U)))))) 
                                          | (0x20U 
                                             == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT___atomics_auto_out_a_bits_source))) 
                                         | (0x21U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT___atomics_auto_out_a_bits_source))) 
                                        | (0x22U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT___atomics_auto_out_a_bits_source))) 
                                       | (0x40U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT___atomics_auto_out_a_bits_source))))));
        bufp->chgBit(oldp+1646,((2U == (3U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT___atomics_auto_out_a_bits_size)))));
        bufp->chgBit(oldp+1647,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__monitor__DOT__mask_acc));
        bufp->chgBit(oldp+1648,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__monitor__DOT__mask_acc_1));
        bufp->chgBit(oldp+1649,((1U == (3U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT___atomics_auto_out_a_bits_size)))));
        bufp->chgBit(oldp+1650,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__monitor__DOT__mask_eq_2));
        bufp->chgBit(oldp+1651,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__monitor__DOT__mask_acc_2));
        bufp->chgBit(oldp+1652,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__monitor__DOT__mask_eq_3));
        bufp->chgBit(oldp+1653,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__monitor__DOT__mask_acc_3));
        bufp->chgBit(oldp+1654,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__monitor__DOT__mask_eq_4));
        bufp->chgBit(oldp+1655,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__monitor__DOT__mask_acc_4));
        bufp->chgBit(oldp+1656,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__monitor__DOT__mask_eq_5));
        bufp->chgBit(oldp+1657,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__monitor__DOT__mask_acc_5));
        bufp->chgCData(oldp+1658,(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__monitor__DOT__mask_acc_5) 
                                     | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__monitor__DOT__mask_eq_5) 
                                        & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT___atomics_auto_out_a_bits_address)) 
                                    << 7U) | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__monitor__DOT__mask_acc_5) 
                                                | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__monitor__DOT__mask_eq_5) 
                                                   & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT___atomics_auto_out_a_bits_address))) 
                                               << 6U) 
                                              | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__monitor__DOT__mask_acc_4) 
                                                   | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__monitor__DOT__mask_eq_4) 
                                                      & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT___atomics_auto_out_a_bits_address)) 
                                                  << 5U) 
                                                 | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__monitor__DOT__mask_acc_4) 
                                                      | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__monitor__DOT__mask_eq_4) 
                                                         & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT___atomics_auto_out_a_bits_address))) 
                                                     << 4U) 
                                                    | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__monitor__DOT__mask_acc_3) 
                                                         | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__monitor__DOT__mask_eq_3) 
                                                            & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT___atomics_auto_out_a_bits_address)) 
                                                        << 3U) 
                                                       | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__monitor__DOT__mask_acc_3) 
                                                            | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__monitor__DOT__mask_eq_3) 
                                                               & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT___atomics_auto_out_a_bits_address))) 
                                                           << 2U) 
                                                          | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__monitor__DOT__mask_acc_2) 
                                                               | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__monitor__DOT__mask_eq_2) 
                                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT___atomics_auto_out_a_bits_address)) 
                                                              << 1U) 
                                                             | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__monitor__DOT__mask_acc_2) 
                                                                | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__monitor__DOT__mask_eq_2) 
                                                                   & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT___atomics_auto_out_a_bits_address))))))))))),8);
        __Vtemp_hc961d23f__1[0U] = 1U;
        __Vtemp_hc961d23f__1[1U] = 0U;
        __Vtemp_hc961d23f__1[2U] = 0U;
        __Vtemp_hc961d23f__1[3U] = 0U;
        VL_EXTEND_WI(128,7, __Vtemp_h341f8578__0, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT___atomics_auto_out_a_bits_source));
        VL_SHIFTL_WWW(128,128,128, __Vtemp_h3e24771a__0, __Vtemp_hc961d23f__1, __Vtemp_h341f8578__0);
        if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__monitor__DOT___same_cycle_resp_T_1) {
            __Vtemp_h3899dcc7__0[0U] = __Vtemp_h3e24771a__0[0U];
            __Vtemp_h3899dcc7__0[1U] = __Vtemp_h3e24771a__0[1U];
            __Vtemp_h3899dcc7__0[2U] = (1U & __Vtemp_h3e24771a__0[2U]);
        } else {
            __Vtemp_h3899dcc7__0[0U] = 0U;
            __Vtemp_h3899dcc7__0[1U] = 0U;
            __Vtemp_h3899dcc7__0[2U] = 0U;
        }
        bufp->chgWData(oldp+1659,(__Vtemp_h3899dcc7__0),65);
        bufp->chgBit(oldp+1662,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__monitor__DOT__same_cycle_resp));
        bufp->chgBit(oldp+1663,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__x1_a_q__DOT__enq_ptr_value));
        bufp->chgBit(oldp+1664,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__x1_a_q__DOT__deq_ptr_value));
        bufp->chgBit(oldp+1665,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__x1_a_q__DOT__maybe_full));
        bufp->chgBit(oldp+1666,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__x1_a_q__DOT__ptr_match));
        bufp->chgBit(oldp+1667,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__x1_a_q__DOT__empty));
        bufp->chgBit(oldp+1668,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__x1_a_q__DOT__full));
        bufp->chgBit(oldp+1669,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__x1_a_q__DOT__do_enq));
        __Vtemp_he0d2b28b__0[0U] = (IData)((((QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT___atomics_auto_out_a_bits_mask)) 
                                             << 0x2fU) 
                                            | (((QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT___atomics_auto_out_a_bits_address)) 
                                                << 0x10U) 
                                               | (QData)((IData)(
                                                                 (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT___atomics_auto_out_a_bits_source) 
                                                                   << 9U) 
                                                                  | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT___atomics_auto_out_a_bits_size) 
                                                                      << 6U) 
                                                                     | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT___atomics_auto_out_a_bits_param) 
                                                                         << 3U) 
                                                                        | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT___atomics_auto_out_a_bits_opcode)))))))));
        __Vtemp_he0d2b28b__0[1U] = (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT___atomics_auto_out_a_bits_data) 
                                     << 0x17U) | (IData)(
                                                         ((((QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT___atomics_auto_out_a_bits_mask)) 
                                                            << 0x2fU) 
                                                           | (((QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT___atomics_auto_out_a_bits_address)) 
                                                               << 0x10U) 
                                                              | (QData)((IData)(
                                                                                (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT___atomics_auto_out_a_bits_source) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT___atomics_auto_out_a_bits_size) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT___atomics_auto_out_a_bits_param) 
                                                                                << 3U) 
                                                                                | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT___atomics_auto_out_a_bits_opcode)))))))) 
                                                          >> 0x20U)));
        __Vtemp_he0d2b28b__0[2U] = (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT___atomics_auto_out_a_bits_data) 
                                     >> 9U) | ((IData)(
                                                       (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT___atomics_auto_out_a_bits_data 
                                                        >> 0x20U)) 
                                               << 0x17U));
        __Vtemp_he0d2b28b__0[3U] = ((0xff800000U & 
                                     ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__muxStateEarly_0) 
                                        & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_corrupt) 
                                           | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_d_0_corrupt))) 
                                       << 0x17U) | 
                                      (0xff800000U 
                                       & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__muxStateEarly_1) 
                                           << 0x17U) 
                                          & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[3U])))) 
                                    | ((IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT___atomics_auto_out_a_bits_data 
                                                >> 0x20U)) 
                                       >> 9U));
        bufp->chgWData(oldp+1670,(__Vtemp_he0d2b28b__0),120);
        bufp->chgWData(oldp+1674,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory[0]),120);
        bufp->chgWData(oldp+1678,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory[1]),120);
        bufp->chgBit(oldp+1682,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__enq_ptr_value));
        bufp->chgBit(oldp+1683,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__deq_ptr_value));
        bufp->chgBit(oldp+1684,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__maybe_full));
        bufp->chgBit(oldp+1685,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ptr_match));
        bufp->chgBit(oldp+1686,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty));
        bufp->chgBit(oldp+1687,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__full));
        bufp->chgBit(oldp+1688,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__do_enq));
        __Vtemp_h853ebe42__0[0U] = (((IData)(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__d_replace)
                                               ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_d_0_data
                                               : (((QData)((IData)(
                                                                   vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[2U])) 
                                                   << 0x2fU) 
                                                  | (((QData)((IData)(
                                                                      vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[1U])) 
                                                      << 0xfU) 
                                                     | ((QData)((IData)(
                                                                        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U])) 
                                                        >> 0x11U))))) 
                                     << 0x11U) | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__bundleIn_0_d_bits_denied) 
                                                   << 0x10U) 
                                                  | ((0x8000U 
                                                      & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]) 
                                                     | ((0x7f00U 
                                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]) 
                                                        | ((0xe0U 
                                                            & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]) 
                                                           | ((0x18U 
                                                               & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]) 
                                                              | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__bundleIn_0_d_bits_opcode)))))));
        __Vtemp_h853ebe42__0[1U] = (((IData)(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__d_replace)
                                               ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_d_0_data
                                               : (((QData)((IData)(
                                                                   vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[2U])) 
                                                   << 0x2fU) 
                                                  | (((QData)((IData)(
                                                                      vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[1U])) 
                                                      << 0xfU) 
                                                     | ((QData)((IData)(
                                                                        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U])) 
                                                        >> 0x11U))))) 
                                     >> 0xfU) | ((IData)(
                                                         (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__d_replace)
                                                            ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_d_0_data
                                                            : 
                                                           (((QData)((IData)(
                                                                             vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[2U])) 
                                                             << 0x2fU) 
                                                            | (((QData)((IData)(
                                                                                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[1U])) 
                                                                << 0xfU) 
                                                               | ((QData)((IData)(
                                                                                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U])) 
                                                                  >> 0x11U)))) 
                                                          >> 0x20U)) 
                                                 << 0x11U));
        __Vtemp_h853ebe42__0[2U] = ((0x20000U & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__d_replace)
                                                   ? 
                                                  ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_d_0_corrupt) 
                                                   | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                      >> 0x10U))
                                                   : 
                                                  (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[2U] 
                                                   >> 0x11U)) 
                                                 << 0x11U)) 
                                    | ((IData)((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__d_replace)
                                                  ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_d_0_data
                                                  : 
                                                 (((QData)((IData)(
                                                                   vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[2U])) 
                                                   << 0x2fU) 
                                                  | (((QData)((IData)(
                                                                      vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[1U])) 
                                                      << 0xfU) 
                                                     | ((QData)((IData)(
                                                                        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U])) 
                                                        >> 0x11U)))) 
                                                >> 0x20U)) 
                                       >> 0xfU));
        bufp->chgWData(oldp+1689,(__Vtemp_h853ebe42__0),82);
        bufp->chgWData(oldp+1692,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data),82);
        bufp->chgWData(oldp+1695,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory[0]),82);
        bufp->chgWData(oldp+1698,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory[1]),82);
        bufp->chgCData(oldp+1701,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT__a_first_counter),3);
        bufp->chgCData(oldp+1702,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT__opcode),3);
        bufp->chgCData(oldp+1703,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT__param),3);
        bufp->chgCData(oldp+1704,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT__size),3);
        bufp->chgCData(oldp+1705,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT__source),7);
        bufp->chgIData(oldp+1706,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT__address),31);
        bufp->chgCData(oldp+1707,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT__d_first_counter),3);
        bufp->chgCData(oldp+1708,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT__opcode_1),3);
        bufp->chgCData(oldp+1709,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT__param_1),2);
        bufp->chgCData(oldp+1710,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT__size_1),3);
        bufp->chgCData(oldp+1711,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT__source_1),7);
        bufp->chgBit(oldp+1712,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT__sink));
        bufp->chgBit(oldp+1713,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT__denied));
        bufp->chgWData(oldp+1714,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT__inflight),65);
        bufp->chgWData(oldp+1717,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT__inflight_opcodes),260);
        bufp->chgWData(oldp+1726,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT__inflight_sizes),260);
        bufp->chgCData(oldp+1735,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT__a_first_counter_1),3);
        bufp->chgBit(oldp+1736,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT__a_first_counter_1))));
        bufp->chgCData(oldp+1737,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT__d_first_counter_1),3);
        bufp->chgBit(oldp+1738,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT__d_first_counter_1))));
        bufp->chgBit(oldp+1739,((6U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))));
        bufp->chgIData(oldp+1740,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT__watchdog),32);
        bufp->chgCData(oldp+1741,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT__d_first_counter_2),3);
        bufp->chgBit(oldp+1742,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT__d_first_counter_2))));
        bufp->chgBit(oldp+1743,((((((((0x24U == (0x7fU 
                                                 & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                    >> 8U))) 
                                      | (1U == (7U 
                                                & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 0xcU)))) 
                                     | (0U == (7U & 
                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                >> 0xcU)))) 
                                    | (0x20U == (0x7fU 
                                                 & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                    >> 8U)))) 
                                   | (0x21U == (0x7fU 
                                                & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 8U)))) 
                                  | (0x22U == (0x7fU 
                                               & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                  >> 8U)))) 
                                 | (0x40U == (0x7fU 
                                              & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                 >> 8U))))));
        bufp->chgBit(oldp+1744,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__x1_a_q__DOT__enq_ptr_value));
        bufp->chgBit(oldp+1745,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__x1_a_q__DOT__deq_ptr_value));
        bufp->chgBit(oldp+1746,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__x1_a_q__DOT__maybe_full));
        bufp->chgBit(oldp+1747,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__x1_a_q__DOT__ptr_match));
        bufp->chgBit(oldp+1748,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__x1_a_q__DOT__empty));
        bufp->chgBit(oldp+1749,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__x1_a_q__DOT__full));
        bufp->chgBit(oldp+1750,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__x1_a_q__DOT__do_deq));
        bufp->chgWData(oldp+1751,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data),120);
        bufp->chgWData(oldp+1755,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__x1_a_q__DOT__ram_ext__DOT__Memory[0]),120);
        bufp->chgWData(oldp+1759,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__x1_a_q__DOT__ram_ext__DOT__Memory[1]),120);
        bufp->chgCData(oldp+1763,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__acknum),3);
        bufp->chgCData(oldp+1764,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__dOrig),3);
        bufp->chgBit(oldp+1765,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__dToggle));
        bufp->chgBit(oldp+1766,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__acknum))));
        bufp->chgCData(oldp+1767,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__gennum),3);
        bufp->chgBit(oldp+1768,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__gennum))));
        bufp->chgBit(oldp+1769,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__aToggle_r));
        bufp->chgCData(oldp+1770,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT__a_first_counter),3);
        bufp->chgCData(oldp+1771,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT__opcode),3);
        bufp->chgCData(oldp+1772,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT__param),3);
        bufp->chgCData(oldp+1773,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT__size),3);
        bufp->chgCData(oldp+1774,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT__source),7);
        bufp->chgIData(oldp+1775,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT__address),31);
        bufp->chgCData(oldp+1776,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT__d_first_counter),3);
        bufp->chgCData(oldp+1777,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT__opcode_1),3);
        bufp->chgCData(oldp+1778,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT__param_1),2);
        bufp->chgCData(oldp+1779,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT__size_1),3);
        bufp->chgCData(oldp+1780,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT__source_1),7);
        bufp->chgBit(oldp+1781,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT__sink));
        bufp->chgBit(oldp+1782,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT__denied));
        bufp->chgWData(oldp+1783,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT__inflight),65);
        bufp->chgWData(oldp+1786,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes),260);
        bufp->chgWData(oldp+1795,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes),260);
        bufp->chgCData(oldp+1804,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1),3);
        bufp->chgBit(oldp+1805,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1))));
        bufp->chgCData(oldp+1806,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1),3);
        bufp->chgBit(oldp+1807,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1))));
        bufp->chgIData(oldp+1808,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT__watchdog),32);
        bufp->chgCData(oldp+1809,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_2),3);
        bufp->chgBit(oldp+1810,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_2))));
        bufp->chgBit(oldp+1811,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater__DOT__full));
        bufp->chgCData(oldp+1812,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater__DOT__saved_opcode),3);
        bufp->chgCData(oldp+1813,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater__DOT__saved_param),3);
        bufp->chgCData(oldp+1814,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater__DOT__saved_size),3);
        bufp->chgCData(oldp+1815,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater__DOT__saved_source),7);
        bufp->chgIData(oldp+1816,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater__DOT__saved_address),31);
        bufp->chgCData(oldp+1817,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater__DOT__saved_mask),8);
        bufp->chgBit(oldp+1818,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater__DOT__saved_corrupt));
        bufp->chgCData(oldp+1819,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__acknum),3);
        bufp->chgCData(oldp+1820,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__dOrig),3);
        bufp->chgBit(oldp+1821,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__dToggle));
        bufp->chgBit(oldp+1822,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__acknum))));
        bufp->chgCData(oldp+1823,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__gennum),3);
        bufp->chgBit(oldp+1824,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__gennum))));
        bufp->chgBit(oldp+1825,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__aToggle_r));
        bufp->chgCData(oldp+1826,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__a_first_counter),3);
        bufp->chgCData(oldp+1827,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__opcode),3);
        bufp->chgCData(oldp+1828,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__param),3);
        bufp->chgCData(oldp+1829,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__size),3);
        bufp->chgCData(oldp+1830,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__source),7);
        bufp->chgSData(oldp+1831,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__address),15);
        bufp->chgCData(oldp+1832,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__d_first_counter),3);
        bufp->chgCData(oldp+1833,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__opcode_1),3);
        bufp->chgCData(oldp+1834,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__param_1),2);
        bufp->chgCData(oldp+1835,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__size_1),3);
        bufp->chgCData(oldp+1836,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__source_1),7);
        bufp->chgBit(oldp+1837,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__sink));
        bufp->chgBit(oldp+1838,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__denied));
        bufp->chgWData(oldp+1839,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__inflight),65);
        bufp->chgWData(oldp+1842,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes),260);
        bufp->chgWData(oldp+1851,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes),260);
        bufp->chgCData(oldp+1860,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1),3);
        bufp->chgBit(oldp+1861,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1))));
        bufp->chgCData(oldp+1862,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1),3);
        bufp->chgBit(oldp+1863,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1))));
        bufp->chgIData(oldp+1864,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__watchdog),32);
        bufp->chgCData(oldp+1865,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_2),3);
        bufp->chgBit(oldp+1866,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_2))));
        bufp->chgBit(oldp+1867,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__repeater__DOT__full));
        bufp->chgCData(oldp+1868,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__repeater__DOT__saved_opcode),3);
        bufp->chgCData(oldp+1869,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__repeater__DOT__saved_param),3);
        bufp->chgCData(oldp+1870,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__repeater__DOT__saved_size),3);
        bufp->chgCData(oldp+1871,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__repeater__DOT__saved_source),7);
        bufp->chgSData(oldp+1872,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__repeater__DOT__saved_address),15);
        bufp->chgCData(oldp+1873,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__repeater__DOT__saved_mask),8);
        bufp->chgBit(oldp+1874,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__repeater__DOT__saved_corrupt));
        bufp->chgCData(oldp+1875,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT__a_first_counter),3);
        bufp->chgCData(oldp+1876,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT__opcode),3);
        bufp->chgCData(oldp+1877,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT__param),3);
        bufp->chgCData(oldp+1878,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT__size),3);
        bufp->chgCData(oldp+1879,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT__source),7);
        bufp->chgIData(oldp+1880,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT__address),31);
        bufp->chgCData(oldp+1881,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT__d_first_counter),3);
        bufp->chgCData(oldp+1882,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT__opcode_1),3);
        bufp->chgCData(oldp+1883,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT__param_1),2);
        bufp->chgCData(oldp+1884,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT__size_1),3);
        bufp->chgCData(oldp+1885,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT__source_1),7);
        bufp->chgBit(oldp+1886,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT__sink));
        bufp->chgBit(oldp+1887,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT__denied));
        bufp->chgWData(oldp+1888,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT__inflight),65);
        bufp->chgWData(oldp+1891,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT__inflight_opcodes),260);
        bufp->chgWData(oldp+1900,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes),260);
        bufp->chgCData(oldp+1909,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT__a_first_counter_1),3);
        bufp->chgBit(oldp+1910,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT__a_first_counter_1))));
        bufp->chgCData(oldp+1911,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_1),3);
        bufp->chgBit(oldp+1912,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_1))));
        bufp->chgIData(oldp+1913,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT__watchdog),32);
        bufp->chgCData(oldp+1914,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_2),3);
        bufp->chgBit(oldp+1915,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_2))));
        bufp->chgWData(oldp+1916,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight),1040);
        bufp->chgWData(oldp+1949,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_opcodes),4160);
        bufp->chgWData(oldp+2079,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_sizes),4160);
        bufp->chgIData(oldp+2209,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__watchdog),32);
        bufp->chgCData(oldp+2210,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__beatsLeft),3);
        bufp->chgBit(oldp+2211,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__beatsLeft))));
        bufp->chgCData(oldp+2212,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__readys_mask),2);
        bufp->chgBit(oldp+2213,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__state_0));
        bufp->chgBit(oldp+2214,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__state_1));
        bufp->chgBit(oldp+2215,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__latch));
        bufp->chgCData(oldp+2216,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__a_first_counter),3);
        bufp->chgCData(oldp+2217,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__opcode),3);
        bufp->chgCData(oldp+2218,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__param),3);
        bufp->chgCData(oldp+2219,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__size),3);
        bufp->chgCData(oldp+2220,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__source),7);
        bufp->chgIData(oldp+2221,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__address),31);
        bufp->chgCData(oldp+2222,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter),3);
        bufp->chgCData(oldp+2223,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__opcode_1),3);
        bufp->chgCData(oldp+2224,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__param_1),2);
        bufp->chgCData(oldp+2225,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__size_1),3);
        bufp->chgCData(oldp+2226,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__source_1),7);
        bufp->chgBit(oldp+2227,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__sink));
        bufp->chgBit(oldp+2228,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__denied));
        bufp->chgWData(oldp+2229,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__inflight),65);
        bufp->chgWData(oldp+2232,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__inflight_opcodes),260);
        bufp->chgWData(oldp+2241,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__inflight_sizes),260);
        bufp->chgCData(oldp+2250,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__a_first_counter_1),3);
        bufp->chgBit(oldp+2251,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__a_first_counter_1))));
        bufp->chgCData(oldp+2252,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter_1),3);
        bufp->chgBit(oldp+2253,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter_1))));
        bufp->chgIData(oldp+2254,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__watchdog),32);
        bufp->chgCData(oldp+2255,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter_2),3);
        bufp->chgBit(oldp+2256,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter_2))));
        bufp->chgBit(oldp+2257,((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT__empty)))));
        bufp->chgCData(oldp+2258,((7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U])),3);
        bufp->chgCData(oldp+2259,((7U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                         >> 3U))),3);
        bufp->chgCData(oldp+2260,((0xfU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                           >> 6U))),4);
        bufp->chgCData(oldp+2261,((3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                         >> 0xaU))),2);
        bufp->chgIData(oldp+2262,(((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[1U] 
                                    << 0x14U) | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                                 >> 0xcU))),32);
        bufp->chgSData(oldp+2263,((0xffffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[1U] 
                                              >> 0xcU))),16);
        __Vtemp_h17e60f1b__0[0U] = ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[2U] 
                                     << 4U) | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[1U] 
                                               >> 0x1cU));
        __Vtemp_h17e60f1b__0[1U] = ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[3U] 
                                     << 4U) | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[2U] 
                                               >> 0x1cU));
        __Vtemp_h17e60f1b__0[2U] = ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[4U] 
                                     << 4U) | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[3U] 
                                               >> 0x1cU));
        __Vtemp_h17e60f1b__0[3U] = ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[5U] 
                                     << 4U) | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[4U] 
                                               >> 0x1cU));
        bufp->chgWData(oldp+2264,(__Vtemp_h17e60f1b__0),128);
        bufp->chgBit(oldp+2268,((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[5U] 
                                       >> 0x1cU))));
        bufp->chgCData(oldp+2269,((0xfU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[0U] 
                                           >> 6U))),4);
        bufp->chgCData(oldp+2270,((3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[0U] 
                                         >> 0xaU))),2);
        bufp->chgBit(oldp+2271,((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_1_d_q__DOT__full)))));
        bufp->chgBit(oldp+2272,((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__x1_a_q__DOT__empty)))));
        bufp->chgCData(oldp+2273,((7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U])),3);
        bufp->chgCData(oldp+2274,((7U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                         >> 3U))),3);
        bufp->chgCData(oldp+2275,((0xfU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                           >> 6U))),4);
        bufp->chgCData(oldp+2276,((0x1fU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                            >> 0xaU))),5);
        bufp->chgIData(oldp+2277,(((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                                    << 0x11U) | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                 >> 0xfU))),32);
        bufp->chgSData(oldp+2278,((0xffffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                                              >> 0xfU))),16);
        __Vtemp_hd5e745fd__0[0U] = ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[2U] 
                                     << 1U) | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                                               >> 0x1fU));
        __Vtemp_hd5e745fd__0[1U] = ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[3U] 
                                     << 1U) | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[2U] 
                                               >> 0x1fU));
        __Vtemp_hd5e745fd__0[2U] = ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[4U] 
                                     << 1U) | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[3U] 
                                               >> 0x1fU));
        __Vtemp_hd5e745fd__0[3U] = ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[5U] 
                                     << 1U) | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[4U] 
                                               >> 0x1fU));
        bufp->chgWData(oldp+2279,(__Vtemp_hd5e745fd__0),128);
        bufp->chgBit(oldp+2283,((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[5U] 
                                 >> 0x1fU)));
        bufp->chgBit(oldp+2284,((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__full)))));
        bufp->chgBit(oldp+2285,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___portsAOI_in_2_a_ready_WIRE));
        bufp->chgBit(oldp+2286,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_22_valid));
        bufp->chgCData(oldp+2287,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_22_bits_opcode),3);
        bufp->chgCData(oldp+2288,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_22_bits_param),2);
        bufp->chgCData(oldp+2289,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_22_bits_size),4);
        bufp->chgCData(oldp+2290,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_2_d_bits_source),2);
        bufp->chgCData(oldp+2291,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_22_bits_sink),4);
        bufp->chgBit(oldp+2292,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_22_bits_denied));
        __Vtemp_hb29d6795__0[0U] = (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_4_0)
                                      ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___coupler_to_bus_named_subsystem_cbus_auto_widget_in_d_bits_data[0U]
                                      : 0U) | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_4_1)
                                                ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_l2_wrapper_auto_coherent_jbar_in_d_bits_data[0U]
                                                : 0U));
        __Vtemp_hb29d6795__0[1U] = (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_4_0)
                                      ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___coupler_to_bus_named_subsystem_cbus_auto_widget_in_d_bits_data[1U]
                                      : 0U) | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_4_1)
                                                ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_l2_wrapper_auto_coherent_jbar_in_d_bits_data[1U]
                                                : 0U));
        __Vtemp_hb29d6795__0[2U] = (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_4_0)
                                      ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___coupler_to_bus_named_subsystem_cbus_auto_widget_in_d_bits_data[2U]
                                      : 0U) | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_4_1)
                                                ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_l2_wrapper_auto_coherent_jbar_in_d_bits_data[2U]
                                                : 0U));
        __Vtemp_hb29d6795__0[3U] = (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_4_0)
                                      ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___coupler_to_bus_named_subsystem_cbus_auto_widget_in_d_bits_data[3U]
                                      : 0U) | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_4_1)
                                                ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_l2_wrapper_auto_coherent_jbar_in_d_bits_data[3U]
                                                : 0U));
        bufp->chgWData(oldp+2293,(__Vtemp_hb29d6795__0),128);
        bufp->chgBit(oldp+2297,((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_4_0) 
                                  & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__bundleIn_0_d_bits_corrupt)) 
                                 | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_4_1) 
                                    & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT___bundleIn_0_d_q_io_deq_bits_corrupt)))));
        bufp->chgBit(oldp+2298,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___portsAOI_in_1_a_ready_WIRE));
        bufp->chgBit(oldp+2299,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_17_valid));
        bufp->chgCData(oldp+2300,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_17_bits_opcode),3);
        bufp->chgCData(oldp+2301,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_17_bits_param),2);
        bufp->chgCData(oldp+2302,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_17_bits_size),4);
        bufp->chgCData(oldp+2303,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_1_d_bits_source),5);
        bufp->chgCData(oldp+2304,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_17_bits_sink),4);
        bufp->chgBit(oldp+2305,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_17_bits_denied));
        __Vtemp_h12654ca7__0[0U] = (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_3_0)
                                      ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___coupler_to_bus_named_subsystem_cbus_auto_widget_in_d_bits_data[0U]
                                      : 0U) | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_3_1)
                                                ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_l2_wrapper_auto_coherent_jbar_in_d_bits_data[0U]
                                                : 0U));
        __Vtemp_h12654ca7__0[1U] = (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_3_0)
                                      ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___coupler_to_bus_named_subsystem_cbus_auto_widget_in_d_bits_data[1U]
                                      : 0U) | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_3_1)
                                                ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_l2_wrapper_auto_coherent_jbar_in_d_bits_data[1U]
                                                : 0U));
        __Vtemp_h12654ca7__0[2U] = (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_3_0)
                                      ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___coupler_to_bus_named_subsystem_cbus_auto_widget_in_d_bits_data[2U]
                                      : 0U) | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_3_1)
                                                ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_l2_wrapper_auto_coherent_jbar_in_d_bits_data[2U]
                                                : 0U));
        __Vtemp_h12654ca7__0[3U] = (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_3_0)
                                      ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___coupler_to_bus_named_subsystem_cbus_auto_widget_in_d_bits_data[3U]
                                      : 0U) | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_3_1)
                                                ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_l2_wrapper_auto_coherent_jbar_in_d_bits_data[3U]
                                                : 0U));
        bufp->chgWData(oldp+2306,(__Vtemp_h12654ca7__0),128);
        bufp->chgBit(oldp+2310,((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_3_0) 
                                  & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__bundleIn_0_d_bits_corrupt)) 
                                 | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_3_1) 
                                    & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT___bundleIn_0_d_q_io_deq_bits_corrupt)))));
        bufp->chgBit(oldp+2311,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___portsAOI_in_0_a_ready_WIRE));
        bufp->chgBit(oldp+2312,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_13_valid));
        bufp->chgCData(oldp+2313,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_13_bits_opcode),3);
        bufp->chgCData(oldp+2314,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_13_bits_param),2);
        bufp->chgCData(oldp+2315,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_13_bits_size),4);
        bufp->chgCData(oldp+2316,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_13_bits_sink),4);
        bufp->chgBit(oldp+2317,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_13_bits_denied));
        bufp->chgWData(oldp+2318,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_in_0_d_bits_data),128);
        bufp->chgBit(oldp+2322,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_13_bits_corrupt));
        bufp->chgBit(oldp+2323,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___coupler_from_bus_named_subsystem_fbus_auto_widget_out_a_valid));
        bufp->chgSData(oldp+2324,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___coupler_from_bus_named_subsystem_fbus_auto_widget_out_a_bits_mask),16);
        bufp->chgWData(oldp+2325,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___coupler_from_bus_named_subsystem_fbus_auto_widget_out_a_bits_data),128);
        bufp->chgBit(oldp+2329,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__x1_a_bits_corrupt));
        bufp->chgBit(oldp+2330,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__repeated_repeater__DOT___io_enq_ready_output));
        bufp->chgBit(oldp+2331,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__count));
        bufp->chgBit(oldp+2332,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__last));
        bufp->chgBit(oldp+2333,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__corrupt_reg));
        bufp->chgBit(oldp+2334,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__x1_a_bits_data_rdata_written_once));
        bufp->chgBit(oldp+2335,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__x1_a_bits_data_masked_enable_0));
        bufp->chgQData(oldp+2336,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__x1_a_bits_data_rdata_0),64);
        bufp->chgBit(oldp+2338,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__x1_a_bits_mask_acc));
        bufp->chgBit(oldp+2339,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__x1_a_bits_mask_acc_1));
        bufp->chgBit(oldp+2340,((2U == (3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                              >> 6U)))));
        bufp->chgBit(oldp+2341,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__x1_a_bits_mask_eq_2));
        bufp->chgBit(oldp+2342,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__x1_a_bits_mask_acc_2));
        bufp->chgBit(oldp+2343,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__x1_a_bits_mask_eq_3));
        bufp->chgBit(oldp+2344,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__x1_a_bits_mask_acc_3));
        bufp->chgBit(oldp+2345,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__x1_a_bits_mask_eq_4));
        bufp->chgBit(oldp+2346,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__x1_a_bits_mask_acc_4));
        bufp->chgBit(oldp+2347,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__x1_a_bits_mask_eq_5));
        bufp->chgBit(oldp+2348,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__x1_a_bits_mask_acc_5));
        bufp->chgBit(oldp+2349,((1U == (3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                              >> 6U)))));
        bufp->chgBit(oldp+2350,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__x1_a_bits_mask_eq_6));
        bufp->chgBit(oldp+2351,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__x1_a_bits_mask_acc_6));
        bufp->chgBit(oldp+2352,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__x1_a_bits_mask_eq_7));
        bufp->chgBit(oldp+2353,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__x1_a_bits_mask_acc_7));
        bufp->chgBit(oldp+2354,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__x1_a_bits_mask_eq_8));
        bufp->chgBit(oldp+2355,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__x1_a_bits_mask_acc_8));
        bufp->chgBit(oldp+2356,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__x1_a_bits_mask_eq_9));
        bufp->chgBit(oldp+2357,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__x1_a_bits_mask_acc_9));
        bufp->chgBit(oldp+2358,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__x1_a_bits_mask_eq_10));
        bufp->chgBit(oldp+2359,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__x1_a_bits_mask_acc_10));
        bufp->chgBit(oldp+2360,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__x1_a_bits_mask_eq_11));
        bufp->chgBit(oldp+2361,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__x1_a_bits_mask_acc_11));
        bufp->chgBit(oldp+2362,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__x1_a_bits_mask_eq_12));
        bufp->chgBit(oldp+2363,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__x1_a_bits_mask_acc_12));
        bufp->chgBit(oldp+2364,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__x1_a_bits_mask_eq_13));
        bufp->chgBit(oldp+2365,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__x1_a_bits_mask_acc_13));
        bufp->chgBit(oldp+2366,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__x1_a_bits_mask_rdata_written_once));
        bufp->chgBit(oldp+2367,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__x1_a_bits_mask_masked_enable_0));
        bufp->chgCData(oldp+2368,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__x1_a_bits_mask_rdata_0),8);
        bufp->chgBit(oldp+2369,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__repeat_count));
        bufp->chgBit(oldp+2370,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__repeat_last));
        bufp->chgBit(oldp+2371,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__repeat_sel_sel_sources_0));
        bufp->chgBit(oldp+2372,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__repeat_sel_hold_r));
        bufp->chgSData(oldp+2373,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__monitor__DOT__a_first_counter),9);
        bufp->chgCData(oldp+2374,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__monitor__DOT__opcode),3);
        bufp->chgCData(oldp+2375,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__monitor__DOT__param),3);
        bufp->chgCData(oldp+2376,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__monitor__DOT__size),4);
        bufp->chgBit(oldp+2377,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__monitor__DOT__source));
        bufp->chgIData(oldp+2378,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__monitor__DOT__address),32);
        bufp->chgSData(oldp+2379,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__monitor__DOT__d_first_counter),9);
        bufp->chgCData(oldp+2380,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__monitor__DOT__opcode_1),3);
        bufp->chgCData(oldp+2381,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__monitor__DOT__param_1),2);
        bufp->chgCData(oldp+2382,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__monitor__DOT__size_1),4);
        bufp->chgBit(oldp+2383,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__monitor__DOT__source_1));
        bufp->chgCData(oldp+2384,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__monitor__DOT__sink),4);
        bufp->chgBit(oldp+2385,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__monitor__DOT__denied));
        bufp->chgBit(oldp+2386,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__monitor__DOT__inflight));
        bufp->chgCData(oldp+2387,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__monitor__DOT__inflight_opcodes),4);
        bufp->chgCData(oldp+2388,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__monitor__DOT__inflight_sizes),8);
        bufp->chgSData(oldp+2389,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__monitor__DOT__a_first_counter_1),9);
        bufp->chgBit(oldp+2390,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__monitor__DOT__a_first_counter_1))));
        bufp->chgSData(oldp+2391,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__monitor__DOT__d_first_counter_1),9);
        bufp->chgBit(oldp+2392,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__monitor__DOT__d_first_counter_1))));
        bufp->chgBit(oldp+2393,((6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT___repeated_repeater_io_deq_bits_opcode))));
        bufp->chgIData(oldp+2394,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__monitor__DOT__watchdog),32);
        bufp->chgSData(oldp+2395,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__monitor__DOT__d_first_counter_2),9);
        bufp->chgBit(oldp+2396,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__monitor__DOT__d_first_counter_2))));
        bufp->chgBit(oldp+2397,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__monitor__DOT__mask_acc));
        bufp->chgBit(oldp+2398,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__monitor__DOT__mask_acc_1));
        bufp->chgBit(oldp+2399,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__monitor__DOT__mask_eq_2));
        bufp->chgBit(oldp+2400,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__monitor__DOT__mask_acc_2));
        bufp->chgBit(oldp+2401,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__monitor__DOT__mask_eq_3));
        bufp->chgBit(oldp+2402,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__monitor__DOT__mask_acc_3));
        bufp->chgBit(oldp+2403,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__monitor__DOT__mask_eq_4));
        bufp->chgBit(oldp+2404,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__monitor__DOT__mask_acc_4));
        bufp->chgBit(oldp+2405,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__monitor__DOT__mask_eq_5));
        bufp->chgBit(oldp+2406,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__monitor__DOT__mask_acc_5));
        bufp->chgCData(oldp+2407,(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__monitor__DOT__mask_acc_5) 
                                     << 7U) | (0xfffff80U 
                                               & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__monitor__DOT__mask_eq_5) 
                                                   << 7U) 
                                                  & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                     >> 4U)))) 
                                   | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__monitor__DOT__mask_acc_5) 
                                        | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__monitor__DOT__mask_eq_5) 
                                           & (~ (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                 >> 0xbU)))) 
                                       << 6U) | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__monitor__DOT__mask_acc_4) 
                                                   << 5U) 
                                                  | (0x3ffffe0U 
                                                     & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__monitor__DOT__mask_eq_4) 
                                                         << 5U) 
                                                        & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                           >> 6U)))) 
                                                 | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__monitor__DOT__mask_acc_4) 
                                                      | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__monitor__DOT__mask_eq_4) 
                                                         & (~ 
                                                            (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                             >> 0xbU)))) 
                                                     << 4U) 
                                                    | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__monitor__DOT__mask_acc_3) 
                                                         << 3U) 
                                                        | (0xfffff8U 
                                                           & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__monitor__DOT__mask_eq_3) 
                                                               << 3U) 
                                                              & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                 >> 8U)))) 
                                                       | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__monitor__DOT__mask_acc_3) 
                                                            | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__monitor__DOT__mask_eq_3) 
                                                               & (~ 
                                                                  (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                   >> 0xbU)))) 
                                                           << 2U) 
                                                          | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__monitor__DOT__mask_acc_2) 
                                                               << 1U) 
                                                              | (0x3ffffeU 
                                                                 & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__monitor__DOT__mask_eq_2) 
                                                                     << 1U) 
                                                                    & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                       >> 0xaU)))) 
                                                             | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__monitor__DOT__mask_acc_2) 
                                                                | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__monitor__DOT__mask_eq_2) 
                                                                   & (~ 
                                                                      (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                       >> 0xbU)))))))))))),8);
        bufp->chgBit(oldp+2408,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__monitor__DOT___same_cycle_resp_T_1) 
                                 & (~ (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                       >> 0xaU)))));
        bufp->chgBit(oldp+2409,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__monitor__DOT__same_cycle_resp));
        bufp->chgBit(oldp+2410,((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__repeat_last)))));
        if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__repeated_repeater__DOT__full) {
            __Vtemp_hee5a28af__0[0U] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__repeated_repeater__DOT__saved_data[0U];
            __Vtemp_hee5a28af__0[1U] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__repeated_repeater__DOT__saved_data[1U];
            __Vtemp_hee5a28af__0[2U] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__repeated_repeater__DOT__saved_data[2U];
            __Vtemp_hee5a28af__0[3U] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__repeated_repeater__DOT__saved_data[3U];
        } else {
            __Vtemp_hee5a28af__0[0U] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_in_0_d_bits_data[0U];
            __Vtemp_hee5a28af__0[1U] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_in_0_d_bits_data[1U];
            __Vtemp_hee5a28af__0[2U] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_in_0_d_bits_data[2U];
            __Vtemp_hee5a28af__0[3U] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_in_0_d_bits_data[3U];
        }
        bufp->chgWData(oldp+2411,(__Vtemp_hee5a28af__0),128);
        bufp->chgBit(oldp+2415,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__repeated_repeater__DOT__full));
        bufp->chgCData(oldp+2416,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__repeated_repeater__DOT__saved_opcode),3);
        bufp->chgCData(oldp+2417,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__repeated_repeater__DOT__saved_param),2);
        bufp->chgCData(oldp+2418,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__repeated_repeater__DOT__saved_size),4);
        bufp->chgBit(oldp+2419,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__repeated_repeater__DOT__saved_source));
        bufp->chgCData(oldp+2420,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__repeated_repeater__DOT__saved_sink),4);
        bufp->chgBit(oldp+2421,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__repeated_repeater__DOT__saved_denied));
        bufp->chgWData(oldp+2422,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__repeated_repeater__DOT__saved_data),128);
        bufp->chgBit(oldp+2426,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__repeated_repeater__DOT__saved_corrupt));
        bufp->chgBit(oldp+2427,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__x1_out_1_valid));
        bufp->chgCData(oldp+2428,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_opcode),3);
        bufp->chgCData(oldp+2429,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_param),3);
        bufp->chgCData(oldp+2430,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_size),4);
        bufp->chgCData(oldp+2431,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_source),6);
        bufp->chgIData(oldp+2432,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_address),31);
        bufp->chgSData(oldp+2433,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_mask),16);
        bufp->chgWData(oldp+2434,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_data),128);
        bufp->chgBit(oldp+2438,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_corrupt));
        bufp->chgBit(oldp+2439,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_d_ready));
        bufp->chgBit(oldp+2440,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__repeated_repeater__DOT___io_enq_ready_output));
        bufp->chgBit(oldp+2441,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__bundleIn_0_d_valid));
        bufp->chgWData(oldp+2442,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___coupler_to_bus_named_subsystem_cbus_auto_widget_in_d_bits_data),128);
        bufp->chgBit(oldp+2446,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__bundleIn_0_d_bits_corrupt));
        bufp->chgBit(oldp+2447,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__repeat_count));
        bufp->chgBit(oldp+2448,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__repeat_last));
        bufp->chgBit(oldp+2449,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__repeat_index));
        bufp->chgBit(oldp+2450,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__count));
        bufp->chgBit(oldp+2451,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__last));
        bufp->chgBit(oldp+2452,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__corrupt_reg));
        bufp->chgBit(oldp+2453,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__bundleIn_0_d_bits_data_rdata_written_once));
        bufp->chgBit(oldp+2454,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__bundleIn_0_d_bits_data_masked_enable_0));
        bufp->chgQData(oldp+2455,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__bundleIn_0_d_bits_data_rdata_0),64);
        bufp->chgCData(oldp+2457,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__a_first_counter),8);
        bufp->chgCData(oldp+2458,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__opcode),3);
        bufp->chgCData(oldp+2459,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__param),3);
        bufp->chgCData(oldp+2460,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__size),4);
        bufp->chgCData(oldp+2461,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__source),6);
        bufp->chgIData(oldp+2462,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__address),31);
        bufp->chgCData(oldp+2463,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__d_first_counter),8);
        bufp->chgCData(oldp+2464,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__opcode_1),3);
        bufp->chgCData(oldp+2465,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__param_1),2);
        bufp->chgCData(oldp+2466,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__size_1),4);
        bufp->chgCData(oldp+2467,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__source_1),6);
        bufp->chgBit(oldp+2468,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__sink));
        bufp->chgBit(oldp+2469,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__denied));
        bufp->chgQData(oldp+2470,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__inflight),37);
        bufp->chgWData(oldp+2472,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__inflight_opcodes),148);
        bufp->chgWData(oldp+2477,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__inflight_sizes),296);
        bufp->chgCData(oldp+2487,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__a_first_counter_1),8);
        bufp->chgBit(oldp+2488,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__a_first_counter_1))));
        bufp->chgCData(oldp+2489,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__d_first_counter_1),8);
        bufp->chgBit(oldp+2490,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__d_first_counter_1))));
        bufp->chgIData(oldp+2491,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__watchdog),32);
        bufp->chgCData(oldp+2492,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__d_first_counter_2),8);
        bufp->chgBit(oldp+2493,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__d_first_counter_2))));
        bufp->chgBit(oldp+2494,((1U & ((((((0x24U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_source)) 
                                           | (1U == 
                                              (3U & 
                                               ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_source) 
                                                >> 4U)))) 
                                          | (~ (IData)(
                                                       (0U 
                                                        != 
                                                        (3U 
                                                         & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_source) 
                                                            >> 4U)))))) 
                                         | (0x20U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_source))) 
                                        | (0x21U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_source))) 
                                       | (0x22U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_source))))));
        bufp->chgBit(oldp+2495,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__mask_acc));
        bufp->chgBit(oldp+2496,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__mask_acc_1));
        bufp->chgBit(oldp+2497,((2U == (3U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_size)))));
        bufp->chgBit(oldp+2498,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__mask_eq_2));
        bufp->chgBit(oldp+2499,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__mask_acc_2));
        bufp->chgBit(oldp+2500,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__mask_eq_3));
        bufp->chgBit(oldp+2501,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__mask_acc_3));
        bufp->chgBit(oldp+2502,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__mask_eq_4));
        bufp->chgBit(oldp+2503,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__mask_acc_4));
        bufp->chgBit(oldp+2504,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__mask_eq_5));
        bufp->chgBit(oldp+2505,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__mask_acc_5));
        bufp->chgBit(oldp+2506,((1U == (3U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_size)))));
        bufp->chgBit(oldp+2507,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__mask_eq_6));
        bufp->chgBit(oldp+2508,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__mask_acc_6));
        bufp->chgBit(oldp+2509,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__mask_eq_7));
        bufp->chgBit(oldp+2510,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__mask_acc_7));
        bufp->chgBit(oldp+2511,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__mask_eq_8));
        bufp->chgBit(oldp+2512,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__mask_acc_8));
        bufp->chgBit(oldp+2513,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__mask_eq_9));
        bufp->chgBit(oldp+2514,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__mask_acc_9));
        bufp->chgBit(oldp+2515,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__mask_eq_10));
        bufp->chgBit(oldp+2516,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__mask_acc_10));
        bufp->chgBit(oldp+2517,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__mask_eq_11));
        bufp->chgBit(oldp+2518,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__mask_acc_11));
        bufp->chgBit(oldp+2519,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__mask_eq_12));
        bufp->chgBit(oldp+2520,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__mask_acc_12));
        bufp->chgBit(oldp+2521,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__mask_eq_13));
        bufp->chgBit(oldp+2522,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__mask_acc_13));
        bufp->chgSData(oldp+2523,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__mask),16);
        bufp->chgQData(oldp+2524,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT___same_cycle_resp_T_1)
                                    ? (0x1fffffffffULL 
                                       & VL_SHIFTL_QQQ(37,64,64, 1ULL, (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_source))))
                                    : 0ULL)),37);
        bufp->chgBit(oldp+2526,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__same_cycle_resp));
        bufp->chgBit(oldp+2527,((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__repeat_last)))));
        bufp->chgSData(oldp+2528,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT___repeated_repeater_io_deq_bits_mask),16);
        if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__repeated_repeater__DOT__full) {
            __Vtemp_ha8797595__0[0U] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__repeated_repeater__DOT__saved_data[0U];
            __Vtemp_ha8797595__0[1U] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__repeated_repeater__DOT__saved_data[1U];
            __Vtemp_ha8797595__0[2U] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__repeated_repeater__DOT__saved_data[2U];
            __Vtemp_ha8797595__0[3U] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__repeated_repeater__DOT__saved_data[3U];
        } else {
            __Vtemp_ha8797595__0[0U] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_data[0U];
            __Vtemp_ha8797595__0[1U] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_data[1U];
            __Vtemp_ha8797595__0[2U] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_data[2U];
            __Vtemp_ha8797595__0[3U] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_data[3U];
        }
        bufp->chgWData(oldp+2529,(__Vtemp_ha8797595__0),128);
        bufp->chgBit(oldp+2533,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__repeated_repeater__DOT__full));
        bufp->chgCData(oldp+2534,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__repeated_repeater__DOT__saved_opcode),3);
        bufp->chgCData(oldp+2535,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__repeated_repeater__DOT__saved_param),3);
        bufp->chgCData(oldp+2536,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__repeated_repeater__DOT__saved_size),4);
        bufp->chgCData(oldp+2537,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__repeated_repeater__DOT__saved_source),6);
        bufp->chgIData(oldp+2538,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__repeated_repeater__DOT__saved_address),31);
        bufp->chgSData(oldp+2539,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__repeated_repeater__DOT__saved_mask),16);
        bufp->chgWData(oldp+2540,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__repeated_repeater__DOT__saved_data),128);
        bufp->chgBit(oldp+2544,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__repeated_repeater__DOT__saved_corrupt));
        bufp->chgCData(oldp+2545,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor__DOT__a_first_counter),8);
        bufp->chgCData(oldp+2546,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor__DOT__opcode),3);
        bufp->chgCData(oldp+2547,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor__DOT__param),3);
        bufp->chgCData(oldp+2548,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor__DOT__size),4);
        bufp->chgBit(oldp+2549,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor__DOT__source));
        bufp->chgIData(oldp+2550,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor__DOT__address),32);
        bufp->chgCData(oldp+2551,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor__DOT__d_first_counter),8);
        bufp->chgCData(oldp+2552,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor__DOT__opcode_1),3);
        bufp->chgCData(oldp+2553,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor__DOT__param_1),2);
        bufp->chgCData(oldp+2554,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor__DOT__size_1),4);
        bufp->chgBit(oldp+2555,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor__DOT__source_1));
        bufp->chgCData(oldp+2556,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor__DOT__sink),4);
        bufp->chgBit(oldp+2557,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor__DOT__denied));
        bufp->chgBit(oldp+2558,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor__DOT__inflight));
        bufp->chgCData(oldp+2559,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor__DOT__inflight_opcodes),4);
        bufp->chgCData(oldp+2560,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes),8);
        bufp->chgCData(oldp+2561,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor__DOT__a_first_counter_1),8);
        bufp->chgBit(oldp+2562,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor__DOT__a_first_counter_1))));
        bufp->chgCData(oldp+2563,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_1),8);
        bufp->chgBit(oldp+2564,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_1))));
        bufp->chgBit(oldp+2565,((6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_13_bits_opcode))));
        bufp->chgIData(oldp+2566,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor__DOT__watchdog),32);
        bufp->chgCData(oldp+2567,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_2),8);
        bufp->chgBit(oldp+2568,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_2))));
        bufp->chgBit(oldp+2569,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor__DOT__d_clr));
        bufp->chgBit(oldp+2570,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor__DOT__mask_acc));
        bufp->chgBit(oldp+2571,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor__DOT__mask_acc_1));
        bufp->chgBit(oldp+2572,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor__DOT__mask_eq_2));
        bufp->chgBit(oldp+2573,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor__DOT__mask_acc_2));
        bufp->chgBit(oldp+2574,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor__DOT__mask_eq_3));
        bufp->chgBit(oldp+2575,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor__DOT__mask_acc_3));
        bufp->chgBit(oldp+2576,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor__DOT__mask_eq_4));
        bufp->chgBit(oldp+2577,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor__DOT__mask_acc_4));
        bufp->chgBit(oldp+2578,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor__DOT__mask_eq_5));
        bufp->chgBit(oldp+2579,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor__DOT__mask_acc_5));
        bufp->chgBit(oldp+2580,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor__DOT__mask_eq_6));
        bufp->chgBit(oldp+2581,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor__DOT__mask_acc_6));
        bufp->chgBit(oldp+2582,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor__DOT__mask_eq_7));
        bufp->chgBit(oldp+2583,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor__DOT__mask_acc_7));
        bufp->chgBit(oldp+2584,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor__DOT__mask_eq_8));
        bufp->chgBit(oldp+2585,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor__DOT__mask_acc_8));
        bufp->chgBit(oldp+2586,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor__DOT__mask_eq_9));
        bufp->chgBit(oldp+2587,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor__DOT__mask_acc_9));
        bufp->chgBit(oldp+2588,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor__DOT__mask_eq_10));
        bufp->chgBit(oldp+2589,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor__DOT__mask_acc_10));
        bufp->chgBit(oldp+2590,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor__DOT__mask_eq_11));
        bufp->chgBit(oldp+2591,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor__DOT__mask_acc_11));
        bufp->chgBit(oldp+2592,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor__DOT__mask_eq_12));
        bufp->chgBit(oldp+2593,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor__DOT__mask_acc_12));
        bufp->chgBit(oldp+2594,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor__DOT__mask_eq_13));
        bufp->chgBit(oldp+2595,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor__DOT__mask_acc_13));
        bufp->chgSData(oldp+2596,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor__DOT__mask),16);
        bufp->chgBit(oldp+2597,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor__DOT___same_cycle_resp_T_1) 
                                 & (~ (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                       >> 0xaU)))));
        bufp->chgBit(oldp+2598,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor__DOT__same_cycle_resp));
        bufp->chgCData(oldp+2599,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_1__DOT__a_first_counter),8);
        bufp->chgCData(oldp+2600,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_1__DOT__opcode),3);
        bufp->chgCData(oldp+2601,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_1__DOT__param),3);
        bufp->chgCData(oldp+2602,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_1__DOT__size),4);
        bufp->chgCData(oldp+2603,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_1__DOT__source),5);
        bufp->chgIData(oldp+2604,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_1__DOT__address),32);
        bufp->chgCData(oldp+2605,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_1__DOT__d_first_counter),8);
        bufp->chgCData(oldp+2606,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_1__DOT__opcode_1),3);
        bufp->chgCData(oldp+2607,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_1__DOT__param_1),2);
        bufp->chgCData(oldp+2608,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_1__DOT__size_1),4);
        bufp->chgCData(oldp+2609,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_1__DOT__source_1),5);
        bufp->chgCData(oldp+2610,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_1__DOT__sink),4);
        bufp->chgBit(oldp+2611,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_1__DOT__denied));
        bufp->chgIData(oldp+2612,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_1__DOT__inflight),32);
        bufp->chgWData(oldp+2613,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_1__DOT__inflight_opcodes),128);
        bufp->chgWData(oldp+2617,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_1__DOT__inflight_sizes),256);
        bufp->chgCData(oldp+2625,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_1__DOT__a_first_counter_1),8);
        bufp->chgBit(oldp+2626,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_1__DOT__a_first_counter_1))));
        bufp->chgCData(oldp+2627,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_1__DOT__d_first_counter_1),8);
        bufp->chgBit(oldp+2628,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_1__DOT__d_first_counter_1))));
        bufp->chgBit(oldp+2629,((6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_17_bits_opcode))));
        bufp->chgIData(oldp+2630,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_1__DOT__watchdog),32);
        bufp->chgCData(oldp+2631,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_1__DOT__d_first_counter_2),8);
        bufp->chgBit(oldp+2632,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_1__DOT__d_first_counter_2))));
        bufp->chgBit(oldp+2633,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_1__DOT__mask_acc));
        bufp->chgBit(oldp+2634,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_1__DOT__mask_acc_1));
        bufp->chgBit(oldp+2635,((2U == (3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                              >> 6U)))));
        bufp->chgBit(oldp+2636,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_1__DOT__mask_eq_2));
        bufp->chgBit(oldp+2637,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_1__DOT__mask_acc_2));
        bufp->chgBit(oldp+2638,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_1__DOT__mask_eq_3));
        bufp->chgBit(oldp+2639,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_1__DOT__mask_acc_3));
        bufp->chgBit(oldp+2640,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_1__DOT__mask_eq_4));
        bufp->chgBit(oldp+2641,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_1__DOT__mask_acc_4));
        bufp->chgBit(oldp+2642,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_1__DOT__mask_eq_5));
        bufp->chgBit(oldp+2643,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_1__DOT__mask_acc_5));
        bufp->chgBit(oldp+2644,((1U == (3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                              >> 6U)))));
        bufp->chgBit(oldp+2645,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_1__DOT__mask_eq_6));
        bufp->chgBit(oldp+2646,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_1__DOT__mask_acc_6));
        bufp->chgBit(oldp+2647,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_1__DOT__mask_eq_7));
        bufp->chgBit(oldp+2648,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_1__DOT__mask_acc_7));
        bufp->chgBit(oldp+2649,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_1__DOT__mask_eq_8));
        bufp->chgBit(oldp+2650,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_1__DOT__mask_acc_8));
        bufp->chgBit(oldp+2651,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_1__DOT__mask_eq_9));
        bufp->chgBit(oldp+2652,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_1__DOT__mask_acc_9));
        bufp->chgBit(oldp+2653,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_1__DOT__mask_eq_10));
        bufp->chgBit(oldp+2654,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_1__DOT__mask_acc_10));
        bufp->chgBit(oldp+2655,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_1__DOT__mask_eq_11));
        bufp->chgBit(oldp+2656,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_1__DOT__mask_acc_11));
        bufp->chgBit(oldp+2657,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_1__DOT__mask_eq_12));
        bufp->chgBit(oldp+2658,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_1__DOT__mask_acc_12));
        bufp->chgBit(oldp+2659,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_1__DOT__mask_eq_13));
        bufp->chgBit(oldp+2660,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_1__DOT__mask_acc_13));
        bufp->chgSData(oldp+2661,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_1__DOT__mask),16);
        bufp->chgIData(oldp+2662,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_1__DOT___same_cycle_resp_T_1)
                                    ? ((0x1fU >= (0x1fU 
                                                  & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                     >> 0xaU)))
                                        ? ((IData)(1U) 
                                           << (0x1fU 
                                               & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                  >> 0xaU)))
                                        : 0U) : 0U)),32);
        bufp->chgBit(oldp+2663,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_1__DOT__same_cycle_resp));
        bufp->chgCData(oldp+2664,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_2__DOT__a_first_counter),8);
        bufp->chgCData(oldp+2665,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_2__DOT__opcode),3);
        bufp->chgCData(oldp+2666,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_2__DOT__param),3);
        bufp->chgCData(oldp+2667,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_2__DOT__size),4);
        bufp->chgCData(oldp+2668,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_2__DOT__source),2);
        bufp->chgIData(oldp+2669,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_2__DOT__address),32);
        bufp->chgCData(oldp+2670,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_2__DOT__d_first_counter),8);
        bufp->chgCData(oldp+2671,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_2__DOT__opcode_1),3);
        bufp->chgCData(oldp+2672,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_2__DOT__param_1),2);
        bufp->chgCData(oldp+2673,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_2__DOT__size_1),4);
        bufp->chgCData(oldp+2674,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_2__DOT__source_1),2);
        bufp->chgCData(oldp+2675,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_2__DOT__sink),4);
        bufp->chgBit(oldp+2676,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_2__DOT__denied));
        bufp->chgCData(oldp+2677,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_2__DOT__c_first_counter),8);
        bufp->chgCData(oldp+2678,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_2__DOT__opcode_3),3);
        bufp->chgCData(oldp+2679,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_2__DOT__param_3),3);
        bufp->chgCData(oldp+2680,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_2__DOT__size_3),4);
        bufp->chgCData(oldp+2681,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_2__DOT__source_3),2);
        bufp->chgIData(oldp+2682,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_2__DOT__address_2),32);
        bufp->chgCData(oldp+2683,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_2__DOT__inflight),3);
        bufp->chgSData(oldp+2684,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_2__DOT__inflight_opcodes),12);
        bufp->chgIData(oldp+2685,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_2__DOT__inflight_sizes),24);
        bufp->chgCData(oldp+2686,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_2__DOT__a_first_counter_1),8);
        bufp->chgBit(oldp+2687,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_2__DOT__a_first_counter_1))));
        bufp->chgCData(oldp+2688,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_2__DOT__d_first_counter_1),8);
        bufp->chgBit(oldp+2689,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_2__DOT__d_first_counter_1))));
        bufp->chgBit(oldp+2690,((6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_22_bits_opcode))));
        bufp->chgIData(oldp+2691,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_2__DOT__watchdog),32);
        bufp->chgCData(oldp+2692,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_2__DOT__inflight_1),3);
        bufp->chgIData(oldp+2693,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_2__DOT__inflight_sizes_1),24);
        bufp->chgCData(oldp+2694,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_2__DOT__c_first_counter_1),8);
        bufp->chgBit(oldp+2695,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_2__DOT__c_first_counter_1))));
        bufp->chgCData(oldp+2696,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_2__DOT__d_first_counter_2),8);
        bufp->chgBit(oldp+2697,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_2__DOT__d_first_counter_2))));
        bufp->chgIData(oldp+2698,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_2__DOT__watchdog_1),32);
        bufp->chgSData(oldp+2699,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_2__DOT__inflight_2),16);
        bufp->chgCData(oldp+2700,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_2__DOT__d_first_counter_3),8);
        bufp->chgBit(oldp+2701,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_2__DOT__d_first_counter_3))));
        bufp->chgSData(oldp+2702,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_2__DOT__d_set),16);
        bufp->chgBit(oldp+2703,((((0U == (3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                                >> 0xaU))) 
                                  | (1U == (3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                                  >> 0xaU)))) 
                                 | (2U == (3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                                 >> 0xaU))))));
        bufp->chgBit(oldp+2704,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_2__DOT__mask_acc));
        bufp->chgBit(oldp+2705,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_2__DOT__mask_acc_1));
        bufp->chgBit(oldp+2706,((2U == (3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                              >> 6U)))));
        bufp->chgBit(oldp+2707,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_2__DOT__mask_eq_2));
        bufp->chgBit(oldp+2708,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_2__DOT__mask_acc_2));
        bufp->chgBit(oldp+2709,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_2__DOT__mask_eq_3));
        bufp->chgBit(oldp+2710,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_2__DOT__mask_acc_3));
        bufp->chgBit(oldp+2711,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_2__DOT__mask_eq_4));
        bufp->chgBit(oldp+2712,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_2__DOT__mask_acc_4));
        bufp->chgBit(oldp+2713,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_2__DOT__mask_eq_5));
        bufp->chgBit(oldp+2714,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_2__DOT__mask_acc_5));
        bufp->chgBit(oldp+2715,((1U == (3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                              >> 6U)))));
        bufp->chgBit(oldp+2716,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_2__DOT__mask_eq_6));
        bufp->chgBit(oldp+2717,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_2__DOT__mask_acc_6));
        bufp->chgBit(oldp+2718,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_2__DOT__mask_eq_7));
        bufp->chgBit(oldp+2719,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_2__DOT__mask_acc_7));
        bufp->chgBit(oldp+2720,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_2__DOT__mask_eq_8));
        bufp->chgBit(oldp+2721,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_2__DOT__mask_acc_8));
        bufp->chgBit(oldp+2722,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_2__DOT__mask_eq_9));
        bufp->chgBit(oldp+2723,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_2__DOT__mask_acc_9));
        bufp->chgBit(oldp+2724,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_2__DOT__mask_eq_10));
        bufp->chgBit(oldp+2725,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_2__DOT__mask_acc_10));
        bufp->chgBit(oldp+2726,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_2__DOT__mask_eq_11));
        bufp->chgBit(oldp+2727,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_2__DOT__mask_acc_11));
        bufp->chgBit(oldp+2728,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_2__DOT__mask_eq_12));
        bufp->chgBit(oldp+2729,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_2__DOT__mask_acc_12));
        bufp->chgBit(oldp+2730,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_2__DOT__mask_eq_13));
        bufp->chgBit(oldp+2731,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_2__DOT__mask_acc_13));
        bufp->chgSData(oldp+2732,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_2__DOT__mask),16);
        bufp->chgBit(oldp+2733,((((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_2_d_bits_source)) 
                                  | (1U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_2_d_bits_source))) 
                                 | (2U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_2_d_bits_source)))));
        bufp->chgBit(oldp+2734,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_2__DOT__mask_eq_32));
        bufp->chgBit(oldp+2735,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_2__DOT__mask_eq_33));
        bufp->chgBit(oldp+2736,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_2__DOT__mask_eq_34));
        bufp->chgBit(oldp+2737,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_2__DOT__mask_eq_35));
        bufp->chgBit(oldp+2738,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_2__DOT__mask_eq_32) 
                                 & (~ (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__bundleIn_0_b_bits_address 
                                       >> 1U)))));
        bufp->chgBit(oldp+2739,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_2__DOT__mask_eq_32) 
                                 & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__bundleIn_0_b_bits_address 
                                    >> 1U))));
        bufp->chgBit(oldp+2740,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_2__DOT__mask_eq_33) 
                                 & (~ (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__bundleIn_0_b_bits_address 
                                       >> 1U)))));
        bufp->chgBit(oldp+2741,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_2__DOT__mask_eq_33) 
                                 & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__bundleIn_0_b_bits_address 
                                    >> 1U))));
        bufp->chgBit(oldp+2742,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_2__DOT__mask_eq_34) 
                                 & (~ (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__bundleIn_0_b_bits_address 
                                       >> 1U)))));
        bufp->chgBit(oldp+2743,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_2__DOT__mask_eq_34) 
                                 & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__bundleIn_0_b_bits_address 
                                    >> 1U))));
        bufp->chgBit(oldp+2744,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_2__DOT__mask_eq_35) 
                                 & (~ (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__bundleIn_0_b_bits_address 
                                       >> 1U)))));
        bufp->chgBit(oldp+2745,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_2__DOT__mask_eq_35) 
                                 & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__bundleIn_0_b_bits_address 
                                    >> 1U))));
        bufp->chgBit(oldp+2746,((((0U == (3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[0U] 
                                                >> 0xaU))) 
                                  | (1U == (3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[0U] 
                                                  >> 0xaU)))) 
                                 | (2U == (3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[0U] 
                                                 >> 0xaU))))));
        bufp->chgBit(oldp+2747,((((((((((((((3U == 
                                             (0xfffffU 
                                              & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[1U] 
                                                  << 8U) 
                                                 | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[0U] 
                                                    >> 0x18U)))) 
                                            | (0x2010U 
                                               == (0xfffffU 
                                                   & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[1U] 
                                                       << 8U) 
                                                      | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[0U] 
                                                         >> 0x18U))))) 
                                           | (4U == 
                                              (0xfffffU 
                                               & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[1U] 
                                                   << 8U) 
                                                  | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[0U] 
                                                     >> 0x18U))))) 
                                          | (0x54000U 
                                             == (0xfffffU 
                                                 & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[1U] 
                                                     << 8U) 
                                                    | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[0U] 
                                                       >> 0x18U))))) 
                                         | (3U == (0x3fU 
                                                   & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[1U] 
                                                      >> 6U)))) 
                                        | (0x200U == 
                                           (0xffffU 
                                            & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[1U] 
                                                << 4U) 
                                               | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[0U] 
                                                  >> 0x1cU))))) 
                                       | (0U == (0xfffffU 
                                                 & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[1U] 
                                                     << 8U) 
                                                    | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[0U] 
                                                       >> 0x18U))))) 
                                      | (1U == (0xffffU 
                                                & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[1U] 
                                                    << 4U) 
                                                   | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[0U] 
                                                      >> 0x1cU))))) 
                                     | (0x100U == (0xfffffU 
                                                   & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[1U] 
                                                       << 8U) 
                                                      | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[0U] 
                                                         >> 0x18U))))) 
                                    | (0x110U == (0xfffffU 
                                                  & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[1U] 
                                                      << 8U) 
                                                     | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[0U] 
                                                        >> 0x18U))))) 
                                   | (8U == (0xfU & 
                                             (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[1U] 
                                              >> 8U)))) 
                                  | (0x10000U == (0xfffffU 
                                                  & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[1U] 
                                                      << 8U) 
                                                     | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[0U] 
                                                        >> 0x18U))))) 
                                 | (2U == (0xffffU 
                                           & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[1U] 
                                               << 4U) 
                                              | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[0U] 
                                                 >> 0x1cU)))))));
        bufp->chgCData(oldp+2748,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_2__DOT___same_cycle_resp_T_1)
                                    ? (7U & ((IData)(1U) 
                                             << (3U 
                                                 & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                                    >> 0xaU))))
                                    : 0U)),3);
        bufp->chgBit(oldp+2749,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_2__DOT__same_cycle_resp));
        bufp->chgCData(oldp+2750,((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_2__DOT___same_cycle_resp_T_3) 
                                    & (6U == (6U & 
                                              vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[0U])))
                                    ? (7U & ((IData)(1U) 
                                             << (3U 
                                                 & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[0U] 
                                                    >> 0xaU))))
                                    : 0U)),3);
        bufp->chgBit(oldp+2751,((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_2__DOT___same_cycle_resp_T_3) 
                                  & (6U == (6U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[0U]))) 
                                 & ((3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[0U] 
                                           >> 0xaU)) 
                                    == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_2_d_bits_source)))));
        bufp->chgBit(oldp+2752,((1U & ((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__beatsLeft_4))
                                        ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__readys_readys_4) 
                                           >> 1U) : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__state_4_1)))));
        bufp->chgBit(oldp+2753,((1U & ((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__beatsLeft_4))
                                        ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__readys_readys_4)
                                        : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__state_4_0)))));
        bufp->chgBit(oldp+2754,((1U & ((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__beatsLeft_3))
                                        ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__readys_readys_3) 
                                           >> 1U) : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__state_3_1)))));
        bufp->chgBit(oldp+2755,((1U & ((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__beatsLeft_3))
                                        ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__readys_readys_3)
                                        : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__state_3_0)))));
        bufp->chgBit(oldp+2756,((1U & ((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__beatsLeft_2))
                                        ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__readys_readys_2) 
                                           >> 1U) : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__state_2_1)))));
        bufp->chgBit(oldp+2757,((1U & ((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__beatsLeft_2))
                                        ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__readys_readys_2)
                                        : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__state_2_0)))));
        bufp->chgBit(oldp+2758,((1U & ((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__beatsLeft_1))
                                        ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__readys_readys_1) 
                                           >> 2U) : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__state_1_2)))));
        bufp->chgBit(oldp+2759,((1U & ((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__beatsLeft_1))
                                        ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__readys_readys_1) 
                                           >> 1U) : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__state_1_1)))));
        bufp->chgBit(oldp+2760,((1U & ((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__beatsLeft_1))
                                        ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__readys_readys_1)
                                        : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__state_1_0)))));
        bufp->chgBit(oldp+2761,((1U & ((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__beatsLeft))
                                        ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__readys_readys) 
                                           >> 2U) : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__state_2)))));
        bufp->chgBit(oldp+2762,((1U & ((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__beatsLeft))
                                        ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__readys_readys) 
                                           >> 1U) : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__state_1)))));
        bufp->chgBit(oldp+2763,((1U & ((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__beatsLeft))
                                        ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__readys_readys)
                                        : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__state_0)))));
        bufp->chgCData(oldp+2764,((0x24U | (1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                  >> 0xaU)))),6);
        bufp->chgCData(oldp+2765,((0x1fU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                            >> 0xaU))),6);
        bufp->chgCData(oldp+2766,((0x20U | (3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                                  >> 0xaU)))),6);
        bufp->chgCData(oldp+2767,((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                         >> 0x10U))),4);
        bufp->chgCData(oldp+2768,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT___bundleIn_0_d_q_io_deq_bits_size),4);
        bufp->chgBit(oldp+2769,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__requestAIO_0_0));
        bufp->chgBit(oldp+2770,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__requestAIO_0_1));
        bufp->chgBit(oldp+2771,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__requestAIO_1_0));
        bufp->chgBit(oldp+2772,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__requestAIO_1_1));
        bufp->chgBit(oldp+2773,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__requestAIO_2_0));
        bufp->chgBit(oldp+2774,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__requestAIO_2_1));
        bufp->chgBit(oldp+2775,((0x24U == (0x3fU & 
                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                            >> 9U)))));
        bufp->chgBit(oldp+2776,((8U == (0xfU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                >> 0xbU)))));
        bufp->chgBit(oldp+2777,((0x24U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT___bundleIn_0_d_q_io_deq_bits_source))));
        bufp->chgBit(oldp+2778,((8U == (0xfU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT___bundleIn_0_d_q_io_deq_bits_source) 
                                                >> 2U)))));
        bufp->chgBit(oldp+2779,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__portsAOI_filtered_0_earlyValid));
        bufp->chgBit(oldp+2780,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__portsAOI_filtered_1_earlyValid));
        bufp->chgBit(oldp+2781,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__portsAOI_filtered_1_0_earlyValid));
        bufp->chgBit(oldp+2782,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__portsAOI_filtered_1_1_earlyValid));
        bufp->chgBit(oldp+2783,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__portsAOI_filtered_2_0_earlyValid));
        bufp->chgBit(oldp+2784,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__portsAOI_filtered_2_1_earlyValid));
        bufp->chgBit(oldp+2785,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_11_earlyValid));
        bufp->chgBit(oldp+2786,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_15_earlyValid));
        bufp->chgBit(oldp+2787,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_20_earlyValid));
        bufp->chgBit(oldp+2788,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_12_earlyValid));
        bufp->chgBit(oldp+2789,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_16_earlyValid));
        bufp->chgBit(oldp+2790,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_21_earlyValid));
        bufp->chgCData(oldp+2791,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__beatsLeft),8);
        bufp->chgBit(oldp+2792,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__beatsLeft))));
        bufp->chgCData(oldp+2793,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__readys_valid),3);
        bufp->chgCData(oldp+2794,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__readys_mask),3);
        bufp->chgCData(oldp+2795,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__readys_readys),3);
        bufp->chgBit(oldp+2796,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__readys_readys) 
                                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__portsAOI_filtered_0_earlyValid))));
        bufp->chgBit(oldp+2797,((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__readys_readys) 
                                  >> 1U) & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__portsAOI_filtered_1_0_earlyValid))));
        bufp->chgBit(oldp+2798,((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__readys_readys) 
                                  >> 2U) & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__portsAOI_filtered_2_0_earlyValid))));
        bufp->chgBit(oldp+2799,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__state_0));
        bufp->chgBit(oldp+2800,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__state_1));
        bufp->chgBit(oldp+2801,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__state_2));
        bufp->chgBit(oldp+2802,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_0));
        bufp->chgBit(oldp+2803,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_1));
        bufp->chgBit(oldp+2804,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_2));
        bufp->chgCData(oldp+2805,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__beatsLeft_1),8);
        bufp->chgBit(oldp+2806,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__beatsLeft_1))));
        bufp->chgCData(oldp+2807,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__readys_valid_1),3);
        bufp->chgCData(oldp+2808,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__readys_mask_1),3);
        bufp->chgCData(oldp+2809,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__readys_readys_1),3);
        bufp->chgBit(oldp+2810,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__readys_readys_1) 
                                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__portsAOI_filtered_1_earlyValid))));
        bufp->chgBit(oldp+2811,((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__readys_readys_1) 
                                  >> 1U) & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__portsAOI_filtered_1_1_earlyValid))));
        bufp->chgBit(oldp+2812,((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__readys_readys_1) 
                                  >> 2U) & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__portsAOI_filtered_2_1_earlyValid))));
        bufp->chgBit(oldp+2813,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__state_1_0));
        bufp->chgBit(oldp+2814,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__state_1_1));
        bufp->chgBit(oldp+2815,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__state_1_2));
        bufp->chgBit(oldp+2816,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_1_0));
        bufp->chgBit(oldp+2817,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_1_1));
        bufp->chgBit(oldp+2818,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_1_2));
        bufp->chgCData(oldp+2819,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__beatsLeft_2),8);
        bufp->chgBit(oldp+2820,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__beatsLeft_2))));
        bufp->chgCData(oldp+2821,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__readys_valid_2),2);
        bufp->chgCData(oldp+2822,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__readys_mask_2),2);
        bufp->chgCData(oldp+2823,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__readys_readys_2),2);
        bufp->chgBit(oldp+2824,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__readys_readys_2) 
                                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_11_earlyValid))));
        bufp->chgBit(oldp+2825,((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__readys_readys_2) 
                                  >> 1U) & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_12_earlyValid))));
        bufp->chgBit(oldp+2826,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__state_2_0));
        bufp->chgBit(oldp+2827,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__state_2_1));
        bufp->chgBit(oldp+2828,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_2_0));
        bufp->chgBit(oldp+2829,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_2_1));
        bufp->chgCData(oldp+2830,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__beatsLeft_3),8);
        bufp->chgBit(oldp+2831,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__beatsLeft_3))));
        bufp->chgCData(oldp+2832,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__readys_valid_3),2);
        bufp->chgCData(oldp+2833,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__readys_mask_3),2);
        bufp->chgCData(oldp+2834,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__readys_readys_3),2);
        bufp->chgBit(oldp+2835,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__readys_readys_3) 
                                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_15_earlyValid))));
        bufp->chgBit(oldp+2836,((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__readys_readys_3) 
                                  >> 1U) & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_16_earlyValid))));
        bufp->chgBit(oldp+2837,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__state_3_0));
        bufp->chgBit(oldp+2838,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__state_3_1));
        bufp->chgBit(oldp+2839,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_3_0));
        bufp->chgBit(oldp+2840,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_3_1));
        bufp->chgCData(oldp+2841,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__beatsLeft_4),8);
        bufp->chgBit(oldp+2842,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__beatsLeft_4))));
        bufp->chgCData(oldp+2843,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__readys_valid_4),2);
        bufp->chgCData(oldp+2844,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__readys_mask_4),2);
        bufp->chgCData(oldp+2845,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__readys_readys_4),2);
        bufp->chgBit(oldp+2846,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__readys_readys_4) 
                                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_20_earlyValid))));
        bufp->chgBit(oldp+2847,((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__readys_readys_4) 
                                  >> 1U) & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_21_earlyValid))));
        bufp->chgBit(oldp+2848,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__state_4_0));
        bufp->chgBit(oldp+2849,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__state_4_1));
        bufp->chgBit(oldp+2850,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_4_0));
        bufp->chgBit(oldp+2851,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_4_1));
        bufp->chgBit(oldp+2852,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__latch));
        bufp->chgBit(oldp+2853,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__winnerQual_0));
        bufp->chgBit(oldp+2854,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__winnerQual_1));
        bufp->chgBit(oldp+2855,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__winnerQual_2));
        bufp->chgBit(oldp+2856,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__latch_1));
        bufp->chgBit(oldp+2857,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__winnerQual_1_0));
        bufp->chgBit(oldp+2858,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__winnerQual_1_1));
        bufp->chgBit(oldp+2859,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__winnerQual_1_2));
        bufp->chgBit(oldp+2860,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__latch_2));
        bufp->chgBit(oldp+2861,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__winnerQual_2_0));
        bufp->chgBit(oldp+2862,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__winnerQual_2_1));
        bufp->chgBit(oldp+2863,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__latch_3));
        bufp->chgBit(oldp+2864,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__winnerQual_3_0));
        bufp->chgBit(oldp+2865,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__winnerQual_3_1));
        bufp->chgBit(oldp+2866,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__latch_4));
        bufp->chgBit(oldp+2867,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__winnerQual_4_0));
        bufp->chgBit(oldp+2868,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__winnerQual_4_1));
        bufp->chgCData(oldp+2869,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor__DOT__a_first_counter),8);
        bufp->chgCData(oldp+2870,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor__DOT__opcode),3);
        bufp->chgCData(oldp+2871,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor__DOT__param),3);
        bufp->chgCData(oldp+2872,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor__DOT__size),4);
        bufp->chgBit(oldp+2873,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor__DOT__source));
        bufp->chgIData(oldp+2874,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor__DOT__address),32);
        bufp->chgCData(oldp+2875,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor__DOT__d_first_counter),8);
        bufp->chgCData(oldp+2876,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor__DOT__opcode_1),3);
        bufp->chgCData(oldp+2877,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor__DOT__param_1),2);
        bufp->chgCData(oldp+2878,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor__DOT__size_1),4);
        bufp->chgBit(oldp+2879,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor__DOT__source_1));
        bufp->chgCData(oldp+2880,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor__DOT__sink),4);
        bufp->chgBit(oldp+2881,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor__DOT__denied));
        bufp->chgBit(oldp+2882,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor__DOT__inflight));
        bufp->chgCData(oldp+2883,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor__DOT__inflight_opcodes),4);
        bufp->chgCData(oldp+2884,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor__DOT__inflight_sizes),8);
        bufp->chgCData(oldp+2885,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor__DOT__a_first_counter_1),8);
        bufp->chgBit(oldp+2886,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor__DOT__a_first_counter_1))));
        bufp->chgCData(oldp+2887,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor__DOT__d_first_counter_1),8);
        bufp->chgBit(oldp+2888,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor__DOT__d_first_counter_1))));
        bufp->chgIData(oldp+2889,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor__DOT__watchdog),32);
        bufp->chgCData(oldp+2890,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor__DOT__d_first_counter_2),8);
        bufp->chgBit(oldp+2891,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor__DOT__d_first_counter_2))));
        bufp->chgBit(oldp+2892,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor__DOT__d_clr));
        bufp->chgBit(oldp+2893,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor__DOT__mask_acc));
        bufp->chgBit(oldp+2894,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor__DOT__mask_acc_1));
        bufp->chgBit(oldp+2895,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor__DOT__mask_eq_2));
        bufp->chgBit(oldp+2896,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor__DOT__mask_acc_2));
        bufp->chgBit(oldp+2897,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor__DOT__mask_eq_3));
        bufp->chgBit(oldp+2898,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor__DOT__mask_acc_3));
        bufp->chgBit(oldp+2899,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor__DOT__mask_eq_4));
        bufp->chgBit(oldp+2900,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor__DOT__mask_acc_4));
        bufp->chgBit(oldp+2901,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor__DOT__mask_eq_5));
        bufp->chgBit(oldp+2902,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor__DOT__mask_acc_5));
        bufp->chgBit(oldp+2903,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor__DOT__mask_eq_6));
        bufp->chgBit(oldp+2904,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor__DOT__mask_acc_6));
        bufp->chgBit(oldp+2905,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor__DOT__mask_eq_7));
        bufp->chgBit(oldp+2906,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor__DOT__mask_acc_7));
        bufp->chgBit(oldp+2907,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor__DOT__mask_eq_8));
        bufp->chgBit(oldp+2908,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor__DOT__mask_acc_8));
        bufp->chgBit(oldp+2909,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor__DOT__mask_eq_9));
        bufp->chgBit(oldp+2910,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor__DOT__mask_acc_9));
        bufp->chgBit(oldp+2911,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor__DOT__mask_eq_10));
        bufp->chgBit(oldp+2912,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor__DOT__mask_acc_10));
        bufp->chgBit(oldp+2913,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor__DOT__mask_eq_11));
        bufp->chgBit(oldp+2914,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor__DOT__mask_acc_11));
        bufp->chgBit(oldp+2915,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor__DOT__mask_eq_12));
        bufp->chgBit(oldp+2916,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor__DOT__mask_acc_12));
        bufp->chgBit(oldp+2917,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor__DOT__mask_eq_13));
        bufp->chgBit(oldp+2918,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor__DOT__mask_acc_13));
        bufp->chgSData(oldp+2919,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor__DOT__mask),16);
        bufp->chgBit(oldp+2920,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor__DOT___same_cycle_resp_T_1) 
                                 & (~ (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                       >> 0xaU)))));
        bufp->chgBit(oldp+2921,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor__DOT__same_cycle_resp));
        bufp->chgCData(oldp+2922,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__a_first_counter),8);
        bufp->chgCData(oldp+2923,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__opcode),3);
        bufp->chgCData(oldp+2924,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__param),3);
        bufp->chgCData(oldp+2925,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__size),4);
        bufp->chgCData(oldp+2926,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__source),5);
        bufp->chgIData(oldp+2927,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__address),32);
        bufp->chgCData(oldp+2928,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__d_first_counter),8);
        bufp->chgCData(oldp+2929,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__opcode_1),3);
        bufp->chgCData(oldp+2930,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__param_1),2);
        bufp->chgCData(oldp+2931,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__size_1),4);
        bufp->chgCData(oldp+2932,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__source_1),5);
        bufp->chgCData(oldp+2933,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__sink),4);
        bufp->chgBit(oldp+2934,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__denied));
        bufp->chgIData(oldp+2935,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__inflight),32);
        bufp->chgWData(oldp+2936,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__inflight_opcodes),128);
        bufp->chgWData(oldp+2940,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__inflight_sizes),256);
        bufp->chgCData(oldp+2948,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__a_first_counter_1),8);
        bufp->chgBit(oldp+2949,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__a_first_counter_1))));
        bufp->chgCData(oldp+2950,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__d_first_counter_1),8);
        bufp->chgBit(oldp+2951,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__d_first_counter_1))));
        bufp->chgIData(oldp+2952,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__watchdog),32);
        bufp->chgCData(oldp+2953,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__d_first_counter_2),8);
        bufp->chgBit(oldp+2954,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__d_first_counter_2))));
        bufp->chgBit(oldp+2955,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__mask_acc));
        bufp->chgBit(oldp+2956,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__mask_acc_1));
        bufp->chgBit(oldp+2957,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__mask_eq_2));
        bufp->chgBit(oldp+2958,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__mask_acc_2));
        bufp->chgBit(oldp+2959,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__mask_eq_3));
        bufp->chgBit(oldp+2960,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__mask_acc_3));
        bufp->chgBit(oldp+2961,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__mask_eq_4));
        bufp->chgBit(oldp+2962,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__mask_acc_4));
        bufp->chgBit(oldp+2963,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__mask_eq_5));
        bufp->chgBit(oldp+2964,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__mask_acc_5));
        bufp->chgBit(oldp+2965,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__mask_eq_6));
        bufp->chgBit(oldp+2966,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__mask_acc_6));
        bufp->chgBit(oldp+2967,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__mask_eq_7));
        bufp->chgBit(oldp+2968,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__mask_acc_7));
        bufp->chgBit(oldp+2969,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__mask_eq_8));
        bufp->chgBit(oldp+2970,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__mask_acc_8));
        bufp->chgBit(oldp+2971,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__mask_eq_9));
        bufp->chgBit(oldp+2972,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__mask_acc_9));
        bufp->chgBit(oldp+2973,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__mask_eq_10));
        bufp->chgBit(oldp+2974,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__mask_acc_10));
        bufp->chgBit(oldp+2975,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__mask_eq_11));
        bufp->chgBit(oldp+2976,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__mask_acc_11));
        bufp->chgBit(oldp+2977,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__mask_eq_12));
        bufp->chgBit(oldp+2978,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__mask_acc_12));
        bufp->chgBit(oldp+2979,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__mask_eq_13));
        bufp->chgBit(oldp+2980,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__mask_acc_13));
        bufp->chgSData(oldp+2981,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__mask),16);
        bufp->chgIData(oldp+2982,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT___same_cycle_resp_T_1)
                                    ? ((0x1fU >= (0x1fU 
                                                  & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                     >> 0xaU)))
                                        ? ((IData)(1U) 
                                           << (0x1fU 
                                               & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                  >> 0xaU)))
                                        : 0U) : 0U)),32);
        bufp->chgBit(oldp+2983,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__same_cycle_resp));
        bufp->chgCData(oldp+2984,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__a_first_counter),8);
        bufp->chgCData(oldp+2985,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__opcode),3);
        bufp->chgCData(oldp+2986,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__param),3);
        bufp->chgCData(oldp+2987,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__size),4);
        bufp->chgCData(oldp+2988,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__source),2);
        bufp->chgIData(oldp+2989,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__address),32);
        bufp->chgCData(oldp+2990,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__d_first_counter),8);
        bufp->chgCData(oldp+2991,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__opcode_1),3);
        bufp->chgCData(oldp+2992,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__param_1),2);
        bufp->chgCData(oldp+2993,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__size_1),4);
        bufp->chgCData(oldp+2994,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__source_1),2);
        bufp->chgCData(oldp+2995,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__sink),4);
        bufp->chgBit(oldp+2996,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__denied));
        bufp->chgCData(oldp+2997,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__c_first_counter),8);
        bufp->chgCData(oldp+2998,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__opcode_3),3);
        bufp->chgCData(oldp+2999,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__param_3),3);
        bufp->chgCData(oldp+3000,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__size_3),4);
        bufp->chgCData(oldp+3001,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__source_3),2);
        bufp->chgIData(oldp+3002,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__address_2),32);
        bufp->chgCData(oldp+3003,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__inflight),3);
        bufp->chgSData(oldp+3004,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__inflight_opcodes),12);
        bufp->chgIData(oldp+3005,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__inflight_sizes),24);
        bufp->chgCData(oldp+3006,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__a_first_counter_1),8);
        bufp->chgBit(oldp+3007,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__a_first_counter_1))));
        bufp->chgCData(oldp+3008,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__d_first_counter_1),8);
        bufp->chgBit(oldp+3009,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__d_first_counter_1))));
        bufp->chgIData(oldp+3010,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__watchdog),32);
        bufp->chgCData(oldp+3011,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__inflight_1),3);
        bufp->chgIData(oldp+3012,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__inflight_sizes_1),24);
        bufp->chgCData(oldp+3013,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__c_first_counter_1),8);
        bufp->chgBit(oldp+3014,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__c_first_counter_1))));
        bufp->chgCData(oldp+3015,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__d_first_counter_2),8);
        bufp->chgBit(oldp+3016,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__d_first_counter_2))));
        bufp->chgIData(oldp+3017,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__watchdog_1),32);
        bufp->chgSData(oldp+3018,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__inflight_2),16);
        bufp->chgCData(oldp+3019,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__d_first_counter_3),8);
        bufp->chgBit(oldp+3020,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__d_first_counter_3))));
        bufp->chgSData(oldp+3021,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__d_set),16);
        bufp->chgBit(oldp+3022,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__mask_acc));
        bufp->chgBit(oldp+3023,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__mask_acc_1));
        bufp->chgBit(oldp+3024,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__mask_eq_2));
        bufp->chgBit(oldp+3025,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__mask_acc_2));
        bufp->chgBit(oldp+3026,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__mask_eq_3));
        bufp->chgBit(oldp+3027,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__mask_acc_3));
        bufp->chgBit(oldp+3028,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__mask_eq_4));
        bufp->chgBit(oldp+3029,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__mask_acc_4));
        bufp->chgBit(oldp+3030,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__mask_eq_5));
        bufp->chgBit(oldp+3031,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__mask_acc_5));
        bufp->chgBit(oldp+3032,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__mask_eq_6));
        bufp->chgBit(oldp+3033,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__mask_acc_6));
        bufp->chgBit(oldp+3034,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__mask_eq_7));
        bufp->chgBit(oldp+3035,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__mask_acc_7));
        bufp->chgBit(oldp+3036,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__mask_eq_8));
        bufp->chgBit(oldp+3037,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__mask_acc_8));
        bufp->chgBit(oldp+3038,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__mask_eq_9));
        bufp->chgBit(oldp+3039,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__mask_acc_9));
        bufp->chgBit(oldp+3040,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__mask_eq_10));
        bufp->chgBit(oldp+3041,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__mask_acc_10));
        bufp->chgBit(oldp+3042,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__mask_eq_11));
        bufp->chgBit(oldp+3043,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__mask_acc_11));
        bufp->chgBit(oldp+3044,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__mask_eq_12));
        bufp->chgBit(oldp+3045,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__mask_acc_12));
        bufp->chgBit(oldp+3046,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__mask_eq_13));
        bufp->chgBit(oldp+3047,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__mask_acc_13));
        bufp->chgSData(oldp+3048,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__mask),16);
        bufp->chgBit(oldp+3049,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__mask_eq_32));
        bufp->chgBit(oldp+3050,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__mask_eq_33));
        bufp->chgBit(oldp+3051,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__mask_eq_34));
        bufp->chgBit(oldp+3052,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__mask_eq_35));
        bufp->chgBit(oldp+3053,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__mask_eq_32) 
                                 & (~ (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__bundleIn_0_b_bits_address 
                                       >> 1U)))));
        bufp->chgBit(oldp+3054,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__mask_eq_32) 
                                 & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__bundleIn_0_b_bits_address 
                                    >> 1U))));
        bufp->chgBit(oldp+3055,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__mask_eq_33) 
                                 & (~ (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__bundleIn_0_b_bits_address 
                                       >> 1U)))));
        bufp->chgBit(oldp+3056,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__mask_eq_33) 
                                 & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__bundleIn_0_b_bits_address 
                                    >> 1U))));
        bufp->chgBit(oldp+3057,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__mask_eq_34) 
                                 & (~ (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__bundleIn_0_b_bits_address 
                                       >> 1U)))));
        bufp->chgBit(oldp+3058,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__mask_eq_34) 
                                 & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__bundleIn_0_b_bits_address 
                                    >> 1U))));
        bufp->chgBit(oldp+3059,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__mask_eq_35) 
                                 & (~ (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__bundleIn_0_b_bits_address 
                                       >> 1U)))));
        bufp->chgBit(oldp+3060,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__mask_eq_35) 
                                 & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__bundleIn_0_b_bits_address 
                                    >> 1U))));
        bufp->chgCData(oldp+3061,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT___same_cycle_resp_T_1)
                                    ? (7U & ((IData)(1U) 
                                             << (3U 
                                                 & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                                    >> 0xaU))))
                                    : 0U)),3);
        bufp->chgBit(oldp+3062,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__same_cycle_resp));
        bufp->chgCData(oldp+3063,((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT___same_cycle_resp_T_3) 
                                    & (6U == (6U & 
                                              vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[0U])))
                                    ? (7U & ((IData)(1U) 
                                             << (3U 
                                                 & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[0U] 
                                                    >> 0xaU))))
                                    : 0U)),3);
        bufp->chgBit(oldp+3064,((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT___same_cycle_resp_T_3) 
                                  & (6U == (6U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[0U]))) 
                                 & ((3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[0U] 
                                           >> 0xaU)) 
                                    == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_2_d_bits_source)))));
        bufp->chgBit(oldp+3065,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__x1_out_1_valid));
        bufp->chgCData(oldp+3066,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT___tile_reset_domain_tile_auto_tl_other_masters_out_1_a_bits_opcode),3);
        bufp->chgCData(oldp+3067,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT___tile_reset_domain_tile_auto_tl_other_masters_out_1_a_bits_param),3);
        bufp->chgCData(oldp+3068,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT___tile_reset_domain_tile_auto_tl_other_masters_out_1_a_bits_size),4);
        bufp->chgCData(oldp+3069,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT___tile_reset_domain_tile_auto_tl_other_masters_out_1_a_bits_source),2);
        bufp->chgIData(oldp+3070,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT___tile_reset_domain_tile_auto_tl_other_masters_out_1_a_bits_address),32);
        bufp->chgSData(oldp+3071,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT___tile_reset_domain_tile_auto_tl_other_masters_out_1_a_bits_mask),16);
        if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__muxStateEarly_0) {
            if ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_uncached) 
                  & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_write)) 
                 & (((((((((((0x11U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_req_cmd)) 
                             | (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_read))) 
                            | (0xfU == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_req_cmd))) 
                           | (0xeU == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_req_cmd))) 
                          | (0xdU == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_req_cmd))) 
                         | (0xcU == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_req_cmd))) 
                        | (8U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_req_cmd))) 
                       | (0xbU == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_req_cmd))) 
                      | (0xaU == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_req_cmd))) 
                     | (9U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_req_cmd))) 
                    | (4U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_req_cmd))))) {
                __Vtemp_h4f040797__0[0U] = (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__pstore1_data);
                __Vtemp_h4f040797__0[1U] = (IData)(
                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__pstore1_data 
                                                    >> 0x20U));
                __Vtemp_h4f040797__0[2U] = (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__pstore1_data);
                __Vtemp_h4f040797__0[3U] = (IData)(
                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__pstore1_data 
                                                    >> 0x20U));
            } else {
                __Vtemp_h4f040797__0[0U] = 0U;
                __Vtemp_h4f040797__0[1U] = 0U;
                __Vtemp_h4f040797__0[2U] = 0U;
                __Vtemp_h4f040797__0[3U] = 0U;
            }
        } else {
            __Vtemp_h4f040797__0[0U] = 0U;
            __Vtemp_h4f040797__0[1U] = 0U;
            __Vtemp_h4f040797__0[2U] = 0U;
            __Vtemp_h4f040797__0[3U] = 0U;
        }
        bufp->chgWData(oldp+3072,(__Vtemp_h4f040797__0),128);
        bufp->chgBit(oldp+3076,(((~ (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_1_b_q__DOT___ram_ext_R0_data[0U] 
                                     >> 0xaU)) & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tl_out_b_ready))));
        bufp->chgBit(oldp+3077,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tl_out_c_valid));
        bufp->chgCData(oldp+3078,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tl_out_c_bits_opcode),3);
        bufp->chgCData(oldp+3079,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_c_bits_param),3);
        bufp->chgCData(oldp+3080,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tl_out_c_bits_size),4);
        bufp->chgCData(oldp+3081,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_source),2);
        bufp->chgIData(oldp+3082,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address),32);
        __Vtemp_hb6ff69bc__0[0U] = (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_data_r);
        __Vtemp_hb6ff69bc__0[1U] = (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_data_r 
                                            >> 0x20U));
        __Vtemp_hb6ff69bc__0[2U] = (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_data_r_1);
        __Vtemp_hb6ff69bc__0[3U] = (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_data_r_1 
                                            >> 0x20U));
        bufp->chgWData(oldp+3083,(__Vtemp_hb6ff69bc__0),128);
        bufp->chgBit(oldp+3087,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT___tile_reset_domain_tile_auto_tl_other_masters_out_1_d_ready));
        bufp->chgBit(oldp+3088,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tl_out_e_valid));
        bufp->chgCData(oldp+3089,((0xfU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_1_d_q__DOT___ram_ext_R0_data[0U] 
                                           >> 0xbU))),4);
        bufp->chgBit(oldp+3090,((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__x1_a_q__DOT__empty)))));
        bufp->chgCData(oldp+3091,((7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__x1_a_q__DOT___ram_ext_R0_data[0U])),3);
        bufp->chgCData(oldp+3092,((7U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                         >> 3U))),3);
        bufp->chgCData(oldp+3093,((0xfU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                           >> 6U))),4);
        bufp->chgCData(oldp+3094,((0x1fU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                            >> 0xaU))),5);
        bufp->chgIData(oldp+3095,(((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                                    << 0x11U) | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                 >> 0xfU))),32);
        bufp->chgSData(oldp+3096,((0xffffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                                              >> 0xfU))),16);
        __Vtemp_hdd67964f__0[0U] = ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__x1_a_q__DOT___ram_ext_R0_data[2U] 
                                     << 1U) | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                                               >> 0x1fU));
        __Vtemp_hdd67964f__0[1U] = ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__x1_a_q__DOT___ram_ext_R0_data[3U] 
                                     << 1U) | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__x1_a_q__DOT___ram_ext_R0_data[2U] 
                                               >> 0x1fU));
        __Vtemp_hdd67964f__0[2U] = ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__x1_a_q__DOT___ram_ext_R0_data[4U] 
                                     << 1U) | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__x1_a_q__DOT___ram_ext_R0_data[3U] 
                                               >> 0x1fU));
        __Vtemp_hdd67964f__0[3U] = ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__x1_a_q__DOT___ram_ext_R0_data[5U] 
                                     << 1U) | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__x1_a_q__DOT___ram_ext_R0_data[4U] 
                                               >> 0x1fU));
        bufp->chgWData(oldp+3097,(__Vtemp_hdd67964f__0),128);
        bufp->chgBit(oldp+3101,((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__x1_a_q__DOT___ram_ext_R0_data[5U] 
                                 >> 0x1fU)));
        bufp->chgBit(oldp+3102,((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__bundleIn_0_d_q__DOT__full)))));
        bufp->chgBit(oldp+3103,((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT__full)))));
        bufp->chgBit(oldp+3104,((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_1_b_q__DOT__empty)))));
        bufp->chgCData(oldp+3105,((7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_1_b_q__DOT___ram_ext_R0_data[0U])),3);
        bufp->chgCData(oldp+3106,((3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_1_b_q__DOT___ram_ext_R0_data[0U] 
                                         >> 3U))),2);
        bufp->chgCData(oldp+3107,((0xfU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_1_b_q__DOT___ram_ext_R0_data[0U] 
                                           >> 5U))),4);
        bufp->chgCData(oldp+3108,((3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_1_b_q__DOT___ram_ext_R0_data[0U] 
                                         >> 9U))),2);
        bufp->chgIData(oldp+3109,(((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_1_b_q__DOT___ram_ext_R0_data[1U] 
                                    << 0x15U) | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_1_b_q__DOT___ram_ext_R0_data[0U] 
                                                 >> 0xbU))),32);
        bufp->chgSData(oldp+3110,((0xffffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_1_b_q__DOT___ram_ext_R0_data[1U] 
                                              >> 0xbU))),16);
        bufp->chgBit(oldp+3111,((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_1_b_q__DOT___ram_ext_R0_data[5U] 
                                       >> 0x1bU))));
        bufp->chgBit(oldp+3112,((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT__full)))));
        bufp->chgBit(oldp+3113,((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_1_d_q__DOT__empty)))));
        bufp->chgCData(oldp+3114,((7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_1_d_q__DOT___ram_ext_R0_data[0U])),3);
        bufp->chgCData(oldp+3115,((3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_1_d_q__DOT___ram_ext_R0_data[0U] 
                                         >> 3U))),2);
        bufp->chgCData(oldp+3116,((0xfU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_1_d_q__DOT___ram_ext_R0_data[0U] 
                                           >> 5U))),4);
        bufp->chgCData(oldp+3117,((3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_1_d_q__DOT___ram_ext_R0_data[0U] 
                                         >> 9U))),2);
        bufp->chgBit(oldp+3118,((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_1_d_q__DOT___ram_ext_R0_data[0U] 
                                       >> 0xfU))));
        __Vtemp_hbbb61d8f__0[0U] = ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_1_d_q__DOT___ram_ext_R0_data[1U] 
                                     << 0x10U) | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_1_d_q__DOT___ram_ext_R0_data[0U] 
                                                  >> 0x10U));
        __Vtemp_hbbb61d8f__0[1U] = ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_1_d_q__DOT___ram_ext_R0_data[2U] 
                                     << 0x10U) | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_1_d_q__DOT___ram_ext_R0_data[1U] 
                                                  >> 0x10U));
        __Vtemp_hbbb61d8f__0[2U] = ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_1_d_q__DOT___ram_ext_R0_data[3U] 
                                     << 0x10U) | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_1_d_q__DOT___ram_ext_R0_data[2U] 
                                                  >> 0x10U));
        __Vtemp_hbbb61d8f__0[3U] = ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_1_d_q__DOT___ram_ext_R0_data[4U] 
                                     << 0x10U) | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_1_d_q__DOT___ram_ext_R0_data[3U] 
                                                  >> 0x10U));
        bufp->chgWData(oldp+3119,(__Vtemp_hbbb61d8f__0),128);
        bufp->chgBit(oldp+3123,((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_1_d_q__DOT___ram_ext_R0_data[4U] 
                                       >> 0x10U))));
        bufp->chgBit(oldp+3124,((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_e_q__DOT__full)))));
        bufp->chgBit(oldp+3125,((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__x1_a_q__DOT__full)))));
        bufp->chgBit(oldp+3126,((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)))));
        bufp->chgCData(oldp+3127,((7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U])),3);
        bufp->chgCData(oldp+3128,((3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                         >> 3U))),2);
        bufp->chgCData(oldp+3129,((0xfU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                           >> 5U))),4);
        bufp->chgCData(oldp+3130,((0x1fU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                            >> 9U))),5);
        bufp->chgCData(oldp+3131,((0xfU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                           >> 0xeU))),4);
        bufp->chgBit(oldp+3132,((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                       >> 0x12U))));
        __Vtemp_hac93f5a5__0[0U] = ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[1U] 
                                     << 0xdU) | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                 >> 0x13U));
        __Vtemp_hac93f5a5__0[1U] = ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[2U] 
                                     << 0xdU) | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[1U] 
                                                 >> 0x13U));
        __Vtemp_hac93f5a5__0[2U] = ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[3U] 
                                     << 0xdU) | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[2U] 
                                                 >> 0x13U));
        __Vtemp_hac93f5a5__0[3U] = ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[4U] 
                                     << 0xdU) | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[3U] 
                                                 >> 0x13U));
        bufp->chgWData(oldp+3133,(__Vtemp_hac93f5a5__0),128);
        bufp->chgBit(oldp+3137,((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[4U] 
                                       >> 0x13U))));
        bufp->chgBit(oldp+3138,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__enq_ptr_value));
        bufp->chgBit(oldp+3139,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__deq_ptr_value));
        bufp->chgBit(oldp+3140,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__maybe_full));
        bufp->chgBit(oldp+3141,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ptr_match));
        bufp->chgBit(oldp+3142,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty));
        bufp->chgBit(oldp+3143,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__full));
        bufp->chgBit(oldp+3144,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__do_enq));
        bufp->chgBit(oldp+3145,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__do_deq));
        __Vtemp_ha9b66031__0[0U] = (((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_3_0)
                                        ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___coupler_to_bus_named_subsystem_cbus_auto_widget_in_d_bits_data[0U]
                                        : 0U) | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_3_1)
                                                  ? 
                                                 vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_l2_wrapper_auto_coherent_jbar_in_d_bits_data[0U]
                                                  : 0U)) 
                                     << 0x13U) | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_17_bits_denied) 
                                                   << 0x12U) 
                                                  | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_17_bits_sink) 
                                                      << 0xeU) 
                                                     | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_1_d_bits_source) 
                                                         << 9U) 
                                                        | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_17_bits_size) 
                                                            << 5U) 
                                                           | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_17_bits_param) 
                                                               << 3U) 
                                                              | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_17_bits_opcode)))))));
        __Vtemp_ha9b66031__0[1U] = (((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_3_0)
                                        ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___coupler_to_bus_named_subsystem_cbus_auto_widget_in_d_bits_data[0U]
                                        : 0U) | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_3_1)
                                                  ? 
                                                 vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_l2_wrapper_auto_coherent_jbar_in_d_bits_data[0U]
                                                  : 0U)) 
                                     >> 0xdU) | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_3_0)
                                                    ? 
                                                   vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___coupler_to_bus_named_subsystem_cbus_auto_widget_in_d_bits_data[1U]
                                                    : 0U) 
                                                  | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_3_1)
                                                      ? 
                                                     vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_l2_wrapper_auto_coherent_jbar_in_d_bits_data[1U]
                                                      : 0U)) 
                                                 << 0x13U));
        __Vtemp_ha9b66031__0[2U] = (((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_3_0)
                                        ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___coupler_to_bus_named_subsystem_cbus_auto_widget_in_d_bits_data[1U]
                                        : 0U) | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_3_1)
                                                  ? 
                                                 vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_l2_wrapper_auto_coherent_jbar_in_d_bits_data[1U]
                                                  : 0U)) 
                                     >> 0xdU) | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_3_0)
                                                    ? 
                                                   vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___coupler_to_bus_named_subsystem_cbus_auto_widget_in_d_bits_data[2U]
                                                    : 0U) 
                                                  | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_3_1)
                                                      ? 
                                                     vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_l2_wrapper_auto_coherent_jbar_in_d_bits_data[2U]
                                                      : 0U)) 
                                                 << 0x13U));
        __Vtemp_ha9b66031__0[3U] = (((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_3_0)
                                        ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___coupler_to_bus_named_subsystem_cbus_auto_widget_in_d_bits_data[2U]
                                        : 0U) | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_3_1)
                                                  ? 
                                                 vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_l2_wrapper_auto_coherent_jbar_in_d_bits_data[2U]
                                                  : 0U)) 
                                     >> 0xdU) | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_3_0)
                                                    ? 
                                                   vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___coupler_to_bus_named_subsystem_cbus_auto_widget_in_d_bits_data[3U]
                                                    : 0U) 
                                                  | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_3_1)
                                                      ? 
                                                     vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_l2_wrapper_auto_coherent_jbar_in_d_bits_data[3U]
                                                      : 0U)) 
                                                 << 0x13U));
        __Vtemp_ha9b66031__0[4U] = (((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_3_0) 
                                       & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__bundleIn_0_d_bits_corrupt)) 
                                      | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_3_1) 
                                         & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT___bundleIn_0_d_q_io_deq_bits_corrupt))) 
                                     << 0x13U) | ((
                                                   ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_3_0)
                                                     ? 
                                                    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___coupler_to_bus_named_subsystem_cbus_auto_widget_in_d_bits_data[3U]
                                                     : 0U) 
                                                   | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_3_1)
                                                       ? 
                                                      vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_l2_wrapper_auto_coherent_jbar_in_d_bits_data[3U]
                                                       : 0U)) 
                                                  >> 0xdU));
        bufp->chgWData(oldp+3146,(__Vtemp_ha9b66031__0),148);
        bufp->chgWData(oldp+3151,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data),148);
        bufp->chgWData(oldp+3156,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory[0]),148);
        bufp->chgWData(oldp+3161,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory[1]),148);
        bufp->chgBit(oldp+3166,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_1_b_q__DOT__enq_ptr_value));
        bufp->chgBit(oldp+3167,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_1_b_q__DOT__deq_ptr_value));
        bufp->chgBit(oldp+3168,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_1_b_q__DOT__maybe_full));
        bufp->chgBit(oldp+3169,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_1_b_q__DOT__ptr_match));
        bufp->chgBit(oldp+3170,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_1_b_q__DOT__empty));
        bufp->chgBit(oldp+3171,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_1_b_q__DOT__full));
        bufp->chgBit(oldp+3172,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_1_b_q__DOT__do_enq));
        bufp->chgBit(oldp+3173,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_1_b_q__DOT__do_deq));
        __Vtemp_h7e3593b0__0[0U] = (IData)((((QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__bundleIn_0_b_bits_address)) 
                                             << 0xbU) 
                                            | (QData)((IData)(
                                                              (0xc6U 
                                                               | (0x18U 
                                                                  & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceB__DOT__remain)
                                                                       ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceB__DOT__param_r)
                                                                       : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__sourceB__io_req_bits_param)) 
                                                                     << 3U)))))));
        __Vtemp_h7e3593b0__0[1U] = (0x7fff800U | (IData)(
                                                         ((((QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__bundleIn_0_b_bits_address)) 
                                                            << 0xbU) 
                                                           | (QData)((IData)(
                                                                             (0xc6U 
                                                                              | (0x18U 
                                                                                & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceB__DOT__remain)
                                                                                 ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceB__DOT__param_r)
                                                                                 : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__sourceB__io_req_bits_param)) 
                                                                                << 3U)))))) 
                                                          >> 0x20U)));
        __Vtemp_h7e3593b0__0[2U] = 0U;
        __Vtemp_h7e3593b0__0[3U] = 0U;
        __Vtemp_h7e3593b0__0[4U] = 0U;
        __Vtemp_h7e3593b0__0[5U] = 0U;
        bufp->chgWData(oldp+3174,(__Vtemp_h7e3593b0__0),188);
        bufp->chgWData(oldp+3180,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_1_b_q__DOT___ram_ext_R0_data),188);
        bufp->chgWData(oldp+3186,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_1_b_q__DOT__ram_ext__DOT__Memory[0]),188);
        bufp->chgWData(oldp+3192,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_1_b_q__DOT__ram_ext__DOT__Memory[1]),188);
        bufp->chgBit(oldp+3198,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_1_d_q__DOT__enq_ptr_value));
        bufp->chgBit(oldp+3199,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_1_d_q__DOT__deq_ptr_value));
        bufp->chgBit(oldp+3200,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_1_d_q__DOT__maybe_full));
        bufp->chgBit(oldp+3201,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_1_d_q__DOT__ptr_match));
        bufp->chgBit(oldp+3202,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_1_d_q__DOT__empty));
        bufp->chgBit(oldp+3203,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_1_d_q__DOT__full));
        bufp->chgBit(oldp+3204,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_1_d_q__DOT__do_enq));
        bufp->chgBit(oldp+3205,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_1_d_q__DOT__do_deq));
        __Vtemp_hb0bd69a9__0[0U] = (((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_4_0)
                                        ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___coupler_to_bus_named_subsystem_cbus_auto_widget_in_d_bits_data[0U]
                                        : 0U) | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_4_1)
                                                  ? 
                                                 vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_l2_wrapper_auto_coherent_jbar_in_d_bits_data[0U]
                                                  : 0U)) 
                                     << 0x10U) | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_22_bits_denied) 
                                                   << 0xfU) 
                                                  | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_22_bits_sink) 
                                                      << 0xbU) 
                                                     | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_2_d_bits_source) 
                                                         << 9U) 
                                                        | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_22_bits_size) 
                                                            << 5U) 
                                                           | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_22_bits_param) 
                                                               << 3U) 
                                                              | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_22_bits_opcode)))))));
        __Vtemp_hb0bd69a9__0[1U] = (((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_4_0)
                                        ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___coupler_to_bus_named_subsystem_cbus_auto_widget_in_d_bits_data[0U]
                                        : 0U) | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_4_1)
                                                  ? 
                                                 vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_l2_wrapper_auto_coherent_jbar_in_d_bits_data[0U]
                                                  : 0U)) 
                                     >> 0x10U) | ((
                                                   ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_4_0)
                                                     ? 
                                                    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___coupler_to_bus_named_subsystem_cbus_auto_widget_in_d_bits_data[1U]
                                                     : 0U) 
                                                   | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_4_1)
                                                       ? 
                                                      vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_l2_wrapper_auto_coherent_jbar_in_d_bits_data[1U]
                                                       : 0U)) 
                                                  << 0x10U));
        __Vtemp_hb0bd69a9__0[2U] = (((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_4_0)
                                        ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___coupler_to_bus_named_subsystem_cbus_auto_widget_in_d_bits_data[1U]
                                        : 0U) | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_4_1)
                                                  ? 
                                                 vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_l2_wrapper_auto_coherent_jbar_in_d_bits_data[1U]
                                                  : 0U)) 
                                     >> 0x10U) | ((
                                                   ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_4_0)
                                                     ? 
                                                    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___coupler_to_bus_named_subsystem_cbus_auto_widget_in_d_bits_data[2U]
                                                     : 0U) 
                                                   | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_4_1)
                                                       ? 
                                                      vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_l2_wrapper_auto_coherent_jbar_in_d_bits_data[2U]
                                                       : 0U)) 
                                                  << 0x10U));
        __Vtemp_hb0bd69a9__0[3U] = (((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_4_0)
                                        ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___coupler_to_bus_named_subsystem_cbus_auto_widget_in_d_bits_data[2U]
                                        : 0U) | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_4_1)
                                                  ? 
                                                 vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_l2_wrapper_auto_coherent_jbar_in_d_bits_data[2U]
                                                  : 0U)) 
                                     >> 0x10U) | ((
                                                   ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_4_0)
                                                     ? 
                                                    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___coupler_to_bus_named_subsystem_cbus_auto_widget_in_d_bits_data[3U]
                                                     : 0U) 
                                                   | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_4_1)
                                                       ? 
                                                      vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_l2_wrapper_auto_coherent_jbar_in_d_bits_data[3U]
                                                       : 0U)) 
                                                  << 0x10U));
        __Vtemp_hb0bd69a9__0[4U] = (((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_4_0) 
                                       & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__bundleIn_0_d_bits_corrupt)) 
                                      | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_4_1) 
                                         & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT___bundleIn_0_d_q_io_deq_bits_corrupt))) 
                                     << 0x10U) | ((
                                                   ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_4_0)
                                                     ? 
                                                    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___coupler_to_bus_named_subsystem_cbus_auto_widget_in_d_bits_data[3U]
                                                     : 0U) 
                                                   | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_4_1)
                                                       ? 
                                                      vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_l2_wrapper_auto_coherent_jbar_in_d_bits_data[3U]
                                                       : 0U)) 
                                                  >> 0x10U));
        bufp->chgWData(oldp+3206,(__Vtemp_hb0bd69a9__0),145);
        bufp->chgWData(oldp+3211,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_1_d_q__DOT___ram_ext_R0_data),145);
        bufp->chgWData(oldp+3216,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_1_d_q__DOT__ram_ext__DOT__Memory[0]),145);
        bufp->chgWData(oldp+3221,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_1_d_q__DOT__ram_ext__DOT__Memory[1]),145);
        bufp->chgBit(oldp+3226,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT__enq_ptr_value));
        bufp->chgBit(oldp+3227,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT__deq_ptr_value));
        bufp->chgBit(oldp+3228,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT__maybe_full));
        bufp->chgBit(oldp+3229,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT__ptr_match));
        bufp->chgBit(oldp+3230,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT__empty));
        bufp->chgBit(oldp+3231,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT__full));
        bufp->chgBit(oldp+3232,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT__do_enq));
        bufp->chgBit(oldp+3233,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT__do_deq));
        if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__muxStateEarly_0) {
            if ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_uncached) 
                  & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_write)) 
                 & (((((((((((0x11U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_req_cmd)) 
                             | (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_read))) 
                            | (0xfU == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_req_cmd))) 
                           | (0xeU == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_req_cmd))) 
                          | (0xdU == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_req_cmd))) 
                         | (0xcU == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_req_cmd))) 
                        | (8U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_req_cmd))) 
                       | (0xbU == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_req_cmd))) 
                      | (0xaU == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_req_cmd))) 
                     | (9U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_req_cmd))) 
                    | (4U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_req_cmd))))) {
                __Vtemp_h6082bd7b__0[0U] = (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__pstore1_data);
                __Vtemp_h6082bd7b__0[1U] = (IData)(
                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__pstore1_data 
                                                    >> 0x20U));
                __Vtemp_h6082bd7b__0[2U] = (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__pstore1_data);
                __Vtemp_h6082bd7b__0[3U] = (IData)(
                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__pstore1_data 
                                                    >> 0x20U));
            } else {
                __Vtemp_h6082bd7b__0[0U] = 0U;
                __Vtemp_h6082bd7b__0[1U] = 0U;
                __Vtemp_h6082bd7b__0[2U] = 0U;
                __Vtemp_h6082bd7b__0[3U] = 0U;
            }
        } else {
            __Vtemp_h6082bd7b__0[0U] = 0U;
            __Vtemp_h6082bd7b__0[1U] = 0U;
            __Vtemp_h6082bd7b__0[2U] = 0U;
            __Vtemp_h6082bd7b__0[3U] = 0U;
        }
        VL_EXTEND_WW(129,128, __Vtemp_h3ad90bbb__0, __Vtemp_h6082bd7b__0);
        __Vtemp_hc05c661f__0[0U] = (IData)((((QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT___tile_reset_domain_tile_auto_tl_other_masters_out_1_a_bits_mask)) 
                                             << 0x2cU) 
                                            | (((QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT___tile_reset_domain_tile_auto_tl_other_masters_out_1_a_bits_address)) 
                                                << 0xcU) 
                                               | (QData)((IData)(
                                                                 (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT___tile_reset_domain_tile_auto_tl_other_masters_out_1_a_bits_source) 
                                                                   << 0xaU) 
                                                                  | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT___tile_reset_domain_tile_auto_tl_other_masters_out_1_a_bits_size) 
                                                                      << 6U) 
                                                                     | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT___tile_reset_domain_tile_auto_tl_other_masters_out_1_a_bits_param) 
                                                                         << 3U) 
                                                                        | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT___tile_reset_domain_tile_auto_tl_other_masters_out_1_a_bits_opcode)))))))));
        __Vtemp_hc05c661f__0[1U] = ((__Vtemp_h3ad90bbb__0[0U] 
                                     << 0x1cU) | (IData)(
                                                         ((((QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT___tile_reset_domain_tile_auto_tl_other_masters_out_1_a_bits_mask)) 
                                                            << 0x2cU) 
                                                           | (((QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT___tile_reset_domain_tile_auto_tl_other_masters_out_1_a_bits_address)) 
                                                               << 0xcU) 
                                                              | (QData)((IData)(
                                                                                (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT___tile_reset_domain_tile_auto_tl_other_masters_out_1_a_bits_source) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT___tile_reset_domain_tile_auto_tl_other_masters_out_1_a_bits_size) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT___tile_reset_domain_tile_auto_tl_other_masters_out_1_a_bits_param) 
                                                                                << 3U) 
                                                                                | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT___tile_reset_domain_tile_auto_tl_other_masters_out_1_a_bits_opcode)))))))) 
                                                          >> 0x20U)));
        __Vtemp_hc05c661f__0[2U] = ((__Vtemp_h3ad90bbb__0[0U] 
                                     >> 4U) | (__Vtemp_h3ad90bbb__0[1U] 
                                               << 0x1cU));
        __Vtemp_hc05c661f__0[3U] = ((__Vtemp_h3ad90bbb__0[1U] 
                                     >> 4U) | (__Vtemp_h3ad90bbb__0[2U] 
                                               << 0x1cU));
        __Vtemp_hc05c661f__0[4U] = ((__Vtemp_h3ad90bbb__0[2U] 
                                     >> 4U) | (__Vtemp_h3ad90bbb__0[3U] 
                                               << 0x1cU));
        __Vtemp_hc05c661f__0[5U] = ((__Vtemp_h3ad90bbb__0[3U] 
                                     >> 4U) | (__Vtemp_h3ad90bbb__0[4U] 
                                               << 0x1cU));
        bufp->chgWData(oldp+3234,(__Vtemp_hc05c661f__0),189);
        bufp->chgWData(oldp+3240,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data),189);
        bufp->chgWData(oldp+3246,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT__ram_ext__DOT__Memory[0]),189);
        bufp->chgWData(oldp+3252,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT__ram_ext__DOT__Memory[1]),189);
        bufp->chgBit(oldp+3258,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT__enq_ptr_value));
        bufp->chgBit(oldp+3259,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT__deq_ptr_value));
        bufp->chgBit(oldp+3260,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT__maybe_full));
        bufp->chgBit(oldp+3261,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT__ptr_match));
        bufp->chgBit(oldp+3262,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT__empty));
        bufp->chgBit(oldp+3263,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT__full));
        bufp->chgBit(oldp+3264,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT__do_enq));
        bufp->chgBit(oldp+3265,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT__do_deq));
        __Vtemp_hb6ff69bc__1[0U] = (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_data_r);
        __Vtemp_hb6ff69bc__1[1U] = (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_data_r 
                                            >> 0x20U));
        __Vtemp_hb6ff69bc__1[2U] = (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_data_r_1);
        __Vtemp_hb6ff69bc__1[3U] = (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_data_r_1 
                                            >> 0x20U));
        VL_EXTEND_WW(129,128, __Vtemp_h7e033faf__0, __Vtemp_hb6ff69bc__1);
        __Vtemp_h828bc3e4__0[0U] = (IData)((((QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address)) 
                                             << 0xcU) 
                                            | (QData)((IData)(
                                                              (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_source) 
                                                                << 0xaU) 
                                                               | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tl_out_c_bits_size) 
                                                                   << 6U) 
                                                                  | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_c_bits_param) 
                                                                      << 3U) 
                                                                     | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tl_out_c_bits_opcode))))))));
        __Vtemp_h828bc3e4__0[1U] = ((__Vtemp_h7e033faf__0[0U] 
                                     << 0xcU) | (IData)(
                                                        ((((QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address)) 
                                                           << 0xcU) 
                                                          | (QData)((IData)(
                                                                            (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_source) 
                                                                              << 0xaU) 
                                                                             | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tl_out_c_bits_size) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_c_bits_param) 
                                                                                << 3U) 
                                                                                | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tl_out_c_bits_opcode))))))) 
                                                         >> 0x20U)));
        __Vtemp_h828bc3e4__0[2U] = ((__Vtemp_h7e033faf__0[0U] 
                                     >> 0x14U) | (__Vtemp_h7e033faf__0[1U] 
                                                  << 0xcU));
        __Vtemp_h828bc3e4__0[3U] = ((__Vtemp_h7e033faf__0[1U] 
                                     >> 0x14U) | (__Vtemp_h7e033faf__0[2U] 
                                                  << 0xcU));
        __Vtemp_h828bc3e4__0[4U] = ((__Vtemp_h7e033faf__0[2U] 
                                     >> 0x14U) | (__Vtemp_h7e033faf__0[3U] 
                                                  << 0xcU));
        __Vtemp_h828bc3e4__0[5U] = ((__Vtemp_h7e033faf__0[3U] 
                                     >> 0x14U) | (__Vtemp_h7e033faf__0[4U] 
                                                  << 0xcU));
        bufp->chgWData(oldp+3266,(__Vtemp_h828bc3e4__0),173);
        bufp->chgWData(oldp+3272,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data),173);
        bufp->chgWData(oldp+3278,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT__ram_ext__DOT__Memory[0]),173);
        bufp->chgWData(oldp+3284,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT__ram_ext__DOT__Memory[1]),173);
        bufp->chgBit(oldp+3290,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_e_q__DOT__enq_ptr_value));
        bufp->chgBit(oldp+3291,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_e_q__DOT__deq_ptr_value));
        bufp->chgBit(oldp+3292,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_e_q__DOT__maybe_full));
        bufp->chgBit(oldp+3293,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_e_q__DOT__ptr_match));
        bufp->chgBit(oldp+3294,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_e_q__DOT__empty));
        bufp->chgBit(oldp+3295,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_e_q__DOT__full));
        bufp->chgBit(oldp+3296,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_e_q__DOT__do_enq));
        bufp->chgCData(oldp+3297,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_e_q__DOT__ram_sink_ext__DOT__Memory[0]),4);
        bufp->chgCData(oldp+3298,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_e_q__DOT__ram_sink_ext__DOT__Memory[1]),4);
        bufp->chgCData(oldp+3299,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT__a_first_counter),8);
        bufp->chgCData(oldp+3300,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT__opcode),3);
        bufp->chgCData(oldp+3301,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT__param),3);
        bufp->chgCData(oldp+3302,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT__size),4);
        bufp->chgCData(oldp+3303,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT__source),5);
        bufp->chgIData(oldp+3304,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT__address),32);
        bufp->chgCData(oldp+3305,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT__d_first_counter),8);
        bufp->chgCData(oldp+3306,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT__opcode_1),3);
        bufp->chgCData(oldp+3307,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT__param_1),2);
        bufp->chgCData(oldp+3308,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT__size_1),4);
        bufp->chgCData(oldp+3309,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT__source_1),5);
        bufp->chgCData(oldp+3310,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT__sink),4);
        bufp->chgBit(oldp+3311,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT__denied));
        bufp->chgIData(oldp+3312,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT__inflight),32);
        bufp->chgWData(oldp+3313,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT__inflight_opcodes),128);
        bufp->chgWData(oldp+3317,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT__inflight_sizes),256);
        bufp->chgCData(oldp+3325,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT__a_first_counter_1),8);
        bufp->chgBit(oldp+3326,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT__a_first_counter_1))));
        bufp->chgCData(oldp+3327,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT__d_first_counter_1),8);
        bufp->chgBit(oldp+3328,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT__d_first_counter_1))));
        bufp->chgBit(oldp+3329,((6U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))));
        bufp->chgIData(oldp+3330,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT__watchdog),32);
        bufp->chgCData(oldp+3331,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT__d_first_counter_2),8);
        bufp->chgBit(oldp+3332,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT__d_first_counter_2))));
        bufp->chgBit(oldp+3333,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT__mask_acc));
        bufp->chgBit(oldp+3334,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT__mask_acc_1));
        bufp->chgBit(oldp+3335,((2U == (3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                              >> 6U)))));
        bufp->chgBit(oldp+3336,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT__mask_eq_2));
        bufp->chgBit(oldp+3337,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT__mask_acc_2));
        bufp->chgBit(oldp+3338,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT__mask_eq_3));
        bufp->chgBit(oldp+3339,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT__mask_acc_3));
        bufp->chgBit(oldp+3340,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT__mask_eq_4));
        bufp->chgBit(oldp+3341,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT__mask_acc_4));
        bufp->chgBit(oldp+3342,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT__mask_eq_5));
        bufp->chgBit(oldp+3343,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT__mask_acc_5));
        bufp->chgBit(oldp+3344,((1U == (3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                              >> 6U)))));
        bufp->chgBit(oldp+3345,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT__mask_eq_6));
        bufp->chgBit(oldp+3346,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT__mask_acc_6));
        bufp->chgBit(oldp+3347,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT__mask_eq_7));
        bufp->chgBit(oldp+3348,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT__mask_acc_7));
        bufp->chgBit(oldp+3349,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT__mask_eq_8));
        bufp->chgBit(oldp+3350,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT__mask_acc_8));
        bufp->chgBit(oldp+3351,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT__mask_eq_9));
        bufp->chgBit(oldp+3352,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT__mask_acc_9));
        bufp->chgBit(oldp+3353,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT__mask_eq_10));
        bufp->chgBit(oldp+3354,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT__mask_acc_10));
        bufp->chgBit(oldp+3355,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT__mask_eq_11));
        bufp->chgBit(oldp+3356,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT__mask_acc_11));
        bufp->chgBit(oldp+3357,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT__mask_eq_12));
        bufp->chgBit(oldp+3358,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT__mask_acc_12));
        bufp->chgBit(oldp+3359,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT__mask_eq_13));
        bufp->chgBit(oldp+3360,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT__mask_acc_13));
        bufp->chgSData(oldp+3361,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT__mask),16);
        bufp->chgIData(oldp+3362,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT___same_cycle_resp_T_1)
                                    ? ((0x1fU >= (0x1fU 
                                                  & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                     >> 0xaU)))
                                        ? ((IData)(1U) 
                                           << (0x1fU 
                                               & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                  >> 0xaU)))
                                        : 0U) : 0U)),32);
        bufp->chgBit(oldp+3363,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT__same_cycle_resp));
        bufp->chgCData(oldp+3364,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor_1__DOT__a_first_counter),8);
        bufp->chgCData(oldp+3365,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor_1__DOT__opcode),3);
        bufp->chgCData(oldp+3366,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor_1__DOT__param),3);
        bufp->chgCData(oldp+3367,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor_1__DOT__size),4);
        bufp->chgCData(oldp+3368,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor_1__DOT__source),2);
        bufp->chgIData(oldp+3369,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor_1__DOT__address),32);
        bufp->chgCData(oldp+3370,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor_1__DOT__d_first_counter),8);
        bufp->chgCData(oldp+3371,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor_1__DOT__opcode_1),3);
        bufp->chgCData(oldp+3372,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor_1__DOT__param_1),2);
        bufp->chgCData(oldp+3373,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor_1__DOT__size_1),4);
        bufp->chgCData(oldp+3374,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor_1__DOT__source_1),2);
        bufp->chgCData(oldp+3375,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor_1__DOT__sink),4);
        bufp->chgBit(oldp+3376,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor_1__DOT__denied));
        bufp->chgCData(oldp+3377,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor_1__DOT__c_first_counter),8);
        bufp->chgCData(oldp+3378,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor_1__DOT__opcode_3),3);
        bufp->chgCData(oldp+3379,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor_1__DOT__param_3),3);
        bufp->chgCData(oldp+3380,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor_1__DOT__size_3),4);
        bufp->chgCData(oldp+3381,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor_1__DOT__source_3),2);
        bufp->chgIData(oldp+3382,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor_1__DOT__address_2),32);
        bufp->chgCData(oldp+3383,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor_1__DOT__inflight),3);
        bufp->chgSData(oldp+3384,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor_1__DOT__inflight_opcodes),12);
        bufp->chgIData(oldp+3385,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor_1__DOT__inflight_sizes),24);
        bufp->chgCData(oldp+3386,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor_1__DOT__a_first_counter_1),8);
        bufp->chgBit(oldp+3387,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor_1__DOT__a_first_counter_1))));
        bufp->chgCData(oldp+3388,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor_1__DOT__d_first_counter_1),8);
        bufp->chgBit(oldp+3389,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor_1__DOT__d_first_counter_1))));
        bufp->chgBit(oldp+3390,((6U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_1_d_q__DOT___ram_ext_R0_data[0U]))));
        bufp->chgIData(oldp+3391,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor_1__DOT__watchdog),32);
        bufp->chgCData(oldp+3392,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor_1__DOT__inflight_1),3);
        bufp->chgIData(oldp+3393,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor_1__DOT__inflight_sizes_1),24);
        bufp->chgCData(oldp+3394,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor_1__DOT__c_first_counter_1),8);
        bufp->chgBit(oldp+3395,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor_1__DOT__c_first_counter_1))));
        bufp->chgCData(oldp+3396,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor_1__DOT__d_first_counter_2),8);
        bufp->chgBit(oldp+3397,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor_1__DOT__d_first_counter_2))));
        bufp->chgIData(oldp+3398,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor_1__DOT__watchdog_1),32);
        bufp->chgSData(oldp+3399,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor_1__DOT__inflight_2),16);
        bufp->chgCData(oldp+3400,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor_1__DOT__d_first_counter_3),8);
        bufp->chgBit(oldp+3401,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor_1__DOT__d_first_counter_3))));
        bufp->chgSData(oldp+3402,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor_1__DOT__d_set),16);
        bufp->chgBit(oldp+3403,((((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT___tile_reset_domain_tile_auto_tl_other_masters_out_1_a_bits_source)) 
                                  | (1U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT___tile_reset_domain_tile_auto_tl_other_masters_out_1_a_bits_source))) 
                                 | (2U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT___tile_reset_domain_tile_auto_tl_other_masters_out_1_a_bits_source)))));
        bufp->chgBit(oldp+3404,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor_1__DOT__mask_acc));
        bufp->chgBit(oldp+3405,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor_1__DOT__mask_acc_1));
        bufp->chgBit(oldp+3406,((2U == (3U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT___tile_reset_domain_tile_auto_tl_other_masters_out_1_a_bits_size)))));
        bufp->chgBit(oldp+3407,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor_1__DOT__mask_eq_2));
        bufp->chgBit(oldp+3408,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor_1__DOT__mask_acc_2));
        bufp->chgBit(oldp+3409,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor_1__DOT__mask_eq_3));
        bufp->chgBit(oldp+3410,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor_1__DOT__mask_acc_3));
        bufp->chgBit(oldp+3411,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor_1__DOT__mask_eq_4));
        bufp->chgBit(oldp+3412,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor_1__DOT__mask_acc_4));
        bufp->chgBit(oldp+3413,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor_1__DOT__mask_eq_5));
        bufp->chgBit(oldp+3414,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor_1__DOT__mask_acc_5));
        bufp->chgBit(oldp+3415,((1U == (3U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT___tile_reset_domain_tile_auto_tl_other_masters_out_1_a_bits_size)))));
        bufp->chgBit(oldp+3416,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor_1__DOT__mask_eq_6));
        bufp->chgBit(oldp+3417,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor_1__DOT__mask_acc_6));
        bufp->chgBit(oldp+3418,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor_1__DOT__mask_eq_7));
        bufp->chgBit(oldp+3419,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor_1__DOT__mask_acc_7));
        bufp->chgBit(oldp+3420,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor_1__DOT__mask_eq_8));
        bufp->chgBit(oldp+3421,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor_1__DOT__mask_acc_8));
        bufp->chgBit(oldp+3422,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor_1__DOT__mask_eq_9));
        bufp->chgBit(oldp+3423,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor_1__DOT__mask_acc_9));
        bufp->chgBit(oldp+3424,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor_1__DOT__mask_eq_10));
        bufp->chgBit(oldp+3425,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor_1__DOT__mask_acc_10));
        bufp->chgBit(oldp+3426,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor_1__DOT__mask_eq_11));
        bufp->chgBit(oldp+3427,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor_1__DOT__mask_acc_11));
        bufp->chgBit(oldp+3428,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor_1__DOT__mask_eq_12));
        bufp->chgBit(oldp+3429,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor_1__DOT__mask_acc_12));
        bufp->chgBit(oldp+3430,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor_1__DOT__mask_eq_13));
        bufp->chgBit(oldp+3431,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor_1__DOT__mask_acc_13));
        bufp->chgSData(oldp+3432,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor_1__DOT__mask),16);
        bufp->chgBit(oldp+3433,((((0U == (3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_1_d_q__DOT___ram_ext_R0_data[0U] 
                                                >> 9U))) 
                                  | (1U == (3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_1_d_q__DOT___ram_ext_R0_data[0U] 
                                                  >> 9U)))) 
                                 | (2U == (3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_1_d_q__DOT___ram_ext_R0_data[0U] 
                                                 >> 9U))))));
        bufp->chgBit(oldp+3434,((((((((((((((3U == 
                                             (0xfffffU 
                                              & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_1_b_q__DOT___ram_ext_R0_data[1U] 
                                                  << 9U) 
                                                 | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_1_b_q__DOT___ram_ext_R0_data[0U] 
                                                    >> 0x17U)))) 
                                            | (0x2010U 
                                               == (0xfffffU 
                                                   & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_1_b_q__DOT___ram_ext_R0_data[1U] 
                                                       << 9U) 
                                                      | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_1_b_q__DOT___ram_ext_R0_data[0U] 
                                                         >> 0x17U))))) 
                                           | (4U == 
                                              (0xfffffU 
                                               & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_1_b_q__DOT___ram_ext_R0_data[1U] 
                                                   << 9U) 
                                                  | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_1_b_q__DOT___ram_ext_R0_data[0U] 
                                                     >> 0x17U))))) 
                                          | (0x54000U 
                                             == (0xfffffU 
                                                 & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_1_b_q__DOT___ram_ext_R0_data[1U] 
                                                     << 9U) 
                                                    | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_1_b_q__DOT___ram_ext_R0_data[0U] 
                                                       >> 0x17U))))) 
                                         | (3U == (0x3fU 
                                                   & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_1_b_q__DOT___ram_ext_R0_data[1U] 
                                                      >> 5U)))) 
                                        | (0x200U == 
                                           (0xffffU 
                                            & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_1_b_q__DOT___ram_ext_R0_data[1U] 
                                                << 5U) 
                                               | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_1_b_q__DOT___ram_ext_R0_data[0U] 
                                                  >> 0x1bU))))) 
                                       | (0U == (0xfffffU 
                                                 & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_1_b_q__DOT___ram_ext_R0_data[1U] 
                                                     << 9U) 
                                                    | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_1_b_q__DOT___ram_ext_R0_data[0U] 
                                                       >> 0x17U))))) 
                                      | (1U == (0xffffU 
                                                & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_1_b_q__DOT___ram_ext_R0_data[1U] 
                                                    << 5U) 
                                                   | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_1_b_q__DOT___ram_ext_R0_data[0U] 
                                                      >> 0x1bU))))) 
                                     | (0x100U == (0xfffffU 
                                                   & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_1_b_q__DOT___ram_ext_R0_data[1U] 
                                                       << 9U) 
                                                      | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_1_b_q__DOT___ram_ext_R0_data[0U] 
                                                         >> 0x17U))))) 
                                    | (0x110U == (0xfffffU 
                                                  & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_1_b_q__DOT___ram_ext_R0_data[1U] 
                                                      << 9U) 
                                                     | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_1_b_q__DOT___ram_ext_R0_data[0U] 
                                                        >> 0x17U))))) 
                                   | (8U == (0xfU & 
                                             (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_1_b_q__DOT___ram_ext_R0_data[1U] 
                                              >> 7U)))) 
                                  | (0x10000U == (0xfffffU 
                                                  & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_1_b_q__DOT___ram_ext_R0_data[1U] 
                                                      << 9U) 
                                                     | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_1_b_q__DOT___ram_ext_R0_data[0U] 
                                                        >> 0x17U))))) 
                                 | (2U == (0xffffU 
                                           & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_1_b_q__DOT___ram_ext_R0_data[1U] 
                                               << 5U) 
                                              | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_1_b_q__DOT___ram_ext_R0_data[0U] 
                                                 >> 0x1bU)))))));
        bufp->chgBit(oldp+3435,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor_1__DOT__mask_acc_30));
        bufp->chgBit(oldp+3436,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor_1__DOT__mask_acc_31));
        bufp->chgBit(oldp+3437,((2U == (3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_1_b_q__DOT___ram_ext_R0_data[0U] 
                                              >> 5U)))));
        bufp->chgBit(oldp+3438,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor_1__DOT__mask_eq_32));
        bufp->chgBit(oldp+3439,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor_1__DOT__mask_acc_32));
        bufp->chgBit(oldp+3440,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor_1__DOT__mask_eq_33));
        bufp->chgBit(oldp+3441,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor_1__DOT__mask_acc_33));
        bufp->chgBit(oldp+3442,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor_1__DOT__mask_eq_34));
        bufp->chgBit(oldp+3443,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor_1__DOT__mask_acc_34));
        bufp->chgBit(oldp+3444,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor_1__DOT__mask_eq_35));
        bufp->chgBit(oldp+3445,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor_1__DOT__mask_acc_35));
        bufp->chgBit(oldp+3446,((1U == (3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_1_b_q__DOT___ram_ext_R0_data[0U] 
                                              >> 5U)))));
        bufp->chgBit(oldp+3447,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor_1__DOT__mask_eq_36));
        bufp->chgBit(oldp+3448,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor_1__DOT__mask_acc_36));
        bufp->chgBit(oldp+3449,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor_1__DOT__mask_eq_37));
        bufp->chgBit(oldp+3450,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor_1__DOT__mask_acc_37));
        bufp->chgBit(oldp+3451,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor_1__DOT__mask_eq_38));
        bufp->chgBit(oldp+3452,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor_1__DOT__mask_acc_38));
        bufp->chgBit(oldp+3453,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor_1__DOT__mask_eq_39));
        bufp->chgBit(oldp+3454,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor_1__DOT__mask_acc_39));
        bufp->chgBit(oldp+3455,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor_1__DOT__mask_eq_40));
        bufp->chgBit(oldp+3456,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor_1__DOT__mask_acc_40));
        bufp->chgBit(oldp+3457,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor_1__DOT__mask_eq_41));
        bufp->chgBit(oldp+3458,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor_1__DOT__mask_acc_41));
        bufp->chgBit(oldp+3459,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor_1__DOT__mask_eq_42));
        bufp->chgBit(oldp+3460,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor_1__DOT__mask_acc_42));
        bufp->chgBit(oldp+3461,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor_1__DOT__mask_eq_43));
        bufp->chgBit(oldp+3462,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor_1__DOT__mask_acc_43));
        bufp->chgSData(oldp+3463,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor_1__DOT__mask_1),16);
        bufp->chgBit(oldp+3464,(1U));
        bufp->chgBit(oldp+3465,((((((((((((((3U == 
                                             (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address 
                                              >> 0xcU)) 
                                            | (0x2010U 
                                               == (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address 
                                                   >> 0xcU))) 
                                           | (4U == 
                                              (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address 
                                               >> 0xcU))) 
                                          | (0x54000U 
                                             == (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address 
                                                 >> 0xcU))) 
                                         | (3U == (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address 
                                                   >> 0x1aU))) 
                                        | (0x200U == 
                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address 
                                            >> 0x10U))) 
                                       | (0U == (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address 
                                                 >> 0xcU))) 
                                      | (1U == (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address 
                                                >> 0x10U))) 
                                     | (0x100U == (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address 
                                                   >> 0xcU))) 
                                    | (0x110U == (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address 
                                                  >> 0xcU))) 
                                   | (8U == (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address 
                                             >> 0x1cU))) 
                                  | (0x10000U == (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address 
                                                  >> 0xcU))) 
                                 | (2U == (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address 
                                           >> 0x10U)))));
        bufp->chgCData(oldp+3466,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor_1__DOT___same_cycle_resp_T_1)
                                    ? (7U & ((IData)(1U) 
                                             << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT___tile_reset_domain_tile_auto_tl_other_masters_out_1_a_bits_source)))
                                    : 0U)),3);
        bufp->chgBit(oldp+3467,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor_1__DOT__same_cycle_resp));
        bufp->chgCData(oldp+3468,((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor_1__DOT___same_cycle_resp_T_3) 
                                    & (6U == (6U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tl_out_c_bits_opcode))))
                                    ? (7U & ((IData)(1U) 
                                             << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_source)))
                                    : 0U)),3);
        bufp->chgBit(oldp+3469,((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor_1__DOT___same_cycle_resp_T_3) 
                                  & (6U == (6U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tl_out_c_bits_opcode)))) 
                                 & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_source) 
                                    == (3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_1_d_q__DOT___ram_ext_R0_data[0U] 
                                              >> 9U))))));
        bufp->chgBit(oldp+3470,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__x1_a_q__DOT__enq_ptr_value));
        bufp->chgBit(oldp+3471,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__x1_a_q__DOT__deq_ptr_value));
        bufp->chgBit(oldp+3472,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__x1_a_q__DOT__maybe_full));
        bufp->chgBit(oldp+3473,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__x1_a_q__DOT__ptr_match));
        bufp->chgBit(oldp+3474,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__x1_a_q__DOT__empty));
        bufp->chgBit(oldp+3475,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__x1_a_q__DOT__full));
        bufp->chgBit(oldp+3476,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__x1_a_q__DOT__do_enq));
        bufp->chgBit(oldp+3477,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__x1_a_q__DOT__do_deq));
        bufp->chgWData(oldp+3478,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__x1_a_q__DOT___ram_ext_R0_data),192);
        bufp->chgWData(oldp+3484,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data),192);
        bufp->chgWData(oldp+3490,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__x1_a_q__DOT__ram_ext__DOT__Memory[0]),192);
        bufp->chgWData(oldp+3496,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__x1_a_q__DOT__ram_ext__DOT__Memory[1]),192);
        bufp->chgBit(oldp+3502,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__intsink__DOT__chain__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+3503,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__intsink__DOT__chain__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+3504,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__intsink__DOT__chain__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+3505,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___io_rocc_cmd_valid_output));
        bufp->chgCData(oldp+3506,((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                                   >> 0x19U)),7);
        bufp->chgCData(oldp+3507,((0x1fU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                                            >> 0x14U))),5);
        bufp->chgCData(oldp+3508,((0x1fU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                                            >> 0xfU))),5);
        bufp->chgBit(oldp+3509,((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                                       >> 0xeU))));
        bufp->chgBit(oldp+3510,((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                                       >> 0xdU))));
        bufp->chgBit(oldp+3511,((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                                       >> 0xcU))));
        bufp->chgCData(oldp+3512,((0x1fU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                                            >> 7U))),5);
        bufp->chgCData(oldp+3513,((0x7fU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst)),7);
        bufp->chgQData(oldp+3514,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_wdata),64);
        bufp->chgQData(oldp+3516,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_rs2),64);
        bufp->chgBit(oldp+3518,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_debug));
        bufp->chgBit(oldp+3519,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__io_status_cease_r));
        bufp->chgIData(oldp+3520,((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_misa)),32);
        bufp->chgCData(oldp+3521,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___csr_io_status_dprv),2);
        bufp->chgCData(oldp+3522,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_mstatus_prv),2);
        bufp->chgBit(oldp+3523,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_mstatus_gva));
        bufp->chgBit(oldp+3524,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_mstatus_tsr));
        bufp->chgBit(oldp+3525,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_mstatus_tw));
        bufp->chgBit(oldp+3526,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_mstatus_tvm));
        bufp->chgBit(oldp+3527,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_mstatus_mxr));
        bufp->chgBit(oldp+3528,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_mstatus_sum));
        bufp->chgBit(oldp+3529,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_mstatus_mprv));
        bufp->chgCData(oldp+3530,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_mstatus_fs),2);
        bufp->chgCData(oldp+3531,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_mstatus_mpp),2);
        bufp->chgBit(oldp+3532,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_mstatus_spp));
        bufp->chgBit(oldp+3533,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_mstatus_mpie));
        bufp->chgBit(oldp+3534,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_mstatus_spie));
        bufp->chgBit(oldp+3535,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_mstatus_mie));
        bufp->chgBit(oldp+3536,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_mstatus_sie));
        bufp->chgBit(oldp+3537,((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__raw_cmd_q__DOT__full)))));
        bufp->chgBit(oldp+3538,((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__cmdRouter__DOT__cmd__DOT__full)))));
        bufp->chgBit(oldp+3539,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT___cmdRouter_io_out_0_valid));
        bufp->chgCData(oldp+3540,((0x7fU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__cmdRouter__DOT__cmd__DOT___ram_ext_R0_data[0U])),7);
        bufp->chgCData(oldp+3541,((0x1fU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__cmdRouter__DOT__cmd__DOT___ram_ext_R0_data[0U] 
                                            >> 7U))),5);
        bufp->chgCData(oldp+3542,((0x1fU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__cmdRouter__DOT__cmd__DOT___ram_ext_R0_data[0U] 
                                            >> 0xcU))),5);
        bufp->chgBit(oldp+3543,((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__cmdRouter__DOT__cmd__DOT___ram_ext_R0_data[0U] 
                                       >> 0x11U))));
        bufp->chgBit(oldp+3544,((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__cmdRouter__DOT__cmd__DOT___ram_ext_R0_data[0U] 
                                       >> 0x12U))));
        bufp->chgBit(oldp+3545,((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__cmdRouter__DOT__cmd__DOT___ram_ext_R0_data[0U] 
                                       >> 0x13U))));
        bufp->chgCData(oldp+3546,((0x1fU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__cmdRouter__DOT__cmd__DOT___ram_ext_R0_data[0U] 
                                            >> 0x14U))),5);
        bufp->chgCData(oldp+3547,((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__cmdRouter__DOT__cmd__DOT___ram_ext_R0_data[0U] 
                                   >> 0x19U)),7);
        bufp->chgQData(oldp+3548,((((QData)((IData)(
                                                    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__cmdRouter__DOT__cmd__DOT___ram_ext_R0_data[2U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__cmdRouter__DOT__cmd__DOT___ram_ext_R0_data[1U])))),64);
        bufp->chgQData(oldp+3550,((((QData)((IData)(
                                                    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__cmdRouter__DOT__cmd__DOT___ram_ext_R0_data[4U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__cmdRouter__DOT__cmd__DOT___ram_ext_R0_data[3U])))),64);
        bufp->chgBit(oldp+3552,((1U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__cmdRouter__DOT__cmd__DOT___ram_ext_R0_data[5U])));
        bufp->chgBit(oldp+3553,((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__cmdRouter__DOT__cmd__DOT___ram_ext_R0_data[5U] 
                                       >> 1U))));
        bufp->chgBit(oldp+3554,((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__cmdRouter__DOT__cmd__DOT___ram_ext_R0_data[5U] 
                                       >> 2U))));
        bufp->chgIData(oldp+3555,(((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__cmdRouter__DOT__cmd__DOT___ram_ext_R0_data[6U] 
                                    << 0x1dU) | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__cmdRouter__DOT__cmd__DOT___ram_ext_R0_data[5U] 
                                                 >> 3U))),32);
        bufp->chgCData(oldp+3556,((3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__cmdRouter__DOT__cmd__DOT___ram_ext_R0_data[6U] 
                                         >> 3U))),2);
        bufp->chgBit(oldp+3557,((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__cmdRouter__DOT__cmd__DOT___ram_ext_R0_data[6U] 
                                       >> 5U))));
        bufp->chgCData(oldp+3558,((3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__cmdRouter__DOT__cmd__DOT___ram_ext_R0_data[6U] 
                                         >> 6U))),2);
        bufp->chgBit(oldp+3559,((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__cmdRouter__DOT__cmd__DOT___ram_ext_R0_data[6U] 
                                       >> 8U))));
        bufp->chgBit(oldp+3560,((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__cmdRouter__DOT__cmd__DOT___ram_ext_R0_data[6U] 
                                       >> 9U))));
        bufp->chgIData(oldp+3561,((0x7fffffU & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__cmdRouter__DOT__cmd__DOT___ram_ext_R0_data[7U] 
                                                 << 0x16U) 
                                                | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__cmdRouter__DOT__cmd__DOT___ram_ext_R0_data[6U] 
                                                   >> 0xaU)))),23);
        bufp->chgBit(oldp+3562,((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__cmdRouter__DOT__cmd__DOT___ram_ext_R0_data[7U] 
                                       >> 1U))));
        bufp->chgBit(oldp+3563,((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__cmdRouter__DOT__cmd__DOT___ram_ext_R0_data[7U] 
                                       >> 2U))));
        bufp->chgBit(oldp+3564,((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__cmdRouter__DOT__cmd__DOT___ram_ext_R0_data[7U] 
                                       >> 3U))));
        bufp->chgBit(oldp+3565,((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__cmdRouter__DOT__cmd__DOT___ram_ext_R0_data[7U] 
                                       >> 4U))));
        bufp->chgCData(oldp+3566,((3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__cmdRouter__DOT__cmd__DOT___ram_ext_R0_data[7U] 
                                         >> 5U))),2);
        bufp->chgCData(oldp+3567,((3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__cmdRouter__DOT__cmd__DOT___ram_ext_R0_data[7U] 
                                         >> 7U))),2);
        bufp->chgBit(oldp+3568,((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__cmdRouter__DOT__cmd__DOT___ram_ext_R0_data[7U] 
                                       >> 9U))));
        bufp->chgCData(oldp+3569,((0xffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__cmdRouter__DOT__cmd__DOT___ram_ext_R0_data[7U] 
                                            >> 0xaU))),8);
        bufp->chgBit(oldp+3570,((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__cmdRouter__DOT__cmd__DOT___ram_ext_R0_data[7U] 
                                       >> 0x12U))));
        bufp->chgBit(oldp+3571,((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__cmdRouter__DOT__cmd__DOT___ram_ext_R0_data[7U] 
                                       >> 0x13U))));
        bufp->chgBit(oldp+3572,((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__cmdRouter__DOT__cmd__DOT___ram_ext_R0_data[7U] 
                                       >> 0x14U))));
        bufp->chgBit(oldp+3573,((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__cmdRouter__DOT__cmd__DOT___ram_ext_R0_data[7U] 
                                       >> 0x15U))));
        bufp->chgBit(oldp+3574,((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__cmdRouter__DOT__cmd__DOT___ram_ext_R0_data[7U] 
                                       >> 0x16U))));
        bufp->chgBit(oldp+3575,((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__cmdRouter__DOT__cmd__DOT___ram_ext_R0_data[7U] 
                                       >> 0x17U))));
        bufp->chgCData(oldp+3576,((3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__cmdRouter__DOT__cmd__DOT___ram_ext_R0_data[7U] 
                                         >> 0x18U))),2);
        bufp->chgCData(oldp+3577,((3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__cmdRouter__DOT__cmd__DOT___ram_ext_R0_data[7U] 
                                         >> 0x1aU))),2);
        bufp->chgCData(oldp+3578,((3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__cmdRouter__DOT__cmd__DOT___ram_ext_R0_data[7U] 
                                         >> 0x1cU))),2);
        bufp->chgCData(oldp+3579,((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__cmdRouter__DOT__cmd__DOT___ram_ext_R0_data[7U] 
                                   >> 0x1eU)),2);
        bufp->chgBit(oldp+3580,((1U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__cmdRouter__DOT__cmd__DOT___ram_ext_R0_data[8U])));
        bufp->chgBit(oldp+3581,((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__cmdRouter__DOT__cmd__DOT___ram_ext_R0_data[8U] 
                                       >> 1U))));
        bufp->chgBit(oldp+3582,((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__cmdRouter__DOT__cmd__DOT___ram_ext_R0_data[8U] 
                                       >> 2U))));
        bufp->chgBit(oldp+3583,((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__cmdRouter__DOT__cmd__DOT___ram_ext_R0_data[8U] 
                                       >> 3U))));
        bufp->chgBit(oldp+3584,((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__cmdRouter__DOT__cmd__DOT___ram_ext_R0_data[8U] 
                                       >> 4U))));
        bufp->chgBit(oldp+3585,((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__cmdRouter__DOT__cmd__DOT___ram_ext_R0_data[8U] 
                                       >> 5U))));
        bufp->chgBit(oldp+3586,((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__cmdRouter__DOT__cmd__DOT___ram_ext_R0_data[8U] 
                                       >> 6U))));
        bufp->chgBit(oldp+3587,((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__cmdRouter__DOT__cmd__DOT___ram_ext_R0_data[8U] 
                                       >> 7U))));
        bufp->chgBit(oldp+3588,((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__cmdRouter__DOT__cmd__DOT___ram_ext_R0_data[8U] 
                                       >> 8U))));
        bufp->chgBit(oldp+3589,((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__cmdRouter__DOT__cmd__DOT__empty)))));
        bufp->chgBit(oldp+3590,((0x7bU == (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__cmdRouter__DOT__cmd__DOT___ram_ext_R0_data[0U] 
                                           >> 0x19U))));
        bufp->chgBit(oldp+3591,(((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__raw_cmd_q__DOT__full)) 
                                 & (0x7bU == (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__cmdRouter__DOT__cmd__DOT___ram_ext_R0_data[0U] 
                                              >> 0x19U)))));
        bufp->chgBit(oldp+3592,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__cmdRouter__DOT__cmd__DOT__enq_ptr_value));
        bufp->chgBit(oldp+3593,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__cmdRouter__DOT__cmd__DOT__deq_ptr_value));
        bufp->chgBit(oldp+3594,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__cmdRouter__DOT__cmd__DOT__maybe_full));
        bufp->chgBit(oldp+3595,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__cmdRouter__DOT__cmd__DOT__ptr_match));
        bufp->chgBit(oldp+3596,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__cmdRouter__DOT__cmd__DOT__empty));
        bufp->chgBit(oldp+3597,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__cmdRouter__DOT__cmd__DOT__full));
        bufp->chgBit(oldp+3598,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__cmdRouter__DOT__cmd__DOT__do_enq));
        bufp->chgBit(oldp+3599,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__cmdRouter__DOT__cmd__DOT__do_deq));
        bufp->chgWData(oldp+3600,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__cmdRouter__DOT__cmd__DOT___ram_ext_R0_data),265);
        bufp->chgWData(oldp+3609,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__cmdRouter__DOT__cmd__DOT__ram_ext__DOT__Memory[0]),265);
        bufp->chgWData(oldp+3618,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__cmdRouter__DOT__cmd__DOT__ram_ext__DOT__Memory[1]),265);
        bufp->chgBit(oldp+3627,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT___frontend_io_cpu_resp_valid));
        bufp->chgBit(oldp+3628,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__fq__DOT__valid_0)
                                  ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__fq__DOT__elts_0_btb_taken)
                                  : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT____Vcellinp__fq__io_enq_bits_btb_taken))));
        bufp->chgBit(oldp+3629,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__fq__DOT__valid_0)
                                  ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__fq__DOT__elts_0_btb_bridx)
                                  : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT____Vcellinp__fq__io_enq_bits_btb_bridx))));
        bufp->chgCData(oldp+3630,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT___frontend_io_cpu_resp_bits_btb_entry),5);
        bufp->chgCData(oldp+3631,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT___frontend_io_cpu_resp_bits_btb_bht_history),8);
        bufp->chgQData(oldp+3632,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT___frontend_io_cpu_resp_bits_pc),40);
        bufp->chgIData(oldp+3634,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT___frontend_io_cpu_resp_bits_data),32);
        bufp->chgBit(oldp+3635,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT___frontend_io_cpu_resp_bits_xcpt_pf_inst));
        bufp->chgBit(oldp+3636,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT___frontend_io_cpu_resp_bits_xcpt_gf_inst));
        bufp->chgBit(oldp+3637,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT___frontend_io_cpu_resp_bits_xcpt_ae_inst));
        bufp->chgBit(oldp+3638,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT___frontend_io_cpu_resp_bits_replay));
        bufp->chgBit(oldp+3639,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__gpa_valid));
        bufp->chgBit(oldp+3640,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT___dcacheArb_io_requestor_2_req_ready));
        bufp->chgBit(oldp+3641,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT___dcacheArb_io_requestor_2_s2_nack));
        bufp->chgBit(oldp+3642,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT___dcacheArb_io_requestor_2_resp_valid));
        bufp->chgCData(oldp+3643,((0x3fU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_req_tag) 
                                            >> 2U))),8);
        bufp->chgCData(oldp+3644,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_req_size),2);
        bufp->chgQData(oldp+3645,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT___dcache_io_cpu_resp_bits_data),64);
        bufp->chgBit(oldp+3647,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__doUncachedResp));
        bufp->chgBit(oldp+3648,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_read));
        bufp->chgQData(oldp+3649,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT___dcache_io_cpu_resp_bits_data_word_bypass),64);
        bufp->chgBit(oldp+3651,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT___io_cpu_replay_next_output));
        bufp->chgBit(oldp+3652,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT___io_cpu_s2_xcpt_ma_ld_output));
        bufp->chgBit(oldp+3653,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT___io_cpu_s2_xcpt_ma_st_output));
        bufp->chgBit(oldp+3654,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT___io_cpu_s2_xcpt_pf_ld_output));
        bufp->chgBit(oldp+3655,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT___io_cpu_s2_xcpt_pf_st_output));
        bufp->chgBit(oldp+3656,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT___io_cpu_s2_xcpt_gf_ld_output));
        bufp->chgBit(oldp+3657,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT___io_cpu_s2_xcpt_gf_st_output));
        bufp->chgBit(oldp+3658,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT___io_cpu_s2_xcpt_ae_ld_output));
        bufp->chgBit(oldp+3659,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT___io_cpu_s2_xcpt_ae_st_output));
        bufp->chgBit(oldp+3660,((1U & (~ (((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_valid) 
                                             & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_req_no_xcpt))) 
                                            | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_valid) 
                                               & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_req_no_xcpt)))) 
                                           | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__cached_grant_wait)) 
                                          | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__uncachedInFlight_0))))));
        bufp->chgBit(oldp+3661,((((1U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__io_cpu_perf_release_counter)) 
                                  | (0U == ((1U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tl_out_c_bits_opcode))
                                             ? (0xffU 
                                                & (~ 
                                                   (((0x1aU 
                                                      >= (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tl_out_c_bits_size))
                                                      ? 
                                                     (0x7ffffffU 
                                                      & ((IData)(0xfffU) 
                                                         << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tl_out_c_bits_size)))
                                                      : 0U) 
                                                    >> 4U)))
                                             : 0U))) 
                                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT___T_366))));
        bufp->chgBit(oldp+3662,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT___dcache_io_cpu_perf_grant));
        bufp->chgBit(oldp+3663,((1U & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__wb_toint_valid) 
                                        | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_wen)) 
                                       | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__wen)))));
        bufp->chgCData(oldp+3664,((0x1fU & ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__wb_toint_valid)
                                               ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__wb_toint_exc)
                                               : 0U) 
                                             | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_wen)
                                                 ? 
                                                ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_typeTag)
                                                  ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___divSqrt_1_io_exceptionFlags)
                                                  : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___divSqrt_io_exceptionFlags))
                                                 : 0U)) 
                                            | ((1U 
                                                & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__wen))
                                                ? (
                                                   (0x13U 
                                                    >= 
                                                    (0x1fU 
                                                     & ((IData)(5U) 
                                                        * (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__wbInfo_0_pipeid))))
                                                    ? 
                                                   ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__io_out_b_exc) 
                                                      << 0xfU) 
                                                     | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___sfma_io_out_bits_exc) 
                                                         << 0xaU) 
                                                        | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__io_out_b_exc) 
                                                            << 5U) 
                                                           | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__io_out_b_exc)))) 
                                                    >> 
                                                    (0x1fU 
                                                     & ((IData)(5U) 
                                                        * (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__wbInfo_0_pipeid))))
                                                    : 0U)
                                                : 0U)))),5);
        bufp->chgQData(oldp+3665,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__store),64);
        bufp->chgQData(oldp+3667,(((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_wflags)
                                           ? ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_ren2)) 
                                              & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_typ) 
                                                 >> 1U))
                                           : ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_rm)) 
                                              & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_fmt))))
                                    ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__toint
                                    : (((QData)((IData)(
                                                        (- (IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__toint 
                                                                               >> 0x1fU))))))) 
                                        << 0x20U) | (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__toint))))),64);
        bufp->chgBit(oldp+3669,((1U & (~ ((((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ex_reg_valid) 
                                              & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ex_reg_ctrl_wflags)) 
                                             | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__mem_reg_valid) 
                                                & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__mem_ctrl_wflags))) 
                                            | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__wb_toint_valid)) 
                                           | (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__wen))) 
                                          | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_inFlight))))));
        bufp->chgBit(oldp+3670,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___io_nack_mem_output));
        bufp->chgBit(oldp+3671,((((5U == (7U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                                                >> 0xcU))) 
                                  | (6U == (7U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                                                  >> 0xcU)))) 
                                 | (IData)(((0x7000U 
                                             == (0x7000U 
                                                 & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits)) 
                                            & (4U < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_frm)))))));
        bufp->chgBit(oldp+3672,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT___fpuOpt_io_dec_wen));
        bufp->chgBit(oldp+3673,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___fp_decoder_io_sigs_ren1));
        bufp->chgBit(oldp+3674,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___fp_decoder_io_sigs_ren2));
        bufp->chgBit(oldp+3675,((0x1fU == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fp_decoder__DOT___decoder_decoded_T))));
        bufp->chgBit(oldp+3676,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__wb_reg_valid) 
                                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__io_sboard_set_REG))));
        bufp->chgBit(oldp+3677,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT___fpuOpt_io_sboard_clr));
        bufp->chgCData(oldp+3678,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__waddr),5);
        bufp->chgBit(oldp+3679,((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__respArb_io_in_0_q__DOT__empty)))));
        bufp->chgCData(oldp+3680,((0x1fU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__respArb_io_in_0_q__DOT___ram_ext_R0_data[0U])),5);
        bufp->chgQData(oldp+3681,((((QData)((IData)(
                                                    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__respArb_io_in_0_q__DOT___ram_ext_R0_data[2U])) 
                                    << 0x3bU) | (((QData)((IData)(
                                                                  vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__respArb_io_in_0_q__DOT___ram_ext_R0_data[1U])) 
                                                  << 0x1bU) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__respArb_io_in_0_q__DOT___ram_ext_R0_data[0U])) 
                                                    >> 5U)))),64);
        bufp->chgBit(oldp+3683,((1U & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__cmdRouter__DOT__cmd__DOT__empty)) 
                                       | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___io_busy_output)))));
        bufp->chgBit(oldp+3684,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__tlb__DOT__tlbs_0__DOT__interrupt));
        bufp->chgBit(oldp+3685,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__imem_might_request_reg));
        bufp->chgBit(oldp+3686,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__take_pc_mem_wb));
        bufp->chgQData(oldp+3687,((0xffffffffffULL 
                                   & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_xcpt) 
                                       | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___csr_io_eret))
                                       ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__insn_ret)
                                           ? ((0x20000000U 
                                               & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst)
                                               ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___T_427)
                                                   ? 
                                                  (~ 
                                                   (1ULL 
                                                    | ((~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_dpc) 
                                                       | ((QData)((IData)(
                                                                          (1U 
                                                                           & (~ (IData)(
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_misa 
                                                                                >> 2U)))))) 
                                                          << 1U))))
                                                   : 
                                                  (~ 
                                                   (1ULL 
                                                    | ((~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_mepc) 
                                                       | ((QData)((IData)(
                                                                          (1U 
                                                                           & (~ (IData)(
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_misa 
                                                                                >> 2U)))))) 
                                                          << 1U)))))
                                               : (~ 
                                                  (1ULL 
                                                   | ((~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_sepc) 
                                                      | ((QData)((IData)(
                                                                         (1U 
                                                                          & (~ (IData)(
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_misa 
                                                                                >> 2U)))))) 
                                                         << 1U)))))
                                           : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__trapToDebug)
                                               ? (QData)((IData)(
                                                                 ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_debug)
                                                                   ? 
                                                                  (0x800U 
                                                                   | (8U 
                                                                      & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__insn_break)) 
                                                                         << 3U)))
                                                                   : 0x800U)))
                                               : (0xfffffffffcULL 
                                                  & (((IData)(
                                                              (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___GEN_19 
                                                               & (0x8000000000000000ULL 
                                                                  == 
                                                                  (0x80000000000000c0ULL 
                                                                   & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__cause))))
                                                       ? 
                                                      (((QData)((IData)(
                                                                        (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___GEN_19 
                                                                         >> 8U))) 
                                                        << 6U) 
                                                       | (QData)((IData)(
                                                                         (0x3fU 
                                                                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__cause)))))
                                                       : 
                                                      (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___GEN_19 
                                                       >> 2U)) 
                                                     << 2U))))
                                       : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__replay_wb)
                                           ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_pc
                                           : (0xfffffffffeULL 
                                              & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___mem_npc_T_4))))),40);
    }
}
