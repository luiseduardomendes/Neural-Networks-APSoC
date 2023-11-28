// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VTestHarness__Syms.h"


VL_ATTR_COLD void VTestHarness___024root__trace_init_sub__TOP__18(VTestHarness___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root__trace_init_sub__TOP__18\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+37416,"hitsVec_4", false,-1);
    tracep->declBit(c+37417,"hitsVec_5", false,-1);
    tracep->declBus(c+37418,"real_hits", false,-1, 5,0);
    tracep->declBus(c+37419,"hits", false,-1, 6,0);
    tracep->declBus(c+37420,"ptw_pf_array", false,-1, 6,0);
    tracep->declBus(c+37421,"priv_rw_ok", false,-1, 5,0);
    tracep->declBus(c+37422,"c_array", false,-1, 6,0);
    tracep->declBit(c+37423,"bad_va", false,-1);
    tracep->declBit(c+40413,"cmd_put_partial", false,-1);
    tracep->declBit(c+37339,"cmd_read", false,-1);
    tracep->declBit(c+37424,"cmd_write_perms", false,-1);
    tracep->declBus(c+40455,"ae_array", false,-1, 6,0);
    tracep->declBit(c+37425,"tlb_miss", false,-1);
    tracep->declBus(c+37426,"state_reg_1", false,-1, 2,0);
    tracep->declBit(c+37427,"multipleHits_rightOne_1", false,-1);
    tracep->declBit(c+37428,"multipleHits_rightOne_3", false,-1);
    tracep->declBit(c+37429,"multipleHits", false,-1);
    tracep->declBit(c+37430,"superpage_hits_1", false,-1);
    tracep->declBit(c+37431,"superpage_hits_2", false,-1);
    tracep->declBit(c+37432,"superpage_hits_3", false,-1);
    tracep->declBus(c+37433,"hi_1", false,-1, 1,0);
    tracep->declBit(c+37434,"invalidate_refill", false,-1);
    tracep->declBit(c+37435,"newEntry_px", false,-1);
    tracep->declBit(c+37436,"refill_v", false,-1);
    tracep->declBit(c+37437,"newEntry_g", false,-1);
    tracep->declBit(c+37438,"newEntry_sr", false,-1);
    tracep->declBit(c+37439,"newEntry_sw", false,-1);
    tracep->declBit(c+37440,"newEntry_sx", false,-1);
    tracep->pushNamePrefix("entries_barrier ");
    tracep->declBus(c+37441,"io_x_ppn", false,-1, 19,0);
    tracep->declBit(c+37442,"io_x_u", false,-1);
    tracep->declBit(c+37443,"io_x_ae_ptw", false,-1);
    tracep->declBit(c+37444,"io_x_ae_final", false,-1);
    tracep->declBit(c+37445,"io_x_pf", false,-1);
    tracep->declBit(c+37446,"io_x_gf", false,-1);
    tracep->declBit(c+37447,"io_x_sw", false,-1);
    tracep->declBit(c+37448,"io_x_sx", false,-1);
    tracep->declBit(c+37449,"io_x_sr", false,-1);
    tracep->declBit(c+37450,"io_x_pw", false,-1);
    tracep->declBit(c+37451,"io_x_px", false,-1);
    tracep->declBit(c+37452,"io_x_pr", false,-1);
    tracep->declBit(c+37453,"io_x_ppp", false,-1);
    tracep->declBit(c+37454,"io_x_pal", false,-1);
    tracep->declBit(c+37455,"io_x_paa", false,-1);
    tracep->declBit(c+37456,"io_x_eff", false,-1);
    tracep->declBit(c+37457,"io_x_c", false,-1);
    tracep->declBus(c+37441,"io_y_ppn", false,-1, 19,0);
    tracep->declBit(c+37442,"io_y_u", false,-1);
    tracep->declBit(c+37443,"io_y_ae_ptw", false,-1);
    tracep->declBit(c+37444,"io_y_ae_final", false,-1);
    tracep->declBit(c+37445,"io_y_pf", false,-1);
    tracep->declBit(c+37446,"io_y_gf", false,-1);
    tracep->declBit(c+37447,"io_y_sw", false,-1);
    tracep->declBit(c+37448,"io_y_sx", false,-1);
    tracep->declBit(c+37449,"io_y_sr", false,-1);
    tracep->declBit(c+37450,"io_y_pw", false,-1);
    tracep->declBit(c+37451,"io_y_px", false,-1);
    tracep->declBit(c+37452,"io_y_pr", false,-1);
    tracep->declBit(c+37453,"io_y_ppp", false,-1);
    tracep->declBit(c+37454,"io_y_pal", false,-1);
    tracep->declBit(c+37455,"io_y_paa", false,-1);
    tracep->declBit(c+37456,"io_y_eff", false,-1);
    tracep->declBit(c+37457,"io_y_c", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("entries_barrier_1 ");
    tracep->declBus(c+37458,"io_x_ppn", false,-1, 19,0);
    tracep->declBit(c+37459,"io_x_u", false,-1);
    tracep->declBit(c+37460,"io_x_ae_ptw", false,-1);
    tracep->declBit(c+37461,"io_x_ae_final", false,-1);
    tracep->declBit(c+37462,"io_x_pf", false,-1);
    tracep->declBit(c+37463,"io_x_gf", false,-1);
    tracep->declBit(c+37464,"io_x_sw", false,-1);
    tracep->declBit(c+37465,"io_x_sx", false,-1);
    tracep->declBit(c+37466,"io_x_sr", false,-1);
    tracep->declBit(c+37467,"io_x_pw", false,-1);
    tracep->declBit(c+37468,"io_x_px", false,-1);
    tracep->declBit(c+37469,"io_x_pr", false,-1);
    tracep->declBit(c+37470,"io_x_ppp", false,-1);
    tracep->declBit(c+37471,"io_x_pal", false,-1);
    tracep->declBit(c+37472,"io_x_paa", false,-1);
    tracep->declBit(c+37473,"io_x_eff", false,-1);
    tracep->declBit(c+37474,"io_x_c", false,-1);
    tracep->declBus(c+37458,"io_y_ppn", false,-1, 19,0);
    tracep->declBit(c+37459,"io_y_u", false,-1);
    tracep->declBit(c+37460,"io_y_ae_ptw", false,-1);
    tracep->declBit(c+37461,"io_y_ae_final", false,-1);
    tracep->declBit(c+37462,"io_y_pf", false,-1);
    tracep->declBit(c+37463,"io_y_gf", false,-1);
    tracep->declBit(c+37464,"io_y_sw", false,-1);
    tracep->declBit(c+37465,"io_y_sx", false,-1);
    tracep->declBit(c+37466,"io_y_sr", false,-1);
    tracep->declBit(c+37467,"io_y_pw", false,-1);
    tracep->declBit(c+37468,"io_y_px", false,-1);
    tracep->declBit(c+37469,"io_y_pr", false,-1);
    tracep->declBit(c+37470,"io_y_ppp", false,-1);
    tracep->declBit(c+37471,"io_y_pal", false,-1);
    tracep->declBit(c+37472,"io_y_paa", false,-1);
    tracep->declBit(c+37473,"io_y_eff", false,-1);
    tracep->declBit(c+37474,"io_y_c", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("entries_barrier_2 ");
    tracep->declBus(c+37475,"io_x_ppn", false,-1, 19,0);
    tracep->declBit(c+37476,"io_x_u", false,-1);
    tracep->declBit(c+37477,"io_x_ae_ptw", false,-1);
    tracep->declBit(c+37478,"io_x_ae_final", false,-1);
    tracep->declBit(c+37479,"io_x_pf", false,-1);
    tracep->declBit(c+37480,"io_x_gf", false,-1);
    tracep->declBit(c+37481,"io_x_sw", false,-1);
    tracep->declBit(c+37482,"io_x_sx", false,-1);
    tracep->declBit(c+37483,"io_x_sr", false,-1);
    tracep->declBit(c+37484,"io_x_pw", false,-1);
    tracep->declBit(c+37485,"io_x_px", false,-1);
    tracep->declBit(c+37486,"io_x_pr", false,-1);
    tracep->declBit(c+37487,"io_x_ppp", false,-1);
    tracep->declBit(c+37488,"io_x_pal", false,-1);
    tracep->declBit(c+37489,"io_x_paa", false,-1);
    tracep->declBit(c+37490,"io_x_eff", false,-1);
    tracep->declBit(c+37491,"io_x_c", false,-1);
    tracep->declBus(c+37475,"io_y_ppn", false,-1, 19,0);
    tracep->declBit(c+37476,"io_y_u", false,-1);
    tracep->declBit(c+37477,"io_y_ae_ptw", false,-1);
    tracep->declBit(c+37478,"io_y_ae_final", false,-1);
    tracep->declBit(c+37479,"io_y_pf", false,-1);
    tracep->declBit(c+37480,"io_y_gf", false,-1);
    tracep->declBit(c+37481,"io_y_sw", false,-1);
    tracep->declBit(c+37482,"io_y_sx", false,-1);
    tracep->declBit(c+37483,"io_y_sr", false,-1);
    tracep->declBit(c+37484,"io_y_pw", false,-1);
    tracep->declBit(c+37485,"io_y_px", false,-1);
    tracep->declBit(c+37486,"io_y_pr", false,-1);
    tracep->declBit(c+37487,"io_y_ppp", false,-1);
    tracep->declBit(c+37488,"io_y_pal", false,-1);
    tracep->declBit(c+37489,"io_y_paa", false,-1);
    tracep->declBit(c+37490,"io_y_eff", false,-1);
    tracep->declBit(c+37491,"io_y_c", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("entries_barrier_3 ");
    tracep->declBus(c+37492,"io_x_ppn", false,-1, 19,0);
    tracep->declBit(c+37493,"io_x_u", false,-1);
    tracep->declBit(c+37494,"io_x_ae_ptw", false,-1);
    tracep->declBit(c+37495,"io_x_ae_final", false,-1);
    tracep->declBit(c+37496,"io_x_pf", false,-1);
    tracep->declBit(c+37497,"io_x_gf", false,-1);
    tracep->declBit(c+37498,"io_x_sw", false,-1);
    tracep->declBit(c+37499,"io_x_sx", false,-1);
    tracep->declBit(c+37500,"io_x_sr", false,-1);
    tracep->declBit(c+37501,"io_x_pw", false,-1);
    tracep->declBit(c+37502,"io_x_px", false,-1);
    tracep->declBit(c+37503,"io_x_pr", false,-1);
    tracep->declBit(c+37504,"io_x_ppp", false,-1);
    tracep->declBit(c+37505,"io_x_pal", false,-1);
    tracep->declBit(c+37506,"io_x_paa", false,-1);
    tracep->declBit(c+37507,"io_x_eff", false,-1);
    tracep->declBit(c+37508,"io_x_c", false,-1);
    tracep->declBus(c+37492,"io_y_ppn", false,-1, 19,0);
    tracep->declBit(c+37493,"io_y_u", false,-1);
    tracep->declBit(c+37494,"io_y_ae_ptw", false,-1);
    tracep->declBit(c+37495,"io_y_ae_final", false,-1);
    tracep->declBit(c+37496,"io_y_pf", false,-1);
    tracep->declBit(c+37497,"io_y_gf", false,-1);
    tracep->declBit(c+37498,"io_y_sw", false,-1);
    tracep->declBit(c+37499,"io_y_sx", false,-1);
    tracep->declBit(c+37500,"io_y_sr", false,-1);
    tracep->declBit(c+37501,"io_y_pw", false,-1);
    tracep->declBit(c+37502,"io_y_px", false,-1);
    tracep->declBit(c+37503,"io_y_pr", false,-1);
    tracep->declBit(c+37504,"io_y_ppp", false,-1);
    tracep->declBit(c+37505,"io_y_pal", false,-1);
    tracep->declBit(c+37506,"io_y_paa", false,-1);
    tracep->declBit(c+37507,"io_y_eff", false,-1);
    tracep->declBit(c+37508,"io_y_c", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("entries_barrier_4 ");
    tracep->declBus(c+37509,"io_x_ppn", false,-1, 19,0);
    tracep->declBit(c+37510,"io_x_u", false,-1);
    tracep->declBit(c+37511,"io_x_ae_ptw", false,-1);
    tracep->declBit(c+37512,"io_x_ae_final", false,-1);
    tracep->declBit(c+37513,"io_x_pf", false,-1);
    tracep->declBit(c+37514,"io_x_gf", false,-1);
    tracep->declBit(c+37515,"io_x_sw", false,-1);
    tracep->declBit(c+37516,"io_x_sx", false,-1);
    tracep->declBit(c+37517,"io_x_sr", false,-1);
    tracep->declBit(c+37518,"io_x_pw", false,-1);
    tracep->declBit(c+37519,"io_x_px", false,-1);
    tracep->declBit(c+37520,"io_x_pr", false,-1);
    tracep->declBit(c+37521,"io_x_ppp", false,-1);
    tracep->declBit(c+37522,"io_x_pal", false,-1);
    tracep->declBit(c+37523,"io_x_paa", false,-1);
    tracep->declBit(c+37524,"io_x_eff", false,-1);
    tracep->declBit(c+37525,"io_x_c", false,-1);
    tracep->declBus(c+37509,"io_y_ppn", false,-1, 19,0);
    tracep->declBit(c+37510,"io_y_u", false,-1);
    tracep->declBit(c+37511,"io_y_ae_ptw", false,-1);
    tracep->declBit(c+37512,"io_y_ae_final", false,-1);
    tracep->declBit(c+37513,"io_y_pf", false,-1);
    tracep->declBit(c+37514,"io_y_gf", false,-1);
    tracep->declBit(c+37515,"io_y_sw", false,-1);
    tracep->declBit(c+37516,"io_y_sx", false,-1);
    tracep->declBit(c+37517,"io_y_sr", false,-1);
    tracep->declBit(c+37518,"io_y_pw", false,-1);
    tracep->declBit(c+37519,"io_y_px", false,-1);
    tracep->declBit(c+37520,"io_y_pr", false,-1);
    tracep->declBit(c+37521,"io_y_ppp", false,-1);
    tracep->declBit(c+37522,"io_y_pal", false,-1);
    tracep->declBit(c+37523,"io_y_paa", false,-1);
    tracep->declBit(c+37524,"io_y_eff", false,-1);
    tracep->declBit(c+37525,"io_y_c", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("entries_barrier_5 ");
    tracep->declBus(c+37526,"io_x_ppn", false,-1, 19,0);
    tracep->declBit(c+37527,"io_x_u", false,-1);
    tracep->declBit(c+37528,"io_x_ae_ptw", false,-1);
    tracep->declBit(c+37529,"io_x_ae_final", false,-1);
    tracep->declBit(c+37530,"io_x_pf", false,-1);
    tracep->declBit(c+37531,"io_x_gf", false,-1);
    tracep->declBit(c+37532,"io_x_sw", false,-1);
    tracep->declBit(c+37533,"io_x_sx", false,-1);
    tracep->declBit(c+37534,"io_x_sr", false,-1);
    tracep->declBit(c+37535,"io_x_pw", false,-1);
    tracep->declBit(c+37536,"io_x_px", false,-1);
    tracep->declBit(c+37537,"io_x_pr", false,-1);
    tracep->declBit(c+37538,"io_x_ppp", false,-1);
    tracep->declBit(c+37539,"io_x_pal", false,-1);
    tracep->declBit(c+37540,"io_x_paa", false,-1);
    tracep->declBit(c+37541,"io_x_eff", false,-1);
    tracep->declBit(c+37542,"io_x_c", false,-1);
    tracep->declBus(c+37526,"io_y_ppn", false,-1, 19,0);
    tracep->declBit(c+37527,"io_y_u", false,-1);
    tracep->declBit(c+37528,"io_y_ae_ptw", false,-1);
    tracep->declBit(c+37529,"io_y_ae_final", false,-1);
    tracep->declBit(c+37530,"io_y_pf", false,-1);
    tracep->declBit(c+37531,"io_y_gf", false,-1);
    tracep->declBit(c+37532,"io_y_sw", false,-1);
    tracep->declBit(c+37533,"io_y_sx", false,-1);
    tracep->declBit(c+37534,"io_y_sr", false,-1);
    tracep->declBit(c+37535,"io_y_pw", false,-1);
    tracep->declBit(c+37536,"io_y_px", false,-1);
    tracep->declBit(c+37537,"io_y_pr", false,-1);
    tracep->declBit(c+37538,"io_y_ppp", false,-1);
    tracep->declBit(c+37539,"io_y_pal", false,-1);
    tracep->declBit(c+37540,"io_y_paa", false,-1);
    tracep->declBit(c+37541,"io_y_eff", false,-1);
    tracep->declBit(c+37542,"io_y_c", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mpu_ppn_barrier ");
    tracep->declBus(c+37526,"io_x_ppn", false,-1, 19,0);
    tracep->declBit(c+37527,"io_x_u", false,-1);
    tracep->declBit(c+37528,"io_x_ae_ptw", false,-1);
    tracep->declBit(c+37529,"io_x_ae_final", false,-1);
    tracep->declBit(c+37530,"io_x_pf", false,-1);
    tracep->declBit(c+37531,"io_x_gf", false,-1);
    tracep->declBit(c+37532,"io_x_sw", false,-1);
    tracep->declBit(c+37533,"io_x_sx", false,-1);
    tracep->declBit(c+37534,"io_x_sr", false,-1);
    tracep->declBit(c+37535,"io_x_pw", false,-1);
    tracep->declBit(c+37536,"io_x_px", false,-1);
    tracep->declBit(c+37537,"io_x_pr", false,-1);
    tracep->declBit(c+37538,"io_x_ppp", false,-1);
    tracep->declBit(c+37539,"io_x_pal", false,-1);
    tracep->declBit(c+37540,"io_x_paa", false,-1);
    tracep->declBit(c+37541,"io_x_eff", false,-1);
    tracep->declBit(c+37542,"io_x_c", false,-1);
    tracep->declBus(c+37526,"io_y_ppn", false,-1, 19,0);
    tracep->declBit(c+37527,"io_y_u", false,-1);
    tracep->declBit(c+37528,"io_y_ae_ptw", false,-1);
    tracep->declBit(c+37529,"io_y_ae_final", false,-1);
    tracep->declBit(c+37530,"io_y_pf", false,-1);
    tracep->declBit(c+37531,"io_y_gf", false,-1);
    tracep->declBit(c+37532,"io_y_sw", false,-1);
    tracep->declBit(c+37533,"io_y_sx", false,-1);
    tracep->declBit(c+37534,"io_y_sr", false,-1);
    tracep->declBit(c+37535,"io_y_pw", false,-1);
    tracep->declBit(c+37536,"io_y_px", false,-1);
    tracep->declBit(c+37537,"io_y_pr", false,-1);
    tracep->declBit(c+37538,"io_y_ppp", false,-1);
    tracep->declBit(c+37539,"io_y_pal", false,-1);
    tracep->declBit(c+37540,"io_y_paa", false,-1);
    tracep->declBit(c+37541,"io_y_eff", false,-1);
    tracep->declBit(c+37542,"io_y_c", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pmp ");
    tracep->declBus(c+37543,"io_prv", false,-1, 1,0);
    tracep->declBit(c+11912,"io_pmp_0_cfg_l", false,-1);
    tracep->declBus(c+11913,"io_pmp_0_cfg_a", false,-1, 1,0);
    tracep->declBit(c+11914,"io_pmp_0_cfg_x", false,-1);
    tracep->declBit(c+11915,"io_pmp_0_cfg_w", false,-1);
    tracep->declBit(c+11916,"io_pmp_0_cfg_r", false,-1);
    tracep->declBus(c+11917,"io_pmp_0_addr", false,-1, 29,0);
    tracep->declBus(c+11918,"io_pmp_0_mask", false,-1, 31,0);
    tracep->declBit(c+11919,"io_pmp_1_cfg_l", false,-1);
    tracep->declBus(c+11920,"io_pmp_1_cfg_a", false,-1, 1,0);
    tracep->declBit(c+11921,"io_pmp_1_cfg_x", false,-1);
    tracep->declBit(c+11922,"io_pmp_1_cfg_w", false,-1);
    tracep->declBit(c+11923,"io_pmp_1_cfg_r", false,-1);
    tracep->declBus(c+11924,"io_pmp_1_addr", false,-1, 29,0);
    tracep->declBus(c+11925,"io_pmp_1_mask", false,-1, 31,0);
    tracep->declBit(c+11926,"io_pmp_2_cfg_l", false,-1);
    tracep->declBus(c+11927,"io_pmp_2_cfg_a", false,-1, 1,0);
    tracep->declBit(c+11928,"io_pmp_2_cfg_x", false,-1);
    tracep->declBit(c+11929,"io_pmp_2_cfg_w", false,-1);
    tracep->declBit(c+11930,"io_pmp_2_cfg_r", false,-1);
    tracep->declBus(c+11931,"io_pmp_2_addr", false,-1, 29,0);
    tracep->declBus(c+11932,"io_pmp_2_mask", false,-1, 31,0);
    tracep->declBit(c+11933,"io_pmp_3_cfg_l", false,-1);
    tracep->declBus(c+11934,"io_pmp_3_cfg_a", false,-1, 1,0);
    tracep->declBit(c+11935,"io_pmp_3_cfg_x", false,-1);
    tracep->declBit(c+11936,"io_pmp_3_cfg_w", false,-1);
    tracep->declBit(c+11937,"io_pmp_3_cfg_r", false,-1);
    tracep->declBus(c+11938,"io_pmp_3_addr", false,-1, 29,0);
    tracep->declBus(c+11939,"io_pmp_3_mask", false,-1, 31,0);
    tracep->declBit(c+11940,"io_pmp_4_cfg_l", false,-1);
    tracep->declBus(c+11941,"io_pmp_4_cfg_a", false,-1, 1,0);
    tracep->declBit(c+11942,"io_pmp_4_cfg_x", false,-1);
    tracep->declBit(c+11943,"io_pmp_4_cfg_w", false,-1);
    tracep->declBit(c+11944,"io_pmp_4_cfg_r", false,-1);
    tracep->declBus(c+11945,"io_pmp_4_addr", false,-1, 29,0);
    tracep->declBus(c+11946,"io_pmp_4_mask", false,-1, 31,0);
    tracep->declBit(c+11947,"io_pmp_5_cfg_l", false,-1);
    tracep->declBus(c+11948,"io_pmp_5_cfg_a", false,-1, 1,0);
    tracep->declBit(c+11949,"io_pmp_5_cfg_x", false,-1);
    tracep->declBit(c+11950,"io_pmp_5_cfg_w", false,-1);
    tracep->declBit(c+11951,"io_pmp_5_cfg_r", false,-1);
    tracep->declBus(c+11952,"io_pmp_5_addr", false,-1, 29,0);
    tracep->declBus(c+11953,"io_pmp_5_mask", false,-1, 31,0);
    tracep->declBit(c+11954,"io_pmp_6_cfg_l", false,-1);
    tracep->declBus(c+11955,"io_pmp_6_cfg_a", false,-1, 1,0);
    tracep->declBit(c+11956,"io_pmp_6_cfg_x", false,-1);
    tracep->declBit(c+11957,"io_pmp_6_cfg_w", false,-1);
    tracep->declBit(c+11958,"io_pmp_6_cfg_r", false,-1);
    tracep->declBus(c+11959,"io_pmp_6_addr", false,-1, 29,0);
    tracep->declBus(c+11960,"io_pmp_6_mask", false,-1, 31,0);
    tracep->declBit(c+11961,"io_pmp_7_cfg_l", false,-1);
    tracep->declBus(c+11962,"io_pmp_7_cfg_a", false,-1, 1,0);
    tracep->declBit(c+11963,"io_pmp_7_cfg_x", false,-1);
    tracep->declBit(c+11964,"io_pmp_7_cfg_w", false,-1);
    tracep->declBit(c+11965,"io_pmp_7_cfg_r", false,-1);
    tracep->declBus(c+11966,"io_pmp_7_addr", false,-1, 29,0);
    tracep->declBus(c+11967,"io_pmp_7_mask", false,-1, 31,0);
    tracep->declBus(c+37544,"io_addr", false,-1, 31,0);
    tracep->declBus(c+40425,"io_size", false,-1, 2,0);
    tracep->declBit(c+37545,"io_r", false,-1);
    tracep->declBit(c+37546,"io_w", false,-1);
    tracep->declBit(c+37547,"io_x", false,-1);
    tracep->declBit(c+37548,"res_hit", false,-1);
    tracep->declBit(c+37549,"res_ignore", false,-1);
    tracep->declBus(c+40442,"res_aligned_lsbMask", false,-1, 5,0);
    tracep->declBit(c+37550,"res_aligned", false,-1);
    tracep->declBit(c+37551,"res_hit_1", false,-1);
    tracep->declBit(c+37552,"res_ignore_1", false,-1);
    tracep->declBus(c+40442,"res_aligned_lsbMask_1", false,-1, 5,0);
    tracep->declBit(c+37553,"res_aligned_1", false,-1);
    tracep->declBit(c+37554,"res_hit_2", false,-1);
    tracep->declBit(c+37555,"res_ignore_2", false,-1);
    tracep->declBus(c+40442,"res_aligned_lsbMask_2", false,-1, 5,0);
    tracep->declBit(c+37556,"res_aligned_2", false,-1);
    tracep->declBit(c+37557,"res_hit_3", false,-1);
    tracep->declBit(c+37558,"res_ignore_3", false,-1);
    tracep->declBus(c+40442,"res_aligned_lsbMask_3", false,-1, 5,0);
    tracep->declBit(c+37559,"res_aligned_3", false,-1);
    tracep->declBit(c+37560,"res_hit_4", false,-1);
    tracep->declBit(c+37561,"res_ignore_4", false,-1);
    tracep->declBus(c+40442,"res_aligned_lsbMask_4", false,-1, 5,0);
    tracep->declBit(c+37562,"res_aligned_4", false,-1);
    tracep->declBit(c+37563,"res_hit_5", false,-1);
    tracep->declBit(c+37564,"res_ignore_5", false,-1);
    tracep->declBus(c+40442,"res_aligned_lsbMask_5", false,-1, 5,0);
    tracep->declBit(c+37565,"res_aligned_5", false,-1);
    tracep->declBit(c+37566,"res_hit_6", false,-1);
    tracep->declBit(c+37567,"res_ignore_6", false,-1);
    tracep->declBus(c+40442,"res_aligned_lsbMask_6", false,-1, 5,0);
    tracep->declBit(c+37568,"res_aligned_6", false,-1);
    tracep->declBit(c+37569,"res_hit_7", false,-1);
    tracep->declBit(c+37570,"res_ignore_7", false,-1);
    tracep->declBus(c+40442,"res_aligned_lsbMask_7", false,-1, 5,0);
    tracep->declBit(c+37571,"res_aligned_7", false,-1);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("unrolled_cmd ");
    tracep->declBit(c+40360,"clock", false,-1);
    tracep->declBit(c+40241,"reset", false,-1);
    tracep->declBit(c+24272,"io_enq_valid", false,-1);
    tracep->declBus(c+24273,"io_enq_bits_cmd_inst_funct", false,-1, 6,0);
    tracep->declBus(c+24274,"io_enq_bits_cmd_inst_rs2", false,-1, 4,0);
    tracep->declBus(c+24275,"io_enq_bits_cmd_inst_rs1", false,-1, 4,0);
    tracep->declBit(c+24276,"io_enq_bits_cmd_inst_xd", false,-1);
    tracep->declBit(c+24277,"io_enq_bits_cmd_inst_xs1", false,-1);
    tracep->declBit(c+24278,"io_enq_bits_cmd_inst_xs2", false,-1);
    tracep->declBus(c+24279,"io_enq_bits_cmd_inst_rd", false,-1, 4,0);
    tracep->declBus(c+24280,"io_enq_bits_cmd_inst_opcode", false,-1, 6,0);
    tracep->declQuad(c+24281,"io_enq_bits_cmd_rs1", false,-1, 63,0);
    tracep->declQuad(c+24283,"io_enq_bits_cmd_rs2", false,-1, 63,0);
    tracep->declBit(c+24285,"io_enq_bits_cmd_status_debug", false,-1);
    tracep->declBit(c+24286,"io_enq_bits_cmd_status_cease", false,-1);
    tracep->declBit(c+24287,"io_enq_bits_cmd_status_wfi", false,-1);
    tracep->declBus(c+24288,"io_enq_bits_cmd_status_isa", false,-1, 31,0);
    tracep->declBus(c+24289,"io_enq_bits_cmd_status_dprv", false,-1, 1,0);
    tracep->declBit(c+24290,"io_enq_bits_cmd_status_dv", false,-1);
    tracep->declBus(c+24291,"io_enq_bits_cmd_status_prv", false,-1, 1,0);
    tracep->declBit(c+24292,"io_enq_bits_cmd_status_v", false,-1);
    tracep->declBit(c+24293,"io_enq_bits_cmd_status_sd", false,-1);
    tracep->declBus(c+24294,"io_enq_bits_cmd_status_zero2", false,-1, 22,0);
    tracep->declBit(c+24295,"io_enq_bits_cmd_status_mpv", false,-1);
    tracep->declBit(c+24296,"io_enq_bits_cmd_status_gva", false,-1);
    tracep->declBit(c+24297,"io_enq_bits_cmd_status_mbe", false,-1);
    tracep->declBit(c+24298,"io_enq_bits_cmd_status_sbe", false,-1);
    tracep->declBus(c+24299,"io_enq_bits_cmd_status_sxl", false,-1, 1,0);
    tracep->declBus(c+24300,"io_enq_bits_cmd_status_uxl", false,-1, 1,0);
    tracep->declBit(c+24301,"io_enq_bits_cmd_status_sd_rv32", false,-1);
    tracep->declBus(c+24302,"io_enq_bits_cmd_status_zero1", false,-1, 7,0);
    tracep->declBit(c+24303,"io_enq_bits_cmd_status_tsr", false,-1);
    tracep->declBit(c+24304,"io_enq_bits_cmd_status_tw", false,-1);
    tracep->declBit(c+24305,"io_enq_bits_cmd_status_tvm", false,-1);
    tracep->declBit(c+24306,"io_enq_bits_cmd_status_mxr", false,-1);
    tracep->declBit(c+24307,"io_enq_bits_cmd_status_sum", false,-1);
    tracep->declBit(c+24308,"io_enq_bits_cmd_status_mprv", false,-1);
    tracep->declBus(c+24309,"io_enq_bits_cmd_status_xs", false,-1, 1,0);
    tracep->declBus(c+24310,"io_enq_bits_cmd_status_fs", false,-1, 1,0);
    tracep->declBus(c+24311,"io_enq_bits_cmd_status_mpp", false,-1, 1,0);
    tracep->declBus(c+24312,"io_enq_bits_cmd_status_vs", false,-1, 1,0);
    tracep->declBit(c+24313,"io_enq_bits_cmd_status_spp", false,-1);
    tracep->declBit(c+24314,"io_enq_bits_cmd_status_mpie", false,-1);
    tracep->declBit(c+24315,"io_enq_bits_cmd_status_ube", false,-1);
    tracep->declBit(c+24316,"io_enq_bits_cmd_status_spie", false,-1);
    tracep->declBit(c+24317,"io_enq_bits_cmd_status_upie", false,-1);
    tracep->declBit(c+24318,"io_enq_bits_cmd_status_mie", false,-1);
    tracep->declBit(c+24319,"io_enq_bits_cmd_status_hie", false,-1);
    tracep->declBit(c+24320,"io_enq_bits_cmd_status_sie", false,-1);
    tracep->declBit(c+24321,"io_enq_bits_cmd_status_uie", false,-1);
    tracep->declBit(c+40413,"io_enq_bits_rob_id_valid", false,-1);
    tracep->declBus(c+40442,"io_enq_bits_rob_id_bits", false,-1, 5,0);
    tracep->declBit(c+24322,"io_enq_bits_from_matmul_fsm", false,-1);
    tracep->declBit(c+24323,"io_enq_bits_from_conv_fsm", false,-1);
    tracep->declBit(c+37572,"io_deq_ready", false,-1);
    tracep->declBit(c+24268,"io_enq_ready", false,-1);
    tracep->declBit(c+37573,"io_deq_valid", false,-1);
    tracep->declBus(c+24740,"io_deq_bits_cmd_inst_funct", false,-1, 6,0);
    tracep->declBus(c+24741,"io_deq_bits_cmd_inst_rs2", false,-1, 4,0);
    tracep->declBus(c+24742,"io_deq_bits_cmd_inst_rs1", false,-1, 4,0);
    tracep->declBit(c+24743,"io_deq_bits_cmd_inst_xd", false,-1);
    tracep->declBit(c+24744,"io_deq_bits_cmd_inst_xs1", false,-1);
    tracep->declBit(c+24745,"io_deq_bits_cmd_inst_xs2", false,-1);
    tracep->declBus(c+15991,"io_deq_bits_cmd_inst_rd", false,-1, 4,0);
    tracep->declBus(c+24746,"io_deq_bits_cmd_inst_opcode", false,-1, 6,0);
    tracep->declQuad(c+15992,"io_deq_bits_cmd_rs1", false,-1, 63,0);
    tracep->declQuad(c+24747,"io_deq_bits_cmd_rs2", false,-1, 63,0);
    tracep->declBit(c+24749,"io_deq_bits_cmd_status_debug", false,-1);
    tracep->declBit(c+24750,"io_deq_bits_cmd_status_cease", false,-1);
    tracep->declBit(c+24751,"io_deq_bits_cmd_status_wfi", false,-1);
    tracep->declBus(c+24752,"io_deq_bits_cmd_status_isa", false,-1, 31,0);
    tracep->declBus(c+24753,"io_deq_bits_cmd_status_dprv", false,-1, 1,0);
    tracep->declBit(c+24754,"io_deq_bits_cmd_status_dv", false,-1);
    tracep->declBus(c+24755,"io_deq_bits_cmd_status_prv", false,-1, 1,0);
    tracep->declBit(c+24756,"io_deq_bits_cmd_status_v", false,-1);
    tracep->declBit(c+24757,"io_deq_bits_cmd_status_sd", false,-1);
    tracep->declBus(c+24758,"io_deq_bits_cmd_status_zero2", false,-1, 22,0);
    tracep->declBit(c+24759,"io_deq_bits_cmd_status_mpv", false,-1);
    tracep->declBit(c+24760,"io_deq_bits_cmd_status_gva", false,-1);
    tracep->declBit(c+24761,"io_deq_bits_cmd_status_mbe", false,-1);
    tracep->declBit(c+24762,"io_deq_bits_cmd_status_sbe", false,-1);
    tracep->declBus(c+24763,"io_deq_bits_cmd_status_sxl", false,-1, 1,0);
    tracep->declBus(c+24764,"io_deq_bits_cmd_status_uxl", false,-1, 1,0);
    tracep->declBit(c+24765,"io_deq_bits_cmd_status_sd_rv32", false,-1);
    tracep->declBus(c+24766,"io_deq_bits_cmd_status_zero1", false,-1, 7,0);
    tracep->declBit(c+24767,"io_deq_bits_cmd_status_tsr", false,-1);
    tracep->declBit(c+24768,"io_deq_bits_cmd_status_tw", false,-1);
    tracep->declBit(c+24769,"io_deq_bits_cmd_status_tvm", false,-1);
    tracep->declBit(c+24770,"io_deq_bits_cmd_status_mxr", false,-1);
    tracep->declBit(c+24771,"io_deq_bits_cmd_status_sum", false,-1);
    tracep->declBit(c+24772,"io_deq_bits_cmd_status_mprv", false,-1);
    tracep->declBus(c+24773,"io_deq_bits_cmd_status_xs", false,-1, 1,0);
    tracep->declBus(c+24774,"io_deq_bits_cmd_status_fs", false,-1, 1,0);
    tracep->declBus(c+24775,"io_deq_bits_cmd_status_mpp", false,-1, 1,0);
    tracep->declBus(c+24776,"io_deq_bits_cmd_status_vs", false,-1, 1,0);
    tracep->declBit(c+24777,"io_deq_bits_cmd_status_spp", false,-1);
    tracep->declBit(c+24778,"io_deq_bits_cmd_status_mpie", false,-1);
    tracep->declBit(c+24779,"io_deq_bits_cmd_status_ube", false,-1);
    tracep->declBit(c+24780,"io_deq_bits_cmd_status_spie", false,-1);
    tracep->declBit(c+24781,"io_deq_bits_cmd_status_upie", false,-1);
    tracep->declBit(c+24782,"io_deq_bits_cmd_status_mie", false,-1);
    tracep->declBit(c+24783,"io_deq_bits_cmd_status_hie", false,-1);
    tracep->declBit(c+24784,"io_deq_bits_cmd_status_sie", false,-1);
    tracep->declBit(c+24785,"io_deq_bits_cmd_status_uie", false,-1);
    tracep->declBit(c+37574,"io_deq_bits_rob_id_valid", false,-1);
    tracep->declBus(c+37575,"io_deq_bits_rob_id_bits", false,-1, 5,0);
    tracep->declBit(c+24786,"io_deq_bits_from_matmul_fsm", false,-1);
    tracep->declBit(c+24787,"io_deq_bits_from_conv_fsm", false,-1);
    tracep->declBit(c+37576,"enq_ptr_value", false,-1);
    tracep->declBit(c+37577,"deq_ptr_value", false,-1);
    tracep->declBit(c+37578,"maybe_full", false,-1);
    tracep->declBit(c+37579,"ptr_match", false,-1);
    tracep->declBit(c+37580,"empty", false,-1);
    tracep->declBit(c+37581,"full", false,-1);
    tracep->declBit(c+37582,"do_enq", false,-1);
    tracep->declBit(c+37583,"do_deq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+37577,"R0_addr", false,-1);
    tracep->declBit(c+40409,"R0_en", false,-1);
    tracep->declBit(c+40360,"R0_clk", false,-1);
    tracep->declBit(c+37576,"W0_addr", false,-1);
    tracep->declBit(c+37582,"W0_en", false,-1);
    tracep->declBit(c+40360,"W0_clk", false,-1);
    tracep->declArray(c+37584,"W0_data", false,-1, 273,0);
    tracep->declArray(c+37593,"R0_data", false,-1, 273,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declArray(c+37602+i*9,"Memory", true,(i+0), 273,0);
    }
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("intXbar ");
    tracep->declBit(c+38468,"auto_int_in_3_0", false,-1);
    tracep->declBit(c+38467,"auto_int_in_2_0", false,-1);
    tracep->declBit(c+38464,"auto_int_in_1_0", false,-1);
    tracep->declBit(c+38465,"auto_int_in_1_1", false,-1);
    tracep->declBit(c+11689,"auto_int_in_0_0", false,-1);
    tracep->declBit(c+11689,"auto_int_out_0", false,-1);
    tracep->declBit(c+38464,"auto_int_out_1", false,-1);
    tracep->declBit(c+38465,"auto_int_out_2", false,-1);
    tracep->declBit(c+38467,"auto_int_out_3", false,-1);
    tracep->declBit(c+38468,"auto_int_out_4", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ptw ");
    tracep->declBit(c+40360,"clock", false,-1);
    tracep->declBit(c+40241,"reset", false,-1);
    tracep->declBit(c+15981,"io_requestor_0_req_valid", false,-1);
    tracep->declBus(c+15982,"io_requestor_0_req_bits_bits_addr", false,-1, 26,0);
    tracep->declBit(c+15983,"io_requestor_0_req_bits_bits_need_gpa", false,-1);
    tracep->declBit(c+15984,"io_requestor_0_req_bits_bits_vstage1", false,-1);
    tracep->declBit(c+15985,"io_requestor_0_req_bits_bits_stage2", false,-1);
    tracep->declBit(c+12540,"io_requestor_1_req_valid", false,-1);
    tracep->declBit(c+40409,"io_requestor_1_req_bits_valid", false,-1);
    tracep->declBus(c+12541,"io_requestor_1_req_bits_bits_addr", false,-1, 26,0);
    tracep->declBit(c+12542,"io_requestor_1_req_bits_bits_need_gpa", false,-1);
    tracep->declBit(c+12543,"io_requestor_1_req_bits_bits_vstage1", false,-1);
    tracep->declBit(c+12544,"io_requestor_1_req_bits_bits_stage2", false,-1);
    tracep->declBit(c+14841,"io_requestor_2_req_valid", false,-1);
    tracep->declBit(c+14842,"io_requestor_2_req_bits_valid", false,-1);
    tracep->declBus(c+14843,"io_requestor_2_req_bits_bits_addr", false,-1, 26,0);
    tracep->declBit(c+14844,"io_requestor_2_req_bits_bits_need_gpa", false,-1);
    tracep->declBit(c+14845,"io_requestor_2_req_bits_bits_vstage1", false,-1);
    tracep->declBit(c+14846,"io_requestor_2_req_bits_bits_stage2", false,-1);
    tracep->declBit(c+12525,"io_mem_req_ready", false,-1);
    tracep->declBit(c+14035,"io_mem_s2_nack", false,-1);
    tracep->declBit(c+14036,"io_mem_resp_valid", false,-1);
    tracep->declQuad(c+11832,"io_mem_resp_bits_data", false,-1, 63,0);
    tracep->declBit(c+11845,"io_mem_s2_xcpt_ae_ld", false,-1);
    tracep->declBus(c+11909,"io_dpath_ptbr_mode", false,-1, 3,0);
    tracep->declQuad(c+11910,"io_dpath_ptbr_ppn", false,-1, 43,0);
    tracep->declBit(c+11877,"io_dpath_sfence_valid", false,-1);
    tracep->declBit(c+11878,"io_dpath_sfence_bits_rs1", false,-1);
    tracep->declBit(c+11879,"io_dpath_sfence_bits_rs2", false,-1);
    tracep->declQuad(c+11880,"io_dpath_sfence_bits_addr", false,-1, 38,0);
    tracep->declBit(c+11705,"io_dpath_status_debug", false,-1);
    tracep->declBus(c+11709,"io_dpath_status_prv", false,-1, 1,0);
    tracep->declBit(c+11714,"io_dpath_status_mxr", false,-1);
    tracep->declBit(c+11715,"io_dpath_status_sum", false,-1);
    tracep->declBit(c+11912,"io_dpath_pmp_0_cfg_l", false,-1);
    tracep->declBus(c+11913,"io_dpath_pmp_0_cfg_a", false,-1, 1,0);
    tracep->declBit(c+11914,"io_dpath_pmp_0_cfg_x", false,-1);
    tracep->declBit(c+11915,"io_dpath_pmp_0_cfg_w", false,-1);
    tracep->declBit(c+11916,"io_dpath_pmp_0_cfg_r", false,-1);
    tracep->declBus(c+11917,"io_dpath_pmp_0_addr", false,-1, 29,0);
    tracep->declBus(c+11918,"io_dpath_pmp_0_mask", false,-1, 31,0);
    tracep->declBit(c+11919,"io_dpath_pmp_1_cfg_l", false,-1);
    tracep->declBus(c+11920,"io_dpath_pmp_1_cfg_a", false,-1, 1,0);
    tracep->declBit(c+11921,"io_dpath_pmp_1_cfg_x", false,-1);
    tracep->declBit(c+11922,"io_dpath_pmp_1_cfg_w", false,-1);
    tracep->declBit(c+11923,"io_dpath_pmp_1_cfg_r", false,-1);
    tracep->declBus(c+11924,"io_dpath_pmp_1_addr", false,-1, 29,0);
    tracep->declBus(c+11925,"io_dpath_pmp_1_mask", false,-1, 31,0);
    tracep->declBit(c+11926,"io_dpath_pmp_2_cfg_l", false,-1);
    tracep->declBus(c+11927,"io_dpath_pmp_2_cfg_a", false,-1, 1,0);
    tracep->declBit(c+11928,"io_dpath_pmp_2_cfg_x", false,-1);
    tracep->declBit(c+11929,"io_dpath_pmp_2_cfg_w", false,-1);
    tracep->declBit(c+11930,"io_dpath_pmp_2_cfg_r", false,-1);
    tracep->declBus(c+11931,"io_dpath_pmp_2_addr", false,-1, 29,0);
    tracep->declBus(c+11932,"io_dpath_pmp_2_mask", false,-1, 31,0);
    tracep->declBit(c+11933,"io_dpath_pmp_3_cfg_l", false,-1);
    tracep->declBus(c+11934,"io_dpath_pmp_3_cfg_a", false,-1, 1,0);
    tracep->declBit(c+11935,"io_dpath_pmp_3_cfg_x", false,-1);
    tracep->declBit(c+11936,"io_dpath_pmp_3_cfg_w", false,-1);
    tracep->declBit(c+11937,"io_dpath_pmp_3_cfg_r", false,-1);
    tracep->declBus(c+11938,"io_dpath_pmp_3_addr", false,-1, 29,0);
    tracep->declBus(c+11939,"io_dpath_pmp_3_mask", false,-1, 31,0);
    tracep->declBit(c+11940,"io_dpath_pmp_4_cfg_l", false,-1);
    tracep->declBus(c+11941,"io_dpath_pmp_4_cfg_a", false,-1, 1,0);
    tracep->declBit(c+11942,"io_dpath_pmp_4_cfg_x", false,-1);
    tracep->declBit(c+11943,"io_dpath_pmp_4_cfg_w", false,-1);
    tracep->declBit(c+11944,"io_dpath_pmp_4_cfg_r", false,-1);
    tracep->declBus(c+11945,"io_dpath_pmp_4_addr", false,-1, 29,0);
    tracep->declBus(c+11946,"io_dpath_pmp_4_mask", false,-1, 31,0);
    tracep->declBit(c+11947,"io_dpath_pmp_5_cfg_l", false,-1);
    tracep->declBus(c+11948,"io_dpath_pmp_5_cfg_a", false,-1, 1,0);
    tracep->declBit(c+11949,"io_dpath_pmp_5_cfg_x", false,-1);
    tracep->declBit(c+11950,"io_dpath_pmp_5_cfg_w", false,-1);
    tracep->declBit(c+11951,"io_dpath_pmp_5_cfg_r", false,-1);
    tracep->declBus(c+11952,"io_dpath_pmp_5_addr", false,-1, 29,0);
    tracep->declBus(c+11953,"io_dpath_pmp_5_mask", false,-1, 31,0);
    tracep->declBit(c+11954,"io_dpath_pmp_6_cfg_l", false,-1);
    tracep->declBus(c+11955,"io_dpath_pmp_6_cfg_a", false,-1, 1,0);
    tracep->declBit(c+11956,"io_dpath_pmp_6_cfg_x", false,-1);
    tracep->declBit(c+11957,"io_dpath_pmp_6_cfg_w", false,-1);
    tracep->declBit(c+11958,"io_dpath_pmp_6_cfg_r", false,-1);
    tracep->declBus(c+11959,"io_dpath_pmp_6_addr", false,-1, 29,0);
    tracep->declBus(c+11960,"io_dpath_pmp_6_mask", false,-1, 31,0);
    tracep->declBit(c+11961,"io_dpath_pmp_7_cfg_l", false,-1);
    tracep->declBus(c+11962,"io_dpath_pmp_7_cfg_a", false,-1, 1,0);
    tracep->declBit(c+11963,"io_dpath_pmp_7_cfg_x", false,-1);
    tracep->declBit(c+11964,"io_dpath_pmp_7_cfg_w", false,-1);
    tracep->declBit(c+11965,"io_dpath_pmp_7_cfg_r", false,-1);
    tracep->declBus(c+11966,"io_dpath_pmp_7_addr", false,-1, 29,0);
    tracep->declBus(c+11967,"io_dpath_pmp_7_mask", false,-1, 31,0);
    tracep->declQuad(c+11968,"io_dpath_customCSRs_csrs_0_value", false,-1, 63,0);
    tracep->declBit(c+15974,"io_requestor_0_req_ready", false,-1);
    tracep->declBit(c+15975,"io_requestor_0_resp_valid", false,-1);
    tracep->declBit(c+12492,"io_requestor_0_resp_bits_ae_ptw", false,-1);
    tracep->declBit(c+12493,"io_requestor_0_resp_bits_ae_final", false,-1);
    tracep->declBit(c+12494,"io_requestor_0_resp_bits_pf", false,-1);
    tracep->declBit(c+12495,"io_requestor_0_resp_bits_gf", false,-1);
    tracep->declBit(c+12496,"io_requestor_0_resp_bits_hr", false,-1);
    tracep->declBit(c+12497,"io_requestor_0_resp_bits_hw", false,-1);
    tracep->declBit(c+12498,"io_requestor_0_resp_bits_hx", false,-1);
    tracep->declQuad(c+12499,"io_requestor_0_resp_bits_pte_ppn", false,-1, 43,0);
    tracep->declBit(c+12501,"io_requestor_0_resp_bits_pte_d", false,-1);
    tracep->declBit(c+12502,"io_requestor_0_resp_bits_pte_a", false,-1);
    tracep->declBit(c+12503,"io_requestor_0_resp_bits_pte_g", false,-1);
    tracep->declBit(c+12504,"io_requestor_0_resp_bits_pte_u", false,-1);
    tracep->declBit(c+12505,"io_requestor_0_resp_bits_pte_x", false,-1);
    tracep->declBit(c+12506,"io_requestor_0_resp_bits_pte_w", false,-1);
    tracep->declBit(c+12507,"io_requestor_0_resp_bits_pte_r", false,-1);
    tracep->declBit(c+12508,"io_requestor_0_resp_bits_pte_v", false,-1);
    tracep->declBus(c+12509,"io_requestor_0_resp_bits_level", false,-1, 1,0);
    tracep->declBit(c+12510,"io_requestor_0_resp_bits_homogeneous", false,-1);
    tracep->declBus(c+11909,"io_requestor_0_ptbr_mode", false,-1, 3,0);
    tracep->declBit(c+11912,"io_requestor_0_pmp_0_cfg_l", false,-1);
    tracep->declBus(c+11913,"io_requestor_0_pmp_0_cfg_a", false,-1, 1,0);
    tracep->declBit(c+11914,"io_requestor_0_pmp_0_cfg_x", false,-1);
    tracep->declBit(c+11915,"io_requestor_0_pmp_0_cfg_w", false,-1);
    tracep->declBit(c+11916,"io_requestor_0_pmp_0_cfg_r", false,-1);
    tracep->declBus(c+11917,"io_requestor_0_pmp_0_addr", false,-1, 29,0);
    tracep->declBus(c+11918,"io_requestor_0_pmp_0_mask", false,-1, 31,0);
    tracep->declBit(c+11919,"io_requestor_0_pmp_1_cfg_l", false,-1);
    tracep->declBus(c+11920,"io_requestor_0_pmp_1_cfg_a", false,-1, 1,0);
    tracep->declBit(c+11921,"io_requestor_0_pmp_1_cfg_x", false,-1);
    tracep->declBit(c+11922,"io_requestor_0_pmp_1_cfg_w", false,-1);
    tracep->declBit(c+11923,"io_requestor_0_pmp_1_cfg_r", false,-1);
    tracep->declBus(c+11924,"io_requestor_0_pmp_1_addr", false,-1, 29,0);
    tracep->declBus(c+11925,"io_requestor_0_pmp_1_mask", false,-1, 31,0);
    tracep->declBit(c+11926,"io_requestor_0_pmp_2_cfg_l", false,-1);
    tracep->declBus(c+11927,"io_requestor_0_pmp_2_cfg_a", false,-1, 1,0);
    tracep->declBit(c+11928,"io_requestor_0_pmp_2_cfg_x", false,-1);
    tracep->declBit(c+11929,"io_requestor_0_pmp_2_cfg_w", false,-1);
    tracep->declBit(c+11930,"io_requestor_0_pmp_2_cfg_r", false,-1);
    tracep->declBus(c+11931,"io_requestor_0_pmp_2_addr", false,-1, 29,0);
    tracep->declBus(c+11932,"io_requestor_0_pmp_2_mask", false,-1, 31,0);
    tracep->declBit(c+11933,"io_requestor_0_pmp_3_cfg_l", false,-1);
    tracep->declBus(c+11934,"io_requestor_0_pmp_3_cfg_a", false,-1, 1,0);
    tracep->declBit(c+11935,"io_requestor_0_pmp_3_cfg_x", false,-1);
    tracep->declBit(c+11936,"io_requestor_0_pmp_3_cfg_w", false,-1);
    tracep->declBit(c+11937,"io_requestor_0_pmp_3_cfg_r", false,-1);
    tracep->declBus(c+11938,"io_requestor_0_pmp_3_addr", false,-1, 29,0);
    tracep->declBus(c+11939,"io_requestor_0_pmp_3_mask", false,-1, 31,0);
    tracep->declBit(c+11940,"io_requestor_0_pmp_4_cfg_l", false,-1);
    tracep->declBus(c+11941,"io_requestor_0_pmp_4_cfg_a", false,-1, 1,0);
    tracep->declBit(c+11942,"io_requestor_0_pmp_4_cfg_x", false,-1);
    tracep->declBit(c+11943,"io_requestor_0_pmp_4_cfg_w", false,-1);
    tracep->declBit(c+11944,"io_requestor_0_pmp_4_cfg_r", false,-1);
    tracep->declBus(c+11945,"io_requestor_0_pmp_4_addr", false,-1, 29,0);
    tracep->declBus(c+11946,"io_requestor_0_pmp_4_mask", false,-1, 31,0);
    tracep->declBit(c+11947,"io_requestor_0_pmp_5_cfg_l", false,-1);
    tracep->declBus(c+11948,"io_requestor_0_pmp_5_cfg_a", false,-1, 1,0);
    tracep->declBit(c+11949,"io_requestor_0_pmp_5_cfg_x", false,-1);
    tracep->declBit(c+11950,"io_requestor_0_pmp_5_cfg_w", false,-1);
    tracep->declBit(c+11951,"io_requestor_0_pmp_5_cfg_r", false,-1);
    tracep->declBus(c+11952,"io_requestor_0_pmp_5_addr", false,-1, 29,0);
    tracep->declBus(c+11953,"io_requestor_0_pmp_5_mask", false,-1, 31,0);
    tracep->declBit(c+11954,"io_requestor_0_pmp_6_cfg_l", false,-1);
    tracep->declBus(c+11955,"io_requestor_0_pmp_6_cfg_a", false,-1, 1,0);
    tracep->declBit(c+11956,"io_requestor_0_pmp_6_cfg_x", false,-1);
    tracep->declBit(c+11957,"io_requestor_0_pmp_6_cfg_w", false,-1);
    tracep->declBit(c+11958,"io_requestor_0_pmp_6_cfg_r", false,-1);
    tracep->declBus(c+11959,"io_requestor_0_pmp_6_addr", false,-1, 29,0);
    tracep->declBus(c+11960,"io_requestor_0_pmp_6_mask", false,-1, 31,0);
    tracep->declBit(c+11961,"io_requestor_0_pmp_7_cfg_l", false,-1);
    tracep->declBus(c+11962,"io_requestor_0_pmp_7_cfg_a", false,-1, 1,0);
    tracep->declBit(c+11963,"io_requestor_0_pmp_7_cfg_x", false,-1);
    tracep->declBit(c+11964,"io_requestor_0_pmp_7_cfg_w", false,-1);
    tracep->declBit(c+11965,"io_requestor_0_pmp_7_cfg_r", false,-1);
    tracep->declBus(c+11966,"io_requestor_0_pmp_7_addr", false,-1, 29,0);
    tracep->declBus(c+11967,"io_requestor_0_pmp_7_mask", false,-1, 31,0);
    tracep->declBit(c+12490,"io_requestor_1_req_ready", false,-1);
    tracep->declBit(c+12491,"io_requestor_1_resp_valid", false,-1);
    tracep->declBit(c+12492,"io_requestor_1_resp_bits_ae_ptw", false,-1);
    tracep->declBit(c+12493,"io_requestor_1_resp_bits_ae_final", false,-1);
    tracep->declBit(c+12494,"io_requestor_1_resp_bits_pf", false,-1);
    tracep->declBit(c+12495,"io_requestor_1_resp_bits_gf", false,-1);
    tracep->declBit(c+12496,"io_requestor_1_resp_bits_hr", false,-1);
    tracep->declBit(c+12497,"io_requestor_1_resp_bits_hw", false,-1);
    tracep->declBit(c+12498,"io_requestor_1_resp_bits_hx", false,-1);
    tracep->declQuad(c+12499,"io_requestor_1_resp_bits_pte_ppn", false,-1, 43,0);
    tracep->declBit(c+12501,"io_requestor_1_resp_bits_pte_d", false,-1);
    tracep->declBit(c+12502,"io_requestor_1_resp_bits_pte_a", false,-1);
    tracep->declBit(c+12503,"io_requestor_1_resp_bits_pte_g", false,-1);
    tracep->declBit(c+12504,"io_requestor_1_resp_bits_pte_u", false,-1);
    tracep->declBit(c+12505,"io_requestor_1_resp_bits_pte_x", false,-1);
    tracep->declBit(c+12506,"io_requestor_1_resp_bits_pte_w", false,-1);
    tracep->declBit(c+12507,"io_requestor_1_resp_bits_pte_r", false,-1);
    tracep->declBit(c+12508,"io_requestor_1_resp_bits_pte_v", false,-1);
    tracep->declBus(c+12509,"io_requestor_1_resp_bits_level", false,-1, 1,0);
    tracep->declBit(c+12510,"io_requestor_1_resp_bits_homogeneous", false,-1);
    tracep->declBus(c+11909,"io_requestor_1_ptbr_mode", false,-1, 3,0);
    tracep->declBit(c+11705,"io_requestor_1_status_debug", false,-1);
    tracep->declBit(c+11714,"io_requestor_1_status_mxr", false,-1);
    tracep->declBit(c+11715,"io_requestor_1_status_sum", false,-1);
    tracep->declBit(c+11912,"io_requestor_1_pmp_0_cfg_l", false,-1);
    tracep->declBus(c+11913,"io_requestor_1_pmp_0_cfg_a", false,-1, 1,0);
    tracep->declBit(c+11914,"io_requestor_1_pmp_0_cfg_x", false,-1);
    tracep->declBit(c+11915,"io_requestor_1_pmp_0_cfg_w", false,-1);
    tracep->declBit(c+11916,"io_requestor_1_pmp_0_cfg_r", false,-1);
    tracep->declBus(c+11917,"io_requestor_1_pmp_0_addr", false,-1, 29,0);
    tracep->declBus(c+11918,"io_requestor_1_pmp_0_mask", false,-1, 31,0);
    tracep->declBit(c+11919,"io_requestor_1_pmp_1_cfg_l", false,-1);
    tracep->declBus(c+11920,"io_requestor_1_pmp_1_cfg_a", false,-1, 1,0);
    tracep->declBit(c+11921,"io_requestor_1_pmp_1_cfg_x", false,-1);
    tracep->declBit(c+11922,"io_requestor_1_pmp_1_cfg_w", false,-1);
    tracep->declBit(c+11923,"io_requestor_1_pmp_1_cfg_r", false,-1);
    tracep->declBus(c+11924,"io_requestor_1_pmp_1_addr", false,-1, 29,0);
    tracep->declBus(c+11925,"io_requestor_1_pmp_1_mask", false,-1, 31,0);
    tracep->declBit(c+11926,"io_requestor_1_pmp_2_cfg_l", false,-1);
    tracep->declBus(c+11927,"io_requestor_1_pmp_2_cfg_a", false,-1, 1,0);
    tracep->declBit(c+11928,"io_requestor_1_pmp_2_cfg_x", false,-1);
    tracep->declBit(c+11929,"io_requestor_1_pmp_2_cfg_w", false,-1);
    tracep->declBit(c+11930,"io_requestor_1_pmp_2_cfg_r", false,-1);
    tracep->declBus(c+11931,"io_requestor_1_pmp_2_addr", false,-1, 29,0);
    tracep->declBus(c+11932,"io_requestor_1_pmp_2_mask", false,-1, 31,0);
    tracep->declBit(c+11933,"io_requestor_1_pmp_3_cfg_l", false,-1);
    tracep->declBus(c+11934,"io_requestor_1_pmp_3_cfg_a", false,-1, 1,0);
    tracep->declBit(c+11935,"io_requestor_1_pmp_3_cfg_x", false,-1);
    tracep->declBit(c+11936,"io_requestor_1_pmp_3_cfg_w", false,-1);
    tracep->declBit(c+11937,"io_requestor_1_pmp_3_cfg_r", false,-1);
    tracep->declBus(c+11938,"io_requestor_1_pmp_3_addr", false,-1, 29,0);
    tracep->declBus(c+11939,"io_requestor_1_pmp_3_mask", false,-1, 31,0);
    tracep->declBit(c+11940,"io_requestor_1_pmp_4_cfg_l", false,-1);
    tracep->declBus(c+11941,"io_requestor_1_pmp_4_cfg_a", false,-1, 1,0);
    tracep->declBit(c+11942,"io_requestor_1_pmp_4_cfg_x", false,-1);
    tracep->declBit(c+11943,"io_requestor_1_pmp_4_cfg_w", false,-1);
    tracep->declBit(c+11944,"io_requestor_1_pmp_4_cfg_r", false,-1);
    tracep->declBus(c+11945,"io_requestor_1_pmp_4_addr", false,-1, 29,0);
    tracep->declBus(c+11946,"io_requestor_1_pmp_4_mask", false,-1, 31,0);
    tracep->declBit(c+11947,"io_requestor_1_pmp_5_cfg_l", false,-1);
    tracep->declBus(c+11948,"io_requestor_1_pmp_5_cfg_a", false,-1, 1,0);
    tracep->declBit(c+11949,"io_requestor_1_pmp_5_cfg_x", false,-1);
    tracep->declBit(c+11950,"io_requestor_1_pmp_5_cfg_w", false,-1);
    tracep->declBit(c+11951,"io_requestor_1_pmp_5_cfg_r", false,-1);
    tracep->declBus(c+11952,"io_requestor_1_pmp_5_addr", false,-1, 29,0);
    tracep->declBus(c+11953,"io_requestor_1_pmp_5_mask", false,-1, 31,0);
    tracep->declBit(c+11954,"io_requestor_1_pmp_6_cfg_l", false,-1);
    tracep->declBus(c+11955,"io_requestor_1_pmp_6_cfg_a", false,-1, 1,0);
    tracep->declBit(c+11956,"io_requestor_1_pmp_6_cfg_x", false,-1);
    tracep->declBit(c+11957,"io_requestor_1_pmp_6_cfg_w", false,-1);
    tracep->declBit(c+11958,"io_requestor_1_pmp_6_cfg_r", false,-1);
    tracep->declBus(c+11959,"io_requestor_1_pmp_6_addr", false,-1, 29,0);
    tracep->declBus(c+11960,"io_requestor_1_pmp_6_mask", false,-1, 31,0);
    tracep->declBit(c+11961,"io_requestor_1_pmp_7_cfg_l", false,-1);
    tracep->declBus(c+11962,"io_requestor_1_pmp_7_cfg_a", false,-1, 1,0);
    tracep->declBit(c+11963,"io_requestor_1_pmp_7_cfg_x", false,-1);
    tracep->declBit(c+11964,"io_requestor_1_pmp_7_cfg_w", false,-1);
    tracep->declBit(c+11965,"io_requestor_1_pmp_7_cfg_r", false,-1);
    tracep->declBus(c+11966,"io_requestor_1_pmp_7_addr", false,-1, 29,0);
    tracep->declBus(c+11967,"io_requestor_1_pmp_7_mask", false,-1, 31,0);
    tracep->declBit(c+14837,"io_requestor_2_req_ready", false,-1);
    tracep->declBit(c+14838,"io_requestor_2_resp_valid", false,-1);
    tracep->declBit(c+12492,"io_requestor_2_resp_bits_ae_ptw", false,-1);
    tracep->declBit(c+12493,"io_requestor_2_resp_bits_ae_final", false,-1);
    tracep->declBit(c+12494,"io_requestor_2_resp_bits_pf", false,-1);
    tracep->declBit(c+12495,"io_requestor_2_resp_bits_gf", false,-1);
    tracep->declBit(c+12496,"io_requestor_2_resp_bits_hr", false,-1);
    tracep->declBit(c+12497,"io_requestor_2_resp_bits_hw", false,-1);
    tracep->declBit(c+12498,"io_requestor_2_resp_bits_hx", false,-1);
    tracep->declQuad(c+12499,"io_requestor_2_resp_bits_pte_ppn", false,-1, 43,0);
    tracep->declBit(c+12501,"io_requestor_2_resp_bits_pte_d", false,-1);
    tracep->declBit(c+12502,"io_requestor_2_resp_bits_pte_a", false,-1);
    tracep->declBit(c+12503,"io_requestor_2_resp_bits_pte_g", false,-1);
    tracep->declBit(c+12504,"io_requestor_2_resp_bits_pte_u", false,-1);
    tracep->declBit(c+12505,"io_requestor_2_resp_bits_pte_x", false,-1);
    tracep->declBit(c+12506,"io_requestor_2_resp_bits_pte_w", false,-1);
    tracep->declBit(c+12507,"io_requestor_2_resp_bits_pte_r", false,-1);
    tracep->declBit(c+12508,"io_requestor_2_resp_bits_pte_v", false,-1);
    tracep->declBus(c+12509,"io_requestor_2_resp_bits_level", false,-1, 1,0);
    tracep->declBit(c+12510,"io_requestor_2_resp_bits_homogeneous", false,-1);
    tracep->declBus(c+11909,"io_requestor_2_ptbr_mode", false,-1, 3,0);
    tracep->declBit(c+11705,"io_requestor_2_status_debug", false,-1);
    tracep->declBus(c+11709,"io_requestor_2_status_prv", false,-1, 1,0);
    tracep->declBit(c+11912,"io_requestor_2_pmp_0_cfg_l", false,-1);
    tracep->declBus(c+11913,"io_requestor_2_pmp_0_cfg_a", false,-1, 1,0);
    tracep->declBit(c+11914,"io_requestor_2_pmp_0_cfg_x", false,-1);
    tracep->declBit(c+11915,"io_requestor_2_pmp_0_cfg_w", false,-1);
    tracep->declBit(c+11916,"io_requestor_2_pmp_0_cfg_r", false,-1);
    tracep->declBus(c+11917,"io_requestor_2_pmp_0_addr", false,-1, 29,0);
    tracep->declBus(c+11918,"io_requestor_2_pmp_0_mask", false,-1, 31,0);
    tracep->declBit(c+11919,"io_requestor_2_pmp_1_cfg_l", false,-1);
    tracep->declBus(c+11920,"io_requestor_2_pmp_1_cfg_a", false,-1, 1,0);
    tracep->declBit(c+11921,"io_requestor_2_pmp_1_cfg_x", false,-1);
    tracep->declBit(c+11922,"io_requestor_2_pmp_1_cfg_w", false,-1);
    tracep->declBit(c+11923,"io_requestor_2_pmp_1_cfg_r", false,-1);
    tracep->declBus(c+11924,"io_requestor_2_pmp_1_addr", false,-1, 29,0);
    tracep->declBus(c+11925,"io_requestor_2_pmp_1_mask", false,-1, 31,0);
    tracep->declBit(c+11926,"io_requestor_2_pmp_2_cfg_l", false,-1);
    tracep->declBus(c+11927,"io_requestor_2_pmp_2_cfg_a", false,-1, 1,0);
    tracep->declBit(c+11928,"io_requestor_2_pmp_2_cfg_x", false,-1);
    tracep->declBit(c+11929,"io_requestor_2_pmp_2_cfg_w", false,-1);
    tracep->declBit(c+11930,"io_requestor_2_pmp_2_cfg_r", false,-1);
    tracep->declBus(c+11931,"io_requestor_2_pmp_2_addr", false,-1, 29,0);
    tracep->declBus(c+11932,"io_requestor_2_pmp_2_mask", false,-1, 31,0);
    tracep->declBit(c+11933,"io_requestor_2_pmp_3_cfg_l", false,-1);
    tracep->declBus(c+11934,"io_requestor_2_pmp_3_cfg_a", false,-1, 1,0);
    tracep->declBit(c+11935,"io_requestor_2_pmp_3_cfg_x", false,-1);
    tracep->declBit(c+11936,"io_requestor_2_pmp_3_cfg_w", false,-1);
    tracep->declBit(c+11937,"io_requestor_2_pmp_3_cfg_r", false,-1);
    tracep->declBus(c+11938,"io_requestor_2_pmp_3_addr", false,-1, 29,0);
    tracep->declBus(c+11939,"io_requestor_2_pmp_3_mask", false,-1, 31,0);
    tracep->declBit(c+11940,"io_requestor_2_pmp_4_cfg_l", false,-1);
    tracep->declBus(c+11941,"io_requestor_2_pmp_4_cfg_a", false,-1, 1,0);
    tracep->declBit(c+11942,"io_requestor_2_pmp_4_cfg_x", false,-1);
    tracep->declBit(c+11943,"io_requestor_2_pmp_4_cfg_w", false,-1);
    tracep->declBit(c+11944,"io_requestor_2_pmp_4_cfg_r", false,-1);
    tracep->declBus(c+11945,"io_requestor_2_pmp_4_addr", false,-1, 29,0);
    tracep->declBus(c+11946,"io_requestor_2_pmp_4_mask", false,-1, 31,0);
    tracep->declBit(c+11947,"io_requestor_2_pmp_5_cfg_l", false,-1);
    tracep->declBus(c+11948,"io_requestor_2_pmp_5_cfg_a", false,-1, 1,0);
    tracep->declBit(c+11949,"io_requestor_2_pmp_5_cfg_x", false,-1);
    tracep->declBit(c+11950,"io_requestor_2_pmp_5_cfg_w", false,-1);
    tracep->declBit(c+11951,"io_requestor_2_pmp_5_cfg_r", false,-1);
    tracep->declBus(c+11952,"io_requestor_2_pmp_5_addr", false,-1, 29,0);
    tracep->declBus(c+11953,"io_requestor_2_pmp_5_mask", false,-1, 31,0);
    tracep->declBit(c+11954,"io_requestor_2_pmp_6_cfg_l", false,-1);
    tracep->declBus(c+11955,"io_requestor_2_pmp_6_cfg_a", false,-1, 1,0);
    tracep->declBit(c+11956,"io_requestor_2_pmp_6_cfg_x", false,-1);
    tracep->declBit(c+11957,"io_requestor_2_pmp_6_cfg_w", false,-1);
    tracep->declBit(c+11958,"io_requestor_2_pmp_6_cfg_r", false,-1);
    tracep->declBus(c+11959,"io_requestor_2_pmp_6_addr", false,-1, 29,0);
    tracep->declBus(c+11960,"io_requestor_2_pmp_6_mask", false,-1, 31,0);
    tracep->declBit(c+11961,"io_requestor_2_pmp_7_cfg_l", false,-1);
    tracep->declBus(c+11962,"io_requestor_2_pmp_7_cfg_a", false,-1, 1,0);
    tracep->declBit(c+11963,"io_requestor_2_pmp_7_cfg_x", false,-1);
    tracep->declBit(c+11964,"io_requestor_2_pmp_7_cfg_w", false,-1);
    tracep->declBit(c+11965,"io_requestor_2_pmp_7_cfg_r", false,-1);
    tracep->declBus(c+11966,"io_requestor_2_pmp_7_addr", false,-1, 29,0);
    tracep->declBus(c+11967,"io_requestor_2_pmp_7_mask", false,-1, 31,0);
    tracep->declQuad(c+11968,"io_requestor_2_customCSRs_csrs_0_value", false,-1, 63,0);
    tracep->declBit(c+14030,"io_mem_req_valid", false,-1);
    tracep->declQuad(c+14031,"io_mem_req_bits_addr", false,-1, 39,0);
    tracep->declBit(c+14033,"io_mem_req_bits_dv", false,-1);
    tracep->declBit(c+14034,"io_mem_s1_kill", false,-1);
    tracep->declBit(c+37620,"do_switch", false,-1);
    tracep->declBit(c+37621,"readEnable", false,-1);
    tracep->declBit(c+37622,"writeEnable", false,-1);
    tracep->declBus(c+37623,"writeAddr", false,-1, 8,0);
    tracep->declBit(c+37624,"l2_refill", false,-1);
    tracep->declBus(c+37625,"state", false,-1, 2,0);
    tracep->declBit(c+15975,"resp_valid_0", false,-1);
    tracep->declBit(c+12491,"resp_valid_1", false,-1);
    tracep->declBit(c+14838,"resp_valid_2", false,-1);
    tracep->declBit(c+37626,"invalidated", false,-1);
    tracep->declBus(c+37627,"count", false,-1, 1,0);
    tracep->declBit(c+12492,"resp_ae_ptw", false,-1);
    tracep->declBit(c+12493,"resp_ae_final", false,-1);
    tracep->declBit(c+12494,"resp_pf", false,-1);
    tracep->declBit(c+12495,"resp_gf", false,-1);
    tracep->declBit(c+12496,"resp_hr", false,-1);
    tracep->declBit(c+12497,"resp_hw", false,-1);
    tracep->declBit(c+12498,"resp_hx", false,-1);
    tracep->declBus(c+37628,"r_req_addr", false,-1, 26,0);
    tracep->declBit(c+37629,"r_req_need_gpa", false,-1);
    tracep->declBit(c+37630,"r_req_vstage1", false,-1);
    tracep->declBit(c+37631,"r_req_stage2", false,-1);
    tracep->declBus(c+37632,"r_req_dest", false,-1, 1,0);
    tracep->declQuad(c+12499,"r_pte_ppn", false,-1, 43,0);
    tracep->declBit(c+12501,"r_pte_d", false,-1);
    tracep->declBit(c+12502,"r_pte_a", false,-1);
    tracep->declBit(c+12503,"r_pte_g", false,-1);
    tracep->declBit(c+12504,"r_pte_u", false,-1);
    tracep->declBit(c+12505,"r_pte_x", false,-1);
    tracep->declBit(c+12506,"r_pte_w", false,-1);
    tracep->declBit(c+12507,"r_pte_r", false,-1);
    tracep->declBit(c+12508,"r_pte_v", false,-1);
    tracep->declQuad(c+37633,"r_hgatp_ppn", false,-1, 43,0);
    tracep->declBus(c+37635,"aux_count", false,-1, 1,0);
    tracep->declQuad(c+37636,"aux_pte_ppn", false,-1, 43,0);
    tracep->declBit(c+37638,"aux_pte_d", false,-1);
    tracep->declBit(c+37639,"aux_pte_a", false,-1);
    tracep->declBit(c+37640,"aux_pte_g", false,-1);
    tracep->declBit(c+37641,"aux_pte_u", false,-1);
    tracep->declBit(c+37642,"aux_pte_x", false,-1);
    tracep->declBit(c+37643,"aux_pte_w", false,-1);
    tracep->declBit(c+37644,"aux_pte_r", false,-1);
    tracep->declBit(c+37645,"aux_pte_v", false,-1);
    tracep->declBit(c+37646,"stage2", false,-1);
    tracep->declBit(c+37647,"stage2_final", false,-1);
    tracep->declBit(c+37648,"do_both_stages", false,-1);
    tracep->declBus(c+12509,"max_count", false,-1, 1,0);
    tracep->declBit(c+37649,"mem_resp_valid", false,-1);
    tracep->declQuad(c+37650,"mem_resp_data", false,-1, 63,0);
    tracep->declBit(c+37652,"aux_pte_pte_v", false,-1);
    tracep->declBit(c+37653,"invalid_paddr", false,-1);
    tracep->declBit(c+37654,"traverse", false,-1);
    tracep->declBus(c+37655,"pte_addr_vpn_idx", false,-1, 8,0);
    tracep->declBus(c+37656,"state_reg", false,-1, 6,0);
    tracep->declBus(c+37657,"valid", false,-1, 7,0);
    tracep->declBus(c+37658,"tags_0", false,-1, 31,0);
    tracep->declBus(c+37659,"tags_1", false,-1, 31,0);
    tracep->declBus(c+37660,"tags_2", false,-1, 31,0);
    tracep->declBus(c+37661,"tags_3", false,-1, 31,0);
    tracep->declBus(c+37662,"tags_4", false,-1, 31,0);
    tracep->declBus(c+37663,"tags_5", false,-1, 31,0);
    tracep->declBus(c+37664,"tags_6", false,-1, 31,0);
    tracep->declBus(c+37665,"tags_7", false,-1, 31,0);
    tracep->declBus(c+37666,"data_0", false,-1, 19,0);
    tracep->declBus(c+37667,"data_1", false,-1, 19,0);
    tracep->declBus(c+37668,"data_2", false,-1, 19,0);
    tracep->declBus(c+37669,"data_3", false,-1, 19,0);
    tracep->declBus(c+37670,"data_4", false,-1, 19,0);
    tracep->declBus(c+37671,"data_5", false,-1, 19,0);
    tracep->declBus(c+37672,"data_6", false,-1, 19,0);
    tracep->declBus(c+37673,"data_7", false,-1, 19,0);
    tracep->declBit(c+37674,"can_hit", false,-1);
    tracep->declQuad(c+37675,"tag", false,-1, 32,0);
    tracep->declBus(c+37677,"hits", false,-1, 7,0);
    tracep->declBit(c+37678,"pte_cache_hit", false,-1);
    tracep->declBus(c+37679,"state_reg_1", false,-1, 6,0);
    tracep->declBus(c+37680,"valid_1", false,-1, 7,0);
    tracep->declBus(c+37681,"tags_1_0", false,-1, 31,0);
    tracep->declBus(c+37682,"tags_1_1", false,-1, 31,0);
    tracep->declBus(c+37683,"tags_1_2", false,-1, 31,0);
    tracep->declBus(c+37684,"tags_1_3", false,-1, 31,0);
    tracep->declBus(c+37685,"tags_1_4", false,-1, 31,0);
    tracep->declBus(c+37686,"tags_1_5", false,-1, 31,0);
    tracep->declBus(c+37687,"tags_1_6", false,-1, 31,0);
    tracep->declBus(c+37688,"tags_1_7", false,-1, 31,0);
    tracep->declBus(c+37689,"data_1_0", false,-1, 19,0);
    tracep->declBus(c+37690,"data_1_1", false,-1, 19,0);
    tracep->declBus(c+37691,"data_1_2", false,-1, 19,0);
    tracep->declBus(c+37692,"data_1_3", false,-1, 19,0);
    tracep->declBus(c+37693,"data_1_4", false,-1, 19,0);
    tracep->declBus(c+37694,"data_1_5", false,-1, 19,0);
    tracep->declBus(c+37695,"data_1_6", false,-1, 19,0);
    tracep->declBus(c+37696,"data_1_7", false,-1, 19,0);
    tracep->declBit(c+37697,"pte_hit", false,-1);
    tracep->declArray(c+37698,"REG_0", false,-1, 511,0);
    tracep->declArray(c+37714,"REG_1_0", false,-1, 511,0);
    tracep->declBit(c+37730,"REG_4", false,-1);
    tracep->declBit(c+37731,"REG_5", false,-1);
    tracep->declQuad(c+37732,"r_2", false,-1, 44,0);
    tracep->declBit(c+37734,"r_3", false,-1);
    tracep->declBit(c+37735,"r_4_0", false,-1);
    tracep->declBit(c+37736,"l2_error", false,-1);
    tracep->declBit(c+37737,"l2_hit", false,-1);
    tracep->declBus(c+37738,"pmpHomogeneous_pgMask", false,-1, 31,0);
    tracep->declBus(c+37739,"pmpHomogeneous_pgMask_1", false,-1, 31,0);
    tracep->declBus(c+37740,"pmpHomogeneous_pgMask_2", false,-1, 31,0);
    tracep->declBus(c+37741,"pmpHomogeneous_pgMask_3", false,-1, 31,0);
    tracep->declBus(c+37742,"pmpHomogeneous_pgMask_4", false,-1, 31,0);
    tracep->declBus(c+37743,"pmpHomogeneous_pgMask_5", false,-1, 31,0);
    tracep->declBus(c+37744,"pmpHomogeneous_pgMask_6", false,-1, 31,0);
    tracep->declBus(c+37745,"pmpHomogeneous_pgMask_7", false,-1, 31,0);
    tracep->declBit(c+12510,"homogeneous", false,-1);
    tracep->declBit(c+37746,"gf", false,-1);
    tracep->declBit(c+37747,"ae", false,-1);
    tracep->declBit(c+37748,"pf", false,-1);
    tracep->declBit(c+37749,"success", false,-1);
    tracep->declBus(c+37750,"r", false,-1, 2,0);
    tracep->declBus(c+37751,"r_1", false,-1, 2,0);
    tracep->pushNamePrefix("arb ");
    tracep->declBit(c+15981,"io_in_0_valid", false,-1);
    tracep->declBus(c+15982,"io_in_0_bits_bits_addr", false,-1, 26,0);
    tracep->declBit(c+15983,"io_in_0_bits_bits_need_gpa", false,-1);
    tracep->declBit(c+15984,"io_in_0_bits_bits_vstage1", false,-1);
    tracep->declBit(c+15985,"io_in_0_bits_bits_stage2", false,-1);
    tracep->declBit(c+12540,"io_in_1_valid", false,-1);
    tracep->declBit(c+40409,"io_in_1_bits_valid", false,-1);
    tracep->declBus(c+12541,"io_in_1_bits_bits_addr", false,-1, 26,0);
    tracep->declBit(c+12542,"io_in_1_bits_bits_need_gpa", false,-1);
    tracep->declBit(c+12543,"io_in_1_bits_bits_vstage1", false,-1);
    tracep->declBit(c+12544,"io_in_1_bits_bits_stage2", false,-1);
    tracep->declBit(c+14841,"io_in_2_valid", false,-1);
    tracep->declBit(c+14842,"io_in_2_bits_valid", false,-1);
    tracep->declBus(c+14843,"io_in_2_bits_bits_addr", false,-1, 26,0);
    tracep->declBit(c+14844,"io_in_2_bits_bits_need_gpa", false,-1);
    tracep->declBit(c+14845,"io_in_2_bits_bits_vstage1", false,-1);
    tracep->declBit(c+14846,"io_in_2_bits_bits_stage2", false,-1);
    tracep->declBit(c+15974,"io_out_ready", false,-1);
    tracep->declBit(c+15974,"io_in_0_ready", false,-1);
    tracep->declBit(c+12490,"io_in_1_ready", false,-1);
    tracep->declBit(c+14837,"io_in_2_ready", false,-1);
    tracep->declBit(c+37752,"io_out_valid", false,-1);
    tracep->declBit(c+37753,"io_out_bits_valid", false,-1);
    tracep->declBus(c+37754,"io_out_bits_bits_addr", false,-1, 26,0);
    tracep->declBit(c+37755,"io_out_bits_bits_need_gpa", false,-1);
    tracep->declBit(c+37756,"io_out_bits_bits_vstage1", false,-1);
    tracep->declBit(c+37757,"io_out_bits_bits_stage2", false,-1);
    tracep->declBus(c+37758,"io_chosen", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("l2_tlb_ram_0 ");
    tracep->declBus(c+37759,"RW0_addr", false,-1, 8,0);
    tracep->declBit(c+37760,"RW0_en", false,-1);
    tracep->declBit(c+40360,"RW0_clk", false,-1);
    tracep->declBit(c+37624,"RW0_wmode", false,-1);
    tracep->declQuad(c+37761,"RW0_wdata", false,-1, 44,0);
    tracep->declQuad(c+37763,"RW0_rdata", false,-1, 44,0);
    tracep->pushNamePrefix("l2_tlb_ram_0_ext ");
    tracep->declBus(c+37759,"RW0_addr", false,-1, 8,0);
    tracep->declBit(c+40360,"RW0_clk", false,-1);
    tracep->declQuad(c+37761,"RW0_wdata", false,-1, 44,0);
    tracep->declQuad(c+37763,"RW0_rdata", false,-1, 44,0);
    tracep->declBit(c+37760,"RW0_en", false,-1);
    tracep->declBit(c+37624,"RW0_wmode", false,-1);
    tracep->declBus(c+37759,"mem_0_0_RW0_addr", false,-1, 8,0);
    tracep->declBit(c+40360,"mem_0_0_RW0_clk", false,-1);
    tracep->declQuad(c+37761,"mem_0_0_RW0_wdata", false,-1, 44,0);
    tracep->declQuad(c+37763,"mem_0_0_RW0_rdata", false,-1, 44,0);
    tracep->declBit(c+37760,"mem_0_0_RW0_en", false,-1);
    tracep->declBit(c+37624,"mem_0_0_RW0_wmode", false,-1);
    tracep->declQuad(c+37763,"RW0_rdata_0_0", false,-1, 44,0);
    tracep->declQuad(c+37763,"RW0_rdata_0", false,-1, 44,0);
    tracep->pushNamePrefix("mem_0_0 ");
    tracep->declBus(c+37759,"RW0_addr", false,-1, 8,0);
    tracep->declBit(c+40360,"RW0_clk", false,-1);
    tracep->declQuad(c+37761,"RW0_wdata", false,-1, 44,0);
    tracep->declQuad(c+37763,"RW0_rdata", false,-1, 44,0);
    tracep->declBit(c+37760,"RW0_en", false,-1);
    tracep->declBit(c+37624,"RW0_wmode", false,-1);
    tracep->declBit(c+37765,"ram_RW_0_r_en", false,-1);
    tracep->declBus(c+37766,"ram_RW_0_r_addr", false,-1, 8,0);
    tracep->declQuad(c+37763,"ram_RW_0_r_data", false,-1, 44,0);
    tracep->declQuad(c+37761,"ram_RW_0_w_data", false,-1, 44,0);
    tracep->declBus(c+37759,"ram_RW_0_w_addr", false,-1, 8,0);
    tracep->declBit(c+40409,"ram_RW_0_w_mask", false,-1);
    tracep->declBit(c+37767,"ram_RW_0_w_en", false,-1);
    tracep->declBit(c+37765,"ram_RW_0_r_en_pipe_0", false,-1);
    tracep->declBus(c+37766,"ram_RW_0_r_addr_pipe_0", false,-1, 8,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("r_pte_barrier ");
    tracep->declQuad(c+37768,"io_x_ppn", false,-1, 43,0);
    tracep->declBit(c+37770,"io_x_d", false,-1);
    tracep->declBit(c+37771,"io_x_a", false,-1);
    tracep->declBit(c+37772,"io_x_g", false,-1);
    tracep->declBit(c+37773,"io_x_u", false,-1);
    tracep->declBit(c+37774,"io_x_x", false,-1);
    tracep->declBit(c+37775,"io_x_w", false,-1);
    tracep->declBit(c+37776,"io_x_r", false,-1);
    tracep->declBit(c+37777,"io_x_v", false,-1);
    tracep->declQuad(c+37768,"io_y_ppn", false,-1, 43,0);
    tracep->declBit(c+37770,"io_y_d", false,-1);
    tracep->declBit(c+37771,"io_y_a", false,-1);
    tracep->declBit(c+37772,"io_y_g", false,-1);
    tracep->declBit(c+37773,"io_y_u", false,-1);
    tracep->declBit(c+37774,"io_y_x", false,-1);
    tracep->declBit(c+37775,"io_y_w", false,-1);
    tracep->declBit(c+37776,"io_y_r", false,-1);
    tracep->declBit(c+37777,"io_y_v", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("state_barrier ");
    tracep->declBus(c+37778,"io_x", false,-1, 2,0);
    tracep->declBus(c+37778,"io_y", false,-1, 2,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("respArb ");
    tracep->declBit(c+11866,"io_in_0_valid", false,-1);
    tracep->declBus(c+11867,"io_in_0_bits_rd", false,-1, 4,0);
    tracep->declQuad(c+11868,"io_in_0_bits_data", false,-1, 63,0);
    tracep->declBit(c+11979,"io_out_ready", false,-1);
    tracep->declBit(c+11979,"io_in_0_ready", false,-1);
    tracep->declBit(c+11866,"io_out_valid", false,-1);
    tracep->declBus(c+11867,"io_out_bits_rd", false,-1, 4,0);
    tracep->declQuad(c+11868,"io_out_bits_data", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("respArb_io_in_0_q ");
    tracep->declBit(c+40360,"clock", false,-1);
    tracep->declBit(c+40241,"reset", false,-1);
    tracep->declBit(c+15976,"io_enq_valid", false,-1);
    tracep->declBus(c+15977,"io_enq_bits_rd", false,-1, 4,0);
    tracep->declQuad(c+15978,"io_enq_bits_data", false,-1, 63,0);
    tracep->declBit(c+11979,"io_deq_ready", false,-1);
    tracep->declBit(c+15973,"io_enq_ready", false,-1);
    tracep->declBit(c+11866,"io_deq_valid", false,-1);
    tracep->declBus(c+11867,"io_deq_bits_rd", false,-1, 4,0);
    tracep->declQuad(c+11868,"io_deq_bits_data", false,-1, 63,0);
    tracep->declBit(c+37779,"enq_ptr_value", false,-1);
    tracep->declBit(c+37780,"deq_ptr_value", false,-1);
    tracep->declBit(c+37781,"maybe_full", false,-1);
    tracep->declBit(c+37782,"ptr_match", false,-1);
    tracep->declBit(c+37783,"empty", false,-1);
    tracep->declBit(c+37784,"full", false,-1);
    tracep->declBit(c+37785,"do_enq", false,-1);
    tracep->declBit(c+37786,"do_deq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+37780,"R0_addr", false,-1);
    tracep->declBit(c+40409,"R0_en", false,-1);
    tracep->declBit(c+40360,"R0_clk", false,-1);
    tracep->declBit(c+37779,"W0_addr", false,-1);
    tracep->declBit(c+37785,"W0_en", false,-1);
    tracep->declBit(c+40360,"W0_clk", false,-1);
    tracep->declArray(c+37787,"W0_data", false,-1, 68,0);
    tracep->declArray(c+37790,"R0_data", false,-1, 68,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declArray(c+37793+i*3,"Memory", true,(i+0), 68,0);
    }
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("tlMasterXbar ");
    tracep->declBit(c+40360,"clock", false,-1);
    tracep->declBit(c+40241,"reset", false,-1);
    tracep->declBit(c+14839,"auto_in_1_a_valid", false,-1);
    tracep->declBus(c+14840,"auto_in_1_a_bits_address", false,-1, 31,0);
    tracep->declBit(c+12511,"auto_in_0_a_valid", false,-1);
    tracep->declBus(c+12512,"auto_in_0_a_bits_opcode", false,-1, 2,0);
    tracep->declBus(c+12513,"auto_in_0_a_bits_param", false,-1, 2,0);
    tracep->declBus(c+12514,"auto_in_0_a_bits_size", false,-1, 3,0);
    tracep->declBit(c+12515,"auto_in_0_a_bits_source", false,-1);
    tracep->declBus(c+12516,"auto_in_0_a_bits_address", false,-1, 31,0);
    tracep->declBus(c+12517,"auto_in_0_a_bits_mask", false,-1, 15,0);
    tracep->declArray(c+12518,"auto_in_0_a_bits_data", false,-1, 127,0);
    tracep->declBit(c+12522,"auto_in_0_b_ready", false,-1);
    tracep->declBit(c+11264,"auto_in_0_c_valid", false,-1);
    tracep->declBus(c+11265,"auto_in_0_c_bits_opcode", false,-1, 2,0);
    tracep->declBus(c+11266,"auto_in_0_c_bits_param", false,-1, 2,0);
    tracep->declBus(c+11267,"auto_in_0_c_bits_size", false,-1, 3,0);
    tracep->declBit(c+12523,"auto_in_0_c_bits_source", false,-1);
    tracep->declBus(c+11269,"auto_in_0_c_bits_address", false,-1, 31,0);
    tracep->declArray(c+11270,"auto_in_0_c_bits_data", false,-1, 127,0);
    tracep->declBit(c+12524,"auto_in_0_d_ready", false,-1);
    tracep->declBit(c+11275,"auto_in_0_e_valid", false,-1);
    tracep->declBus(c+11276,"auto_in_0_e_bits_sink", false,-1, 3,0);
    tracep->declBit(c+11290,"auto_out_a_ready", false,-1);
    tracep->declBit(c+11291,"auto_out_b_valid", false,-1);
    tracep->declBus(c+11292,"auto_out_b_bits_opcode", false,-1, 2,0);
    tracep->declBus(c+11293,"auto_out_b_bits_param", false,-1, 1,0);
    tracep->declBus(c+11294,"auto_out_b_bits_size", false,-1, 3,0);
    tracep->declBus(c+11295,"auto_out_b_bits_source", false,-1, 1,0);
    tracep->declBus(c+11296,"auto_out_b_bits_address", false,-1, 31,0);
    tracep->declBus(c+11297,"auto_out_b_bits_mask", false,-1, 15,0);
    tracep->declBit(c+11298,"auto_out_b_bits_corrupt", false,-1);
    tracep->declBit(c+11299,"auto_out_c_ready", false,-1);
    tracep->declBit(c+11300,"auto_out_d_valid", false,-1);
    tracep->declBus(c+11301,"auto_out_d_bits_opcode", false,-1, 2,0);
    tracep->declBus(c+11302,"auto_out_d_bits_param", false,-1, 1,0);
    tracep->declBus(c+11303,"auto_out_d_bits_size", false,-1, 3,0);
    tracep->declBus(c+11304,"auto_out_d_bits_source", false,-1, 1,0);
    tracep->declBus(c+11276,"auto_out_d_bits_sink", false,-1, 3,0);
    tracep->declBit(c+11305,"auto_out_d_bits_denied", false,-1);
    tracep->declArray(c+11306,"auto_out_d_bits_data", false,-1, 127,0);
    tracep->declBit(c+11310,"auto_out_d_bits_corrupt", false,-1);
    tracep->declBit(c+11311,"auto_out_e_ready", false,-1);
    tracep->declBit(c+14835,"auto_in_1_a_ready", false,-1);
    tracep->declBit(c+14836,"auto_in_1_d_valid", false,-1);
    tracep->declBus(c+11301,"auto_in_1_d_bits_opcode", false,-1, 2,0);
    tracep->declBus(c+11303,"auto_in_1_d_bits_size", false,-1, 3,0);
    tracep->declArray(c+11306,"auto_in_1_d_bits_data", false,-1, 127,0);
    tracep->declBit(c+11310,"auto_in_1_d_bits_corrupt", false,-1);
    tracep->declBit(c+12472,"auto_in_0_a_ready", false,-1);
    tracep->declBit(c+12473,"auto_in_0_b_valid", false,-1);
    tracep->declBus(c+11293,"auto_in_0_b_bits_param", false,-1, 1,0);
    tracep->declBus(c+11294,"auto_in_0_b_bits_size", false,-1, 3,0);
    tracep->declBit(c+12474,"auto_in_0_b_bits_source", false,-1);
    tracep->declBus(c+11296,"auto_in_0_b_bits_address", false,-1, 31,0);
    tracep->declBit(c+11299,"auto_in_0_c_ready", false,-1);
    tracep->declBit(c+12475,"auto_in_0_d_valid", false,-1);
    tracep->declBus(c+11301,"auto_in_0_d_bits_opcode", false,-1, 2,0);
    tracep->declBus(c+11302,"auto_in_0_d_bits_param", false,-1, 1,0);
    tracep->declBus(c+11303,"auto_in_0_d_bits_size", false,-1, 3,0);
    tracep->declBit(c+12476,"auto_in_0_d_bits_source", false,-1);
    tracep->declBus(c+11276,"auto_in_0_d_bits_sink", false,-1, 3,0);
    tracep->declBit(c+11305,"auto_in_0_d_bits_denied", false,-1);
    tracep->declArray(c+11306,"auto_in_0_d_bits_data", false,-1, 127,0);
    tracep->declBit(c+11311,"auto_in_0_e_ready", false,-1);
    tracep->declBit(c+11252,"auto_out_a_valid", false,-1);
    tracep->declBus(c+11253,"auto_out_a_bits_opcode", false,-1, 2,0);
    tracep->declBus(c+11254,"auto_out_a_bits_param", false,-1, 2,0);
    tracep->declBus(c+11255,"auto_out_a_bits_size", false,-1, 3,0);
    tracep->declBus(c+11256,"auto_out_a_bits_source", false,-1, 1,0);
    tracep->declBus(c+11257,"auto_out_a_bits_address", false,-1, 31,0);
    tracep->declBus(c+11258,"auto_out_a_bits_mask", false,-1, 15,0);
    tracep->declArray(c+11259,"auto_out_a_bits_data", false,-1, 127,0);
    tracep->declBit(c+11263,"auto_out_b_ready", false,-1);
    tracep->declBit(c+11264,"auto_out_c_valid", false,-1);
    tracep->declBus(c+11265,"auto_out_c_bits_opcode", false,-1, 2,0);
    tracep->declBus(c+11266,"auto_out_c_bits_param", false,-1, 2,0);
    tracep->declBus(c+11267,"auto_out_c_bits_size", false,-1, 3,0);
    tracep->declBus(c+11268,"auto_out_c_bits_source", false,-1, 1,0);
    tracep->declBus(c+11269,"auto_out_c_bits_address", false,-1, 31,0);
    tracep->declArray(c+11270,"auto_out_c_bits_data", false,-1, 127,0);
    tracep->declBit(c+11274,"auto_out_d_ready", false,-1);
    tracep->declBit(c+11275,"auto_out_e_valid", false,-1);
    tracep->declBus(c+11276,"auto_out_e_bits_sink", false,-1, 3,0);
    tracep->declBit(c+37799,"requestDOI_0_1", false,-1);
    tracep->declBit(c+12473,"out_8_valid", false,-1);
    tracep->declBit(c+12475,"out_10_valid", false,-1);
    tracep->declBit(c+14836,"out_13_valid", false,-1);
    tracep->declBus(c+37800,"beatsLeft", false,-1, 7,0);
    tracep->declBit(c+37801,"idle", false,-1);
    tracep->declBus(c+37802,"readys_valid", false,-1, 1,0);
    tracep->declBus(c+37803,"readys_mask", false,-1, 1,0);
    tracep->declBus(c+37804,"readys_readys", false,-1, 1,0);
    tracep->declBit(c+37805,"earlyWinner_0", false,-1);
    tracep->declBit(c+37806,"earlyWinner_1", false,-1);
    tracep->declBit(c+37807,"state_0", false,-1);
    tracep->declBit(c+37808,"state_1", false,-1);
    tracep->declBit(c+37809,"muxStateEarly_0", false,-1);
    tracep->declBit(c+37810,"muxStateEarly_1", false,-1);
    tracep->declBit(c+12472,"portsAOI_filtered_0_ready", false,-1);
    tracep->declBit(c+14835,"portsAOI_filtered_1_0_ready", false,-1);
    tracep->declBit(c+11252,"x1_out_1_valid", false,-1);
    tracep->declBit(c+37811,"latch", false,-1);
    tracep->declBit(c+37812,"winnerQual_0", false,-1);
    tracep->pushNamePrefix("monitor ");
    tracep->declBit(c+40360,"clock", false,-1);
    tracep->declBit(c+40241,"reset", false,-1);
    tracep->declBit(c+12472,"io_in_a_ready", false,-1);
    tracep->declBit(c+12511,"io_in_a_valid", false,-1);
    tracep->declBus(c+12512,"io_in_a_bits_opcode", false,-1, 2,0);
    tracep->declBus(c+12513,"io_in_a_bits_param", false,-1, 2,0);
    tracep->declBus(c+12514,"io_in_a_bits_size", false,-1, 3,0);
    tracep->declBit(c+12515,"io_in_a_bits_source", false,-1);
    tracep->declBus(c+12516,"io_in_a_bits_address", false,-1, 31,0);
    tracep->declBus(c+12517,"io_in_a_bits_mask", false,-1, 15,0);
    tracep->declBit(c+12473,"io_in_b_valid", false,-1);
    tracep->declBus(c+11292,"io_in_b_bits_opcode", false,-1, 2,0);
    tracep->declBus(c+11293,"io_in_b_bits_param", false,-1, 1,0);
    tracep->declBus(c+11294,"io_in_b_bits_size", false,-1, 3,0);
    tracep->declBit(c+12474,"io_in_b_bits_source", false,-1);
    tracep->declBus(c+11296,"io_in_b_bits_address", false,-1, 31,0);
    tracep->declBus(c+11297,"io_in_b_bits_mask", false,-1, 15,0);
    tracep->declBit(c+11298,"io_in_b_bits_corrupt", false,-1);
    tracep->declBit(c+11299,"io_in_c_ready", false,-1);
    tracep->declBit(c+11264,"io_in_c_valid", false,-1);
    tracep->declBus(c+11265,"io_in_c_bits_opcode", false,-1, 2,0);
    tracep->declBus(c+11266,"io_in_c_bits_param", false,-1, 2,0);
    tracep->declBus(c+11267,"io_in_c_bits_size", false,-1, 3,0);
    tracep->declBit(c+12523,"io_in_c_bits_source", false,-1);
    tracep->declBus(c+11269,"io_in_c_bits_address", false,-1, 31,0);
    tracep->declBit(c+12524,"io_in_d_ready", false,-1);
    tracep->declBit(c+12475,"io_in_d_valid", false,-1);
    tracep->declBus(c+11301,"io_in_d_bits_opcode", false,-1, 2,0);
    tracep->declBus(c+11302,"io_in_d_bits_param", false,-1, 1,0);
    tracep->declBus(c+11303,"io_in_d_bits_size", false,-1, 3,0);
    tracep->declBit(c+12476,"io_in_d_bits_source", false,-1);
    tracep->declBus(c+11276,"io_in_d_bits_sink", false,-1, 3,0);
    tracep->declBit(c+11305,"io_in_d_bits_denied", false,-1);
    tracep->declBit(c+11310,"io_in_d_bits_corrupt", false,-1);
    tracep->declBit(c+11311,"io_in_e_ready", false,-1);
    tracep->declBit(c+11275,"io_in_e_valid", false,-1);
    tracep->declBus(c+11276,"io_in_e_bits_sink", false,-1, 3,0);
    tracep->declBus(c+37813,"a_first_counter", false,-1, 7,0);
    tracep->declBus(c+37814,"opcode", false,-1, 2,0);
    tracep->declBus(c+37815,"param", false,-1, 2,0);
    tracep->declBus(c+37816,"size", false,-1, 3,0);
    tracep->declBit(c+37817,"source", false,-1);
    tracep->declBus(c+37818,"address", false,-1, 31,0);
    tracep->declBus(c+37819,"d_first_counter", false,-1, 7,0);
    tracep->declBus(c+37820,"opcode_1", false,-1, 2,0);
    tracep->declBus(c+37821,"param_1", false,-1, 1,0);
    tracep->declBus(c+37822,"size_1", false,-1, 3,0);
    tracep->declBit(c+37823,"source_1", false,-1);
    tracep->declBus(c+37824,"sink", false,-1, 3,0);
    tracep->declBit(c+37825,"denied", false,-1);
    tracep->declBus(c+37826,"c_first_counter", false,-1, 7,0);
    tracep->declBus(c+37827,"opcode_3", false,-1, 2,0);
    tracep->declBus(c+37828,"param_3", false,-1, 2,0);
    tracep->declBus(c+37829,"size_3", false,-1, 3,0);
    tracep->declBit(c+37830,"source_3", false,-1);
    tracep->declBus(c+37831,"address_2", false,-1, 31,0);
    tracep->declBus(c+37832,"inflight", false,-1, 1,0);
    tracep->declBus(c+37833,"inflight_opcodes", false,-1, 7,0);
    tracep->declBus(c+37834,"inflight_sizes", false,-1, 15,0);
    tracep->declBus(c+37835,"a_first_counter_1", false,-1, 7,0);
    tracep->declBit(c+37836,"a_first_1", false,-1);
    tracep->declBus(c+37837,"d_first_counter_1", false,-1, 7,0);
    tracep->declBit(c+37838,"d_first_1", false,-1);
    tracep->declBit(c+11577,"d_release_ack", false,-1);
    tracep->declBus(c+37839,"watchdog", false,-1, 31,0);
    tracep->declBus(c+37840,"inflight_1", false,-1, 1,0);
    tracep->declBus(c+37841,"inflight_sizes_1", false,-1, 15,0);
    tracep->declBus(c+37842,"c_first_counter_1", false,-1, 7,0);
    tracep->declBit(c+37843,"c_first_1", false,-1);
    tracep->declBus(c+37844,"d_first_counter_2", false,-1, 7,0);
    tracep->declBit(c+37845,"d_first_2", false,-1);
    tracep->declBus(c+37846,"watchdog_1", false,-1, 31,0);
    tracep->declBus(c+37847,"inflight_2", false,-1, 15,0);
    tracep->declBus(c+37848,"d_first_counter_3", false,-1, 7,0);
    tracep->declBit(c+37849,"d_first_3", false,-1);
    tracep->declBus(c+37850,"d_set", false,-1, 15,0);
    tracep->declBit(c+37851,"mask_acc", false,-1);
    tracep->declBit(c+37852,"mask_acc_1", false,-1);
    tracep->declBit(c+37853,"mask_size_1", false,-1);
    tracep->declBit(c+37854,"mask_eq_2", false,-1);
    tracep->declBit(c+37855,"mask_acc_2", false,-1);
    tracep->declBit(c+37856,"mask_eq_3", false,-1);
    tracep->declBit(c+37857,"mask_acc_3", false,-1);
    tracep->declBit(c+37858,"mask_eq_4", false,-1);
    tracep->declBit(c+37859,"mask_acc_4", false,-1);
    tracep->declBit(c+37860,"mask_eq_5", false,-1);
    tracep->declBit(c+37861,"mask_acc_5", false,-1);
    tracep->declBit(c+37862,"mask_size_2", false,-1);
    tracep->declBit(c+37863,"mask_eq_6", false,-1);
    tracep->declBit(c+37864,"mask_acc_6", false,-1);
    tracep->declBit(c+37865,"mask_eq_7", false,-1);
    tracep->declBit(c+37866,"mask_acc_7", false,-1);
    tracep->declBit(c+37867,"mask_eq_8", false,-1);
    tracep->declBit(c+37868,"mask_acc_8", false,-1);
    tracep->declBit(c+37869,"mask_eq_9", false,-1);
    tracep->declBit(c+37870,"mask_acc_9", false,-1);
    tracep->declBit(c+37871,"mask_eq_10", false,-1);
    tracep->declBit(c+37872,"mask_acc_10", false,-1);
    tracep->declBit(c+37873,"mask_eq_11", false,-1);
    tracep->declBit(c+37874,"mask_acc_11", false,-1);
    tracep->declBit(c+37875,"mask_eq_12", false,-1);
    tracep->declBit(c+37876,"mask_acc_12", false,-1);
    tracep->declBit(c+37877,"mask_eq_13", false,-1);
    tracep->declBit(c+37878,"mask_acc_13", false,-1);
    tracep->declBus(c+37879,"mask", false,-1, 15,0);
    tracep->declBit(c+11621,"address_ok", false,-1);
    tracep->declBit(c+37880,"mask_acc_30", false,-1);
    tracep->declBit(c+37881,"mask_acc_31", false,-1);
    tracep->declBit(c+11624,"mask_size_5", false,-1);
    tracep->declBit(c+37882,"mask_eq_32", false,-1);
    tracep->declBit(c+37883,"mask_acc_32", false,-1);
    tracep->declBit(c+37884,"mask_eq_33", false,-1);
    tracep->declBit(c+37885,"mask_acc_33", false,-1);
    tracep->declBit(c+37886,"mask_eq_34", false,-1);
    tracep->declBit(c+37887,"mask_acc_34", false,-1);
    tracep->declBit(c+37888,"mask_eq_35", false,-1);
    tracep->declBit(c+37889,"mask_acc_35", false,-1);
    tracep->declBit(c+11633,"mask_size_6", false,-1);
    tracep->declBit(c+37890,"mask_eq_36", false,-1);
    tracep->declBit(c+37891,"mask_acc_36", false,-1);
    tracep->declBit(c+37892,"mask_eq_37", false,-1);
    tracep->declBit(c+37893,"mask_acc_37", false,-1);
    tracep->declBit(c+37894,"mask_eq_38", false,-1);
    tracep->declBit(c+37895,"mask_acc_38", false,-1);
    tracep->declBit(c+37896,"mask_eq_39", false,-1);
    tracep->declBit(c+37897,"mask_acc_39", false,-1);
    tracep->declBit(c+37898,"mask_eq_40", false,-1);
    tracep->declBit(c+37899,"mask_acc_40", false,-1);
    tracep->declBit(c+37900,"mask_eq_41", false,-1);
    tracep->declBit(c+37901,"mask_acc_41", false,-1);
    tracep->declBit(c+37902,"mask_eq_42", false,-1);
    tracep->declBit(c+37903,"mask_acc_42", false,-1);
    tracep->declBit(c+37904,"mask_eq_43", false,-1);
    tracep->declBit(c+37905,"mask_acc_43", false,-1);
    tracep->declBus(c+37906,"mask_1", false,-1, 15,0);
    tracep->declBit(c+11652,"address_ok_1", false,-1);
    tracep->declBus(c+37907,"a_set_wo_ready", false,-1, 1,0);
    tracep->declBit(c+37908,"same_cycle_resp", false,-1);
    tracep->declBus(c+37909,"c_set_wo_ready", false,-1, 1,0);
    tracep->declBit(c+37910,"same_cycle_resp_1", false,-1);
    tracep->pushNamePrefix("plusarg_reader ");
    tracep->declArray(c+40414,"FORMAT", false,-1, 151,0);
    tracep->declBus(c+40419,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+40420,"DEFAULT", false,-1, 31,0);
    tracep->declBus(c+128,"out", false,-1, 31,0);
    tracep->declBus(c+128,"myplus", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("plusarg_reader_1 ");
    tracep->declArray(c+40414,"FORMAT", false,-1, 151,0);
    tracep->declBus(c+40419,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+40420,"DEFAULT", false,-1, 31,0);
    tracep->declBus(c+129,"out", false,-1, 31,0);
    tracep->declBus(c+129,"myplus", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("monitor_1 ");
    tracep->declBit(c+40360,"clock", false,-1);
    tracep->declBit(c+40241,"reset", false,-1);
    tracep->declBit(c+14835,"io_in_a_ready", false,-1);
    tracep->declBit(c+14839,"io_in_a_valid", false,-1);
    tracep->declBus(c+14840,"io_in_a_bits_address", false,-1, 31,0);
    tracep->declBit(c+14836,"io_in_d_valid", false,-1);
    tracep->declBus(c+11301,"io_in_d_bits_opcode", false,-1, 2,0);
    tracep->declBus(c+11302,"io_in_d_bits_param", false,-1, 1,0);
    tracep->declBus(c+11303,"io_in_d_bits_size", false,-1, 3,0);
    tracep->declBus(c+11276,"io_in_d_bits_sink", false,-1, 3,0);
    tracep->declBit(c+11305,"io_in_d_bits_denied", false,-1);
    tracep->declBit(c+11310,"io_in_d_bits_corrupt", false,-1);
    tracep->declBit(c+37911,"a_set", false,-1);
    tracep->declBus(c+37912,"d_first_counter", false,-1, 7,0);
    tracep->declBus(c+37913,"opcode_1", false,-1, 2,0);
    tracep->declBus(c+37914,"param_1", false,-1, 1,0);
    tracep->declBus(c+37915,"size_1", false,-1, 3,0);
    tracep->declBit(c+37916,"source_1", false,-1);
    tracep->declBus(c+37917,"sink", false,-1, 3,0);
    tracep->declBit(c+37918,"denied", false,-1);
    tracep->declBit(c+37919,"inflight", false,-1);
    tracep->declBus(c+37920,"inflight_opcodes", false,-1, 3,0);
    tracep->declBus(c+37921,"inflight_sizes", false,-1, 7,0);
    tracep->declBus(c+37922,"d_first_counter_1", false,-1, 7,0);
    tracep->declBit(c+37923,"d_first_1", false,-1);
    tracep->declBit(c+11577,"d_release_ack", false,-1);
    tracep->declBus(c+37924,"watchdog", false,-1, 31,0);
    tracep->declBus(c+37925,"d_first_counter_2", false,-1, 7,0);
    tracep->declBit(c+37926,"d_first_2", false,-1);
    tracep->declBit(c+37927,"d_clr", false,-1);
    tracep->pushNamePrefix("plusarg_reader ");
    tracep->declArray(c+40414,"FORMAT", false,-1, 151,0);
    tracep->declBus(c+40419,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+40420,"DEFAULT", false,-1, 31,0);
    tracep->declBus(c+130,"out", false,-1, 31,0);
    tracep->declBus(c+130,"myplus", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("plusarg_reader_1 ");
    tracep->declArray(c+40414,"FORMAT", false,-1, 151,0);
    tracep->declBus(c+40419,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+40420,"DEFAULT", false,-1, 31,0);
    tracep->declBus(c+131,"out", false,-1, 31,0);
    tracep->declBus(c+131,"myplus", false,-1, 31,0);
    tracep->popNamePrefix(5);
    tracep->pushNamePrefix("tlDM ");
    tracep->declBit(c+39498,"auto_dmInner_dmInner_tl_in_a_valid", false,-1);
    tracep->declBus(c+39502,"auto_dmInner_dmInner_tl_in_a_bits_opcode", false,-1, 2,0);
    tracep->declBus(c+39503,"auto_dmInner_dmInner_tl_in_a_bits_param", false,-1, 2,0);
    tracep->declBus(c+39500,"auto_dmInner_dmInner_tl_in_a_bits_size", false,-1, 1,0);
    tracep->declBus(c+39501,"auto_dmInner_dmInner_tl_in_a_bits_source", false,-1, 10,0);
    tracep->declBus(c+39504,"auto_dmInner_dmInner_tl_in_a_bits_address", false,-1, 11,0);
    tracep->declBus(c+39505,"auto_dmInner_dmInner_tl_in_a_bits_mask", false,-1, 7,0);
    tracep->declQuad(c+39312,"auto_dmInner_dmInner_tl_in_a_bits_data", false,-1, 63,0);
    tracep->declBit(c+39506,"auto_dmInner_dmInner_tl_in_a_bits_corrupt", false,-1);
    tracep->declBit(c+39497,"auto_dmInner_dmInner_tl_in_d_ready", false,-1);
    tracep->declBit(c+40365,"io_debug_clock", false,-1);
    tracep->declBit(c+40363,"io_debug_reset", false,-1);
    tracep->declBit(c+38461,"io_ctrl_dmactiveAck", false,-1);
    tracep->declBit(c+1283,"io_dmi_dmi_req_valid", false,-1);
    tracep->declBus(c+1202,"io_dmi_dmi_req_bits_addr", false,-1, 6,0);
    tracep->declBus(c+1203,"io_dmi_dmi_req_bits_data", false,-1, 31,0);
    tracep->declBus(c+1204,"io_dmi_dmi_req_bits_op", false,-1, 1,0);
    tracep->declBit(c+40313,"io_dmi_dmi_resp_ready", false,-1);
    tracep->declBit(c+169,"io_dmi_dmiClock", false,-1);
    tracep->declBit(c+40364,"io_dmi_dmiReset", false,-1);
    tracep->declBit(c+40239,"io_hartIsInReset_0", false,-1);
    tracep->declBit(c+39497,"auto_dmInner_dmInner_tl_in_a_ready", false,-1);
    tracep->declBit(c+39498,"auto_dmInner_dmInner_tl_in_d_valid", false,-1);
    tracep->declBus(c+39499,"auto_dmInner_dmInner_tl_in_d_bits_opcode", false,-1, 2,0);
    tracep->declBus(c+39500,"auto_dmInner_dmInner_tl_in_d_bits_size", false,-1, 1,0);
    tracep->declBus(c+39501,"auto_dmInner_dmInner_tl_in_d_bits_source", false,-1, 10,0);
    tracep->declQuad(c+40380,"auto_dmInner_dmInner_tl_in_d_bits_data", false,-1, 63,0);
    tracep->declBit(c+40390,"auto_dmOuter_intsource_out_sync_0", false,-1);
    tracep->declBit(c+39244,"io_ctrl_dmactive", false,-1);
    tracep->declBit(c+40312,"io_dmi_dmi_req_ready", false,-1);
    tracep->declBit(c+39245,"io_dmi_dmi_resp_valid", false,-1);
    tracep->declBus(c+40367,"io_dmi_dmi_resp_bits_data", false,-1, 31,0);
    tracep->declBus(c+39246,"io_dmi_dmi_resp_bits_resp", false,-1, 1,0);
    tracep->pushNamePrefix("dmInner ");
    tracep->declBus(c+39181,"auto_dmiXing_in_a_mem_0_opcode", false,-1, 2,0);
    tracep->declBus(c+39182,"auto_dmiXing_in_a_mem_0_param", false,-1, 2,0);
    tracep->declBus(c+39183,"auto_dmiXing_in_a_mem_0_size", false,-1, 1,0);
    tracep->declBit(c+39184,"auto_dmiXing_in_a_mem_0_source", false,-1);
    tracep->declBus(c+39185,"auto_dmiXing_in_a_mem_0_address", false,-1, 8,0);
    tracep->declBus(c+39186,"auto_dmiXing_in_a_mem_0_mask", false,-1, 3,0);
    tracep->declBus(c+39187,"auto_dmiXing_in_a_mem_0_data", false,-1, 31,0);
    tracep->declBit(c+39188,"auto_dmiXing_in_a_mem_0_corrupt", false,-1);
    tracep->declBit(c+39251,"auto_dmiXing_in_a_widx", false,-1);
    tracep->declBit(c+40286,"auto_dmiXing_in_a_safe_widx_valid", false,-1);
    tracep->declBit(c+40395,"auto_dmiXing_in_a_safe_source_reset_n", false,-1);
    tracep->declBit(c+39252,"auto_dmiXing_in_d_ridx", false,-1);
    tracep->declBit(c+40287,"auto_dmiXing_in_d_safe_ridx_valid", false,-1);
    tracep->declBit(c+40395,"auto_dmiXing_in_d_safe_sink_reset_n", false,-1);
    tracep->declBit(c+39498,"auto_dmInner_tl_in_a_valid", false,-1);
    tracep->declBus(c+39502,"auto_dmInner_tl_in_a_bits_opcode", false,-1, 2,0);
    tracep->declBus(c+39503,"auto_dmInner_tl_in_a_bits_param", false,-1, 2,0);
    tracep->declBus(c+39500,"auto_dmInner_tl_in_a_bits_size", false,-1, 1,0);
    tracep->declBus(c+39501,"auto_dmInner_tl_in_a_bits_source", false,-1, 10,0);
    tracep->declBus(c+39504,"auto_dmInner_tl_in_a_bits_address", false,-1, 11,0);
    tracep->declBus(c+39505,"auto_dmInner_tl_in_a_bits_mask", false,-1, 7,0);
    tracep->declQuad(c+39312,"auto_dmInner_tl_in_a_bits_data", false,-1, 63,0);
    tracep->declBit(c+39506,"auto_dmInner_tl_in_a_bits_corrupt", false,-1);
    tracep->declBit(c+39497,"auto_dmInner_tl_in_d_ready", false,-1);
    tracep->declBit(c+40365,"io_debug_clock", false,-1);
    tracep->declBit(c+40363,"io_debug_reset", false,-1);
    tracep->declBit(c+39244,"io_dmactive", false,-1);
    tracep->declBit(c+39189,"io_innerCtrl_mem_0_resumereq", false,-1);
    tracep->declBus(c+39190,"io_innerCtrl_mem_0_hartsel", false,-1, 9,0);
    tracep->declBit(c+39191,"io_innerCtrl_mem_0_ackhavereset", false,-1);
    tracep->declBit(c+39192,"io_innerCtrl_mem_0_hasel", false,-1);
    tracep->declBit(c+39193,"io_innerCtrl_mem_0_hamask_0", false,-1);
    tracep->declBit(c+39194,"io_innerCtrl_mem_0_hrmask_0", false,-1);
    tracep->declBit(c+39253,"io_innerCtrl_widx", false,-1);
    tracep->declBit(c+40288,"io_innerCtrl_safe_widx_valid", false,-1);
    tracep->declBit(c+40395,"io_innerCtrl_safe_source_reset_n", false,-1);
    tracep->declBit(c+40239,"io_hartIsInReset_0", false,-1);
    tracep->declBit(c+38916,"auto_dmiXing_in_a_ridx", false,-1);
    tracep->declBit(c+40246,"auto_dmiXing_in_a_safe_ridx_valid", false,-1);
    tracep->declBit(c+40396,"auto_dmiXing_in_a_safe_sink_reset_n", false,-1);
    tracep->declBus(c+38482,"auto_dmiXing_in_d_mem_0_opcode", false,-1, 2,0);
    tracep->declBus(c+38483,"auto_dmiXing_in_d_mem_0_param", false,-1, 1,0);
    tracep->declBus(c+38484,"auto_dmiXing_in_d_mem_0_size", false,-1, 1,0);
    tracep->declBit(c+38485,"auto_dmiXing_in_d_mem_0_source", false,-1);
    tracep->declBit(c+38486,"auto_dmiXing_in_d_mem_0_sink", false,-1);
    tracep->declBit(c+38487,"auto_dmiXing_in_d_mem_0_denied", false,-1);
    tracep->declBus(c+38488,"auto_dmiXing_in_d_mem_0_data", false,-1, 31,0);
    tracep->declBit(c+38489,"auto_dmiXing_in_d_mem_0_corrupt", false,-1);
    tracep->declBit(c+38917,"auto_dmiXing_in_d_widx", false,-1);
    tracep->declBit(c+40247,"auto_dmiXing_in_d_safe_widx_valid", false,-1);
    tracep->declBit(c+40396,"auto_dmiXing_in_d_safe_source_reset_n", false,-1);
    tracep->declBit(c+39497,"auto_dmInner_tl_in_a_ready", false,-1);
    tracep->declBit(c+39498,"auto_dmInner_tl_in_d_valid", false,-1);
    tracep->declBus(c+39499,"auto_dmInner_tl_in_d_bits_opcode", false,-1, 2,0);
    tracep->declBus(c+39500,"auto_dmInner_tl_in_d_bits_size", false,-1, 1,0);
    tracep->declBus(c+39501,"auto_dmInner_tl_in_d_bits_source", false,-1, 10,0);
    tracep->declQuad(c+40380,"auto_dmInner_tl_in_d_bits_data", false,-1, 63,0);
    tracep->declBit(c+38918,"io_innerCtrl_ridx", false,-1);
    tracep->declBit(c+40248,"io_innerCtrl_safe_ridx_valid", false,-1);
    tracep->declBit(c+40396,"io_innerCtrl_safe_sink_reset_n", false,-1);
    tracep->declBit(c+38919,"io_hgDebugInt_0", false,-1);
    tracep->pushNamePrefix("dmInner ");
    tracep->declBit(c+40365,"clock", false,-1);
    tracep->declBit(c+40363,"reset", false,-1);
    tracep->declBit(c+39498,"auto_tl_in_a_valid", false,-1);
    tracep->declBus(c+39502,"auto_tl_in_a_bits_opcode", false,-1, 2,0);
    tracep->declBus(c+39503,"auto_tl_in_a_bits_param", false,-1, 2,0);
    tracep->declBus(c+39500,"auto_tl_in_a_bits_size", false,-1, 1,0);
    tracep->declBus(c+39501,"auto_tl_in_a_bits_source", false,-1, 10,0);
    tracep->declBus(c+39504,"auto_tl_in_a_bits_address", false,-1, 11,0);
    tracep->declBus(c+39505,"auto_tl_in_a_bits_mask", false,-1, 7,0);
    tracep->declQuad(c+39312,"auto_tl_in_a_bits_data", false,-1, 63,0);
    tracep->declBit(c+39506,"auto_tl_in_a_bits_corrupt", false,-1);
    tracep->declBit(c+39497,"auto_tl_in_d_ready", false,-1);
    tracep->declBit(c+38920,"auto_dmi_in_a_valid", false,-1);
    tracep->declBus(c+38490,"auto_dmi_in_a_bits_opcode", false,-1, 2,0);
    tracep->declBus(c+38491,"auto_dmi_in_a_bits_param", false,-1, 2,0);
    tracep->declBus(c+38492,"auto_dmi_in_a_bits_size", false,-1, 1,0);
    tracep->declBit(c+38493,"auto_dmi_in_a_bits_source", false,-1);
    tracep->declBus(c+38494,"auto_dmi_in_a_bits_address", false,-1, 8,0);
    tracep->declBus(c+38495,"auto_dmi_in_a_bits_mask", false,-1, 3,0);
    tracep->declBus(c+38496,"auto_dmi_in_a_bits_data", false,-1, 31,0);
    tracep->declBit(c+38497,"auto_dmi_in_a_bits_corrupt", false,-1);
    tracep->declBit(c+38921,"auto_dmi_in_d_ready", false,-1);
    tracep->declBit(c+38922,"io_dmactive", false,-1);
    tracep->declBit(c+38923,"io_innerCtrl_valid", false,-1);
    tracep->declBit(c+38498,"io_innerCtrl_bits_resumereq", false,-1);
    tracep->declBus(c+38499,"io_innerCtrl_bits_hartsel", false,-1, 9,0);
    tracep->declBit(c+38500,"io_innerCtrl_bits_ackhavereset", false,-1);
    tracep->declBit(c+38501,"io_innerCtrl_bits_hrmask_0", false,-1);
    tracep->declBit(c+40239,"io_hartIsInReset_0", false,-1);
    tracep->declBit(c+39497,"auto_tl_in_a_ready", false,-1);
    tracep->declBit(c+39498,"auto_tl_in_d_valid", false,-1);
    tracep->declBus(c+39499,"auto_tl_in_d_bits_opcode", false,-1, 2,0);
    tracep->declBus(c+39500,"auto_tl_in_d_bits_size", false,-1, 1,0);
    tracep->declBus(c+39501,"auto_tl_in_d_bits_source", false,-1, 10,0);
    tracep->declQuad(c+40380,"auto_tl_in_d_bits_data", false,-1, 63,0);
    tracep->declBit(c+38921,"auto_dmi_in_a_ready", false,-1);
    tracep->declBit(c+38920,"auto_dmi_in_d_valid", false,-1);
    tracep->declBus(c+38502,"auto_dmi_in_d_bits_opcode", false,-1, 2,0);
    tracep->declBus(c+38492,"auto_dmi_in_d_bits_size", false,-1, 1,0);
    tracep->declBit(c+38493,"auto_dmi_in_d_bits_source", false,-1);
    tracep->declBus(c+40397,"auto_dmi_in_d_bits_data", false,-1, 31,0);
    tracep->declBit(c+38919,"io_hgDebugInt_0", false,-1);
    tracep->declBit(c+38503,"abstractCommandBusy", false,-1);
    tracep->declBit(c+40149,"out_woready_1_345", false,-1);
    tracep->declBit(c+40150,"out_woready_1_528", false,-1);
    tracep->declBit(c+38924,"out_woready_31", false,-1);
    tracep->declBit(c+38925,"out_woready_7", false,-1);
    tracep->declBit(c+38926,"out_woready_54", false,-1);
    tracep->declBit(c+38927,"out_woready_93", false,-1);
    tracep->declBit(c+38928,"out_woready_23", false,-1);
    tracep->declBit(c+38929,"out_woready_35", false,-1);
    tracep->declBit(c+38930,"out_woready_11", false,-1);
    tracep->declBit(c+38931,"out_woready_97", false,-1);
    tracep->declBit(c+38932,"out_woready_15", false,-1);
    tracep->declBit(c+38933,"out_woready_46", false,-1);
    tracep->declBit(c+38934,"out_woready_42", false,-1);
    tracep->declBit(c+38935,"out_woready_102", false,-1);
    tracep->declBit(c+38936,"out_woready_19", false,-1);
    tracep->declBit(c+38937,"out_woready_82", false,-1);
    tracep->declBit(c+38938,"out_woready_50", false,-1);
    tracep->declBit(c+38939,"out_woready_78", false,-1);
    tracep->declBit(c+38940,"out_woready_38", false,-1);
    tracep->declBit(c+38941,"out_woready_3", false,-1);
    tracep->declBit(c+38942,"out_woready_27", false,-1);
    tracep->declBit(c+38943,"out_roready_31", false,-1);
    tracep->declBit(c+38944,"out_roready_7", false,-1);
    tracep->declBit(c+38945,"out_roready_54", false,-1);
    tracep->declBit(c+38946,"out_roready_93", false,-1);
    tracep->declBit(c+38947,"out_roready_23", false,-1);
    tracep->declBit(c+38948,"out_roready_35", false,-1);
    tracep->declBit(c+38949,"out_roready_11", false,-1);
    tracep->declBit(c+38950,"out_roready_97", false,-1);
    tracep->declBit(c+38951,"out_roready_15", false,-1);
    tracep->declBit(c+38952,"out_roready_46", false,-1);
    tracep->declBit(c+38953,"out_roready_42", false,-1);
    tracep->declBit(c+38954,"out_roready_102", false,-1);
    tracep->declBit(c+38955,"out_roready_19", false,-1);
    tracep->declBit(c+38956,"out_roready_82", false,-1);
    tracep->declBit(c+38957,"out_roready_50", false,-1);
    tracep->declBit(c+38958,"out_roready_78", false,-1);
    tracep->declBit(c+38959,"out_roready_3", false,-1);
    tracep->declBit(c+38960,"out_roready_27", false,-1);
    tracep->declBit(c+38504,"out_backSel_7", false,-1);
    tracep->declBit(c+38505,"out_backSel_6", false,-1);
    tracep->declBit(c+40242,"haltedBitRegs", false,-1);
    tracep->declBit(c+38506,"resumeReqRegs", false,-1);
    tracep->declBit(c+38507,"haveResetBitRegs", false,-1);
    tracep->declBit(c+38508,"hamaskWrSel_0", false,-1);
    tracep->declBit(c+40243,"hrmaskReg_0", false,-1);
    tracep->declBit(c+38919,"hrDebugIntReg_0", false,-1);
    tracep->declBit(c+38961,"resumereq", false,-1);
    tracep->declBus(c+38509,"ABSTRACTCSReg_cmderr", false,-1, 2,0);
    tracep->declBus(c+38510,"ABSTRACTAUTOReg_autoexecprogbuf", false,-1, 15,0);
    tracep->declBus(c+38511,"ABSTRACTAUTOReg_autoexecdata", false,-1, 11,0);
    tracep->declBus(c+38512,"COMMANDRdData_cmdtype", false,-1, 7,0);
    tracep->declBus(c+38513,"COMMANDRdData_control", false,-1, 23,0);
    tracep->declBus(c+38514,"abstractDataMem_0", false,-1, 7,0);
    tracep->declBus(c+38515,"abstractDataMem_1", false,-1, 7,0);
    tracep->declBus(c+38516,"abstractDataMem_2", false,-1, 7,0);
    tracep->declBus(c+38517,"abstractDataMem_3", false,-1, 7,0);
    tracep->declBus(c+38518,"abstractDataMem_4", false,-1, 7,0);
    tracep->declBus(c+38519,"abstractDataMem_5", false,-1, 7,0);
    tracep->declBus(c+38520,"abstractDataMem_6", false,-1, 7,0);
    tracep->declBus(c+38521,"abstractDataMem_7", false,-1, 7,0);
    tracep->declBus(c+38522,"programBufferMem_0", false,-1, 7,0);
    tracep->declBus(c+38523,"programBufferMem_1", false,-1, 7,0);
    tracep->declBus(c+38524,"programBufferMem_2", false,-1, 7,0);
    tracep->declBus(c+38525,"programBufferMem_3", false,-1, 7,0);
    tracep->declBus(c+38526,"programBufferMem_4", false,-1, 7,0);
    tracep->declBus(c+38527,"programBufferMem_5", false,-1, 7,0);
    tracep->declBus(c+38528,"programBufferMem_6", false,-1, 7,0);
    tracep->declBus(c+38529,"programBufferMem_7", false,-1, 7,0);
    tracep->declBus(c+38530,"programBufferMem_8", false,-1, 7,0);
    tracep->declBus(c+38531,"programBufferMem_9", false,-1, 7,0);
    tracep->declBus(c+38532,"programBufferMem_10", false,-1, 7,0);
    tracep->declBus(c+38533,"programBufferMem_11", false,-1, 7,0);
    tracep->declBus(c+38534,"programBufferMem_12", false,-1, 7,0);
    tracep->declBus(c+38535,"programBufferMem_13", false,-1, 7,0);
    tracep->declBus(c+38536,"programBufferMem_14", false,-1, 7,0);
    tracep->declBus(c+38537,"programBufferMem_15", false,-1, 7,0);
    tracep->declBus(c+38538,"programBufferMem_16", false,-1, 7,0);
    tracep->declBus(c+38539,"programBufferMem_17", false,-1, 7,0);
    tracep->declBus(c+38540,"programBufferMem_18", false,-1, 7,0);
    tracep->declBus(c+38541,"programBufferMem_19", false,-1, 7,0);
    tracep->declBus(c+38542,"programBufferMem_20", false,-1, 7,0);
    tracep->declBus(c+38543,"programBufferMem_21", false,-1, 7,0);
    tracep->declBus(c+38544,"programBufferMem_22", false,-1, 7,0);
    tracep->declBus(c+38545,"programBufferMem_23", false,-1, 7,0);
    tracep->declBus(c+38546,"programBufferMem_24", false,-1, 7,0);
    tracep->declBus(c+38547,"programBufferMem_25", false,-1, 7,0);
    tracep->declBus(c+38548,"programBufferMem_26", false,-1, 7,0);
    tracep->declBus(c+38549,"programBufferMem_27", false,-1, 7,0);
    tracep->declBus(c+38550,"programBufferMem_28", false,-1, 7,0);
    tracep->declBus(c+38551,"programBufferMem_29", false,-1, 7,0);
    tracep->declBus(c+38552,"programBufferMem_30", false,-1, 7,0);
    tracep->declBus(c+38553,"programBufferMem_31", false,-1, 7,0);
    tracep->declBus(c+38554,"programBufferMem_32", false,-1, 7,0);
    tracep->declBus(c+38555,"programBufferMem_33", false,-1, 7,0);
    tracep->declBus(c+38556,"programBufferMem_34", false,-1, 7,0);
    tracep->declBus(c+38557,"programBufferMem_35", false,-1, 7,0);
    tracep->declBus(c+38558,"programBufferMem_36", false,-1, 7,0);
    tracep->declBus(c+38559,"programBufferMem_37", false,-1, 7,0);
    tracep->declBus(c+38560,"programBufferMem_38", false,-1, 7,0);
    tracep->declBus(c+38561,"programBufferMem_39", false,-1, 7,0);
    tracep->declBus(c+38562,"programBufferMem_40", false,-1, 7,0);
    tracep->declBus(c+38563,"programBufferMem_41", false,-1, 7,0);
    tracep->declBus(c+38564,"programBufferMem_42", false,-1, 7,0);
    tracep->declBus(c+38565,"programBufferMem_43", false,-1, 7,0);
    tracep->declBus(c+38566,"programBufferMem_44", false,-1, 7,0);
    tracep->declBus(c+38567,"programBufferMem_45", false,-1, 7,0);
    tracep->declBus(c+38568,"programBufferMem_46", false,-1, 7,0);
    tracep->declBus(c+38569,"programBufferMem_47", false,-1, 7,0);
    tracep->declBus(c+38570,"programBufferMem_48", false,-1, 7,0);
    tracep->declBus(c+38571,"programBufferMem_49", false,-1, 7,0);
    tracep->declBus(c+38572,"programBufferMem_50", false,-1, 7,0);
    tracep->declBus(c+38573,"programBufferMem_51", false,-1, 7,0);
    tracep->declBus(c+38574,"programBufferMem_52", false,-1, 7,0);
    tracep->declBus(c+38575,"programBufferMem_53", false,-1, 7,0);
    tracep->declBus(c+38576,"programBufferMem_54", false,-1, 7,0);
    tracep->declBus(c+38577,"programBufferMem_55", false,-1, 7,0);
    tracep->declBus(c+38578,"programBufferMem_56", false,-1, 7,0);
    tracep->declBus(c+38579,"programBufferMem_57", false,-1, 7,0);
    tracep->declBus(c+38580,"programBufferMem_58", false,-1, 7,0);
    tracep->declBus(c+38581,"programBufferMem_59", false,-1, 7,0);
    tracep->declBus(c+38582,"programBufferMem_60", false,-1, 7,0);
    tracep->declBus(c+38583,"programBufferMem_61", false,-1, 7,0);
    tracep->declBus(c+38584,"programBufferMem_62", false,-1, 7,0);
    tracep->declBus(c+38585,"programBufferMem_63", false,-1, 7,0);
    tracep->declBit(c+38586,"out_front_bits_read", false,-1);
    tracep->declBit(c+38962,"dmiAbstractDataWrEnMaybe_4", false,-1);
    tracep->declBit(c+38963,"dmiAbstractDataWrEnMaybe_5", false,-1);
    tracep->declBit(c+38964,"dmiAbstractDataWrEnMaybe_6", false,-1);
    tracep->declBit(c+38965,"dmiAbstractDataWrEnMaybe_7", false,-1);
    tracep->declBit(c+38966,"dmiProgramBufferWrEnMaybe_56", false,-1);
    tracep->declBit(c+38967,"dmiProgramBufferWrEnMaybe_57", false,-1);
    tracep->declBit(c+38968,"dmiProgramBufferWrEnMaybe_58", false,-1);
    tracep->declBit(c+38969,"dmiProgramBufferWrEnMaybe_59", false,-1);
    tracep->declBit(c+38970,"dmiProgramBufferWrEnMaybe_36", false,-1);
    tracep->declBit(c+38971,"dmiProgramBufferWrEnMaybe_37", false,-1);
    tracep->declBit(c+38972,"dmiProgramBufferWrEnMaybe_38", false,-1);
    tracep->declBit(c+38973,"dmiProgramBufferWrEnMaybe_39", false,-1);
    tracep->declBit(c+38974,"dmiProgramBufferWrEnMaybe_28", false,-1);
    tracep->declBit(c+38975,"dmiProgramBufferWrEnMaybe_29", false,-1);
    tracep->declBit(c+38976,"dmiProgramBufferWrEnMaybe_30", false,-1);
    tracep->declBit(c+38977,"dmiProgramBufferWrEnMaybe_31", false,-1);
    tracep->declBit(c+38978,"dmiProgramBufferWrEnMaybe_12", false,-1);
    tracep->declBit(c+38979,"dmiProgramBufferWrEnMaybe_13", false,-1);
    tracep->declBit(c+38980,"dmiProgramBufferWrEnMaybe_14", false,-1);
    tracep->declBit(c+38981,"dmiProgramBufferWrEnMaybe_15", false,-1);
    tracep->declBit(c+38982,"dmiProgramBufferWrEnMaybe_44", false,-1);
    tracep->declBit(c+38983,"dmiProgramBufferWrEnMaybe_45", false,-1);
    tracep->declBit(c+38984,"dmiProgramBufferWrEnMaybe_46", false,-1);
    tracep->declBit(c+38985,"dmiProgramBufferWrEnMaybe_47", false,-1);
    tracep->declBit(c+38986,"dmiAbstractDataWrEnMaybe_0", false,-1);
    tracep->declBit(c+38987,"dmiAbstractDataWrEnMaybe_1", false,-1);
    tracep->declBit(c+38988,"dmiAbstractDataWrEnMaybe_2", false,-1);
    tracep->declBit(c+38989,"dmiAbstractDataWrEnMaybe_3", false,-1);
    tracep->declBit(c+38990,"dmiProgramBufferWrEnMaybe_60", false,-1);
    tracep->declBit(c+38991,"dmiProgramBufferWrEnMaybe_61", false,-1);
    tracep->declBit(c+38992,"dmiProgramBufferWrEnMaybe_62", false,-1);
    tracep->declBit(c+38993,"dmiProgramBufferWrEnMaybe_63", false,-1);
    tracep->declBit(c+38994,"dmiProgramBufferWrEnMaybe_40", false,-1);
    tracep->declBit(c+38995,"dmiProgramBufferWrEnMaybe_41", false,-1);
    tracep->declBit(c+38996,"dmiProgramBufferWrEnMaybe_42", false,-1);
    tracep->declBit(c+38997,"dmiProgramBufferWrEnMaybe_43", false,-1);
    tracep->declBit(c+38998,"autoexecdataWrEnMaybe", false,-1);
    tracep->declBit(c+38999,"autoexecprogbufWrEnMaybe", false,-1);
    tracep->declBit(c+39000,"dmiProgramBufferWrEnMaybe_20", false,-1);
    tracep->declBit(c+39001,"dmiProgramBufferWrEnMaybe_21", false,-1);
    tracep->declBit(c+39002,"dmiProgramBufferWrEnMaybe_22", false,-1);
    tracep->declBit(c+39003,"dmiProgramBufferWrEnMaybe_23", false,-1);
    tracep->declBit(c+39004,"dmiProgramBufferWrEnMaybe_24", false,-1);
    tracep->declBit(c+39005,"dmiProgramBufferWrEnMaybe_25", false,-1);
    tracep->declBit(c+39006,"dmiProgramBufferWrEnMaybe_26", false,-1);
    tracep->declBit(c+39007,"dmiProgramBufferWrEnMaybe_27", false,-1);
    tracep->declBit(c+39008,"dmiProgramBufferWrEnMaybe_4", false,-1);
    tracep->declBit(c+39009,"dmiProgramBufferWrEnMaybe_5", false,-1);
    tracep->declBit(c+39010,"dmiProgramBufferWrEnMaybe_6", false,-1);
    tracep->declBit(c+39011,"dmiProgramBufferWrEnMaybe_7", false,-1);
    tracep->declBit(c+39012,"dmiProgramBufferWrEnMaybe_52", false,-1);
    tracep->declBit(c+39013,"dmiProgramBufferWrEnMaybe_53", false,-1);
    tracep->declBit(c+39014,"dmiProgramBufferWrEnMaybe_54", false,-1);
    tracep->declBit(c+39015,"dmiProgramBufferWrEnMaybe_55", false,-1);
    tracep->declBit(c+39016,"dmiProgramBufferWrEnMaybe_0", false,-1);
    tracep->declBit(c+39017,"dmiProgramBufferWrEnMaybe_1", false,-1);
    tracep->declBit(c+39018,"dmiProgramBufferWrEnMaybe_2", false,-1);
    tracep->declBit(c+39019,"dmiProgramBufferWrEnMaybe_3", false,-1);
    tracep->declBit(c+39020,"dmiProgramBufferWrEnMaybe_8", false,-1);
    tracep->declBit(c+39021,"dmiProgramBufferWrEnMaybe_9", false,-1);
    tracep->declBit(c+39022,"dmiProgramBufferWrEnMaybe_10", false,-1);
    tracep->declBit(c+39023,"dmiProgramBufferWrEnMaybe_11", false,-1);
    tracep->declBit(c+39024,"ABSTRACTCSWrEnMaybe", false,-1);
    tracep->declBit(c+39025,"dmiProgramBufferWrEnMaybe_48", false,-1);
    tracep->declBit(c+39026,"dmiProgramBufferWrEnMaybe_49", false,-1);
    tracep->declBit(c+39027,"dmiProgramBufferWrEnMaybe_50", false,-1);
    tracep->declBit(c+39028,"dmiProgramBufferWrEnMaybe_51", false,-1);
    tracep->declBit(c+39029,"dmiProgramBufferWrEnMaybe_32", false,-1);
    tracep->declBit(c+39030,"dmiProgramBufferWrEnMaybe_33", false,-1);
    tracep->declBit(c+39031,"dmiProgramBufferWrEnMaybe_34", false,-1);
    tracep->declBit(c+39032,"dmiProgramBufferWrEnMaybe_35", false,-1);
    tracep->declBit(c+39033,"COMMANDWrEnMaybe", false,-1);
    tracep->declBit(c+39034,"dmiProgramBufferWrEnMaybe_16", false,-1);
    tracep->declBit(c+39035,"dmiProgramBufferWrEnMaybe_17", false,-1);
    tracep->declBit(c+39036,"dmiProgramBufferWrEnMaybe_18", false,-1);
    tracep->declBit(c+39037,"dmiProgramBufferWrEnMaybe_19", false,-1);
    tracep->declBus(c+38587,"out_oindex", false,-1, 4,0);
    tracep->declBit(c+38588,"out_backSel_4", false,-1);
    tracep->declBit(c+38589,"out_backSel_5", false,-1);
    tracep->declBit(c+38590,"out_backSel_16", false,-1);
    tracep->declBit(c+38591,"out_backSel_17", false,-1);
    tracep->declBit(c+38592,"out_backSel_18", false,-1);
    tracep->declBit(c+38593,"out_backSel_19", false,-1);
    tracep->declBit(c+38594,"out_backSel_20", false,-1);
    tracep->declBit(c+38595,"out_backSel_21", false,-1);
    tracep->declBit(c+38596,"out_backSel_22", false,-1);
    tracep->declBit(c+38597,"out_backSel_23", false,-1);
    tracep->declBit(c+38598,"out_backSel_24", false,-1);
    tracep->declBit(c+38599,"out_backSel_25", false,-1);
    tracep->declBit(c+38600,"out_backSel_26", false,-1);
    tracep->declBit(c+38601,"out_backSel_27", false,-1);
    tracep->declBit(c+38602,"out_backSel_28", false,-1);
    tracep->declBit(c+38603,"out_backSel_29", false,-1);
    tracep->declBit(c+38604,"out_backSel_30", false,-1);
    tracep->declBus(c+38502,"bundleIn_0_d_bits_opcode", false,-1, 2,0);
    tracep->declBit(c+38605,"goReg", false,-1);
    tracep->declBus(c+38606,"abstractGeneratedMem_0", false,-1, 31,0);
    tracep->declBus(c+38607,"abstractGeneratedMem_1", false,-1, 31,0);
    tracep->declBit(c+40151,"out_front_1_bits_read", false,-1);
    tracep->declBit(c+40152,"hartResumingWrEn", false,-1);
    tracep->declBit(c+40153,"hartExceptionWrEn", false,-1);
    tracep->declBit(c+40154,"hartHaltedWrEn", false,-1);
    tracep->declBit(c+40155,"hartGoingWrEn", false,-1);
    tracep->declBit(c+40156,"out_woready_1_922", false,-1);
    tracep->declBit(c+40157,"out_woready_1_510", false,-1);
    tracep->declBit(c+40158,"out_woready_1_191", false,-1);
    tracep->declBit(c+40159,"out_woready_1_1074", false,-1);
    tracep->declBit(c+40160,"out_woready_1_722", false,-1);
    tracep->declBit(c+40161,"out_woready_1_442", false,-1);
    tracep->declBit(c+40162,"out_woready_1_111", false,-1);
    tracep->declBit(c+40163,"out_woready_1_1146", false,-1);
    tracep->declBit(c+40164,"out_woready_1_818", false,-1);
    tracep->declBus(c+39499,"bundleIn_0_1_d_bits_opcode", false,-1, 2,0);
    tracep->declBus(c+38608,"ctrlStateReg", false,-1, 1,0);
    tracep->declBit(c+38609,"commandRegIsAccessRegister", false,-1);
    tracep->declBit(c+40244,"commandRegBadHaltResume", false,-1);
    tracep->declBit(c+40245,"goAbstract", false,-1);
    tracep->declBit(c+39038,"dmiAbstractDataAccessVec_0", false,-1);
    tracep->declBit(c+39039,"dmiAbstractDataAccessVec_4", false,-1);
    tracep->declBit(c+39040,"dmiProgramBufferAccessVec_0", false,-1);
    tracep->declBit(c+39041,"dmiProgramBufferAccessVec_4", false,-1);
    tracep->declBit(c+39042,"dmiProgramBufferAccessVec_8", false,-1);
    tracep->declBit(c+39043,"dmiProgramBufferAccessVec_12", false,-1);
    tracep->declBit(c+39044,"dmiProgramBufferAccessVec_16", false,-1);
    tracep->declBit(c+39045,"dmiProgramBufferAccessVec_20", false,-1);
    tracep->declBit(c+39046,"dmiProgramBufferAccessVec_24", false,-1);
    tracep->declBit(c+39047,"dmiProgramBufferAccessVec_28", false,-1);
    tracep->declBit(c+39048,"dmiProgramBufferAccessVec_32", false,-1);
    tracep->declBit(c+39049,"dmiProgramBufferAccessVec_36", false,-1);
    tracep->declBit(c+39050,"dmiProgramBufferAccessVec_40", false,-1);
    tracep->declBit(c+39051,"dmiProgramBufferAccessVec_44", false,-1);
    tracep->declBit(c+39052,"dmiProgramBufferAccessVec_48", false,-1);
    tracep->declBit(c+39053,"dmiProgramBufferAccessVec_52", false,-1);
    tracep->declBit(c+39054,"dmiProgramBufferAccessVec_56", false,-1);
    tracep->declBit(c+39055,"dmiProgramBufferAccessVec_60", false,-1);
    tracep->declBit(c+39056,"autoexec", false,-1);
    tracep->declBit(c+39057,"COMMANDWrEn", false,-1);
    tracep->pushNamePrefix("hartIsInResetSync_0_debug_hartReset_0 ");
    tracep->declBit(c+40365,"clock", false,-1);
    tracep->declBit(c+40363,"reset", false,-1);
    tracep->declBit(c+40239,"io_d", false,-1);
    tracep->declBit(c+39058,"io_q", false,-1);
    tracep->pushNamePrefix("output_chain ");
    tracep->declBit(c+40365,"clock", false,-1);
    tracep->declBit(c+40363,"reset", false,-1);
    tracep->declBit(c+40239,"io_d", false,-1);
    tracep->declBit(c+39058,"io_q", false,-1);
    tracep->declBit(c+39058,"sync_0", false,-1);
    tracep->declBit(c+39059,"sync_1", false,-1);
    tracep->declBit(c+39060,"sync_2", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("monitor ");
    tracep->declBit(c+40365,"clock", false,-1);
    tracep->declBit(c+40363,"reset", false,-1);
    tracep->declBit(c+38921,"io_in_a_ready", false,-1);
    tracep->declBit(c+38920,"io_in_a_valid", false,-1);
    tracep->declBus(c+38490,"io_in_a_bits_opcode", false,-1, 2,0);
    tracep->declBus(c+38491,"io_in_a_bits_param", false,-1, 2,0);
    tracep->declBus(c+38492,"io_in_a_bits_size", false,-1, 1,0);
    tracep->declBit(c+38493,"io_in_a_bits_source", false,-1);
    tracep->declBus(c+38494,"io_in_a_bits_address", false,-1, 8,0);
    tracep->declBus(c+38495,"io_in_a_bits_mask", false,-1, 3,0);
    tracep->declBit(c+38497,"io_in_a_bits_corrupt", false,-1);
    tracep->declBit(c+38921,"io_in_d_ready", false,-1);
    tracep->declBit(c+38920,"io_in_d_valid", false,-1);
    tracep->declBus(c+38502,"io_in_d_bits_opcode", false,-1, 2,0);
    tracep->declBus(c+38492,"io_in_d_bits_size", false,-1, 1,0);
    tracep->declBit(c+38493,"io_in_d_bits_source", false,-1);
    tracep->declBit(c+39061,"a_first_done", false,-1);
    tracep->declBit(c+38610,"inflight", false,-1);
    tracep->declBus(c+38611,"inflight_opcodes", false,-1, 3,0);
    tracep->declBus(c+38612,"inflight_sizes", false,-1, 3,0);
    tracep->declBit(c+40413,"d_release_ack", false,-1);
    tracep->declBus(c+38613,"watchdog", false,-1, 31,0);
    tracep->declBit(c+39062,"d_first_done", false,-1);
    tracep->declBit(c+38614,"mask_acc", false,-1);
    tracep->declBit(c+38615,"mask_acc_1", false,-1);
    tracep->declBus(c+38616,"mask", false,-1, 3,0);
    tracep->declBit(c+38920,"same_cycle_resp", false,-1);
    tracep->pushNamePrefix("plusarg_reader ");
    tracep->declArray(c+40414,"FORMAT", false,-1, 151,0);
    tracep->declBus(c+40419,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+40420,"DEFAULT", false,-1, 31,0);
    tracep->declBus(c+132,"out", false,-1, 31,0);
    tracep->declBus(c+132,"myplus", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("plusarg_reader_1 ");
    tracep->declArray(c+40414,"FORMAT", false,-1, 151,0);
    tracep->declBus(c+40419,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+40420,"DEFAULT", false,-1, 31,0);
    tracep->declBus(c+133,"out", false,-1, 31,0);
    tracep->declBus(c+133,"myplus", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("monitor_1 ");
    tracep->declBit(c+40365,"clock", false,-1);
    tracep->declBit(c+40363,"reset", false,-1);
    tracep->declBit(c+39497,"io_in_a_ready", false,-1);
    tracep->declBit(c+39498,"io_in_a_valid", false,-1);
    tracep->declBus(c+39502,"io_in_a_bits_opcode", false,-1, 2,0);
    tracep->declBus(c+39503,"io_in_a_bits_param", false,-1, 2,0);
    tracep->declBus(c+39500,"io_in_a_bits_size", false,-1, 1,0);
    tracep->declBus(c+39501,"io_in_a_bits_source", false,-1, 10,0);
    tracep->declBus(c+39504,"io_in_a_bits_address", false,-1, 11,0);
    tracep->declBus(c+39505,"io_in_a_bits_mask", false,-1, 7,0);
    tracep->declBit(c+39506,"io_in_a_bits_corrupt", false,-1);
    tracep->declBit(c+39497,"io_in_d_ready", false,-1);
    tracep->declBit(c+39498,"io_in_d_valid", false,-1);
    tracep->declBus(c+39499,"io_in_d_bits_opcode", false,-1, 2,0);
    tracep->declBus(c+39500,"io_in_d_bits_size", false,-1, 1,0);
    tracep->declBus(c+39501,"io_in_d_bits_source", false,-1, 10,0);
    tracep->declBit(c+40165,"a_first_done", false,-1);
    tracep->declArray(c+38617,"inflight", false,-1, 1039,0);
    tracep->declArray(c+38650,"inflight_opcodes", false,-1, 4159,0);
    tracep->declArray(c+38780,"inflight_sizes", false,-1, 4159,0);
    tracep->declBit(c+40413,"d_release_ack", false,-1);
    tracep->declBus(c+38910,"watchdog", false,-1, 31,0);
    tracep->declBit(c+40166,"d_first_done", false,-1);
    tracep->declBit(c+40167,"mask_size", false,-1);
    tracep->declBit(c+40168,"mask_acc", false,-1);
    tracep->declBit(c+40169,"mask_acc_1", false,-1);
    tracep->declBit(c+40170,"mask_size_1", false,-1);
    tracep->declBit(c+40171,"mask_eq_2", false,-1);
    tracep->declBit(c+40172,"mask_acc_2", false,-1);
    tracep->declBit(c+40173,"mask_eq_3", false,-1);
    tracep->declBit(c+40174,"mask_acc_3", false,-1);
    tracep->declBit(c+40175,"mask_eq_4", false,-1);
    tracep->declBit(c+40176,"mask_acc_4", false,-1);
    tracep->declBit(c+40177,"mask_eq_5", false,-1);
    tracep->declBit(c+40178,"mask_acc_5", false,-1);
    tracep->declBus(c+40179,"mask", false,-1, 7,0);
    tracep->declBit(c+39498,"same_cycle_resp", false,-1);
    tracep->pushNamePrefix("plusarg_reader ");
    tracep->declArray(c+40414,"FORMAT", false,-1, 151,0);
    tracep->declBus(c+40419,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+40420,"DEFAULT", false,-1, 31,0);
    tracep->declBus(c+134,"out", false,-1, 31,0);
    tracep->declBus(c+134,"myplus", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("plusarg_reader_1 ");
    tracep->declArray(c+40414,"FORMAT", false,-1, 151,0);
    tracep->declBus(c+40419,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+40420,"DEFAULT", false,-1, 31,0);
    tracep->declBus(c+135,"out", false,-1, 31,0);
    tracep->declBus(c+135,"myplus", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("dmactive_synced_dmInner_io_innerCtrl_sink ");
    tracep->declBit(c+40365,"clock", false,-1);
    tracep->declBit(c+40363,"reset", false,-1);
    tracep->declBit(c+39189,"io_async_mem_0_resumereq", false,-1);
    tracep->declBus(c+39190,"io_async_mem_0_hartsel", false,-1, 9,0);
    tracep->declBit(c+39191,"io_async_mem_0_ackhavereset", false,-1);
    tracep->declBit(c+39192,"io_async_mem_0_hasel", false,-1);
    tracep->declBit(c+39193,"io_async_mem_0_hamask_0", false,-1);
    tracep->declBit(c+39194,"io_async_mem_0_hrmask_0", false,-1);
    tracep->declBit(c+39253,"io_async_widx", false,-1);
    tracep->declBit(c+40288,"io_async_safe_widx_valid", false,-1);
    tracep->declBit(c+40395,"io_async_safe_source_reset_n", false,-1);
    tracep->declBit(c+38923,"io_deq_valid", false,-1);
    tracep->declBit(c+38498,"io_deq_bits_resumereq", false,-1);
    tracep->declBus(c+38499,"io_deq_bits_hartsel", false,-1, 9,0);
    tracep->declBit(c+38500,"io_deq_bits_ackhavereset", false,-1);
    tracep->declBit(c+38501,"io_deq_bits_hrmask_0", false,-1);
    tracep->declBit(c+38918,"io_async_ridx", false,-1);
    tracep->declBit(c+40248,"io_async_safe_ridx_valid", false,-1);
    tracep->declBit(c+40396,"io_async_safe_sink_reset_n", false,-1);
    tracep->declBit(c+39063,"ridx_ridx_bin", false,-1);
    tracep->declBit(c+39064,"ridx_incremented", false,-1);
    tracep->declBit(c+39065,"valid", false,-1);
    tracep->declBit(c+39066,"valid_reg", false,-1);
    tracep->declBit(c+38918,"ridx_gray", false,-1);
    tracep->pushNamePrefix("io_deq_bits_deq_bits_reg ");
    tracep->declBit(c+40365,"clock", false,-1);
    tracep->declBus(c+39195,"io_d", false,-1, 14,0);
    tracep->declBit(c+39065,"io_en", false,-1);
    tracep->declBus(c+38911,"io_q", false,-1, 14,0);
    tracep->declBus(c+38911,"cdc_reg", false,-1, 14,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sink_valid_0 ");
    tracep->declBit(c+40409,"io_in", false,-1);
    tracep->declBit(c+40365,"clock", false,-1);
    tracep->declBit(c+40398,"reset", false,-1);
    tracep->declBit(c+40249,"io_out", false,-1);
    tracep->pushNamePrefix("io_out_source_valid_0 ");
    tracep->declBit(c+40365,"clock", false,-1);
    tracep->declBit(c+40398,"reset", false,-1);
    tracep->declBit(c+40409,"io_d", false,-1);
    tracep->declBit(c+40249,"io_q", false,-1);
    tracep->pushNamePrefix("output_chain ");
    tracep->declBit(c+40365,"clock", false,-1);
    tracep->declBit(c+40398,"reset", false,-1);
    tracep->declBit(c+40409,"io_d", false,-1);
    tracep->declBit(c+40249,"io_q", false,-1);
    tracep->declBit(c+40249,"sync_0", false,-1);
    tracep->declBit(c+40250,"sync_1", false,-1);
    tracep->declBit(c+40251,"sync_2", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("sink_valid_1 ");
    tracep->declBit(c+40249,"io_in", false,-1);
    tracep->declBit(c+40365,"clock", false,-1);
    tracep->declBit(c+40398,"reset", false,-1);
    tracep->declBit(c+40248,"io_out", false,-1);
    tracep->pushNamePrefix("io_out_source_valid_0 ");
    tracep->declBit(c+40365,"clock", false,-1);
    tracep->declBit(c+40398,"reset", false,-1);
    tracep->declBit(c+40249,"io_d", false,-1);
    tracep->declBit(c+40248,"io_q", false,-1);
    tracep->pushNamePrefix("output_chain ");
    tracep->declBit(c+40365,"clock", false,-1);
    tracep->declBit(c+40398,"reset", false,-1);
    tracep->declBit(c+40249,"io_d", false,-1);
    tracep->declBit(c+40248,"io_q", false,-1);
    tracep->declBit(c+40248,"sync_0", false,-1);
    tracep->declBit(c+40252,"sync_1", false,-1);
    tracep->declBit(c+40253,"sync_2", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("source_extend ");
    tracep->declBit(c+40288,"io_in", false,-1);
    tracep->declBit(c+40365,"clock", false,-1);
    tracep->declBit(c+40398,"reset", false,-1);
    tracep->declBit(c+40254,"io_out", false,-1);
    tracep->pushNamePrefix("io_out_source_valid_0 ");
    tracep->declBit(c+40365,"clock", false,-1);
    tracep->declBit(c+40398,"reset", false,-1);
    tracep->declBit(c+40288,"io_d", false,-1);
    tracep->declBit(c+40254,"io_q", false,-1);
    tracep->pushNamePrefix("output_chain ");
    tracep->declBit(c+40365,"clock", false,-1);
    tracep->declBit(c+40398,"reset", false,-1);
    tracep->declBit(c+40288,"io_d", false,-1);
    tracep->declBit(c+40254,"io_q", false,-1);
    tracep->declBit(c+40254,"sync_0", false,-1);
    tracep->declBit(c+40255,"sync_1", false,-1);
    tracep->declBit(c+40256,"sync_2", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("source_valid ");
    tracep->declBit(c+40254,"io_in", false,-1);
    tracep->declBit(c+40365,"clock", false,-1);
    tracep->declBit(c+40363,"reset", false,-1);
    tracep->declBit(c+39067,"io_out", false,-1);
    tracep->pushNamePrefix("io_out_source_valid_0 ");
    tracep->declBit(c+40365,"clock", false,-1);
    tracep->declBit(c+40363,"reset", false,-1);
    tracep->declBit(c+40254,"io_d", false,-1);
    tracep->declBit(c+39067,"io_q", false,-1);
    tracep->pushNamePrefix("output_chain ");
    tracep->declBit(c+40365,"clock", false,-1);
    tracep->declBit(c+40363,"reset", false,-1);
    tracep->declBit(c+40254,"io_d", false,-1);
    tracep->declBit(c+39067,"io_q", false,-1);
    tracep->declBit(c+39067,"sync_0", false,-1);
    tracep->declBit(c+39068,"sync_1", false,-1);
    tracep->declBit(c+39069,"sync_2", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("widx_widx_gray ");
    tracep->declBit(c+40365,"clock", false,-1);
    tracep->declBit(c+40363,"reset", false,-1);
    tracep->declBit(c+39253,"io_d", false,-1);
    tracep->declBit(c+39070,"io_q", false,-1);
    tracep->pushNamePrefix("output_chain ");
    tracep->declBit(c+40365,"clock", false,-1);
    tracep->declBit(c+40363,"reset", false,-1);
    tracep->declBit(c+39253,"io_d", false,-1);
    tracep->declBit(c+39070,"io_q", false,-1);
    tracep->declBit(c+39070,"sync_0", false,-1);
    tracep->declBit(c+39071,"sync_1", false,-1);
    tracep->declBit(c+39072,"sync_2", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("dmactive_synced_dmactive_synced_dmactiveSync ");
    tracep->declBit(c+40365,"clock", false,-1);
    tracep->declBit(c+40363,"reset", false,-1);
    tracep->declBit(c+39244,"io_d", false,-1);
    tracep->declBit(c+38922,"io_q", false,-1);
    tracep->pushNamePrefix("output_chain ");
    tracep->declBit(c+40365,"clock", false,-1);
    tracep->declBit(c+40363,"reset", false,-1);
    tracep->declBit(c+39244,"io_d", false,-1);
    tracep->declBit(c+38922,"io_q", false,-1);
    tracep->declBit(c+38922,"sync_0", false,-1);
    tracep->declBit(c+39073,"sync_1", false,-1);
    tracep->declBit(c+39074,"sync_2", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("dmiXing ");
    tracep->declBit(c+40365,"clock", false,-1);
    tracep->declBit(c+40363,"reset", false,-1);
    tracep->declBus(c+39181,"auto_in_a_mem_0_opcode", false,-1, 2,0);
    tracep->declBus(c+39182,"auto_in_a_mem_0_param", false,-1, 2,0);
    tracep->declBus(c+39183,"auto_in_a_mem_0_size", false,-1, 1,0);
    tracep->declBit(c+39184,"auto_in_a_mem_0_source", false,-1);
    tracep->declBus(c+39185,"auto_in_a_mem_0_address", false,-1, 8,0);
    tracep->declBus(c+39186,"auto_in_a_mem_0_mask", false,-1, 3,0);
    tracep->declBus(c+39187,"auto_in_a_mem_0_data", false,-1, 31,0);
    tracep->declBit(c+39188,"auto_in_a_mem_0_corrupt", false,-1);
    tracep->declBit(c+39251,"auto_in_a_widx", false,-1);
    tracep->declBit(c+40286,"auto_in_a_safe_widx_valid", false,-1);
    tracep->declBit(c+40395,"auto_in_a_safe_source_reset_n", false,-1);
    tracep->declBit(c+39252,"auto_in_d_ridx", false,-1);
    tracep->declBit(c+40287,"auto_in_d_safe_ridx_valid", false,-1);
    tracep->declBit(c+40395,"auto_in_d_safe_sink_reset_n", false,-1);
    tracep->declBit(c+38921,"auto_out_a_ready", false,-1);
    tracep->declBit(c+38920,"auto_out_d_valid", false,-1);
    tracep->declBus(c+38502,"auto_out_d_bits_opcode", false,-1, 2,0);
    tracep->declBus(c+38492,"auto_out_d_bits_size", false,-1, 1,0);
    tracep->declBit(c+38493,"auto_out_d_bits_source", false,-1);
    tracep->declBus(c+40397,"auto_out_d_bits_data", false,-1, 31,0);
    tracep->declBit(c+38916,"auto_in_a_ridx", false,-1);
    tracep->declBit(c+40246,"auto_in_a_safe_ridx_valid", false,-1);
    tracep->declBit(c+40396,"auto_in_a_safe_sink_reset_n", false,-1);
    tracep->declBus(c+38482,"auto_in_d_mem_0_opcode", false,-1, 2,0);
    tracep->declBus(c+38483,"auto_in_d_mem_0_param", false,-1, 1,0);
    tracep->declBus(c+38484,"auto_in_d_mem_0_size", false,-1, 1,0);
    tracep->declBit(c+38485,"auto_in_d_mem_0_source", false,-1);
    tracep->declBit(c+38486,"auto_in_d_mem_0_sink", false,-1);
    tracep->declBit(c+38487,"auto_in_d_mem_0_denied", false,-1);
    tracep->declBus(c+38488,"auto_in_d_mem_0_data", false,-1, 31,0);
    tracep->declBit(c+38489,"auto_in_d_mem_0_corrupt", false,-1);
    tracep->declBit(c+38917,"auto_in_d_widx", false,-1);
    tracep->declBit(c+40247,"auto_in_d_safe_widx_valid", false,-1);
    tracep->declBit(c+40396,"auto_in_d_safe_source_reset_n", false,-1);
    tracep->declBit(c+38920,"auto_out_a_valid", false,-1);
    tracep->declBus(c+38490,"auto_out_a_bits_opcode", false,-1, 2,0);
    tracep->declBus(c+38491,"auto_out_a_bits_param", false,-1, 2,0);
    tracep->declBus(c+38492,"auto_out_a_bits_size", false,-1, 1,0);
    tracep->declBit(c+38493,"auto_out_a_bits_source", false,-1);
    tracep->declBus(c+38494,"auto_out_a_bits_address", false,-1, 8,0);
    tracep->declBus(c+38495,"auto_out_a_bits_mask", false,-1, 3,0);
    tracep->declBus(c+38496,"auto_out_a_bits_data", false,-1, 31,0);
    tracep->declBit(c+38497,"auto_out_a_bits_corrupt", false,-1);
    tracep->declBit(c+38921,"auto_out_d_ready", false,-1);
    tracep->pushNamePrefix("bundleIn_0_d_source ");
    tracep->declBit(c+40365,"clock", false,-1);
    tracep->declBit(c+40363,"reset", false,-1);
    tracep->declBit(c+38920,"io_enq_valid", false,-1);
    tracep->declBus(c+38502,"io_enq_bits_opcode", false,-1, 2,0);
    tracep->declBus(c+38492,"io_enq_bits_size", false,-1, 1,0);
    tracep->declBit(c+38493,"io_enq_bits_source", false,-1);
    tracep->declBus(c+40397,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBit(c+39252,"io_async_ridx", false,-1);
    tracep->declBit(c+40287,"io_async_safe_ridx_valid", false,-1);
    tracep->declBit(c+40395,"io_async_safe_sink_reset_n", false,-1);
    tracep->declBit(c+38921,"io_enq_ready", false,-1);
    tracep->declBus(c+38482,"io_async_mem_0_opcode", false,-1, 2,0);
    tracep->declBus(c+38483,"io_async_mem_0_param", false,-1, 1,0);
    tracep->declBus(c+38484,"io_async_mem_0_size", false,-1, 1,0);
    tracep->declBit(c+38485,"io_async_mem_0_source", false,-1);
    tracep->declBit(c+38486,"io_async_mem_0_sink", false,-1);
    tracep->declBit(c+38487,"io_async_mem_0_denied", false,-1);
    tracep->declBus(c+38488,"io_async_mem_0_data", false,-1, 31,0);
    tracep->declBit(c+38489,"io_async_mem_0_corrupt", false,-1);
    tracep->declBit(c+38917,"io_async_widx", false,-1);
    tracep->declBit(c+40247,"io_async_safe_widx_valid", false,-1);
    tracep->declBit(c+40396,"io_async_safe_source_reset_n", false,-1);
    tracep->declBus(c+38482,"mem_0_opcode", false,-1, 2,0);
    tracep->declBus(c+38483,"mem_0_param", false,-1, 1,0);
    tracep->declBus(c+38484,"mem_0_size", false,-1, 1,0);
    tracep->declBit(c+38485,"mem_0_source", false,-1);
    tracep->declBit(c+38486,"mem_0_sink", false,-1);
    tracep->declBit(c+38487,"mem_0_denied", false,-1);
    tracep->declBus(c+38488,"mem_0_data", false,-1, 31,0);
    tracep->declBit(c+38489,"mem_0_corrupt", false,-1);
    tracep->declBit(c+39075,"widx_widx_bin", false,-1);
    tracep->declBit(c+39076,"ready_reg", false,-1);
    tracep->declBit(c+38917,"widx_gray", false,-1);
    tracep->declBit(c+39077,"widx_incremented", false,-1);
    tracep->pushNamePrefix("ridx_ridx_gray ");
    tracep->declBit(c+40365,"clock", false,-1);
    tracep->declBit(c+40363,"reset", false,-1);
    tracep->declBit(c+39252,"io_d", false,-1);
    tracep->declBit(c+39078,"io_q", false,-1);
    tracep->pushNamePrefix("output_chain ");
    tracep->declBit(c+40365,"clock", false,-1);
    tracep->declBit(c+40363,"reset", false,-1);
    tracep->declBit(c+39252,"io_d", false,-1);
    tracep->declBit(c+39078,"io_q", false,-1);
    tracep->declBit(c+39078,"sync_0", false,-1);
    tracep->declBit(c+39079,"sync_1", false,-1);
    tracep->declBit(c+39080,"sync_2", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("sink_extend ");
    tracep->declBit(c+40287,"io_in", false,-1);
    tracep->declBit(c+40365,"clock", false,-1);
    tracep->declBit(c+40398,"reset", false,-1);
    tracep->declBit(c+40257,"io_out", false,-1);
    tracep->pushNamePrefix("io_out_source_valid_0 ");
    tracep->declBit(c+40365,"clock", false,-1);
    tracep->declBit(c+40398,"reset", false,-1);
    tracep->declBit(c+40287,"io_d", false,-1);
    tracep->declBit(c+40257,"io_q", false,-1);
    tracep->pushNamePrefix("output_chain ");
    tracep->declBit(c+40365,"clock", false,-1);
    tracep->declBit(c+40398,"reset", false,-1);
    tracep->declBit(c+40287,"io_d", false,-1);
    tracep->declBit(c+40257,"io_q", false,-1);
    tracep->declBit(c+40257,"sync_0", false,-1);
    tracep->declBit(c+40258,"sync_1", false,-1);
    tracep->declBit(c+40259,"sync_2", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("sink_valid ");
    tracep->declBit(c+40257,"io_in", false,-1);
    tracep->declBit(c+40365,"clock", false,-1);
    tracep->declBit(c+40363,"reset", false,-1);
    tracep->declBit(c+39081,"io_out", false,-1);
    tracep->pushNamePrefix("io_out_source_valid_0 ");
    tracep->declBit(c+40365,"clock", false,-1);
    tracep->declBit(c+40363,"reset", false,-1);
    tracep->declBit(c+40257,"io_d", false,-1);
    tracep->declBit(c+39081,"io_q", false,-1);
    tracep->pushNamePrefix("output_chain ");
    tracep->declBit(c+40365,"clock", false,-1);
    tracep->declBit(c+40363,"reset", false,-1);
    tracep->declBit(c+40257,"io_d", false,-1);
    tracep->declBit(c+39081,"io_q", false,-1);
    tracep->declBit(c+39081,"sync_0", false,-1);
    tracep->declBit(c+39082,"sync_1", false,-1);
    tracep->declBit(c+39083,"sync_2", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("source_valid_0 ");
    tracep->declBit(c+40409,"io_in", false,-1);
    tracep->declBit(c+40365,"clock", false,-1);
    tracep->declBit(c+40398,"reset", false,-1);
    tracep->declBit(c+40260,"io_out", false,-1);
    tracep->pushNamePrefix("io_out_source_valid_0 ");
    tracep->declBit(c+40365,"clock", false,-1);
    tracep->declBit(c+40398,"reset", false,-1);
    tracep->declBit(c+40409,"io_d", false,-1);
    tracep->declBit(c+40260,"io_q", false,-1);
    tracep->pushNamePrefix("output_chain ");
    tracep->declBit(c+40365,"clock", false,-1);
    tracep->declBit(c+40398,"reset", false,-1);
    tracep->declBit(c+40409,"io_d", false,-1);
    tracep->declBit(c+40260,"io_q", false,-1);
    tracep->declBit(c+40260,"sync_0", false,-1);
    tracep->declBit(c+40261,"sync_1", false,-1);
    tracep->declBit(c+40262,"sync_2", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("source_valid_1 ");
    tracep->declBit(c+40260,"io_in", false,-1);
    tracep->declBit(c+40365,"clock", false,-1);
    tracep->declBit(c+40398,"reset", false,-1);
    tracep->declBit(c+40247,"io_out", false,-1);
    tracep->pushNamePrefix("io_out_source_valid_0 ");
    tracep->declBit(c+40365,"clock", false,-1);
    tracep->declBit(c+40398,"reset", false,-1);
    tracep->declBit(c+40260,"io_d", false,-1);
    tracep->declBit(c+40247,"io_q", false,-1);
    tracep->pushNamePrefix("output_chain ");
    tracep->declBit(c+40365,"clock", false,-1);
    tracep->declBit(c+40398,"reset", false,-1);
    tracep->declBit(c+40260,"io_d", false,-1);
    tracep->declBit(c+40247,"io_q", false,-1);
    tracep->declBit(c+40247,"sync_0", false,-1);
    tracep->declBit(c+40263,"sync_1", false,-1);
    tracep->declBit(c+40264,"sync_2", false,-1);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("x1_a_sink ");
    tracep->declBit(c+40365,"clock", false,-1);
    tracep->declBit(c+40363,"reset", false,-1);
    tracep->declBit(c+38921,"io_deq_ready", false,-1);
    tracep->declBus(c+39181,"io_async_mem_0_opcode", false,-1, 2,0);
    tracep->declBus(c+39182,"io_async_mem_0_param", false,-1, 2,0);
    tracep->declBus(c+39183,"io_async_mem_0_size", false,-1, 1,0);
    tracep->declBit(c+39184,"io_async_mem_0_source", false,-1);
    tracep->declBus(c+39185,"io_async_mem_0_address", false,-1, 8,0);
    tracep->declBus(c+39186,"io_async_mem_0_mask", false,-1, 3,0);
    tracep->declBus(c+39187,"io_async_mem_0_data", false,-1, 31,0);
    tracep->declBit(c+39188,"io_async_mem_0_corrupt", false,-1);
    tracep->declBit(c+39251,"io_async_widx", false,-1);
    tracep->declBit(c+40286,"io_async_safe_widx_valid", false,-1);
    tracep->declBit(c+40395,"io_async_safe_source_reset_n", false,-1);
    tracep->declBit(c+38920,"io_deq_valid", false,-1);
    tracep->declBus(c+38490,"io_deq_bits_opcode", false,-1, 2,0);
    tracep->declBus(c+38491,"io_deq_bits_param", false,-1, 2,0);
    tracep->declBus(c+38492,"io_deq_bits_size", false,-1, 1,0);
    tracep->declBit(c+38493,"io_deq_bits_source", false,-1);
    tracep->declBus(c+38494,"io_deq_bits_address", false,-1, 8,0);
    tracep->declBus(c+38495,"io_deq_bits_mask", false,-1, 3,0);
    tracep->declBus(c+38496,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBit(c+38497,"io_deq_bits_corrupt", false,-1);
    tracep->declBit(c+38916,"io_async_ridx", false,-1);
    tracep->declBit(c+40246,"io_async_safe_ridx_valid", false,-1);
    tracep->declBit(c+40396,"io_async_safe_sink_reset_n", false,-1);
    tracep->declBit(c+39084,"ridx_ridx_bin", false,-1);
    tracep->declBit(c+39085,"ridx_incremented", false,-1);
    tracep->declBit(c+39086,"valid", false,-1);
    tracep->declBit(c+39087,"valid_reg", false,-1);
    tracep->declBit(c+38916,"ridx_gray", false,-1);
    tracep->pushNamePrefix("io_deq_bits_deq_bits_reg ");
    tracep->declBit(c+40365,"clock", false,-1);
    tracep->declQuad(c+39196,"io_d", false,-1, 54,0);
    tracep->declBit(c+39086,"io_en", false,-1);
    tracep->declQuad(c+38912,"io_q", false,-1, 54,0);
    tracep->declQuad(c+38912,"cdc_reg", false,-1, 54,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sink_valid_0 ");
    tracep->declBit(c+40409,"io_in", false,-1);
    tracep->declBit(c+40365,"clock", false,-1);
    tracep->declBit(c+40398,"reset", false,-1);
    tracep->declBit(c+40265,"io_out", false,-1);
    tracep->pushNamePrefix("io_out_source_valid_0 ");
    tracep->declBit(c+40365,"clock", false,-1);
    tracep->declBit(c+40398,"reset", false,-1);
    tracep->declBit(c+40409,"io_d", false,-1);
    tracep->declBit(c+40265,"io_q", false,-1);
    tracep->pushNamePrefix("output_chain ");
    tracep->declBit(c+40365,"clock", false,-1);
    tracep->declBit(c+40398,"reset", false,-1);
    tracep->declBit(c+40409,"io_d", false,-1);
    tracep->declBit(c+40265,"io_q", false,-1);
    tracep->declBit(c+40265,"sync_0", false,-1);
    tracep->declBit(c+40266,"sync_1", false,-1);
    tracep->declBit(c+40267,"sync_2", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("sink_valid_1 ");
    tracep->declBit(c+40265,"io_in", false,-1);
    tracep->declBit(c+40365,"clock", false,-1);
    tracep->declBit(c+40398,"reset", false,-1);
    tracep->declBit(c+40246,"io_out", false,-1);
    tracep->pushNamePrefix("io_out_source_valid_0 ");
    tracep->declBit(c+40365,"clock", false,-1);
    tracep->declBit(c+40398,"reset", false,-1);
    tracep->declBit(c+40265,"io_d", false,-1);
    tracep->declBit(c+40246,"io_q", false,-1);
    tracep->pushNamePrefix("output_chain ");
    tracep->declBit(c+40365,"clock", false,-1);
    tracep->declBit(c+40398,"reset", false,-1);
    tracep->declBit(c+40265,"io_d", false,-1);
    tracep->declBit(c+40246,"io_q", false,-1);
    tracep->declBit(c+40246,"sync_0", false,-1);
    tracep->declBit(c+40268,"sync_1", false,-1);
    tracep->declBit(c+40269,"sync_2", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("source_extend ");
    tracep->declBit(c+40286,"io_in", false,-1);
    tracep->declBit(c+40365,"clock", false,-1);
    tracep->declBit(c+40398,"reset", false,-1);
    tracep->declBit(c+40270,"io_out", false,-1);
    tracep->pushNamePrefix("io_out_source_valid_0 ");
    tracep->declBit(c+40365,"clock", false,-1);
    tracep->declBit(c+40398,"reset", false,-1);
    tracep->declBit(c+40286,"io_d", false,-1);
    tracep->declBit(c+40270,"io_q", false,-1);
    tracep->pushNamePrefix("output_chain ");
    tracep->declBit(c+40365,"clock", false,-1);
    tracep->declBit(c+40398,"reset", false,-1);
    tracep->declBit(c+40286,"io_d", false,-1);
    tracep->declBit(c+40270,"io_q", false,-1);
    tracep->declBit(c+40270,"sync_0", false,-1);
    tracep->declBit(c+40271,"sync_1", false,-1);
    tracep->declBit(c+40272,"sync_2", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("source_valid ");
    tracep->declBit(c+40270,"io_in", false,-1);
    tracep->declBit(c+40365,"clock", false,-1);
    tracep->declBit(c+40363,"reset", false,-1);
    tracep->declBit(c+39088,"io_out", false,-1);
    tracep->pushNamePrefix("io_out_source_valid_0 ");
    tracep->declBit(c+40365,"clock", false,-1);
    tracep->declBit(c+40363,"reset", false,-1);
    tracep->declBit(c+40270,"io_d", false,-1);
    tracep->declBit(c+39088,"io_q", false,-1);
    tracep->pushNamePrefix("output_chain ");
    tracep->declBit(c+40365,"clock", false,-1);
    tracep->declBit(c+40363,"reset", false,-1);
    tracep->declBit(c+40270,"io_d", false,-1);
    tracep->declBit(c+39088,"io_q", false,-1);
    tracep->declBit(c+39088,"sync_0", false,-1);
    tracep->declBit(c+39089,"sync_1", false,-1);
    tracep->declBit(c+39090,"sync_2", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("widx_widx_gray ");
    tracep->declBit(c+40365,"clock", false,-1);
    tracep->declBit(c+40363,"reset", false,-1);
    tracep->declBit(c+39251,"io_d", false,-1);
    tracep->declBit(c+39091,"io_q", false,-1);
    tracep->pushNamePrefix("output_chain ");
    tracep->declBit(c+40365,"clock", false,-1);
    tracep->declBit(c+40363,"reset", false,-1);
    tracep->declBit(c+39251,"io_d", false,-1);
    tracep->declBit(c+39091,"io_q", false,-1);
    tracep->declBit(c+39091,"sync_0", false,-1);
    tracep->declBit(c+39092,"sync_1", false,-1);
    tracep->declBit(c+39093,"sync_2", false,-1);
    tracep->popNamePrefix(5);
    tracep->pushNamePrefix("dmOuter ");
    tracep->declBit(c+38916,"auto_asource_out_a_ridx", false,-1);
    tracep->declBit(c+40246,"auto_asource_out_a_safe_ridx_valid", false,-1);
    tracep->declBit(c+40396,"auto_asource_out_a_safe_sink_reset_n", false,-1);
    tracep->declBus(c+38482,"auto_asource_out_d_mem_0_opcode", false,-1, 2,0);
    tracep->declBus(c+38483,"auto_asource_out_d_mem_0_param", false,-1, 1,0);
    tracep->declBus(c+38484,"auto_asource_out_d_mem_0_size", false,-1, 1,0);
    tracep->declBit(c+38485,"auto_asource_out_d_mem_0_source", false,-1);
    tracep->declBit(c+38486,"auto_asource_out_d_mem_0_sink", false,-1);
    tracep->declBit(c+38487,"auto_asource_out_d_mem_0_denied", false,-1);
    tracep->declBus(c+38488,"auto_asource_out_d_mem_0_data", false,-1, 31,0);
    tracep->declBit(c+38489,"auto_asource_out_d_mem_0_corrupt", false,-1);
    tracep->declBit(c+38917,"auto_asource_out_d_widx", false,-1);
    tracep->declBit(c+40247,"auto_asource_out_d_safe_widx_valid", false,-1);
    tracep->declBit(c+40396,"auto_asource_out_d_safe_source_reset_n", false,-1);
    tracep->declBit(c+169,"io_dmi_clock", false,-1);
    tracep->declBit(c+40364,"io_dmi_reset", false,-1);
    tracep->declBit(c+1283,"io_dmi_req_valid", false,-1);
    tracep->declBus(c+1202,"io_dmi_req_bits_addr", false,-1, 6,0);
    tracep->declBus(c+1203,"io_dmi_req_bits_data", false,-1, 31,0);
    tracep->declBus(c+1204,"io_dmi_req_bits_op", false,-1, 1,0);
    tracep->declBit(c+40313,"io_dmi_resp_ready", false,-1);
    tracep->declBit(c+38461,"io_ctrl_dmactiveAck", false,-1);
    tracep->declBit(c+38918,"io_innerCtrl_ridx", false,-1);
    tracep->declBit(c+40248,"io_innerCtrl_safe_ridx_valid", false,-1);
    tracep->declBit(c+40396,"io_innerCtrl_safe_sink_reset_n", false,-1);
    tracep->declBit(c+38919,"io_hgDebugInt_0", false,-1);
    tracep->declBus(c+39181,"auto_asource_out_a_mem_0_opcode", false,-1, 2,0);
    tracep->declBus(c+39182,"auto_asource_out_a_mem_0_param", false,-1, 2,0);
    tracep->declBus(c+39183,"auto_asource_out_a_mem_0_size", false,-1, 1,0);
    tracep->declBit(c+39184,"auto_asource_out_a_mem_0_source", false,-1);
    tracep->declBus(c+39185,"auto_asource_out_a_mem_0_address", false,-1, 8,0);
    tracep->declBus(c+39186,"auto_asource_out_a_mem_0_mask", false,-1, 3,0);
    tracep->declBus(c+39187,"auto_asource_out_a_mem_0_data", false,-1, 31,0);
    tracep->declBit(c+39188,"auto_asource_out_a_mem_0_corrupt", false,-1);
    tracep->declBit(c+39251,"auto_asource_out_a_widx", false,-1);
    tracep->declBit(c+40286,"auto_asource_out_a_safe_widx_valid", false,-1);
    tracep->declBit(c+40395,"auto_asource_out_a_safe_source_reset_n", false,-1);
    tracep->declBit(c+39252,"auto_asource_out_d_ridx", false,-1);
    tracep->declBit(c+40287,"auto_asource_out_d_safe_ridx_valid", false,-1);
    tracep->declBit(c+40395,"auto_asource_out_d_safe_sink_reset_n", false,-1);
    tracep->declBit(c+40390,"auto_intsource_out_sync_0", false,-1);
    tracep->declBit(c+40312,"io_dmi_req_ready", false,-1);
    tracep->declBit(c+39245,"io_dmi_resp_valid", false,-1);
    tracep->declBus(c+40367,"io_dmi_resp_bits_data", false,-1, 31,0);
    tracep->declBus(c+39246,"io_dmi_resp_bits_resp", false,-1, 1,0);
    tracep->declBit(c+39244,"io_ctrl_dmactive", false,-1);
    tracep->declBit(c+39189,"io_innerCtrl_mem_0_resumereq", false,-1);
    tracep->declBus(c+39190,"io_innerCtrl_mem_0_hartsel", false,-1, 9,0);
    tracep->declBit(c+39191,"io_innerCtrl_mem_0_ackhavereset", false,-1);
    tracep->declBit(c+39192,"io_innerCtrl_mem_0_hasel", false,-1);
    tracep->declBit(c+39193,"io_innerCtrl_mem_0_hamask_0", false,-1);
    tracep->declBit(c+39194,"io_innerCtrl_mem_0_hrmask_0", false,-1);
    tracep->declBit(c+39253,"io_innerCtrl_widx", false,-1);
    tracep->declBit(c+40288,"io_innerCtrl_safe_widx_valid", false,-1);
    tracep->declBit(c+40395,"io_innerCtrl_safe_source_reset_n", false,-1);
    tracep->pushNamePrefix("asource ");
    tracep->declBit(c+169,"clock", false,-1);
    tracep->declBit(c+40364,"reset", false,-1);
    tracep->declBit(c+39254,"auto_in_a_valid", false,-1);
    tracep->declBus(c+39198,"auto_in_a_bits_opcode", false,-1, 2,0);
    tracep->declBus(c+39199,"auto_in_a_bits_address", false,-1, 8,0);
    tracep->declBus(c+40283,"auto_in_a_bits_data", false,-1, 31,0);
    tracep->declBit(c+40323,"auto_in_d_ready", false,-1);
    tracep->declBit(c+38916,"auto_out_a_ridx", false,-1);
    tracep->declBit(c+40246,"auto_out_a_safe_ridx_valid", false,-1);
    tracep->declBit(c+40396,"auto_out_a_safe_sink_reset_n", false,-1);
    tracep->declBus(c+38482,"auto_out_d_mem_0_opcode", false,-1, 2,0);
    tracep->declBus(c+38483,"auto_out_d_mem_0_param", false,-1, 1,0);
    tracep->declBus(c+38484,"auto_out_d_mem_0_size", false,-1, 1,0);
    tracep->declBit(c+38485,"auto_out_d_mem_0_source", false,-1);
    tracep->declBit(c+38486,"auto_out_d_mem_0_sink", false,-1);
    tracep->declBit(c+38487,"auto_out_d_mem_0_denied", false,-1);
    tracep->declBus(c+38488,"auto_out_d_mem_0_data", false,-1, 31,0);
    tracep->declBit(c+38489,"auto_out_d_mem_0_corrupt", false,-1);
    tracep->declBit(c+38917,"auto_out_d_widx", false,-1);
    tracep->declBit(c+40247,"auto_out_d_safe_widx_valid", false,-1);
    tracep->declBit(c+40396,"auto_out_d_safe_source_reset_n", false,-1);
    tracep->declBit(c+1289,"auto_in_a_ready", false,-1);
    tracep->declBit(c+1290,"auto_in_d_valid", false,-1);
    tracep->declBus(c+1236,"auto_in_d_bits_opcode", false,-1, 2,0);
    tracep->declBus(c+1237,"auto_in_d_bits_param", false,-1, 1,0);
    tracep->declBus(c+1238,"auto_in_d_bits_size", false,-1, 1,0);
    tracep->declBit(c+1239,"auto_in_d_bits_source", false,-1);
    tracep->declBit(c+1240,"auto_in_d_bits_denied", false,-1);
    tracep->declBus(c+1241,"auto_in_d_bits_data", false,-1, 31,0);
    tracep->declBit(c+1242,"auto_in_d_bits_corrupt", false,-1);
    tracep->declBus(c+39181,"auto_out_a_mem_0_opcode", false,-1, 2,0);
    tracep->declBus(c+39182,"auto_out_a_mem_0_param", false,-1, 2,0);
    tracep->declBus(c+39183,"auto_out_a_mem_0_size", false,-1, 1,0);
    tracep->declBit(c+39184,"auto_out_a_mem_0_source", false,-1);
    tracep->declBus(c+39185,"auto_out_a_mem_0_address", false,-1, 8,0);
    tracep->declBus(c+39186,"auto_out_a_mem_0_mask", false,-1, 3,0);
    tracep->declBus(c+39187,"auto_out_a_mem_0_data", false,-1, 31,0);
    tracep->declBit(c+39188,"auto_out_a_mem_0_corrupt", false,-1);
    tracep->declBit(c+39251,"auto_out_a_widx", false,-1);
    tracep->declBit(c+40286,"auto_out_a_safe_widx_valid", false,-1);
    tracep->declBit(c+40395,"auto_out_a_safe_source_reset_n", false,-1);
    tracep->declBit(c+39252,"auto_out_d_ridx", false,-1);
    tracep->declBit(c+40287,"auto_out_d_safe_ridx_valid", false,-1);
    tracep->declBit(c+40395,"auto_out_d_safe_sink_reset_n", false,-1);
    tracep->pushNamePrefix("bundleIn_0_d_sink ");
    tracep->declBit(c+169,"clock", false,-1);
    tracep->declBit(c+40364,"reset", false,-1);
    tracep->declBit(c+40323,"io_deq_ready", false,-1);
    tracep->declBus(c+38482,"io_async_mem_0_opcode", false,-1, 2,0);
    tracep->declBus(c+38483,"io_async_mem_0_param", false,-1, 1,0);
    tracep->declBus(c+38484,"io_async_mem_0_size", false,-1, 1,0);
    tracep->declBit(c+38485,"io_async_mem_0_source", false,-1);
    tracep->declBit(c+38486,"io_async_mem_0_sink", false,-1);
    tracep->declBit(c+38487,"io_async_mem_0_denied", false,-1);
    tracep->declBus(c+38488,"io_async_mem_0_data", false,-1, 31,0);
    tracep->declBit(c+38489,"io_async_mem_0_corrupt", false,-1);
    tracep->declBit(c+38917,"io_async_widx", false,-1);
    tracep->declBit(c+40247,"io_async_safe_widx_valid", false,-1);
    tracep->declBit(c+40396,"io_async_safe_source_reset_n", false,-1);
    tracep->declBit(c+1290,"io_deq_valid", false,-1);
    tracep->declBus(c+1236,"io_deq_bits_opcode", false,-1, 2,0);
    tracep->declBus(c+1237,"io_deq_bits_param", false,-1, 1,0);
    tracep->declBus(c+1238,"io_deq_bits_size", false,-1, 1,0);
    tracep->declBit(c+1239,"io_deq_bits_source", false,-1);
    tracep->declBit(c+1240,"io_deq_bits_denied", false,-1);
    tracep->declBus(c+1241,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBit(c+1242,"io_deq_bits_corrupt", false,-1);
    tracep->declBit(c+39252,"io_async_ridx", false,-1);
    tracep->declBit(c+40287,"io_async_safe_ridx_valid", false,-1);
    tracep->declBit(c+40395,"io_async_safe_sink_reset_n", false,-1);
    tracep->declBit(c+1291,"ridx_ridx_bin", false,-1);
    tracep->declBit(c+40324,"ridx_incremented", false,-1);
    tracep->declBit(c+40325,"valid", false,-1);
    tracep->declBit(c+1292,"valid_reg", false,-1);
    tracep->declBit(c+39252,"ridx_gray", false,-1);
    tracep->pushNamePrefix("io_deq_bits_deq_bits_reg ");
    tracep->declBit(c+169,"clock", false,-1);
    tracep->declQuad(c+38914,"io_d", false,-1, 42,0);
    tracep->declBit(c+40325,"io_en", false,-1);
    tracep->declQuad(c+1243,"io_q", false,-1, 42,0);
    tracep->declQuad(c+1243,"cdc_reg", false,-1, 42,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sink_valid_0 ");
    tracep->declBit(c+40409,"io_in", false,-1);
    tracep->declBit(c+169,"clock", false,-1);
    tracep->declBit(c+40399,"reset", false,-1);
    tracep->declBit(c+40289,"io_out", false,-1);
    tracep->pushNamePrefix("io_out_source_valid_0 ");
    tracep->declBit(c+169,"clock", false,-1);
    tracep->declBit(c+40399,"reset", false,-1);
    tracep->declBit(c+40409,"io_d", false,-1);
    tracep->declBit(c+40289,"io_q", false,-1);
    tracep->pushNamePrefix("output_chain ");
    tracep->declBit(c+169,"clock", false,-1);
    tracep->declBit(c+40399,"reset", false,-1);
    tracep->declBit(c+40409,"io_d", false,-1);
    tracep->declBit(c+40289,"io_q", false,-1);
    tracep->declBit(c+40289,"sync_0", false,-1);
    tracep->declBit(c+40290,"sync_1", false,-1);
    tracep->declBit(c+40291,"sync_2", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("sink_valid_1 ");
    tracep->declBit(c+40289,"io_in", false,-1);
    tracep->declBit(c+169,"clock", false,-1);
    tracep->declBit(c+40399,"reset", false,-1);
    tracep->declBit(c+40287,"io_out", false,-1);
    tracep->pushNamePrefix("io_out_source_valid_0 ");
    tracep->declBit(c+169,"clock", false,-1);
    tracep->declBit(c+40399,"reset", false,-1);
    tracep->declBit(c+40289,"io_d", false,-1);
    tracep->declBit(c+40287,"io_q", false,-1);
    tracep->pushNamePrefix("output_chain ");
    tracep->declBit(c+169,"clock", false,-1);
    tracep->declBit(c+40399,"reset", false,-1);
    tracep->declBit(c+40289,"io_d", false,-1);
    tracep->declBit(c+40287,"io_q", false,-1);
    tracep->declBit(c+40287,"sync_0", false,-1);
    tracep->declBit(c+40292,"sync_1", false,-1);
    tracep->declBit(c+40293,"sync_2", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("source_extend ");
    tracep->declBit(c+40247,"io_in", false,-1);
    tracep->declBit(c+169,"clock", false,-1);
    tracep->declBit(c+40399,"reset", false,-1);
    tracep->declBit(c+39094,"io_out", false,-1);
    tracep->pushNamePrefix("io_out_source_valid_0 ");
    tracep->declBit(c+169,"clock", false,-1);
    tracep->declBit(c+40399,"reset", false,-1);
    tracep->declBit(c+40247,"io_d", false,-1);
    tracep->declBit(c+39094,"io_q", false,-1);
    tracep->pushNamePrefix("output_chain ");
    tracep->declBit(c+169,"clock", false,-1);
    tracep->declBit(c+40399,"reset", false,-1);
    tracep->declBit(c+40247,"io_d", false,-1);
    tracep->declBit(c+39094,"io_q", false,-1);
    tracep->declBit(c+39094,"sync_0", false,-1);
    tracep->declBit(c+39095,"sync_1", false,-1);
    tracep->declBit(c+39096,"sync_2", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("source_valid ");
    tracep->declBit(c+39094,"io_in", false,-1);
    tracep->declBit(c+169,"clock", false,-1);
    tracep->declBit(c+40364,"reset", false,-1);
    tracep->declBit(c+1293,"io_out", false,-1);
    tracep->pushNamePrefix("io_out_source_valid_0 ");
    tracep->declBit(c+169,"clock", false,-1);
    tracep->declBit(c+40364,"reset", false,-1);
    tracep->declBit(c+39094,"io_d", false,-1);
    tracep->declBit(c+1293,"io_q", false,-1);
    tracep->pushNamePrefix("output_chain ");
    tracep->declBit(c+169,"clock", false,-1);
    tracep->declBit(c+40364,"reset", false,-1);
    tracep->declBit(c+39094,"io_d", false,-1);
    tracep->declBit(c+1293,"io_q", false,-1);
    tracep->declBit(c+1293,"sync_0", false,-1);
    tracep->declBit(c+1294,"sync_1", false,-1);
    tracep->declBit(c+1295,"sync_2", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("widx_widx_gray ");
    tracep->declBit(c+169,"clock", false,-1);
    tracep->declBit(c+40364,"reset", false,-1);
    tracep->declBit(c+38917,"io_d", false,-1);
    tracep->declBit(c+1296,"io_q", false,-1);
    tracep->pushNamePrefix("output_chain ");
    tracep->declBit(c+169,"clock", false,-1);
    tracep->declBit(c+40364,"reset", false,-1);
    tracep->declBit(c+38917,"io_d", false,-1);
    tracep->declBit(c+1296,"io_q", false,-1);
    tracep->declBit(c+1296,"sync_0", false,-1);
    tracep->declBit(c+1297,"sync_1", false,-1);
    tracep->declBit(c+1298,"sync_2", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("monitor ");
    tracep->declBit(c+169,"clock", false,-1);
    tracep->declBit(c+40364,"reset", false,-1);
    tracep->declBit(c+1289,"io_in_a_ready", false,-1);
    tracep->declBit(c+39254,"io_in_a_valid", false,-1);
    tracep->declBus(c+39198,"io_in_a_bits_opcode", false,-1, 2,0);
    tracep->declBus(c+39199,"io_in_a_bits_address", false,-1, 8,0);
    tracep->declBit(c+40323,"io_in_d_ready", false,-1);
    tracep->declBit(c+1290,"io_in_d_valid", false,-1);
    tracep->declBus(c+1236,"io_in_d_bits_opcode", false,-1, 2,0);
    tracep->declBus(c+1237,"io_in_d_bits_param", false,-1, 1,0);
    tracep->declBus(c+1238,"io_in_d_bits_size", false,-1, 1,0);
    tracep->declBit(c+1239,"io_in_d_bits_source", false,-1);
    tracep->declBit(c+1240,"io_in_d_bits_denied", false,-1);
    tracep->declBit(c+1242,"io_in_d_bits_corrupt", false,-1);
    tracep->declBit(c+39255,"a_set", false,-1);
    tracep->declBit(c+1245,"inflight", false,-1);
    tracep->declBus(c+1246,"inflight_opcodes", false,-1, 3,0);
    tracep->declBus(c+1247,"inflight_sizes", false,-1, 3,0);
    tracep->declBit(c+1248,"d_release_ack", false,-1);
    tracep->declBus(c+1249,"watchdog", false,-1, 31,0);
    tracep->declBit(c+40326,"d_first_done", false,-1);
    tracep->declBit(c+39256,"same_cycle_resp", false,-1);
    tracep->pushNamePrefix("plusarg_reader ");
    tracep->declArray(c+40414,"FORMAT", false,-1, 151,0);
    tracep->declBus(c+40419,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+40420,"DEFAULT", false,-1, 31,0);
    tracep->declBus(c+136,"out", false,-1, 31,0);
    tracep->declBus(c+136,"myplus", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("plusarg_reader_1 ");
    tracep->declArray(c+40414,"FORMAT", false,-1, 151,0);
    tracep->declBus(c+40419,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+40420,"DEFAULT", false,-1, 31,0);
    tracep->declBus(c+137,"out", false,-1, 31,0);
    tracep->declBus(c+137,"myplus", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("x1_a_source ");
    tracep->declBit(c+169,"clock", false,-1);
    tracep->declBit(c+40364,"reset", false,-1);
    tracep->declBit(c+39254,"io_enq_valid", false,-1);
    tracep->declBus(c+39198,"io_enq_bits_opcode", false,-1, 2,0);
    tracep->declBus(c+39199,"io_enq_bits_address", false,-1, 8,0);
    tracep->declBus(c+40283,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBit(c+38916,"io_async_ridx", false,-1);
    tracep->declBit(c+40246,"io_async_safe_ridx_valid", false,-1);
    tracep->declBit(c+40396,"io_async_safe_sink_reset_n", false,-1);
    tracep->declBit(c+1289,"io_enq_ready", false,-1);
    tracep->declBus(c+39181,"io_async_mem_0_opcode", false,-1, 2,0);
    tracep->declBus(c+39182,"io_async_mem_0_param", false,-1, 2,0);
    tracep->declBus(c+39183,"io_async_mem_0_size", false,-1, 1,0);
    tracep->declBit(c+39184,"io_async_mem_0_source", false,-1);
    tracep->declBus(c+39185,"io_async_mem_0_address", false,-1, 8,0);
    tracep->declBus(c+39186,"io_async_mem_0_mask", false,-1, 3,0);
    tracep->declBus(c+39187,"io_async_mem_0_data", false,-1, 31,0);
    tracep->declBit(c+39188,"io_async_mem_0_corrupt", false,-1);
    tracep->declBit(c+39251,"io_async_widx", false,-1);
    tracep->declBit(c+40286,"io_async_safe_widx_valid", false,-1);
    tracep->declBit(c+40395,"io_async_safe_source_reset_n", false,-1);
    tracep->declBus(c+39181,"mem_0_opcode", false,-1, 2,0);
    tracep->declBus(c+39182,"mem_0_param", false,-1, 2,0);
    tracep->declBus(c+39183,"mem_0_size", false,-1, 1,0);
    tracep->declBit(c+39184,"mem_0_source", false,-1);
    tracep->declBus(c+39185,"mem_0_address", false,-1, 8,0);
    tracep->declBus(c+39186,"mem_0_mask", false,-1, 3,0);
    tracep->declBus(c+39187,"mem_0_data", false,-1, 31,0);
    tracep->declBit(c+39188,"mem_0_corrupt", false,-1);
    tracep->declBit(c+1299,"widx_widx_bin", false,-1);
    tracep->declBit(c+1300,"ready_reg", false,-1);
    tracep->declBit(c+39251,"widx_gray", false,-1);
    tracep->declBit(c+39257,"widx_incremented", false,-1);
    tracep->pushNamePrefix("ridx_ridx_gray ");
    tracep->declBit(c+169,"clock", false,-1);
    tracep->declBit(c+40364,"reset", false,-1);
    tracep->declBit(c+38916,"io_d", false,-1);
    tracep->declBit(c+1301,"io_q", false,-1);
    tracep->pushNamePrefix("output_chain ");
    tracep->declBit(c+169,"clock", false,-1);
    tracep->declBit(c+40364,"reset", false,-1);
    tracep->declBit(c+38916,"io_d", false,-1);
    tracep->declBit(c+1301,"io_q", false,-1);
    tracep->declBit(c+1301,"sync_0", false,-1);
    tracep->declBit(c+1302,"sync_1", false,-1);
    tracep->declBit(c+1303,"sync_2", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("sink_extend ");
    tracep->declBit(c+40246,"io_in", false,-1);
    tracep->declBit(c+169,"clock", false,-1);
    tracep->declBit(c+40399,"reset", false,-1);
    tracep->declBit(c+39097,"io_out", false,-1);
    tracep->pushNamePrefix("io_out_source_valid_0 ");
    tracep->declBit(c+169,"clock", false,-1);
    tracep->declBit(c+40399,"reset", false,-1);
    tracep->declBit(c+40246,"io_d", false,-1);
    tracep->declBit(c+39097,"io_q", false,-1);
    tracep->pushNamePrefix("output_chain ");
    tracep->declBit(c+169,"clock", false,-1);
    tracep->declBit(c+40399,"reset", false,-1);
    tracep->declBit(c+40246,"io_d", false,-1);
    tracep->declBit(c+39097,"io_q", false,-1);
    tracep->declBit(c+39097,"sync_0", false,-1);
    tracep->declBit(c+39098,"sync_1", false,-1);
    tracep->declBit(c+39099,"sync_2", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("sink_valid ");
    tracep->declBit(c+39097,"io_in", false,-1);
    tracep->declBit(c+169,"clock", false,-1);
    tracep->declBit(c+40364,"reset", false,-1);
    tracep->declBit(c+1304,"io_out", false,-1);
    tracep->pushNamePrefix("io_out_source_valid_0 ");
    tracep->declBit(c+169,"clock", false,-1);
    tracep->declBit(c+40364,"reset", false,-1);
    tracep->declBit(c+39097,"io_d", false,-1);
    tracep->declBit(c+1304,"io_q", false,-1);
    tracep->pushNamePrefix("output_chain ");
    tracep->declBit(c+169,"clock", false,-1);
    tracep->declBit(c+40364,"reset", false,-1);
    tracep->declBit(c+39097,"io_d", false,-1);
    tracep->declBit(c+1304,"io_q", false,-1);
    tracep->declBit(c+1304,"sync_0", false,-1);
    tracep->declBit(c+1305,"sync_1", false,-1);
    tracep->declBit(c+1306,"sync_2", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("source_valid_0 ");
    tracep->declBit(c+40409,"io_in", false,-1);
    tracep->declBit(c+169,"clock", false,-1);
    tracep->declBit(c+40399,"reset", false,-1);
    tracep->declBit(c+40294,"io_out", false,-1);
    tracep->pushNamePrefix("io_out_source_valid_0 ");
    tracep->declBit(c+169,"clock", false,-1);
    tracep->declBit(c+40399,"reset", false,-1);
    tracep->declBit(c+40409,"io_d", false,-1);
    tracep->declBit(c+40294,"io_q", false,-1);
    tracep->pushNamePrefix("output_chain ");
    tracep->declBit(c+169,"clock", false,-1);
    tracep->declBit(c+40399,"reset", false,-1);
    tracep->declBit(c+40409,"io_d", false,-1);
    tracep->declBit(c+40294,"io_q", false,-1);
    tracep->declBit(c+40294,"sync_0", false,-1);
    tracep->declBit(c+40295,"sync_1", false,-1);
    tracep->declBit(c+40296,"sync_2", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("source_valid_1 ");
    tracep->declBit(c+40294,"io_in", false,-1);
    tracep->declBit(c+169,"clock", false,-1);
    tracep->declBit(c+40399,"reset", false,-1);
    tracep->declBit(c+40286,"io_out", false,-1);
    tracep->pushNamePrefix("io_out_source_valid_0 ");
    tracep->declBit(c+169,"clock", false,-1);
    tracep->declBit(c+40399,"reset", false,-1);
    tracep->declBit(c+40294,"io_d", false,-1);
    tracep->declBit(c+40286,"io_q", false,-1);
    tracep->pushNamePrefix("output_chain ");
    tracep->declBit(c+169,"clock", false,-1);
    tracep->declBit(c+40399,"reset", false,-1);
    tracep->declBit(c+40294,"io_d", false,-1);
    tracep->declBit(c+40286,"io_q", false,-1);
    tracep->declBit(c+40286,"sync_0", false,-1);
    tracep->declBit(c+40297,"sync_1", false,-1);
    tracep->declBit(c+40298,"sync_2", false,-1);
    tracep->popNamePrefix(5);
    tracep->pushNamePrefix("dmOuter ");
    tracep->declBit(c+169,"clock", false,-1);
    tracep->declBit(c+40364,"reset", false,-1);
    tracep->declBit(c+39258,"auto_dmi_in_a_valid", false,-1);
    tracep->declBus(c+39198,"auto_dmi_in_a_bits_opcode", false,-1, 2,0);
    tracep->declBus(c+39200,"auto_dmi_in_a_bits_address", false,-1, 6,0);
    tracep->declBus(c+40283,"auto_dmi_in_a_bits_data", false,-1, 31,0);
    tracep->declBit(c+40327,"auto_dmi_in_d_ready", false,-1);
    tracep->declBit(c+1307,"io_ctrl_dmactiveAck", false,-1);
    tracep->declBit(c+1308,"io_innerCtrl_ready", false,-1);
    tracep->declBit(c+38919,"io_hgDebugInt_0", false,-1);
    tracep->declBit(c+40327,"auto_dmi_in_a_ready", false,-1);
    tracep->declBit(c+39258,"auto_dmi_in_d_valid", false,-1);
    tracep->declBus(c+39201,"auto_dmi_in_d_bits_opcode", false,-1, 2,0);
    tracep->declBus(c+40400,"auto_dmi_in_d_bits_data", false,-1, 31,0);
    tracep->declBit(c+40390,"auto_int_out_0", false,-1);
    tracep->declBit(c+39244,"io_ctrl_dmactive", false,-1);
    tracep->declBit(c+40328,"io_innerCtrl_valid", false,-1);
    tracep->declBit(c+40329,"io_innerCtrl_bits_resumereq", false,-1);
    tracep->declBit(c+40330,"io_innerCtrl_bits_ackhavereset", false,-1);
    tracep->declBit(c+40331,"io_innerCtrl_bits_hrmask_0", false,-1);
    tracep->declBit(c+40332,"out_woready_12", false,-1);
    tracep->declBit(c+40284,"DMCONTROLWrData_setresethaltreq", false,-1);
    tracep->declBit(c+40285,"DMCONTROLWrData_clrresethaltreq", false,-1);
    tracep->declBit(c+1309,"DMCONTROLReg_haltreq", false,-1);
    tracep->declBit(c+1310,"DMCONTROLReg_ndmreset", false,-1);
    tracep->declBit(c+39244,"DMCONTROLReg_dmactive", false,-1);
    tracep->declBit(c+1311,"hrmaskReg_0", false,-1);
    tracep->declBit(c+40331,"hrmaskNxt_0", false,-1);
    tracep->declBit(c+39202,"out_front_bits_read", false,-1);
    tracep->declBus(c+39201,"bundleIn_0_d_bits_opcode", false,-1, 2,0);
    tracep->declBit(c+39259,"debugIntRegs_0", false,-1);
    tracep->declBit(c+1312,"innerCtrlValidReg", false,-1);
    tracep->declBit(c+1313,"innerCtrlResumeReqReg", false,-1);
    tracep->declBit(c+1314,"innerCtrlAckHaveResetReg", false,-1);
    tracep->pushNamePrefix("monitor ");
    tracep->declBit(c+169,"clock", false,-1);
    tracep->declBit(c+40364,"reset", false,-1);
    tracep->declBit(c+40327,"io_in_a_ready", false,-1);
    tracep->declBit(c+39258,"io_in_a_valid", false,-1);
    tracep->declBus(c+39198,"io_in_a_bits_opcode", false,-1, 2,0);
    tracep->declBus(c+39200,"io_in_a_bits_address", false,-1, 6,0);
    tracep->declBit(c+40327,"io_in_d_ready", false,-1);
    tracep->declBit(c+39258,"io_in_d_valid", false,-1);
    tracep->declBus(c+39201,"io_in_d_bits_opcode", false,-1, 2,0);
    tracep->declBit(c+40333,"a_set", false,-1);
    tracep->declBit(c+1250,"inflight", false,-1);
    tracep->declBus(c+1251,"inflight_opcodes", false,-1, 3,0);
    tracep->declBus(c+1252,"inflight_sizes", false,-1, 3,0);
    tracep->declBit(c+40413,"d_release_ack", false,-1);
    tracep->declBus(c+1253,"watchdog", false,-1, 31,0);
    tracep->declBit(c+40334,"d_first_done", false,-1);
    tracep->declBit(c+40334,"d_clr", false,-1);
    tracep->declBus(c+40335,"d_sizes_clr", false,-1, 3,0);
    tracep->pushNamePrefix("plusarg_reader ");
    tracep->declArray(c+40414,"FORMAT", false,-1, 151,0);
    tracep->declBus(c+40419,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+40420,"DEFAULT", false,-1, 31,0);
    tracep->declBus(c+138,"out", false,-1, 31,0);
    tracep->declBus(c+138,"myplus", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("plusarg_reader_1 ");
    tracep->declArray(c+40414,"FORMAT", false,-1, 151,0);
    tracep->declBus(c+40419,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+40420,"DEFAULT", false,-1, 31,0);
    tracep->declBus(c+139,"out", false,-1, 31,0);
    tracep->declBus(c+139,"myplus", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("dmactiveAck_dmactiveAckSync ");
    tracep->declBit(c+169,"clock", false,-1);
    tracep->declBit(c+40364,"reset", false,-1);
    tracep->declBit(c+38461,"io_d", false,-1);
    tracep->declBit(c+1307,"io_q", false,-1);
    tracep->pushNamePrefix("output_chain ");
    tracep->declBit(c+169,"clock", false,-1);
    tracep->declBit(c+40364,"reset", false,-1);
    tracep->declBit(c+38461,"io_d", false,-1);
    tracep->declBit(c+1307,"io_q", false,-1);
    tracep->declBit(c+1307,"sync_0", false,-1);
    tracep->declBit(c+1315,"sync_1", false,-1);
    tracep->declBit(c+1316,"sync_2", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("dmi2tl ");
    tracep->declBit(c+40312,"auto_out_a_ready", false,-1);
    tracep->declBit(c+39245,"auto_out_d_valid", false,-1);
    tracep->declBit(c+1276,"auto_out_d_bits_denied", false,-1);
    tracep->declBus(c+40367,"auto_out_d_bits_data", false,-1, 31,0);
    tracep->declBit(c+40401,"auto_out_d_bits_corrupt", false,-1);
    tracep->declBit(c+1283,"io_dmi_req_valid", false,-1);
    tracep->declBus(c+1202,"io_dmi_req_bits_addr", false,-1, 6,0);
    tracep->declBus(c+1203,"io_dmi_req_bits_data", false,-1, 31,0);
    tracep->declBus(c+1204,"io_dmi_req_bits_op", false,-1, 1,0);
    tracep->declBit(c+40313,"io_dmi_resp_ready", false,-1);
    tracep->declBit(c+1283,"auto_out_a_valid", false,-1);
    tracep->declBus(c+39198,"auto_out_a_bits_opcode", false,-1, 2,0);
    tracep->declBus(c+39199,"auto_out_a_bits_address", false,-1, 8,0);
    tracep->declBus(c+40283,"auto_out_a_bits_data", false,-1, 31,0);
    tracep->declBit(c+40313,"auto_out_d_ready", false,-1);
    tracep->declBit(c+40312,"io_dmi_req_ready", false,-1);
    tracep->declBit(c+39245,"io_dmi_resp_valid", false,-1);
    tracep->declBus(c+40367,"io_dmi_resp_bits_data", false,-1, 31,0);
    tracep->declBus(c+39246,"io_dmi_resp_bits_resp", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dmiBypass ");
    tracep->declBit(c+169,"clock", false,-1);
    tracep->declBit(c+40364,"reset", false,-1);
    tracep->declBit(c+1289,"auto_node_out_out_a_ready", false,-1);
    tracep->declBit(c+1290,"auto_node_out_out_d_valid", false,-1);
    tracep->declBus(c+1236,"auto_node_out_out_d_bits_opcode", false,-1, 2,0);
    tracep->declBus(c+1237,"auto_node_out_out_d_bits_param", false,-1, 1,0);
    tracep->declBus(c+1238,"auto_node_out_out_d_bits_size", false,-1, 1,0);
    tracep->declBit(c+1239,"auto_node_out_out_d_bits_source", false,-1);
    tracep->declBit(c+1240,"auto_node_out_out_d_bits_denied", false,-1);
    tracep->declBus(c+1241,"auto_node_out_out_d_bits_data", false,-1, 31,0);
    tracep->declBit(c+1242,"auto_node_out_out_d_bits_corrupt", false,-1);
    tracep->declBit(c+39260,"auto_node_in_in_a_valid", false,-1);
    tracep->declBus(c+39198,"auto_node_in_in_a_bits_opcode", false,-1, 2,0);
    tracep->declBus(c+39199,"auto_node_in_in_a_bits_address", false,-1, 8,0);
    tracep->declBus(c+40283,"auto_node_in_in_a_bits_data", false,-1, 31,0);
    tracep->declBit(c+40336,"auto_node_in_in_d_ready", false,-1);
    tracep->declBit(c+39261,"io_bypass", false,-1);
    tracep->declBit(c+39254,"auto_node_out_out_a_valid", false,-1);
    tracep->declBus(c+39198,"auto_node_out_out_a_bits_opcode", false,-1, 2,0);
    tracep->declBus(c+39199,"auto_node_out_out_a_bits_address", false,-1, 8,0);
    tracep->declBus(c+40283,"auto_node_out_out_a_bits_data", false,-1, 31,0);
    tracep->declBit(c+40323,"auto_node_out_out_d_ready", false,-1);
    tracep->declBit(c+40337,"auto_node_in_in_a_ready", false,-1);
    tracep->declBit(c+39262,"auto_node_in_in_d_valid", false,-1);
    tracep->declBus(c+39263,"auto_node_in_in_d_bits_opcode", false,-1, 2,0);
    tracep->declBus(c+1277,"auto_node_in_in_d_bits_param", false,-1, 1,0);
    tracep->declBus(c+1278,"auto_node_in_in_d_bits_size", false,-1, 1,0);
    tracep->declBit(c+1279,"auto_node_in_in_d_bits_denied", false,-1);
    tracep->declBus(c+1280,"auto_node_in_in_d_bits_data", false,-1, 31,0);
    tracep->declBit(c+40402,"auto_node_in_in_d_bits_corrupt", false,-1);
    tracep->pushNamePrefix("bar ");
    tracep->declBit(c+169,"clock", false,-1);
    tracep->declBit(c+40364,"reset", false,-1);
    tracep->declBit(c+39260,"auto_in_a_valid", false,-1);
    tracep->declBus(c+39198,"auto_in_a_bits_opcode", false,-1, 2,0);
    tracep->declBus(c+39199,"auto_in_a_bits_address", false,-1, 8,0);
    tracep->declBus(c+40283,"auto_in_a_bits_data", false,-1, 31,0);
    tracep->declBit(c+40336,"auto_in_d_ready", false,-1);
    tracep->declBit(c+1289,"auto_out_1_a_ready", false,-1);
    tracep->declBit(c+1290,"auto_out_1_d_valid", false,-1);
    tracep->declBus(c+1236,"auto_out_1_d_bits_opcode", false,-1, 2,0);
    tracep->declBus(c+1237,"auto_out_1_d_bits_param", false,-1, 1,0);
    tracep->declBus(c+1238,"auto_out_1_d_bits_size", false,-1, 1,0);
    tracep->declBit(c+1239,"auto_out_1_d_bits_source", false,-1);
    tracep->declBit(c+1240,"auto_out_1_d_bits_denied", false,-1);
    tracep->declBus(c+1241,"auto_out_1_d_bits_data", false,-1, 31,0);
    tracep->declBit(c+1242,"auto_out_1_d_bits_corrupt", false,-1);
    tracep->declBit(c+40338,"auto_out_0_a_ready", false,-1);
    tracep->declBit(c+39264,"auto_out_0_d_valid", false,-1);
    tracep->declBus(c+39265,"auto_out_0_d_bits_opcode", false,-1, 2,0);
    tracep->declBus(c+39266,"auto_out_0_d_bits_size", false,-1, 1,0);
    tracep->declBit(c+39267,"auto_out_0_d_bits_denied", false,-1);
    tracep->declBit(c+40403,"auto_out_0_d_bits_corrupt", false,-1);
    tracep->declBit(c+39261,"io_bypass", false,-1);
    tracep->declBit(c+40337,"auto_in_a_ready", false,-1);
    tracep->declBit(c+39262,"auto_in_d_valid", false,-1);
    tracep->declBus(c+39263,"auto_in_d_bits_opcode", false,-1, 2,0);
    tracep->declBus(c+1277,"auto_in_d_bits_param", false,-1, 1,0);
    tracep->declBus(c+1278,"auto_in_d_bits_size", false,-1, 1,0);
    tracep->declBit(c+1279,"auto_in_d_bits_denied", false,-1);
    tracep->declBus(c+1280,"auto_in_d_bits_data", false,-1, 31,0);
    tracep->declBit(c+40402,"auto_in_d_bits_corrupt", false,-1);
    tracep->declBit(c+39254,"auto_out_1_a_valid", false,-1);
    tracep->declBus(c+39198,"auto_out_1_a_bits_opcode", false,-1, 2,0);
    tracep->declBus(c+39199,"auto_out_1_a_bits_address", false,-1, 8,0);
    tracep->declBus(c+40283,"auto_out_1_a_bits_data", false,-1, 31,0);
    tracep->declBit(c+40323,"auto_out_1_d_ready", false,-1);
    tracep->declBit(c+39268,"auto_out_0_a_valid", false,-1);
    tracep->declBus(c+39198,"auto_out_0_a_bits_opcode", false,-1, 2,0);
    tracep->declArray(c+39203,"auto_out_0_a_bits_address", false,-1, 127,0);
    tracep->declBit(c+40339,"auto_out_0_d_ready", false,-1);
    tracep->declBit(c+1254,"in_reset", false,-1);
    tracep->declBit(c+1255,"bypass_reg", false,-1);
    tracep->declBit(c+39269,"bypass", false,-1);
    tracep->declBus(c+1256,"flight", false,-1, 1,0);
    tracep->declBit(c+40337,"in_a_ready", false,-1);
    tracep->declBit(c+39262,"in_d_valid", false,-1);
    tracep->declBus(c+39263,"in_d_bits_opcode", false,-1, 2,0);
    tracep->declBus(c+1277,"in_d_bits_param", false,-1, 1,0);
    tracep->declBus(c+1278,"in_d_bits_size", false,-1, 1,0);
    tracep->declBit(c+1279,"in_d_bits_denied", false,-1);
    tracep->declBit(c+40402,"in_d_bits_corrupt", false,-1);
    tracep->declBit(c+40340,"done_3", false,-1);
    tracep->declBus(c+40341,"next_flight", false,-1, 1,0);
    tracep->pushNamePrefix("monitor ");
    tracep->declBit(c+169,"clock", false,-1);
    tracep->declBit(c+40364,"reset", false,-1);
    tracep->declBit(c+40337,"io_in_a_ready", false,-1);
    tracep->declBit(c+39260,"io_in_a_valid", false,-1);
    tracep->declBus(c+39198,"io_in_a_bits_opcode", false,-1, 2,0);
    tracep->declBus(c+39199,"io_in_a_bits_address", false,-1, 8,0);
    tracep->declBit(c+40336,"io_in_d_ready", false,-1);
    tracep->declBit(c+39262,"io_in_d_valid", false,-1);
    tracep->declBus(c+39263,"io_in_d_bits_opcode", false,-1, 2,0);
    tracep->declBus(c+1277,"io_in_d_bits_param", false,-1, 1,0);
    tracep->declBus(c+1278,"io_in_d_bits_size", false,-1, 1,0);
    tracep->declBit(c+39270,"io_in_d_bits_source", false,-1);
    tracep->declBit(c+1279,"io_in_d_bits_denied", false,-1);
    tracep->declBit(c+40402,"io_in_d_bits_corrupt", false,-1);
    tracep->declBit(c+40342,"a_set", false,-1);
    tracep->declBit(c+1257,"inflight", false,-1);
    tracep->declBus(c+1258,"inflight_opcodes", false,-1, 3,0);
    tracep->declBus(c+1259,"inflight_sizes", false,-1, 3,0);
    tracep->declBit(c+39271,"d_release_ack", false,-1);
    tracep->declBus(c+1260,"watchdog", false,-1, 31,0);
    tracep->declBit(c+40343,"d_first_done", false,-1);
    tracep->declBit(c+39272,"same_cycle_resp", false,-1);
    tracep->pushNamePrefix("plusarg_reader ");
    tracep->declArray(c+40414,"FORMAT", false,-1, 151,0);
    tracep->declBus(c+40419,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+40420,"DEFAULT", false,-1, 31,0);
    tracep->declBus(c+140,"out", false,-1, 31,0);
    tracep->declBus(c+140,"myplus", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("plusarg_reader_1 ");
    tracep->declArray(c+40414,"FORMAT", false,-1, 151,0);
    tracep->declBus(c+40419,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+40420,"DEFAULT", false,-1, 31,0);
    tracep->declBus(c+141,"out", false,-1, 31,0);
    tracep->declBus(c+141,"myplus", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("error ");
    tracep->declBit(c+169,"clock", false,-1);
    tracep->declBit(c+40364,"reset", false,-1);
    tracep->declBit(c+39268,"auto_in_a_valid", false,-1);
    tracep->declBus(c+39198,"auto_in_a_bits_opcode", false,-1, 2,0);
    tracep->declArray(c+39203,"auto_in_a_bits_address", false,-1, 127,0);
    tracep->declBit(c+40339,"auto_in_d_ready", false,-1);
    tracep->declBit(c+40338,"auto_in_a_ready", false,-1);
    tracep->declBit(c+39264,"auto_in_d_valid", false,-1);
    tracep->declBus(c+39265,"auto_in_d_bits_opcode", false,-1, 2,0);
    tracep->declBus(c+39266,"auto_in_d_bits_size", false,-1, 1,0);
    tracep->declBit(c+39267,"auto_in_d_bits_denied", false,-1);
    tracep->declBit(c+40403,"auto_in_d_bits_corrupt", false,-1);
    tracep->declBit(c+40344,"out_1_ready", false,-1);
    tracep->declBus(c+39207,"out_1_bits_opcode", false,-1, 2,0);
    tracep->declBit(c+1261,"idle", false,-1);
    tracep->declBit(c+40338,"in_a_ready", false,-1);
    tracep->declBit(c+39273,"winnerQual_1", false,-1);
    tracep->declBit(c+1262,"beatsLeft", false,-1);
    tracep->declBit(c+1263,"state_1", false,-1);
    tracep->declBit(c+39267,"out_2_bits_denied", false,-1);
    tracep->declBit(c+39264,"out_2_valid", false,-1);
    tracep->declBit(c+40403,"out_2_bits_corrupt", false,-1);
    tracep->declBus(c+39266,"out_2_bits_size", false,-1, 1,0);
    tracep->declBus(c+39265,"out_2_bits_opcode", false,-1, 2,0);
    tracep->pushNamePrefix("monitor ");
    tracep->declBit(c+169,"clock", false,-1);
    tracep->declBit(c+40364,"reset", false,-1);
    tracep->declBit(c+40338,"io_in_a_ready", false,-1);
    tracep->declBit(c+39268,"io_in_a_valid", false,-1);
    tracep->declBus(c+39198,"io_in_a_bits_opcode", false,-1, 2,0);
    tracep->declArray(c+39203,"io_in_a_bits_address", false,-1, 127,0);
    tracep->declBit(c+40339,"io_in_d_ready", false,-1);
    tracep->declBit(c+39264,"io_in_d_valid", false,-1);
    tracep->declBus(c+39265,"io_in_d_bits_opcode", false,-1, 2,0);
    tracep->declBus(c+39266,"io_in_d_bits_size", false,-1, 1,0);
    tracep->declBit(c+39267,"io_in_d_bits_denied", false,-1);
    tracep->declBit(c+40403,"io_in_d_bits_corrupt", false,-1);
    tracep->declBit(c+40345,"a_set", false,-1);
    tracep->declBit(c+1264,"inflight", false,-1);
    tracep->declBus(c+1265,"inflight_opcodes", false,-1, 3,0);
    tracep->declBus(c+1266,"inflight_sizes", false,-1, 3,0);
    tracep->declBit(c+39274,"d_release_ack", false,-1);
    tracep->declBus(c+1267,"watchdog", false,-1, 31,0);
    tracep->declBit(c+40346,"d_first_done", false,-1);
    tracep->declBit(c+40347,"d_clr", false,-1);
    tracep->declBus(c+40348,"d_sizes_clr", false,-1, 3,0);
    tracep->pushNamePrefix("plusarg_reader ");
    tracep->declArray(c+40414,"FORMAT", false,-1, 151,0);
    tracep->declBus(c+40419,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+40420,"DEFAULT", false,-1, 31,0);
    tracep->declBus(c+142,"out", false,-1, 31,0);
    tracep->declBus(c+142,"myplus", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("plusarg_reader_1 ");
    tracep->declArray(c+40414,"FORMAT", false,-1, 151,0);
    tracep->declBus(c+40419,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+40420,"DEFAULT", false,-1, 31,0);
    tracep->declBus(c+143,"out", false,-1, 31,0);
    tracep->declBus(c+143,"myplus", false,-1, 31,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("dmiXbar ");
    tracep->declBit(c+169,"clock", false,-1);
    tracep->declBit(c+40364,"reset", false,-1);
    tracep->declBit(c+1283,"auto_in_a_valid", false,-1);
    tracep->declBus(c+39198,"auto_in_a_bits_opcode", false,-1, 2,0);
    tracep->declBus(c+39199,"auto_in_a_bits_address", false,-1, 8,0);
    tracep->declBus(c+40283,"auto_in_a_bits_data", false,-1, 31,0);
    tracep->declBit(c+40313,"auto_in_d_ready", false,-1);
    tracep->declBit(c+40327,"auto_out_1_a_ready", false,-1);
    tracep->declBit(c+39258,"auto_out_1_d_valid", false,-1);
    tracep->declBus(c+39201,"auto_out_1_d_bits_opcode", false,-1, 2,0);
    tracep->declBus(c+40400,"auto_out_1_d_bits_data", false,-1, 31,0);
    tracep->declBit(c+40337,"auto_out_0_a_ready", false,-1);
    tracep->declBit(c+39262,"auto_out_0_d_valid", false,-1);
    tracep->declBus(c+39263,"auto_out_0_d_bits_opcode", false,-1, 2,0);
    tracep->declBus(c+1277,"auto_out_0_d_bits_param", false,-1, 1,0);
    tracep->declBus(c+1278,"auto_out_0_d_bits_size", false,-1, 1,0);
    tracep->declBit(c+1279,"auto_out_0_d_bits_denied", false,-1);
    tracep->declBus(c+1280,"auto_out_0_d_bits_data", false,-1, 31,0);
    tracep->declBit(c+40402,"auto_out_0_d_bits_corrupt", false,-1);
    tracep->declBit(c+40312,"auto_in_a_ready", false,-1);
    tracep->declBit(c+39245,"auto_in_d_valid", false,-1);
    tracep->declBit(c+1276,"auto_in_d_bits_denied", false,-1);
    tracep->declBus(c+40367,"auto_in_d_bits_data", false,-1, 31,0);
    tracep->declBit(c+40401,"auto_in_d_bits_corrupt", false,-1);
    tracep->declBit(c+39258,"auto_out_1_a_valid", false,-1);
    tracep->declBus(c+39198,"auto_out_1_a_bits_opcode", false,-1, 2,0);
    tracep->declBus(c+39200,"auto_out_1_a_bits_address", false,-1, 6,0);
    tracep->declBus(c+40283,"auto_out_1_a_bits_data", false,-1, 31,0);
    tracep->declBit(c+40327,"auto_out_1_d_ready", false,-1);
    tracep->declBit(c+39260,"auto_out_0_a_valid", false,-1);
    tracep->declBus(c+39198,"auto_out_0_a_bits_opcode", false,-1, 2,0);
    tracep->declBus(c+39199,"auto_out_0_a_bits_address", false,-1, 8,0);
    tracep->declBus(c+40283,"auto_out_0_a_bits_data", false,-1, 31,0);
    tracep->declBit(c+40336,"auto_out_0_d_ready", false,-1);
    tracep->declBit(c+39208,"requestAIO_0_0", false,-1);
    tracep->declBit(c+39209,"requestAIO_0_1", false,-1);
    tracep->declBit(c+1268,"beatsLeft", false,-1);
    tracep->declBus(c+39275,"readys_valid", false,-1, 1,0);
    tracep->declBus(c+1269,"readys_mask", false,-1, 1,0);
    tracep->declBus(c+39276,"readys_readys", false,-1, 1,0);
    tracep->declBit(c+39277,"earlyWinner_0", false,-1);
    tracep->declBit(c+39278,"earlyWinner_1", false,-1);
    tracep->declBit(c+1270,"state_0", false,-1);
    tracep->declBit(c+1271,"state_1", false,-1);
    tracep->declBit(c+39279,"muxStateEarly_0", false,-1);
    tracep->declBit(c+39280,"muxStateEarly_1", false,-1);
    tracep->declBit(c+39245,"out_9_valid", false,-1);
    tracep->declBit(c+40401,"out_9_bits_corrupt", false,-1);
    tracep->declBit(c+1276,"out_9_bits_denied", false,-1);
    tracep->declBit(c+40349,"latch", false,-1);
    tracep->pushNamePrefix("monitor ");
    tracep->declBit(c+169,"clock", false,-1);
    tracep->declBit(c+40364,"reset", false,-1);
    tracep->declBit(c+40312,"io_in_a_ready", false,-1);
    tracep->declBit(c+1283,"io_in_a_valid", false,-1);
    tracep->declBus(c+39198,"io_in_a_bits_opcode", false,-1, 2,0);
    tracep->declBus(c+39199,"io_in_a_bits_address", false,-1, 8,0);
    tracep->declBit(c+40313,"io_in_d_ready", false,-1);
    tracep->declBit(c+39245,"io_in_d_valid", false,-1);
    tracep->declBus(c+39281,"io_in_d_bits_opcode", false,-1, 2,0);
    tracep->declBus(c+1281,"io_in_d_bits_param", false,-1, 1,0);
    tracep->declBus(c+1282,"io_in_d_bits_size", false,-1, 1,0);
    tracep->declBit(c+1276,"io_in_d_bits_denied", false,-1);
    tracep->declBit(c+40401,"io_in_d_bits_corrupt", false,-1);
    tracep->declBit(c+40350,"a_set", false,-1);
    tracep->declBit(c+1272,"inflight", false,-1);
    tracep->declBus(c+1273,"inflight_opcodes", false,-1, 3,0);
    tracep->declBus(c+1274,"inflight_sizes", false,-1, 3,0);
    tracep->declBit(c+39282,"d_release_ack", false,-1);
    tracep->declBus(c+1275,"watchdog", false,-1, 31,0);
    tracep->declBit(c+40351,"d_first_done", false,-1);
    tracep->declBit(c+40352,"d_clr", false,-1);
    tracep->declBus(c+40353,"d_sizes_clr", false,-1, 3,0);
    tracep->pushNamePrefix("plusarg_reader ");
    tracep->declArray(c+40414,"FORMAT", false,-1, 151,0);
    tracep->declBus(c+40419,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+40420,"DEFAULT", false,-1, 31,0);
    tracep->declBus(c+144,"out", false,-1, 31,0);
    tracep->declBus(c+144,"myplus", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("plusarg_reader_1 ");
    tracep->declArray(c+40414,"FORMAT", false,-1, 151,0);
    tracep->declBus(c+40419,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+40420,"DEFAULT", false,-1, 31,0);
    tracep->declBus(c+145,"out", false,-1, 31,0);
    tracep->declBus(c+145,"myplus", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("intsource ");
    tracep->declBit(c+40390,"auto_in_0", false,-1);
    tracep->declBit(c+40390,"auto_out_sync_0", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("io_innerCtrl_source ");
    tracep->declBit(c+169,"clock", false,-1);
    tracep->declBit(c+40364,"reset", false,-1);
    tracep->declBit(c+40328,"io_enq_valid", false,-1);
    tracep->declBit(c+40329,"io_enq_bits_resumereq", false,-1);
    tracep->declBit(c+40330,"io_enq_bits_ackhavereset", false,-1);
    tracep->declBit(c+40331,"io_enq_bits_hrmask_0", false,-1);
    tracep->declBit(c+38918,"io_async_ridx", false,-1);
    tracep->declBit(c+40248,"io_async_safe_ridx_valid", false,-1);
    tracep->declBit(c+40396,"io_async_safe_sink_reset_n", false,-1);
    tracep->declBit(c+1308,"io_enq_ready", false,-1);
    tracep->declBit(c+39189,"io_async_mem_0_resumereq", false,-1);
    tracep->declBus(c+39190,"io_async_mem_0_hartsel", false,-1, 9,0);
    tracep->declBit(c+39191,"io_async_mem_0_ackhavereset", false,-1);
    tracep->declBit(c+39192,"io_async_mem_0_hasel", false,-1);
    tracep->declBit(c+39193,"io_async_mem_0_hamask_0", false,-1);
    tracep->declBit(c+39194,"io_async_mem_0_hrmask_0", false,-1);
    tracep->declBit(c+39253,"io_async_widx", false,-1);
    tracep->declBit(c+40288,"io_async_safe_widx_valid", false,-1);
    tracep->declBit(c+40395,"io_async_safe_source_reset_n", false,-1);
    tracep->declBit(c+39189,"mem_0_resumereq", false,-1);
    tracep->declBus(c+39190,"mem_0_hartsel", false,-1, 9,0);
    tracep->declBit(c+39191,"mem_0_ackhavereset", false,-1);
    tracep->declBit(c+39192,"mem_0_hasel", false,-1);
    tracep->declBit(c+39193,"mem_0_hamask_0", false,-1);
    tracep->declBit(c+39194,"mem_0_hrmask_0", false,-1);
    tracep->declBit(c+1317,"widx_widx_bin", false,-1);
    tracep->declBit(c+1318,"ready_reg", false,-1);
    tracep->declBit(c+39253,"widx_gray", false,-1);
    tracep->declBit(c+40354,"widx_incremented", false,-1);
    tracep->pushNamePrefix("ridx_ridx_gray ");
    tracep->declBit(c+169,"clock", false,-1);
    tracep->declBit(c+40364,"reset", false,-1);
    tracep->declBit(c+38918,"io_d", false,-1);
    tracep->declBit(c+1319,"io_q", false,-1);
    tracep->pushNamePrefix("output_chain ");
    tracep->declBit(c+169,"clock", false,-1);
    tracep->declBit(c+40364,"reset", false,-1);
    tracep->declBit(c+38918,"io_d", false,-1);
    tracep->declBit(c+1319,"io_q", false,-1);
    tracep->declBit(c+1319,"sync_0", false,-1);
    tracep->declBit(c+1320,"sync_1", false,-1);
    tracep->declBit(c+1321,"sync_2", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("sink_extend ");
    tracep->declBit(c+40248,"io_in", false,-1);
    tracep->declBit(c+169,"clock", false,-1);
    tracep->declBit(c+40399,"reset", false,-1);
    tracep->declBit(c+39100,"io_out", false,-1);
    tracep->pushNamePrefix("io_out_source_valid_0 ");
    tracep->declBit(c+169,"clock", false,-1);
    tracep->declBit(c+40399,"reset", false,-1);
    tracep->declBit(c+40248,"io_d", false,-1);
    tracep->declBit(c+39100,"io_q", false,-1);
    tracep->pushNamePrefix("output_chain ");
    tracep->declBit(c+169,"clock", false,-1);
    tracep->declBit(c+40399,"reset", false,-1);
    tracep->declBit(c+40248,"io_d", false,-1);
    tracep->declBit(c+39100,"io_q", false,-1);
    tracep->declBit(c+39100,"sync_0", false,-1);
    tracep->declBit(c+39101,"sync_1", false,-1);
    tracep->declBit(c+39102,"sync_2", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("sink_valid ");
    tracep->declBit(c+39100,"io_in", false,-1);
    tracep->declBit(c+169,"clock", false,-1);
    tracep->declBit(c+40364,"reset", false,-1);
    tracep->declBit(c+1322,"io_out", false,-1);
    tracep->pushNamePrefix("io_out_source_valid_0 ");
    tracep->declBit(c+169,"clock", false,-1);
    tracep->declBit(c+40364,"reset", false,-1);
    tracep->declBit(c+39100,"io_d", false,-1);
    tracep->declBit(c+1322,"io_q", false,-1);
    tracep->pushNamePrefix("output_chain ");
    tracep->declBit(c+169,"clock", false,-1);
    tracep->declBit(c+40364,"reset", false,-1);
    tracep->declBit(c+39100,"io_d", false,-1);
    tracep->declBit(c+1322,"io_q", false,-1);
    tracep->declBit(c+1322,"sync_0", false,-1);
    tracep->declBit(c+1323,"sync_1", false,-1);
    tracep->declBit(c+1324,"sync_2", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("source_valid_0 ");
    tracep->declBit(c+40409,"io_in", false,-1);
    tracep->declBit(c+169,"clock", false,-1);
    tracep->declBit(c+40399,"reset", false,-1);
    tracep->declBit(c+40299,"io_out", false,-1);
    tracep->pushNamePrefix("io_out_source_valid_0 ");
    tracep->declBit(c+169,"clock", false,-1);
    tracep->declBit(c+40399,"reset", false,-1);
    tracep->declBit(c+40409,"io_d", false,-1);
    tracep->declBit(c+40299,"io_q", false,-1);
    tracep->pushNamePrefix("output_chain ");
    tracep->declBit(c+169,"clock", false,-1);
    tracep->declBit(c+40399,"reset", false,-1);
    tracep->declBit(c+40409,"io_d", false,-1);
    tracep->declBit(c+40299,"io_q", false,-1);
    tracep->declBit(c+40299,"sync_0", false,-1);
    tracep->declBit(c+40300,"sync_1", false,-1);
    tracep->declBit(c+40301,"sync_2", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("source_valid_1 ");
    tracep->declBit(c+40299,"io_in", false,-1);
    tracep->declBit(c+169,"clock", false,-1);
    tracep->declBit(c+40399,"reset", false,-1);
    tracep->declBit(c+40288,"io_out", false,-1);
    tracep->pushNamePrefix("io_out_source_valid_0 ");
    tracep->declBit(c+169,"clock", false,-1);
    tracep->declBit(c+40399,"reset", false,-1);
    tracep->declBit(c+40299,"io_d", false,-1);
    tracep->declBit(c+40288,"io_q", false,-1);
    tracep->pushNamePrefix("output_chain ");
    tracep->declBit(c+169,"clock", false,-1);
    tracep->declBit(c+40399,"reset", false,-1);
    tracep->declBit(c+40299,"io_d", false,-1);
    tracep->declBit(c+40288,"io_q", false,-1);
    tracep->declBit(c+40288,"sync_0", false,-1);
    tracep->declBit(c+40302,"sync_1", false,-1);
    tracep->declBit(c+40303,"sync_2", false,-1);
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("uartClockDomainWrapper ");
    tracep->declBit(c+39974,"auto_uart_0_control_xing_in_a_valid", false,-1);
    tracep->declBus(c+39978,"auto_uart_0_control_xing_in_a_bits_opcode", false,-1, 2,0);
    tracep->declBus(c+38325,"auto_uart_0_control_xing_in_a_bits_param", false,-1, 2,0);
    tracep->declBus(c+39976,"auto_uart_0_control_xing_in_a_bits_size", false,-1, 1,0);
    tracep->declBus(c+39977,"auto_uart_0_control_xing_in_a_bits_source", false,-1, 10,0);
    tracep->declBus(c+39979,"auto_uart_0_control_xing_in_a_bits_address", false,-1, 30,0);
    tracep->declBus(c+39980,"auto_uart_0_control_xing_in_a_bits_mask", false,-1, 7,0);
    tracep->declQuad(c+39981,"auto_uart_0_control_xing_in_a_bits_data", false,-1, 63,0);
    tracep->declBit(c+38326,"auto_uart_0_control_xing_in_a_bits_corrupt", false,-1);
    tracep->declBit(c+39973,"auto_uart_0_control_xing_in_d_ready", false,-1);
    tracep->declBit(c+39219,"auto_uart_0_io_out_rxd", false,-1);
    tracep->declBit(c+40360,"auto_clock_in_clock", false,-1);
    tracep->declBit(c+40240,"auto_clock_in_reset", false,-1);
    tracep->declBit(c+40374,"auto_uart_0_int_xing_out_sync_0", false,-1);
    tracep->declBit(c+39973,"auto_uart_0_control_xing_in_a_ready", false,-1);
    tracep->declBit(c+39974,"auto_uart_0_control_xing_in_d_valid", false,-1);
    tracep->declBus(c+39975,"auto_uart_0_control_xing_in_d_bits_opcode", false,-1, 2,0);
    tracep->declBus(c+39976,"auto_uart_0_control_xing_in_d_bits_size", false,-1, 1,0);
    tracep->declBus(c+39977,"auto_uart_0_control_xing_in_d_bits_source", false,-1, 10,0);
    tracep->declQuad(c+38323,"auto_uart_0_control_xing_in_d_bits_data", false,-1, 63,0);
    tracep->declBit(c+1370,"auto_uart_0_io_out_txd", false,-1);
    tracep->pushNamePrefix("uart_0 ");
    tracep->declBit(c+40360,"clock", false,-1);
    tracep->declBit(c+40240,"reset", false,-1);
    tracep->declBit(c+39974,"auto_control_xing_in_a_valid", false,-1);
    tracep->declBus(c+39978,"auto_control_xing_in_a_bits_opcode", false,-1, 2,0);
    tracep->declBus(c+38325,"auto_control_xing_in_a_bits_param", false,-1, 2,0);
    tracep->declBus(c+39976,"auto_control_xing_in_a_bits_size", false,-1, 1,0);
    tracep->declBus(c+39977,"auto_control_xing_in_a_bits_source", false,-1, 10,0);
    tracep->declBus(c+39979,"auto_control_xing_in_a_bits_address", false,-1, 30,0);
    tracep->declBus(c+39980,"auto_control_xing_in_a_bits_mask", false,-1, 7,0);
    tracep->declQuad(c+39981,"auto_control_xing_in_a_bits_data", false,-1, 63,0);
    tracep->declBit(c+38326,"auto_control_xing_in_a_bits_corrupt", false,-1);
    tracep->declBit(c+39973,"auto_control_xing_in_d_ready", false,-1);
    tracep->declBit(c+39219,"auto_io_out_rxd", false,-1);
    tracep->declBit(c+40374,"auto_int_xing_out_sync_0", false,-1);
    tracep->declBit(c+39973,"auto_control_xing_in_a_ready", false,-1);
    tracep->declBit(c+39974,"auto_control_xing_in_d_valid", false,-1);
    tracep->declBus(c+39975,"auto_control_xing_in_d_bits_opcode", false,-1, 2,0);
    tracep->declBus(c+39976,"auto_control_xing_in_d_bits_size", false,-1, 1,0);
    tracep->declBus(c+39977,"auto_control_xing_in_d_bits_source", false,-1, 10,0);
    tracep->declQuad(c+38323,"auto_control_xing_in_d_bits_data", false,-1, 63,0);
    tracep->declBit(c+1370,"auto_io_out_txd", false,-1);
    tracep->declBit(c+40180,"out_woready_2", false,-1);
    tracep->declBit(c+40181,"out_backSel_0", false,-1);
    tracep->declBit(c+40182,"quash", false,-1);
    tracep->declBus(c+37928,"div", false,-1, 15,0);
    tracep->declBit(c+37929,"txen", false,-1);
    tracep->declBit(c+37930,"rxen", false,-1);
    tracep->declBus(c+37931,"txwm", false,-1, 8,0);
    tracep->declBus(c+37932,"rxwm", false,-1, 8,0);
    tracep->declBit(c+37933,"nstop", false,-1);
    tracep->declBit(c+40183,"ie_rxwm", false,-1);
    tracep->declBit(c+40184,"ie_txwm", false,-1);
    tracep->declBit(c+40185,"ip_txwm", false,-1);
    tracep->declBit(c+40186,"ip_rxwm", false,-1);
    tracep->declBit(c+40187,"out_front_bits_read", false,-1);
    tracep->declBit(c+40188,"out_woready_10", false,-1);
    tracep->declBit(c+40189,"out_woready_12", false,-1);
    tracep->declBus(c+39975,"x1_3_d_bits_opcode", false,-1, 2,0);
    tracep->pushNamePrefix("intsource ");
    tracep->declBit(c+40360,"clock", false,-1);
    tracep->declBit(c+40240,"reset", false,-1);
    tracep->declBit(c+40190,"auto_in_0", false,-1);
    tracep->declBit(c+40374,"auto_out_sync_0", false,-1);
    tracep->pushNamePrefix("reg_0 ");
    tracep->declBit(c+40360,"clock", false,-1);
    tracep->declBit(c+40240,"reset", false,-1);
    tracep->declBit(c+40190,"io_d", false,-1);
    tracep->declBit(c+40374,"io_q", false,-1);
    tracep->declBit(c+40374,"reg_0", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("monitor ");
    tracep->declBit(c+40360,"clock", false,-1);
    tracep->declBit(c+40240,"reset", false,-1);
    tracep->declBit(c+39973,"io_in_a_ready", false,-1);
    tracep->declBit(c+39974,"io_in_a_valid", false,-1);
    tracep->declBus(c+39978,"io_in_a_bits_opcode", false,-1, 2,0);
    tracep->declBus(c+38325,"io_in_a_bits_param", false,-1, 2,0);
    tracep->declBus(c+39976,"io_in_a_bits_size", false,-1, 1,0);
    tracep->declBus(c+39977,"io_in_a_bits_source", false,-1, 10,0);
    tracep->declBus(c+39979,"io_in_a_bits_address", false,-1, 30,0);
    tracep->declBus(c+39980,"io_in_a_bits_mask", false,-1, 7,0);
    tracep->declBit(c+38326,"io_in_a_bits_corrupt", false,-1);
    tracep->declBit(c+39973,"io_in_d_ready", false,-1);
    tracep->declBit(c+39974,"io_in_d_valid", false,-1);
    tracep->declBus(c+39975,"io_in_d_bits_opcode", false,-1, 2,0);
    tracep->declBus(c+39976,"io_in_d_bits_size", false,-1, 1,0);
    tracep->declBus(c+39977,"io_in_d_bits_source", false,-1, 10,0);
    tracep->declBit(c+40191,"a_first_done", false,-1);
    tracep->declArray(c+37934,"inflight", false,-1, 1039,0);
    tracep->declArray(c+37967,"inflight_opcodes", false,-1, 4159,0);
    tracep->declArray(c+38097,"inflight_sizes", false,-1, 4159,0);
    tracep->declBit(c+40413,"d_release_ack", false,-1);
    tracep->declBus(c+38227,"watchdog", false,-1, 31,0);
    tracep->declBit(c+40192,"d_first_done", false,-1);
    tracep->declBit(c+40193,"mask_size", false,-1);
    tracep->declBit(c+40194,"mask_acc", false,-1);
    tracep->declBit(c+40195,"mask_acc_1", false,-1);
    tracep->declBit(c+40196,"mask_size_1", false,-1);
    tracep->declBit(c+40197,"mask_eq_2", false,-1);
    tracep->declBit(c+40198,"mask_acc_2", false,-1);
    tracep->declBit(c+40199,"mask_eq_3", false,-1);
    tracep->declBit(c+40200,"mask_acc_3", false,-1);
    tracep->declBit(c+40201,"mask_eq_4", false,-1);
    tracep->declBit(c+40202,"mask_acc_4", false,-1);
    tracep->declBit(c+40203,"mask_eq_5", false,-1);
    tracep->declBit(c+40204,"mask_acc_5", false,-1);
    tracep->declBus(c+40205,"mask", false,-1, 7,0);
    tracep->declBit(c+39974,"same_cycle_resp", false,-1);
    tracep->pushNamePrefix("plusarg_reader ");
    tracep->declArray(c+40414,"FORMAT", false,-1, 151,0);
    tracep->declBus(c+40419,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+40420,"DEFAULT", false,-1, 31,0);
    tracep->declBus(c+146,"out", false,-1, 31,0);
    tracep->declBus(c+146,"myplus", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("plusarg_reader_1 ");
    tracep->declArray(c+40414,"FORMAT", false,-1, 151,0);
    tracep->declBus(c+40419,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+40420,"DEFAULT", false,-1, 31,0);
    tracep->declBus(c+147,"out", false,-1, 31,0);
    tracep->declBus(c+147,"myplus", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("rxm ");
    tracep->declBit(c+40360,"clock", false,-1);
    tracep->declBit(c+40240,"reset", false,-1);
    tracep->declBit(c+37930,"io_en", false,-1);
    tracep->declBit(c+39219,"io_in", false,-1);
    tracep->declBus(c+37928,"io_div", false,-1, 15,0);
    tracep->declBit(c+38228,"io_out_valid", false,-1);
    tracep->declBus(c+38229,"io_out_bits", false,-1, 7,0);
    tracep->declBus(c+38230,"debounce", false,-1, 1,0);
    tracep->declBus(c+38231,"prescaler", false,-1, 12,0);
    tracep->declBus(c+38232,"data_count", false,-1, 3,0);
    tracep->declBus(c+38233,"sample_count", false,-1, 3,0);
    tracep->declBus(c+38234,"sample", false,-1, 2,0);
    tracep->declBus(c+38229,"shifter", false,-1, 7,0);
    tracep->declBit(c+38228,"valid", false,-1);
    tracep->declBit(c+38235,"state", false,-1);
    tracep->declBit(c+38236,"pulse", false,-1);
    tracep->declBit(c+38237,"data_last", false,-1);
    tracep->declBit(c+38238,"sample_mid", false,-1);
    tracep->declBit(c+40404,"restore", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("rxq ");
    tracep->declBit(c+40360,"clock", false,-1);
    tracep->declBit(c+40240,"reset", false,-1);
    tracep->declBit(c+38228,"io_enq_valid", false,-1);
    tracep->declBus(c+38229,"io_enq_bits", false,-1, 7,0);
    tracep->declBit(c+40206,"io_deq_ready", false,-1);
    tracep->declBit(c+38239,"io_enq_ready", false,-1);
    tracep->declBit(c+38240,"io_deq_valid", false,-1);
    tracep->declBus(c+38241,"io_deq_bits", false,-1, 7,0);
    tracep->declBus(c+38242,"io_count", false,-1, 8,0);
    tracep->declBus(c+38243,"enq_ptr_value", false,-1, 7,0);
    tracep->declBus(c+38244,"deq_ptr_value", false,-1, 7,0);
    tracep->declBit(c+38245,"maybe_full", false,-1);
    tracep->declBit(c+38246,"ptr_match", false,-1);
    tracep->declBit(c+38247,"empty", false,-1);
    tracep->declBit(c+38248,"full", false,-1);
    tracep->declBit(c+38249,"do_enq", false,-1);
    tracep->declBit(c+40207,"do_deq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBus(c+38244,"R0_addr", false,-1, 7,0);
    tracep->declBit(c+40409,"R0_en", false,-1);
    tracep->declBit(c+40360,"R0_clk", false,-1);
    tracep->declBus(c+38243,"W0_addr", false,-1, 7,0);
    tracep->declBit(c+38249,"W0_en", false,-1);
    tracep->declBit(c+40360,"W0_clk", false,-1);
    tracep->declBus(c+38229,"W0_data", false,-1, 7,0);
    tracep->declBus(c+38241,"R0_data", false,-1, 7,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("txm ");
    tracep->declBit(c+40360,"clock", false,-1);
    tracep->declBit(c+40240,"reset", false,-1);
    tracep->declBit(c+37929,"io_en", false,-1);
    tracep->declBit(c+38250,"io_in_valid", false,-1);
    tracep->declBus(c+38251,"io_in_bits", false,-1, 7,0);
    tracep->declBus(c+37928,"io_div", false,-1, 15,0);
    tracep->declBit(c+37933,"io_nstop", false,-1);
    tracep->declBit(c+38252,"io_in_ready", false,-1);
    tracep->declBit(c+1370,"io_out", false,-1);
    tracep->declBus(c+38253,"prescaler", false,-1, 15,0);
    tracep->declBus(c+38254,"counter", false,-1, 3,0);
    tracep->declBus(c+38255,"shifter", false,-1, 8,0);
    tracep->declBit(c+1370,"out", false,-1);
    tracep->declBit(c+38256,"pulse", false,-1);
    tracep->pushNamePrefix("plusarg_reader ");
    tracep->declArray(c+40475,"FORMAT", false,-1, 79,0);
    tracep->declBus(c+40419,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+40478,"DEFAULT", false,-1, 31,0);
    tracep->declBus(c+148,"out", false,-1, 31,0);
    tracep->declBus(c+148,"myplus", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("plusarg_reader_1 ");
    tracep->declArray(c+40479,"FORMAT", false,-1, 135,0);
    tracep->declBus(c+40419,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+40478,"DEFAULT", false,-1, 31,0);
    tracep->declBus(c+149,"out", false,-1, 31,0);
    tracep->declBus(c+149,"myplus", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("txq ");
    tracep->declBit(c+40360,"clock", false,-1);
    tracep->declBit(c+40240,"reset", false,-1);
    tracep->declBit(c+40208,"io_enq_valid", false,-1);
    tracep->declBus(c+40209,"io_enq_bits", false,-1, 7,0);
    tracep->declBit(c+38252,"io_deq_ready", false,-1);
    tracep->declBit(c+38257,"io_enq_ready", false,-1);
    tracep->declBit(c+38250,"io_deq_valid", false,-1);
    tracep->declBus(c+38251,"io_deq_bits", false,-1, 7,0);
    tracep->declBus(c+38258,"io_count", false,-1, 8,0);
    tracep->declBus(c+38259,"enq_ptr_value", false,-1, 7,0);
    tracep->declBus(c+38260,"deq_ptr_value", false,-1, 7,0);
    tracep->declBit(c+38261,"maybe_full", false,-1);
    tracep->declBit(c+38262,"ptr_match", false,-1);
    tracep->declBit(c+38263,"empty", false,-1);
    tracep->declBit(c+38264,"full", false,-1);
    tracep->declBit(c+40210,"do_enq", false,-1);
    tracep->declBit(c+38265,"do_deq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBus(c+38260,"R0_addr", false,-1, 7,0);
    tracep->declBit(c+40409,"R0_en", false,-1);
    tracep->declBit(c+40360,"R0_clk", false,-1);
    tracep->declBus(c+38259,"W0_addr", false,-1, 7,0);
    tracep->declBit(c+40210,"W0_en", false,-1);
    tracep->declBit(c+40360,"W0_clk", false,-1);
    tracep->declBus(c+40209,"W0_data", false,-1, 7,0);
    tracep->declBus(c+38251,"R0_data", false,-1, 7,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("xbar ");
    tracep->declBit(c+38351,"auto_int_in_0", false,-1);
    tracep->declBit(c+38351,"auto_int_out_0", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("xbar_1 ");
    tracep->declBit(c+38352,"auto_int_in_0", false,-1);
    tracep->declBit(c+38352,"auto_int_out_0", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("xbar_2 ");
    tracep->declBit(c+38353,"auto_int_in_0", false,-1);
    tracep->declBit(c+38353,"auto_int_out_0", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("system_debug_systemjtag_reset_catcher ");
    tracep->declBit(c+169,"clock", false,-1);
    tracep->declBit(c+40239,"reset", false,-1);
    tracep->declBit(c+40364,"io_sync_reset", false,-1);
    tracep->pushNamePrefix("io_sync_reset_chain ");
    tracep->declBit(c+169,"clock", false,-1);
    tracep->declBit(c+40239,"reset", false,-1);
    tracep->declBit(c+40409,"io_d", false,-1);
    tracep->declBit(c+1325,"io_q", false,-1);
    tracep->pushNamePrefix("output_chain ");
    tracep->declBit(c+169,"clock", false,-1);
    tracep->declBit(c+40239,"reset", false,-1);
    tracep->declBit(c+40409,"io_d", false,-1);
    tracep->declBit(c+1325,"io_q", false,-1);
    tracep->declBit(c+1325,"sync_0", false,-1);
    tracep->declBit(c+1326,"sync_1", false,-1);
    tracep->declBit(c+1327,"sync_2", false,-1);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("plusarg_reader_1 ");
    tracep->declArray(c+40484,"FORMAT", false,-1, 143,0);
    tracep->declBus(c+40410,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+40489,"DEFAULT", false,-1, 0,0);
    tracep->declBus(c+3,"out", false,-1, 0,0);
    tracep->declBus(c+3,"myplus", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("plusarg_reader_TestHarness_UNIQUIFIED ");
    tracep->declArray(c+40490,"FORMAT", false,-1, 143,0);
    tracep->declBus(c+40419,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+40420,"DEFAULT", false,-1, 31,0);
    tracep->declBus(c+150,"out", false,-1, 31,0);
    tracep->declBus(c+150,"myplus", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ram ");
    tracep->declBit(c+40355,"clock", false,-1);
    tracep->declBit(c+40356,"reset", false,-1);
    tracep->declBit(c+1157,"io_ser_in_ready", false,-1);
    tracep->declBit(c+1179,"io_ser_out_valid", false,-1);
    tracep->declBus(c+180,"io_ser_out_bits", false,-1, 31,0);
    tracep->declBit(c+182,"io_tsi_ser_in_valid", false,-1);
    tracep->declBus(c+183,"io_tsi_ser_in_bits", false,-1, 31,0);
    tracep->declBit(c+184,"io_tsi_ser_out_ready", false,-1);
    tracep->declBit(c+178,"io_ser_in_valid", false,-1);
    tracep->declBus(c+39210,"io_ser_in_bits", false,-1, 31,0);
    tracep->declBit(c+179,"io_ser_out_ready", false,-1);
    tracep->declBit(c+185,"io_tsi_ser_in_ready", false,-1);
    tracep->declBit(c+186,"io_tsi_ser_out_valid", false,-1);
    tracep->declBus(c+187,"io_tsi_ser_out_bits", false,-1, 31,0);
    tracep->pushNamePrefix("adapter ");
    tracep->declBit(c+40355,"clock", false,-1);
    tracep->declBit(c+40356,"reset", false,-1);
    tracep->declBit(c+188,"auto_out_a_ready", false,-1);
    tracep->declBit(c+189,"auto_out_d_valid", false,-1);
    tracep->declQuad(c+190,"auto_out_d_bits_data", false,-1, 63,0);
    tracep->declBit(c+182,"io_serial_in_valid", false,-1);
    tracep->declBus(c+183,"io_serial_in_bits", false,-1, 31,0);
    tracep->declBit(c+184,"io_serial_out_ready", false,-1);
    tracep->declBit(c+192,"auto_out_a_valid", false,-1);
    tracep->declBus(c+193,"auto_out_a_bits_opcode", false,-1, 2,0);
    tracep->declBus(c+194,"auto_out_a_bits_size", false,-1, 3,0);
    tracep->declBus(c+195,"auto_out_a_bits_address", false,-1, 31,0);
    tracep->declBus(c+196,"auto_out_a_bits_mask", false,-1, 7,0);
    tracep->declQuad(c+197,"auto_out_a_bits_data", false,-1, 63,0);
    tracep->declBit(c+199,"auto_out_d_ready", false,-1);
    tracep->declBit(c+185,"io_serial_in_ready", false,-1);
    tracep->declBit(c+186,"io_serial_out_valid", false,-1);
    tracep->declBus(c+187,"io_serial_out_bits", false,-1, 31,0);
    tracep->declBus(c+200,"cmd", false,-1, 31,0);
    tracep->declQuad(c+201,"addr", false,-1, 63,0);
    tracep->declQuad(c+203,"len", false,-1, 63,0);
    tracep->declBus(c+205,"body_0", false,-1, 31,0);
    tracep->declBus(c+206,"body_1", false,-1, 31,0);
    tracep->declBus(c+207,"bodyValid", false,-1, 1,0);
    tracep->declBit(c+208,"idx", false,-1);
    tracep->declBus(c+209,"state", false,-1, 3,0);
    tracep->declArray(c+210,"len_size", false,-1, 65,0);
    tracep->declArray(c+213,"raw_size", false,-1, 65,0);
    tracep->declBus(c+216,"rsize", false,-1, 1,0);
    tracep->declBit(c+217,"pow2size", false,-1);
    tracep->declBus(c+218,"byteAddr", false,-1, 2,0);
    tracep->declBit(c+219,"get_acquire_a_mask_size", false,-1);
    tracep->declBit(c+220,"get_acquire_a_mask_acc", false,-1);
    tracep->declBit(c+221,"get_acquire_a_mask_acc_1", false,-1);
    tracep->declBit(c+222,"get_acquire_a_mask_size_1", false,-1);
    tracep->declBit(c+223,"get_acquire_a_mask_eq_2", false,-1);
    tracep->declBit(c+224,"get_acquire_a_mask_acc_2", false,-1);
    tracep->declBit(c+225,"get_acquire_a_mask_eq_3", false,-1);
    tracep->declBit(c+226,"get_acquire_a_mask_acc_3", false,-1);
    tracep->declBit(c+227,"get_acquire_a_mask_eq_4", false,-1);
    tracep->declBit(c+228,"get_acquire_a_mask_acc_4", false,-1);
    tracep->declBit(c+229,"get_acquire_a_mask_eq_5", false,-1);
    tracep->declBit(c+230,"get_acquire_a_mask_acc_5", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("buffer ");
    tracep->declBit(c+40355,"clock", false,-1);
    tracep->declBit(c+40356,"reset", false,-1);
    tracep->declBit(c+231,"auto_in_a_valid", false,-1);
    tracep->declBus(c+232,"auto_in_a_bits_opcode", false,-1, 2,0);
    tracep->declBus(c+233,"auto_in_a_bits_param", false,-1, 2,0);
    tracep->declBus(c+234,"auto_in_a_bits_size", false,-1, 1,0);
    tracep->declBus(c+235,"auto_in_a_bits_source", false,-1, 7,0);
    tracep->declBus(c+236,"auto_in_a_bits_address", false,-1, 28,0);
    tracep->declBus(c+237,"auto_in_a_bits_mask", false,-1, 7,0);
    tracep->declQuad(c+238,"auto_in_a_bits_data", false,-1, 63,0);
    tracep->declBit(c+240,"auto_in_a_bits_corrupt", false,-1);
    tracep->declBit(c+241,"auto_in_d_ready", false,-1);
    tracep->declBit(c+242,"auto_out_a_ready", false,-1);
    tracep->declBit(c+243,"auto_out_d_valid", false,-1);
    tracep->declBus(c+244,"auto_out_d_bits_opcode", false,-1, 2,0);
    tracep->declBus(c+245,"auto_out_d_bits_size", false,-1, 1,0);
    tracep->declBus(c+246,"auto_out_d_bits_source", false,-1, 7,0);
    tracep->declQuad(c+247,"auto_out_d_bits_data", false,-1, 63,0);
    tracep->declBit(c+249,"auto_in_a_ready", false,-1);
    tracep->declBit(c+250,"auto_in_d_valid", false,-1);
    tracep->declBus(c+251,"auto_in_d_bits_opcode", false,-1, 2,0);
    tracep->declBus(c+252,"auto_in_d_bits_param", false,-1, 1,0);
    tracep->declBus(c+253,"auto_in_d_bits_size", false,-1, 1,0);
    tracep->declBus(c+254,"auto_in_d_bits_source", false,-1, 7,0);
    tracep->declBit(c+255,"auto_in_d_bits_sink", false,-1);
    tracep->declBit(c+256,"auto_in_d_bits_denied", false,-1);
    tracep->declQuad(c+257,"auto_in_d_bits_data", false,-1, 63,0);
    tracep->declBit(c+259,"auto_in_d_bits_corrupt", false,-1);
    tracep->declBit(c+260,"auto_out_a_valid", false,-1);
    tracep->declBus(c+261,"auto_out_a_bits_opcode", false,-1, 2,0);
    tracep->declBus(c+262,"auto_out_a_bits_param", false,-1, 2,0);
    tracep->declBus(c+263,"auto_out_a_bits_size", false,-1, 1,0);
    tracep->declBus(c+264,"auto_out_a_bits_source", false,-1, 7,0);
    tracep->declBus(c+265,"auto_out_a_bits_address", false,-1, 28,0);
    tracep->declBus(c+266,"auto_out_a_bits_mask", false,-1, 7,0);
    tracep->declQuad(c+267,"auto_out_a_bits_data", false,-1, 63,0);
    tracep->declBit(c+269,"auto_out_a_bits_corrupt", false,-1);
    tracep->declBit(c+270,"auto_out_d_ready", false,-1);
    tracep->pushNamePrefix("bundleIn_0_d_q ");
    tracep->declBit(c+40355,"clock", false,-1);
    tracep->declBit(c+40356,"reset", false,-1);
    tracep->declBit(c+243,"io_enq_valid", false,-1);
    tracep->declBus(c+244,"io_enq_bits_opcode", false,-1, 2,0);
    tracep->declBus(c+245,"io_enq_bits_size", false,-1, 1,0);
    tracep->declBus(c+246,"io_enq_bits_source", false,-1, 7,0);
    tracep->declQuad(c+247,"io_enq_bits_data", false,-1, 63,0);
    tracep->declBit(c+241,"io_deq_ready", false,-1);
    tracep->declBit(c+270,"io_enq_ready", false,-1);
    tracep->declBit(c+250,"io_deq_valid", false,-1);
    tracep->declBus(c+251,"io_deq_bits_opcode", false,-1, 2,0);
    tracep->declBus(c+252,"io_deq_bits_param", false,-1, 1,0);
    tracep->declBus(c+253,"io_deq_bits_size", false,-1, 1,0);
    tracep->declBus(c+254,"io_deq_bits_source", false,-1, 7,0);
    tracep->declBit(c+255,"io_deq_bits_sink", false,-1);
    tracep->declBit(c+256,"io_deq_bits_denied", false,-1);
    tracep->declQuad(c+257,"io_deq_bits_data", false,-1, 63,0);
    tracep->declBit(c+259,"io_deq_bits_corrupt", false,-1);
    tracep->declBit(c+271,"enq_ptr_value", false,-1);
    tracep->declBit(c+272,"deq_ptr_value", false,-1);
    tracep->declBit(c+273,"maybe_full", false,-1);
    tracep->declBit(c+274,"ptr_match", false,-1);
    tracep->declBit(c+275,"empty", false,-1);
    tracep->declBit(c+276,"full", false,-1);
    tracep->declBit(c+277,"do_enq", false,-1);
    tracep->declBit(c+278,"do_deq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+272,"R0_addr", false,-1);
    tracep->declBit(c+40409,"R0_en", false,-1);
    tracep->declBit(c+40355,"R0_clk", false,-1);
    tracep->declBit(c+271,"W0_addr", false,-1);
    tracep->declBit(c+277,"W0_en", false,-1);
    tracep->declBit(c+40355,"W0_clk", false,-1);
    tracep->declArray(c+279,"W0_data", false,-1, 81,0);
    tracep->declArray(c+282,"R0_data", false,-1, 81,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declArray(c+285+i*3,"Memory", true,(i+0), 81,0);
    }
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("monitor ");
    tracep->declBit(c+40355,"clock", false,-1);
    tracep->declBit(c+40356,"reset", false,-1);
    tracep->declBit(c+249,"io_in_a_ready", false,-1);
    tracep->declBit(c+231,"io_in_a_valid", false,-1);
    tracep->declBus(c+232,"io_in_a_bits_opcode", false,-1, 2,0);
    tracep->declBus(c+233,"io_in_a_bits_param", false,-1, 2,0);
    tracep->declBus(c+234,"io_in_a_bits_size", false,-1, 1,0);
    tracep->declBus(c+235,"io_in_a_bits_source", false,-1, 7,0);
    tracep->declBus(c+236,"io_in_a_bits_address", false,-1, 28,0);
    tracep->declBus(c+237,"io_in_a_bits_mask", false,-1, 7,0);
    tracep->declBit(c+240,"io_in_a_bits_corrupt", false,-1);
    tracep->declBit(c+241,"io_in_d_ready", false,-1);
    tracep->declBit(c+250,"io_in_d_valid", false,-1);
    tracep->declBus(c+251,"io_in_d_bits_opcode", false,-1, 2,0);
    tracep->declBus(c+252,"io_in_d_bits_param", false,-1, 1,0);
    tracep->declBus(c+253,"io_in_d_bits_size", false,-1, 1,0);
    tracep->declBus(c+254,"io_in_d_bits_source", false,-1, 7,0);
    tracep->declBit(c+256,"io_in_d_bits_denied", false,-1);
    tracep->declBit(c+259,"io_in_d_bits_corrupt", false,-1);
    tracep->declBit(c+291,"a_first_done", false,-1);
    tracep->declArray(c+292,"inflight", false,-1, 255,0);
    tracep->declArray(c+300,"inflight_opcodes", false,-1, 1023,0);
    tracep->declArray(c+332,"inflight_sizes", false,-1, 1023,0);
    tracep->declBit(c+364,"d_release_ack", false,-1);
    tracep->declBus(c+365,"watchdog", false,-1, 31,0);
    tracep->declBit(c+366,"d_first_done", false,-1);
    tracep->declBit(c+367,"mask_size", false,-1);
    tracep->declBit(c+368,"mask_acc", false,-1);
    tracep->declBit(c+369,"mask_acc_1", false,-1);
    tracep->declBit(c+370,"mask_size_1", false,-1);
    tracep->declBit(c+371,"mask_eq_2", false,-1);
    tracep->declBit(c+372,"mask_acc_2", false,-1);
    tracep->declBit(c+373,"mask_eq_3", false,-1);
    tracep->declBit(c+374,"mask_acc_3", false,-1);
    tracep->declBit(c+375,"mask_eq_4", false,-1);
    tracep->declBit(c+376,"mask_acc_4", false,-1);
    tracep->declBit(c+377,"mask_eq_5", false,-1);
    tracep->declBit(c+378,"mask_acc_5", false,-1);
    tracep->declBus(c+379,"mask", false,-1, 7,0);
    tracep->declArray(c+380,"a_set_wo_ready", false,-1, 255,0);
    tracep->declBit(c+388,"same_cycle_resp", false,-1);
    tracep->pushNamePrefix("plusarg_reader_1 ");
    tracep->declArray(c+40414,"FORMAT", false,-1, 151,0);
    tracep->declBus(c+40419,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+40420,"DEFAULT", false,-1, 31,0);
    tracep->declBus(c+151,"out", false,-1, 31,0);
    tracep->declBus(c+151,"myplus", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("plusarg_reader_TestHarness_UNIQUIFIED ");
    tracep->declArray(c+40414,"FORMAT", false,-1, 151,0);
    tracep->declBus(c+40419,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+40420,"DEFAULT", false,-1, 31,0);
    tracep->declBus(c+152,"out", false,-1, 31,0);
    tracep->declBus(c+152,"myplus", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("x1_a_q ");
    tracep->declBit(c+40355,"clock", false,-1);
    tracep->declBit(c+40356,"reset", false,-1);
    tracep->declBit(c+231,"io_enq_valid", false,-1);
    tracep->declBus(c+232,"io_enq_bits_opcode", false,-1, 2,0);
    tracep->declBus(c+233,"io_enq_bits_param", false,-1, 2,0);
    tracep->declBus(c+234,"io_enq_bits_size", false,-1, 1,0);
    tracep->declBus(c+235,"io_enq_bits_source", false,-1, 7,0);
    tracep->declBus(c+236,"io_enq_bits_address", false,-1, 28,0);
    tracep->declBus(c+237,"io_enq_bits_mask", false,-1, 7,0);
    tracep->declQuad(c+238,"io_enq_bits_data", false,-1, 63,0);
    tracep->declBit(c+240,"io_enq_bits_corrupt", false,-1);
    tracep->declBit(c+242,"io_deq_ready", false,-1);
    tracep->declBit(c+249,"io_enq_ready", false,-1);
    tracep->declBit(c+260,"io_deq_valid", false,-1);
    tracep->declBus(c+261,"io_deq_bits_opcode", false,-1, 2,0);
    tracep->declBus(c+262,"io_deq_bits_param", false,-1, 2,0);
    tracep->declBus(c+263,"io_deq_bits_size", false,-1, 1,0);
    tracep->declBus(c+264,"io_deq_bits_source", false,-1, 7,0);
    tracep->declBus(c+265,"io_deq_bits_address", false,-1, 28,0);
    tracep->declBus(c+266,"io_deq_bits_mask", false,-1, 7,0);
    tracep->declQuad(c+267,"io_deq_bits_data", false,-1, 63,0);
    tracep->declBit(c+269,"io_deq_bits_corrupt", false,-1);
    tracep->declBit(c+389,"enq_ptr_value", false,-1);
    tracep->declBit(c+390,"deq_ptr_value", false,-1);
    tracep->declBit(c+391,"maybe_full", false,-1);
    tracep->declBit(c+392,"ptr_match", false,-1);
    tracep->declBit(c+393,"empty", false,-1);
    tracep->declBit(c+394,"full", false,-1);
    tracep->declBit(c+395,"do_enq", false,-1);
    tracep->declBit(c+396,"do_deq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+390,"R0_addr", false,-1);
    tracep->declBit(c+40409,"R0_en", false,-1);
    tracep->declBit(c+40355,"R0_clk", false,-1);
    tracep->declBit(c+389,"W0_addr", false,-1);
    tracep->declBit(c+395,"W0_en", false,-1);
    tracep->declBit(c+40355,"W0_clk", false,-1);
    tracep->declArray(c+397,"W0_data", false,-1, 117,0);
    tracep->declArray(c+401,"R0_data", false,-1, 117,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declArray(c+405+i*4,"Memory", true,(i+0), 117,0);
    }
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("buffer_1 ");
    tracep->declBit(c+40355,"clock", false,-1);
    tracep->declBit(c+40356,"reset", false,-1);
    tracep->declBit(c+192,"auto_in_a_valid", false,-1);
    tracep->declBus(c+193,"auto_in_a_bits_opcode", false,-1, 2,0);
    tracep->declBus(c+194,"auto_in_a_bits_size", false,-1, 3,0);
    tracep->declBus(c+195,"auto_in_a_bits_address", false,-1, 31,0);
    tracep->declBus(c+196,"auto_in_a_bits_mask", false,-1, 7,0);
    tracep->declQuad(c+197,"auto_in_a_bits_data", false,-1, 63,0);
    tracep->declBit(c+199,"auto_in_d_ready", false,-1);
    tracep->declBit(c+413,"auto_out_a_ready", false,-1);
    tracep->declBit(c+414,"auto_out_d_valid", false,-1);
    tracep->declBus(c+415,"auto_out_d_bits_opcode", false,-1, 2,0);
    tracep->declBus(c+416,"auto_out_d_bits_param", false,-1, 1,0);
    tracep->declBus(c+417,"auto_out_d_bits_size", false,-1, 3,0);
    tracep->declBit(c+418,"auto_out_d_bits_source", false,-1);
    tracep->declBus(c+419,"auto_out_d_bits_sink", false,-1, 3,0);
    tracep->declBit(c+420,"auto_out_d_bits_denied", false,-1);
    tracep->declQuad(c+238,"auto_out_d_bits_data", false,-1, 63,0);
    tracep->declBit(c+421,"auto_out_d_bits_corrupt", false,-1);
    tracep->declBit(c+188,"auto_in_a_ready", false,-1);
    tracep->declBit(c+189,"auto_in_d_valid", false,-1);
    tracep->declQuad(c+190,"auto_in_d_bits_data", false,-1, 63,0);
    tracep->declBit(c+422,"auto_out_a_valid", false,-1);
    tracep->declBus(c+423,"auto_out_a_bits_opcode", false,-1, 2,0);
    tracep->declBus(c+424,"auto_out_a_bits_param", false,-1, 2,0);
    tracep->declBus(c+425,"auto_out_a_bits_size", false,-1, 3,0);
    tracep->declBit(c+426,"auto_out_a_bits_source", false,-1);
    tracep->declBus(c+427,"auto_out_a_bits_address", false,-1, 31,0);
    tracep->declBus(c+428,"auto_out_a_bits_mask", false,-1, 7,0);
    tracep->declQuad(c+429,"auto_out_a_bits_data", false,-1, 63,0);
    tracep->declBit(c+431,"auto_out_a_bits_corrupt", false,-1);
    tracep->declBit(c+432,"auto_out_d_ready", false,-1);
    tracep->pushNamePrefix("bundleIn_0_d_q ");
    tracep->declBit(c+40355,"clock", false,-1);
    tracep->declBit(c+40356,"reset", false,-1);
    tracep->declBit(c+414,"io_enq_valid", false,-1);
    tracep->declBus(c+415,"io_enq_bits_opcode", false,-1, 2,0);
    tracep->declBus(c+416,"io_enq_bits_param", false,-1, 1,0);
    tracep->declBus(c+417,"io_enq_bits_size", false,-1, 3,0);
    tracep->declBit(c+418,"io_enq_bits_source", false,-1);
    tracep->declBus(c+419,"io_enq_bits_sink", false,-1, 3,0);
    tracep->declBit(c+420,"io_enq_bits_denied", false,-1);
    tracep->declQuad(c+238,"io_enq_bits_data", false,-1, 63,0);
    tracep->declBit(c+421,"io_enq_bits_corrupt", false,-1);
    tracep->declBit(c+199,"io_deq_ready", false,-1);
    tracep->declBit(c+432,"io_enq_ready", false,-1);
    tracep->declBit(c+189,"io_deq_valid", false,-1);
    tracep->declBus(c+433,"io_deq_bits_opcode", false,-1, 2,0);
    tracep->declBus(c+434,"io_deq_bits_param", false,-1, 1,0);
    tracep->declBus(c+435,"io_deq_bits_size", false,-1, 3,0);
    tracep->declBit(c+436,"io_deq_bits_source", false,-1);
    tracep->declBus(c+437,"io_deq_bits_sink", false,-1, 3,0);
    tracep->declBit(c+438,"io_deq_bits_denied", false,-1);
    tracep->declQuad(c+190,"io_deq_bits_data", false,-1, 63,0);
    tracep->declBit(c+439,"io_deq_bits_corrupt", false,-1);
    tracep->declBit(c+440,"enq_ptr_value", false,-1);
    tracep->declBit(c+441,"deq_ptr_value", false,-1);
    tracep->declBit(c+442,"maybe_full", false,-1);
    tracep->declBit(c+443,"ptr_match", false,-1);
    tracep->declBit(c+444,"empty", false,-1);
    tracep->declBit(c+445,"full", false,-1);
    tracep->declBit(c+446,"do_enq", false,-1);
    tracep->declBit(c+447,"do_deq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+441,"R0_addr", false,-1);
    tracep->declBit(c+40409,"R0_en", false,-1);
    tracep->declBit(c+40355,"R0_clk", false,-1);
    tracep->declBit(c+440,"W0_addr", false,-1);
    tracep->declBit(c+446,"W0_en", false,-1);
    tracep->declBit(c+40355,"W0_clk", false,-1);
    tracep->declArray(c+448,"W0_data", false,-1, 79,0);
    tracep->declArray(c+451,"R0_data", false,-1, 79,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declArray(c+454+i*3,"Memory", true,(i+0), 79,0);
    }
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("monitor ");
    tracep->declBit(c+40355,"clock", false,-1);
    tracep->declBit(c+40356,"reset", false,-1);
    tracep->declBit(c+188,"io_in_a_ready", false,-1);
    tracep->declBit(c+192,"io_in_a_valid", false,-1);
    tracep->declBus(c+193,"io_in_a_bits_opcode", false,-1, 2,0);
    tracep->declBus(c+194,"io_in_a_bits_size", false,-1, 3,0);
    tracep->declBus(c+195,"io_in_a_bits_address", false,-1, 31,0);
    tracep->declBus(c+196,"io_in_a_bits_mask", false,-1, 7,0);
    tracep->declBit(c+199,"io_in_d_ready", false,-1);
    tracep->declBit(c+189,"io_in_d_valid", false,-1);
    tracep->declBus(c+433,"io_in_d_bits_opcode", false,-1, 2,0);
    tracep->declBus(c+434,"io_in_d_bits_param", false,-1, 1,0);
    tracep->declBus(c+435,"io_in_d_bits_size", false,-1, 3,0);
    tracep->declBit(c+436,"io_in_d_bits_source", false,-1);
    tracep->declBus(c+437,"io_in_d_bits_sink", false,-1, 3,0);
    tracep->declBit(c+438,"io_in_d_bits_denied", false,-1);
    tracep->declBit(c+439,"io_in_d_bits_corrupt", false,-1);
    tracep->declBus(c+460,"a_first_counter", false,-1, 8,0);
    tracep->declBus(c+461,"opcode", false,-1, 2,0);
    tracep->declBus(c+462,"param", false,-1, 2,0);
    tracep->declBus(c+463,"size", false,-1, 3,0);
    tracep->declBit(c+464,"source", false,-1);
    tracep->declBus(c+465,"address", false,-1, 31,0);
    tracep->declBus(c+466,"d_first_counter", false,-1, 8,0);
    tracep->declBus(c+467,"opcode_1", false,-1, 2,0);
    tracep->declBus(c+468,"param_1", false,-1, 1,0);
    tracep->declBus(c+469,"size_1", false,-1, 3,0);
    tracep->declBit(c+470,"source_1", false,-1);
    tracep->declBus(c+471,"sink", false,-1, 3,0);
    tracep->declBit(c+472,"denied", false,-1);
    tracep->declBit(c+473,"inflight", false,-1);
    tracep->declBus(c+474,"inflight_opcodes", false,-1, 3,0);
    tracep->declBus(c+475,"inflight_sizes", false,-1, 7,0);
    tracep->declBus(c+476,"a_first_counter_1", false,-1, 8,0);
    tracep->declBit(c+477,"a_first_1", false,-1);
    tracep->declBus(c+478,"d_first_counter_1", false,-1, 8,0);
    tracep->declBit(c+479,"d_first_1", false,-1);
    tracep->declBit(c+480,"a_set", false,-1);
    tracep->declBit(c+481,"d_release_ack", false,-1);
    tracep->declBus(c+482,"watchdog", false,-1, 31,0);
    tracep->declBus(c+483,"d_first_counter_2", false,-1, 8,0);
    tracep->declBit(c+484,"d_first_2", false,-1);
    tracep->declBit(c+485,"mask_size", false,-1);
    tracep->declBit(c+486,"mask_acc", false,-1);
    tracep->declBit(c+487,"mask_acc_1", false,-1);
    tracep->declBit(c+488,"mask_size_1", false,-1);
    tracep->declBit(c+489,"mask_eq_2", false,-1);
    tracep->declBit(c+490,"mask_acc_2", false,-1);
    tracep->declBit(c+491,"mask_eq_3", false,-1);
    tracep->declBit(c+492,"mask_acc_3", false,-1);
    tracep->declBit(c+493,"mask_eq_4", false,-1);
    tracep->declBit(c+494,"mask_acc_4", false,-1);
    tracep->declBit(c+495,"mask_eq_5", false,-1);
    tracep->declBit(c+496,"mask_acc_5", false,-1);
    tracep->declBus(c+497,"mask", false,-1, 7,0);
    tracep->declBit(c+498,"a_set_wo_ready", false,-1);
    tracep->declBit(c+499,"same_cycle_resp", false,-1);
    tracep->pushNamePrefix("plusarg_reader_1 ");
    tracep->declArray(c+40414,"FORMAT", false,-1, 151,0);
    tracep->declBus(c+40419,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+40420,"DEFAULT", false,-1, 31,0);
    tracep->declBus(c+153,"out", false,-1, 31,0);
    tracep->declBus(c+153,"myplus", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("plusarg_reader_TestHarness_UNIQUIFIED ");
    tracep->declArray(c+40414,"FORMAT", false,-1, 151,0);
    tracep->declBus(c+40419,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+40420,"DEFAULT", false,-1, 31,0);
    tracep->declBus(c+154,"out", false,-1, 31,0);
    tracep->declBus(c+154,"myplus", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("x1_a_q ");
    tracep->declBit(c+40355,"clock", false,-1);
    tracep->declBit(c+40356,"reset", false,-1);
    tracep->declBit(c+192,"io_enq_valid", false,-1);
    tracep->declBus(c+193,"io_enq_bits_opcode", false,-1, 2,0);
    tracep->declBus(c+40425,"io_enq_bits_param", false,-1, 2,0);
    tracep->declBus(c+194,"io_enq_bits_size", false,-1, 3,0);
    tracep->declBit(c+40413,"io_enq_bits_source", false,-1);
    tracep->declBus(c+195,"io_enq_bits_address", false,-1, 31,0);
    tracep->declBus(c+196,"io_enq_bits_mask", false,-1, 7,0);
    tracep->declQuad(c+197,"io_enq_bits_data", false,-1, 63,0);
    tracep->declBit(c+40413,"io_enq_bits_corrupt", false,-1);
    tracep->declBit(c+413,"io_deq_ready", false,-1);
    tracep->declBit(c+188,"io_enq_ready", false,-1);
    tracep->declBit(c+422,"io_deq_valid", false,-1);
    tracep->declBus(c+423,"io_deq_bits_opcode", false,-1, 2,0);
    tracep->declBus(c+424,"io_deq_bits_param", false,-1, 2,0);
    tracep->declBus(c+425,"io_deq_bits_size", false,-1, 3,0);
    tracep->declBit(c+426,"io_deq_bits_source", false,-1);
    tracep->declBus(c+427,"io_deq_bits_address", false,-1, 31,0);
    tracep->declBus(c+428,"io_deq_bits_mask", false,-1, 7,0);
    tracep->declQuad(c+429,"io_deq_bits_data", false,-1, 63,0);
    tracep->declBit(c+431,"io_deq_bits_corrupt", false,-1);
    tracep->declBit(c+500,"enq_ptr_value", false,-1);
    tracep->declBit(c+501,"deq_ptr_value", false,-1);
    tracep->declBit(c+502,"maybe_full", false,-1);
    tracep->declBit(c+503,"ptr_match", false,-1);
    tracep->declBit(c+504,"empty", false,-1);
    tracep->declBit(c+505,"full", false,-1);
    tracep->declBit(c+506,"do_enq", false,-1);
    tracep->declBit(c+507,"do_deq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+501,"R0_addr", false,-1);
    tracep->declBit(c+40409,"R0_en", false,-1);
    tracep->declBit(c+40355,"R0_clk", false,-1);
    tracep->declBit(c+500,"W0_addr", false,-1);
    tracep->declBit(c+506,"W0_en", false,-1);
    tracep->declBit(c+40355,"W0_clk", false,-1);
    tracep->declArray(c+508,"W0_data", false,-1, 115,0);
    tracep->declArray(c+512,"R0_data", false,-1, 115,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declArray(c+516+i*4,"Memory", true,(i+0), 115,0);
    }
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("fragmenter ");
    tracep->declBit(c+40355,"clock", false,-1);
    tracep->declBit(c+40356,"reset", false,-1);
    tracep->declBit(c+524,"auto_in_a_valid", false,-1);
    tracep->declBus(c+415,"auto_in_a_bits_opcode", false,-1, 2,0);
    tracep->declBus(c+525,"auto_in_a_bits_param", false,-1, 2,0);
    tracep->declBus(c+526,"auto_in_a_bits_size", false,-1, 2,0);
    tracep->declBus(c+527,"auto_in_a_bits_source", false,-1, 3,0);
    tracep->declBus(c+528,"auto_in_a_bits_address", false,-1, 28,0);
    tracep->declBus(c+529,"auto_in_a_bits_mask", false,-1, 7,0);
    tracep->declQuad(c+238,"auto_in_a_bits_data", false,-1, 63,0);
    tracep->declBit(c+421,"auto_in_a_bits_corrupt", false,-1);
    tracep->declBit(c+530,"auto_in_d_ready", false,-1);
    tracep->declBit(c+249,"auto_out_a_ready", false,-1);
    tracep->declBit(c+250,"auto_out_d_valid", false,-1);
    tracep->declBus(c+251,"auto_out_d_bits_opcode", false,-1, 2,0);
    tracep->declBus(c+252,"auto_out_d_bits_param", false,-1, 1,0);
    tracep->declBus(c+253,"auto_out_d_bits_size", false,-1, 1,0);
    tracep->declBus(c+254,"auto_out_d_bits_source", false,-1, 7,0);
    tracep->declBit(c+255,"auto_out_d_bits_sink", false,-1);
    tracep->declBit(c+256,"auto_out_d_bits_denied", false,-1);
    tracep->declQuad(c+257,"auto_out_d_bits_data", false,-1, 63,0);
    tracep->declBit(c+259,"auto_out_d_bits_corrupt", false,-1);
    tracep->declBit(c+531,"auto_in_a_ready", false,-1);
    tracep->declBit(c+532,"auto_in_d_valid", false,-1);
    tracep->declBus(c+251,"auto_in_d_bits_opcode", false,-1, 2,0);
    tracep->declBus(c+252,"auto_in_d_bits_param", false,-1, 1,0);
    tracep->declBus(c+533,"auto_in_d_bits_size", false,-1, 2,0);
    tracep->declBus(c+534,"auto_in_d_bits_source", false,-1, 3,0);
    tracep->declBit(c+255,"auto_in_d_bits_sink", false,-1);
    tracep->declBit(c+256,"auto_in_d_bits_denied", false,-1);
    tracep->declQuad(c+257,"auto_in_d_bits_data", false,-1, 63,0);
    tracep->declBit(c+259,"auto_in_d_bits_corrupt", false,-1);
    tracep->declBit(c+231,"auto_out_a_valid", false,-1);
    tracep->declBus(c+232,"auto_out_a_bits_opcode", false,-1, 2,0);
    tracep->declBus(c+233,"auto_out_a_bits_param", false,-1, 2,0);
    tracep->declBus(c+234,"auto_out_a_bits_size", false,-1, 1,0);
    tracep->declBus(c+235,"auto_out_a_bits_source", false,-1, 7,0);
    tracep->declBus(c+236,"auto_out_a_bits_address", false,-1, 28,0);
    tracep->declBus(c+237,"auto_out_a_bits_mask", false,-1, 7,0);
    tracep->declQuad(c+238,"auto_out_a_bits_data", false,-1, 63,0);
    tracep->declBit(c+240,"auto_out_a_bits_corrupt", false,-1);
    tracep->declBit(c+241,"auto_out_d_ready", false,-1);
    tracep->declBus(c+535,"acknum", false,-1, 2,0);
    tracep->declBus(c+536,"dOrig", false,-1, 2,0);
    tracep->declBit(c+537,"dToggle", false,-1);
    tracep->declBit(c+538,"dFirst", false,-1);
    tracep->declBus(c+539,"dFirst_size", false,-1, 2,0);
    tracep->declBit(c+540,"drop", false,-1);
    tracep->declBit(c+241,"x1_d_ready", false,-1);
    tracep->declBit(c+532,"bundleIn_0_d_valid", false,-1);
    tracep->declBus(c+533,"bundleIn_0_d_bits_size", false,-1, 2,0);
    tracep->declBus(c+541,"aFrag", false,-1, 2,0);
    tracep->declBus(c+542,"gennum", false,-1, 2,0);
    tracep->declBit(c+543,"aFirst", false,-1);
    tracep->declBus(c+544,"old_gennum1", false,-1, 2,0);
    tracep->declBit(c+545,"aToggle_r", false,-1);
    tracep->pushNamePrefix("monitor ");
    tracep->declBit(c+40355,"clock", false,-1);
    tracep->declBit(c+40356,"reset", false,-1);
    tracep->declBit(c+531,"io_in_a_ready", false,-1);
    tracep->declBit(c+524,"io_in_a_valid", false,-1);
    tracep->declBus(c+415,"io_in_a_bits_opcode", false,-1, 2,0);
    tracep->declBus(c+525,"io_in_a_bits_param", false,-1, 2,0);
    tracep->declBus(c+526,"io_in_a_bits_size", false,-1, 2,0);
    tracep->declBus(c+527,"io_in_a_bits_source", false,-1, 3,0);
    tracep->declBus(c+528,"io_in_a_bits_address", false,-1, 28,0);
    tracep->declBus(c+529,"io_in_a_bits_mask", false,-1, 7,0);
    tracep->declBit(c+421,"io_in_a_bits_corrupt", false,-1);
    tracep->declBit(c+530,"io_in_d_ready", false,-1);
    tracep->declBit(c+532,"io_in_d_valid", false,-1);
    tracep->declBus(c+251,"io_in_d_bits_opcode", false,-1, 2,0);
    tracep->declBus(c+252,"io_in_d_bits_param", false,-1, 1,0);
    tracep->declBus(c+533,"io_in_d_bits_size", false,-1, 2,0);
    tracep->declBus(c+534,"io_in_d_bits_source", false,-1, 3,0);
    tracep->declBit(c+255,"io_in_d_bits_sink", false,-1);
    tracep->declBit(c+256,"io_in_d_bits_denied", false,-1);
    tracep->declBit(c+259,"io_in_d_bits_corrupt", false,-1);
    tracep->declBus(c+546,"a_first_counter", false,-1, 2,0);
    tracep->declBus(c+547,"opcode", false,-1, 2,0);
    tracep->declBus(c+548,"param", false,-1, 2,0);
    tracep->declBus(c+549,"size", false,-1, 2,0);
    tracep->declBus(c+550,"source", false,-1, 3,0);
    tracep->declBus(c+551,"address", false,-1, 28,0);
    tracep->declBus(c+552,"d_first_counter", false,-1, 2,0);
    tracep->declBus(c+553,"opcode_1", false,-1, 2,0);
    tracep->declBus(c+554,"param_1", false,-1, 1,0);
    tracep->declBus(c+555,"size_1", false,-1, 2,0);
    tracep->declBus(c+556,"source_1", false,-1, 3,0);
    tracep->declBit(c+557,"sink", false,-1);
    tracep->declBit(c+558,"denied", false,-1);
    tracep->declBus(c+559,"inflight", false,-1, 15,0);
    tracep->declQuad(c+560,"inflight_opcodes", false,-1, 63,0);
    tracep->declQuad(c+562,"inflight_sizes", false,-1, 63,0);
    tracep->declBus(c+564,"a_first_counter_1", false,-1, 2,0);
    tracep->declBit(c+565,"a_first_1", false,-1);
    tracep->declBus(c+566,"d_first_counter_1", false,-1, 2,0);
    tracep->declBit(c+567,"d_first_1", false,-1);
    tracep->declBit(c+364,"d_release_ack", false,-1);
    tracep->declBus(c+568,"watchdog", false,-1, 31,0);
    tracep->declBus(c+569,"d_first_counter_2", false,-1, 2,0);
    tracep->declBit(c+570,"d_first_2", false,-1);
    tracep->declBit(c+571,"mask_size", false,-1);
    tracep->declBit(c+572,"mask_acc", false,-1);
    tracep->declBit(c+573,"mask_acc_1", false,-1);
    tracep->declBit(c+574,"mask_size_1", false,-1);
    tracep->declBit(c+575,"mask_eq_2", false,-1);
    tracep->declBit(c+576,"mask_acc_2", false,-1);
    tracep->declBit(c+577,"mask_eq_3", false,-1);
    tracep->declBit(c+578,"mask_acc_3", false,-1);
    tracep->declBit(c+579,"mask_eq_4", false,-1);
    tracep->declBit(c+580,"mask_acc_4", false,-1);
    tracep->declBit(c+581,"mask_eq_5", false,-1);
    tracep->declBit(c+582,"mask_acc_5", false,-1);
    tracep->declBus(c+583,"mask", false,-1, 7,0);
    tracep->declBus(c+584,"a_set_wo_ready", false,-1, 15,0);
    tracep->declBit(c+585,"same_cycle_resp", false,-1);
    tracep->pushNamePrefix("plusarg_reader_1 ");
    tracep->declArray(c+40414,"FORMAT", false,-1, 151,0);
    tracep->declBus(c+40419,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+40420,"DEFAULT", false,-1, 31,0);
    tracep->declBus(c+155,"out", false,-1, 31,0);
    tracep->declBus(c+155,"myplus", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("plusarg_reader_TestHarness_UNIQUIFIED ");
    tracep->declArray(c+40414,"FORMAT", false,-1, 151,0);
    tracep->declBus(c+40419,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+40420,"DEFAULT", false,-1, 31,0);
    tracep->declBus(c+156,"out", false,-1, 31,0);
    tracep->declBus(c+156,"myplus", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("repeater ");
    tracep->declBit(c+40355,"clock", false,-1);
    tracep->declBit(c+40356,"reset", false,-1);
    tracep->declBit(c+586,"io_repeat", false,-1);
    tracep->declBit(c+524,"io_enq_valid", false,-1);
    tracep->declBus(c+415,"io_enq_bits_opcode", false,-1, 2,0);
    tracep->declBus(c+525,"io_enq_bits_param", false,-1, 2,0);
    tracep->declBus(c+526,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+527,"io_enq_bits_source", false,-1, 3,0);
    tracep->declBus(c+528,"io_enq_bits_address", false,-1, 28,0);
    tracep->declBus(c+529,"io_enq_bits_mask", false,-1, 7,0);
    tracep->declBit(c+421,"io_enq_bits_corrupt", false,-1);
    tracep->declBit(c+249,"io_deq_ready", false,-1);
    tracep->declBit(c+587,"io_full", false,-1);
    tracep->declBit(c+531,"io_enq_ready", false,-1);
    tracep->declBit(c+231,"io_deq_valid", false,-1);
    tracep->declBus(c+232,"io_deq_bits_opcode", false,-1, 2,0);
    tracep->declBus(c+233,"io_deq_bits_param", false,-1, 2,0);
    tracep->declBus(c+588,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+589,"io_deq_bits_source", false,-1, 3,0);
    tracep->declBus(c+590,"io_deq_bits_address", false,-1, 28,0);
    tracep->declBus(c+591,"io_deq_bits_mask", false,-1, 7,0);
    tracep->declBit(c+240,"io_deq_bits_corrupt", false,-1);
    tracep->declBit(c+587,"full", false,-1);
    tracep->declBus(c+592,"saved_opcode", false,-1, 2,0);
    tracep->declBus(c+593,"saved_param", false,-1, 2,0);
    tracep->declBus(c+594,"saved_size", false,-1, 2,0);
    tracep->declBus(c+595,"saved_source", false,-1, 3,0);
    tracep->declBus(c+596,"saved_address", false,-1, 28,0);
    tracep->declBus(c+597,"saved_mask", false,-1, 7,0);
    tracep->declBit(c+598,"saved_corrupt", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("fragmenter_1 ");
    tracep->declBit(c+40355,"clock", false,-1);
    tracep->declBit(c+40356,"reset", false,-1);
    tracep->declBit(c+599,"auto_in_a_valid", false,-1);
    tracep->declBus(c+415,"auto_in_a_bits_opcode", false,-1, 2,0);
    tracep->declBus(c+525,"auto_in_a_bits_param", false,-1, 2,0);
    tracep->declBus(c+526,"auto_in_a_bits_size", false,-1, 2,0);
    tracep->declBus(c+527,"auto_in_a_bits_source", false,-1, 3,0);
    tracep->declBus(c+600,"auto_in_a_bits_address", false,-1, 17,0);
    tracep->declBus(c+529,"auto_in_a_bits_mask", false,-1, 7,0);
    tracep->declBit(c+421,"auto_in_a_bits_corrupt", false,-1);
    tracep->declBit(c+601,"auto_in_d_ready", false,-1);
    tracep->declBit(c+601,"auto_out_a_ready", false,-1);
    tracep->declBit(c+602,"auto_out_d_valid", false,-1);
    tracep->declBus(c+603,"auto_out_d_bits_size", false,-1, 1,0);
    tracep->declBus(c+604,"auto_out_d_bits_source", false,-1, 7,0);
    tracep->declQuad(c+605,"auto_out_d_bits_data", false,-1, 63,0);
    tracep->declBit(c+607,"auto_in_a_ready", false,-1);
    tracep->declBit(c+602,"auto_in_d_valid", false,-1);
    tracep->declBus(c+608,"auto_in_d_bits_size", false,-1, 2,0);
    tracep->declBus(c+609,"auto_in_d_bits_source", false,-1, 3,0);
    tracep->declQuad(c+605,"auto_in_d_bits_data", false,-1, 63,0);
}

VL_ATTR_COLD void VTestHarness___024root__trace_init_sub__TOP__19(VTestHarness___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root__trace_init_sub__TOP__19\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+602,"auto_out_a_valid", false,-1);
    tracep->declBus(c+610,"auto_out_a_bits_opcode", false,-1, 2,0);
    tracep->declBus(c+611,"auto_out_a_bits_param", false,-1, 2,0);
    tracep->declBus(c+603,"auto_out_a_bits_size", false,-1, 1,0);
    tracep->declBus(c+604,"auto_out_a_bits_source", false,-1, 7,0);
    tracep->declBus(c+612,"auto_out_a_bits_address", false,-1, 17,0);
    tracep->declBus(c+613,"auto_out_a_bits_mask", false,-1, 7,0);
    tracep->declBit(c+614,"auto_out_a_bits_corrupt", false,-1);
    tracep->declBit(c+601,"auto_out_d_ready", false,-1);
    tracep->declBus(c+615,"acknum", false,-1, 2,0);
    tracep->declBus(c+616,"dOrig", false,-1, 2,0);
    tracep->declBit(c+617,"dToggle", false,-1);
    tracep->declBit(c+618,"dFirst", false,-1);
    tracep->declBus(c+619,"dFirst_size", false,-1, 2,0);
    tracep->declBus(c+608,"bundleIn_0_d_bits_size", false,-1, 2,0);
    tracep->declBus(c+620,"aFrag", false,-1, 2,0);
    tracep->declBus(c+621,"gennum", false,-1, 2,0);
    tracep->declBit(c+622,"aFirst", false,-1);
    tracep->declBus(c+623,"old_gennum1", false,-1, 2,0);
    tracep->declBit(c+624,"aToggle_r", false,-1);
    tracep->pushNamePrefix("monitor ");
    tracep->declBit(c+40355,"clock", false,-1);
    tracep->declBit(c+40356,"reset", false,-1);
    tracep->declBit(c+607,"io_in_a_ready", false,-1);
    tracep->declBit(c+599,"io_in_a_valid", false,-1);
    tracep->declBus(c+415,"io_in_a_bits_opcode", false,-1, 2,0);
    tracep->declBus(c+525,"io_in_a_bits_param", false,-1, 2,0);
    tracep->declBus(c+526,"io_in_a_bits_size", false,-1, 2,0);
    tracep->declBus(c+527,"io_in_a_bits_source", false,-1, 3,0);
    tracep->declBus(c+600,"io_in_a_bits_address", false,-1, 17,0);
    tracep->declBus(c+529,"io_in_a_bits_mask", false,-1, 7,0);
    tracep->declBit(c+421,"io_in_a_bits_corrupt", false,-1);
    tracep->declBit(c+601,"io_in_d_ready", false,-1);
    tracep->declBit(c+602,"io_in_d_valid", false,-1);
    tracep->declBus(c+608,"io_in_d_bits_size", false,-1, 2,0);
    tracep->declBus(c+609,"io_in_d_bits_source", false,-1, 3,0);
    tracep->declBit(c+625,"a_first_done", false,-1);
    tracep->declBus(c+626,"d_first_counter", false,-1, 2,0);
    tracep->declBus(c+627,"opcode_1", false,-1, 2,0);
    tracep->declBus(c+628,"param_1", false,-1, 1,0);
    tracep->declBus(c+629,"size_1", false,-1, 2,0);
    tracep->declBus(c+630,"source_1", false,-1, 3,0);
    tracep->declBit(c+631,"sink", false,-1);
    tracep->declBit(c+632,"denied", false,-1);
    tracep->declBus(c+633,"inflight", false,-1, 15,0);
    tracep->declQuad(c+634,"inflight_opcodes", false,-1, 63,0);
    tracep->declQuad(c+636,"inflight_sizes", false,-1, 63,0);
    tracep->declBus(c+638,"d_first_counter_1", false,-1, 2,0);
    tracep->declBit(c+639,"d_first_1", false,-1);
    tracep->declBus(c+640,"watchdog", false,-1, 31,0);
    tracep->declBit(c+571,"mask_size", false,-1);
    tracep->declBit(c+641,"mask_acc", false,-1);
    tracep->declBit(c+642,"mask_acc_1", false,-1);
    tracep->declBit(c+574,"mask_size_1", false,-1);
    tracep->declBit(c+643,"mask_eq_2", false,-1);
    tracep->declBit(c+644,"mask_acc_2", false,-1);
    tracep->declBit(c+645,"mask_eq_3", false,-1);
    tracep->declBit(c+646,"mask_acc_3", false,-1);
    tracep->declBit(c+647,"mask_eq_4", false,-1);
    tracep->declBit(c+648,"mask_acc_4", false,-1);
    tracep->declBit(c+649,"mask_eq_5", false,-1);
    tracep->declBit(c+650,"mask_acc_5", false,-1);
    tracep->declBus(c+651,"mask", false,-1, 7,0);
    tracep->declBit(c+652,"same_cycle_resp", false,-1);
    tracep->pushNamePrefix("plusarg_reader_1 ");
    tracep->declArray(c+40414,"FORMAT", false,-1, 151,0);
    tracep->declBus(c+40419,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+40420,"DEFAULT", false,-1, 31,0);
    tracep->declBus(c+157,"out", false,-1, 31,0);
    tracep->declBus(c+157,"myplus", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("plusarg_reader_TestHarness_UNIQUIFIED ");
    tracep->declArray(c+40414,"FORMAT", false,-1, 151,0);
    tracep->declBus(c+40419,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+40420,"DEFAULT", false,-1, 31,0);
    tracep->declBus(c+158,"out", false,-1, 31,0);
    tracep->declBus(c+158,"myplus", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("repeater ");
    tracep->declBit(c+40355,"clock", false,-1);
    tracep->declBit(c+40356,"reset", false,-1);
    tracep->declBit(c+653,"io_repeat", false,-1);
    tracep->declBit(c+599,"io_enq_valid", false,-1);
    tracep->declBus(c+415,"io_enq_bits_opcode", false,-1, 2,0);
    tracep->declBus(c+525,"io_enq_bits_param", false,-1, 2,0);
    tracep->declBus(c+526,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+527,"io_enq_bits_source", false,-1, 3,0);
    tracep->declBus(c+600,"io_enq_bits_address", false,-1, 17,0);
    tracep->declBus(c+529,"io_enq_bits_mask", false,-1, 7,0);
    tracep->declBit(c+421,"io_enq_bits_corrupt", false,-1);
    tracep->declBit(c+601,"io_deq_ready", false,-1);
    tracep->declBit(c+654,"io_full", false,-1);
    tracep->declBit(c+607,"io_enq_ready", false,-1);
    tracep->declBit(c+602,"io_deq_valid", false,-1);
    tracep->declBus(c+610,"io_deq_bits_opcode", false,-1, 2,0);
    tracep->declBus(c+611,"io_deq_bits_param", false,-1, 2,0);
    tracep->declBus(c+655,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+656,"io_deq_bits_source", false,-1, 3,0);
    tracep->declBus(c+657,"io_deq_bits_address", false,-1, 17,0);
    tracep->declBus(c+658,"io_deq_bits_mask", false,-1, 7,0);
    tracep->declBit(c+614,"io_deq_bits_corrupt", false,-1);
    tracep->declBit(c+654,"full", false,-1);
    tracep->declBus(c+659,"saved_opcode", false,-1, 2,0);
    tracep->declBus(c+660,"saved_param", false,-1, 2,0);
    tracep->declBus(c+661,"saved_size", false,-1, 2,0);
    tracep->declBus(c+662,"saved_source", false,-1, 3,0);
    tracep->declBus(c+663,"saved_address", false,-1, 17,0);
    tracep->declBus(c+664,"saved_mask", false,-1, 7,0);
    tracep->declBit(c+665,"saved_corrupt", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("rom ");
    tracep->declBit(c+40355,"clock", false,-1);
    tracep->declBit(c+40356,"reset", false,-1);
    tracep->declBit(c+602,"auto_in_a_valid", false,-1);
    tracep->declBus(c+610,"auto_in_a_bits_opcode", false,-1, 2,0);
    tracep->declBus(c+611,"auto_in_a_bits_param", false,-1, 2,0);
    tracep->declBus(c+603,"auto_in_a_bits_size", false,-1, 1,0);
    tracep->declBus(c+604,"auto_in_a_bits_source", false,-1, 7,0);
    tracep->declBus(c+612,"auto_in_a_bits_address", false,-1, 17,0);
    tracep->declBus(c+613,"auto_in_a_bits_mask", false,-1, 7,0);
    tracep->declBit(c+614,"auto_in_a_bits_corrupt", false,-1);
    tracep->declBit(c+601,"auto_in_d_ready", false,-1);
    tracep->declBit(c+601,"auto_in_a_ready", false,-1);
    tracep->declBit(c+602,"auto_in_d_valid", false,-1);
    tracep->declBus(c+603,"auto_in_d_bits_size", false,-1, 1,0);
    tracep->declBus(c+604,"auto_in_d_bits_source", false,-1, 7,0);
    tracep->declQuad(c+605,"auto_in_d_bits_data", false,-1, 63,0);
    tracep->pushNamePrefix("monitor ");
    tracep->declBit(c+40355,"clock", false,-1);
    tracep->declBit(c+40356,"reset", false,-1);
    tracep->declBit(c+601,"io_in_a_ready", false,-1);
    tracep->declBit(c+602,"io_in_a_valid", false,-1);
    tracep->declBus(c+610,"io_in_a_bits_opcode", false,-1, 2,0);
    tracep->declBus(c+611,"io_in_a_bits_param", false,-1, 2,0);
    tracep->declBus(c+603,"io_in_a_bits_size", false,-1, 1,0);
    tracep->declBus(c+604,"io_in_a_bits_source", false,-1, 7,0);
    tracep->declBus(c+612,"io_in_a_bits_address", false,-1, 17,0);
    tracep->declBus(c+613,"io_in_a_bits_mask", false,-1, 7,0);
    tracep->declBit(c+614,"io_in_a_bits_corrupt", false,-1);
    tracep->declBit(c+601,"io_in_d_ready", false,-1);
    tracep->declBit(c+602,"io_in_d_valid", false,-1);
    tracep->declBus(c+603,"io_in_d_bits_size", false,-1, 1,0);
    tracep->declBus(c+604,"io_in_d_bits_source", false,-1, 7,0);
    tracep->declBit(c+666,"a_first_done", false,-1);
    tracep->declArray(c+667,"inflight", false,-1, 255,0);
    tracep->declArray(c+675,"inflight_opcodes", false,-1, 1023,0);
    tracep->declArray(c+707,"inflight_sizes", false,-1, 1023,0);
    tracep->declBus(c+739,"watchdog", false,-1, 31,0);
    tracep->declBit(c+740,"d_first_done", false,-1);
    tracep->declBit(c+741,"mask_size", false,-1);
    tracep->declBit(c+742,"mask_acc", false,-1);
    tracep->declBit(c+743,"mask_acc_1", false,-1);
    tracep->declBit(c+744,"mask_size_1", false,-1);
    tracep->declBit(c+745,"mask_eq_2", false,-1);
    tracep->declBit(c+746,"mask_acc_2", false,-1);
    tracep->declBit(c+747,"mask_eq_3", false,-1);
    tracep->declBit(c+748,"mask_acc_3", false,-1);
    tracep->declBit(c+749,"mask_eq_4", false,-1);
    tracep->declBit(c+750,"mask_acc_4", false,-1);
    tracep->declBit(c+751,"mask_eq_5", false,-1);
    tracep->declBit(c+752,"mask_acc_5", false,-1);
    tracep->declBus(c+753,"mask", false,-1, 7,0);
    tracep->declBit(c+602,"same_cycle_resp", false,-1);
    tracep->pushNamePrefix("plusarg_reader_1 ");
    tracep->declArray(c+40414,"FORMAT", false,-1, 151,0);
    tracep->declBus(c+40419,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+40420,"DEFAULT", false,-1, 31,0);
    tracep->declBus(c+159,"out", false,-1, 31,0);
    tracep->declBus(c+159,"myplus", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("plusarg_reader_TestHarness_UNIQUIFIED ");
    tracep->declArray(c+40414,"FORMAT", false,-1, 151,0);
    tracep->declBus(c+40419,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+40420,"DEFAULT", false,-1, 31,0);
    tracep->declBus(c+160,"out", false,-1, 31,0);
    tracep->declBus(c+160,"myplus", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("serdesser ");
    tracep->declBit(c+40355,"clock", false,-1);
    tracep->declBit(c+40356,"reset", false,-1);
    tracep->declBit(c+422,"auto_manager_in_a_valid", false,-1);
    tracep->declBus(c+423,"auto_manager_in_a_bits_opcode", false,-1, 2,0);
    tracep->declBus(c+424,"auto_manager_in_a_bits_param", false,-1, 2,0);
    tracep->declBus(c+425,"auto_manager_in_a_bits_size", false,-1, 3,0);
    tracep->declBit(c+426,"auto_manager_in_a_bits_source", false,-1);
    tracep->declBus(c+427,"auto_manager_in_a_bits_address", false,-1, 31,0);
    tracep->declBus(c+428,"auto_manager_in_a_bits_mask", false,-1, 7,0);
    tracep->declQuad(c+429,"auto_manager_in_a_bits_data", false,-1, 63,0);
    tracep->declBit(c+431,"auto_manager_in_a_bits_corrupt", false,-1);
    tracep->declBit(c+432,"auto_manager_in_d_ready", false,-1);
    tracep->declBit(c+754,"auto_client_out_a_ready", false,-1);
    tracep->declBit(c+755,"auto_client_out_d_valid", false,-1);
    tracep->declBus(c+756,"auto_client_out_d_bits_opcode", false,-1, 2,0);
    tracep->declBus(c+757,"auto_client_out_d_bits_param", false,-1, 1,0);
    tracep->declBus(c+758,"auto_client_out_d_bits_size", false,-1, 2,0);
    tracep->declBus(c+759,"auto_client_out_d_bits_source", false,-1, 3,0);
    tracep->declBit(c+760,"auto_client_out_d_bits_sink", false,-1);
    tracep->declBit(c+761,"auto_client_out_d_bits_denied", false,-1);
    tracep->declQuad(c+762,"auto_client_out_d_bits_data", false,-1, 63,0);
    tracep->declBit(c+764,"auto_client_out_d_bits_corrupt", false,-1);
    tracep->declBit(c+1179,"io_ser_in_valid", false,-1);
    tracep->declBus(c+180,"io_ser_in_bits", false,-1, 31,0);
    tracep->declBit(c+1157,"io_ser_out_ready", false,-1);
    tracep->declBit(c+413,"auto_manager_in_a_ready", false,-1);
    tracep->declBit(c+414,"auto_manager_in_d_valid", false,-1);
    tracep->declBus(c+415,"auto_manager_in_d_bits_opcode", false,-1, 2,0);
    tracep->declBus(c+416,"auto_manager_in_d_bits_param", false,-1, 1,0);
    tracep->declBus(c+417,"auto_manager_in_d_bits_size", false,-1, 3,0);
    tracep->declBit(c+418,"auto_manager_in_d_bits_source", false,-1);
    tracep->declBus(c+419,"auto_manager_in_d_bits_sink", false,-1, 3,0);
    tracep->declBit(c+420,"auto_manager_in_d_bits_denied", false,-1);
    tracep->declQuad(c+238,"auto_manager_in_d_bits_data", false,-1, 63,0);
    tracep->declBit(c+421,"auto_manager_in_d_bits_corrupt", false,-1);
    tracep->declBit(c+765,"auto_client_out_a_valid", false,-1);
    tracep->declBus(c+415,"auto_client_out_a_bits_opcode", false,-1, 2,0);
    tracep->declBus(c+525,"auto_client_out_a_bits_param", false,-1, 2,0);
    tracep->declBus(c+526,"auto_client_out_a_bits_size", false,-1, 2,0);
    tracep->declBus(c+527,"auto_client_out_a_bits_source", false,-1, 3,0);
    tracep->declBus(c+528,"auto_client_out_a_bits_address", false,-1, 28,0);
    tracep->declBus(c+529,"auto_client_out_a_bits_mask", false,-1, 7,0);
    tracep->declQuad(c+238,"auto_client_out_a_bits_data", false,-1, 63,0);
    tracep->declBit(c+421,"auto_client_out_a_bits_corrupt", false,-1);
    tracep->declBit(c+766,"auto_client_out_d_ready", false,-1);
    tracep->declBit(c+179,"io_ser_in_ready", false,-1);
    tracep->declBit(c+178,"io_ser_out_valid", false,-1);
    tracep->declBus(c+39210,"io_ser_out_bits", false,-1, 31,0);
    tracep->declBus(c+767,"merged_bits_last_counter_1", false,-1, 2,0);
    tracep->declBus(c+768,"merged_bits_last_counter_4", false,-1, 2,0);
    tracep->declBit(c+414,"manager_tl_d_valid", false,-1);
    tracep->pushNamePrefix("inDes ");
    tracep->declBit(c+40355,"clock", false,-1);
    tracep->declBit(c+40356,"reset", false,-1);
    tracep->declBit(c+1179,"io_in_valid", false,-1);
    tracep->declBus(c+180,"io_in_bits", false,-1, 31,0);
    tracep->declBit(c+769,"io_out_ready", false,-1);
    tracep->declBit(c+179,"io_in_ready", false,-1);
    tracep->declBit(c+770,"io_out_valid", false,-1);
    tracep->declBus(c+771,"io_out_bits_chanId", false,-1, 2,0);
    tracep->declBus(c+415,"io_out_bits_opcode", false,-1, 2,0);
    tracep->declBus(c+525,"io_out_bits_param", false,-1, 2,0);
    tracep->declBus(c+772,"io_out_bits_size", false,-1, 7,0);
    tracep->declBus(c+773,"io_out_bits_source", false,-1, 7,0);
    tracep->declQuad(c+774,"io_out_bits_address", false,-1, 63,0);
    tracep->declQuad(c+238,"io_out_bits_data", false,-1, 63,0);
    tracep->declBit(c+421,"io_out_bits_corrupt", false,-1);
    tracep->declBus(c+776,"io_out_bits_union", false,-1, 8,0);
    tracep->declBus(c+777,"data_0", false,-1, 31,0);
    tracep->declBus(c+778,"data_1", false,-1, 31,0);
    tracep->declBus(c+779,"data_2", false,-1, 31,0);
    tracep->declBus(c+780,"data_3", false,-1, 31,0);
    tracep->declBus(c+781,"data_4", false,-1, 31,0);
    tracep->declBus(c+782,"data_5", false,-1, 31,0);
    tracep->declBit(c+179,"receiving", false,-1);
    tracep->declBus(c+783,"recvCount", false,-1, 2,0);
    tracep->declBit(c+784,"wrap_wrap", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("monitor ");
    tracep->declBit(c+40355,"clock", false,-1);
    tracep->declBit(c+40356,"reset", false,-1);
    tracep->declBit(c+413,"io_in_a_ready", false,-1);
    tracep->declBit(c+422,"io_in_a_valid", false,-1);
    tracep->declBus(c+423,"io_in_a_bits_opcode", false,-1, 2,0);
    tracep->declBus(c+424,"io_in_a_bits_param", false,-1, 2,0);
    tracep->declBus(c+425,"io_in_a_bits_size", false,-1, 3,0);
    tracep->declBit(c+426,"io_in_a_bits_source", false,-1);
    tracep->declBus(c+427,"io_in_a_bits_address", false,-1, 31,0);
    tracep->declBus(c+428,"io_in_a_bits_mask", false,-1, 7,0);
    tracep->declBit(c+431,"io_in_a_bits_corrupt", false,-1);
    tracep->declBit(c+432,"io_in_d_ready", false,-1);
    tracep->declBit(c+414,"io_in_d_valid", false,-1);
    tracep->declBus(c+415,"io_in_d_bits_opcode", false,-1, 2,0);
    tracep->declBus(c+416,"io_in_d_bits_param", false,-1, 1,0);
    tracep->declBus(c+417,"io_in_d_bits_size", false,-1, 3,0);
    tracep->declBit(c+418,"io_in_d_bits_source", false,-1);
    tracep->declBus(c+419,"io_in_d_bits_sink", false,-1, 3,0);
    tracep->declBit(c+420,"io_in_d_bits_denied", false,-1);
    tracep->declBit(c+421,"io_in_d_bits_corrupt", false,-1);
    tracep->declBus(c+785,"a_first_counter", false,-1, 8,0);
    tracep->declBus(c+786,"opcode", false,-1, 2,0);
    tracep->declBus(c+787,"param", false,-1, 2,0);
    tracep->declBus(c+788,"size", false,-1, 3,0);
    tracep->declBit(c+789,"source", false,-1);
    tracep->declBus(c+790,"address", false,-1, 31,0);
    tracep->declBus(c+791,"d_first_counter", false,-1, 8,0);
    tracep->declBus(c+792,"opcode_1", false,-1, 2,0);
    tracep->declBus(c+793,"param_1", false,-1, 1,0);
    tracep->declBus(c+794,"size_1", false,-1, 3,0);
    tracep->declBit(c+795,"source_1", false,-1);
    tracep->declBus(c+796,"sink", false,-1, 3,0);
    tracep->declBit(c+797,"denied", false,-1);
    tracep->declBit(c+798,"inflight", false,-1);
    tracep->declBus(c+799,"inflight_opcodes", false,-1, 3,0);
    tracep->declBus(c+800,"inflight_sizes", false,-1, 7,0);
    tracep->declBus(c+801,"a_first_counter_1", false,-1, 8,0);
    tracep->declBit(c+802,"a_first_1", false,-1);
    tracep->declBus(c+803,"d_first_counter_1", false,-1, 8,0);
    tracep->declBit(c+804,"d_first_1", false,-1);
    tracep->declBit(c+805,"d_release_ack", false,-1);
    tracep->declBus(c+806,"watchdog", false,-1, 31,0);
    tracep->declBus(c+807,"d_first_counter_2", false,-1, 8,0);
    tracep->declBit(c+808,"d_first_2", false,-1);
    tracep->declBit(c+809,"mask_size", false,-1);
    tracep->declBit(c+810,"mask_acc", false,-1);
    tracep->declBit(c+811,"mask_acc_1", false,-1);
    tracep->declBit(c+812,"mask_size_1", false,-1);
    tracep->declBit(c+813,"mask_eq_2", false,-1);
    tracep->declBit(c+814,"mask_acc_2", false,-1);
    tracep->declBit(c+815,"mask_eq_3", false,-1);
    tracep->declBit(c+816,"mask_acc_3", false,-1);
    tracep->declBit(c+817,"mask_eq_4", false,-1);
    tracep->declBit(c+818,"mask_acc_4", false,-1);
    tracep->declBit(c+819,"mask_eq_5", false,-1);
    tracep->declBit(c+820,"mask_acc_5", false,-1);
    tracep->declBus(c+821,"mask", false,-1, 7,0);
    tracep->declBit(c+822,"a_set_wo_ready", false,-1);
    tracep->declBit(c+823,"same_cycle_resp", false,-1);
    tracep->pushNamePrefix("plusarg_reader_1 ");
    tracep->declArray(c+40414,"FORMAT", false,-1, 151,0);
    tracep->declBus(c+40419,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+40420,"DEFAULT", false,-1, 31,0);
    tracep->declBus(c+161,"out", false,-1, 31,0);
    tracep->declBus(c+161,"myplus", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("plusarg_reader_TestHarness_UNIQUIFIED ");
    tracep->declArray(c+40414,"FORMAT", false,-1, 151,0);
    tracep->declBus(c+40419,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+40420,"DEFAULT", false,-1, 31,0);
    tracep->declBus(c+162,"out", false,-1, 31,0);
    tracep->declBus(c+162,"myplus", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("outArb ");
    tracep->declBit(c+40355,"clock", false,-1);
    tracep->declBit(c+40356,"reset", false,-1);
    tracep->declBit(c+755,"io_in_1_valid", false,-1);
    tracep->declBus(c+756,"io_in_1_bits_opcode", false,-1, 2,0);
    tracep->declBus(c+824,"io_in_1_bits_param", false,-1, 2,0);
    tracep->declBus(c+825,"io_in_1_bits_size", false,-1, 7,0);
    tracep->declBus(c+826,"io_in_1_bits_source", false,-1, 7,0);
    tracep->declQuad(c+762,"io_in_1_bits_data", false,-1, 63,0);
    tracep->declBit(c+764,"io_in_1_bits_corrupt", false,-1);
    tracep->declBus(c+827,"io_in_1_bits_union", false,-1, 8,0);
    tracep->declBit(c+828,"io_in_1_bits_last", false,-1);
    tracep->declBit(c+422,"io_in_4_valid", false,-1);
    tracep->declBus(c+423,"io_in_4_bits_opcode", false,-1, 2,0);
    tracep->declBus(c+424,"io_in_4_bits_param", false,-1, 2,0);
    tracep->declBus(c+829,"io_in_4_bits_size", false,-1, 7,0);
    tracep->declBus(c+830,"io_in_4_bits_source", false,-1, 7,0);
    tracep->declQuad(c+831,"io_in_4_bits_address", false,-1, 63,0);
    tracep->declQuad(c+429,"io_in_4_bits_data", false,-1, 63,0);
    tracep->declBit(c+431,"io_in_4_bits_corrupt", false,-1);
    tracep->declBus(c+833,"io_in_4_bits_union", false,-1, 8,0);
    tracep->declBit(c+834,"io_in_4_bits_last", false,-1);
    tracep->declBit(c+835,"io_out_ready", false,-1);
    tracep->declBit(c+766,"io_in_1_ready", false,-1);
    tracep->declBit(c+413,"io_in_4_ready", false,-1);
    tracep->declBit(c+836,"io_out_valid", false,-1);
    tracep->declBus(c+837,"io_out_bits_chanId", false,-1, 2,0);
    tracep->declBus(c+838,"io_out_bits_opcode", false,-1, 2,0);
    tracep->declBus(c+839,"io_out_bits_param", false,-1, 2,0);
    tracep->declBus(c+840,"io_out_bits_size", false,-1, 7,0);
    tracep->declBus(c+841,"io_out_bits_source", false,-1, 7,0);
    tracep->declQuad(c+842,"io_out_bits_address", false,-1, 63,0);
    tracep->declQuad(c+844,"io_out_bits_data", false,-1, 63,0);
    tracep->declBit(c+846,"io_out_bits_corrupt", false,-1);
    tracep->declBus(c+847,"io_out_bits_union", false,-1, 8,0);
    tracep->declBit(c+848,"io_out_bits_last", false,-1);
    tracep->declBus(c+849,"lockIdx", false,-1, 2,0);
    tracep->declBit(c+850,"locked", false,-1);
    tracep->declBus(c+851,"chosen", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("outSer ");
    tracep->declBit(c+40355,"clock", false,-1);
    tracep->declBit(c+40356,"reset", false,-1);
    tracep->declBit(c+836,"io_in_valid", false,-1);
    tracep->declBus(c+837,"io_in_bits_chanId", false,-1, 2,0);
    tracep->declBus(c+838,"io_in_bits_opcode", false,-1, 2,0);
    tracep->declBus(c+839,"io_in_bits_param", false,-1, 2,0);
    tracep->declBus(c+840,"io_in_bits_size", false,-1, 7,0);
    tracep->declBus(c+841,"io_in_bits_source", false,-1, 7,0);
    tracep->declQuad(c+842,"io_in_bits_address", false,-1, 63,0);
    tracep->declQuad(c+844,"io_in_bits_data", false,-1, 63,0);
    tracep->declBit(c+846,"io_in_bits_corrupt", false,-1);
    tracep->declBus(c+847,"io_in_bits_union", false,-1, 8,0);
    tracep->declBit(c+848,"io_in_bits_last", false,-1);
    tracep->declBit(c+1157,"io_out_ready", false,-1);
    tracep->declBit(c+835,"io_in_ready", false,-1);
    tracep->declBit(c+178,"io_out_valid", false,-1);
    tracep->declBus(c+39210,"io_out_bits", false,-1, 31,0);
    tracep->declArray(c+39220,"data", false,-1, 163,0);
    tracep->declBit(c+178,"sending", false,-1);
    tracep->declBus(c+852,"sendCount", false,-1, 2,0);
    tracep->declBit(c+853,"wrap_wrap", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("srams ");
    tracep->declBit(c+40355,"clock", false,-1);
    tracep->declBit(c+40356,"reset", false,-1);
    tracep->declBit(c+260,"auto_in_a_valid", false,-1);
    tracep->declBus(c+261,"auto_in_a_bits_opcode", false,-1, 2,0);
    tracep->declBus(c+262,"auto_in_a_bits_param", false,-1, 2,0);
    tracep->declBus(c+263,"auto_in_a_bits_size", false,-1, 1,0);
    tracep->declBus(c+264,"auto_in_a_bits_source", false,-1, 7,0);
    tracep->declBus(c+265,"auto_in_a_bits_address", false,-1, 28,0);
    tracep->declBus(c+266,"auto_in_a_bits_mask", false,-1, 7,0);
    tracep->declQuad(c+267,"auto_in_a_bits_data", false,-1, 63,0);
    tracep->declBit(c+269,"auto_in_a_bits_corrupt", false,-1);
    tracep->declBit(c+270,"auto_in_d_ready", false,-1);
    tracep->declBit(c+242,"auto_in_a_ready", false,-1);
    tracep->declBit(c+243,"auto_in_d_valid", false,-1);
    tracep->declBus(c+244,"auto_in_d_bits_opcode", false,-1, 2,0);
    tracep->declBus(c+245,"auto_in_d_bits_size", false,-1, 1,0);
    tracep->declBus(c+246,"auto_in_d_bits_source", false,-1, 7,0);
    tracep->declQuad(c+247,"auto_in_d_bits_data", false,-1, 63,0);
    tracep->declBus(c+854,"r_raw_data_7", false,-1, 7,0);
    tracep->declBus(c+855,"r_raw_data_6", false,-1, 7,0);
    tracep->declBus(c+856,"r_raw_data_5", false,-1, 7,0);
    tracep->declBus(c+857,"r_raw_data_4", false,-1, 7,0);
    tracep->declBus(c+858,"r_raw_data_3", false,-1, 7,0);
    tracep->declBus(c+859,"r_raw_data_2", false,-1, 7,0);
    tracep->declBus(c+860,"r_raw_data_1", false,-1, 7,0);
    tracep->declBus(c+861,"r_raw_data_0", false,-1, 7,0);
    tracep->declBus(c+862,"coded_7", false,-1, 7,0);
    tracep->declBus(c+863,"coded_6", false,-1, 7,0);
    tracep->declBus(c+864,"coded_5", false,-1, 7,0);
    tracep->declBus(c+865,"coded_4", false,-1, 7,0);
    tracep->declBus(c+866,"coded_3", false,-1, 7,0);
    tracep->declBus(c+867,"coded_2", false,-1, 7,0);
    tracep->declBus(c+868,"coded_1", false,-1, 7,0);
    tracep->declBus(c+869,"coded_0", false,-1, 7,0);
    tracep->declBit(c+870,"mem_MPORT_en", false,-1);
    tracep->declBit(c+871,"mem_MPORT_1_en", false,-1);
    tracep->declBit(c+872,"d_full", false,-1);
    tracep->declBit(c+873,"d_respond", false,-1);
    tracep->declBus(c+874,"d_size", false,-1, 1,0);
    tracep->declBus(c+875,"d_source", false,-1, 7,0);
    tracep->declBit(c+876,"d_read", false,-1);
    tracep->declBit(c+877,"d_atomic", false,-1);
    tracep->declBit(c+878,"d_sublane", false,-1);
    tracep->declBus(c+879,"d_address", false,-1, 28,0);
    tracep->declBus(c+880,"d_mask", false,-1, 7,0);
    tracep->declQuad(c+881,"d_rmw_data", false,-1, 63,0);
    tracep->declBus(c+883,"d_raw_data_0", false,-1, 7,0);
    tracep->declBus(c+884,"d_raw_data_1", false,-1, 7,0);
    tracep->declBus(c+885,"d_raw_data_2", false,-1, 7,0);
    tracep->declBus(c+886,"d_raw_data_3", false,-1, 7,0);
    tracep->declBus(c+887,"d_raw_data_4", false,-1, 7,0);
    tracep->declBus(c+888,"d_raw_data_5", false,-1, 7,0);
    tracep->declBus(c+889,"d_raw_data_6", false,-1, 7,0);
    tracep->declBus(c+890,"d_raw_data_7", false,-1, 7,0);
    tracep->declBit(c+891,"r_full", false,-1);
    tracep->declBus(c+892,"r_size", false,-1, 1,0);
    tracep->declBus(c+893,"r_source", false,-1, 7,0);
    tracep->declBit(c+894,"r_read", false,-1);
    tracep->declBit(c+895,"r_atomic", false,-1);
    tracep->declBit(c+896,"r_sublane", false,-1);
    tracep->declBus(c+897,"r_address", false,-1, 28,0);
    tracep->declBus(c+898,"r_mask", false,-1, 7,0);
    tracep->declQuad(c+899,"r_rmw_data", false,-1, 63,0);
    tracep->declBit(c+901,"d_mux", false,-1);
    tracep->declBus(c+244,"in_d_bits_opcode", false,-1, 2,0);
    tracep->declBus(c+245,"in_d_bits_size", false,-1, 1,0);
    tracep->declBus(c+246,"in_d_bits_source", false,-1, 7,0);
    tracep->declBit(c+902,"d_wb", false,-1);
    tracep->declBit(c+243,"in_d_valid", false,-1);
    tracep->declBit(c+903,"d_ready", false,-1);
    tracep->declBit(c+904,"r_ready", false,-1);
    tracep->declBit(c+242,"in_a_ready", false,-1);
    tracep->declBit(c+905,"a_read", false,-1);
    tracep->declBit(c+906,"a_fire", false,-1);
    tracep->declBit(c+907,"REG", false,-1);
    tracep->declBus(c+908,"r_0", false,-1, 7,0);
    tracep->declBus(c+909,"r_1", false,-1, 7,0);
    tracep->declBus(c+910,"r_2", false,-1, 7,0);
    tracep->declBus(c+911,"r_3", false,-1, 7,0);
    tracep->declBus(c+912,"r_4", false,-1, 7,0);
    tracep->declBus(c+913,"r_5", false,-1, 7,0);
    tracep->declBus(c+914,"r_6", false,-1, 7,0);
    tracep->declBus(c+915,"r_7", false,-1, 7,0);
    tracep->pushNamePrefix("mem ");
    tracep->declBus(c+916,"RW0_addr", false,-1, 8,0);
    tracep->declBit(c+917,"RW0_en", false,-1);
    tracep->declBit(c+40355,"RW0_clk", false,-1);
    tracep->declBit(c+871,"RW0_wmode", false,-1);
    tracep->declQuad(c+918,"RW0_wdata", false,-1, 63,0);
    tracep->declBus(c+920,"RW0_wmask", false,-1, 7,0);
    tracep->declQuad(c+921,"RW0_rdata", false,-1, 63,0);
    tracep->pushNamePrefix("mem_1_ext ");
    tracep->declBus(c+916,"RW0_addr", false,-1, 8,0);
    tracep->declBit(c+40355,"RW0_clk", false,-1);
    tracep->declQuad(c+918,"RW0_wdata", false,-1, 63,0);
    tracep->declQuad(c+921,"RW0_rdata", false,-1, 63,0);
    tracep->declBit(c+917,"RW0_en", false,-1);
    tracep->declBit(c+871,"RW0_wmode", false,-1);
    tracep->declBus(c+920,"RW0_wmask", false,-1, 7,0);
    tracep->declBus(c+916,"mem_0_0_RW0_addr", false,-1, 8,0);
    tracep->declBit(c+40355,"mem_0_0_RW0_clk", false,-1);
    tracep->declBus(c+923,"mem_0_0_RW0_wdata", false,-1, 7,0);
    tracep->declBus(c+924,"mem_0_0_RW0_rdata", false,-1, 7,0);
    tracep->declBit(c+917,"mem_0_0_RW0_en", false,-1);
    tracep->declBit(c+871,"mem_0_0_RW0_wmode", false,-1);
    tracep->declBit(c+925,"mem_0_0_RW0_wmask", false,-1);
    tracep->declBus(c+916,"mem_0_1_RW0_addr", false,-1, 8,0);
    tracep->declBit(c+40355,"mem_0_1_RW0_clk", false,-1);
    tracep->declBus(c+926,"mem_0_1_RW0_wdata", false,-1, 7,0);
    tracep->declBus(c+927,"mem_0_1_RW0_rdata", false,-1, 7,0);
    tracep->declBit(c+917,"mem_0_1_RW0_en", false,-1);
    tracep->declBit(c+871,"mem_0_1_RW0_wmode", false,-1);
    tracep->declBit(c+928,"mem_0_1_RW0_wmask", false,-1);
    tracep->declBus(c+916,"mem_0_2_RW0_addr", false,-1, 8,0);
    tracep->declBit(c+40355,"mem_0_2_RW0_clk", false,-1);
    tracep->declBus(c+929,"mem_0_2_RW0_wdata", false,-1, 7,0);
    tracep->declBus(c+930,"mem_0_2_RW0_rdata", false,-1, 7,0);
    tracep->declBit(c+917,"mem_0_2_RW0_en", false,-1);
    tracep->declBit(c+871,"mem_0_2_RW0_wmode", false,-1);
    tracep->declBit(c+931,"mem_0_2_RW0_wmask", false,-1);
    tracep->declBus(c+916,"mem_0_3_RW0_addr", false,-1, 8,0);
    tracep->declBit(c+40355,"mem_0_3_RW0_clk", false,-1);
    tracep->declBus(c+932,"mem_0_3_RW0_wdata", false,-1, 7,0);
    tracep->declBus(c+933,"mem_0_3_RW0_rdata", false,-1, 7,0);
    tracep->declBit(c+917,"mem_0_3_RW0_en", false,-1);
    tracep->declBit(c+871,"mem_0_3_RW0_wmode", false,-1);
    tracep->declBit(c+934,"mem_0_3_RW0_wmask", false,-1);
    tracep->declBus(c+916,"mem_0_4_RW0_addr", false,-1, 8,0);
    tracep->declBit(c+40355,"mem_0_4_RW0_clk", false,-1);
    tracep->declBus(c+935,"mem_0_4_RW0_wdata", false,-1, 7,0);
    tracep->declBus(c+936,"mem_0_4_RW0_rdata", false,-1, 7,0);
    tracep->declBit(c+917,"mem_0_4_RW0_en", false,-1);
    tracep->declBit(c+871,"mem_0_4_RW0_wmode", false,-1);
    tracep->declBit(c+937,"mem_0_4_RW0_wmask", false,-1);
    tracep->declBus(c+916,"mem_0_5_RW0_addr", false,-1, 8,0);
    tracep->declBit(c+40355,"mem_0_5_RW0_clk", false,-1);
    tracep->declBus(c+938,"mem_0_5_RW0_wdata", false,-1, 7,0);
    tracep->declBus(c+939,"mem_0_5_RW0_rdata", false,-1, 7,0);
    tracep->declBit(c+917,"mem_0_5_RW0_en", false,-1);
    tracep->declBit(c+871,"mem_0_5_RW0_wmode", false,-1);
    tracep->declBit(c+940,"mem_0_5_RW0_wmask", false,-1);
    tracep->declBus(c+916,"mem_0_6_RW0_addr", false,-1, 8,0);
    tracep->declBit(c+40355,"mem_0_6_RW0_clk", false,-1);
    tracep->declBus(c+941,"mem_0_6_RW0_wdata", false,-1, 7,0);
    tracep->declBus(c+942,"mem_0_6_RW0_rdata", false,-1, 7,0);
    tracep->declBit(c+917,"mem_0_6_RW0_en", false,-1);
    tracep->declBit(c+871,"mem_0_6_RW0_wmode", false,-1);
    tracep->declBit(c+943,"mem_0_6_RW0_wmask", false,-1);
    tracep->declBus(c+916,"mem_0_7_RW0_addr", false,-1, 8,0);
    tracep->declBit(c+40355,"mem_0_7_RW0_clk", false,-1);
    tracep->declBus(c+944,"mem_0_7_RW0_wdata", false,-1, 7,0);
    tracep->declBus(c+945,"mem_0_7_RW0_rdata", false,-1, 7,0);
    tracep->declBit(c+917,"mem_0_7_RW0_en", false,-1);
    tracep->declBit(c+871,"mem_0_7_RW0_wmode", false,-1);
    tracep->declBit(c+946,"mem_0_7_RW0_wmask", false,-1);
    tracep->declBus(c+924,"RW0_rdata_0_0", false,-1, 7,0);
    tracep->declBus(c+927,"RW0_rdata_0_1", false,-1, 7,0);
    tracep->declBus(c+930,"RW0_rdata_0_2", false,-1, 7,0);
    tracep->declBus(c+933,"RW0_rdata_0_3", false,-1, 7,0);
    tracep->declBus(c+936,"RW0_rdata_0_4", false,-1, 7,0);
    tracep->declBus(c+939,"RW0_rdata_0_5", false,-1, 7,0);
    tracep->declBus(c+942,"RW0_rdata_0_6", false,-1, 7,0);
    tracep->declBus(c+945,"RW0_rdata_0_7", false,-1, 7,0);
    tracep->declQuad(c+947,"RW0_rdata_0", false,-1, 63,0);
    tracep->pushNamePrefix("mem_0_0 ");
    tracep->declBus(c+916,"RW0_addr", false,-1, 8,0);
    tracep->declBit(c+40355,"RW0_clk", false,-1);
    tracep->declBus(c+923,"RW0_wdata", false,-1, 7,0);
    tracep->declBus(c+924,"RW0_rdata", false,-1, 7,0);
    tracep->declBit(c+917,"RW0_en", false,-1);
    tracep->declBit(c+871,"RW0_wmode", false,-1);
    tracep->declBit(c+925,"RW0_wmask", false,-1);
    tracep->declBit(c+949,"ram_RW_0_r_en", false,-1);
    tracep->declBus(c+950,"ram_RW_0_r_addr", false,-1, 8,0);
    tracep->declBus(c+924,"ram_RW_0_r_data", false,-1, 7,0);
    tracep->declBus(c+923,"ram_RW_0_w_data", false,-1, 7,0);
    tracep->declBus(c+916,"ram_RW_0_w_addr", false,-1, 8,0);
    tracep->declBit(c+925,"ram_RW_0_w_mask", false,-1);
    tracep->declBit(c+951,"ram_RW_0_w_en", false,-1);
    tracep->declBit(c+949,"ram_RW_0_r_en_pipe_0", false,-1);
    tracep->declBus(c+950,"ram_RW_0_r_addr_pipe_0", false,-1, 8,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem_0_1 ");
    tracep->declBus(c+916,"RW0_addr", false,-1, 8,0);
    tracep->declBit(c+40355,"RW0_clk", false,-1);
    tracep->declBus(c+926,"RW0_wdata", false,-1, 7,0);
    tracep->declBus(c+927,"RW0_rdata", false,-1, 7,0);
    tracep->declBit(c+917,"RW0_en", false,-1);
    tracep->declBit(c+871,"RW0_wmode", false,-1);
    tracep->declBit(c+928,"RW0_wmask", false,-1);
    tracep->declBit(c+952,"ram_RW_0_r_en", false,-1);
    tracep->declBus(c+953,"ram_RW_0_r_addr", false,-1, 8,0);
    tracep->declBus(c+927,"ram_RW_0_r_data", false,-1, 7,0);
    tracep->declBus(c+926,"ram_RW_0_w_data", false,-1, 7,0);
    tracep->declBus(c+916,"ram_RW_0_w_addr", false,-1, 8,0);
    tracep->declBit(c+928,"ram_RW_0_w_mask", false,-1);
    tracep->declBit(c+951,"ram_RW_0_w_en", false,-1);
    tracep->declBit(c+952,"ram_RW_0_r_en_pipe_0", false,-1);
    tracep->declBus(c+953,"ram_RW_0_r_addr_pipe_0", false,-1, 8,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem_0_2 ");
    tracep->declBus(c+916,"RW0_addr", false,-1, 8,0);
    tracep->declBit(c+40355,"RW0_clk", false,-1);
    tracep->declBus(c+929,"RW0_wdata", false,-1, 7,0);
    tracep->declBus(c+930,"RW0_rdata", false,-1, 7,0);
    tracep->declBit(c+917,"RW0_en", false,-1);
    tracep->declBit(c+871,"RW0_wmode", false,-1);
    tracep->declBit(c+931,"RW0_wmask", false,-1);
    tracep->declBit(c+954,"ram_RW_0_r_en", false,-1);
    tracep->declBus(c+955,"ram_RW_0_r_addr", false,-1, 8,0);
    tracep->declBus(c+930,"ram_RW_0_r_data", false,-1, 7,0);
    tracep->declBus(c+929,"ram_RW_0_w_data", false,-1, 7,0);
    tracep->declBus(c+916,"ram_RW_0_w_addr", false,-1, 8,0);
    tracep->declBit(c+931,"ram_RW_0_w_mask", false,-1);
    tracep->declBit(c+951,"ram_RW_0_w_en", false,-1);
    tracep->declBit(c+954,"ram_RW_0_r_en_pipe_0", false,-1);
    tracep->declBus(c+955,"ram_RW_0_r_addr_pipe_0", false,-1, 8,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem_0_3 ");
    tracep->declBus(c+916,"RW0_addr", false,-1, 8,0);
    tracep->declBit(c+40355,"RW0_clk", false,-1);
    tracep->declBus(c+932,"RW0_wdata", false,-1, 7,0);
    tracep->declBus(c+933,"RW0_rdata", false,-1, 7,0);
    tracep->declBit(c+917,"RW0_en", false,-1);
    tracep->declBit(c+871,"RW0_wmode", false,-1);
    tracep->declBit(c+934,"RW0_wmask", false,-1);
    tracep->declBit(c+956,"ram_RW_0_r_en", false,-1);
    tracep->declBus(c+957,"ram_RW_0_r_addr", false,-1, 8,0);
    tracep->declBus(c+933,"ram_RW_0_r_data", false,-1, 7,0);
    tracep->declBus(c+932,"ram_RW_0_w_data", false,-1, 7,0);
    tracep->declBus(c+916,"ram_RW_0_w_addr", false,-1, 8,0);
    tracep->declBit(c+934,"ram_RW_0_w_mask", false,-1);
    tracep->declBit(c+951,"ram_RW_0_w_en", false,-1);
    tracep->declBit(c+956,"ram_RW_0_r_en_pipe_0", false,-1);
    tracep->declBus(c+957,"ram_RW_0_r_addr_pipe_0", false,-1, 8,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem_0_4 ");
    tracep->declBus(c+916,"RW0_addr", false,-1, 8,0);
    tracep->declBit(c+40355,"RW0_clk", false,-1);
    tracep->declBus(c+935,"RW0_wdata", false,-1, 7,0);
    tracep->declBus(c+936,"RW0_rdata", false,-1, 7,0);
    tracep->declBit(c+917,"RW0_en", false,-1);
    tracep->declBit(c+871,"RW0_wmode", false,-1);
    tracep->declBit(c+937,"RW0_wmask", false,-1);
    tracep->declBit(c+958,"ram_RW_0_r_en", false,-1);
    tracep->declBus(c+959,"ram_RW_0_r_addr", false,-1, 8,0);
    tracep->declBus(c+936,"ram_RW_0_r_data", false,-1, 7,0);
    tracep->declBus(c+935,"ram_RW_0_w_data", false,-1, 7,0);
    tracep->declBus(c+916,"ram_RW_0_w_addr", false,-1, 8,0);
    tracep->declBit(c+937,"ram_RW_0_w_mask", false,-1);
    tracep->declBit(c+951,"ram_RW_0_w_en", false,-1);
    tracep->declBit(c+958,"ram_RW_0_r_en_pipe_0", false,-1);
    tracep->declBus(c+959,"ram_RW_0_r_addr_pipe_0", false,-1, 8,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem_0_5 ");
    tracep->declBus(c+916,"RW0_addr", false,-1, 8,0);
    tracep->declBit(c+40355,"RW0_clk", false,-1);
    tracep->declBus(c+938,"RW0_wdata", false,-1, 7,0);
    tracep->declBus(c+939,"RW0_rdata", false,-1, 7,0);
    tracep->declBit(c+917,"RW0_en", false,-1);
    tracep->declBit(c+871,"RW0_wmode", false,-1);
    tracep->declBit(c+940,"RW0_wmask", false,-1);
    tracep->declBit(c+960,"ram_RW_0_r_en", false,-1);
    tracep->declBus(c+961,"ram_RW_0_r_addr", false,-1, 8,0);
    tracep->declBus(c+939,"ram_RW_0_r_data", false,-1, 7,0);
    tracep->declBus(c+938,"ram_RW_0_w_data", false,-1, 7,0);
    tracep->declBus(c+916,"ram_RW_0_w_addr", false,-1, 8,0);
    tracep->declBit(c+940,"ram_RW_0_w_mask", false,-1);
    tracep->declBit(c+951,"ram_RW_0_w_en", false,-1);
    tracep->declBit(c+960,"ram_RW_0_r_en_pipe_0", false,-1);
    tracep->declBus(c+961,"ram_RW_0_r_addr_pipe_0", false,-1, 8,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem_0_6 ");
    tracep->declBus(c+916,"RW0_addr", false,-1, 8,0);
    tracep->declBit(c+40355,"RW0_clk", false,-1);
    tracep->declBus(c+941,"RW0_wdata", false,-1, 7,0);
    tracep->declBus(c+942,"RW0_rdata", false,-1, 7,0);
    tracep->declBit(c+917,"RW0_en", false,-1);
    tracep->declBit(c+871,"RW0_wmode", false,-1);
    tracep->declBit(c+943,"RW0_wmask", false,-1);
    tracep->declBit(c+962,"ram_RW_0_r_en", false,-1);
    tracep->declBus(c+963,"ram_RW_0_r_addr", false,-1, 8,0);
    tracep->declBus(c+942,"ram_RW_0_r_data", false,-1, 7,0);
    tracep->declBus(c+941,"ram_RW_0_w_data", false,-1, 7,0);
    tracep->declBus(c+916,"ram_RW_0_w_addr", false,-1, 8,0);
    tracep->declBit(c+943,"ram_RW_0_w_mask", false,-1);
    tracep->declBit(c+951,"ram_RW_0_w_en", false,-1);
    tracep->declBit(c+962,"ram_RW_0_r_en_pipe_0", false,-1);
    tracep->declBus(c+963,"ram_RW_0_r_addr_pipe_0", false,-1, 8,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem_0_7 ");
    tracep->declBus(c+916,"RW0_addr", false,-1, 8,0);
    tracep->declBit(c+40355,"RW0_clk", false,-1);
    tracep->declBus(c+944,"RW0_wdata", false,-1, 7,0);
    tracep->declBus(c+945,"RW0_rdata", false,-1, 7,0);
    tracep->declBit(c+917,"RW0_en", false,-1);
    tracep->declBit(c+871,"RW0_wmode", false,-1);
    tracep->declBit(c+946,"RW0_wmask", false,-1);
    tracep->declBit(c+964,"ram_RW_0_r_en", false,-1);
    tracep->declBus(c+965,"ram_RW_0_r_addr", false,-1, 8,0);
    tracep->declBus(c+945,"ram_RW_0_r_data", false,-1, 7,0);
    tracep->declBus(c+944,"ram_RW_0_w_data", false,-1, 7,0);
    tracep->declBus(c+916,"ram_RW_0_w_addr", false,-1, 8,0);
    tracep->declBit(c+946,"ram_RW_0_w_mask", false,-1);
    tracep->declBit(c+951,"ram_RW_0_w_en", false,-1);
    tracep->declBit(c+964,"ram_RW_0_r_en_pipe_0", false,-1);
    tracep->declBus(c+965,"ram_RW_0_r_addr_pipe_0", false,-1, 8,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("monitor ");
    tracep->declBit(c+40355,"clock", false,-1);
    tracep->declBit(c+40356,"reset", false,-1);
    tracep->declBit(c+242,"io_in_a_ready", false,-1);
    tracep->declBit(c+260,"io_in_a_valid", false,-1);
    tracep->declBus(c+261,"io_in_a_bits_opcode", false,-1, 2,0);
    tracep->declBus(c+262,"io_in_a_bits_param", false,-1, 2,0);
    tracep->declBus(c+263,"io_in_a_bits_size", false,-1, 1,0);
    tracep->declBus(c+264,"io_in_a_bits_source", false,-1, 7,0);
    tracep->declBus(c+265,"io_in_a_bits_address", false,-1, 28,0);
    tracep->declBus(c+266,"io_in_a_bits_mask", false,-1, 7,0);
    tracep->declBit(c+269,"io_in_a_bits_corrupt", false,-1);
    tracep->declBit(c+270,"io_in_d_ready", false,-1);
    tracep->declBit(c+243,"io_in_d_valid", false,-1);
    tracep->declBus(c+244,"io_in_d_bits_opcode", false,-1, 2,0);
    tracep->declBus(c+245,"io_in_d_bits_size", false,-1, 1,0);
    tracep->declBus(c+246,"io_in_d_bits_source", false,-1, 7,0);
    tracep->declBit(c+966,"a_first_done", false,-1);
    tracep->declArray(c+967,"inflight", false,-1, 255,0);
    tracep->declArray(c+975,"inflight_opcodes", false,-1, 1023,0);
    tracep->declArray(c+1007,"inflight_sizes", false,-1, 1023,0);
    tracep->declBit(c+1039,"d_release_ack", false,-1);
    tracep->declBus(c+1040,"watchdog", false,-1, 31,0);
    tracep->declBit(c+1041,"d_first_done", false,-1);
    tracep->declBit(c+1042,"mask_size", false,-1);
    tracep->declBit(c+1043,"mask_acc", false,-1);
    tracep->declBit(c+1044,"mask_acc_1", false,-1);
    tracep->declBit(c+1045,"mask_size_1", false,-1);
    tracep->declBit(c+1046,"mask_eq_2", false,-1);
    tracep->declBit(c+1047,"mask_acc_2", false,-1);
    tracep->declBit(c+1048,"mask_eq_3", false,-1);
    tracep->declBit(c+1049,"mask_acc_3", false,-1);
    tracep->declBit(c+1050,"mask_eq_4", false,-1);
    tracep->declBit(c+1051,"mask_acc_4", false,-1);
    tracep->declBit(c+1052,"mask_eq_5", false,-1);
    tracep->declBit(c+1053,"mask_acc_5", false,-1);
    tracep->declBus(c+1054,"mask", false,-1, 7,0);
    tracep->declArray(c+1055,"a_set_wo_ready", false,-1, 255,0);
    tracep->declBit(c+1063,"same_cycle_resp", false,-1);
    tracep->pushNamePrefix("plusarg_reader_1 ");
    tracep->declArray(c+40414,"FORMAT", false,-1, 151,0);
    tracep->declBus(c+40419,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+40420,"DEFAULT", false,-1, 31,0);
    tracep->declBus(c+163,"out", false,-1, 31,0);
    tracep->declBus(c+163,"myplus", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("plusarg_reader_TestHarness_UNIQUIFIED ");
    tracep->declArray(c+40414,"FORMAT", false,-1, 151,0);
    tracep->declBus(c+40419,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+40420,"DEFAULT", false,-1, 31,0);
    tracep->declBus(c+164,"out", false,-1, 31,0);
    tracep->declBus(c+164,"myplus", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("xbar ");
    tracep->declBit(c+40355,"clock", false,-1);
    tracep->declBit(c+40356,"reset", false,-1);
    tracep->declBit(c+765,"auto_in_a_valid", false,-1);
    tracep->declBus(c+415,"auto_in_a_bits_opcode", false,-1, 2,0);
    tracep->declBus(c+525,"auto_in_a_bits_param", false,-1, 2,0);
    tracep->declBus(c+526,"auto_in_a_bits_size", false,-1, 2,0);
    tracep->declBus(c+527,"auto_in_a_bits_source", false,-1, 3,0);
    tracep->declBus(c+528,"auto_in_a_bits_address", false,-1, 28,0);
    tracep->declBus(c+529,"auto_in_a_bits_mask", false,-1, 7,0);
    tracep->declQuad(c+238,"auto_in_a_bits_data", false,-1, 63,0);
    tracep->declBit(c+421,"auto_in_a_bits_corrupt", false,-1);
    tracep->declBit(c+766,"auto_in_d_ready", false,-1);
    tracep->declBit(c+607,"auto_out_1_a_ready", false,-1);
    tracep->declBit(c+602,"auto_out_1_d_valid", false,-1);
    tracep->declBus(c+608,"auto_out_1_d_bits_size", false,-1, 2,0);
    tracep->declBus(c+609,"auto_out_1_d_bits_source", false,-1, 3,0);
    tracep->declQuad(c+605,"auto_out_1_d_bits_data", false,-1, 63,0);
    tracep->declBit(c+531,"auto_out_0_a_ready", false,-1);
    tracep->declBit(c+532,"auto_out_0_d_valid", false,-1);
    tracep->declBus(c+251,"auto_out_0_d_bits_opcode", false,-1, 2,0);
    tracep->declBus(c+252,"auto_out_0_d_bits_param", false,-1, 1,0);
    tracep->declBus(c+533,"auto_out_0_d_bits_size", false,-1, 2,0);
    tracep->declBus(c+534,"auto_out_0_d_bits_source", false,-1, 3,0);
    tracep->declBit(c+255,"auto_out_0_d_bits_sink", false,-1);
    tracep->declBit(c+256,"auto_out_0_d_bits_denied", false,-1);
    tracep->declQuad(c+257,"auto_out_0_d_bits_data", false,-1, 63,0);
    tracep->declBit(c+259,"auto_out_0_d_bits_corrupt", false,-1);
    tracep->declBit(c+754,"auto_in_a_ready", false,-1);
    tracep->declBit(c+755,"auto_in_d_valid", false,-1);
    tracep->declBus(c+756,"auto_in_d_bits_opcode", false,-1, 2,0);
    tracep->declBus(c+757,"auto_in_d_bits_param", false,-1, 1,0);
    tracep->declBus(c+758,"auto_in_d_bits_size", false,-1, 2,0);
    tracep->declBus(c+759,"auto_in_d_bits_source", false,-1, 3,0);
    tracep->declBit(c+760,"auto_in_d_bits_sink", false,-1);
    tracep->declBit(c+761,"auto_in_d_bits_denied", false,-1);
    tracep->declQuad(c+762,"auto_in_d_bits_data", false,-1, 63,0);
    tracep->declBit(c+764,"auto_in_d_bits_corrupt", false,-1);
    tracep->declBit(c+599,"auto_out_1_a_valid", false,-1);
    tracep->declBus(c+415,"auto_out_1_a_bits_opcode", false,-1, 2,0);
    tracep->declBus(c+525,"auto_out_1_a_bits_param", false,-1, 2,0);
    tracep->declBus(c+526,"auto_out_1_a_bits_size", false,-1, 2,0);
    tracep->declBus(c+527,"auto_out_1_a_bits_source", false,-1, 3,0);
    tracep->declBus(c+600,"auto_out_1_a_bits_address", false,-1, 17,0);
    tracep->declBus(c+529,"auto_out_1_a_bits_mask", false,-1, 7,0);
    tracep->declBit(c+421,"auto_out_1_a_bits_corrupt", false,-1);
    tracep->declBit(c+601,"auto_out_1_d_ready", false,-1);
    tracep->declBit(c+524,"auto_out_0_a_valid", false,-1);
    tracep->declBus(c+415,"auto_out_0_a_bits_opcode", false,-1, 2,0);
    tracep->declBus(c+525,"auto_out_0_a_bits_param", false,-1, 2,0);
    tracep->declBus(c+526,"auto_out_0_a_bits_size", false,-1, 2,0);
    tracep->declBus(c+527,"auto_out_0_a_bits_source", false,-1, 3,0);
    tracep->declBus(c+528,"auto_out_0_a_bits_address", false,-1, 28,0);
    tracep->declBus(c+529,"auto_out_0_a_bits_mask", false,-1, 7,0);
    tracep->declQuad(c+238,"auto_out_0_a_bits_data", false,-1, 63,0);
    tracep->declBit(c+421,"auto_out_0_a_bits_corrupt", false,-1);
    tracep->declBit(c+530,"auto_out_0_d_ready", false,-1);
    tracep->declBus(c+1064,"beatsLeft", false,-1, 2,0);
    tracep->declBit(c+1065,"idle", false,-1);
    tracep->declBus(c+1066,"readys_valid", false,-1, 1,0);
    tracep->declBus(c+1067,"readys_mask", false,-1, 1,0);
    tracep->declBus(c+1068,"readys_readys", false,-1, 1,0);
    tracep->declBit(c+1069,"earlyWinner_0", false,-1);
    tracep->declBit(c+1070,"earlyWinner_1", false,-1);
    tracep->declBit(c+1071,"state_0", false,-1);
    tracep->declBit(c+1072,"state_1", false,-1);
    tracep->declBit(c+1073,"muxStateEarly_0", false,-1);
    tracep->declBit(c+1074,"muxStateEarly_1", false,-1);
    tracep->declBit(c+755,"out_9_valid", false,-1);
    tracep->declBit(c+764,"out_9_bits_corrupt", false,-1);
    tracep->declBit(c+761,"out_9_bits_denied", false,-1);
    tracep->declBit(c+760,"out_9_bits_sink", false,-1);
    tracep->declBus(c+759,"out_9_bits_source", false,-1, 3,0);
    tracep->declBus(c+758,"out_9_bits_size", false,-1, 2,0);
    tracep->declBus(c+757,"out_9_bits_param", false,-1, 1,0);
    tracep->declBus(c+756,"out_9_bits_opcode", false,-1, 2,0);
    tracep->declBit(c+1075,"latch", false,-1);
    tracep->declBit(c+1076,"winnerQual_0", false,-1);
    tracep->declBit(c+1077,"winnerQual_1", false,-1);
    tracep->pushNamePrefix("monitor ");
    tracep->declBit(c+40355,"clock", false,-1);
    tracep->declBit(c+40356,"reset", false,-1);
    tracep->declBit(c+754,"io_in_a_ready", false,-1);
    tracep->declBit(c+765,"io_in_a_valid", false,-1);
    tracep->declBus(c+415,"io_in_a_bits_opcode", false,-1, 2,0);
    tracep->declBus(c+525,"io_in_a_bits_param", false,-1, 2,0);
    tracep->declBus(c+526,"io_in_a_bits_size", false,-1, 2,0);
    tracep->declBus(c+527,"io_in_a_bits_source", false,-1, 3,0);
    tracep->declBus(c+528,"io_in_a_bits_address", false,-1, 28,0);
    tracep->declBus(c+529,"io_in_a_bits_mask", false,-1, 7,0);
    tracep->declBit(c+421,"io_in_a_bits_corrupt", false,-1);
    tracep->declBit(c+766,"io_in_d_ready", false,-1);
    tracep->declBit(c+755,"io_in_d_valid", false,-1);
    tracep->declBus(c+756,"io_in_d_bits_opcode", false,-1, 2,0);
    tracep->declBus(c+757,"io_in_d_bits_param", false,-1, 1,0);
    tracep->declBus(c+758,"io_in_d_bits_size", false,-1, 2,0);
    tracep->declBus(c+759,"io_in_d_bits_source", false,-1, 3,0);
    tracep->declBit(c+760,"io_in_d_bits_sink", false,-1);
    tracep->declBit(c+761,"io_in_d_bits_denied", false,-1);
    tracep->declBit(c+764,"io_in_d_bits_corrupt", false,-1);
    tracep->declBus(c+1078,"a_first_counter", false,-1, 2,0);
    tracep->declBus(c+1079,"opcode", false,-1, 2,0);
    tracep->declBus(c+1080,"param", false,-1, 2,0);
    tracep->declBus(c+1081,"size", false,-1, 2,0);
    tracep->declBus(c+1082,"source", false,-1, 3,0);
    tracep->declBus(c+1083,"address", false,-1, 28,0);
    tracep->declBus(c+1084,"d_first_counter", false,-1, 2,0);
    tracep->declBus(c+1085,"opcode_1", false,-1, 2,0);
    tracep->declBus(c+1086,"param_1", false,-1, 1,0);
    tracep->declBus(c+1087,"size_1", false,-1, 2,0);
    tracep->declBus(c+1088,"source_1", false,-1, 3,0);
    tracep->declBit(c+1089,"sink", false,-1);
    tracep->declBit(c+1090,"denied", false,-1);
    tracep->declBus(c+1091,"inflight", false,-1, 15,0);
    tracep->declQuad(c+1092,"inflight_opcodes", false,-1, 63,0);
    tracep->declQuad(c+1094,"inflight_sizes", false,-1, 63,0);
    tracep->declBus(c+1096,"a_first_counter_1", false,-1, 2,0);
    tracep->declBit(c+1097,"a_first_1", false,-1);
    tracep->declBus(c+1098,"d_first_counter_1", false,-1, 2,0);
    tracep->declBit(c+1099,"d_first_1", false,-1);
    tracep->declBit(c+1100,"d_release_ack", false,-1);
    tracep->declBus(c+1101,"watchdog", false,-1, 31,0);
    tracep->declBus(c+1102,"d_first_counter_2", false,-1, 2,0);
    tracep->declBit(c+1103,"d_first_2", false,-1);
    tracep->declBit(c+571,"mask_size", false,-1);
    tracep->declBit(c+1104,"mask_acc", false,-1);
    tracep->declBit(c+1105,"mask_acc_1", false,-1);
    tracep->declBit(c+574,"mask_size_1", false,-1);
    tracep->declBit(c+1106,"mask_eq_2", false,-1);
    tracep->declBit(c+1107,"mask_acc_2", false,-1);
    tracep->declBit(c+1108,"mask_eq_3", false,-1);
    tracep->declBit(c+1109,"mask_acc_3", false,-1);
    tracep->declBit(c+1110,"mask_eq_4", false,-1);
    tracep->declBit(c+1111,"mask_acc_4", false,-1);
    tracep->declBit(c+1112,"mask_eq_5", false,-1);
    tracep->declBit(c+1113,"mask_acc_5", false,-1);
    tracep->declBus(c+1114,"mask", false,-1, 7,0);
    tracep->declBit(c+1115,"same_cycle_resp", false,-1);
    tracep->pushNamePrefix("plusarg_reader_1 ");
    tracep->declArray(c+40414,"FORMAT", false,-1, 151,0);
    tracep->declBus(c+40419,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+40420,"DEFAULT", false,-1, 31,0);
    tracep->declBus(c+165,"out", false,-1, 31,0);
    tracep->declBus(c+165,"myplus", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("plusarg_reader_TestHarness_UNIQUIFIED ");
    tracep->declArray(c+40414,"FORMAT", false,-1, 151,0);
    tracep->declBus(c+40419,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+40420,"DEFAULT", false,-1, 31,0);
    tracep->declBus(c+166,"out", false,-1, 31,0);
    tracep->declBus(c+166,"myplus", false,-1, 31,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("simdram ");
    tracep->declBus(c+40419,"ADDR_BITS", false,-1, 31,0);
    tracep->declBus(c+40495,"DATA_BITS", false,-1, 31,0);
    tracep->declBus(c+40496,"ID_BITS", false,-1, 31,0);
    tracep->declBus(c+40497,"MEM_SIZE", false,-1, 31,0);
    tracep->declBus(c+40495,"LINE_SIZE", false,-1, 31,0);
    tracep->declBus(c+40498,"WORD_SIZE", false,-1, 31,0);
    tracep->declBus(c+40499,"CLOCK_HZ", false,-1, 31,0);
    tracep->declBus(c+40498,"STRB_BITS", false,-1, 31,0);
    tracep->declBit(c+40360,"clock", false,-1);
    tracep->declBit(c+38429,"reset", false,-1);
    tracep->declBit(c+1340,"axi_aw_ready", false,-1);
    tracep->declBit(c+1352,"axi_aw_valid", false,-1);
    tracep->declBus(c+1354,"axi_aw_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1355,"axi_aw_bits_len", false,-1, 7,0);
    tracep->declBus(c+1356,"axi_aw_bits_size", false,-1, 2,0);
    tracep->declBus(c+1357,"axi_aw_bits_burst", false,-1, 1,0);
    tracep->declBit(c+1358,"axi_aw_bits_lock", false,-1);
    tracep->declBus(c+1359,"axi_aw_bits_cache", false,-1, 3,0);
    tracep->declBus(c+1360,"axi_aw_bits_prot", false,-1, 2,0);
    tracep->declBus(c+1361,"axi_aw_bits_qos", false,-1, 3,0);
    tracep->declBus(c+1353,"axi_aw_bits_id", false,-1, 3,0);
    tracep->declBit(c+1341,"axi_w_ready", false,-1);
    tracep->declBit(c+1362,"axi_w_valid", false,-1);
    tracep->declQuad(c+1363,"axi_w_bits_data", false,-1, 63,0);
    tracep->declBit(c+1366,"axi_w_bits_last", false,-1);
    tracep->declBus(c+1365,"axi_w_bits_strb", false,-1, 7,0);
    tracep->declBit(c+1367,"axi_b_ready", false,-1);
    tracep->declBit(c+1342,"axi_b_valid", false,-1);
    tracep->declBus(c+1344,"axi_b_bits_resp", false,-1, 1,0);
    tracep->declBus(c+1343,"axi_b_bits_id", false,-1, 3,0);
    tracep->declBit(c+1345,"axi_ar_ready", false,-1);
    tracep->declBit(c+1368,"axi_ar_valid", false,-1);
    tracep->declBus(c+1354,"axi_ar_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1355,"axi_ar_bits_len", false,-1, 7,0);
    tracep->declBus(c+1356,"axi_ar_bits_size", false,-1, 2,0);
    tracep->declBus(c+1357,"axi_ar_bits_burst", false,-1, 1,0);
    tracep->declBit(c+1358,"axi_ar_bits_lock", false,-1);
    tracep->declBus(c+1359,"axi_ar_bits_cache", false,-1, 3,0);
    tracep->declBus(c+1360,"axi_ar_bits_prot", false,-1, 2,0);
    tracep->declBus(c+1361,"axi_ar_bits_qos", false,-1, 3,0);
    tracep->declBus(c+1353,"axi_ar_bits_id", false,-1, 3,0);
    tracep->declBit(c+1369,"axi_r_ready", false,-1);
    tracep->declBit(c+1346,"axi_r_valid", false,-1);
    tracep->declBus(c+1350,"axi_r_bits_resp", false,-1, 1,0);
    tracep->declQuad(c+1348,"axi_r_bits_data", false,-1, 63,0);
    tracep->declBit(c+1351,"axi_r_bits_last", false,-1);
    tracep->declBus(c+1347,"axi_r_bits_id", false,-1, 3,0);
    tracep->declBit(c+38266,"initialized", false,-1);
    tracep->declQuad(c+38267,"channel", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("success_exit_sim ");
    tracep->declBit(c+40355,"clock", false,-1);
    tracep->declBit(c+40356,"reset", false,-1);
    tracep->declBit(c+186,"serial_out_valid", false,-1);
    tracep->declBit(c+184,"serial_out_ready", false,-1);
    tracep->declBus(c+187,"serial_out_bits", false,-1, 31,0);
    tracep->declBit(c+182,"serial_in_valid", false,-1);
    tracep->declBit(c+185,"serial_in_ready", false,-1);
    tracep->declBus(c+183,"serial_in_bits", false,-1, 31,0);
    tracep->declBus(c+1116,"exit", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("uart_sim_0 ");
    tracep->declBit(c+40355,"clock", false,-1);
    tracep->declBit(c+40356,"reset", false,-1);
    tracep->declBit(c+1370,"io_uart_txd", false,-1);
    tracep->declBit(c+39219,"io_uart_rxd", false,-1);
    tracep->pushNamePrefix("rxm ");
    tracep->declBit(c+40355,"clock", false,-1);
    tracep->declBit(c+40356,"reset", false,-1);
    tracep->declBit(c+40409,"io_en", false,-1);
    tracep->declBit(c+39226,"io_in_valid", false,-1);
    tracep->declBus(c+39227,"io_in_bits", false,-1, 7,0);
    tracep->declBus(c+40500,"io_div", false,-1, 15,0);
    tracep->declBit(c+40413,"io_nstop", false,-1);
    tracep->declBit(c+1117,"io_in_ready", false,-1);
    tracep->declBit(c+39219,"io_out", false,-1);
    tracep->declBus(c+1118,"prescaler", false,-1, 15,0);
    tracep->declBus(c+1119,"counter", false,-1, 3,0);
    tracep->declBus(c+39228,"shifter", false,-1, 8,0);
    tracep->declBit(c+39219,"out", false,-1);
    tracep->declBit(c+1120,"pulse", false,-1);
    tracep->pushNamePrefix("plusarg_reader_1 ");
    tracep->declArray(c+40479,"FORMAT", false,-1, 135,0);
    tracep->declBus(c+40419,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+40478,"DEFAULT", false,-1, 31,0);
    tracep->declBus(c+167,"out", false,-1, 31,0);
    tracep->declBus(c+167,"myplus", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("plusarg_reader_TestHarness_UNIQUIFIED ");
    tracep->declArray(c+40475,"FORMAT", false,-1, 79,0);
    tracep->declBus(c+40419,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+40478,"DEFAULT", false,-1, 31,0);
    tracep->declBus(c+168,"out", false,-1, 31,0);
    tracep->declBus(c+168,"myplus", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("rxq ");
    tracep->declBit(c+40355,"clock", false,-1);
    tracep->declBit(c+40356,"reset", false,-1);
    tracep->declBit(c+1121,"io_enq_valid", false,-1);
    tracep->declBus(c+1122,"io_enq_bits", false,-1, 7,0);
    tracep->declBit(c+1117,"io_deq_ready", false,-1);
    tracep->declBit(c+39229,"io_enq_ready", false,-1);
    tracep->declBit(c+39226,"io_deq_valid", false,-1);
    tracep->declBus(c+39227,"io_deq_bits", false,-1, 7,0);
    tracep->declBus(c+40405,"io_count", false,-1, 3,0);
    tracep->declBus(c+1123,"enq_ptr_value", false,-1, 2,0);
    tracep->declBus(c+39230,"deq_ptr_value", false,-1, 2,0);
    tracep->declBit(c+1124,"maybe_full", false,-1);
    tracep->declBit(c+39231,"ptr_match", false,-1);
    tracep->declBit(c+39232,"empty", false,-1);
    tracep->declBit(c+39233,"full", false,-1);
    tracep->declBit(c+39234,"do_enq", false,-1);
    tracep->declBit(c+39235,"do_deq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBus(c+39230,"R0_addr", false,-1, 2,0);
    tracep->declBit(c+40409,"R0_en", false,-1);
    tracep->declBit(c+40355,"R0_clk", false,-1);
    tracep->declBus(c+1123,"W0_addr", false,-1, 2,0);
    tracep->declBit(c+39234,"W0_en", false,-1);
    tracep->declBit(c+40355,"W0_clk", false,-1);
    tracep->declBus(c+1122,"W0_data", false,-1, 7,0);
    tracep->declBus(c+39227,"R0_data", false,-1, 7,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+39236+i*1,"Memory", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("sim ");
    tracep->declBus(c+40411,"UARTNO", false,-1, 31,0);
    tracep->declBit(c+40355,"clock", false,-1);
    tracep->declBit(c+40356,"reset", false,-1);
    tracep->declBit(c+1125,"serial_out_valid", false,-1);
    tracep->declBit(c+1126,"serial_out_ready", false,-1);
    tracep->declBus(c+1127,"serial_out_bits", false,-1, 7,0);
    tracep->declBit(c+1121,"serial_in_valid", false,-1);
    tracep->declBit(c+40406,"serial_in_ready", false,-1);
    tracep->declBus(c+1122,"serial_in_bits", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("txm ");
    tracep->declBit(c+40355,"clock", false,-1);
    tracep->declBit(c+40356,"reset", false,-1);
    tracep->declBit(c+40409,"io_en", false,-1);
    tracep->declBit(c+1370,"io_in", false,-1);
    tracep->declBus(c+40500,"io_div", false,-1, 15,0);
    tracep->declBit(c+1128,"io_out_valid", false,-1);
    tracep->declBus(c+1129,"io_out_bits", false,-1, 7,0);
    tracep->declBus(c+1130,"debounce", false,-1, 1,0);
    tracep->declBus(c+1131,"prescaler", false,-1, 12,0);
    tracep->declBus(c+1132,"data_count", false,-1, 3,0);
    tracep->declBus(c+1133,"sample_count", false,-1, 3,0);
    tracep->declBus(c+1134,"sample", false,-1, 2,0);
    tracep->declBus(c+1129,"shifter", false,-1, 7,0);
    tracep->declBit(c+1128,"valid", false,-1);
    tracep->declBit(c+1135,"state", false,-1);
    tracep->declBit(c+1136,"pulse", false,-1);
    tracep->declBit(c+1137,"data_last", false,-1);
    tracep->declBit(c+1138,"sample_mid", false,-1);
    tracep->declBit(c+40407,"restore", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("txq ");
    tracep->declBit(c+40355,"clock", false,-1);
    tracep->declBit(c+40356,"reset", false,-1);
    tracep->declBit(c+1128,"io_enq_valid", false,-1);
    tracep->declBus(c+1129,"io_enq_bits", false,-1, 7,0);
    tracep->declBit(c+1126,"io_deq_ready", false,-1);
    tracep->declBit(c+1139,"io_enq_ready", false,-1);
    tracep->declBit(c+1125,"io_deq_valid", false,-1);
    tracep->declBus(c+1127,"io_deq_bits", false,-1, 7,0);
    tracep->declBus(c+1140,"io_count", false,-1, 3,0);
    tracep->declBus(c+1141,"enq_ptr_value", false,-1, 2,0);
    tracep->declBus(c+1142,"deq_ptr_value", false,-1, 2,0);
    tracep->declBit(c+1143,"maybe_full", false,-1);
    tracep->declBit(c+1144,"ptr_match", false,-1);
    tracep->declBit(c+1145,"empty", false,-1);
    tracep->declBit(c+1146,"full", false,-1);
    tracep->declBit(c+1147,"do_enq", false,-1);
    tracep->declBit(c+1148,"do_deq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBus(c+1142,"R0_addr", false,-1, 2,0);
    tracep->declBit(c+40409,"R0_en", false,-1);
    tracep->declBit(c+40355,"R0_clk", false,-1);
    tracep->declBus(c+1141,"W0_addr", false,-1, 2,0);
    tracep->declBit(c+1147,"W0_en", false,-1);
    tracep->declBit(c+40355,"W0_clk", false,-1);
    tracep->declBus(c+1129,"W0_data", false,-1, 7,0);
    tracep->declBus(c+1127,"R0_data", false,-1, 7,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+1149+i*1,"Memory", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void VTestHarness___024root__trace_init_sub__TOP__0(VTestHarness___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void VTestHarness___024root__trace_init_sub__TOP__1(VTestHarness___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void VTestHarness___024root__trace_init_sub__TOP__2(VTestHarness___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void VTestHarness___024root__trace_init_sub__TOP__3(VTestHarness___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void VTestHarness___024root__trace_init_sub__TOP__4(VTestHarness___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void VTestHarness___024root__trace_init_sub__TOP__5(VTestHarness___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void VTestHarness___024root__trace_init_sub__TOP__6(VTestHarness___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void VTestHarness___024root__trace_init_sub__TOP__7(VTestHarness___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void VTestHarness___024root__trace_init_sub__TOP__8(VTestHarness___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void VTestHarness___024root__trace_init_sub__TOP__9(VTestHarness___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void VTestHarness___024root__trace_init_sub__TOP__10(VTestHarness___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void VTestHarness___024root__trace_init_sub__TOP__11(VTestHarness___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void VTestHarness___024root__trace_init_sub__TOP__12(VTestHarness___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void VTestHarness___024root__trace_init_sub__TOP__13(VTestHarness___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void VTestHarness___024root__trace_init_sub__TOP__14(VTestHarness___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void VTestHarness___024root__trace_init_sub__TOP__15(VTestHarness___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void VTestHarness___024root__trace_init_sub__TOP__16(VTestHarness___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void VTestHarness___024root__trace_init_sub__TOP__17(VTestHarness___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VTestHarness___024root__trace_init_top(VTestHarness___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root__trace_init_top\n"); );
    // Body
    VTestHarness___024root__trace_init_sub__TOP__0(vlSelf, tracep);
    VTestHarness___024root__trace_init_sub__TOP__1(vlSelf, tracep);
    VTestHarness___024root__trace_init_sub__TOP__2(vlSelf, tracep);
    VTestHarness___024root__trace_init_sub__TOP__3(vlSelf, tracep);
    VTestHarness___024root__trace_init_sub__TOP__4(vlSelf, tracep);
    VTestHarness___024root__trace_init_sub__TOP__5(vlSelf, tracep);
    VTestHarness___024root__trace_init_sub__TOP__6(vlSelf, tracep);
    VTestHarness___024root__trace_init_sub__TOP__7(vlSelf, tracep);
    VTestHarness___024root__trace_init_sub__TOP__8(vlSelf, tracep);
    VTestHarness___024root__trace_init_sub__TOP__9(vlSelf, tracep);
    VTestHarness___024root__trace_init_sub__TOP__10(vlSelf, tracep);
    VTestHarness___024root__trace_init_sub__TOP__11(vlSelf, tracep);
    VTestHarness___024root__trace_init_sub__TOP__12(vlSelf, tracep);
    VTestHarness___024root__trace_init_sub__TOP__13(vlSelf, tracep);
    VTestHarness___024root__trace_init_sub__TOP__14(vlSelf, tracep);
    VTestHarness___024root__trace_init_sub__TOP__15(vlSelf, tracep);
    VTestHarness___024root__trace_init_sub__TOP__16(vlSelf, tracep);
    VTestHarness___024root__trace_init_sub__TOP__17(vlSelf, tracep);
    VTestHarness___024root__trace_init_sub__TOP__18(vlSelf, tracep);
    VTestHarness___024root__trace_init_sub__TOP__19(vlSelf, tracep);
}

VL_ATTR_COLD void VTestHarness___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VTestHarness___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VTestHarness___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VTestHarness___024root__trace_register(VTestHarness___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VTestHarness___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VTestHarness___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VTestHarness___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VTestHarness___024root__trace_full_sub_0(VTestHarness___024root* vlSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void VTestHarness___024root__trace_full_sub_1(VTestHarness___024root* vlSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void VTestHarness___024root__trace_full_sub_2(VTestHarness___024root* vlSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void VTestHarness___024root__trace_full_sub_3(VTestHarness___024root* vlSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void VTestHarness___024root__trace_full_sub_4(VTestHarness___024root* vlSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void VTestHarness___024root__trace_full_sub_5(VTestHarness___024root* vlSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void VTestHarness___024root__trace_full_sub_6(VTestHarness___024root* vlSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void VTestHarness___024root__trace_full_sub_7(VTestHarness___024root* vlSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void VTestHarness___024root__trace_full_sub_8(VTestHarness___024root* vlSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void VTestHarness___024root__trace_full_sub_9(VTestHarness___024root* vlSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void VTestHarness___024root__trace_full_sub_10(VTestHarness___024root* vlSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void VTestHarness___024root__trace_full_sub_11(VTestHarness___024root* vlSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void VTestHarness___024root__trace_full_sub_12(VTestHarness___024root* vlSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void VTestHarness___024root__trace_full_sub_13(VTestHarness___024root* vlSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void VTestHarness___024root__trace_full_sub_14(VTestHarness___024root* vlSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void VTestHarness___024root__trace_full_sub_15(VTestHarness___024root* vlSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void VTestHarness___024root__trace_full_sub_16(VTestHarness___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VTestHarness___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root__trace_full_top_0\n"); );
    // Init
    VTestHarness___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTestHarness___024root*>(voidSelf);
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VTestHarness___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
    VTestHarness___024root__trace_full_sub_1((&vlSymsp->TOP), bufp);
    VTestHarness___024root__trace_full_sub_2((&vlSymsp->TOP), bufp);
    VTestHarness___024root__trace_full_sub_3((&vlSymsp->TOP), bufp);
    VTestHarness___024root__trace_full_sub_4((&vlSymsp->TOP), bufp);
    VTestHarness___024root__trace_full_sub_5((&vlSymsp->TOP), bufp);
    VTestHarness___024root__trace_full_sub_6((&vlSymsp->TOP), bufp);
    VTestHarness___024root__trace_full_sub_7((&vlSymsp->TOP), bufp);
    VTestHarness___024root__trace_full_sub_8((&vlSymsp->TOP), bufp);
    VTestHarness___024root__trace_full_sub_9((&vlSymsp->TOP), bufp);
    VTestHarness___024root__trace_full_sub_10((&vlSymsp->TOP), bufp);
    VTestHarness___024root__trace_full_sub_11((&vlSymsp->TOP), bufp);
    VTestHarness___024root__trace_full_sub_12((&vlSymsp->TOP), bufp);
    VTestHarness___024root__trace_full_sub_13((&vlSymsp->TOP), bufp);
    VTestHarness___024root__trace_full_sub_14((&vlSymsp->TOP), bufp);
    VTestHarness___024root__trace_full_sub_15((&vlSymsp->TOP), bufp);
    VTestHarness___024root__trace_full_sub_16((&vlSymsp->TOP), bufp);
}

extern const VlWide<8>/*255:0*/ VTestHarness__ConstPool__CONST_h4e9f510d_0;
extern const VlWide<8>/*255:0*/ VTestHarness__ConstPool__CONST_h9e67c271_0;
extern const VlWide<8>/*255:0*/ VTestHarness__ConstPool__CONST_h0d530b5b_0;
extern const VlWide<8>/*255:0*/ VTestHarness__ConstPool__CONST_h4e4f723a_0;

VL_ATTR_COLD void VTestHarness___024root__trace_full_sub_0(VTestHarness___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<3>/*95:0*/ __Vtemp_hd38d9978__0;
    VlWide<3>/*95:0*/ __Vtemp_h218a928d__0;
    VlWide<3>/*95:0*/ __Vtemp_hed8ccb13__0;
    VlWide<8>/*255:0*/ __Vtemp_hffaea87a__0;
    VlWide<8>/*255:0*/ __Vtemp_ha0eee9e6__0;
    VlWide<8>/*255:0*/ __Vtemp_h0f122e09__0;
    VlWide<4>/*127:0*/ __Vtemp_h792a1006__0;
    VlWide<3>/*95:0*/ __Vtemp_hc75c6e10__0;
    VlWide<4>/*127:0*/ __Vtemp_h8bf500b0__0;
    VlWide<4>/*127:0*/ __Vtemp_h9edaa68e__0;
    VlWide<8>/*255:0*/ __Vtemp_h6dc3c392__0;
    VlWide<16>/*511:0*/ __Vtemp_hcda8551e__0;
    VlWide<8>/*255:0*/ __Vtemp_h1057784a__0;
    VlWide<16>/*511:0*/ __Vtemp_h11fbba22__0;
    VlWide<3>/*95:0*/ __Vtemp_h41b4f491__0;
    VlWide<8>/*255:0*/ __Vtemp_hab13b6e5__0;
    VlWide<8>/*255:0*/ __Vtemp_h2f0d85ba__0;
    VlWide<8>/*255:0*/ __Vtemp_h0a544f99__0;
    VlWide<3>/*95:0*/ __Vtemp_h9f650a6d__0;
    VlWide<4>/*127:0*/ __Vtemp_h649df5ac__0;
    VlWide<8>/*255:0*/ __Vtemp_h3f65b527__0;
    VlWide<16>/*511:0*/ __Vtemp_hf5b245dc__0;
    VlWide<8>/*255:0*/ __Vtemp_h80cfcf7c__0;
    VlWide<16>/*511:0*/ __Vtemp_h5b810b13__0;
    VlWide<3>/*95:0*/ __Vtemp_h83b8ff7e__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__0;
    VlWide<4>/*127:0*/ __Vtemp_h557ea57f__0;
    VlWide<4>/*127:0*/ __Vtemp_hbedf69c8__0;
    VlWide<3>/*95:0*/ __Vtemp_h237479eb__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__1;
    VlWide<4>/*127:0*/ __Vtemp_h8c58709f__0;
    VlWide<4>/*127:0*/ __Vtemp_h26823279__0;
    VlWide<3>/*95:0*/ __Vtemp_h8bb7d205__0;
    VlWide<4>/*127:0*/ __Vtemp_had263a02__0;
    VlWide<3>/*95:0*/ __Vtemp_h56c6a7bd__0;
    VlWide<3>/*95:0*/ __Vtemp_hc92888ee__0;
    VlWide<3>/*95:0*/ __Vtemp_hb2c720f9__9;
    VlWide<4>/*127:0*/ __Vtemp_h14e110c9__8;
    VlWide<3>/*95:0*/ __Vtemp_h3683c7c1__0;
    VlWide<3>/*95:0*/ __Vtemp_hcd24d8a3__0;
    VlWide<3>/*95:0*/ __Vtemp_h95b49b13__0;
    VlWide<4>/*127:0*/ __Vtemp_h353c8118__5;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__2;
    VlWide<4>/*127:0*/ __Vtemp_h5510ccc3__0;
    VlWide<4>/*127:0*/ __Vtemp_h233538e4__0;
    VlWide<3>/*95:0*/ __Vtemp_h77c799ec__0;
    VlWide<3>/*95:0*/ __Vtemp_hbc2b6362__0;
    VlWide<3>/*95:0*/ __Vtemp_h6b35b3c9__0;
    VlWide<3>/*95:0*/ __Vtemp_hd91b54ee__0;
    // Body
    bufp->fullBit(oldp+1,((1U & vlSelf->TestHarness__DOT__plusarg_reader_TestHarness_UNIQUIFIED__DOT__myplus)));
    bufp->fullIData(oldp+2,(vlSelf->TestHarness__DOT__SimJTAG__DOT__random_bits),32);
    bufp->fullBit(oldp+3,(vlSelf->TestHarness__DOT__plusarg_reader_1__DOT__myplus));
    bufp->fullIData(oldp+4,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__plusarg_reader__DOT__myplus),32);
    bufp->fullIData(oldp+5,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus),32);
    bufp->fullIData(oldp+6,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__plusarg_reader__DOT__myplus),32);
    bufp->fullIData(oldp+7,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus),32);
    bufp->fullIData(oldp+8,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__plusarg_reader__DOT__myplus),32);
    bufp->fullIData(oldp+9,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus),32);
    bufp->fullIData(oldp+10,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__monitor__DOT__plusarg_reader__DOT__myplus),32);
    bufp->fullIData(oldp+11,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus),32);
    bufp->fullIData(oldp+12,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileResetSetter__DOT__monitor__DOT__plusarg_reader__DOT__myplus),32);
    bufp->fullIData(oldp+13,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileResetSetter__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus),32);
    bufp->fullIData(oldp+14,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__monitor__DOT__plusarg_reader__DOT__myplus),32);
    bufp->fullIData(oldp+15,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus),32);
    bufp->fullIData(oldp+16,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__plusarg_reader__DOT__myplus),32);
    bufp->fullIData(oldp+17,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus),32);
    bufp->fullIData(oldp+18,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__plusarg_reader__DOT__myplus),32);
    bufp->fullIData(oldp+19,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus),32);
    bufp->fullIData(oldp+20,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__plusarg_reader__DOT__myplus),32);
    bufp->fullIData(oldp+21,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus),32);
    bufp->fullIData(oldp+22,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__plusarg_reader__DOT__myplus),32);
    bufp->fullIData(oldp+23,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus),32);
    bufp->fullIData(oldp+24,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__plusarg_reader__DOT__myplus),32);
    bufp->fullIData(oldp+25,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus),32);
    bufp->fullIData(oldp+26,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__plusarg_reader__DOT__myplus),32);
    bufp->fullIData(oldp+27,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus),32);
    bufp->fullIData(oldp+28,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__plusarg_reader__DOT__myplus),32);
    bufp->fullIData(oldp+29,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus),32);
    bufp->fullIData(oldp+30,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__plusarg_reader__DOT__myplus),32);
    bufp->fullIData(oldp+31,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus),32);
    bufp->fullIData(oldp+32,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__plusarg_reader__DOT__myplus),32);
    bufp->fullIData(oldp+33,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus),32);
    bufp->fullIData(oldp+34,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__monitor__DOT__plusarg_reader__DOT__myplus),32);
    bufp->fullIData(oldp+35,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus),32);
    bufp->fullIData(oldp+36,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__fragmenter__DOT__monitor__DOT__plusarg_reader__DOT__myplus),32);
    bufp->fullIData(oldp+37,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__fragmenter__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus),32);
    bufp->fullIData(oldp+38,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__monitor__DOT__plusarg_reader__DOT__myplus),32);
    bufp->fullIData(oldp+39,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus),32);
    bufp->fullIData(oldp+40,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__fragmenter__DOT__monitor__DOT__plusarg_reader__DOT__myplus),32);
    bufp->fullIData(oldp+41,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__fragmenter__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus),32);
    bufp->fullIData(oldp+42,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__plusarg_reader__DOT__myplus),32);
    bufp->fullIData(oldp+43,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus),32);
    bufp->fullIData(oldp+44,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__plusarg_reader__DOT__myplus),32);
    bufp->fullIData(oldp+45,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus),32);
    bufp->fullIData(oldp+46,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor_1__DOT__plusarg_reader__DOT__myplus),32);
    bufp->fullIData(oldp+47,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor_1__DOT__plusarg_reader_1__DOT__myplus),32);
    bufp->fullIData(oldp+48,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__plusarg_reader__DOT__myplus),32);
    bufp->fullIData(oldp+49,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus),32);
    bufp->fullIData(oldp+50,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__plusarg_reader__DOT__myplus),32);
    bufp->fullIData(oldp+51,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus),32);
    bufp->fullIData(oldp+52,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__plusarg_reader__DOT__myplus),32);
    bufp->fullIData(oldp+53,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus),32);
    bufp->fullIData(oldp+54,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_buffer__DOT__monitor__DOT__plusarg_reader__DOT__myplus),32);
    bufp->fullIData(oldp+55,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_buffer__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus),32);
    bufp->fullIData(oldp+56,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__monitor__DOT__plusarg_reader__DOT__myplus),32);
    bufp->fullIData(oldp+57,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus),32);
    bufp->fullIData(oldp+58,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__plusarg_reader__DOT__myplus),32);
    bufp->fullIData(oldp+59,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus),32);
    bufp->fullIData(oldp+60,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__plusarg_reader__DOT__myplus),32);
    bufp->fullIData(oldp+61,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus),32);
    bufp->fullIData(oldp+62,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT__plusarg_reader__DOT__myplus),32);
    bufp->fullIData(oldp+63,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus),32);
    bufp->fullIData(oldp+64,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__plusarg_reader__DOT__myplus),32);
    bufp->fullIData(oldp+65,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus),32);
    bufp->fullIData(oldp+66,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__plusarg_reader__DOT__myplus),32);
    bufp->fullIData(oldp+67,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__plusarg_reader_1__DOT__myplus),32);
    bufp->fullIData(oldp+68,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__plusarg_reader__DOT__myplus),32);
    bufp->fullIData(oldp+69,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus),32);
    bufp->fullIData(oldp+70,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__monitor__DOT__plusarg_reader__DOT__myplus),32);
    bufp->fullIData(oldp+71,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus),32);
    bufp->fullIData(oldp+72,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__plusarg_reader__DOT__myplus),32);
    bufp->fullIData(oldp+73,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus),32);
    bufp->fullIData(oldp+74,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor__DOT__plusarg_reader__DOT__myplus),32);
    bufp->fullIData(oldp+75,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus),32);
    bufp->fullIData(oldp+76,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__plusarg_reader__DOT__myplus),32);
    bufp->fullIData(oldp+77,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__plusarg_reader_1__DOT__myplus),32);
    bufp->fullIData(oldp+78,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__monitor__DOT__plusarg_reader__DOT__myplus),32);
    bufp->fullIData(oldp+79,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus),32);
    bufp->fullIData(oldp+80,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__plusarg_reader__DOT__myplus),32);
    bufp->fullIData(oldp+81,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus),32);
    bufp->fullIData(oldp+82,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__monitor__DOT__plusarg_reader__DOT__myplus),32);
    bufp->fullIData(oldp+83,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus),32);
    bufp->fullIData(oldp+84,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT__plusarg_reader__DOT__myplus),32);
    bufp->fullIData(oldp+85,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus),32);
    bufp->fullIData(oldp+86,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT__plusarg_reader__DOT__myplus),32);
    bufp->fullIData(oldp+87,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus),32);
    bufp->fullIData(oldp+88,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__plusarg_reader__DOT__myplus),32);
    bufp->fullIData(oldp+89,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus),32);
    bufp->fullIData(oldp+90,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT__plusarg_reader__DOT__myplus),32);
    bufp->fullIData(oldp+91,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus),32);
    bufp->fullIData(oldp+92,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__plusarg_reader__DOT__myplus),32);
    bufp->fullIData(oldp+93,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus),32);
    bufp->fullIData(oldp+94,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__plusarg_reader__DOT__myplus),32);
    bufp->fullIData(oldp+95,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus),32);
    bufp->fullIData(oldp+96,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__monitor__DOT__plusarg_reader__DOT__myplus),32);
    bufp->fullIData(oldp+97,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus),32);
    bufp->fullIData(oldp+98,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__plusarg_reader__DOT__myplus),32);
    bufp->fullIData(oldp+99,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus),32);
    bufp->fullIData(oldp+100,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor__DOT__plusarg_reader__DOT__myplus),32);
    bufp->fullIData(oldp+101,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus),32);
    bufp->fullIData(oldp+102,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_1__DOT__plusarg_reader__DOT__myplus),32);
    bufp->fullIData(oldp+103,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_1__DOT__plusarg_reader_1__DOT__myplus),32);
    bufp->fullIData(oldp+104,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_2__DOT__plusarg_reader__DOT__myplus),32);
    bufp->fullIData(oldp+105,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_2__DOT__plusarg_reader_1__DOT__myplus),32);
    bufp->fullIData(oldp+106,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor__DOT__plusarg_reader__DOT__myplus),32);
    bufp->fullIData(oldp+107,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus),32);
    bufp->fullIData(oldp+108,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__plusarg_reader__DOT__myplus),32);
    bufp->fullIData(oldp+109,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__plusarg_reader_1__DOT__myplus),32);
    bufp->fullIData(oldp+110,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__plusarg_reader__DOT__myplus),32);
    bufp->fullIData(oldp+111,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__plusarg_reader_1__DOT__myplus),32);
    bufp->fullIData(oldp+112,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT__plusarg_reader__DOT__myplus),32);
    bufp->fullIData(oldp+113,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus),32);
    bufp->fullIData(oldp+114,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor_1__DOT__plusarg_reader__DOT__myplus),32);
    bufp->fullIData(oldp+115,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor_1__DOT__plusarg_reader_1__DOT__myplus),32);
    bufp->fullIData(oldp+116,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__PlusArgTimeout__DOT__plusarg_reader__DOT__myplus),32);
    bufp->fullIData(oldp+117,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__plusarg_reader__DOT__myplus),32);
    bufp->fullIData(oldp+118,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer__DOT__monitor__DOT__plusarg_reader__DOT__myplus),32);
    bufp->fullIData(oldp+119,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus),32);
    bufp->fullIData(oldp+120,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__plusarg_reader__DOT__myplus),32);
    bufp->fullIData(oldp+121,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus),32);
    bufp->fullIData(oldp+122,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT__plusarg_reader__DOT__myplus),32);
    bufp->fullIData(oldp+123,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus),32);
    bufp->fullIData(oldp+124,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor__DOT__plusarg_reader__DOT__myplus),32);
    bufp->fullIData(oldp+125,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus),32);
    bufp->fullIData(oldp+126,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor_1__DOT__plusarg_reader__DOT__myplus),32);
    bufp->fullIData(oldp+127,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor_1__DOT__plusarg_reader_1__DOT__myplus),32);
    bufp->fullIData(oldp+128,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT__plusarg_reader__DOT__myplus),32);
    bufp->fullIData(oldp+129,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus),32);
    bufp->fullIData(oldp+130,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor_1__DOT__plusarg_reader__DOT__myplus),32);
    bufp->fullIData(oldp+131,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor_1__DOT__plusarg_reader_1__DOT__myplus),32);
    bufp->fullIData(oldp+132,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor__DOT__plusarg_reader__DOT__myplus),32);
    bufp->fullIData(oldp+133,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus),32);
    bufp->fullIData(oldp+134,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__plusarg_reader__DOT__myplus),32);
    bufp->fullIData(oldp+135,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__plusarg_reader_1__DOT__myplus),32);
    bufp->fullIData(oldp+136,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__plusarg_reader__DOT__myplus),32);
    bufp->fullIData(oldp+137,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus),32);
    bufp->fullIData(oldp+138,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__plusarg_reader__DOT__myplus),32);
    bufp->fullIData(oldp+139,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus),32);
    bufp->fullIData(oldp+140,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__plusarg_reader__DOT__myplus),32);
    bufp->fullIData(oldp+141,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus),32);
    bufp->fullIData(oldp+142,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__plusarg_reader__DOT__myplus),32);
    bufp->fullIData(oldp+143,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus),32);
    bufp->fullIData(oldp+144,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__plusarg_reader__DOT__myplus),32);
    bufp->fullIData(oldp+145,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus),32);
    bufp->fullIData(oldp+146,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__plusarg_reader__DOT__myplus),32);
    bufp->fullIData(oldp+147,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus),32);
    bufp->fullIData(oldp+148,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__txm__DOT__plusarg_reader__DOT__myplus),32);
    bufp->fullIData(oldp+149,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__txm__DOT__plusarg_reader_1__DOT__myplus),32);
    bufp->fullIData(oldp+150,(vlSelf->TestHarness__DOT__plusarg_reader_TestHarness_UNIQUIFIED__DOT__myplus),32);
    bufp->fullIData(oldp+151,(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus),32);
    bufp->fullIData(oldp+152,(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__plusarg_reader_TestHarness_UNIQUIFIED__DOT__myplus),32);
    bufp->fullIData(oldp+153,(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus),32);
    bufp->fullIData(oldp+154,(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__plusarg_reader_TestHarness_UNIQUIFIED__DOT__myplus),32);
    bufp->fullIData(oldp+155,(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus),32);
    bufp->fullIData(oldp+156,(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__plusarg_reader_TestHarness_UNIQUIFIED__DOT__myplus),32);
    bufp->fullIData(oldp+157,(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus),32);
    bufp->fullIData(oldp+158,(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__plusarg_reader_TestHarness_UNIQUIFIED__DOT__myplus),32);
    bufp->fullIData(oldp+159,(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus),32);
    bufp->fullIData(oldp+160,(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__plusarg_reader_TestHarness_UNIQUIFIED__DOT__myplus),32);
    bufp->fullIData(oldp+161,(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus),32);
    bufp->fullIData(oldp+162,(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__plusarg_reader_TestHarness_UNIQUIFIED__DOT__myplus),32);
    bufp->fullIData(oldp+163,(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus),32);
    bufp->fullIData(oldp+164,(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__plusarg_reader_TestHarness_UNIQUIFIED__DOT__myplus),32);
    bufp->fullIData(oldp+165,(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus),32);
    bufp->fullIData(oldp+166,(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__plusarg_reader_TestHarness_UNIQUIFIED__DOT__myplus),32);
    bufp->fullIData(oldp+167,(vlSelf->TestHarness__DOT__uart_sim_0__DOT__rxm__DOT__plusarg_reader_1__DOT__myplus),32);
    bufp->fullIData(oldp+168,(vlSelf->TestHarness__DOT__uart_sim_0__DOT__rxm__DOT__plusarg_reader_TestHarness_UNIQUIFIED__DOT__myplus),32);
    bufp->fullBit(oldp+169,(vlSelf->TestHarness__DOT__SimJTAG__DOT_____05Fjtag_TCK));
    bufp->fullBit(oldp+170,(vlSelf->TestHarness__DOT__SimJTAG__DOT_____05Fjtag_TMS));
    bufp->fullBit(oldp+171,(vlSelf->TestHarness__DOT__SimJTAG__DOT_____05Fjtag_TDI));
    bufp->fullBit(oldp+172,(vlSelf->TestHarness__DOT__SimJTAG__DOT_____05Fjtag_TRSTn));
    bufp->fullIData(oldp+173,(vlSelf->TestHarness__DOT__SimJTAG__DOT_____05Fexit),32);
    bufp->fullIData(oldp+174,(vlSelf->TestHarness__DOT__SimJTAG__DOT__tickCounterReg),32);
    bufp->fullIData(oldp+175,(((0U == vlSelf->TestHarness__DOT__SimJTAG__DOT__tickCounterReg)
                                ? 3U : (vlSelf->TestHarness__DOT__SimJTAG__DOT__tickCounterReg 
                                        - (IData)(1U)))),32);
    bufp->fullBit(oldp+176,(vlSelf->TestHarness__DOT__SimJTAG__DOT__r_reset));
    bufp->fullBit(oldp+177,(vlSelf->TestHarness__DOT__SimJTAG__DOT__init_done_sticky));
    bufp->fullBit(oldp+178,(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__outSer__DOT__sending));
    bufp->fullBit(oldp+179,(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__receiving));
    bufp->fullIData(oldp+180,(vlSelf->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg),32);
    bufp->fullBit(oldp+181,((1U & (~ (IData)(vlSelf->TestHarness__DOT__SimJTAG__DOT_____05Fjtag_TCK)))));
    bufp->fullBit(oldp+182,(vlSelf->TestHarness__DOT__success_exit_sim__DOT_____05Fin_valid_reg));
    bufp->fullIData(oldp+183,(vlSelf->TestHarness__DOT__success_exit_sim__DOT_____05Fin_bits_reg),32);
    bufp->fullBit(oldp+184,(vlSelf->TestHarness__DOT__success_exit_sim__DOT_____05Fout_ready_reg));
    bufp->fullBit(oldp+185,(((((0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__state)) 
                               | (1U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__state))) 
                              | (2U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__state))) 
                             | (6U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__state)))));
    bufp->fullBit(oldp+186,((5U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__state))));
    bufp->fullIData(oldp+187,(((IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__idx)
                                ? vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__body_1
                                : vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__body_0)),32);
    bufp->fullBit(oldp+188,((1U & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__x1_a_q__DOT__full)))));
    bufp->fullBit(oldp+189,((1U & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)))));
    bufp->fullQData(oldp+190,((((QData)((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[2U])) 
                                << 0x31U) | (((QData)((IData)(
                                                              vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[1U])) 
                                              << 0x11U) 
                                             | ((QData)((IData)(
                                                                vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U])) 
                                                >> 0xfU)))),64);
    bufp->fullBit(oldp+192,(vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_valid));
    bufp->fullCData(oldp+193,(((7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                ? 1U : 4U)),3);
    bufp->fullCData(oldp+194,(vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_bits_size),4);
    bufp->fullIData(oldp+195,(vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_bits_address),32);
    bufp->fullCData(oldp+196,(vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_bits_mask),8);
    bufp->fullQData(oldp+197,(((7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                ? (((QData)((IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__body_1)) 
                                    << 0x20U) | (QData)((IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__body_0)))
                                : 0ULL)),64);
    bufp->fullBit(oldp+199,(vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_d_ready));
    bufp->fullIData(oldp+200,(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__cmd),32);
    bufp->fullQData(oldp+201,(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__addr),64);
    bufp->fullQData(oldp+203,(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__len),64);
    bufp->fullIData(oldp+205,(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__body_0),32);
    bufp->fullIData(oldp+206,(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__body_1),32);
    bufp->fullCData(oldp+207,(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__bodyValid),2);
    bufp->fullBit(oldp+208,(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__idx));
    bufp->fullCData(oldp+209,(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__state),4);
    __Vtemp_hd38d9978__0[0U] = ((IData)((1ULL + vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__len)) 
                                << 2U);
    __Vtemp_hd38d9978__0[1U] = (((IData)((1ULL + vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__len)) 
                                 >> 0x1eU) | ((IData)(
                                                      ((1ULL 
                                                        + vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__len) 
                                                       >> 0x20U)) 
                                              << 2U));
    __Vtemp_hd38d9978__0[2U] = ((IData)(((1ULL + vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__len) 
                                         >> 0x20U)) 
                                >> 0x1eU);
    bufp->fullWData(oldp+210,(__Vtemp_hd38d9978__0),66);
    bufp->fullWData(oldp+213,(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__raw_size),66);
    bufp->fullCData(oldp+216,(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__rsize),2);
    bufp->fullBit(oldp+217,(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__pow2size));
    bufp->fullCData(oldp+218,(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__byteAddr),3);
    bufp->fullBit(oldp+219,((2U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__rsize))));
    bufp->fullBit(oldp+220,(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__get_acquire_a_mask_acc));
    bufp->fullBit(oldp+221,(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__get_acquire_a_mask_acc_1));
    bufp->fullBit(oldp+222,((1U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__rsize))));
    bufp->fullBit(oldp+223,(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__get_acquire_a_mask_eq_2));
    bufp->fullBit(oldp+224,(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__get_acquire_a_mask_acc_2));
    bufp->fullBit(oldp+225,(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__get_acquire_a_mask_eq_3));
    bufp->fullBit(oldp+226,(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__get_acquire_a_mask_acc_3));
    bufp->fullBit(oldp+227,(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__get_acquire_a_mask_eq_4));
    bufp->fullBit(oldp+228,(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__get_acquire_a_mask_acc_4));
    bufp->fullBit(oldp+229,(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__get_acquire_a_mask_eq_5));
    bufp->fullBit(oldp+230,(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__get_acquire_a_mask_acc_5));
    bufp->fullBit(oldp+231,(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT___io_deq_valid_output));
    bufp->fullCData(oldp+232,(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode),3);
    bufp->fullCData(oldp+233,((7U & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__full)
                                      ? (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__saved_param)
                                      : (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_4 
                                         >> 0x1bU)))),3);
    bufp->fullCData(oldp+234,((3U & (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__aFrag))),2);
    bufp->fullCData(oldp+235,(vlSelf->TestHarness__DOT__ram__DOT___fragmenter_auto_out_a_bits_source),8);
    bufp->fullIData(oldp+236,(vlSelf->TestHarness__DOT__ram__DOT___fragmenter_auto_out_a_bits_address),29);
    bufp->fullCData(oldp+237,(vlSelf->TestHarness__DOT__ram__DOT___fragmenter_auto_out_a_bits_mask),8);
    bufp->fullQData(oldp+238,(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_data),64);
    bufp->fullBit(oldp+240,((1U & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__full)
                                    ? (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__saved_corrupt)
                                    : (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_0 
                                       >> 0xaU)))));
    bufp->fullBit(oldp+241,(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__x1_d_ready));
    bufp->fullBit(oldp+242,(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__in_a_ready));
    bufp->fullBit(oldp+243,(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__in_d_valid));
    bufp->fullCData(oldp+244,(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__in_d_bits_opcode),3);
    bufp->fullCData(oldp+245,(((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__d_mux)
                                ? (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__d_size)
                                : (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__r_size))),2);
    bufp->fullCData(oldp+246,(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__in_d_bits_source),8);
    bufp->fullQData(oldp+247,(((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__d_mux)
                                ? (((QData)((IData)(
                                                    (((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__d_raw_data_7) 
                                                      << 0x18U) 
                                                     | (((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__d_raw_data_6) 
                                                         << 0x10U) 
                                                        | (((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__d_raw_data_5) 
                                                            << 8U) 
                                                           | (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__d_raw_data_4)))))) 
                                    << 0x20U) | (QData)((IData)(
                                                                (((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__d_raw_data_3) 
                                                                  << 0x18U) 
                                                                 | (((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__d_raw_data_2) 
                                                                     << 0x10U) 
                                                                    | (((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__d_raw_data_1) 
                                                                        << 8U) 
                                                                       | (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__d_raw_data_0)))))))
                                : (((QData)((IData)(
                                                    ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__REG)
                                                        ? (IData)(
                                                                  (vlSelf->TestHarness__DOT__ram__DOT__srams__DOT___mem_RW0_rdata 
                                                                   >> 0x38U))
                                                        : (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__r_7)) 
                                                      << 0x18U) 
                                                     | ((0xff0000U 
                                                         & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__REG)
                                                              ? (IData)(
                                                                        (vlSelf->TestHarness__DOT__ram__DOT__srams__DOT___mem_RW0_rdata 
                                                                         >> 0x30U))
                                                              : (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__r_6)) 
                                                            << 0x10U)) 
                                                        | ((0xff00U 
                                                            & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__REG)
                                                                 ? (IData)(
                                                                           (vlSelf->TestHarness__DOT__ram__DOT__srams__DOT___mem_RW0_rdata 
                                                                            >> 0x28U))
                                                                 : (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__r_5)) 
                                                               << 8U)) 
                                                           | (0xffU 
                                                              & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__REG)
                                                                  ? (IData)(
                                                                            (vlSelf->TestHarness__DOT__ram__DOT__srams__DOT___mem_RW0_rdata 
                                                                             >> 0x20U))
                                                                  : (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__r_4)))))))) 
                                    << 0x20U) | (QData)((IData)(
                                                                ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__REG)
                                                                    ? (IData)(
                                                                              (vlSelf->TestHarness__DOT__ram__DOT__srams__DOT___mem_RW0_rdata 
                                                                               >> 0x18U))
                                                                    : (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__r_3)) 
                                                                  << 0x18U) 
                                                                 | ((0xff0000U 
                                                                     & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__REG)
                                                                          ? (IData)(
                                                                                (vlSelf->TestHarness__DOT__ram__DOT__srams__DOT___mem_RW0_rdata 
                                                                                >> 0x10U))
                                                                          : (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__r_2)) 
                                                                        << 0x10U)) 
                                                                    | ((0xff00U 
                                                                        & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__REG)
                                                                             ? (IData)(
                                                                                (vlSelf->TestHarness__DOT__ram__DOT__srams__DOT___mem_RW0_rdata 
                                                                                >> 8U))
                                                                             : (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__r_1)) 
                                                                           << 8U)) 
                                                                       | (0xffU 
                                                                          & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__REG)
                                                                              ? (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT___mem_RW0_rdata)
                                                                              : (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__r_0))))))))))),64);
    bufp->fullBit(oldp+249,((1U & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT__full)))));
    bufp->fullBit(oldp+250,((1U & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)))));
    bufp->fullCData(oldp+251,((7U & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U])),3);
    bufp->fullCData(oldp+252,((3U & (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                     >> 3U))),2);
    bufp->fullCData(oldp+253,((3U & (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                     >> 5U))),2);
    bufp->fullCData(oldp+254,((0xffU & (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                        >> 7U))),8);
    bufp->fullBit(oldp+255,((1U & (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                   >> 0xfU))));
    bufp->fullBit(oldp+256,((1U & (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                   >> 0x10U))));
    bufp->fullQData(oldp+257,((((QData)((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[2U])) 
                                << 0x2fU) | (((QData)((IData)(
                                                              vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[1U])) 
                                              << 0xfU) 
                                             | ((QData)((IData)(
                                                                vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U])) 
                                                >> 0x11U)))),64);
    bufp->fullBit(oldp+259,((1U & (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[2U] 
                                   >> 0x11U))));
    bufp->fullBit(oldp+260,((1U & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT__empty)))));
    bufp->fullCData(oldp+261,((7U & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U])),3);
    bufp->fullCData(oldp+262,((7U & (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                     >> 3U))),3);
    bufp->fullCData(oldp+263,((3U & (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                     >> 6U))),2);
    bufp->fullCData(oldp+264,((0xffU & (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                        >> 8U))),8);
    bufp->fullIData(oldp+265,((0x1fffffffU & ((vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                                               << 0x10U) 
                                              | (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                 >> 0x10U)))),29);
    bufp->fullCData(oldp+266,((0xffU & (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                                        >> 0xdU))),8);
    bufp->fullQData(oldp+267,((((QData)((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[3U])) 
                                << 0x2bU) | (((QData)((IData)(
                                                              vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[2U])) 
                                              << 0xbU) 
                                             | ((QData)((IData)(
                                                                vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[1U])) 
                                                >> 0x15U)))),64);
    bufp->fullBit(oldp+269,((1U & (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[3U] 
                                   >> 0x15U))));
    bufp->fullBit(oldp+270,((1U & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__full)))));
    bufp->fullBit(oldp+271,(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__enq_ptr_value));
    bufp->fullBit(oldp+272,(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__deq_ptr_value));
    bufp->fullBit(oldp+273,(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__maybe_full));
    bufp->fullBit(oldp+274,(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ptr_match));
    bufp->fullBit(oldp+275,(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty));
    bufp->fullBit(oldp+276,(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__full));
    bufp->fullBit(oldp+277,(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__do_enq));
    bufp->fullBit(oldp+278,(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__do_deq));
    VL_EXTEND_WQ(65,64, __Vtemp_h218a928d__0, ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__d_mux)
                                                ? (
                                                   ((QData)((IData)(
                                                                    (((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__d_raw_data_7) 
                                                                      << 0x18U) 
                                                                     | (((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__d_raw_data_6) 
                                                                         << 0x10U) 
                                                                        | (((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__d_raw_data_5) 
                                                                            << 8U) 
                                                                           | (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__d_raw_data_4)))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     (((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__d_raw_data_3) 
                                                                       << 0x18U) 
                                                                      | (((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__d_raw_data_2) 
                                                                          << 0x10U) 
                                                                         | (((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__d_raw_data_1) 
                                                                             << 8U) 
                                                                            | (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__d_raw_data_0)))))))
                                                : (
                                                   ((QData)((IData)(
                                                                    ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__REG)
                                                                        ? (IData)(
                                                                                (vlSelf->TestHarness__DOT__ram__DOT__srams__DOT___mem_RW0_rdata 
                                                                                >> 0x38U))
                                                                        : (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__r_7)) 
                                                                      << 0x18U) 
                                                                     | ((0xff0000U 
                                                                         & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__REG)
                                                                              ? (IData)(
                                                                                (vlSelf->TestHarness__DOT__ram__DOT__srams__DOT___mem_RW0_rdata 
                                                                                >> 0x30U))
                                                                              : (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__r_6)) 
                                                                            << 0x10U)) 
                                                                        | ((0xff00U 
                                                                            & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__REG)
                                                                                 ? (IData)(
                                                                                (vlSelf->TestHarness__DOT__ram__DOT__srams__DOT___mem_RW0_rdata 
                                                                                >> 0x28U))
                                                                                 : (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__r_5)) 
                                                                               << 8U)) 
                                                                           | (0xffU 
                                                                              & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__REG)
                                                                                 ? (IData)(
                                                                                (vlSelf->TestHarness__DOT__ram__DOT__srams__DOT___mem_RW0_rdata 
                                                                                >> 0x20U))
                                                                                 : (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__r_4)))))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__REG)
                                                                         ? (IData)(
                                                                                (vlSelf->TestHarness__DOT__ram__DOT__srams__DOT___mem_RW0_rdata 
                                                                                >> 0x18U))
                                                                         : (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__r_3)) 
                                                                       << 0x18U) 
                                                                      | ((0xff0000U 
                                                                          & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__REG)
                                                                               ? (IData)(
                                                                                (vlSelf->TestHarness__DOT__ram__DOT__srams__DOT___mem_RW0_rdata 
                                                                                >> 0x10U))
                                                                               : (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__r_2)) 
                                                                             << 0x10U)) 
                                                                         | ((0xff00U 
                                                                             & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__REG)
                                                                                 ? (IData)(
                                                                                (vlSelf->TestHarness__DOT__ram__DOT__srams__DOT___mem_RW0_rdata 
                                                                                >> 8U))
                                                                                 : (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__r_1)) 
                                                                                << 8U)) 
                                                                            | (0xffU 
                                                                               & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__REG)
                                                                                 ? (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT___mem_RW0_rdata)
                                                                                 : (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__r_0)))))))))));
    __Vtemp_hed8ccb13__0[0U] = ((__Vtemp_h218a928d__0[0U] 
                                 << 0x11U) | (((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__in_d_bits_source) 
                                               << 7U) 
                                              | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__d_mux)
                                                    ? (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__d_size)
                                                    : (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__r_size)) 
                                                  << 5U) 
                                                 | (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__in_d_bits_opcode))));
    __Vtemp_hed8ccb13__0[1U] = ((__Vtemp_h218a928d__0[0U] 
                                 >> 0xfU) | (__Vtemp_h218a928d__0[1U] 
                                             << 0x11U));
    __Vtemp_hed8ccb13__0[2U] = ((__Vtemp_h218a928d__0[1U] 
                                 >> 0xfU) | (__Vtemp_h218a928d__0[2U] 
                                             << 0x11U));
    bufp->fullWData(oldp+279,(__Vtemp_hed8ccb13__0),82);
    bufp->fullWData(oldp+282,(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data),82);
    bufp->fullWData(oldp+285,(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory[0]),82);
    bufp->fullWData(oldp+288,(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory[1]),82);
    bufp->fullBit(oldp+291,(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done));
    bufp->fullWData(oldp+292,(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight),256);
    bufp->fullWData(oldp+300,(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_opcodes),1024);
    bufp->fullWData(oldp+332,(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes),1024);
    bufp->fullBit(oldp+364,((6U == (7U & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))));
    bufp->fullIData(oldp+365,(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__watchdog),32);
    bufp->fullBit(oldp+366,(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done));
    bufp->fullBit(oldp+367,((2U == (3U & (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__aFrag)))));
    bufp->fullBit(oldp+368,(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_acc));
    bufp->fullBit(oldp+369,(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_acc_1));
    bufp->fullBit(oldp+370,((1U == (3U & (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__aFrag)))));
    bufp->fullBit(oldp+371,(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_eq_2));
    bufp->fullBit(oldp+372,(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_acc_2));
    bufp->fullBit(oldp+373,(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_eq_3));
    bufp->fullBit(oldp+374,(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_acc_3));
    bufp->fullBit(oldp+375,(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_eq_4));
    bufp->fullBit(oldp+376,(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_acc_4));
    bufp->fullBit(oldp+377,(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_eq_5));
    bufp->fullBit(oldp+378,(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_acc_5));
    bufp->fullCData(oldp+379,(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_acc_5) 
                                 | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_eq_5) 
                                    & vlSelf->TestHarness__DOT__ram__DOT___fragmenter_auto_out_a_bits_address)) 
                                << 7U) | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_acc_5) 
                                            | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_eq_5) 
                                               & (~ vlSelf->TestHarness__DOT__ram__DOT___fragmenter_auto_out_a_bits_address))) 
                                           << 6U) | 
                                          ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_acc_4) 
                                             | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_eq_4) 
                                                & vlSelf->TestHarness__DOT__ram__DOT___fragmenter_auto_out_a_bits_address)) 
                                            << 5U) 
                                           | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_acc_4) 
                                                | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_eq_4) 
                                                   & (~ vlSelf->TestHarness__DOT__ram__DOT___fragmenter_auto_out_a_bits_address))) 
                                               << 4U) 
                                              | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_acc_3) 
                                                   | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_eq_3) 
                                                      & vlSelf->TestHarness__DOT__ram__DOT___fragmenter_auto_out_a_bits_address)) 
                                                  << 3U) 
                                                 | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_acc_3) 
                                                      | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_eq_3) 
                                                         & (~ vlSelf->TestHarness__DOT__ram__DOT___fragmenter_auto_out_a_bits_address))) 
                                                     << 2U) 
                                                    | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_acc_2) 
                                                         | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_eq_2) 
                                                            & vlSelf->TestHarness__DOT__ram__DOT___fragmenter_auto_out_a_bits_address)) 
                                                        << 1U) 
                                                       | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_acc_2) 
                                                          | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_eq_2) 
                                                             & (~ vlSelf->TestHarness__DOT__ram__DOT___fragmenter_auto_out_a_bits_address))))))))))),8);
    VL_EXTEND_WI(256,8, __Vtemp_hffaea87a__0, (IData)(vlSelf->TestHarness__DOT__ram__DOT___fragmenter_auto_out_a_bits_source));
    VL_SHIFTL_WWW(256,256,256, __Vtemp_ha0eee9e6__0, VTestHarness__ConstPool__CONST_h4e9f510d_0, __Vtemp_hffaea87a__0);
    if (vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT___io_deq_valid_output) {
        __Vtemp_h0f122e09__0[0U] = __Vtemp_ha0eee9e6__0[0U];
        __Vtemp_h0f122e09__0[1U] = __Vtemp_ha0eee9e6__0[1U];
        __Vtemp_h0f122e09__0[2U] = __Vtemp_ha0eee9e6__0[2U];
        __Vtemp_h0f122e09__0[3U] = __Vtemp_ha0eee9e6__0[3U];
        __Vtemp_h0f122e09__0[4U] = __Vtemp_ha0eee9e6__0[4U];
        __Vtemp_h0f122e09__0[5U] = __Vtemp_ha0eee9e6__0[5U];
        __Vtemp_h0f122e09__0[6U] = __Vtemp_ha0eee9e6__0[6U];
        __Vtemp_h0f122e09__0[7U] = __Vtemp_ha0eee9e6__0[7U];
    } else {
        __Vtemp_h0f122e09__0[0U] = VTestHarness__ConstPool__CONST_h9e67c271_0[0U];
        __Vtemp_h0f122e09__0[1U] = VTestHarness__ConstPool__CONST_h9e67c271_0[1U];
        __Vtemp_h0f122e09__0[2U] = VTestHarness__ConstPool__CONST_h9e67c271_0[2U];
        __Vtemp_h0f122e09__0[3U] = VTestHarness__ConstPool__CONST_h9e67c271_0[3U];
        __Vtemp_h0f122e09__0[4U] = VTestHarness__ConstPool__CONST_h9e67c271_0[4U];
        __Vtemp_h0f122e09__0[5U] = VTestHarness__ConstPool__CONST_h9e67c271_0[5U];
        __Vtemp_h0f122e09__0[6U] = VTestHarness__ConstPool__CONST_h9e67c271_0[6U];
        __Vtemp_h0f122e09__0[7U] = VTestHarness__ConstPool__CONST_h9e67c271_0[7U];
    }
    bufp->fullWData(oldp+380,(__Vtemp_h0f122e09__0),256);
    bufp->fullBit(oldp+388,(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__same_cycle_resp));
    bufp->fullBit(oldp+389,(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT__enq_ptr_value));
    bufp->fullBit(oldp+390,(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT__deq_ptr_value));
    bufp->fullBit(oldp+391,(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT__maybe_full));
    bufp->fullBit(oldp+392,(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT__ptr_match));
    bufp->fullBit(oldp+393,(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT__empty));
    bufp->fullBit(oldp+394,(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT__full));
    bufp->fullBit(oldp+395,(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT__do_enq));
    bufp->fullBit(oldp+396,(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT__do_deq));
    __Vtemp_h792a1006__0[0U] = (IData)((((QData)((IData)(vlSelf->TestHarness__DOT__ram__DOT___fragmenter_auto_out_a_bits_mask)) 
                                         << 0x2dU) 
                                        | (((QData)((IData)(vlSelf->TestHarness__DOT__ram__DOT___fragmenter_auto_out_a_bits_address)) 
                                            << 0x10U) 
                                           | (QData)((IData)(
                                                             (((IData)(vlSelf->TestHarness__DOT__ram__DOT___fragmenter_auto_out_a_bits_source) 
                                                               << 8U) 
                                                              | ((0xc0U 
                                                                  & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__aFrag) 
                                                                     << 6U)) 
                                                                 | ((0x38U 
                                                                     & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__full)
                                                                          ? (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__saved_param)
                                                                          : 
                                                                         (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_4 
                                                                          >> 0x1bU)) 
                                                                        << 3U)) 
                                                                    | (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode)))))))));
    __Vtemp_h792a1006__0[1U] = (((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_data) 
                                 << 0x15U) | (IData)(
                                                     ((((QData)((IData)(vlSelf->TestHarness__DOT__ram__DOT___fragmenter_auto_out_a_bits_mask)) 
                                                        << 0x2dU) 
                                                       | (((QData)((IData)(vlSelf->TestHarness__DOT__ram__DOT___fragmenter_auto_out_a_bits_address)) 
                                                           << 0x10U) 
                                                          | (QData)((IData)(
                                                                            (((IData)(vlSelf->TestHarness__DOT__ram__DOT___fragmenter_auto_out_a_bits_source) 
                                                                              << 8U) 
                                                                             | ((0xc0U 
                                                                                & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__aFrag) 
                                                                                << 6U)) 
                                                                                | ((0x38U 
                                                                                & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__full)
                                                                                 ? (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__saved_param)
                                                                                 : 
                                                                                (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_4 
                                                                                >> 0x1bU)) 
                                                                                << 3U)) 
                                                                                | (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode)))))))) 
                                                      >> 0x20U)));
    __Vtemp_h792a1006__0[2U] = (((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_data) 
                                 >> 0xbU) | ((IData)(
                                                     (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_data 
                                                      >> 0x20U)) 
                                             << 0x15U));
    __Vtemp_h792a1006__0[3U] = ((0x200000U & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__full)
                                                ? (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__saved_corrupt)
                                                : (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_0 
                                                   >> 0xaU)) 
                                              << 0x15U)) 
                                | ((IData)((vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_data 
                                            >> 0x20U)) 
                                   >> 0xbU));
    bufp->fullWData(oldp+397,(__Vtemp_h792a1006__0),118);
    bufp->fullWData(oldp+401,(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data),118);
    bufp->fullWData(oldp+405,(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory[0]),118);
    bufp->fullWData(oldp+409,(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory[1]),118);
    bufp->fullBit(oldp+413,(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___outArb_io_in_4_ready));
    bufp->fullBit(oldp+414,(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__manager_tl_d_valid));
    bufp->fullCData(oldp+415,(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_opcode),3);
    bufp->fullCData(oldp+416,((3U & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_4 
                                     >> 0x1bU))),2);
    bufp->fullCData(oldp+417,((0xfU & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_4 
                                       >> 0x13U))),4);
    bufp->fullBit(oldp+418,((1U & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_4 
                                   >> 0xbU))));
    bufp->fullCData(oldp+419,((0xfU & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_0 
                                       >> 2U))),4);
    bufp->fullBit(oldp+420,((1U & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_0 
                                   >> 1U))));
    bufp->fullBit(oldp+421,((1U & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_0 
                                   >> 0xaU))));
    bufp->fullBit(oldp+422,((1U & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__x1_a_q__DOT__empty)))));
    bufp->fullCData(oldp+423,((7U & vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U])),3);
    bufp->fullCData(oldp+424,((7U & (vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                     >> 3U))),3);
    bufp->fullCData(oldp+425,((0xfU & (vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                       >> 6U))),4);
    bufp->fullBit(oldp+426,((1U & (vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                   >> 0xaU))));
    bufp->fullIData(oldp+427,(((vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                                << 0x15U) | (vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                             >> 0xbU))),32);
    bufp->fullCData(oldp+428,((0xffU & (vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                                        >> 0xbU))),8);
    bufp->fullQData(oldp+429,((((QData)((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[3U])) 
                                << 0x2dU) | (((QData)((IData)(
                                                              vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[2U])) 
                                              << 0xdU) 
                                             | ((QData)((IData)(
                                                                vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[1U])) 
                                                >> 0x13U)))),64);
    bufp->fullBit(oldp+431,((1U & (vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[3U] 
                                   >> 0x13U))));
    bufp->fullBit(oldp+432,((1U & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__full)))));
    bufp->fullCData(oldp+433,((7U & vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U])),3);
    bufp->fullCData(oldp+434,((3U & (vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                     >> 3U))),2);
    bufp->fullCData(oldp+435,((0xfU & (vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                       >> 5U))),4);
    bufp->fullBit(oldp+436,((1U & (vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                   >> 9U))));
    bufp->fullCData(oldp+437,((0xfU & (vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                       >> 0xaU))),4);
    bufp->fullBit(oldp+438,((1U & (vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                   >> 0xeU))));
    bufp->fullBit(oldp+439,((1U & (vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[2U] 
                                   >> 0xfU))));
    bufp->fullBit(oldp+440,(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__enq_ptr_value));
    bufp->fullBit(oldp+441,(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__deq_ptr_value));
    bufp->fullBit(oldp+442,(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__maybe_full));
    bufp->fullBit(oldp+443,(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ptr_match));
    bufp->fullBit(oldp+444,(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty));
    bufp->fullBit(oldp+445,(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__full));
    bufp->fullBit(oldp+446,(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__do_enq));
    bufp->fullBit(oldp+447,(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__do_deq));
    __Vtemp_hc75c6e10__0[0U] = (((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_data) 
                                 << 0xfU) | ((0x4000U 
                                              & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_0 
                                                 << 0xdU)) 
                                             | ((0x3c00U 
                                                 & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_0 
                                                    << 8U)) 
                                                | ((0x200U 
                                                    & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_4 
                                                       >> 2U)) 
                                                   | ((0x1e0U 
                                                       & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_4 
                                                          >> 0xeU)) 
                                                      | ((0x18U 
                                                          & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_4 
                                                             >> 0x18U)) 
                                                         | (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_opcode)))))));
    __Vtemp_hc75c6e10__0[1U] = (((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_data) 
                                 >> 0x11U) | ((IData)(
                                                      (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_data 
                                                       >> 0x20U)) 
                                              << 0xfU));
    __Vtemp_hc75c6e10__0[2U] = ((0x8000U & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_0 
                                            << 5U)) 
                                | ((IData)((vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_data 
                                            >> 0x20U)) 
                                   >> 0x11U));
    bufp->fullWData(oldp+448,(__Vtemp_hc75c6e10__0),80);
    bufp->fullWData(oldp+451,(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data),80);
    bufp->fullWData(oldp+454,(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory[0]),80);
    bufp->fullWData(oldp+457,(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory[1]),80);
    bufp->fullSData(oldp+460,(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_first_counter),9);
    bufp->fullCData(oldp+461,(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__opcode),3);
    bufp->fullCData(oldp+462,(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__param),3);
    bufp->fullCData(oldp+463,(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__size),4);
    bufp->fullBit(oldp+464,(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__source));
    bufp->fullIData(oldp+465,(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__address),32);
    bufp->fullSData(oldp+466,(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter),9);
    bufp->fullCData(oldp+467,(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__opcode_1),3);
    bufp->fullCData(oldp+468,(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__param_1),2);
    bufp->fullCData(oldp+469,(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__size_1),4);
    bufp->fullBit(oldp+470,(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__source_1));
    bufp->fullCData(oldp+471,(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__sink),4);
    bufp->fullBit(oldp+472,(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__denied));
    bufp->fullBit(oldp+473,(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__inflight));
    bufp->fullCData(oldp+474,(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__inflight_opcodes),4);
    bufp->fullCData(oldp+475,(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__inflight_sizes),8);
    bufp->fullSData(oldp+476,(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_first_counter_1),9);
    bufp->fullBit(oldp+477,((0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_first_counter_1))));
    bufp->fullSData(oldp+478,(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter_1),9);
    bufp->fullBit(oldp+479,((0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter_1))));
    bufp->fullBit(oldp+480,(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_set));
    bufp->fullBit(oldp+481,((6U == (7U & vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))));
    bufp->fullIData(oldp+482,(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__watchdog),32);
    bufp->fullSData(oldp+483,(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter_2),9);
    bufp->fullBit(oldp+484,((0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter_2))));
    bufp->fullBit(oldp+485,((2U == (3U & (IData)(vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_bits_size)))));
    bufp->fullBit(oldp+486,(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask_acc));
    bufp->fullBit(oldp+487,(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask_acc_1));
    bufp->fullBit(oldp+488,((1U == (3U & (IData)(vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_bits_size)))));
    bufp->fullBit(oldp+489,(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask_eq_2));
    bufp->fullBit(oldp+490,(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask_acc_2));
    bufp->fullBit(oldp+491,(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask_eq_3));
    bufp->fullBit(oldp+492,(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask_acc_3));
    bufp->fullBit(oldp+493,(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask_eq_4));
    bufp->fullBit(oldp+494,(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask_acc_4));
    bufp->fullBit(oldp+495,(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask_eq_5));
    bufp->fullBit(oldp+496,(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask_acc_5));
    bufp->fullCData(oldp+497,(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask_acc_5) 
                                 | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask_eq_5) 
                                    & vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_bits_address)) 
                                << 7U) | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask_acc_5) 
                                            | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask_eq_5) 
                                               & (~ vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_bits_address))) 
                                           << 6U) | 
                                          ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask_acc_4) 
                                             | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask_eq_4) 
                                                & vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_bits_address)) 
                                            << 5U) 
                                           | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask_acc_4) 
                                                | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask_eq_4) 
                                                   & (~ vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_bits_address))) 
                                               << 4U) 
                                              | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask_acc_3) 
                                                   | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask_eq_3) 
                                                      & vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_bits_address)) 
                                                  << 3U) 
                                                 | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask_acc_3) 
                                                      | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask_eq_3) 
                                                         & (~ vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_bits_address))) 
                                                     << 2U) 
                                                    | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask_acc_2) 
                                                         | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask_eq_2) 
                                                            & vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_bits_address)) 
                                                        << 1U) 
                                                       | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask_acc_2) 
                                                          | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask_eq_2) 
                                                             & (~ vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_bits_address))))))))))),8);
    bufp->fullBit(oldp+498,(((IData)(vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_valid) 
                             & (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_first_counter_1)))));
    bufp->fullBit(oldp+499,(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__same_cycle_resp));
    bufp->fullBit(oldp+500,(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__x1_a_q__DOT__enq_ptr_value));
    bufp->fullBit(oldp+501,(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__x1_a_q__DOT__deq_ptr_value));
    bufp->fullBit(oldp+502,(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__x1_a_q__DOT__maybe_full));
    bufp->fullBit(oldp+503,(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__x1_a_q__DOT__ptr_match));
    bufp->fullBit(oldp+504,(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__x1_a_q__DOT__empty));
    bufp->fullBit(oldp+505,(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__x1_a_q__DOT__full));
    bufp->fullBit(oldp+506,(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__x1_a_q__DOT__do_enq));
    bufp->fullBit(oldp+507,(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__x1_a_q__DOT__do_deq));
    __Vtemp_h8bf500b0__0[0U] = (IData)((((QData)((IData)(vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_bits_mask)) 
                                         << 0x2bU) 
                                        | (((QData)((IData)(vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_bits_address)) 
                                            << 0xbU) 
                                           | (QData)((IData)(
                                                             (((IData)(vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_bits_size) 
                                                               << 6U) 
                                                              | ((7U 
                                                                  == (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                                                  ? 1U
                                                                  : 4U)))))));
    __Vtemp_h8bf500b0__0[1U] = (((IData)(((7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                           ? (((QData)((IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__body_1)) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__body_0)))
                                           : 0ULL)) 
                                 << 0x13U) | (IData)(
                                                     ((((QData)((IData)(vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_bits_mask)) 
                                                        << 0x2bU) 
                                                       | (((QData)((IData)(vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_bits_address)) 
                                                           << 0xbU) 
                                                          | (QData)((IData)(
                                                                            (((IData)(vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_bits_size) 
                                                                              << 6U) 
                                                                             | ((7U 
                                                                                == (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                                                                 ? 1U
                                                                                 : 4U)))))) 
                                                      >> 0x20U)));
    __Vtemp_h8bf500b0__0[2U] = (((IData)(((7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                           ? (((QData)((IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__body_1)) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__body_0)))
                                           : 0ULL)) 
                                 >> 0xdU) | ((IData)(
                                                     (((7U 
                                                        == (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                                        ? 
                                                       (((QData)((IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__body_1)) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__body_0)))
                                                        : 0ULL) 
                                                      >> 0x20U)) 
                                             << 0x13U));
    __Vtemp_h8bf500b0__0[3U] = ((IData)((((7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                           ? (((QData)((IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__body_1)) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__body_0)))
                                           : 0ULL) 
                                         >> 0x20U)) 
                                >> 0xdU);
    VL_EXTEND_WW(116,115, __Vtemp_h9edaa68e__0, __Vtemp_h8bf500b0__0);
    bufp->fullWData(oldp+508,(__Vtemp_h9edaa68e__0),116);
    bufp->fullWData(oldp+512,(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data),116);
    bufp->fullWData(oldp+516,(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__x1_a_q__DOT__ram_ext__DOT__Memory[0]),116);
    bufp->fullWData(oldp+520,(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__x1_a_q__DOT__ram_ext__DOT__Memory[1]),116);
    bufp->fullBit(oldp+524,(vlSelf->TestHarness__DOT__ram__DOT___xbar_auto_out_0_a_valid));
    bufp->fullCData(oldp+525,((7U & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_4 
                                     >> 0x1bU))),3);
    bufp->fullCData(oldp+526,((7U & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_4 
                                     >> 0x13U))),3);
    bufp->fullCData(oldp+527,((0xfU & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_4 
                                       >> 0xbU))),4);
    bufp->fullIData(oldp+528,((0x1fffffffU & (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address))),29);
    bufp->fullCData(oldp+529,((0xffU & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_0 
                                        >> 1U))),8);
    bufp->fullBit(oldp+530,(vlSelf->TestHarness__DOT__ram__DOT___xbar_auto_out_0_d_ready));
    bufp->fullBit(oldp+531,(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT___io_enq_ready_output));
    bufp->fullBit(oldp+532,(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__bundleIn_0_d_valid));
    bufp->fullCData(oldp+533,(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__bundleIn_0_d_bits_size),3);
    bufp->fullCData(oldp+534,((0xfU & (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                       >> 0xbU))),4);
    bufp->fullCData(oldp+535,(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__acknum),3);
    bufp->fullCData(oldp+536,(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__dOrig),3);
    bufp->fullBit(oldp+537,(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__dToggle));
    bufp->fullBit(oldp+538,((0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__acknum))));
    bufp->fullCData(oldp+539,(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__dFirst_size),3);
    bufp->fullBit(oldp+540,(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__drop));
    bufp->fullCData(oldp+541,(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__aFrag),3);
    bufp->fullCData(oldp+542,(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__gennum),3);
    bufp->fullBit(oldp+543,((0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__gennum))));
    bufp->fullCData(oldp+544,(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__old_gennum1),3);
    bufp->fullBit(oldp+545,(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__aToggle_r));
    bufp->fullCData(oldp+546,(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__a_first_counter),3);
    bufp->fullCData(oldp+547,(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__opcode),3);
    bufp->fullCData(oldp+548,(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__param),3);
    bufp->fullCData(oldp+549,(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__size),3);
    bufp->fullCData(oldp+550,(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__source),4);
    bufp->fullIData(oldp+551,(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__address),29);
    bufp->fullCData(oldp+552,(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__d_first_counter),3);
    bufp->fullCData(oldp+553,(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__opcode_1),3);
    bufp->fullCData(oldp+554,(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__param_1),2);
    bufp->fullCData(oldp+555,(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__size_1),3);
    bufp->fullCData(oldp+556,(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__source_1),4);
    bufp->fullBit(oldp+557,(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__sink));
    bufp->fullBit(oldp+558,(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__denied));
    bufp->fullSData(oldp+559,(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__inflight),16);
    bufp->fullQData(oldp+560,(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes),64);
    bufp->fullQData(oldp+562,(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes),64);
    bufp->fullCData(oldp+564,(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1),3);
    bufp->fullBit(oldp+565,((0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1))));
    bufp->fullCData(oldp+566,(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1),3);
    bufp->fullBit(oldp+567,((0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1))));
    bufp->fullIData(oldp+568,(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__watchdog),32);
    bufp->fullCData(oldp+569,(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_2),3);
    bufp->fullBit(oldp+570,((0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_2))));
    bufp->fullBit(oldp+571,((2U == (3U & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_4 
                                          >> 0x13U)))));
    bufp->fullBit(oldp+572,(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_acc));
    bufp->fullBit(oldp+573,(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_acc_1));
    bufp->fullBit(oldp+574,((1U == (3U & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_4 
                                          >> 0x13U)))));
    bufp->fullBit(oldp+575,(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_eq_2));
    bufp->fullBit(oldp+576,(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_acc_2));
    bufp->fullBit(oldp+577,(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_eq_3));
    bufp->fullBit(oldp+578,(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_acc_3));
    bufp->fullBit(oldp+579,(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_eq_4));
    bufp->fullBit(oldp+580,(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_acc_4));
    bufp->fullBit(oldp+581,(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_eq_5));
    bufp->fullBit(oldp+582,(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_acc_5));
    bufp->fullCData(oldp+583,(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_acc_5) 
                                 | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_eq_5) 
                                    & (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address))) 
                                << 7U) | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_acc_5) 
                                            | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_eq_5) 
                                               & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address)))) 
                                           << 6U) | 
                                          ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_acc_4) 
                                             | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_eq_4) 
                                                & (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address))) 
                                            << 5U) 
                                           | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_acc_4) 
                                                | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_eq_4) 
                                                   & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address)))) 
                                               << 4U) 
                                              | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_acc_3) 
                                                   | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_eq_3) 
                                                      & (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address))) 
                                                  << 3U) 
                                                 | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_acc_3) 
                                                      | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_eq_3) 
                                                         & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address)))) 
                                                     << 2U) 
                                                    | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_acc_2) 
                                                         | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_eq_2) 
                                                            & (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address))) 
                                                        << 1U) 
                                                       | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_acc_2) 
                                                          | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_eq_2) 
                                                             & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address)))))))))))),8);
    bufp->fullSData(oldp+584,(((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___same_cycle_resp_T_1)
                                ? ((0xfU >= (0xfU & 
                                             (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_4 
                                              >> 0xbU)))
                                    ? (0xffffU & ((IData)(1U) 
                                                  << 
                                                  (0xfU 
                                                   & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_4 
                                                      >> 0xbU))))
                                    : 0U) : 0U)),16);
    bufp->fullBit(oldp+585,(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__same_cycle_resp));
    bufp->fullBit(oldp+586,(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT____Vcellinp__repeater__io_repeat));
    bufp->fullBit(oldp+587,(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__full));
    bufp->fullCData(oldp+588,(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT___repeater_io_deq_bits_size),3);
    bufp->fullCData(oldp+589,((0xfU & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__full)
                                        ? (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__saved_source)
                                        : (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_4 
                                           >> 0xbU)))),4);
    bufp->fullIData(oldp+590,((0x1fffffffU & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__full)
                                               ? vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__saved_address
                                               : (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address)))),29);
    bufp->fullCData(oldp+591,((0xffU & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__full)
                                         ? (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__saved_mask)
                                         : (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_0 
                                            >> 1U)))),8);
    bufp->fullCData(oldp+592,(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__saved_opcode),3);
    bufp->fullCData(oldp+593,(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__saved_param),3);
    bufp->fullCData(oldp+594,(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__saved_size),3);
    bufp->fullCData(oldp+595,(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__saved_source),4);
    bufp->fullIData(oldp+596,(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__saved_address),29);
    bufp->fullCData(oldp+597,(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__saved_mask),8);
    bufp->fullBit(oldp+598,(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__saved_corrupt));
    bufp->fullBit(oldp+599,(vlSelf->TestHarness__DOT__ram__DOT___xbar_auto_out_1_a_valid));
    bufp->fullIData(oldp+600,((0x3ffffU & (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address))),18);
    bufp->fullBit(oldp+601,(vlSelf->TestHarness__DOT__ram__DOT___xbar_auto_out_1_d_ready));
    bufp->fullBit(oldp+602,(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT___io_deq_valid_output));
    bufp->fullCData(oldp+603,((3U & (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag))),2);
    bufp->fullCData(oldp+604,(vlSelf->TestHarness__DOT__ram__DOT___fragmenter_1_auto_out_a_bits_source),8);
    bufp->fullQData(oldp+605,(((0U != (0x7ffU & (vlSelf->TestHarness__DOT__ram__DOT___fragmenter_1_auto_out_a_bits_address 
                                                 >> 5U)))
                                ? 0ULL : (((QData)((IData)(
                                                           VTestHarness__ConstPool__CONST_h0d530b5b_0[
                                                           (((IData)(0x3fU) 
                                                             + 
                                                             (0xc0U 
                                                              & (vlSelf->TestHarness__DOT__ram__DOT___fragmenter_1_auto_out_a_bits_address 
                                                                 << 3U))) 
                                                            >> 5U)])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            VTestHarness__ConstPool__CONST_h0d530b5b_0[
                                                            (6U 
                                                             & (vlSelf->TestHarness__DOT__ram__DOT___fragmenter_1_auto_out_a_bits_address 
                                                                >> 2U))]))))),64);
    bufp->fullBit(oldp+607,(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT___io_enq_ready_output));
    bufp->fullCData(oldp+608,(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__bundleIn_0_d_bits_size),3);
    bufp->fullCData(oldp+609,((0xfU & ((IData)(vlSelf->TestHarness__DOT__ram__DOT___fragmenter_1_auto_out_a_bits_source) 
                                       >> 4U))),4);
    bufp->fullCData(oldp+610,(vlSelf->TestHarness__DOT__ram__DOT___fragmenter_1_auto_out_a_bits_opcode),3);
    bufp->fullCData(oldp+611,((7U & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full)
                                      ? (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_param)
                                      : (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_4 
                                         >> 0x1bU)))),3);
    bufp->fullIData(oldp+612,(vlSelf->TestHarness__DOT__ram__DOT___fragmenter_1_auto_out_a_bits_address),18);
    bufp->fullCData(oldp+613,(((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full)
                                ? 0xffU : (0xffU & 
                                           (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_0 
                                            >> 1U)))),8);
    bufp->fullBit(oldp+614,((1U & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full)
                                    ? (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_corrupt)
                                    : (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_0 
                                       >> 0xaU)))));
    bufp->fullCData(oldp+615,(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__acknum),3);
    bufp->fullCData(oldp+616,(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__dOrig),3);
    bufp->fullBit(oldp+617,(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__dToggle));
    bufp->fullBit(oldp+618,((0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__acknum))));
    bufp->fullCData(oldp+619,(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__dFirst_size),3);
    bufp->fullCData(oldp+620,(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag),3);
    bufp->fullCData(oldp+621,(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__gennum),3);
    bufp->fullBit(oldp+622,((0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__gennum))));
    bufp->fullCData(oldp+623,(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__old_gennum1),3);
    bufp->fullBit(oldp+624,(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aToggle_r));
    bufp->fullBit(oldp+625,(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__a_first_done));
    bufp->fullCData(oldp+626,(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__d_first_counter),3);
    bufp->fullCData(oldp+627,(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__opcode_1),3);
    bufp->fullCData(oldp+628,(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__param_1),2);
    bufp->fullCData(oldp+629,(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__size_1),3);
    bufp->fullCData(oldp+630,(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__source_1),4);
    bufp->fullBit(oldp+631,(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__sink));
    bufp->fullBit(oldp+632,(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__denied));
    bufp->fullSData(oldp+633,(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__inflight),16);
    bufp->fullQData(oldp+634,(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__inflight_opcodes),64);
    bufp->fullQData(oldp+636,(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__inflight_sizes),64);
    bufp->fullCData(oldp+638,(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__d_first_counter_1),3);
    bufp->fullBit(oldp+639,((0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__d_first_counter_1))));
    bufp->fullIData(oldp+640,(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__watchdog),32);
    bufp->fullBit(oldp+641,(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_acc));
    bufp->fullBit(oldp+642,(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_acc_1));
    bufp->fullBit(oldp+643,(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_eq_2));
    bufp->fullBit(oldp+644,(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_acc_2));
    bufp->fullBit(oldp+645,(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_eq_3));
    bufp->fullBit(oldp+646,(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_acc_3));
    bufp->fullBit(oldp+647,(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_eq_4));
    bufp->fullBit(oldp+648,(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_acc_4));
    bufp->fullBit(oldp+649,(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_eq_5));
    bufp->fullBit(oldp+650,(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_acc_5));
    bufp->fullCData(oldp+651,(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_acc_5) 
                                 | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_eq_5) 
                                    & (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address))) 
                                << 7U) | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_acc_5) 
                                            | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_eq_5) 
                                               & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address)))) 
                                           << 6U) | 
                                          ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_acc_4) 
                                             | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_eq_4) 
                                                & (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address))) 
                                            << 5U) 
                                           | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_acc_4) 
                                                | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_eq_4) 
                                                   & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address)))) 
                                               << 4U) 
                                              | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_acc_3) 
                                                   | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_eq_3) 
                                                      & (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address))) 
                                                  << 3U) 
                                                 | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_acc_3) 
                                                      | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_eq_3) 
                                                         & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address)))) 
                                                     << 2U) 
                                                    | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_acc_2) 
                                                         | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_eq_2) 
                                                            & (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address))) 
                                                        << 1U) 
                                                       | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_acc_2) 
                                                          | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_eq_2) 
                                                             & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address)))))))))))),8);
    bufp->fullBit(oldp+652,(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__same_cycle_resp));
    bufp->fullBit(oldp+653,((0U != (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__old_gennum1))));
    bufp->fullBit(oldp+654,(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full));
    bufp->fullCData(oldp+655,(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT___repeater_io_deq_bits_size),3);
    bufp->fullCData(oldp+656,((0xfU & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full)
                                        ? (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_source)
                                        : (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_4 
                                           >> 0xbU)))),4);
    bufp->fullIData(oldp+657,((0x3ffffU & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full)
                                            ? vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_address
                                            : (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address)))),18);
    bufp->fullCData(oldp+658,((0xffU & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full)
                                         ? (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_mask)
                                         : (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_0 
                                            >> 1U)))),8);
    bufp->fullCData(oldp+659,(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_opcode),3);
    bufp->fullCData(oldp+660,(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_param),3);
    bufp->fullCData(oldp+661,(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_size),3);
    bufp->fullCData(oldp+662,(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_source),4);
    bufp->fullIData(oldp+663,(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_address),18);
    bufp->fullCData(oldp+664,(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_mask),8);
    bufp->fullBit(oldp+665,(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_corrupt));
    bufp->fullBit(oldp+666,(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done));
    bufp->fullWData(oldp+667,(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight),256);
    bufp->fullWData(oldp+675,(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_opcodes),1024);
    bufp->fullWData(oldp+707,(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes),1024);
    bufp->fullIData(oldp+739,(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__watchdog),32);
    bufp->fullBit(oldp+740,(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done));
    bufp->fullBit(oldp+741,((2U == (3U & (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag)))));
    bufp->fullBit(oldp+742,(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_acc));
    bufp->fullBit(oldp+743,(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_acc_1));
    bufp->fullBit(oldp+744,((1U == (3U & (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag)))));
    bufp->fullBit(oldp+745,(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_eq_2));
    bufp->fullBit(oldp+746,(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_acc_2));
    bufp->fullBit(oldp+747,(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_eq_3));
    bufp->fullBit(oldp+748,(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_acc_3));
    bufp->fullBit(oldp+749,(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_eq_4));
    bufp->fullBit(oldp+750,(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_acc_4));
    bufp->fullBit(oldp+751,(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_eq_5));
    bufp->fullBit(oldp+752,(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_acc_5));
    bufp->fullCData(oldp+753,(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_acc_5) 
                                 | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_eq_5) 
                                    & vlSelf->TestHarness__DOT__ram__DOT___fragmenter_1_auto_out_a_bits_address)) 
                                << 7U) | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_acc_5) 
                                            | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_eq_5) 
                                               & (~ vlSelf->TestHarness__DOT__ram__DOT___fragmenter_1_auto_out_a_bits_address))) 
                                           << 6U) | 
                                          ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_acc_4) 
                                             | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_eq_4) 
                                                & vlSelf->TestHarness__DOT__ram__DOT___fragmenter_1_auto_out_a_bits_address)) 
                                            << 5U) 
                                           | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_acc_4) 
                                                | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_eq_4) 
                                                   & (~ vlSelf->TestHarness__DOT__ram__DOT___fragmenter_1_auto_out_a_bits_address))) 
                                               << 4U) 
                                              | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_acc_3) 
                                                   | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_eq_3) 
                                                      & vlSelf->TestHarness__DOT__ram__DOT___fragmenter_1_auto_out_a_bits_address)) 
                                                  << 3U) 
                                                 | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_acc_3) 
                                                      | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_eq_3) 
                                                         & (~ vlSelf->TestHarness__DOT__ram__DOT___fragmenter_1_auto_out_a_bits_address))) 
                                                     << 2U) 
                                                    | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_acc_2) 
                                                         | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_eq_2) 
                                                            & vlSelf->TestHarness__DOT__ram__DOT___fragmenter_1_auto_out_a_bits_address)) 
                                                        << 1U) 
                                                       | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_acc_2) 
                                                          | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_eq_2) 
                                                             & (~ vlSelf->TestHarness__DOT__ram__DOT___fragmenter_1_auto_out_a_bits_address))))))))))),8);
    bufp->fullBit(oldp+754,(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT___portsAOI_in_0_a_ready_WIRE));
    bufp->fullBit(oldp+755,(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__out_9_valid));
    bufp->fullCData(oldp+756,(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__out_9_bits_opcode),3);
    bufp->fullCData(oldp+757,(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__out_9_bits_param),2);
    bufp->fullCData(oldp+758,(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__out_9_bits_size),3);
    bufp->fullCData(oldp+759,(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__out_9_bits_source),4);
    bufp->fullBit(oldp+760,(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__out_9_bits_sink));
    bufp->fullBit(oldp+761,(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__out_9_bits_denied));
    bufp->fullQData(oldp+762,((((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__muxStateEarly_0)
                                 ? (((QData)((IData)(
                                                     vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[2U])) 
                                     << 0x2fU) | (((QData)((IData)(
                                                                   vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[1U])) 
                                                   << 0xfU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U])) 
                                                     >> 0x11U)))
                                 : 0ULL) | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__muxStateEarly_1)
                                             ? ((0U 
                                                 != 
                                                 (0x7ffU 
                                                  & (vlSelf->TestHarness__DOT__ram__DOT___fragmenter_1_auto_out_a_bits_address 
                                                     >> 5U)))
                                                 ? 0ULL
                                                 : 
                                                (((QData)((IData)(
                                                                  VTestHarness__ConstPool__CONST_h0d530b5b_0[
                                                                  (((IData)(0x3fU) 
                                                                    + 
                                                                    (0xc0U 
                                                                     & (vlSelf->TestHarness__DOT__ram__DOT___fragmenter_1_auto_out_a_bits_address 
                                                                        << 3U))) 
                                                                   >> 5U)])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   VTestHarness__ConstPool__CONST_h0d530b5b_0[
                                                                   (6U 
                                                                    & (vlSelf->TestHarness__DOT__ram__DOT___fragmenter_1_auto_out_a_bits_address 
                                                                       >> 2U))]))))
                                             : 0ULL))),64);
    bufp->fullBit(oldp+764,(((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__muxStateEarly_0) 
                             & (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[2U] 
                                >> 0x11U))));
    bufp->fullBit(oldp+765,(vlSelf->TestHarness__DOT__ram__DOT___serdesser_auto_client_out_a_valid));
    bufp->fullBit(oldp+766,(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___outArb_io_in_1_ready));
    bufp->fullCData(oldp+767,(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__merged_bits_last_counter_1),3);
    bufp->fullCData(oldp+768,(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__merged_bits_last_counter_4),3);
    bufp->fullBit(oldp+769,(((4U != (7U & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_5 
                                           >> 1U))) 
                             & ((3U == (7U & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_5 
                                              >> 1U)))
                                 ? (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__full))
                                 : ((IData)(((0U == 
                                              (0xeU 
                                               & vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_5)) 
                                             & (~ (
                                                   (2U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_5 
                                                        >> 1U))) 
                                                   | (1U 
                                                      == 
                                                      (7U 
                                                       & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_5 
                                                          >> 1U))))))) 
                                    & (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT___portsAOI_in_0_a_ready_WIRE))))));
    bufp->fullBit(oldp+770,((1U & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__receiving)))));
    bufp->fullCData(oldp+771,((7U & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_5 
                                     >> 1U))),3);
    bufp->fullCData(oldp+772,((0xffU & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_4 
                                        >> 0x13U))),8);
    bufp->fullCData(oldp+773,((0xffU & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_4 
                                        >> 0xbU))),8);
    bufp->fullQData(oldp+774,(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address),64);
    bufp->fullSData(oldp+776,((0x1ffU & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_0 
                                         >> 1U))),9);
    bufp->fullIData(oldp+777,(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_0),32);
    bufp->fullIData(oldp+778,(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_1),32);
    bufp->fullIData(oldp+779,(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_2),32);
    bufp->fullIData(oldp+780,(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_3),32);
    bufp->fullIData(oldp+781,(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_4),32);
    bufp->fullIData(oldp+782,(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_5),32);
    bufp->fullCData(oldp+783,(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__recvCount),3);
    bufp->fullBit(oldp+784,((5U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__recvCount))));
    bufp->fullSData(oldp+785,(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__a_first_counter),9);
    bufp->fullCData(oldp+786,(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__opcode),3);
    bufp->fullCData(oldp+787,(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__param),3);
    bufp->fullCData(oldp+788,(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__size),4);
    bufp->fullBit(oldp+789,(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__source));
    bufp->fullIData(oldp+790,(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__address),32);
    bufp->fullSData(oldp+791,(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_counter),9);
    bufp->fullCData(oldp+792,(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__opcode_1),3);
    bufp->fullCData(oldp+793,(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__param_1),2);
    bufp->fullCData(oldp+794,(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__size_1),4);
    bufp->fullBit(oldp+795,(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__source_1));
    bufp->fullCData(oldp+796,(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__sink),4);
    bufp->fullBit(oldp+797,(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__denied));
    bufp->fullBit(oldp+798,(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__inflight));
    bufp->fullCData(oldp+799,(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__inflight_opcodes),4);
    bufp->fullCData(oldp+800,(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__inflight_sizes),8);
    bufp->fullSData(oldp+801,(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__a_first_counter_1),9);
    bufp->fullBit(oldp+802,((0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__a_first_counter_1))));
    bufp->fullSData(oldp+803,(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_counter_1),9);
    bufp->fullBit(oldp+804,((0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_counter_1))));
    bufp->fullBit(oldp+805,((6U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_opcode))));
    bufp->fullIData(oldp+806,(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__watchdog),32);
    bufp->fullSData(oldp+807,(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_counter_2),9);
    bufp->fullBit(oldp+808,((0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_counter_2))));
    bufp->fullBit(oldp+809,((2U == (3U & (vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                          >> 6U)))));
    bufp->fullBit(oldp+810,(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__mask_acc));
    bufp->fullBit(oldp+811,(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__mask_acc_1));
    bufp->fullBit(oldp+812,((1U == (3U & (vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                          >> 6U)))));
    bufp->fullBit(oldp+813,(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__mask_eq_2));
    bufp->fullBit(oldp+814,(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__mask_acc_2));
    bufp->fullBit(oldp+815,(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__mask_eq_3));
    bufp->fullBit(oldp+816,(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__mask_acc_3));
    bufp->fullBit(oldp+817,(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__mask_eq_4));
    bufp->fullBit(oldp+818,(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__mask_acc_4));
    bufp->fullBit(oldp+819,(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__mask_eq_5));
    bufp->fullBit(oldp+820,(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__mask_acc_5));
    bufp->fullCData(oldp+821,(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__mask_acc_5) 
                                 << 7U) | (0xfffff80U 
                                           & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__mask_eq_5) 
                                               << 7U) 
                                              & (vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                 >> 4U)))) 
                               | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__mask_acc_5) 
                                    | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__mask_eq_5) 
                                       & (~ (vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                             >> 0xbU)))) 
                                   << 6U) | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__mask_acc_4) 
                                               << 5U) 
                                              | (0x3ffffe0U 
                                                 & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__mask_eq_4) 
                                                     << 5U) 
                                                    & (vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                       >> 6U)))) 
                                             | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__mask_acc_4) 
                                                  | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__mask_eq_4) 
                                                     & (~ 
                                                        (vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                         >> 0xbU)))) 
                                                 << 4U) 
                                                | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__mask_acc_3) 
                                                     << 3U) 
                                                    | (0xfffff8U 
                                                       & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__mask_eq_3) 
                                                           << 3U) 
                                                          & (vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                             >> 8U)))) 
                                                   | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__mask_acc_3) 
                                                        | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__mask_eq_3) 
                                                           & (~ 
                                                              (vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                               >> 0xbU)))) 
                                                       << 2U) 
                                                      | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__mask_acc_2) 
                                                           << 1U) 
                                                          | (0x3ffffeU 
                                                             & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__mask_eq_2) 
                                                                 << 1U) 
                                                                & (vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                   >> 0xaU)))) 
                                                         | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__mask_acc_2) 
                                                            | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__mask_eq_2) 
                                                               & (~ 
                                                                  (vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                   >> 0xbU)))))))))))),8);
    bufp->fullBit(oldp+822,(((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___same_cycle_resp_T_1) 
                             & (~ (vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                   >> 0xaU)))));
    bufp->fullBit(oldp+823,(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__same_cycle_resp));
    bufp->fullCData(oldp+824,(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__out_9_bits_param),3);
    bufp->fullCData(oldp+825,(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__out_9_bits_size),8);
    bufp->fullCData(oldp+826,(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__out_9_bits_source),8);
    bufp->fullSData(oldp+827,((((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__out_9_bits_sink) 
                                << 1U) | (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__out_9_bits_denied))),9);
    bufp->fullBit(oldp+828,(((1U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__merged_bits_last_counter_1)) 
                             | (0U == ((1U & (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__out_9_bits_opcode))
                                        ? (7U & (~ 
                                                 (0x3ffU 
                                                  & (((IData)(0x3fU) 
                                                      << (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__out_9_bits_size)) 
                                                     >> 3U))))
                                        : 0U)))));
    bufp->fullCData(oldp+829,((0xfU & (vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                       >> 6U))),8);
    bufp->fullCData(oldp+830,((1U & (vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                     >> 0xaU))),8);
    bufp->fullQData(oldp+831,((QData)((IData)(((vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                                                << 0x15U) 
                                               | (vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                  >> 0xbU))))),64);
    bufp->fullSData(oldp+833,((0xffU & (vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                                        >> 0xbU))),9);
    bufp->fullBit(oldp+834,(((1U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__merged_bits_last_counter_4)) 
                             | (0U == ((4U & vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U])
                                        ? 0U : (7U 
                                                & (~ 
                                                   (0x3ffffU 
                                                    & (((IData)(0x3fU) 
                                                        << 
                                                        (0xfU 
                                                         & (vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                            >> 6U))) 
                                                       >> 3U)))))))));
    bufp->fullBit(oldp+835,((1U & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__outSer__DOT__sending)))));
    bufp->fullBit(oldp+836,(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__outArb__DOT___io_out_valid_output));
    bufp->fullCData(oldp+837,(((0x17U >= (0x1fU & ((IData)(3U) 
                                                   * (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__outArb__DOT__chosen))))
                                ? (7U & (0x92029cU 
                                         >> (0x1fU 
                                             & ((IData)(3U) 
                                                * (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__outArb__DOT__chosen)))))
                                : 0U)),3);
    bufp->fullCData(oldp+838,(((0x17U >= (0x1fU & ((IData)(3U) 
                                                   * (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__outArb__DOT__chosen))))
                                ? (7U & (((0x7000U 
                                           & (vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                              << 0xcU)) 
                                          | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__out_9_bits_opcode) 
                                             << 3U)) 
                                         >> (0x1fU 
                                             & ((IData)(3U) 
                                                * (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__outArb__DOT__chosen)))))
                                : 0U)),3);
    bufp->fullCData(oldp+839,(((0x17U >= (0x1fU & ((IData)(3U) 
                                                   * (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__outArb__DOT__chosen))))
                                ? (7U & (((0x7000U 
                                           & (vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                              << 9U)) 
                                          | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__out_9_bits_param) 
                                             << 3U)) 
                                         >> (0x1fU 
                                             & ((IData)(3U) 
                                                * (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__outArb__DOT__chosen)))))
                                : 0U)),3);
    bufp->fullCData(oldp+840,((0xffU & (IData)((((QData)((IData)(
                                                                 ((0xf000000U 
                                                                   & (vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                      << 0x12U)) 
                                                                  | (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__out_9_bits_size)))) 
                                                 << 8U) 
                                                >> 
                                                (0x3fU 
                                                 & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__outArb__DOT__chosen) 
                                                    << 3U)))))),8);
    bufp->fullCData(oldp+841,((0xffU & (IData)((((QData)((IData)(
                                                                 ((0x1000000U 
                                                                   & (vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                      << 0xeU)) 
                                                                  | (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__out_9_bits_source)))) 
                                                 << 8U) 
                                                >> 
                                                (0x3fU 
                                                 & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__outArb__DOT__chosen) 
                                                    << 3U)))))),8);
    VL_EXTEND_WI(256,32, __Vtemp_h6dc3c392__0, ((vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                                                 << 0x15U) 
                                                | (vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 0xbU)));
    __Vtemp_hcda8551e__0[0U] = 0U;
    __Vtemp_hcda8551e__0[1U] = 0U;
    __Vtemp_hcda8551e__0[2U] = 0U;
    __Vtemp_hcda8551e__0[3U] = 0U;
    __Vtemp_hcda8551e__0[4U] = 0U;
    __Vtemp_hcda8551e__0[5U] = 0U;
    __Vtemp_hcda8551e__0[6U] = 0U;
    __Vtemp_hcda8551e__0[7U] = 0U;
    __Vtemp_hcda8551e__0[8U] = __Vtemp_h6dc3c392__0[0U];
    __Vtemp_hcda8551e__0[9U] = __Vtemp_h6dc3c392__0[1U];
    __Vtemp_hcda8551e__0[0xaU] = __Vtemp_h6dc3c392__0[2U];
    __Vtemp_hcda8551e__0[0xbU] = __Vtemp_h6dc3c392__0[3U];
    __Vtemp_hcda8551e__0[0xcU] = __Vtemp_h6dc3c392__0[4U];
    __Vtemp_hcda8551e__0[0xdU] = __Vtemp_h6dc3c392__0[5U];
    __Vtemp_hcda8551e__0[0xeU] = __Vtemp_h6dc3c392__0[6U];
    __Vtemp_hcda8551e__0[0xfU] = __Vtemp_h6dc3c392__0[7U];
    bufp->fullQData(oldp+842,((((QData)((IData)(__Vtemp_hcda8551e__0[
                                                (((IData)(0x3fU) 
                                                  + 
                                                  (0x1ffU 
                                                   & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__outArb__DOT__chosen) 
                                                      << 6U))) 
                                                 >> 5U)])) 
                                << ((0U == (0x1fU & 
                                            ((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__outArb__DOT__chosen) 
                                             << 6U)))
                                     ? 0x20U : ((IData)(0x40U) 
                                                - (0x1fU 
                                                   & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__outArb__DOT__chosen) 
                                                      << 6U))))) 
                               | (((0U == (0x1fU & 
                                           ((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__outArb__DOT__chosen) 
                                            << 6U)))
                                    ? 0ULL : ((QData)((IData)(
                                                              __Vtemp_hcda8551e__0[
                                                              (((IData)(0x1fU) 
                                                                + 
                                                                (0x1ffU 
                                                                 & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__outArb__DOT__chosen) 
                                                                    << 6U))) 
                                                               >> 5U)])) 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__outArb__DOT__chosen) 
                                                      << 6U))))) 
                                  | ((QData)((IData)(
                                                     __Vtemp_hcda8551e__0[
                                                     (0xeU 
                                                      & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__outArb__DOT__chosen) 
                                                         << 1U))])) 
                                     >> (0x1fU & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__outArb__DOT__chosen) 
                                                  << 6U)))))),64);
    VL_EXTEND_WQ(256,64, __Vtemp_h1057784a__0, (((QData)((IData)(
                                                                 vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[3U])) 
                                                 << 0x2dU) 
                                                | (((QData)((IData)(
                                                                    vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[2U])) 
                                                    << 0xdU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[1U])) 
                                                      >> 0x13U))));
    __Vtemp_h11fbba22__0[0U] = 0U;
    __Vtemp_h11fbba22__0[1U] = 0U;
    __Vtemp_h11fbba22__0[2U] = (IData)((((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__muxStateEarly_0)
                                          ? (((QData)((IData)(
                                                              vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[2U])) 
                                              << 0x2fU) 
                                             | (((QData)((IData)(
                                                                 vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[1U])) 
                                                 << 0xfU) 
                                                | ((QData)((IData)(
                                                                   vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U])) 
                                                   >> 0x11U)))
                                          : 0ULL) | 
                                        ((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__muxStateEarly_1)
                                          ? ((0U != 
                                              (0x7ffU 
                                               & (vlSelf->TestHarness__DOT__ram__DOT___fragmenter_1_auto_out_a_bits_address 
                                                  >> 5U)))
                                              ? 0ULL
                                              : (((QData)((IData)(
                                                                  VTestHarness__ConstPool__CONST_h0d530b5b_0[
                                                                  (((IData)(0x3fU) 
                                                                    + 
                                                                    (0xc0U 
                                                                     & (vlSelf->TestHarness__DOT__ram__DOT___fragmenter_1_auto_out_a_bits_address 
                                                                        << 3U))) 
                                                                   >> 5U)])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   VTestHarness__ConstPool__CONST_h0d530b5b_0[
                                                                   (6U 
                                                                    & (vlSelf->TestHarness__DOT__ram__DOT___fragmenter_1_auto_out_a_bits_address 
                                                                       >> 2U))]))))
                                          : 0ULL)));
    __Vtemp_h11fbba22__0[3U] = (IData)(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__muxStateEarly_0)
                                           ? (((QData)((IData)(
                                                               vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[2U])) 
                                               << 0x2fU) 
                                              | (((QData)((IData)(
                                                                  vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[1U])) 
                                                  << 0xfU) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U])) 
                                                    >> 0x11U)))
                                           : 0ULL) 
                                         | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__muxStateEarly_1)
                                             ? ((0U 
                                                 != 
                                                 (0x7ffU 
                                                  & (vlSelf->TestHarness__DOT__ram__DOT___fragmenter_1_auto_out_a_bits_address 
                                                     >> 5U)))
                                                 ? 0ULL
                                                 : 
                                                (((QData)((IData)(
                                                                  VTestHarness__ConstPool__CONST_h0d530b5b_0[
                                                                  (((IData)(0x3fU) 
                                                                    + 
                                                                    (0xc0U 
                                                                     & (vlSelf->TestHarness__DOT__ram__DOT___fragmenter_1_auto_out_a_bits_address 
                                                                        << 3U))) 
                                                                   >> 5U)])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   VTestHarness__ConstPool__CONST_h0d530b5b_0[
                                                                   (6U 
                                                                    & (vlSelf->TestHarness__DOT__ram__DOT___fragmenter_1_auto_out_a_bits_address 
                                                                       >> 2U))]))))
                                             : 0ULL)) 
                                        >> 0x20U));
    __Vtemp_h11fbba22__0[4U] = 0U;
    __Vtemp_h11fbba22__0[5U] = 0U;
    __Vtemp_h11fbba22__0[6U] = 0U;
    __Vtemp_h11fbba22__0[7U] = 0U;
    __Vtemp_h11fbba22__0[8U] = __Vtemp_h1057784a__0[0U];
    __Vtemp_h11fbba22__0[9U] = __Vtemp_h1057784a__0[1U];
    __Vtemp_h11fbba22__0[0xaU] = __Vtemp_h1057784a__0[2U];
    __Vtemp_h11fbba22__0[0xbU] = __Vtemp_h1057784a__0[3U];
    __Vtemp_h11fbba22__0[0xcU] = __Vtemp_h1057784a__0[4U];
    __Vtemp_h11fbba22__0[0xdU] = __Vtemp_h1057784a__0[5U];
    __Vtemp_h11fbba22__0[0xeU] = __Vtemp_h1057784a__0[6U];
    __Vtemp_h11fbba22__0[0xfU] = __Vtemp_h1057784a__0[7U];
    bufp->fullQData(oldp+844,((((QData)((IData)(__Vtemp_h11fbba22__0[
                                                (((IData)(0x3fU) 
                                                  + 
                                                  (0x1ffU 
                                                   & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__outArb__DOT__chosen) 
                                                      << 6U))) 
                                                 >> 5U)])) 
                                << ((0U == (0x1fU & 
                                            ((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__outArb__DOT__chosen) 
                                             << 6U)))
                                     ? 0x20U : ((IData)(0x40U) 
                                                - (0x1fU 
                                                   & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__outArb__DOT__chosen) 
                                                      << 6U))))) 
                               | (((0U == (0x1fU & 
                                           ((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__outArb__DOT__chosen) 
                                            << 6U)))
                                    ? 0ULL : ((QData)((IData)(
                                                              __Vtemp_h11fbba22__0[
                                                              (((IData)(0x1fU) 
                                                                + 
                                                                (0x1ffU 
                                                                 & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__outArb__DOT__chosen) 
                                                                    << 6U))) 
                                                               >> 5U)])) 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__outArb__DOT__chosen) 
                                                      << 6U))))) 
                                  | ((QData)((IData)(
                                                     __Vtemp_h11fbba22__0[
                                                     (0xeU 
                                                      & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__outArb__DOT__chosen) 
                                                         << 1U))])) 
                                     >> (0x1fU & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__outArb__DOT__chosen) 
                                                  << 6U)))))),64);
    bufp->fullBit(oldp+846,((1U & (((0x10U & (vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[3U] 
                                              >> 0xfU)) 
                                    | (0xfffeU & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__muxStateEarly_0) 
                                                   << 1U) 
                                                  & (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[2U] 
                                                     >> 0x10U)))) 
                                   >> (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__outArb__DOT__chosen)))));
    VL_EXTEND_WQ(72,45, __Vtemp_h41b4f491__0, (((QData)((IData)(
                                                                (0xffU 
                                                                 & (vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                                                                    >> 0xbU)))) 
                                                << 0x24U) 
                                               | (QData)((IData)(
                                                                 (((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__out_9_bits_sink) 
                                                                   << 0xaU) 
                                                                  | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__out_9_bits_denied) 
                                                                     << 9U))))));
    bufp->fullSData(oldp+847,(((0x47U >= (0x7fU & ((IData)(9U) 
                                                   * (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__outArb__DOT__chosen))))
                                ? (0x1ffU & (((0U == 
                                               (0x1fU 
                                                & ((IData)(9U) 
                                                   * (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__outArb__DOT__chosen))))
                                               ? 0U
                                               : (__Vtemp_h41b4f491__0[
                                                  (((IData)(8U) 
                                                    + 
                                                    (0x7fU 
                                                     & ((IData)(9U) 
                                                        * (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__outArb__DOT__chosen)))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(9U) 
                                                       * (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__outArb__DOT__chosen)))))) 
                                             | (__Vtemp_h41b4f491__0[
                                                (3U 
                                                 & (((IData)(9U) 
                                                     * (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__outArb__DOT__chosen)) 
                                                    >> 5U))] 
                                                >> 
                                                (0x1fU 
                                                 & ((IData)(9U) 
                                                    * (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__outArb__DOT__chosen))))))
                                : 0U)),9);
    bufp->fullBit(oldp+848,(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__outArb__DOT___io_out_bits_last_output));
    bufp->fullCData(oldp+849,(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__outArb__DOT__lockIdx),3);
    bufp->fullBit(oldp+850,(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__outArb__DOT__locked));
    bufp->fullCData(oldp+851,(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__outArb__DOT__chosen),3);
    bufp->fullCData(oldp+852,(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__outSer__DOT__sendCount),3);
    bufp->fullBit(oldp+853,((5U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__outSer__DOT__sendCount))));
    bufp->fullCData(oldp+854,((0xffU & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__REG)
                                         ? (IData)(
                                                   (vlSelf->TestHarness__DOT__ram__DOT__srams__DOT___mem_RW0_rdata 
                                                    >> 0x38U))
                                         : (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__r_7)))),8);
    bufp->fullCData(oldp+855,((0xffU & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__REG)
                                         ? (IData)(
                                                   (vlSelf->TestHarness__DOT__ram__DOT__srams__DOT___mem_RW0_rdata 
                                                    >> 0x30U))
                                         : (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__r_6)))),8);
    bufp->fullCData(oldp+856,((0xffU & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__REG)
                                         ? (IData)(
                                                   (vlSelf->TestHarness__DOT__ram__DOT__srams__DOT___mem_RW0_rdata 
                                                    >> 0x28U))
                                         : (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__r_5)))),8);
    bufp->fullCData(oldp+857,((0xffU & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__REG)
                                         ? (IData)(
                                                   (vlSelf->TestHarness__DOT__ram__DOT__srams__DOT___mem_RW0_rdata 
                                                    >> 0x20U))
                                         : (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__r_4)))),8);
    bufp->fullCData(oldp+858,((0xffU & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__REG)
                                         ? (IData)(
                                                   (vlSelf->TestHarness__DOT__ram__DOT__srams__DOT___mem_RW0_rdata 
                                                    >> 0x18U))
                                         : (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__r_3)))),8);
    bufp->fullCData(oldp+859,((0xffU & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__REG)
                                         ? (IData)(
                                                   (vlSelf->TestHarness__DOT__ram__DOT__srams__DOT___mem_RW0_rdata 
                                                    >> 0x10U))
                                         : (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__r_2)))),8);
    bufp->fullCData(oldp+860,((0xffU & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__REG)
                                         ? (IData)(
                                                   (vlSelf->TestHarness__DOT__ram__DOT__srams__DOT___mem_RW0_rdata 
                                                    >> 8U))
                                         : (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__r_1)))),8);
    bufp->fullCData(oldp+861,((0xffU & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__REG)
                                         ? (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT___mem_RW0_rdata)
                                         : (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__r_0)))),8);
    bufp->fullCData(oldp+862,((0xffU & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__d_wb)
                                         ? ((IData)(
                                                    (((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__d_mask) 
                                                      >> 7U) 
                                                     & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__d_read))))
                                             ? (IData)(
                                                       (vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__d_rmw_data 
                                                        >> 0x38U))
                                             : (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__d_raw_data_7))
                                         : ((vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[3U] 
                                             << 0x13U) 
                                            | (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[3U] 
                                               >> 0xdU))))),8);
    bufp->fullCData(oldp+863,((0xffU & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__d_wb)
                                         ? ((1U & (
                                                   ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__d_mask) 
                                                    >> 6U) 
                                                   & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__d_read))))
                                             ? (IData)(
                                                       (vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__d_rmw_data 
                                                        >> 0x30U))
                                             : (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__d_raw_data_6))
                                         : ((vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[3U] 
                                             << 0x1bU) 
                                            | (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[3U] 
                                               >> 5U))))),8);
    bufp->fullCData(oldp+864,((0xffU & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__d_wb)
                                         ? ((1U & (
                                                   ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__d_mask) 
                                                    >> 5U) 
                                                   & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__d_read))))
                                             ? (IData)(
                                                       (vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__d_rmw_data 
                                                        >> 0x28U))
                                             : (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__d_raw_data_5))
                                         : ((vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[3U] 
                                             << 3U) 
                                            | (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[2U] 
                                               >> 0x1dU))))),8);
    bufp->fullCData(oldp+865,((0xffU & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__d_wb)
                                         ? ((1U & (
                                                   ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__d_mask) 
                                                    >> 4U) 
                                                   & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__d_read))))
                                             ? (IData)(
                                                       (vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__d_rmw_data 
                                                        >> 0x20U))
                                             : (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__d_raw_data_4))
                                         : ((vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[2U] 
                                             << 0xbU) 
                                            | (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[2U] 
                                               >> 0x15U))))),8);
    bufp->fullCData(oldp+866,((0xffU & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__d_wb)
                                         ? ((1U & (
                                                   ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__d_mask) 
                                                    >> 3U) 
                                                   & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__d_read))))
                                             ? (IData)(
                                                       (vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__d_rmw_data 
                                                        >> 0x18U))
                                             : (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__d_raw_data_3))
                                         : ((vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[2U] 
                                             << 0x13U) 
                                            | (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[2U] 
                                               >> 0xdU))))),8);
    bufp->fullCData(oldp+867,((0xffU & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__d_wb)
                                         ? ((1U & (
                                                   ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__d_mask) 
                                                    >> 2U) 
                                                   & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__d_read))))
                                             ? (IData)(
                                                       (vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__d_rmw_data 
                                                        >> 0x10U))
                                             : (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__d_raw_data_2))
                                         : ((vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[2U] 
                                             << 0x1bU) 
                                            | (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[2U] 
                                               >> 5U))))),8);
    bufp->fullCData(oldp+868,((0xffU & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__d_wb)
                                         ? ((1U & (
                                                   ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__d_mask) 
                                                    >> 1U) 
                                                   & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__d_read))))
                                             ? (IData)(
                                                       (vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__d_rmw_data 
                                                        >> 8U))
                                             : (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__d_raw_data_1))
                                         : ((vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[2U] 
                                             << 3U) 
                                            | (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                                               >> 0x1dU))))),8);
    bufp->fullCData(oldp+869,((0xffU & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__d_wb)
                                         ? ((1U & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__d_mask) 
                                                   & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__d_read))))
                                             ? (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__d_rmw_data)
                                             : (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__d_raw_data_0))
                                         : ((vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                                             << 0xbU) 
                                            | (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                                               >> 0x15U))))),8);
    bufp->fullBit(oldp+870,(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__mem_MPORT_en));
    bufp->fullBit(oldp+871,(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__mem_MPORT_1_en));
    bufp->fullBit(oldp+872,(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__d_full));
    bufp->fullBit(oldp+873,(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__d_respond));
    bufp->fullCData(oldp+874,(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__d_size),2);
    bufp->fullCData(oldp+875,(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__d_source),8);
    bufp->fullBit(oldp+876,(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__d_read));
    bufp->fullBit(oldp+877,(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__d_atomic));
    bufp->fullBit(oldp+878,(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__d_sublane));
    bufp->fullIData(oldp+879,(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__d_address),29);
    bufp->fullCData(oldp+880,(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__d_mask),8);
    bufp->fullQData(oldp+881,(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__d_rmw_data),64);
    bufp->fullCData(oldp+883,(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__d_raw_data_0),8);
    bufp->fullCData(oldp+884,(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__d_raw_data_1),8);
    bufp->fullCData(oldp+885,(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__d_raw_data_2),8);
    bufp->fullCData(oldp+886,(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__d_raw_data_3),8);
    bufp->fullCData(oldp+887,(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__d_raw_data_4),8);
    bufp->fullCData(oldp+888,(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__d_raw_data_5),8);
    bufp->fullCData(oldp+889,(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__d_raw_data_6),8);
    bufp->fullCData(oldp+890,(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__d_raw_data_7),8);
    bufp->fullBit(oldp+891,(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__r_full));
    bufp->fullCData(oldp+892,(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__r_size),2);
    bufp->fullCData(oldp+893,(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__r_source),8);
    bufp->fullBit(oldp+894,(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__r_read));
    bufp->fullBit(oldp+895,(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__r_atomic));
    bufp->fullBit(oldp+896,(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__r_sublane));
    bufp->fullIData(oldp+897,(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__r_address),29);
    bufp->fullCData(oldp+898,(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__r_mask),8);
    bufp->fullQData(oldp+899,(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__r_rmw_data),64);
    bufp->fullBit(oldp+901,(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__d_mux));
    bufp->fullBit(oldp+902,(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__d_wb));
    bufp->fullBit(oldp+903,(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__d_ready));
    bufp->fullBit(oldp+904,(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__r_ready));
    bufp->fullBit(oldp+905,((4U == (7U & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))));
    bufp->fullBit(oldp+906,(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__a_fire));
    bufp->fullBit(oldp+907,(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__REG));
    bufp->fullCData(oldp+908,(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__r_0),8);
    bufp->fullCData(oldp+909,(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__r_1),8);
    bufp->fullCData(oldp+910,(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__r_2),8);
    bufp->fullCData(oldp+911,(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__r_3),8);
    bufp->fullCData(oldp+912,(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__r_4),8);
    bufp->fullCData(oldp+913,(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__r_5),8);
    bufp->fullCData(oldp+914,(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__r_6),8);
    bufp->fullCData(oldp+915,(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__r_7),8);
    bufp->fullSData(oldp+916,(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT____Vcellinp__mem__RW0_addr),9);
    bufp->fullBit(oldp+917,(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT____Vcellinp__mem__RW0_en));
    bufp->fullQData(oldp+918,(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT____Vcellinp__mem__RW0_wdata),64);
    bufp->fullCData(oldp+920,(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT____Vcellinp__mem__RW0_wmask),8);
    bufp->fullQData(oldp+921,(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT___mem_RW0_rdata),64);
    bufp->fullCData(oldp+923,((0xffU & (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT____Vcellinp__mem__RW0_wdata))),8);
    bufp->fullCData(oldp+924,(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_1_ext__DOT__mem_0_0__DOT__ram
                              [vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_1_ext__DOT__mem_0_0__DOT__ram_RW_0_r_addr_pipe_0]),8);
    bufp->fullBit(oldp+925,((1U & (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT____Vcellinp__mem__RW0_wmask))));
    bufp->fullCData(oldp+926,((0xffU & (IData)((vlSelf->TestHarness__DOT__ram__DOT__srams__DOT____Vcellinp__mem__RW0_wdata 
                                                >> 8U)))),8);
    bufp->fullCData(oldp+927,(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_1_ext__DOT__mem_0_1__DOT__ram
                              [vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_1_ext__DOT__mem_0_1__DOT__ram_RW_0_r_addr_pipe_0]),8);
    bufp->fullBit(oldp+928,((1U & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT____Vcellinp__mem__RW0_wmask) 
                                   >> 1U))));
    bufp->fullCData(oldp+929,((0xffU & (IData)((vlSelf->TestHarness__DOT__ram__DOT__srams__DOT____Vcellinp__mem__RW0_wdata 
                                                >> 0x10U)))),8);
    bufp->fullCData(oldp+930,(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_1_ext__DOT__mem_0_2__DOT__ram
                              [vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_1_ext__DOT__mem_0_2__DOT__ram_RW_0_r_addr_pipe_0]),8);
    bufp->fullBit(oldp+931,((1U & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT____Vcellinp__mem__RW0_wmask) 
                                   >> 2U))));
    bufp->fullCData(oldp+932,((0xffU & (IData)((vlSelf->TestHarness__DOT__ram__DOT__srams__DOT____Vcellinp__mem__RW0_wdata 
                                                >> 0x18U)))),8);
    bufp->fullCData(oldp+933,(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_1_ext__DOT__mem_0_3__DOT__ram
                              [vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_1_ext__DOT__mem_0_3__DOT__ram_RW_0_r_addr_pipe_0]),8);
    bufp->fullBit(oldp+934,((1U & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT____Vcellinp__mem__RW0_wmask) 
                                   >> 3U))));
    bufp->fullCData(oldp+935,((0xffU & (IData)((vlSelf->TestHarness__DOT__ram__DOT__srams__DOT____Vcellinp__mem__RW0_wdata 
                                                >> 0x20U)))),8);
    bufp->fullCData(oldp+936,(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_1_ext__DOT__mem_0_4__DOT__ram
                              [vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_1_ext__DOT__mem_0_4__DOT__ram_RW_0_r_addr_pipe_0]),8);
    bufp->fullBit(oldp+937,((1U & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT____Vcellinp__mem__RW0_wmask) 
                                   >> 4U))));
    bufp->fullCData(oldp+938,((0xffU & (IData)((vlSelf->TestHarness__DOT__ram__DOT__srams__DOT____Vcellinp__mem__RW0_wdata 
                                                >> 0x28U)))),8);
    bufp->fullCData(oldp+939,(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_1_ext__DOT__mem_0_5__DOT__ram
                              [vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_1_ext__DOT__mem_0_5__DOT__ram_RW_0_r_addr_pipe_0]),8);
    bufp->fullBit(oldp+940,((1U & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT____Vcellinp__mem__RW0_wmask) 
                                   >> 5U))));
    bufp->fullCData(oldp+941,((0xffU & (IData)((vlSelf->TestHarness__DOT__ram__DOT__srams__DOT____Vcellinp__mem__RW0_wdata 
                                                >> 0x30U)))),8);
    bufp->fullCData(oldp+942,(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_1_ext__DOT__mem_0_6__DOT__ram
                              [vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_1_ext__DOT__mem_0_6__DOT__ram_RW_0_r_addr_pipe_0]),8);
    bufp->fullBit(oldp+943,((1U & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT____Vcellinp__mem__RW0_wmask) 
                                   >> 6U))));
    bufp->fullCData(oldp+944,((0xffU & (IData)((vlSelf->TestHarness__DOT__ram__DOT__srams__DOT____Vcellinp__mem__RW0_wdata 
                                                >> 0x38U)))),8);
    bufp->fullCData(oldp+945,(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_1_ext__DOT__mem_0_7__DOT__ram
                              [vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_1_ext__DOT__mem_0_7__DOT__ram_RW_0_r_addr_pipe_0]),8);
    bufp->fullBit(oldp+946,((1U & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT____Vcellinp__mem__RW0_wmask) 
                                   >> 7U))));
    bufp->fullQData(oldp+947,((((QData)((IData)(((vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_1_ext__DOT__mem_0_7__DOT__ram
                                                  [vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_1_ext__DOT__mem_0_7__DOT__ram_RW_0_r_addr_pipe_0] 
                                                  << 0x18U) 
                                                 | ((vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_1_ext__DOT__mem_0_6__DOT__ram
                                                     [vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_1_ext__DOT__mem_0_6__DOT__ram_RW_0_r_addr_pipe_0] 
                                                     << 0x10U) 
                                                    | ((vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_1_ext__DOT__mem_0_5__DOT__ram
                                                        [vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_1_ext__DOT__mem_0_5__DOT__ram_RW_0_r_addr_pipe_0] 
                                                        << 8U) 
                                                       | vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_1_ext__DOT__mem_0_4__DOT__ram
                                                       [vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_1_ext__DOT__mem_0_4__DOT__ram_RW_0_r_addr_pipe_0]))))) 
                                << 0x20U) | (QData)((IData)(
                                                            ((vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_1_ext__DOT__mem_0_3__DOT__ram
                                                              [vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_1_ext__DOT__mem_0_3__DOT__ram_RW_0_r_addr_pipe_0] 
                                                              << 0x18U) 
                                                             | ((vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_1_ext__DOT__mem_0_2__DOT__ram
                                                                 [vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_1_ext__DOT__mem_0_2__DOT__ram_RW_0_r_addr_pipe_0] 
                                                                 << 0x10U) 
                                                                | ((vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_1_ext__DOT__mem_0_1__DOT__ram
                                                                    [vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_1_ext__DOT__mem_0_1__DOT__ram_RW_0_r_addr_pipe_0] 
                                                                    << 8U) 
                                                                   | vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_1_ext__DOT__mem_0_0__DOT__ram
                                                                   [vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_1_ext__DOT__mem_0_0__DOT__ram_RW_0_r_addr_pipe_0]))))))),64);
    bufp->fullBit(oldp+949,(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_1_ext__DOT__mem_0_0__DOT__ram_RW_0_r_en_pipe_0));
    bufp->fullSData(oldp+950,(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_1_ext__DOT__mem_0_0__DOT__ram_RW_0_r_addr_pipe_0),9);
    bufp->fullBit(oldp+951,(((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT____Vcellinp__mem__RW0_en) 
                             & (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__mem_MPORT_1_en))));
    bufp->fullBit(oldp+952,(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_1_ext__DOT__mem_0_1__DOT__ram_RW_0_r_en_pipe_0));
    bufp->fullSData(oldp+953,(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_1_ext__DOT__mem_0_1__DOT__ram_RW_0_r_addr_pipe_0),9);
    bufp->fullBit(oldp+954,(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_1_ext__DOT__mem_0_2__DOT__ram_RW_0_r_en_pipe_0));
    bufp->fullSData(oldp+955,(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_1_ext__DOT__mem_0_2__DOT__ram_RW_0_r_addr_pipe_0),9);
    bufp->fullBit(oldp+956,(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_1_ext__DOT__mem_0_3__DOT__ram_RW_0_r_en_pipe_0));
    bufp->fullSData(oldp+957,(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_1_ext__DOT__mem_0_3__DOT__ram_RW_0_r_addr_pipe_0),9);
    bufp->fullBit(oldp+958,(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_1_ext__DOT__mem_0_4__DOT__ram_RW_0_r_en_pipe_0));
    bufp->fullSData(oldp+959,(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_1_ext__DOT__mem_0_4__DOT__ram_RW_0_r_addr_pipe_0),9);
    bufp->fullBit(oldp+960,(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_1_ext__DOT__mem_0_5__DOT__ram_RW_0_r_en_pipe_0));
    bufp->fullSData(oldp+961,(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_1_ext__DOT__mem_0_5__DOT__ram_RW_0_r_addr_pipe_0),9);
    bufp->fullBit(oldp+962,(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_1_ext__DOT__mem_0_6__DOT__ram_RW_0_r_en_pipe_0));
    bufp->fullSData(oldp+963,(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_1_ext__DOT__mem_0_6__DOT__ram_RW_0_r_addr_pipe_0),9);
    bufp->fullBit(oldp+964,(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_1_ext__DOT__mem_0_7__DOT__ram_RW_0_r_en_pipe_0));
    bufp->fullSData(oldp+965,(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_1_ext__DOT__mem_0_7__DOT__ram_RW_0_r_addr_pipe_0),9);
    bufp->fullBit(oldp+966,(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done));
    bufp->fullWData(oldp+967,(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight),256);
    bufp->fullWData(oldp+975,(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes),1024);
    bufp->fullWData(oldp+1007,(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes),1024);
    bufp->fullBit(oldp+1039,((6U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__in_d_bits_opcode))));
    bufp->fullIData(oldp+1040,(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__watchdog),32);
    bufp->fullBit(oldp+1041,(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_done));
    bufp->fullBit(oldp+1042,((2U == (3U & (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                           >> 6U)))));
    bufp->fullBit(oldp+1043,(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_acc));
    bufp->fullBit(oldp+1044,(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_acc_1));
    bufp->fullBit(oldp+1045,((1U == (3U & (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                           >> 6U)))));
    bufp->fullBit(oldp+1046,(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_eq_2));
    bufp->fullBit(oldp+1047,(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_acc_2));
    bufp->fullBit(oldp+1048,(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_eq_3));
    bufp->fullBit(oldp+1049,(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_acc_3));
    bufp->fullBit(oldp+1050,(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_eq_4));
    bufp->fullBit(oldp+1051,(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_acc_4));
    bufp->fullBit(oldp+1052,(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_eq_5));
    bufp->fullBit(oldp+1053,(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_acc_5));
    bufp->fullCData(oldp+1054,(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_acc_5) 
                                  << 7U) | (0x7fff80U 
                                            & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_eq_5) 
                                                << 7U) 
                                               & (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                  >> 9U)))) 
                                | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_acc_5) 
                                     | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_eq_5) 
                                        & (~ (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                              >> 0x10U)))) 
                                    << 6U) | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_acc_4) 
                                                << 5U) 
                                               | (0x1fffe0U 
                                                  & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_eq_4) 
                                                      << 5U) 
                                                     & (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                        >> 0xbU)))) 
                                              | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_acc_4) 
                                                   | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_eq_4) 
                                                      & (~ 
                                                         (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                          >> 0x10U)))) 
                                                  << 4U) 
                                                 | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_acc_3) 
                                                      << 3U) 
                                                     | (0x7fff8U 
                                                        & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_eq_3) 
                                                            << 3U) 
                                                           & (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                              >> 0xdU)))) 
                                                    | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_acc_3) 
                                                         | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_eq_3) 
                                                            & (~ 
                                                               (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                >> 0x10U)))) 
                                                        << 2U) 
                                                       | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_acc_2) 
                                                            << 1U) 
                                                           | (0x1fffeU 
                                                              & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_eq_2) 
                                                                  << 1U) 
                                                                 & (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                    >> 0xfU)))) 
                                                          | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_acc_2) 
                                                             | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_eq_2) 
                                                                & (~ 
                                                                   (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                    >> 0x10U)))))))))))),8);
    VL_EXTEND_WI(256,8, __Vtemp_hab13b6e5__0, (0xffU 
                                               & (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                  >> 8U)));
    VL_SHIFTL_WWW(256,256,256, __Vtemp_h2f0d85ba__0, VTestHarness__ConstPool__CONST_h4e9f510d_0, __Vtemp_hab13b6e5__0);
    if (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT__empty) {
        __Vtemp_h0a544f99__0[0U] = VTestHarness__ConstPool__CONST_h9e67c271_0[0U];
        __Vtemp_h0a544f99__0[1U] = VTestHarness__ConstPool__CONST_h9e67c271_0[1U];
        __Vtemp_h0a544f99__0[2U] = VTestHarness__ConstPool__CONST_h9e67c271_0[2U];
        __Vtemp_h0a544f99__0[3U] = VTestHarness__ConstPool__CONST_h9e67c271_0[3U];
        __Vtemp_h0a544f99__0[4U] = VTestHarness__ConstPool__CONST_h9e67c271_0[4U];
        __Vtemp_h0a544f99__0[5U] = VTestHarness__ConstPool__CONST_h9e67c271_0[5U];
        __Vtemp_h0a544f99__0[6U] = VTestHarness__ConstPool__CONST_h9e67c271_0[6U];
        __Vtemp_h0a544f99__0[7U] = VTestHarness__ConstPool__CONST_h9e67c271_0[7U];
    } else {
        __Vtemp_h0a544f99__0[0U] = __Vtemp_h2f0d85ba__0[0U];
        __Vtemp_h0a544f99__0[1U] = __Vtemp_h2f0d85ba__0[1U];
        __Vtemp_h0a544f99__0[2U] = __Vtemp_h2f0d85ba__0[2U];
        __Vtemp_h0a544f99__0[3U] = __Vtemp_h2f0d85ba__0[3U];
        __Vtemp_h0a544f99__0[4U] = __Vtemp_h2f0d85ba__0[4U];
        __Vtemp_h0a544f99__0[5U] = __Vtemp_h2f0d85ba__0[5U];
        __Vtemp_h0a544f99__0[6U] = __Vtemp_h2f0d85ba__0[6U];
        __Vtemp_h0a544f99__0[7U] = __Vtemp_h2f0d85ba__0[7U];
    }
    bufp->fullWData(oldp+1055,(__Vtemp_h0a544f99__0),256);
    bufp->fullBit(oldp+1063,(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__same_cycle_resp));
    bufp->fullCData(oldp+1064,(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__beatsLeft),3);
    bufp->fullBit(oldp+1065,((0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__beatsLeft))));
    bufp->fullCData(oldp+1066,(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__readys_valid),2);
    bufp->fullCData(oldp+1067,(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__readys_mask),2);
    bufp->fullCData(oldp+1068,(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__readys_readys),2);
    bufp->fullBit(oldp+1069,(((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__readys_readys) 
                              & (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__bundleIn_0_d_valid))));
    bufp->fullBit(oldp+1070,((((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__readys_readys) 
                               >> 1U) & (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT___io_deq_valid_output))));
    bufp->fullBit(oldp+1071,(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__state_0));
    bufp->fullBit(oldp+1072,(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__state_1));
    bufp->fullBit(oldp+1073,(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__muxStateEarly_0));
    bufp->fullBit(oldp+1074,(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__muxStateEarly_1));
    bufp->fullBit(oldp+1075,(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__latch));
    bufp->fullBit(oldp+1076,(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__winnerQual_0));
    bufp->fullBit(oldp+1077,(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__winnerQual_1));
    bufp->fullCData(oldp+1078,(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__a_first_counter),3);
    bufp->fullCData(oldp+1079,(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__opcode),3);
    bufp->fullCData(oldp+1080,(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__param),3);
    bufp->fullCData(oldp+1081,(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__size),3);
    bufp->fullCData(oldp+1082,(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__source),4);
    bufp->fullIData(oldp+1083,(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__address),29);
    bufp->fullCData(oldp+1084,(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__d_first_counter),3);
    bufp->fullCData(oldp+1085,(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__opcode_1),3);
    bufp->fullCData(oldp+1086,(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__param_1),2);
    bufp->fullCData(oldp+1087,(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__size_1),3);
    bufp->fullCData(oldp+1088,(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__source_1),4);
    bufp->fullBit(oldp+1089,(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__sink));
    bufp->fullBit(oldp+1090,(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__denied));
    bufp->fullSData(oldp+1091,(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__inflight),16);
    bufp->fullQData(oldp+1092,(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__inflight_opcodes),64);
    bufp->fullQData(oldp+1094,(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__inflight_sizes),64);
    bufp->fullCData(oldp+1096,(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__a_first_counter_1),3);
    bufp->fullBit(oldp+1097,((0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__a_first_counter_1))));
    bufp->fullCData(oldp+1098,(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__d_first_counter_1),3);
    bufp->fullBit(oldp+1099,((0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__d_first_counter_1))));
    bufp->fullBit(oldp+1100,((6U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__out_9_bits_opcode))));
    bufp->fullIData(oldp+1101,(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__watchdog),32);
    bufp->fullCData(oldp+1102,(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__d_first_counter_2),3);
    bufp->fullBit(oldp+1103,((0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__d_first_counter_2))));
    bufp->fullBit(oldp+1104,(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_acc));
    bufp->fullBit(oldp+1105,(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_acc_1));
    bufp->fullBit(oldp+1106,(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_eq_2));
    bufp->fullBit(oldp+1107,(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_acc_2));
    bufp->fullBit(oldp+1108,(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_eq_3));
    bufp->fullBit(oldp+1109,(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_acc_3));
    bufp->fullBit(oldp+1110,(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_eq_4));
    bufp->fullBit(oldp+1111,(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_acc_4));
    bufp->fullBit(oldp+1112,(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_eq_5));
    bufp->fullBit(oldp+1113,(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_acc_5));
    bufp->fullCData(oldp+1114,(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_acc_5) 
                                  | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_eq_5) 
                                     & (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address))) 
                                 << 7U) | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_acc_5) 
                                             | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_eq_5) 
                                                & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address)))) 
                                            << 6U) 
                                           | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_acc_4) 
                                                | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_eq_4) 
                                                   & (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address))) 
                                               << 5U) 
                                              | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_acc_4) 
                                                   | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_eq_4) 
                                                      & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address)))) 
                                                  << 4U) 
                                                 | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_acc_3) 
                                                      | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_eq_3) 
                                                         & (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address))) 
                                                     << 3U) 
                                                    | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_acc_3) 
                                                         | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_eq_3) 
                                                            & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address)))) 
                                                        << 2U) 
                                                       | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_acc_2) 
                                                            | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_eq_2) 
                                                               & (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address))) 
                                                           << 1U) 
                                                          | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_acc_2) 
                                                             | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_eq_2) 
                                                                & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address)))))))))))),8);
    bufp->fullBit(oldp+1115,(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__same_cycle_resp));
    bufp->fullIData(oldp+1116,(vlSelf->TestHarness__DOT__success_exit_sim__DOT_____05Fexit_reg),32);
    bufp->fullBit(oldp+1117,((1U & (~ (IData)((0U != (IData)(vlSelf->TestHarness__DOT__uart_sim_0__DOT__rxm__DOT__counter)))))));
    bufp->fullSData(oldp+1118,(vlSelf->TestHarness__DOT__uart_sim_0__DOT__rxm__DOT__prescaler),16);
    bufp->fullCData(oldp+1119,(vlSelf->TestHarness__DOT__uart_sim_0__DOT__rxm__DOT__counter),4);
    bufp->fullBit(oldp+1120,((0U == (IData)(vlSelf->TestHarness__DOT__uart_sim_0__DOT__rxm__DOT__prescaler))));
    bufp->fullBit(oldp+1121,(vlSelf->TestHarness__DOT__uart_sim_0__DOT__sim__DOT_____05Fin_valid_reg));
    bufp->fullCData(oldp+1122,(vlSelf->TestHarness__DOT__uart_sim_0__DOT__sim__DOT_____05Fin_bits_reg),8);
    bufp->fullCData(oldp+1123,(vlSelf->TestHarness__DOT__uart_sim_0__DOT__rxq__DOT__enq_ptr_value),3);
    bufp->fullBit(oldp+1124,(vlSelf->TestHarness__DOT__uart_sim_0__DOT__rxq__DOT__maybe_full));
    bufp->fullBit(oldp+1125,((1U & (~ (IData)(vlSelf->TestHarness__DOT__uart_sim_0__DOT__txq__DOT__empty)))));
    bufp->fullBit(oldp+1126,(vlSelf->TestHarness__DOT__uart_sim_0__DOT__sim__DOT_____05Fout_ready_reg));
    bufp->fullCData(oldp+1127,(vlSelf->TestHarness__DOT__uart_sim_0__DOT__txq__DOT__ram_ext__DOT__Memory
                               [vlSelf->TestHarness__DOT__uart_sim_0__DOT__txq__DOT__deq_ptr_value]),8);
    bufp->fullBit(oldp+1128,(vlSelf->TestHarness__DOT__uart_sim_0__DOT__txm__DOT__valid));
    bufp->fullCData(oldp+1129,(vlSelf->TestHarness__DOT__uart_sim_0__DOT__txm__DOT__shifter),8);
    bufp->fullCData(oldp+1130,(vlSelf->TestHarness__DOT__uart_sim_0__DOT__txm__DOT__debounce),2);
    bufp->fullSData(oldp+1131,(vlSelf->TestHarness__DOT__uart_sim_0__DOT__txm__DOT__prescaler),13);
    bufp->fullCData(oldp+1132,(vlSelf->TestHarness__DOT__uart_sim_0__DOT__txm__DOT__data_count),4);
    bufp->fullCData(oldp+1133,(vlSelf->TestHarness__DOT__uart_sim_0__DOT__txm__DOT__sample_count),4);
    bufp->fullCData(oldp+1134,(vlSelf->TestHarness__DOT__uart_sim_0__DOT__txm__DOT__sample),3);
    bufp->fullBit(oldp+1135,(vlSelf->TestHarness__DOT__uart_sim_0__DOT__txm__DOT__state));
    bufp->fullBit(oldp+1136,((0U == (IData)(vlSelf->TestHarness__DOT__uart_sim_0__DOT__txm__DOT__prescaler))));
    bufp->fullBit(oldp+1137,((0U == (IData)(vlSelf->TestHarness__DOT__uart_sim_0__DOT__txm__DOT__data_count))));
    bufp->fullBit(oldp+1138,((7U == (IData)(vlSelf->TestHarness__DOT__uart_sim_0__DOT__txm__DOT__sample_count))));
    bufp->fullBit(oldp+1139,((1U & (~ ((IData)(vlSelf->TestHarness__DOT__uart_sim_0__DOT__txq__DOT__ptr_match) 
                                       & (IData)(vlSelf->TestHarness__DOT__uart_sim_0__DOT__txq__DOT__maybe_full))))));
    bufp->fullCData(oldp+1140,(((((IData)(vlSelf->TestHarness__DOT__uart_sim_0__DOT__txq__DOT__ptr_match) 
                                  & (IData)(vlSelf->TestHarness__DOT__uart_sim_0__DOT__txq__DOT__maybe_full)) 
                                 << 3U) | (7U & ((IData)(vlSelf->TestHarness__DOT__uart_sim_0__DOT__txq__DOT__enq_ptr_value) 
                                                 - (IData)(vlSelf->TestHarness__DOT__uart_sim_0__DOT__txq__DOT__deq_ptr_value))))),4);
    bufp->fullCData(oldp+1141,(vlSelf->TestHarness__DOT__uart_sim_0__DOT__txq__DOT__enq_ptr_value),3);
    bufp->fullCData(oldp+1142,(vlSelf->TestHarness__DOT__uart_sim_0__DOT__txq__DOT__deq_ptr_value),3);
    bufp->fullBit(oldp+1143,(vlSelf->TestHarness__DOT__uart_sim_0__DOT__txq__DOT__maybe_full));
    bufp->fullBit(oldp+1144,(vlSelf->TestHarness__DOT__uart_sim_0__DOT__txq__DOT__ptr_match));
    bufp->fullBit(oldp+1145,(vlSelf->TestHarness__DOT__uart_sim_0__DOT__txq__DOT__empty));
    bufp->fullBit(oldp+1146,(((IData)(vlSelf->TestHarness__DOT__uart_sim_0__DOT__txq__DOT__ptr_match) 
                              & (IData)(vlSelf->TestHarness__DOT__uart_sim_0__DOT__txq__DOT__maybe_full))));
    bufp->fullBit(oldp+1147,(vlSelf->TestHarness__DOT__uart_sim_0__DOT__txq__DOT__do_enq));
    bufp->fullBit(oldp+1148,(vlSelf->TestHarness__DOT__uart_sim_0__DOT__txq__DOT__do_deq));
    bufp->fullCData(oldp+1149,(vlSelf->TestHarness__DOT__uart_sim_0__DOT__txq__DOT__ram_ext__DOT__Memory[0]),8);
    bufp->fullCData(oldp+1150,(vlSelf->TestHarness__DOT__uart_sim_0__DOT__txq__DOT__ram_ext__DOT__Memory[1]),8);
    bufp->fullCData(oldp+1151,(vlSelf->TestHarness__DOT__uart_sim_0__DOT__txq__DOT__ram_ext__DOT__Memory[2]),8);
    bufp->fullCData(oldp+1152,(vlSelf->TestHarness__DOT__uart_sim_0__DOT__txq__DOT__ram_ext__DOT__Memory[3]),8);
    bufp->fullCData(oldp+1153,(vlSelf->TestHarness__DOT__uart_sim_0__DOT__txq__DOT__ram_ext__DOT__Memory[4]),8);
    bufp->fullCData(oldp+1154,(vlSelf->TestHarness__DOT__uart_sim_0__DOT__txq__DOT__ram_ext__DOT__Memory[5]),8);
    bufp->fullCData(oldp+1155,(vlSelf->TestHarness__DOT__uart_sim_0__DOT__txq__DOT__ram_ext__DOT__Memory[6]),8);
    bufp->fullCData(oldp+1156,(vlSelf->TestHarness__DOT__uart_sim_0__DOT__txq__DOT__ram_ext__DOT__Memory[7]),8);
    bufp->fullBit(oldp+1157,(vlSelf->TestHarness__DOT__bits_in_queue__DOT__source__DOT___io_enq_ready_output));
    bufp->fullCData(oldp+1158,(vlSelf->TestHarness__DOT__bits_in_queue__DOT__source__DOT__widx_widx_bin),4);
    bufp->fullBit(oldp+1159,(vlSelf->TestHarness__DOT__bits_in_queue__DOT__source__DOT__ready_reg));
    bufp->fullCData(oldp+1160,((((IData)(vlSelf->TestHarness__DOT__bits_in_queue__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0) 
                                 << 3U) | (((IData)(vlSelf->TestHarness__DOT__bits_in_queue__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0) 
                                            << 2U) 
                                           | (((IData)(vlSelf->TestHarness__DOT__bits_in_queue__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0) 
                                               << 1U) 
                                              | (IData)(vlSelf->TestHarness__DOT__bits_in_queue__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0))))),4);
    bufp->fullBit(oldp+1161,(vlSelf->TestHarness__DOT__bits_in_queue__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+1162,(vlSelf->TestHarness__DOT__bits_in_queue__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+1163,(vlSelf->TestHarness__DOT__bits_in_queue__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+1164,(vlSelf->TestHarness__DOT__bits_in_queue__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0));
    bufp->fullBit(oldp+1165,(vlSelf->TestHarness__DOT__bits_in_queue__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1));
    bufp->fullBit(oldp+1166,(vlSelf->TestHarness__DOT__bits_in_queue__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2));
    bufp->fullBit(oldp+1167,(vlSelf->TestHarness__DOT__bits_in_queue__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0));
    bufp->fullBit(oldp+1168,(vlSelf->TestHarness__DOT__bits_in_queue__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1));
    bufp->fullBit(oldp+1169,(vlSelf->TestHarness__DOT__bits_in_queue__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2));
    bufp->fullBit(oldp+1170,(vlSelf->TestHarness__DOT__bits_in_queue__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0));
    bufp->fullBit(oldp+1171,(vlSelf->TestHarness__DOT__bits_in_queue__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1));
    bufp->fullBit(oldp+1172,(vlSelf->TestHarness__DOT__bits_in_queue__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2));
    bufp->fullBit(oldp+1173,(vlSelf->TestHarness__DOT__bits_in_queue__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+1174,(vlSelf->TestHarness__DOT__bits_in_queue__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+1175,(vlSelf->TestHarness__DOT__bits_in_queue__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+1176,(vlSelf->TestHarness__DOT__bits_in_queue__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+1177,(vlSelf->TestHarness__DOT__bits_in_queue__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+1178,(vlSelf->TestHarness__DOT__bits_in_queue__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+1179,(vlSelf->TestHarness__DOT__bits_out_queue__DOT__sink__DOT___io_deq_valid_output));
    bufp->fullCData(oldp+1180,(vlSelf->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__ridx_ridx_bin),4);
    bufp->fullCData(oldp+1181,(vlSelf->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__ridx_incremented),4);
    bufp->fullBit(oldp+1182,(vlSelf->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__valid_reg));
    bufp->fullBit(oldp+1183,(vlSelf->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+1184,(vlSelf->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+1185,(vlSelf->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+1186,(vlSelf->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+1187,(vlSelf->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+1188,(vlSelf->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullCData(oldp+1189,((((IData)(vlSelf->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0) 
                                 << 3U) | (((IData)(vlSelf->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0) 
                                            << 2U) 
                                           | (((IData)(vlSelf->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0) 
                                               << 1U) 
                                              | (IData)(vlSelf->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0))))),4);
    bufp->fullBit(oldp+1190,(vlSelf->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+1191,(vlSelf->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+1192,(vlSelf->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+1193,(vlSelf->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0));
    bufp->fullBit(oldp+1194,(vlSelf->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1));
    bufp->fullBit(oldp+1195,(vlSelf->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2));
    bufp->fullBit(oldp+1196,(vlSelf->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0));
    bufp->fullBit(oldp+1197,(vlSelf->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1));
    bufp->fullBit(oldp+1198,(vlSelf->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2));
    bufp->fullBit(oldp+1199,(vlSelf->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0));
    bufp->fullBit(oldp+1200,(vlSelf->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1));
    bufp->fullBit(oldp+1201,(vlSelf->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2));
    bufp->fullCData(oldp+1202,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dmiReqReg_addr),7);
    bufp->fullIData(oldp+1203,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dmiReqReg_data),32);
    bufp->fullCData(oldp+1204,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dmiReqReg_op),2);
    bufp->fullBit(oldp+1205,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT__regs_16));
    bufp->fullBit(oldp+1206,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT__regs_1));
    bufp->fullBit(oldp+1207,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT__regs_2));
    bufp->fullBit(oldp+1208,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT__regs_3));
    bufp->fullBit(oldp+1209,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT__regs_4));
    bufp->fullBit(oldp+1210,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT__regs_5));
    bufp->fullBit(oldp+1211,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT__regs_6));
    bufp->fullBit(oldp+1212,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT__regs_7));
    bufp->fullBit(oldp+1213,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT__regs_8));
    bufp->fullBit(oldp+1214,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT__regs_9));
    bufp->fullBit(oldp+1215,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT__regs_10));
    bufp->fullBit(oldp+1216,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT__regs_11));
    bufp->fullBit(oldp+1217,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT__regs_12));
    bufp->fullBit(oldp+1218,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT__regs_13));
    bufp->fullBit(oldp+1219,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT__regs_14));
    bufp->fullBit(oldp+1220,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT__regs_15));
    bufp->fullBit(oldp+1221,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT__regs_17));
    bufp->fullBit(oldp+1222,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT__regs_18));
    bufp->fullBit(oldp+1223,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT__regs_19));
    bufp->fullBit(oldp+1224,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT__regs_20));
    bufp->fullBit(oldp+1225,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT__regs_21));
    bufp->fullBit(oldp+1226,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT__regs_22));
    bufp->fullBit(oldp+1227,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT__regs_23));
    bufp->fullBit(oldp+1228,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT__regs_24));
    bufp->fullBit(oldp+1229,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT__regs_25));
    bufp->fullBit(oldp+1230,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT__regs_26));
    bufp->fullBit(oldp+1231,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT__regs_27));
    bufp->fullBit(oldp+1232,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT__regs_28));
    bufp->fullBit(oldp+1233,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT__regs_29));
    bufp->fullBit(oldp+1234,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT__regs_30));
    bufp->fullBit(oldp+1235,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT__regs_31));
    bufp->fullCData(oldp+1236,((7U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                              >> 0x28U)))),3);
    bufp->fullCData(oldp+1237,((3U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                              >> 0x26U)))),2);
    bufp->fullCData(oldp+1238,((3U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                              >> 0x24U)))),2);
    bufp->fullBit(oldp+1239,((1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                            >> 0x23U)))));
    bufp->fullBit(oldp+1240,((1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                            >> 0x21U)))));
    bufp->fullIData(oldp+1241,((IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                        >> 1U))),32);
    bufp->fullBit(oldp+1242,((1U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg))));
    bufp->fullQData(oldp+1243,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg),43);
    bufp->fullBit(oldp+1245,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__inflight));
    bufp->fullCData(oldp+1246,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__inflight_opcodes),4);
    bufp->fullCData(oldp+1247,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__inflight_sizes),4);
    bufp->fullBit(oldp+1248,((6U == (7U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                   >> 0x28U))))));
    bufp->fullIData(oldp+1249,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__watchdog),32);
    bufp->fullBit(oldp+1250,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__inflight));
    bufp->fullCData(oldp+1251,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__inflight_opcodes),4);
    bufp->fullCData(oldp+1252,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__inflight_sizes),4);
    bufp->fullIData(oldp+1253,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__watchdog),32);
    bufp->fullBit(oldp+1254,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__in_reset));
    bufp->fullBit(oldp+1255,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__bypass_reg));
    bufp->fullCData(oldp+1256,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__flight),2);
    bufp->fullBit(oldp+1257,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__inflight));
    bufp->fullCData(oldp+1258,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__inflight_opcodes),4);
    bufp->fullCData(oldp+1259,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__inflight_sizes),4);
    bufp->fullIData(oldp+1260,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__watchdog),32);
    bufp->fullBit(oldp+1261,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__idle));
    bufp->fullBit(oldp+1262,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__beatsLeft));
    bufp->fullBit(oldp+1263,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__state_1));
    bufp->fullBit(oldp+1264,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__inflight));
    bufp->fullCData(oldp+1265,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__inflight_opcodes),4);
    bufp->fullCData(oldp+1266,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__inflight_sizes),4);
    bufp->fullIData(oldp+1267,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__watchdog),32);
    bufp->fullBit(oldp+1268,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__beatsLeft));
    bufp->fullCData(oldp+1269,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__readys_mask),2);
    bufp->fullBit(oldp+1270,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__state_0));
    bufp->fullBit(oldp+1271,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__state_1));
    bufp->fullBit(oldp+1272,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__inflight));
    bufp->fullCData(oldp+1273,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__inflight_opcodes),4);
    bufp->fullCData(oldp+1274,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__inflight_sizes),4);
    bufp->fullIData(oldp+1275,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__watchdog),32);
    bufp->fullBit(oldp+1276,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__muxStateEarly_0) 
                              & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__bypass)
                                  ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__out_2_bits_denied)
                                  : (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                             >> 0x21U))))));
    bufp->fullCData(oldp+1277,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__bypass)
                                 ? 0U : (3U & (IData)(
                                                      (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                       >> 0x26U))))),2);
    bufp->fullCData(oldp+1278,((3U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__bypass)
                                       ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__out_2_bits_denied) 
                                          << 1U) : (IData)(
                                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                            >> 0x24U))))),2);
    bufp->fullBit(oldp+1279,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__bypass)
                                     ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__out_2_bits_denied)
                                     : (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                >> 0x21U))))));
    bufp->fullIData(oldp+1280,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__bypass)
                                 ? 0U : (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                 >> 1U)))),32);
    bufp->fullCData(oldp+1281,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__muxStateEarly_0)
                                 ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__bypass)
                                     ? 0U : (3U & (IData)(
                                                          (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                           >> 0x26U))))
                                 : 0U)),2);
    bufp->fullCData(oldp+1282,((3U & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__muxStateEarly_0)
                                        ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__bypass)
                                            ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__out_2_bits_denied) 
                                               << 1U)
                                            : (IData)(
                                                      (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                       >> 0x24U)))
                                        : 0U) | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__muxStateEarly_1) 
                                                 << 1U)))),2);
    bufp->fullBit(oldp+1283,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dmiReqValidReg));
    bufp->fullBit(oldp+1284,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__busyReg));
    bufp->fullBit(oldp+1285,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__stickyBusyReg));
    bufp->fullBit(oldp+1286,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__stickyNonzeroRespReg));
    bufp->fullBit(oldp+1287,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__downgradeOpReg));
    bufp->fullCData(oldp+1288,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT____Vcellinp__dtmInfoChain__io_capture_bits_dmiStatus),2);
    bufp->fullBit(oldp+1289,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__x1_a_source__DOT___io_enq_ready_output));
    bufp->fullBit(oldp+1290,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT___io_deq_valid_output));
    bufp->fullBit(oldp+1291,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__ridx_ridx_bin));
    bufp->fullBit(oldp+1292,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__valid_reg));
    bufp->fullBit(oldp+1293,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+1294,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+1295,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+1296,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+1297,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+1298,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+1299,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__x1_a_source__DOT__widx_widx_bin));
    bufp->fullBit(oldp+1300,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__x1_a_source__DOT__ready_reg));
    bufp->fullBit(oldp+1301,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__x1_a_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+1302,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__x1_a_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+1303,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__x1_a_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+1304,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__x1_a_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+1305,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__x1_a_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+1306,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__x1_a_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+1307,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmactiveAck_dmactiveAckSync__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+1308,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT___io_enq_ready_output));
    bufp->fullBit(oldp+1309,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_haltreq));
    bufp->fullBit(oldp+1310,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_ndmreset));
    bufp->fullBit(oldp+1311,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__hrmaskReg_0));
    bufp->fullBit(oldp+1312,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__innerCtrlValidReg));
    bufp->fullBit(oldp+1313,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__innerCtrlResumeReqReg));
    bufp->fullBit(oldp+1314,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__innerCtrlAckHaveResetReg));
    bufp->fullBit(oldp+1315,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmactiveAck_dmactiveAckSync__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+1316,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmactiveAck_dmactiveAckSync__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+1317,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__widx_widx_bin));
    bufp->fullBit(oldp+1318,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__ready_reg));
    bufp->fullBit(oldp+1319,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+1320,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+1321,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+1322,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+1323,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+1324,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+1325,(vlSelf->TestHarness__DOT__chiptop__DOT__system_debug_systemjtag_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+1326,(vlSelf->TestHarness__DOT__chiptop__DOT__system_debug_systemjtag_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+1327,(vlSelf->TestHarness__DOT__chiptop__DOT__system_debug_systemjtag_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+1328,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain_serial_tl_in_r) 
                              & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__inDes__DOT__receiving))));
    bufp->fullIData(oldp+1329,(vlSelf->TestHarness__DOT__bits_in_queue__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg),32);
    bufp->fullBit(oldp+1330,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_bits_out_r) 
                              & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__outSer__DOT__sending))));
    bufp->fullIData(oldp+1331,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__outSer__DOT__data[0U]),32);
    bufp->fullIData(oldp+1332,(vlSelf->TestHarness__DOT__bits_out_queue__DOT__source__DOT__mem_0),32);
    bufp->fullIData(oldp+1333,(vlSelf->TestHarness__DOT__bits_out_queue__DOT__source__DOT__mem_1),32);
    bufp->fullIData(oldp+1334,(vlSelf->TestHarness__DOT__bits_out_queue__DOT__source__DOT__mem_2),32);
    bufp->fullIData(oldp+1335,(vlSelf->TestHarness__DOT__bits_out_queue__DOT__source__DOT__mem_3),32);
    bufp->fullIData(oldp+1336,(vlSelf->TestHarness__DOT__bits_out_queue__DOT__source__DOT__mem_4),32);
    bufp->fullIData(oldp+1337,(vlSelf->TestHarness__DOT__bits_out_queue__DOT__source__DOT__mem_5),32);
    bufp->fullIData(oldp+1338,(vlSelf->TestHarness__DOT__bits_out_queue__DOT__source__DOT__mem_6),32);
    bufp->fullIData(oldp+1339,(vlSelf->TestHarness__DOT__bits_out_queue__DOT__source__DOT__mem_7),32);
    bufp->fullBit(oldp+1340,(vlSelf->TestHarness__DOT__simdram__DOT_____05Faw_ready_reg));
    bufp->fullBit(oldp+1341,(vlSelf->TestHarness__DOT__simdram__DOT_____05Fw_ready_reg));
    bufp->fullBit(oldp+1342,(vlSelf->TestHarness__DOT__simdram__DOT_____05Fb_valid_reg));
    bufp->fullCData(oldp+1343,(vlSelf->TestHarness__DOT__simdram__DOT_____05Fb_id_reg),4);
    bufp->fullCData(oldp+1344,(vlSelf->TestHarness__DOT__simdram__DOT_____05Fb_resp_reg),2);
    bufp->fullBit(oldp+1345,(vlSelf->TestHarness__DOT__simdram__DOT_____05Far_ready_reg));
    bufp->fullBit(oldp+1346,(vlSelf->TestHarness__DOT__simdram__DOT_____05Fr_valid_reg));
    bufp->fullCData(oldp+1347,(vlSelf->TestHarness__DOT__simdram__DOT_____05Fr_id_reg),4);
    bufp->fullQData(oldp+1348,(vlSelf->TestHarness__DOT__simdram__DOT_____05Fr_data_reg),64);
    bufp->fullCData(oldp+1350,(vlSelf->TestHarness__DOT__simdram__DOT_____05Fr_resp_reg),2);
    bufp->fullBit(oldp+1351,(vlSelf->TestHarness__DOT__simdram__DOT_____05Fr_last_reg));
    bufp->fullBit(oldp+1352,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT___tl2axi4_auto_out_aw_valid) 
                              & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___GEN_5))));
    bufp->fullCData(oldp+1353,((0xfU & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___queue_arw_deq_io_deq_bits_id))),4);
    bufp->fullIData(oldp+1354,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___queue_arw_deq_io_deq_bits_addr),32);
    bufp->fullCData(oldp+1355,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___queue_arw_deq_io_deq_bits_len),8);
    bufp->fullCData(oldp+1356,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___queue_arw_deq_io_deq_bits_size),3);
    bufp->fullCData(oldp+1357,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__maybe_full)
                                 ? (3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_ext__DOT__Memory
                                          [0U][1U] 
                                          >> 0x10U))
                                 : 1U)),2);
    bufp->fullBit(oldp+1358,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__maybe_full) 
                              & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_ext__DOT__Memory
                                 [0U][1U] >> 0x12U))));
    bufp->fullCData(oldp+1359,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__maybe_full)
                                 ? (0xfU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_ext__DOT__Memory
                                            [0U][1U] 
                                            >> 0x13U))
                                 : 0U)),4);
    bufp->fullCData(oldp+1360,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__maybe_full)
                                 ? (7U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_ext__DOT__Memory
                                          [0U][1U] 
                                          >> 0x17U))
                                 : 1U)),3);
    bufp->fullCData(oldp+1361,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__maybe_full)
                                 ? (0xfU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_ext__DOT__Memory
                                            [0U][1U] 
                                            >> 0x1aU))
                                 : 0U)),4);
    bufp->fullBit(oldp+1362,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__deq__DOT___io_deq_valid_output));
    bufp->fullQData(oldp+1363,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__deq__DOT__maybe_full)
                                 ? (((QData)((IData)(
                                                     vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__deq__DOT__ram_ext__DOT__Memory
                                                     [0U][1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__deq__DOT__ram_ext__DOT__Memory
                                                                 [0U][0U])))
                                 : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_data)),64);
    bufp->fullCData(oldp+1365,((0xffU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__deq__DOT__maybe_full)
                                          ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__deq__DOT__ram_ext__DOT__Memory
                                         [0U][2U] : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_mask)))),8);
    bufp->fullBit(oldp+1366,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__deq__DOT__maybe_full)
                                     ? (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__deq__DOT__ram_ext__DOT__Memory
                                        [0U][2U] >> 8U)
                                     : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_w_bits_last)))));
    bufp->fullBit(oldp+1367,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__x1_b_ready));
    bufp->fullBit(oldp+1368,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT___tl2axi4_auto_out_ar_valid) 
                              & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___GEN_0))));
    bufp->fullBit(oldp+1369,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__x1_r_ready));
    bufp->fullBit(oldp+1370,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__txm__DOT__out));
    bufp->fullBit(oldp+1371,((1U & vlSelf->TestHarness__DOT__bits_in_queue__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg)));
    bufp->fullBit(oldp+1372,((1U & (vlSelf->TestHarness__DOT__bits_in_queue__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                    >> 1U))));
    bufp->fullBit(oldp+1373,((1U & (vlSelf->TestHarness__DOT__bits_in_queue__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                    >> 0xaU))));
    bufp->fullBit(oldp+1374,((1U & (vlSelf->TestHarness__DOT__bits_in_queue__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                    >> 0xbU))));
    bufp->fullBit(oldp+1375,((1U & (vlSelf->TestHarness__DOT__bits_in_queue__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                    >> 0xcU))));
    bufp->fullBit(oldp+1376,((1U & (vlSelf->TestHarness__DOT__bits_in_queue__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                    >> 0xdU))));
    bufp->fullBit(oldp+1377,((1U & (vlSelf->TestHarness__DOT__bits_in_queue__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                    >> 0xeU))));
    bufp->fullBit(oldp+1378,((1U & (vlSelf->TestHarness__DOT__bits_in_queue__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                    >> 0xfU))));
    bufp->fullBit(oldp+1379,((1U & (vlSelf->TestHarness__DOT__bits_in_queue__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                    >> 0x10U))));
    bufp->fullBit(oldp+1380,((1U & (vlSelf->TestHarness__DOT__bits_in_queue__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                    >> 0x11U))));
    bufp->fullBit(oldp+1381,((1U & (vlSelf->TestHarness__DOT__bits_in_queue__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                    >> 0x12U))));
    bufp->fullBit(oldp+1382,((1U & (vlSelf->TestHarness__DOT__bits_in_queue__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                    >> 0x13U))));
    bufp->fullBit(oldp+1383,((1U & (vlSelf->TestHarness__DOT__bits_in_queue__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                    >> 2U))));
    bufp->fullBit(oldp+1384,((1U & (vlSelf->TestHarness__DOT__bits_in_queue__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                    >> 0x14U))));
    bufp->fullBit(oldp+1385,((1U & (vlSelf->TestHarness__DOT__bits_in_queue__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                    >> 0x15U))));
    bufp->fullBit(oldp+1386,((1U & (vlSelf->TestHarness__DOT__bits_in_queue__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                    >> 0x16U))));
    bufp->fullBit(oldp+1387,((1U & (vlSelf->TestHarness__DOT__bits_in_queue__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                    >> 0x17U))));
    bufp->fullBit(oldp+1388,((1U & (vlSelf->TestHarness__DOT__bits_in_queue__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                    >> 0x18U))));
    bufp->fullBit(oldp+1389,((1U & (vlSelf->TestHarness__DOT__bits_in_queue__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                    >> 0x19U))));
    bufp->fullBit(oldp+1390,((1U & (vlSelf->TestHarness__DOT__bits_in_queue__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                    >> 0x1aU))));
    bufp->fullBit(oldp+1391,((1U & (vlSelf->TestHarness__DOT__bits_in_queue__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                    >> 0x1bU))));
    bufp->fullBit(oldp+1392,((1U & (vlSelf->TestHarness__DOT__bits_in_queue__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                    >> 0x1cU))));
    bufp->fullBit(oldp+1393,((1U & (vlSelf->TestHarness__DOT__bits_in_queue__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                    >> 0x1dU))));
    bufp->fullBit(oldp+1394,((1U & (vlSelf->TestHarness__DOT__bits_in_queue__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                    >> 3U))));
    bufp->fullBit(oldp+1395,((1U & (vlSelf->TestHarness__DOT__bits_in_queue__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                    >> 0x1eU))));
    bufp->fullBit(oldp+1396,((vlSelf->TestHarness__DOT__bits_in_queue__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                              >> 0x1fU)));
    bufp->fullBit(oldp+1397,((1U & (vlSelf->TestHarness__DOT__bits_in_queue__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                    >> 4U))));
    bufp->fullBit(oldp+1398,((1U & (vlSelf->TestHarness__DOT__bits_in_queue__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                    >> 5U))));
    bufp->fullBit(oldp+1399,((1U & (vlSelf->TestHarness__DOT__bits_in_queue__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                    >> 6U))));
    bufp->fullBit(oldp+1400,((1U & (vlSelf->TestHarness__DOT__bits_in_queue__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                    >> 7U))));
    bufp->fullBit(oldp+1401,((1U & (vlSelf->TestHarness__DOT__bits_in_queue__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                    >> 8U))));
    bufp->fullBit(oldp+1402,((1U & (vlSelf->TestHarness__DOT__bits_in_queue__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                    >> 9U))));
    bufp->fullBit(oldp+1403,((1U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__outSer__DOT__data[0U])));
    bufp->fullBit(oldp+1404,((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__outSer__DOT__data[0U] 
                                    >> 1U))));
    bufp->fullBit(oldp+1405,((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__outSer__DOT__data[0U] 
                                    >> 0xaU))));
    bufp->fullBit(oldp+1406,((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__outSer__DOT__data[0U] 
                                    >> 0xbU))));
    bufp->fullBit(oldp+1407,((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__outSer__DOT__data[0U] 
                                    >> 0xcU))));
    bufp->fullBit(oldp+1408,((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__outSer__DOT__data[0U] 
                                    >> 0xdU))));
    bufp->fullBit(oldp+1409,((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__outSer__DOT__data[0U] 
                                    >> 0xeU))));
    bufp->fullBit(oldp+1410,((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__outSer__DOT__data[0U] 
                                    >> 0xfU))));
    bufp->fullBit(oldp+1411,((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__outSer__DOT__data[0U] 
                                    >> 0x10U))));
    bufp->fullBit(oldp+1412,((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__outSer__DOT__data[0U] 
                                    >> 0x11U))));
    bufp->fullBit(oldp+1413,((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__outSer__DOT__data[0U] 
                                    >> 0x12U))));
    bufp->fullBit(oldp+1414,((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__outSer__DOT__data[0U] 
                                    >> 0x13U))));
    bufp->fullBit(oldp+1415,((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__outSer__DOT__data[0U] 
                                    >> 2U))));
    bufp->fullBit(oldp+1416,((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__outSer__DOT__data[0U] 
                                    >> 0x14U))));
    bufp->fullBit(oldp+1417,((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__outSer__DOT__data[0U] 
                                    >> 0x15U))));
    bufp->fullBit(oldp+1418,((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__outSer__DOT__data[0U] 
                                    >> 0x16U))));
    bufp->fullBit(oldp+1419,((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__outSer__DOT__data[0U] 
                                    >> 0x17U))));
    bufp->fullBit(oldp+1420,((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__outSer__DOT__data[0U] 
                                    >> 0x18U))));
    bufp->fullBit(oldp+1421,((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__outSer__DOT__data[0U] 
                                    >> 0x19U))));
    bufp->fullBit(oldp+1422,((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__outSer__DOT__data[0U] 
                                    >> 0x1aU))));
    bufp->fullBit(oldp+1423,((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__outSer__DOT__data[0U] 
                                    >> 0x1bU))));
    bufp->fullBit(oldp+1424,((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__outSer__DOT__data[0U] 
                                    >> 0x1cU))));
    bufp->fullBit(oldp+1425,((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__outSer__DOT__data[0U] 
                                    >> 0x1dU))));
    bufp->fullBit(oldp+1426,((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__outSer__DOT__data[0U] 
                                    >> 3U))));
    bufp->fullBit(oldp+1427,((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__outSer__DOT__data[0U] 
                                    >> 0x1eU))));
    bufp->fullBit(oldp+1428,((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__outSer__DOT__data[0U] 
                              >> 0x1fU)));
    bufp->fullBit(oldp+1429,((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__outSer__DOT__data[0U] 
                                    >> 4U))));
    bufp->fullBit(oldp+1430,((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__outSer__DOT__data[0U] 
                                    >> 5U))));
    bufp->fullBit(oldp+1431,((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__outSer__DOT__data[0U] 
                                    >> 6U))));
    bufp->fullBit(oldp+1432,((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__outSer__DOT__data[0U] 
                                    >> 7U))));
    bufp->fullBit(oldp+1433,((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__outSer__DOT__data[0U] 
                                    >> 8U))));
    bufp->fullBit(oldp+1434,((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__outSer__DOT__data[0U] 
                                    >> 9U))));
    bufp->fullIData(oldp+1435,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__outSer__DOT__data[0U]),32);
    bufp->fullCData(oldp+1436,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_bits_out_c_value),2);
    bufp->fullBit(oldp+1437,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_bits_out_r));
    bufp->fullCData(oldp+1438,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain_serial_tl_in_c_value),2);
    bufp->fullBit(oldp+1439,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain_serial_tl_in_r));
    bufp->fullCData(oldp+1440,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__int_rtc_tick_c_value),7);
    bufp->fullBit(oldp+1441,((0x63U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__int_rtc_tick_c_value))));
    bufp->fullWData(oldp+1442,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__inflight),1040);
    bufp->fullWData(oldp+1475,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__inflight_opcodes),4160);
    bufp->fullWData(oldp+1605,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__inflight_sizes),4160);
    bufp->fullIData(oldp+1735,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__watchdog),32);
    bufp->fullWData(oldp+1736,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight),1040);
    bufp->fullWData(oldp+1769,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_opcodes),4160);
    bufp->fullWData(oldp+1899,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_sizes),4160);
    bufp->fullIData(oldp+2029,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__watchdog),32);
    bufp->fullBit(oldp+2030,((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__maybe_full)))));
    bufp->fullBit(oldp+2031,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__maybe_full));
    bufp->fullBit(oldp+2032,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__pending_0));
    bufp->fullBit(oldp+2033,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__enables_0_0));
    bufp->fullBit(oldp+2034,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__enables_1_0));
    bufp->fullBit(oldp+2035,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__maxDevs_0));
    bufp->fullBit(oldp+2036,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__maxDevs_1));
    bufp->fullBit(oldp+2037,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__enables_0_0) 
                              & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__pending_0))));
    bufp->fullBit(oldp+2038,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__enables_1_0) 
                              & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__pending_0))));
    bufp->fullBit(oldp+2039,((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__pending_0)))));
    bufp->fullBit(oldp+2040,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__gateways_gateway__DOT__inFlight));
    bufp->fullWData(oldp+2041,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__inflight),1040);
    bufp->fullWData(oldp+2074,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__inflight_opcodes),4160);
    bufp->fullWData(oldp+2204,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__inflight_sizes),4160);
    bufp->fullIData(oldp+2334,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__watchdog),32);
    bufp->fullBit(oldp+2335,((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__x1_a_q__DOT__empty)))));
    bufp->fullCData(oldp+2336,((7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U])),3);
    bufp->fullCData(oldp+2337,((7U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                      >> 3U))),3);
    bufp->fullCData(oldp+2338,((3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                      >> 6U))),2);
    bufp->fullSData(oldp+2339,((0x7ffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                          >> 8U))),11);
    bufp->fullIData(oldp+2340,((0x1fffffU & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                                              << 0xdU) 
                                             | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                >> 0x13U)))),21);
    bufp->fullCData(oldp+2341,((0xffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                                         >> 8U))),8);
    bufp->fullBit(oldp+2342,((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[3U] 
                                    >> 0x10U))));
    bufp->fullBit(oldp+2343,((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__bundleIn_0_d_q__DOT__full)))));
    bufp->fullBit(oldp+2344,((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__x1_a_q__DOT__empty)))));
    bufp->fullBit(oldp+2345,((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__bundleIn_0_d_q__DOT__full)))));
    bufp->fullCData(oldp+2346,((4U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))),3);
    bufp->fullBit(oldp+2347,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__monitor__DOT__a_first_done));
    bufp->fullWData(oldp+2348,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__monitor__DOT__inflight),1040);
    bufp->fullWData(oldp+2381,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__monitor__DOT__inflight_opcodes),4160);
    bufp->fullWData(oldp+2511,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__monitor__DOT__inflight_sizes),4160);
    bufp->fullIData(oldp+2641,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__monitor__DOT__watchdog),32);
    bufp->fullBit(oldp+2642,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__monitor__DOT__d_first_done));
    bufp->fullBit(oldp+2643,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileResetSetter__DOT__monitor__DOT__a_first_done));
    bufp->fullWData(oldp+2644,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileResetSetter__DOT__monitor__DOT__inflight),1040);
    bufp->fullWData(oldp+2677,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileResetSetter__DOT__monitor__DOT__inflight_opcodes),4160);
    bufp->fullWData(oldp+2807,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileResetSetter__DOT__monitor__DOT__inflight_sizes),4160);
    bufp->fullIData(oldp+2937,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileResetSetter__DOT__monitor__DOT__watchdog),32);
    bufp->fullBit(oldp+2938,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileResetSetter__DOT__monitor__DOT__d_first_done));
    bufp->fullBit(oldp+2939,((2U == (3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                           >> 6U)))));
    bufp->fullBit(oldp+2940,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileResetSetter__DOT__monitor__DOT__mask_acc));
    bufp->fullBit(oldp+2941,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileResetSetter__DOT__monitor__DOT__mask_acc_1));
    bufp->fullBit(oldp+2942,((1U == (3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                           >> 6U)))));
    bufp->fullBit(oldp+2943,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileResetSetter__DOT__monitor__DOT__mask_eq_2));
    bufp->fullBit(oldp+2944,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileResetSetter__DOT__monitor__DOT__mask_acc_2));
    bufp->fullBit(oldp+2945,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileResetSetter__DOT__monitor__DOT__mask_eq_3));
    bufp->fullBit(oldp+2946,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileResetSetter__DOT__monitor__DOT__mask_acc_3));
    bufp->fullBit(oldp+2947,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileResetSetter__DOT__monitor__DOT__mask_eq_4));
    bufp->fullBit(oldp+2948,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileResetSetter__DOT__monitor__DOT__mask_acc_4));
    bufp->fullBit(oldp+2949,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileResetSetter__DOT__monitor__DOT__mask_eq_5));
    bufp->fullBit(oldp+2950,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileResetSetter__DOT__monitor__DOT__mask_acc_5));
    bufp->fullCData(oldp+2951,(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileResetSetter__DOT__monitor__DOT__mask_acc_5) 
                                  << 7U) | (0xfff80U 
                                            & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileResetSetter__DOT__monitor__DOT__mask_eq_5) 
                                                << 7U) 
                                               & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                  >> 0xcU)))) 
                                | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileResetSetter__DOT__monitor__DOT__mask_acc_5) 
                                     | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileResetSetter__DOT__monitor__DOT__mask_eq_5) 
                                        & (~ (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                              >> 0x13U)))) 
                                    << 6U) | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileResetSetter__DOT__monitor__DOT__mask_acc_4) 
                                                << 5U) 
                                               | (0x3ffe0U 
                                                  & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileResetSetter__DOT__monitor__DOT__mask_eq_4) 
                                                      << 5U) 
                                                     & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                        >> 0xeU)))) 
                                              | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileResetSetter__DOT__monitor__DOT__mask_acc_4) 
                                                   | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileResetSetter__DOT__monitor__DOT__mask_eq_4) 
                                                      & (~ 
                                                         (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                          >> 0x13U)))) 
                                                  << 4U) 
                                                 | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileResetSetter__DOT__monitor__DOT__mask_acc_3) 
                                                      << 3U) 
                                                     | (0xfff8U 
                                                        & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileResetSetter__DOT__monitor__DOT__mask_eq_3) 
                                                            << 3U) 
                                                           & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                              >> 0x10U)))) 
                                                    | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileResetSetter__DOT__monitor__DOT__mask_acc_3) 
                                                         | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileResetSetter__DOT__monitor__DOT__mask_eq_3) 
                                                            & (~ 
                                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                >> 0x13U)))) 
                                                        << 2U) 
                                                       | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileResetSetter__DOT__monitor__DOT__mask_acc_2) 
                                                            << 1U) 
                                                           | (0x3ffeU 
                                                              & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileResetSetter__DOT__monitor__DOT__mask_eq_2) 
                                                                  << 1U) 
                                                                 & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                    >> 0x12U)))) 
                                                          | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileResetSetter__DOT__monitor__DOT__mask_acc_2) 
                                                             | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileResetSetter__DOT__monitor__DOT__mask_eq_2) 
                                                                & (~ 
                                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                    >> 0x13U)))))))))))),8);
    bufp->fullBit(oldp+2952,((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__x1_a_q__DOT__full)))));
    bufp->fullBit(oldp+2953,((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)))));
    bufp->fullCData(oldp+2954,((7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U])),3);
    bufp->fullCData(oldp+2955,((3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                      >> 3U))),2);
    bufp->fullCData(oldp+2956,((0xfU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                        >> 5U))),4);
    bufp->fullBit(oldp+2957,((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                    >> 9U))));
    bufp->fullCData(oldp+2958,((0xfU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                        >> 0xaU))),4);
    bufp->fullBit(oldp+2959,((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                    >> 0xeU))));
    bufp->fullQData(oldp+2960,((((QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[2U])) 
                                 << 0x31U) | (((QData)((IData)(
                                                               vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[1U])) 
                                               << 0x11U) 
                                              | ((QData)((IData)(
                                                                 vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U])) 
                                                 >> 0xfU)))),64);
    bufp->fullBit(oldp+2962,((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[2U] 
                                    >> 0xfU))));
    bufp->fullBit(oldp+2963,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_mbus_auto_coupler_to_port_named_serial_tl_mem_tlserial_manager_crossing_out_a_valid));
    bufp->fullCData(oldp+2964,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_opcode),3);
    bufp->fullCData(oldp+2965,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_param),3);
    bufp->fullCData(oldp+2966,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_size),3);
    bufp->fullCData(oldp+2967,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_mbus_auto_coupler_to_port_named_serial_tl_mem_tlserial_manager_crossing_out_a_bits_source),4);
    bufp->fullIData(oldp+2968,((0x1fffffffU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_address)),29);
    bufp->fullCData(oldp+2969,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_mask),8);
    bufp->fullQData(oldp+2970,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_data),64);
    bufp->fullBit(oldp+2972,((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__muxStateEarly_0) 
                               & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT___ram_ext_R0_data[3U] 
                                  >> 0xdU)) | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__muxStateEarly_1) 
                                               & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[3U] 
                                                  >> 0x15U)))));
    bufp->fullBit(oldp+2973,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT___subsystem_mbus_xbar_auto_out_1_d_ready));
    bufp->fullBit(oldp+2974,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___serial_tl_domain_auto_serdesser_client_out_a_valid));
    bufp->fullCData(oldp+2975,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT___inDes_io_out_bits_opcode),3);
    bufp->fullCData(oldp+2976,((7U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__inDes__DOT__data_4 
                                      >> 0x1bU))),3);
    bufp->fullCData(oldp+2977,((0xfU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__inDes__DOT__data_4 
                                        >> 0x13U))),4);
    bufp->fullBit(oldp+2978,((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__inDes__DOT__data_4 
                                    >> 0xbU))));
    bufp->fullIData(oldp+2979,((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT___inDes_io_out_bits_address)),32);
    bufp->fullCData(oldp+2980,((0xffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__inDes__DOT__data_0 
                                         >> 1U))),8);
    bufp->fullQData(oldp+2981,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT___inDes_io_out_bits_data),64);
    bufp->fullBit(oldp+2983,((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__inDes__DOT__data_0 
                                    >> 0xaU))));
    bufp->fullBit(oldp+2984,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT___outArb_io_in_1_ready));
    bufp->fullBit(oldp+2985,((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT__full)))));
    bufp->fullBit(oldp+2986,((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)))));
    bufp->fullCData(oldp+2987,((7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U])),3);
    bufp->fullCData(oldp+2988,((3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                      >> 3U))),2);
    bufp->fullCData(oldp+2989,((7U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                      >> 5U))),3);
    bufp->fullCData(oldp+2990,((0xfU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                        >> 8U))),4);
    bufp->fullBit(oldp+2991,((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                    >> 0xcU))));
    bufp->fullBit(oldp+2992,((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                    >> 0xdU))));
    bufp->fullQData(oldp+2993,((((QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[2U])) 
                                 << 0x32U) | (((QData)((IData)(
                                                               vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[1U])) 
                                               << 0x12U) 
                                              | ((QData)((IData)(
                                                                 vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U])) 
                                                 >> 0xeU)))),64);
    bufp->fullBit(oldp+2995,((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[2U] 
                                    >> 0xeU))));
    bufp->fullBit(oldp+2996,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__inDes__DOT__receiving));
    bufp->fullBit(oldp+2997,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__outSer__DOT__sending));
    bufp->fullBit(oldp+2998,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT___outArb_io_in_4_ready));
    bufp->fullBit(oldp+2999,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__manager_tl_d_valid));
    bufp->fullCData(oldp+3000,((3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__inDes__DOT__data_4 
                                      >> 0x1bU))),2);
    bufp->fullCData(oldp+3001,((7U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__inDes__DOT__data_4 
                                      >> 0x13U))),3);
    bufp->fullCData(oldp+3002,((0xfU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__inDes__DOT__data_4 
                                        >> 0xbU))),4);
    bufp->fullBit(oldp+3003,((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__inDes__DOT__data_0 
                                    >> 2U))));
    bufp->fullBit(oldp+3004,((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__inDes__DOT__data_0 
                                    >> 1U))));
    bufp->fullBit(oldp+3005,((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT__empty)))));
    bufp->fullCData(oldp+3006,((7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U])),3);
    bufp->fullCData(oldp+3007,((7U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                      >> 3U))),3);
    bufp->fullCData(oldp+3008,((7U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                      >> 6U))),3);
    bufp->fullCData(oldp+3009,((0xfU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                        >> 9U))),4);
    bufp->fullIData(oldp+3010,((0x1fffffffU & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                                                << 0x13U) 
                                               | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                  >> 0xdU)))),29);
    bufp->fullCData(oldp+3011,((0xffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                                         >> 0xaU))),8);
    bufp->fullQData(oldp+3012,((((QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[3U])) 
                                 << 0x2eU) | (((QData)((IData)(
                                                               vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[2U])) 
                                               << 0xeU) 
                                              | ((QData)((IData)(
                                                                 vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[1U])) 
                                                 >> 0x12U)))),64);
    bufp->fullBit(oldp+3014,((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[3U] 
                                    >> 0x12U))));
    bufp->fullBit(oldp+3015,((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__full)))));
    bufp->fullBit(oldp+3016,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__enq_ptr_value));
    bufp->fullBit(oldp+3017,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__deq_ptr_value));
    bufp->fullBit(oldp+3018,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__maybe_full));
    bufp->fullBit(oldp+3019,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ptr_match));
    bufp->fullBit(oldp+3020,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty));
    bufp->fullBit(oldp+3021,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__full));
    bufp->fullBit(oldp+3022,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__do_enq));
    bufp->fullBit(oldp+3023,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__do_deq));
    __Vtemp_h9f650a6d__0[0U] = (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT___inDes_io_out_bits_data) 
                                 << 0xeU) | ((0x2000U 
                                              & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__inDes__DOT__data_0 
                                                 << 0xcU)) 
                                             | ((0x1000U 
                                                 & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__inDes__DOT__data_0 
                                                    << 0xaU)) 
                                                | ((0xf00U 
                                                    & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__inDes__DOT__data_4 
                                                       >> 3U)) 
                                                   | ((0xe0U 
                                                       & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__inDes__DOT__data_4 
                                                          >> 0xeU)) 
                                                      | ((0x18U 
                                                          & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__inDes__DOT__data_4 
                                                             >> 0x18U)) 
                                                         | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT___inDes_io_out_bits_opcode)))))));
    __Vtemp_h9f650a6d__0[1U] = (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT___inDes_io_out_bits_data) 
                                 >> 0x12U) | ((IData)(
                                                      (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT___inDes_io_out_bits_data 
                                                       >> 0x20U)) 
                                              << 0xeU));
    __Vtemp_h9f650a6d__0[2U] = ((0x4000U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__inDes__DOT__data_0 
                                            << 4U)) 
                                | ((IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT___inDes_io_out_bits_data 
                                            >> 0x20U)) 
                                   >> 0x12U));
    bufp->fullWData(oldp+3024,(__Vtemp_h9f650a6d__0),79);
    bufp->fullWData(oldp+3027,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data),79);
    bufp->fullWData(oldp+3030,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory[0]),79);
    bufp->fullWData(oldp+3033,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory[1]),79);
    bufp->fullCData(oldp+3036,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__monitor__DOT__a_first_counter),3);
    bufp->fullCData(oldp+3037,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__monitor__DOT__opcode),3);
    bufp->fullCData(oldp+3038,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__monitor__DOT__param),3);
    bufp->fullCData(oldp+3039,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__monitor__DOT__size),3);
    bufp->fullCData(oldp+3040,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__monitor__DOT__source),4);
    bufp->fullIData(oldp+3041,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__monitor__DOT__address),29);
    bufp->fullCData(oldp+3042,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__monitor__DOT__d_first_counter),3);
    bufp->fullCData(oldp+3043,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__monitor__DOT__opcode_1),3);
    bufp->fullCData(oldp+3044,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__monitor__DOT__param_1),2);
    bufp->fullCData(oldp+3045,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__monitor__DOT__size_1),3);
    bufp->fullCData(oldp+3046,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__monitor__DOT__source_1),4);
    bufp->fullBit(oldp+3047,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__monitor__DOT__sink));
    bufp->fullBit(oldp+3048,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__monitor__DOT__denied));
    bufp->fullSData(oldp+3049,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__monitor__DOT__inflight),16);
    bufp->fullQData(oldp+3050,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__monitor__DOT__inflight_opcodes),64);
    bufp->fullQData(oldp+3052,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__monitor__DOT__inflight_sizes),64);
    bufp->fullCData(oldp+3054,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__monitor__DOT__a_first_counter_1),3);
    bufp->fullBit(oldp+3055,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__monitor__DOT__a_first_counter_1))));
    bufp->fullCData(oldp+3056,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__monitor__DOT__d_first_counter_1),3);
    bufp->fullBit(oldp+3057,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))));
    bufp->fullBit(oldp+3058,((6U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))));
    bufp->fullIData(oldp+3059,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__monitor__DOT__watchdog),32);
    bufp->fullCData(oldp+3060,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__monitor__DOT__d_first_counter_2),3);
    bufp->fullBit(oldp+3061,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))));
    bufp->fullBit(oldp+3062,((2U == (3U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_size)))));
    bufp->fullBit(oldp+3063,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__monitor__DOT__mask_acc));
    bufp->fullBit(oldp+3064,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__monitor__DOT__mask_acc_1));
    bufp->fullBit(oldp+3065,((1U == (3U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_size)))));
    bufp->fullBit(oldp+3066,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__monitor__DOT__mask_eq_2));
    bufp->fullBit(oldp+3067,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__monitor__DOT__mask_acc_2));
    bufp->fullBit(oldp+3068,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__monitor__DOT__mask_eq_3));
    bufp->fullBit(oldp+3069,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__monitor__DOT__mask_acc_3));
    bufp->fullBit(oldp+3070,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__monitor__DOT__mask_eq_4));
    bufp->fullBit(oldp+3071,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__monitor__DOT__mask_acc_4));
    bufp->fullBit(oldp+3072,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__monitor__DOT__mask_eq_5));
    bufp->fullBit(oldp+3073,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__monitor__DOT__mask_acc_5));
    bufp->fullCData(oldp+3074,(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__monitor__DOT__mask_acc_5) 
                                  | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__monitor__DOT__mask_eq_5) 
                                     & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_address)) 
                                 << 7U) | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__monitor__DOT__mask_acc_5) 
                                             | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__monitor__DOT__mask_eq_5) 
                                                & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_address))) 
                                            << 6U) 
                                           | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__monitor__DOT__mask_acc_4) 
                                                | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__monitor__DOT__mask_eq_4) 
                                                   & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_address)) 
                                               << 5U) 
                                              | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__monitor__DOT__mask_acc_4) 
                                                   | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__monitor__DOT__mask_eq_4) 
                                                      & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_address))) 
                                                  << 4U) 
                                                 | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__monitor__DOT__mask_acc_3) 
                                                      | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__monitor__DOT__mask_eq_3) 
                                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_address)) 
                                                     << 3U) 
                                                    | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__monitor__DOT__mask_acc_3) 
                                                         | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__monitor__DOT__mask_eq_3) 
                                                            & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_address))) 
                                                        << 2U) 
                                                       | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__monitor__DOT__mask_acc_2) 
                                                            | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__monitor__DOT__mask_eq_2) 
                                                               & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_address)) 
                                                           << 1U) 
                                                          | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__monitor__DOT__mask_acc_2) 
                                                             | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__monitor__DOT__mask_eq_2) 
                                                                & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_address))))))))))),8);
    bufp->fullSData(oldp+3075,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__monitor__DOT___same_cycle_resp_T_1)
                                 ? ((0xfU >= (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_mbus_auto_coupler_to_port_named_serial_tl_mem_tlserial_manager_crossing_out_a_bits_source))
                                     ? (0xffffU & ((IData)(1U) 
                                                   << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_mbus_auto_coupler_to_port_named_serial_tl_mem_tlserial_manager_crossing_out_a_bits_source)))
                                     : 0U) : 0U)),16);
    bufp->fullBit(oldp+3076,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__monitor__DOT__same_cycle_resp));
    bufp->fullBit(oldp+3077,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT__enq_ptr_value));
    bufp->fullBit(oldp+3078,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT__deq_ptr_value));
    bufp->fullBit(oldp+3079,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT__maybe_full));
    bufp->fullBit(oldp+3080,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT__ptr_match));
    bufp->fullBit(oldp+3081,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT__empty));
    bufp->fullBit(oldp+3082,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT__full));
    bufp->fullBit(oldp+3083,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT__do_enq));
    bufp->fullBit(oldp+3084,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT__do_deq));
    __Vtemp_h649df5ac__0[0U] = (IData)((((QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_mask)) 
                                         << 0x2aU) 
                                        | (((QData)((IData)(
                                                            (0x1fffffffU 
                                                             & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_address))) 
                                            << 0xdU) 
                                           | (QData)((IData)(
                                                             (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_mbus_auto_coupler_to_port_named_serial_tl_mem_tlserial_manager_crossing_out_a_bits_source) 
                                                               << 9U) 
                                                              | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_size) 
                                                                  << 6U) 
                                                                 | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_param) 
                                                                     << 3U) 
                                                                    | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_opcode)))))))));
    __Vtemp_h649df5ac__0[1U] = (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_data) 
                                 << 0x12U) | (IData)(
                                                     ((((QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_mask)) 
                                                        << 0x2aU) 
                                                       | (((QData)((IData)(
                                                                           (0x1fffffffU 
                                                                            & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_address))) 
                                                           << 0xdU) 
                                                          | (QData)((IData)(
                                                                            (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_mbus_auto_coupler_to_port_named_serial_tl_mem_tlserial_manager_crossing_out_a_bits_source) 
                                                                              << 9U) 
                                                                             | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_size) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_param) 
                                                                                << 3U) 
                                                                                | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_opcode)))))))) 
                                                      >> 0x20U)));
    __Vtemp_h649df5ac__0[2U] = (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_data) 
                                 >> 0xeU) | ((IData)(
                                                     (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_data 
                                                      >> 0x20U)) 
                                             << 0x12U));
    __Vtemp_h649df5ac__0[3U] = ((0xfffc0000U & ((0xfffc0000U 
                                                 & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__muxStateEarly_0) 
                                                     << 0x12U) 
                                                    & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT___ram_ext_R0_data[3U] 
                                                       << 5U))) 
                                                | (0x1ffc0000U 
                                                   & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__muxStateEarly_1) 
                                                       << 0x12U) 
                                                      & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[3U] 
                                                         >> 3U))))) 
                                | ((IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_data 
                                            >> 0x20U)) 
                                   >> 0xeU));
    bufp->fullWData(oldp+3085,(__Vtemp_h649df5ac__0),115);
    bufp->fullWData(oldp+3089,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data),115);
    bufp->fullWData(oldp+3093,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory[0]),115);
    bufp->fullWData(oldp+3097,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory[1]),115);
    bufp->fullSData(oldp+3101,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__merged_bits_last_counter_1),9);
    bufp->fullSData(oldp+3102,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__merged_bits_last_counter_4),9);
    bufp->fullBit(oldp+3103,(((4U != (7U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__inDes__DOT__data_5 
                                            >> 1U))) 
                              & ((3U == (7U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__inDes__DOT__data_5 
                                               >> 1U)))
                                  ? (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__full))
                                  : ((IData)(((0U == 
                                               (0xeU 
                                                & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__inDes__DOT__data_5)) 
                                              & (~ 
                                                 ((2U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__inDes__DOT__data_5 
                                                       >> 1U))) 
                                                  | (1U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__inDes__DOT__data_5 
                                                         >> 1U))))))) 
                                     & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__x1_a_q__DOT__full)))))));
    bufp->fullBit(oldp+3104,((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__inDes__DOT__receiving)))));
    bufp->fullCData(oldp+3105,((7U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__inDes__DOT__data_5 
                                      >> 1U))),3);
    bufp->fullCData(oldp+3106,((0xffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__inDes__DOT__data_4 
                                         >> 0x13U))),8);
    bufp->fullCData(oldp+3107,((0xffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__inDes__DOT__data_4 
                                         >> 0xbU))),8);
    bufp->fullQData(oldp+3108,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT___inDes_io_out_bits_address),64);
    bufp->fullSData(oldp+3110,((0x1ffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__inDes__DOT__data_0 
                                          >> 1U))),9);
    bufp->fullIData(oldp+3111,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__inDes__DOT__data_0),32);
    bufp->fullIData(oldp+3112,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__inDes__DOT__data_1),32);
    bufp->fullIData(oldp+3113,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__inDes__DOT__data_2),32);
    bufp->fullIData(oldp+3114,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__inDes__DOT__data_3),32);
    bufp->fullIData(oldp+3115,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__inDes__DOT__data_4),32);
    bufp->fullIData(oldp+3116,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__inDes__DOT__data_5),32);
    bufp->fullCData(oldp+3117,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__inDes__DOT__recvCount),3);
    bufp->fullBit(oldp+3118,((5U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__inDes__DOT__recvCount))));
    bufp->fullCData(oldp+3119,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__a_first_counter),3);
    bufp->fullCData(oldp+3120,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__opcode),3);
    bufp->fullCData(oldp+3121,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__param),3);
    bufp->fullCData(oldp+3122,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__size),3);
    bufp->fullCData(oldp+3123,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__source),4);
    bufp->fullIData(oldp+3124,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__address),29);
    bufp->fullCData(oldp+3125,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__d_first_counter),3);
    bufp->fullCData(oldp+3126,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__opcode_1),3);
    bufp->fullCData(oldp+3127,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__param_1),2);
    bufp->fullCData(oldp+3128,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__size_1),3);
    bufp->fullCData(oldp+3129,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__source_1),4);
    bufp->fullBit(oldp+3130,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__sink));
    bufp->fullBit(oldp+3131,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__denied));
    bufp->fullSData(oldp+3132,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__inflight),16);
    bufp->fullQData(oldp+3133,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__inflight_opcodes),64);
    bufp->fullQData(oldp+3135,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__inflight_sizes),64);
    bufp->fullCData(oldp+3137,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__a_first_counter_1),3);
    bufp->fullBit(oldp+3138,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__a_first_counter_1))));
    bufp->fullCData(oldp+3139,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__d_first_counter_1),3);
    bufp->fullBit(oldp+3140,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__d_first_counter_1))));
    bufp->fullBit(oldp+3141,((6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT___inDes_io_out_bits_opcode))));
    bufp->fullIData(oldp+3142,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__watchdog),32);
    bufp->fullCData(oldp+3143,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__d_first_counter_2),3);
    bufp->fullBit(oldp+3144,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__d_first_counter_2))));
    bufp->fullBit(oldp+3145,((2U == (3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                           >> 6U)))));
    bufp->fullBit(oldp+3146,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__mask_acc));
    bufp->fullBit(oldp+3147,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__mask_acc_1));
    bufp->fullBit(oldp+3148,((1U == (3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                           >> 6U)))));
    bufp->fullBit(oldp+3149,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__mask_eq_2));
    bufp->fullBit(oldp+3150,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__mask_acc_2));
    bufp->fullBit(oldp+3151,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__mask_eq_3));
    bufp->fullBit(oldp+3152,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__mask_acc_3));
    bufp->fullBit(oldp+3153,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__mask_eq_4));
    bufp->fullBit(oldp+3154,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__mask_acc_4));
    bufp->fullBit(oldp+3155,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__mask_eq_5));
    bufp->fullBit(oldp+3156,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__mask_acc_5));
    bufp->fullCData(oldp+3157,(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__mask_acc_5) 
                                  << 7U) | (0x3ffff80U 
                                            & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__mask_eq_5) 
                                                << 7U) 
                                               & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                  >> 6U)))) 
                                | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__mask_acc_5) 
                                     | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__mask_eq_5) 
                                        & (~ (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                              >> 0xdU)))) 
                                    << 6U) | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__mask_acc_4) 
                                                << 5U) 
                                               | (0xffffe0U 
                                                  & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__mask_eq_4) 
                                                      << 5U) 
                                                     & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                        >> 8U)))) 
                                              | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__mask_acc_4) 
                                                   | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__mask_eq_4) 
                                                      & (~ 
                                                         (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                          >> 0xdU)))) 
                                                  << 4U) 
                                                 | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__mask_acc_3) 
                                                      << 3U) 
                                                     | (0x3ffff8U 
                                                        & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__mask_eq_3) 
                                                            << 3U) 
                                                           & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                              >> 0xaU)))) 
                                                    | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__mask_acc_3) 
                                                         | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__mask_eq_3) 
                                                            & (~ 
                                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                >> 0xdU)))) 
                                                        << 2U) 
                                                       | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__mask_acc_2) 
                                                            << 1U) 
                                                           | (0xffffeU 
                                                              & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__mask_eq_2) 
                                                                  << 1U) 
                                                                 & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                    >> 0xcU)))) 
                                                          | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__mask_acc_2) 
                                                             | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__mask_eq_2) 
                                                                & (~ 
                                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                    >> 0xdU)))))))))))),8);
    bufp->fullBit(oldp+3158,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__same_cycle_resp));
    bufp->fullCData(oldp+3159,((3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                      >> 3U))),3);
    bufp->fullCData(oldp+3160,((0xfU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                        >> 5U))),8);
    bufp->fullCData(oldp+3161,((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                      >> 9U))),8);
    bufp->fullSData(oldp+3162,(((0x1eU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                          >> 9U)) | 
                                (1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                       >> 0xeU)))),9);
    bufp->fullBit(oldp+3163,(((1U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__merged_bits_last_counter_1)) 
                              | (0U == ((1U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U])
                                         ? (0x1ffU 
                                            & (~ (0xffffffU 
                                                  & (((IData)(0xfffU) 
                                                      << 
                                                      (0xfU 
                                                       & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                          >> 5U))) 
                                                     >> 3U))))
                                         : 0U)))));
    bufp->fullCData(oldp+3164,((7U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                      >> 6U))),8);
    bufp->fullCData(oldp+3165,((0xfU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                        >> 9U))),8);
    bufp->fullQData(oldp+3166,((QData)((IData)((0x1fffffffU 
                                                & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                                                    << 0x13U) 
                                                   | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                      >> 0xdU)))))),64);
    bufp->fullSData(oldp+3168,((0xffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                                         >> 0xaU))),9);
    bufp->fullBit(oldp+3169,(((1U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__merged_bits_last_counter_4)) 
                              | (0U == ((4U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U])
                                         ? 0U : (0x1ffU 
                                                 & (~ 
                                                    (0xffffU 
                                                     & (((IData)(0xfffU) 
                                                         << 
                                                         (7U 
                                                          & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                             >> 6U))) 
                                                        >> 3U)))))))));
    bufp->fullBit(oldp+3170,((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__outSer__DOT__sending)))));
    bufp->fullBit(oldp+3171,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__outArb__DOT___io_out_valid_output));
    bufp->fullCData(oldp+3172,(((0x17U >= (0x1fU & 
                                           ((IData)(3U) 
                                            * (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__outArb__DOT__chosen))))
                                 ? (7U & (0x92029cU 
                                          >> (0x1fU 
                                              & ((IData)(3U) 
                                                 * (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__outArb__DOT__chosen)))))
                                 : 0U)),3);
    bufp->fullCData(oldp+3173,(((0x17U >= (0x1fU & 
                                           ((IData)(3U) 
                                            * (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__outArb__DOT__chosen))))
                                 ? (7U & (((0x7000U 
                                            & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                               << 0xcU)) 
                                           | (0x38U 
                                              & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                 << 3U))) 
                                          >> (0x1fU 
                                              & ((IData)(3U) 
                                                 * (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__outArb__DOT__chosen)))))
                                 : 0U)),3);
    bufp->fullCData(oldp+3174,(((0x17U >= (0x1fU & 
                                           ((IData)(3U) 
                                            * (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__outArb__DOT__chosen))))
                                 ? (7U & (((0x7000U 
                                            & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                               << 9U)) 
                                           | (0x18U 
                                              & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U])) 
                                          >> (0x1fU 
                                              & ((IData)(3U) 
                                                 * (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__outArb__DOT__chosen)))))
                                 : 0U)),3);
    bufp->fullCData(oldp+3175,((0xffU & (IData)((((QData)((IData)(
                                                                  ((0x7000000U 
                                                                    & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                       << 0x12U)) 
                                                                   | (0xfU 
                                                                      & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                                         >> 5U))))) 
                                                  << 8U) 
                                                 >> 
                                                 (0x3fU 
                                                  & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__outArb__DOT__chosen) 
                                                     << 3U)))))),8);
    bufp->fullCData(oldp+3176,((0xffU & (IData)((((QData)((IData)(
                                                                  ((0xf000000U 
                                                                    & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                       << 0xfU)) 
                                                                   | (1U 
                                                                      & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                                         >> 9U))))) 
                                                  << 8U) 
                                                 >> 
                                                 (0x3fU 
                                                  & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__outArb__DOT__chosen) 
                                                     << 3U)))))),8);
    VL_EXTEND_WI(256,29, __Vtemp_h3f65b527__0, (0x1fffffffU 
                                                & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                                                    << 0x13U) 
                                                   | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                      >> 0xdU))));
    __Vtemp_hf5b245dc__0[0U] = 0U;
    __Vtemp_hf5b245dc__0[1U] = 0U;
    __Vtemp_hf5b245dc__0[2U] = 0U;
    __Vtemp_hf5b245dc__0[3U] = 0U;
    __Vtemp_hf5b245dc__0[4U] = 0U;
    __Vtemp_hf5b245dc__0[5U] = 0U;
    __Vtemp_hf5b245dc__0[6U] = 0U;
    __Vtemp_hf5b245dc__0[7U] = 0U;
    __Vtemp_hf5b245dc__0[8U] = __Vtemp_h3f65b527__0[0U];
    __Vtemp_hf5b245dc__0[9U] = __Vtemp_h3f65b527__0[1U];
    __Vtemp_hf5b245dc__0[0xaU] = __Vtemp_h3f65b527__0[2U];
    __Vtemp_hf5b245dc__0[0xbU] = __Vtemp_h3f65b527__0[3U];
    __Vtemp_hf5b245dc__0[0xcU] = __Vtemp_h3f65b527__0[4U];
    __Vtemp_hf5b245dc__0[0xdU] = __Vtemp_h3f65b527__0[5U];
    __Vtemp_hf5b245dc__0[0xeU] = __Vtemp_h3f65b527__0[6U];
    __Vtemp_hf5b245dc__0[0xfU] = __Vtemp_h3f65b527__0[7U];
    bufp->fullQData(oldp+3177,((((QData)((IData)(__Vtemp_hf5b245dc__0[
                                                 (((IData)(0x3fU) 
                                                   + 
                                                   (0x1ffU 
                                                    & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__outArb__DOT__chosen) 
                                                       << 6U))) 
                                                  >> 5U)])) 
                                 << ((0U == (0x1fU 
                                             & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__outArb__DOT__chosen) 
                                                << 6U)))
                                      ? 0x20U : ((IData)(0x40U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__outArb__DOT__chosen) 
                                                     << 6U))))) 
                                | (((0U == (0x1fU & 
                                            ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__outArb__DOT__chosen) 
                                             << 6U)))
                                     ? 0ULL : ((QData)((IData)(
                                                               __Vtemp_hf5b245dc__0[
                                                               (((IData)(0x1fU) 
                                                                 + 
                                                                 (0x1ffU 
                                                                  & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__outArb__DOT__chosen) 
                                                                     << 6U))) 
                                                                >> 5U)])) 
                                               << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__outArb__DOT__chosen) 
                                                       << 6U))))) 
                                   | ((QData)((IData)(
                                                      __Vtemp_hf5b245dc__0[
                                                      (0xeU 
                                                       & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__outArb__DOT__chosen) 
                                                          << 1U))])) 
                                      >> (0x1fU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__outArb__DOT__chosen) 
                                                   << 6U)))))),64);
    VL_EXTEND_WQ(256,64, __Vtemp_h80cfcf7c__0, (((QData)((IData)(
                                                                 vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[3U])) 
                                                 << 0x2eU) 
                                                | (((QData)((IData)(
                                                                    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[2U])) 
                                                    << 0xeU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[1U])) 
                                                      >> 0x12U))));
    __Vtemp_h5b810b13__0[0U] = 0U;
    __Vtemp_h5b810b13__0[1U] = 0U;
    __Vtemp_h5b810b13__0[2U] = (IData)((((QData)((IData)(
                                                         vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[2U])) 
                                         << 0x31U) 
                                        | (((QData)((IData)(
                                                            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[1U])) 
                                            << 0x11U) 
                                           | ((QData)((IData)(
                                                              vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U])) 
                                              >> 0xfU))));
    __Vtemp_h5b810b13__0[3U] = (IData)(((((QData)((IData)(
                                                          vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[2U])) 
                                          << 0x31U) 
                                         | (((QData)((IData)(
                                                             vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[1U])) 
                                             << 0x11U) 
                                            | ((QData)((IData)(
                                                               vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U])) 
                                               >> 0xfU))) 
                                        >> 0x20U));
    __Vtemp_h5b810b13__0[4U] = 0U;
    __Vtemp_h5b810b13__0[5U] = 0U;
    __Vtemp_h5b810b13__0[6U] = 0U;
    __Vtemp_h5b810b13__0[7U] = 0U;
    __Vtemp_h5b810b13__0[8U] = __Vtemp_h80cfcf7c__0[0U];
    __Vtemp_h5b810b13__0[9U] = __Vtemp_h80cfcf7c__0[1U];
    __Vtemp_h5b810b13__0[0xaU] = __Vtemp_h80cfcf7c__0[2U];
    __Vtemp_h5b810b13__0[0xbU] = __Vtemp_h80cfcf7c__0[3U];
    __Vtemp_h5b810b13__0[0xcU] = __Vtemp_h80cfcf7c__0[4U];
    __Vtemp_h5b810b13__0[0xdU] = __Vtemp_h80cfcf7c__0[5U];
    __Vtemp_h5b810b13__0[0xeU] = __Vtemp_h80cfcf7c__0[6U];
    __Vtemp_h5b810b13__0[0xfU] = __Vtemp_h80cfcf7c__0[7U];
    bufp->fullQData(oldp+3179,((((QData)((IData)(__Vtemp_h5b810b13__0[
                                                 (((IData)(0x3fU) 
                                                   + 
                                                   (0x1ffU 
                                                    & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__outArb__DOT__chosen) 
                                                       << 6U))) 
                                                  >> 5U)])) 
                                 << ((0U == (0x1fU 
                                             & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__outArb__DOT__chosen) 
                                                << 6U)))
                                      ? 0x20U : ((IData)(0x40U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__outArb__DOT__chosen) 
                                                     << 6U))))) 
                                | (((0U == (0x1fU & 
                                            ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__outArb__DOT__chosen) 
                                             << 6U)))
                                     ? 0ULL : ((QData)((IData)(
                                                               __Vtemp_h5b810b13__0[
                                                               (((IData)(0x1fU) 
                                                                 + 
                                                                 (0x1ffU 
                                                                  & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__outArb__DOT__chosen) 
                                                                     << 6U))) 
                                                                >> 5U)])) 
                                               << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__outArb__DOT__chosen) 
                                                       << 6U))))) 
                                   | ((QData)((IData)(
                                                      __Vtemp_h5b810b13__0[
                                                      (0xeU 
                                                       & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__outArb__DOT__chosen) 
                                                          << 1U))])) 
                                      >> (0x1fU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__outArb__DOT__chosen) 
                                                   << 6U)))))),64);
    bufp->fullBit(oldp+3181,((1U & (((0x10U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[3U] 
                                               >> 0xeU)) 
                                     | (2U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[2U] 
                                              >> 0xeU))) 
                                    >> (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__outArb__DOT__chosen)))));
    VL_EXTEND_WQ(72,45, __Vtemp_h83b8ff7e__0, (((QData)((IData)(
                                                                (0xffU 
                                                                 & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                                                                    >> 0xaU)))) 
                                                << 0x24U) 
                                               | (QData)((IData)(
                                                                 ((0x3c00U 
                                                                   & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]) 
                                                                  | (0x200U 
                                                                     & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                                        >> 5U)))))));
    bufp->fullSData(oldp+3182,(((0x47U >= (0x7fU & 
                                           ((IData)(9U) 
                                            * (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__outArb__DOT__chosen))))
                                 ? (0x1ffU & (((0U 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(9U) 
                                                    * (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__outArb__DOT__chosen))))
                                                ? 0U
                                                : (
                                                   __Vtemp_h83b8ff7e__0[
                                                   (((IData)(8U) 
                                                     + 
                                                     (0x7fU 
                                                      & ((IData)(9U) 
                                                         * (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__outArb__DOT__chosen)))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(9U) 
                                                        * (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__outArb__DOT__chosen)))))) 
                                              | (__Vtemp_h83b8ff7e__0[
                                                 (3U 
                                                  & (((IData)(9U) 
                                                      * (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__outArb__DOT__chosen)) 
                                                     >> 5U))] 
                                                 >> 
                                                 (0x1fU 
                                                  & ((IData)(9U) 
                                                     * (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__outArb__DOT__chosen))))))
                                 : 0U)),9);
    bufp->fullBit(oldp+3183,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__outArb__DOT___io_out_bits_last_output));
    bufp->fullCData(oldp+3184,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__outArb__DOT__lockIdx),3);
    bufp->fullBit(oldp+3185,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__outArb__DOT__locked));
    bufp->fullCData(oldp+3186,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__outArb__DOT__chosen),3);
    bufp->fullWData(oldp+3187,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__outSer__DOT__data),164);
    bufp->fullCData(oldp+3193,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__outSer__DOT__sendCount),3);
    bufp->fullBit(oldp+3194,((5U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__outSer__DOT__sendCount))));
    bufp->fullBit(oldp+3195,((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__x1_a_q__DOT__full)))));
    bufp->fullBit(oldp+3196,((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)))));
    bufp->fullCData(oldp+3197,((7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U])),3);
    bufp->fullCData(oldp+3198,((3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                      >> 3U))),2);
    bufp->fullCData(oldp+3199,((7U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                      >> 5U))),3);
    bufp->fullCData(oldp+3200,((0x7fU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                         >> 8U))),7);
    bufp->fullBit(oldp+3201,((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                    >> 0xfU))));
    bufp->fullBit(oldp+3202,((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                    >> 0x10U))));
    bufp->fullQData(oldp+3203,((((QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[2U])) 
                                 << 0x2fU) | (((QData)((IData)(
                                                               vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[1U])) 
                                               << 0xfU) 
                                              | ((QData)((IData)(
                                                                 vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U])) 
                                                 >> 0x11U)))),64);
    bufp->fullBit(oldp+3205,((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[2U] 
                                    >> 0x11U))));
    bufp->fullBit(oldp+3206,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__in_ready));
    bufp->fullBit(oldp+3207,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_valid));
    bufp->fullCData(oldp+3208,((1U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_back__DOT__ram_ext__DOT__Memory
                                [0U][0U])),3);
    bufp->fullCData(oldp+3209,((3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_back__DOT__ram_ext__DOT__Memory
                                      [0U][2U] >> 0x1dU))),2);
    bufp->fullSData(oldp+3210,((0x7ffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_back__DOT__ram_ext__DOT__Memory
                                          [0U][2U] 
                                          >> 0x12U))),11);
    bufp->fullQData(oldp+3211,(((1U & ((2U | ((8U & 
                                               ((~ (IData)(
                                                           (0U 
                                                            != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT___GEN_2)))) 
                                                << 3U)) 
                                              | ((4U 
                                                  & ((~ (IData)(
                                                                (0U 
                                                                 != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT___GEN_2)))) 
                                                     << 2U)) 
                                                 | (1U 
                                                    & (~ (IData)(
                                                                 (0U 
                                                                  != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT___GEN_2)))))))) 
                                       >> (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_oindex)))
                                 ? (((QData)((IData)(
                                                     VTestHarness__ConstPool__CONST_h4e4f723a_0[
                                                     (((IData)(0x3fU) 
                                                       + 
                                                       (0xffU 
                                                        & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_oindex) 
                                                           << 6U))) 
                                                      >> 5U)])) 
                                     << ((0U == (0x1fU 
                                                 & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_oindex) 
                                                    << 6U)))
                                          ? 0x20U : 
                                         ((IData)(0x40U) 
                                          - (0x1fU 
                                             & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_oindex) 
                                                << 6U))))) 
                                    | (((0U == (0x1fU 
                                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_oindex) 
                                                   << 6U)))
                                         ? 0ULL : ((QData)((IData)(
                                                                   VTestHarness__ConstPool__CONST_h4e4f723a_0[
                                                                   (((IData)(0x1fU) 
                                                                     + 
                                                                     (0xffU 
                                                                      & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_oindex) 
                                                                         << 6U))) 
                                                                    >> 5U)])) 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_oindex) 
                                                        << 6U))))) 
                                       | ((QData)((IData)(
                                                          VTestHarness__ConstPool__CONST_h4e4f723a_0[
                                                          (6U 
                                                           & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_oindex) 
                                                              << 1U))])) 
                                          >> (0x1fU 
                                              & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_oindex) 
                                                 << 6U)))))
                                 : 0ULL)),64);
    bufp->fullBit(oldp+3213,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__repeated_repeater__DOT___io_deq_valid_output));
    bufp->fullCData(oldp+3214,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT___repeated_repeater_io_deq_bits_opcode),3);
    bufp->fullCData(oldp+3215,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_param),3);
    bufp->fullCData(oldp+3216,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT___repeated_repeater_io_deq_bits_size),4);
    bufp->fullCData(oldp+3217,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_source),6);
    bufp->fullIData(oldp+3218,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT___repeated_repeater_io_deq_bits_address),31);
    bufp->fullCData(oldp+3219,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_mask),8);
    bufp->fullQData(oldp+3220,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__repeat_index)
                                 ? (((QData)((IData)(
                                                     ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__repeated_repeater__DOT__full)
                                                       ? 
                                                      vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__repeated_repeater__DOT__saved_data[3U]
                                                       : 
                                                      vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_data[3U]))) 
                                     << 0x20U) | (QData)((IData)(
                                                                 ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__repeated_repeater__DOT__full)
                                                                   ? 
                                                                  vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__repeated_repeater__DOT__saved_data[2U]
                                                                   : 
                                                                  vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_data[2U]))))
                                 : (((QData)((IData)(
                                                     vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_data[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_data[0U]))))),64);
    bufp->fullBit(oldp+3222,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__repeated_repeater__DOT__full)
                               ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__repeated_repeater__DOT__saved_corrupt)
                               : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_corrupt))));
    bufp->fullBit(oldp+3223,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__x1_d_ready));
    bufp->fullBit(oldp+3224,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__maybe_full));
    bufp->fullCData(oldp+3225,((7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                [0U][0U])),3);
    bufp->fullCData(oldp+3226,((7U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                      [0U][0U] >> 3U))),3);
    bufp->fullCData(oldp+3227,((3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                      [0U][0U] >> 6U))),2);
    bufp->fullSData(oldp+3228,((0x7ffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                          [0U][0U] 
                                          >> 8U))),11);
    bufp->fullIData(oldp+3229,((0x3ffffffU & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                               [0U][1U] 
                                               << 0xdU) 
                                              | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                 [0U][0U] 
                                                 >> 0x13U)))),26);
    bufp->fullCData(oldp+3230,((0xffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                         [0U][1U] >> 0xdU))),8);
    bufp->fullQData(oldp+3231,((((QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                 [0U][3U])) 
                                 << 0x2bU) | (((QData)((IData)(
                                                               vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                               [0U][2U])) 
                                               << 0xbU) 
                                              | ((QData)((IData)(
                                                                 vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                                 [0U][1U])) 
                                                 >> 0x15U)))),64);
    bufp->fullBit(oldp+3233,((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                    [0U][3U] >> 0x15U))));
    bufp->fullBit(oldp+3234,((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__maybe_full)))));
    bufp->fullBit(oldp+3235,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__portsAOI_filtered_0_ready));
    bufp->fullBit(oldp+3236,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__out_7_valid));
    bufp->fullCData(oldp+3237,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__bundleIn_0_d_bits_opcode),3);
    bufp->fullCData(oldp+3238,((3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                      >> 3U))),2);
    bufp->fullCData(oldp+3239,((0xfU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                        >> 5U))),4);
    bufp->fullCData(oldp+3240,((0x3fU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                         >> 9U))),6);
    bufp->fullBit(oldp+3241,((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                    >> 0x10U))));
    bufp->fullBit(oldp+3242,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__bundleIn_0_d_bits_denied));
    bufp->fullQData(oldp+3243,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___atomics_auto_in_d_bits_data),64);
    bufp->fullBit(oldp+3245,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__d_replace)
                                     ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_d_0_corrupt) 
                                        | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                           >> 0x11U))
                                     : (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[2U] 
                                        >> 0x12U)))));
    bufp->fullCData(oldp+3246,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__state),3);
    bufp->fullBit(oldp+3247,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__x1_2_a_valid));
    bufp->fullBit(oldp+3248,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__x1_out_1_valid));
    bufp->fullCData(oldp+3249,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_opcode),3);
    bufp->fullCData(oldp+3250,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_param),3);
    bufp->fullCData(oldp+3251,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_size),4);
    bufp->fullCData(oldp+3252,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_source),7);
    bufp->fullIData(oldp+3253,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_address),31);
    bufp->fullCData(oldp+3254,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_mask),8);
    bufp->fullQData(oldp+3255,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_data),64);
    bufp->fullBit(oldp+3257,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_corrupt));
    bufp->fullBit(oldp+3258,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_d_ready));
    bufp->fullBit(oldp+3259,((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT__full)))));
    bufp->fullBit(oldp+3260,((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)))));
    bufp->fullCData(oldp+3261,((7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U])),3);
    bufp->fullCData(oldp+3262,((0x7fU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                         >> 9U))),7);
    bufp->fullBit(oldp+3263,((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                    >> 0x11U))));
    bufp->fullQData(oldp+3264,((((QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[2U])) 
                                 << 0x2eU) | (((QData)((IData)(
                                                               vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[1U])) 
                                               << 0xeU) 
                                              | ((QData)((IData)(
                                                                 vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U])) 
                                                 >> 0x12U)))),64);
    bufp->fullBit(oldp+3266,((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[2U] 
                                    >> 0x12U))));
    bufp->fullBit(oldp+3267,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__bundleIn_0_a_ready));
    bufp->fullBit(oldp+3268,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__bundleIn_0_d_valid));
    bufp->fullBit(oldp+3269,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__out_2_valid));
    bufp->fullCData(oldp+3270,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___atomics_auto_out_a_bits_opcode),3);
    bufp->fullCData(oldp+3271,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___atomics_auto_out_a_bits_param),3);
    bufp->fullCData(oldp+3272,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___atomics_auto_out_a_bits_size),4);
    bufp->fullCData(oldp+3273,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___atomics_auto_out_a_bits_source),7);
    bufp->fullIData(oldp+3274,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___atomics_auto_out_a_bits_address),31);
    bufp->fullCData(oldp+3275,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___atomics_auto_out_a_bits_mask),8);
    bufp->fullQData(oldp+3276,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___atomics_auto_out_a_bits_data),64);
    bufp->fullBit(oldp+3278,((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__muxStateEarly_0) 
                               & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_corrupt) 
                                  | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_d_0_corrupt))) 
                              | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__muxStateEarly_1) 
                                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_corrupt)))));
    bufp->fullBit(oldp+3279,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__x1_d_ready));
    bufp->fullBit(oldp+3280,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__out_1_ready));
    bufp->fullCData(oldp+3281,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_s_0_state),2);
    bufp->fullCData(oldp+3282,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_opcode),3);
    bufp->fullCData(oldp+3283,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_param),3);
    bufp->fullCData(oldp+3284,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_size),4);
    bufp->fullCData(oldp+3285,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_source),7);
    bufp->fullIData(oldp+3286,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_address),31);
    bufp->fullCData(oldp+3287,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_mask),8);
    bufp->fullQData(oldp+3288,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_data),64);
    bufp->fullBit(oldp+3290,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_corrupt));
    bufp->fullBit(oldp+3291,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_fifoId));
    bufp->fullCData(oldp+3292,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_lut),4);
    bufp->fullQData(oldp+3293,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_d_0_data),64);
    bufp->fullBit(oldp+3295,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_d_0_denied));
    bufp->fullBit(oldp+3296,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_d_0_corrupt));
    bufp->fullBit(oldp+3297,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_s_0_state))));
    bufp->fullBit(oldp+3298,((2U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_s_0_state))));
    bufp->fullBit(oldp+3299,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__a_isSupported));
    bufp->fullQData(oldp+3300,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__wide_mask),64);
    bufp->fullQData(oldp+3302,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__a_a_ext),64);
    bufp->fullQData(oldp+3304,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__a_d_ext),64);
    bufp->fullQData(oldp+3306,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__adder_out),64);
    bufp->fullBit(oldp+3308,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__a_allow));
    bufp->fullBit(oldp+3309,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__out_1_earlyValid));
    bufp->fullBit(oldp+3310,((2U == (3U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_size)))));
    bufp->fullBit(oldp+3311,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__source_c_bits_a_mask_acc));
    bufp->fullBit(oldp+3312,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__source_c_bits_a_mask_acc_1));
    bufp->fullBit(oldp+3313,((1U == (3U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_size)))));
    bufp->fullBit(oldp+3314,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__source_c_bits_a_mask_eq_2));
    bufp->fullBit(oldp+3315,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__source_c_bits_a_mask_acc_2));
    bufp->fullBit(oldp+3316,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__source_c_bits_a_mask_eq_3));
    bufp->fullBit(oldp+3317,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__source_c_bits_a_mask_acc_3));
    bufp->fullBit(oldp+3318,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__source_c_bits_a_mask_eq_4));
    bufp->fullBit(oldp+3319,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__source_c_bits_a_mask_acc_4));
    bufp->fullBit(oldp+3320,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__source_c_bits_a_mask_eq_5));
    bufp->fullBit(oldp+3321,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__source_c_bits_a_mask_acc_5));
    bufp->fullSData(oldp+3322,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__beatsLeft),9);
    bufp->fullBit(oldp+3323,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__beatsLeft))));
    bufp->fullBit(oldp+3324,(((2U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_s_0_state)) 
                              & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__out_1_earlyValid))));
    bufp->fullBit(oldp+3325,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__state_0));
    bufp->fullBit(oldp+3326,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__state_1));
    bufp->fullBit(oldp+3327,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__muxStateEarly_0));
    bufp->fullBit(oldp+3328,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__muxStateEarly_1));
    bufp->fullSData(oldp+3329,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__d_first_counter),9);
    bufp->fullBit(oldp+3330,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__d_first_counter))));
    bufp->fullBit(oldp+3331,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__d_cam_sel_match_0));
    bufp->fullBit(oldp+3332,((1U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))));
    bufp->fullBit(oldp+3333,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__d_drop));
    bufp->fullBit(oldp+3334,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__d_replace));
    bufp->fullBit(oldp+3335,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__winnerQual_1));
    bufp->fullSData(oldp+3336,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__a_first_counter),9);
    bufp->fullCData(oldp+3337,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__opcode),3);
    bufp->fullCData(oldp+3338,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__param),3);
    bufp->fullCData(oldp+3339,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__size),4);
    bufp->fullCData(oldp+3340,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__source),7);
    bufp->fullIData(oldp+3341,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__address),31);
    bufp->fullSData(oldp+3342,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__d_first_counter),9);
    bufp->fullCData(oldp+3343,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__opcode_1),3);
    bufp->fullCData(oldp+3344,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__param_1),2);
    bufp->fullCData(oldp+3345,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__size_1),4);
    bufp->fullCData(oldp+3346,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__source_1),7);
    bufp->fullBit(oldp+3347,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__sink));
    bufp->fullBit(oldp+3348,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__denied));
    bufp->fullWData(oldp+3349,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight),65);
    bufp->fullWData(oldp+3352,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight_opcodes),260);
    bufp->fullWData(oldp+3361,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight_sizes),520);
    bufp->fullSData(oldp+3378,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__a_first_counter_1),9);
    bufp->fullBit(oldp+3379,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__a_first_counter_1))));
    bufp->fullSData(oldp+3380,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__d_first_counter_1),9);
    bufp->fullBit(oldp+3381,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__d_first_counter_1))));
    bufp->fullBit(oldp+3382,((6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__bundleIn_0_d_bits_opcode))));
    bufp->fullIData(oldp+3383,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__watchdog),32);
    bufp->fullSData(oldp+3384,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__d_first_counter_2),9);
    bufp->fullBit(oldp+3385,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__d_first_counter_2))));
    bufp->fullBit(oldp+3386,((1U & (((((((0x24U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_source)) 
                                         | (1U == (7U 
                                                   & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_source) 
                                                      >> 4U)))) 
                                        | (~ (IData)(
                                                     (0U 
                                                      != 
                                                      (7U 
                                                       & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_source) 
                                                          >> 4U)))))) 
                                       | (0x20U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_source))) 
                                      | (0x21U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_source))) 
                                     | (0x22U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_source))) 
                                    | (0x40U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_source))))));
    bufp->fullBit(oldp+3387,((2U == (3U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_size)))));
    bufp->fullBit(oldp+3388,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__mask_acc));
    bufp->fullBit(oldp+3389,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__mask_acc_1));
    bufp->fullBit(oldp+3390,((1U == (3U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_size)))));
    bufp->fullBit(oldp+3391,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__mask_eq_2));
    bufp->fullBit(oldp+3392,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__mask_acc_2));
    bufp->fullBit(oldp+3393,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__mask_eq_3));
    bufp->fullBit(oldp+3394,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__mask_acc_3));
    bufp->fullBit(oldp+3395,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__mask_eq_4));
    bufp->fullBit(oldp+3396,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__mask_acc_4));
    bufp->fullBit(oldp+3397,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__mask_eq_5));
    bufp->fullBit(oldp+3398,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__mask_acc_5));
    bufp->fullCData(oldp+3399,(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__mask_acc_5) 
                                  | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__mask_eq_5) 
                                     & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_address)) 
                                 << 7U) | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__mask_acc_5) 
                                             | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__mask_eq_5) 
                                                & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_address))) 
                                            << 6U) 
                                           | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__mask_acc_4) 
                                                | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__mask_eq_4) 
                                                   & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_address)) 
                                               << 5U) 
                                              | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__mask_acc_4) 
                                                   | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__mask_eq_4) 
                                                      & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_address))) 
                                                  << 4U) 
                                                 | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__mask_acc_3) 
                                                      | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__mask_eq_3) 
                                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_address)) 
                                                     << 3U) 
                                                    | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__mask_acc_3) 
                                                         | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__mask_eq_3) 
                                                            & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_address))) 
                                                        << 2U) 
                                                       | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__mask_acc_2) 
                                                            | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__mask_eq_2) 
                                                               & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_address)) 
                                                           << 1U) 
                                                          | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__mask_acc_2) 
                                                             | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__mask_eq_2) 
                                                                & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_address))))))))))),8);
    bufp->fullBit(oldp+3400,((((((((0x24U == (0x7fU 
                                              & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                 >> 9U))) 
                                   | (1U == (7U & (
                                                   vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 0xdU)))) 
                                  | (0U == (7U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                  >> 0xdU)))) 
                                 | (0x20U == (0x7fU 
                                              & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                 >> 9U)))) 
                                | (0x21U == (0x7fU 
                                             & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                >> 9U)))) 
                               | (0x22U == (0x7fU & 
                                            (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                             >> 9U)))) 
                              | (0x40U == (0x7fU & 
                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                            >> 9U))))));
    __Vtemp_hc961d23f__0[0U] = 1U;
    __Vtemp_hc961d23f__0[1U] = 0U;
    __Vtemp_hc961d23f__0[2U] = 0U;
    __Vtemp_hc961d23f__0[3U] = 0U;
    VL_EXTEND_WI(128,7, __Vtemp_h557ea57f__0, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_source));
    VL_SHIFTL_WWW(128,128,128, __Vtemp_hbedf69c8__0, __Vtemp_hc961d23f__0, __Vtemp_h557ea57f__0);
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___same_cycle_resp_T_1) {
        __Vtemp_h237479eb__0[0U] = __Vtemp_hbedf69c8__0[0U];
        __Vtemp_h237479eb__0[1U] = __Vtemp_hbedf69c8__0[1U];
        __Vtemp_h237479eb__0[2U] = (1U & __Vtemp_hbedf69c8__0[2U]);
    } else {
        __Vtemp_h237479eb__0[0U] = 0U;
        __Vtemp_h237479eb__0[1U] = 0U;
        __Vtemp_h237479eb__0[2U] = 0U;
    }
    bufp->fullWData(oldp+3401,(__Vtemp_h237479eb__0),65);
    bufp->fullBit(oldp+3404,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__same_cycle_resp));
    bufp->fullBit(oldp+3405,((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT__empty)))));
    bufp->fullBit(oldp+3406,((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__full)))));
    bufp->fullBit(oldp+3407,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__enq_ptr_value));
    bufp->fullBit(oldp+3408,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__deq_ptr_value));
    bufp->fullBit(oldp+3409,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__maybe_full));
    bufp->fullBit(oldp+3410,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ptr_match));
    bufp->fullBit(oldp+3411,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty));
    bufp->fullBit(oldp+3412,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__full));
    bufp->fullBit(oldp+3413,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__do_deq));
    bufp->fullWData(oldp+3414,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data),83);
    bufp->fullWData(oldp+3417,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory[0]),83);
    bufp->fullWData(oldp+3420,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory[1]),83);
    bufp->fullSData(oldp+3423,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__a_first_counter),9);
    bufp->fullCData(oldp+3424,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__opcode),3);
    bufp->fullCData(oldp+3425,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__param),3);
    bufp->fullCData(oldp+3426,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__size),4);
    bufp->fullCData(oldp+3427,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__source),7);
    bufp->fullIData(oldp+3428,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__address),31);
    bufp->fullSData(oldp+3429,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__d_first_counter),9);
    bufp->fullCData(oldp+3430,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__opcode_1),3);
    bufp->fullCData(oldp+3431,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__param_1),2);
    bufp->fullCData(oldp+3432,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__size_1),4);
    bufp->fullCData(oldp+3433,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__source_1),7);
    bufp->fullBit(oldp+3434,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__sink));
    bufp->fullBit(oldp+3435,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__denied));
    bufp->fullWData(oldp+3436,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight),65);
    bufp->fullWData(oldp+3439,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_opcodes),260);
    bufp->fullWData(oldp+3448,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_sizes),520);
    bufp->fullSData(oldp+3465,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__a_first_counter_1),9);
    bufp->fullBit(oldp+3466,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__a_first_counter_1))));
    bufp->fullSData(oldp+3467,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__d_first_counter_1),9);
    bufp->fullBit(oldp+3468,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))));
    bufp->fullBit(oldp+3469,((6U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))));
    bufp->fullIData(oldp+3470,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__watchdog),32);
    bufp->fullSData(oldp+3471,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__d_first_counter_2),9);
    bufp->fullBit(oldp+3472,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))));
    bufp->fullBit(oldp+3473,((1U & (((((((0x24U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___atomics_auto_out_a_bits_source)) 
                                         | (1U == (7U 
                                                   & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___atomics_auto_out_a_bits_source) 
                                                      >> 4U)))) 
                                        | (~ (IData)(
                                                     (0U 
                                                      != 
                                                      (7U 
                                                       & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___atomics_auto_out_a_bits_source) 
                                                          >> 4U)))))) 
                                       | (0x20U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___atomics_auto_out_a_bits_source))) 
                                      | (0x21U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___atomics_auto_out_a_bits_source))) 
                                     | (0x22U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___atomics_auto_out_a_bits_source))) 
                                    | (0x40U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___atomics_auto_out_a_bits_source))))));
    bufp->fullBit(oldp+3474,((2U == (3U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___atomics_auto_out_a_bits_size)))));
    bufp->fullBit(oldp+3475,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__mask_acc));
    bufp->fullBit(oldp+3476,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__mask_acc_1));
    bufp->fullBit(oldp+3477,((1U == (3U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___atomics_auto_out_a_bits_size)))));
    bufp->fullBit(oldp+3478,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__mask_eq_2));
    bufp->fullBit(oldp+3479,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__mask_acc_2));
    bufp->fullBit(oldp+3480,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__mask_eq_3));
    bufp->fullBit(oldp+3481,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__mask_acc_3));
    bufp->fullBit(oldp+3482,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__mask_eq_4));
    bufp->fullBit(oldp+3483,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__mask_acc_4));
    bufp->fullBit(oldp+3484,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__mask_eq_5));
    bufp->fullBit(oldp+3485,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__mask_acc_5));
    bufp->fullCData(oldp+3486,(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__mask_acc_5) 
                                  | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__mask_eq_5) 
                                     & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___atomics_auto_out_a_bits_address)) 
                                 << 7U) | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__mask_acc_5) 
                                             | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__mask_eq_5) 
                                                & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___atomics_auto_out_a_bits_address))) 
                                            << 6U) 
                                           | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__mask_acc_4) 
                                                | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__mask_eq_4) 
                                                   & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___atomics_auto_out_a_bits_address)) 
                                               << 5U) 
                                              | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__mask_acc_4) 
                                                   | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__mask_eq_4) 
                                                      & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___atomics_auto_out_a_bits_address))) 
                                                  << 4U) 
                                                 | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__mask_acc_3) 
                                                      | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__mask_eq_3) 
                                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___atomics_auto_out_a_bits_address)) 
                                                     << 3U) 
                                                    | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__mask_acc_3) 
                                                         | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__mask_eq_3) 
                                                            & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___atomics_auto_out_a_bits_address))) 
                                                        << 2U) 
                                                       | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__mask_acc_2) 
                                                            | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__mask_eq_2) 
                                                               & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___atomics_auto_out_a_bits_address)) 
                                                           << 1U) 
                                                          | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__mask_acc_2) 
                                                             | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__mask_eq_2) 
                                                                & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___atomics_auto_out_a_bits_address))))))))))),8);
    __Vtemp_hc961d23f__1[0U] = 1U;
    __Vtemp_hc961d23f__1[1U] = 0U;
    __Vtemp_hc961d23f__1[2U] = 0U;
    __Vtemp_hc961d23f__1[3U] = 0U;
    VL_EXTEND_WI(128,7, __Vtemp_h8c58709f__0, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___atomics_auto_out_a_bits_source));
    VL_SHIFTL_WWW(128,128,128, __Vtemp_h26823279__0, __Vtemp_hc961d23f__1, __Vtemp_h8c58709f__0);
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___same_cycle_resp_T_1) {
        __Vtemp_h8bb7d205__0[0U] = __Vtemp_h26823279__0[0U];
        __Vtemp_h8bb7d205__0[1U] = __Vtemp_h26823279__0[1U];
        __Vtemp_h8bb7d205__0[2U] = (1U & __Vtemp_h26823279__0[2U]);
    } else {
        __Vtemp_h8bb7d205__0[0U] = 0U;
        __Vtemp_h8bb7d205__0[1U] = 0U;
        __Vtemp_h8bb7d205__0[2U] = 0U;
    }
    bufp->fullWData(oldp+3487,(__Vtemp_h8bb7d205__0),65);
    bufp->fullBit(oldp+3490,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__same_cycle_resp));
    bufp->fullBit(oldp+3491,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT__enq_ptr_value));
    bufp->fullBit(oldp+3492,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT__deq_ptr_value));
    bufp->fullBit(oldp+3493,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT__maybe_full));
    bufp->fullBit(oldp+3494,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT__ptr_match));
    bufp->fullBit(oldp+3495,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT__empty));
    bufp->fullBit(oldp+3496,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT__full));
    bufp->fullBit(oldp+3497,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT__do_enq));
    __Vtemp_had263a02__0[0U] = (IData)((((QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___atomics_auto_out_a_bits_mask)) 
                                         << 0x30U) 
                                        | (((QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___atomics_auto_out_a_bits_address)) 
                                            << 0x11U) 
                                           | (QData)((IData)(
                                                             (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___atomics_auto_out_a_bits_source) 
                                                               << 0xaU) 
                                                              | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___atomics_auto_out_a_bits_size) 
                                                                  << 6U) 
                                                                 | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___atomics_auto_out_a_bits_param) 
                                                                     << 3U) 
                                                                    | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___atomics_auto_out_a_bits_opcode)))))))));
    __Vtemp_had263a02__0[1U] = (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___atomics_auto_out_a_bits_data) 
                                 << 0x18U) | (IData)(
                                                     ((((QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___atomics_auto_out_a_bits_mask)) 
                                                        << 0x30U) 
                                                       | (((QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___atomics_auto_out_a_bits_address)) 
                                                           << 0x11U) 
                                                          | (QData)((IData)(
                                                                            (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___atomics_auto_out_a_bits_source) 
                                                                              << 0xaU) 
                                                                             | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___atomics_auto_out_a_bits_size) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___atomics_auto_out_a_bits_param) 
                                                                                << 3U) 
                                                                                | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___atomics_auto_out_a_bits_opcode)))))))) 
                                                      >> 0x20U)));
    __Vtemp_had263a02__0[2U] = (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___atomics_auto_out_a_bits_data) 
                                 >> 8U) | ((IData)(
                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___atomics_auto_out_a_bits_data 
                                                    >> 0x20U)) 
                                           << 0x18U));
    __Vtemp_had263a02__0[3U] = (((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__muxStateEarly_0) 
                                   & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_corrupt) 
                                      | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_d_0_corrupt))) 
                                  | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__muxStateEarly_1) 
                                     & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_corrupt))) 
                                 << 0x18U) | ((IData)(
                                                      (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___atomics_auto_out_a_bits_data 
                                                       >> 0x20U)) 
                                              >> 8U));
    bufp->fullWData(oldp+3498,(__Vtemp_had263a02__0),121);
    bufp->fullWData(oldp+3502,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory[0]),121);
    bufp->fullWData(oldp+3506,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory[1]),121);
    bufp->fullCData(oldp+3510,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__acknum),3);
    bufp->fullCData(oldp+3511,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__dOrig),3);
    bufp->fullBit(oldp+3512,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__dToggle));
    bufp->fullBit(oldp+3513,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__acknum))));
    bufp->fullCData(oldp+3514,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__gennum),3);
    bufp->fullBit(oldp+3515,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__gennum))));
    bufp->fullBit(oldp+3516,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__aToggle_r));
    bufp->fullCData(oldp+3517,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__d_first_counter),3);
    bufp->fullCData(oldp+3518,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__opcode_1),3);
    bufp->fullCData(oldp+3519,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__param_1),2);
    bufp->fullCData(oldp+3520,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__size_1),3);
    bufp->fullCData(oldp+3521,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__source_1),7);
    bufp->fullBit(oldp+3522,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__sink));
    bufp->fullBit(oldp+3523,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__denied));
    bufp->fullWData(oldp+3524,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__inflight),65);
    bufp->fullWData(oldp+3527,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes),260);
    bufp->fullWData(oldp+3536,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes),260);
    bufp->fullCData(oldp+3545,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1),3);
    bufp->fullBit(oldp+3546,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1))));
    bufp->fullIData(oldp+3547,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__watchdog),32);
    bufp->fullBit(oldp+3548,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater__DOT__full));
    bufp->fullCData(oldp+3549,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater__DOT__saved_opcode),3);
    bufp->fullCData(oldp+3550,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater__DOT__saved_param),3);
    bufp->fullCData(oldp+3551,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater__DOT__saved_size),3);
    bufp->fullCData(oldp+3552,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater__DOT__saved_source),7);
    bufp->fullIData(oldp+3553,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater__DOT__saved_address),17);
    bufp->fullCData(oldp+3554,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater__DOT__saved_mask),8);
    bufp->fullBit(oldp+3555,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater__DOT__saved_corrupt));
    bufp->fullCData(oldp+3556,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__acknum),3);
    bufp->fullCData(oldp+3557,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__dOrig),3);
    bufp->fullBit(oldp+3558,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__dToggle));
    bufp->fullBit(oldp+3559,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__acknum))));
    bufp->fullCData(oldp+3560,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__gennum),3);
    bufp->fullBit(oldp+3561,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__gennum))));
    bufp->fullBit(oldp+3562,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__aToggle_r));
    bufp->fullCData(oldp+3563,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__a_first_counter),3);
    bufp->fullCData(oldp+3564,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__opcode),3);
    bufp->fullCData(oldp+3565,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__param),3);
    bufp->fullCData(oldp+3566,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__size),3);
    bufp->fullCData(oldp+3567,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__source),7);
    bufp->fullIData(oldp+3568,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__address),26);
    bufp->fullCData(oldp+3569,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__d_first_counter),3);
    bufp->fullCData(oldp+3570,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__opcode_1),3);
    bufp->fullCData(oldp+3571,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__param_1),2);
    bufp->fullCData(oldp+3572,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__size_1),3);
    bufp->fullCData(oldp+3573,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__source_1),7);
    bufp->fullBit(oldp+3574,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__sink));
    bufp->fullBit(oldp+3575,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__denied));
    bufp->fullWData(oldp+3576,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__inflight),65);
    bufp->fullWData(oldp+3579,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes),260);
    bufp->fullWData(oldp+3588,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes),260);
    bufp->fullCData(oldp+3597,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1),3);
    bufp->fullBit(oldp+3598,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1))));
    bufp->fullCData(oldp+3599,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1),3);
    bufp->fullBit(oldp+3600,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1))));
    bufp->fullIData(oldp+3601,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__watchdog),32);
    bufp->fullCData(oldp+3602,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_2),3);
    bufp->fullBit(oldp+3603,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_2))));
    bufp->fullBit(oldp+3604,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater__DOT__full));
    bufp->fullCData(oldp+3605,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater__DOT__saved_opcode),3);
    bufp->fullCData(oldp+3606,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater__DOT__saved_param),3);
    bufp->fullCData(oldp+3607,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater__DOT__saved_size),3);
    bufp->fullCData(oldp+3608,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater__DOT__saved_source),7);
    bufp->fullIData(oldp+3609,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater__DOT__saved_address),26);
    bufp->fullCData(oldp+3610,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater__DOT__saved_mask),8);
    bufp->fullBit(oldp+3611,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater__DOT__saved_corrupt));
    bufp->fullCData(oldp+3612,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__acknum),3);
    bufp->fullCData(oldp+3613,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__dOrig),3);
    bufp->fullBit(oldp+3614,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__dToggle));
    bufp->fullBit(oldp+3615,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__acknum))));
    bufp->fullCData(oldp+3616,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__gennum),3);
    bufp->fullBit(oldp+3617,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__gennum))));
    bufp->fullBit(oldp+3618,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__aToggle_r));
    bufp->fullCData(oldp+3619,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__a_first_counter),3);
    bufp->fullCData(oldp+3620,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__opcode),3);
    bufp->fullCData(oldp+3621,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__param),3);
    bufp->fullCData(oldp+3622,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__size),3);
    bufp->fullCData(oldp+3623,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__source),7);
    bufp->fullSData(oldp+3624,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__address),12);
    bufp->fullCData(oldp+3625,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__d_first_counter),3);
    bufp->fullCData(oldp+3626,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__opcode_1),3);
    bufp->fullCData(oldp+3627,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__param_1),2);
    bufp->fullCData(oldp+3628,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__size_1),3);
    bufp->fullCData(oldp+3629,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__source_1),7);
    bufp->fullBit(oldp+3630,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__sink));
    bufp->fullBit(oldp+3631,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__denied));
    bufp->fullWData(oldp+3632,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__inflight),65);
    bufp->fullWData(oldp+3635,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes),260);
    bufp->fullWData(oldp+3644,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes),260);
    bufp->fullCData(oldp+3653,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1),3);
    bufp->fullBit(oldp+3654,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1))));
    bufp->fullCData(oldp+3655,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1),3);
    bufp->fullBit(oldp+3656,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1))));
    bufp->fullIData(oldp+3657,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__watchdog),32);
    bufp->fullCData(oldp+3658,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_2),3);
    bufp->fullBit(oldp+3659,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_2))));
    bufp->fullCData(oldp+3660,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater__DOT__saved_opcode),3);
    bufp->fullCData(oldp+3661,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater__DOT__saved_size),3);
    bufp->fullCData(oldp+3662,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater__DOT__saved_source),7);
    bufp->fullSData(oldp+3663,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater__DOT__saved_address),12);
    bufp->fullCData(oldp+3664,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater__DOT__saved_mask),8);
    bufp->fullBit(oldp+3665,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__repeater__DOT___io_enq_ready_output));
    bufp->fullBit(oldp+3666,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__bundleIn_0_d_valid));
    bufp->fullCData(oldp+3667,((7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory
                                [0U][0U])),3);
    bufp->fullCData(oldp+3668,((3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory
                                      [0U][0U] >> 3U))),2);
    bufp->fullCData(oldp+3669,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__bundleIn_0_d_bits_size),3);
    bufp->fullCData(oldp+3670,((0x7fU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory
                                         [0U][0U] >> 0xbU))),7);
    bufp->fullBit(oldp+3671,((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory
                                    [0U][0U] >> 0x12U))));
    bufp->fullBit(oldp+3672,((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory
                                    [0U][0U] >> 0x13U))));
    bufp->fullQData(oldp+3673,((((QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory
                                                 [0U][2U])) 
                                 << 0x2cU) | (((QData)((IData)(
                                                               vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory
                                                               [0U][1U])) 
                                               << 0xcU) 
                                              | ((QData)((IData)(
                                                                 vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory
                                                                 [0U][0U])) 
                                                 >> 0x14U)))),64);
    bufp->fullBit(oldp+3675,((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory
                                    [0U][2U] >> 0x14U))));
    bufp->fullBit(oldp+3676,((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__maybe_full)))));
    bufp->fullBit(oldp+3677,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__maybe_full));
    bufp->fullCData(oldp+3678,((3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory
                                      [0U][0U] >> 5U))),2);
    bufp->fullSData(oldp+3679,((0x7ffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory
                                          [0U][0U] 
                                          >> 7U))),11);
    bufp->fullBit(oldp+3680,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__do_enq));
    VL_EXTEND_WQ(65,64, __Vtemp_h56c6a7bd__0, ((1U 
                                                & ((2U 
                                                    | ((8U 
                                                        & ((~ (IData)(
                                                                      (0U 
                                                                       != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT___GEN_2)))) 
                                                           << 3U)) 
                                                       | ((4U 
                                                           & ((~ (IData)(
                                                                         (0U 
                                                                          != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT___GEN_2)))) 
                                                              << 2U)) 
                                                          | (1U 
                                                             & (~ (IData)(
                                                                          (0U 
                                                                           != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT___GEN_2)))))))) 
                                                   >> (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_oindex)))
                                                ? (
                                                   ((QData)((IData)(
                                                                    VTestHarness__ConstPool__CONST_h4e4f723a_0[
                                                                    (((IData)(0x3fU) 
                                                                      + 
                                                                      (0xffU 
                                                                       & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_oindex) 
                                                                          << 6U))) 
                                                                     >> 5U)])) 
                                                    << 
                                                    ((0U 
                                                      == 
                                                      (0x1fU 
                                                       & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_oindex) 
                                                          << 6U)))
                                                      ? 0x20U
                                                      : 
                                                     ((IData)(0x40U) 
                                                      - 
                                                      (0x1fU 
                                                       & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_oindex) 
                                                          << 6U))))) 
                                                   | (((0U 
                                                        == 
                                                        (0x1fU 
                                                         & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_oindex) 
                                                            << 6U)))
                                                        ? 0ULL
                                                        : 
                                                       ((QData)((IData)(
                                                                        VTestHarness__ConstPool__CONST_h4e4f723a_0[
                                                                        (((IData)(0x1fU) 
                                                                          + 
                                                                          (0xffU 
                                                                           & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_oindex) 
                                                                              << 6U))) 
                                                                         >> 5U)])) 
                                                        << 
                                                        ((IData)(0x20U) 
                                                         - 
                                                         (0x1fU 
                                                          & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_oindex) 
                                                             << 6U))))) 
                                                      | ((QData)((IData)(
                                                                         VTestHarness__ConstPool__CONST_h4e4f723a_0[
                                                                         (6U 
                                                                          & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_oindex) 
                                                                             << 1U))])) 
                                                         >> 
                                                         (0x1fU 
                                                          & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_oindex) 
                                                             << 6U)))))
                                                : 0ULL));
    __Vtemp_hc92888ee__0[0U] = ((__Vtemp_h56c6a7bd__0[0U] 
                                 << 0x14U) | ((0x3ff80U 
                                               & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_back__DOT__ram_ext__DOT__Memory
                                                  [0U][2U] 
                                                  >> 0xbU)) 
                                              | ((0x60U 
                                                  & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_back__DOT__ram_ext__DOT__Memory
                                                     [0U][2U] 
                                                     >> 0x18U)) 
                                                 | (1U 
                                                    & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_back__DOT__ram_ext__DOT__Memory
                                                    [0U][0U]))));
    __Vtemp_hc92888ee__0[1U] = ((__Vtemp_h56c6a7bd__0[0U] 
                                 >> 0xcU) | (__Vtemp_h56c6a7bd__0[1U] 
                                             << 0x14U));
    __Vtemp_hc92888ee__0[2U] = ((__Vtemp_h56c6a7bd__0[1U] 
                                 >> 0xcU) | (__Vtemp_h56c6a7bd__0[2U] 
                                             << 0x14U));
    bufp->fullWData(oldp+3681,(__Vtemp_hc92888ee__0),85);
    __Vtemp_hb2c720f9__9[0U] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory
        [0U][0U];
    __Vtemp_hb2c720f9__9[1U] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory
        [0U][1U];
    __Vtemp_hb2c720f9__9[2U] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory
        [0U][2U];
    bufp->fullWData(oldp+3684,(__Vtemp_hb2c720f9__9),85);
    bufp->fullWData(oldp+3687,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory[0]),85);
    bufp->fullWData(oldp+3690,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight),1040);
    bufp->fullWData(oldp+3723,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_opcodes),4160);
    bufp->fullWData(oldp+3853,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_sizes),4160);
    bufp->fullBit(oldp+3983,((6U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory
                                     [0U][0U]))));
    bufp->fullIData(oldp+3984,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__watchdog),32);
    __Vtemp_h14e110c9__8[0U] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
        [0U][0U];
    __Vtemp_h14e110c9__8[1U] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
        [0U][1U];
    __Vtemp_h14e110c9__8[2U] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
        [0U][2U];
    __Vtemp_h14e110c9__8[3U] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
        [0U][3U];
    bufp->fullWData(oldp+3985,(__Vtemp_h14e110c9__8),118);
    bufp->fullWData(oldp+3989,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory[0]),118);
    bufp->fullCData(oldp+3993,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__acknum),3);
    bufp->fullCData(oldp+3994,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__dOrig),3);
    bufp->fullBit(oldp+3995,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__dToggle));
    bufp->fullBit(oldp+3996,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__acknum))));
    bufp->fullCData(oldp+3997,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__dFirst_size),3);
    bufp->fullBit(oldp+3998,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__drop));
    bufp->fullCData(oldp+3999,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__gennum),3);
    bufp->fullBit(oldp+4000,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__gennum))));
    bufp->fullBit(oldp+4001,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__aToggle_r));
    bufp->fullCData(oldp+4002,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__a_first_counter),3);
    bufp->fullCData(oldp+4003,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__opcode),3);
    bufp->fullCData(oldp+4004,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__param),3);
    bufp->fullCData(oldp+4005,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__size),3);
    bufp->fullCData(oldp+4006,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__source),7);
    bufp->fullIData(oldp+4007,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__address),26);
    bufp->fullCData(oldp+4008,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__d_first_counter),3);
    bufp->fullCData(oldp+4009,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__opcode_1),3);
    bufp->fullCData(oldp+4010,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__param_1),2);
    bufp->fullCData(oldp+4011,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__size_1),3);
    bufp->fullCData(oldp+4012,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__source_1),7);
    bufp->fullBit(oldp+4013,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__sink));
    bufp->fullBit(oldp+4014,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__denied));
    bufp->fullWData(oldp+4015,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__inflight),65);
    bufp->fullWData(oldp+4018,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes),260);
    bufp->fullWData(oldp+4027,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes),260);
    bufp->fullCData(oldp+4036,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1),3);
    bufp->fullBit(oldp+4037,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1))));
    bufp->fullCData(oldp+4038,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1),3);
    bufp->fullBit(oldp+4039,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1))));
    bufp->fullIData(oldp+4040,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__watchdog),32);
    bufp->fullCData(oldp+4041,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_2),3);
    bufp->fullBit(oldp+4042,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_2))));
    bufp->fullBit(oldp+4043,((((((((0x24U == (0x7fU 
                                              & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory
                                                 [0U][0U] 
                                                 >> 0xbU))) 
                                   | (1U == (7U & (
                                                   vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory
                                                   [0U][0U] 
                                                   >> 0xfU)))) 
                                  | (0U == (7U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory
                                                  [0U][0U] 
                                                  >> 0xfU)))) 
                                 | (0x20U == (0x7fU 
                                              & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory
                                                 [0U][0U] 
                                                 >> 0xbU)))) 
                                | (0x21U == (0x7fU 
                                             & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory
                                                [0U][0U] 
                                                >> 0xbU)))) 
                               | (0x22U == (0x7fU & 
                                            (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory
                                             [0U][0U] 
                                             >> 0xbU)))) 
                              | (0x40U == (0x7fU & 
                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory
                                            [0U][0U] 
                                            >> 0xbU))))));
    bufp->fullBit(oldp+4044,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__repeater__DOT__full));
    bufp->fullCData(oldp+4045,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__repeater__DOT__saved_opcode),3);
    bufp->fullCData(oldp+4046,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__repeater__DOT__saved_param),3);
    bufp->fullCData(oldp+4047,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__repeater__DOT__saved_size),3);
    bufp->fullCData(oldp+4048,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__repeater__DOT__saved_source),7);
    bufp->fullIData(oldp+4049,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__repeater__DOT__saved_address),26);
    bufp->fullCData(oldp+4050,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__repeater__DOT__saved_mask),8);
    bufp->fullBit(oldp+4051,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__repeater__DOT__saved_corrupt));
    bufp->fullBit(oldp+4052,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater__DOT___io_enq_ready_output));
    bufp->fullCData(oldp+4053,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__acknum),3);
    bufp->fullCData(oldp+4054,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__dOrig),3);
    bufp->fullBit(oldp+4055,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__dToggle));
    bufp->fullBit(oldp+4056,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__acknum))));
    bufp->fullCData(oldp+4057,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__gennum),3);
    bufp->fullBit(oldp+4058,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__gennum))));
    bufp->fullBit(oldp+4059,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__aToggle_r));
    bufp->fullCData(oldp+4060,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__a_first_counter),3);
    bufp->fullCData(oldp+4061,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__opcode),3);
    bufp->fullCData(oldp+4062,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__param),3);
    bufp->fullCData(oldp+4063,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__size),3);
    bufp->fullCData(oldp+4064,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__source),7);
    bufp->fullIData(oldp+4065,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__address),28);
    bufp->fullCData(oldp+4066,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__d_first_counter),3);
    bufp->fullCData(oldp+4067,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__opcode_1),3);
    bufp->fullCData(oldp+4068,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__param_1),2);
    bufp->fullCData(oldp+4069,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__size_1),3);
    bufp->fullCData(oldp+4070,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__source_1),7);
    bufp->fullBit(oldp+4071,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__sink));
    bufp->fullBit(oldp+4072,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__denied));
    bufp->fullWData(oldp+4073,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__inflight),65);
    bufp->fullWData(oldp+4076,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes),260);
    bufp->fullWData(oldp+4085,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes),260);
    bufp->fullCData(oldp+4094,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1),3);
    bufp->fullBit(oldp+4095,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1))));
    bufp->fullCData(oldp+4096,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1),3);
    bufp->fullBit(oldp+4097,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1))));
    bufp->fullIData(oldp+4098,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__watchdog),32);
    bufp->fullCData(oldp+4099,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_2),3);
    bufp->fullBit(oldp+4100,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_2))));
    bufp->fullBit(oldp+4101,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater__DOT__full));
    bufp->fullCData(oldp+4102,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater__DOT__saved_opcode),3);
    bufp->fullCData(oldp+4103,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater__DOT__saved_param),3);
    bufp->fullCData(oldp+4104,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater__DOT__saved_size),3);
    bufp->fullCData(oldp+4105,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater__DOT__saved_source),7);
    bufp->fullIData(oldp+4106,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater__DOT__saved_address),28);
    bufp->fullCData(oldp+4107,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater__DOT__saved_mask),8);
    bufp->fullBit(oldp+4108,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater__DOT__saved_corrupt));
    bufp->fullBit(oldp+4109,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__fragmenter__DOT__repeater__DOT___io_enq_ready_output));
    bufp->fullBit(oldp+4110,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__fragmenter__DOT__bundleIn_0_d_valid));
    bufp->fullCData(oldp+4111,((7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U])),3);
    bufp->fullCData(oldp+4112,((3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                      >> 3U))),2);
    bufp->fullCData(oldp+4113,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__fragmenter__DOT__bundleIn_0_d_bits_size),3);
    bufp->fullCData(oldp+4114,((0x7fU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                         >> 0xbU))),7);
    bufp->fullBit(oldp+4115,((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                    >> 0x12U))));
    bufp->fullBit(oldp+4116,((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                    >> 0x13U))));
    bufp->fullQData(oldp+4117,((((QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[2U])) 
                                 << 0x2cU) | (((QData)((IData)(
                                                               vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[1U])) 
                                               << 0xcU) 
                                              | ((QData)((IData)(
                                                                 vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U])) 
                                                 >> 0x14U)))),64);
    bufp->fullBit(oldp+4119,((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[2U] 
                                    >> 0x14U))));
    bufp->fullBit(oldp+4120,((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__x1_a_q__DOT__full)))));
    bufp->fullBit(oldp+4121,((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)))));
    bufp->fullCData(oldp+4122,((3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                      >> 5U))),2);
    bufp->fullSData(oldp+4123,((0x7ffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                          >> 7U))),11);
    bufp->fullBit(oldp+4124,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__bundleIn_0_d_q__DOT__enq_ptr_value));
    bufp->fullBit(oldp+4125,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__bundleIn_0_d_q__DOT__deq_ptr_value));
    bufp->fullBit(oldp+4126,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__bundleIn_0_d_q__DOT__maybe_full));
    bufp->fullBit(oldp+4127,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ptr_match));
    bufp->fullBit(oldp+4128,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty));
    bufp->fullBit(oldp+4129,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__bundleIn_0_d_q__DOT__full));
    bufp->fullBit(oldp+4130,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__bundleIn_0_d_q__DOT__do_enq));
    bufp->fullWData(oldp+4131,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data),85);
    bufp->fullWData(oldp+4134,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory[0]),85);
    bufp->fullWData(oldp+4137,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory[1]),85);
    bufp->fullWData(oldp+4140,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__monitor__DOT__inflight),1040);
    bufp->fullWData(oldp+4173,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__monitor__DOT__inflight_opcodes),4160);
    bufp->fullWData(oldp+4303,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__monitor__DOT__inflight_sizes),4160);
    bufp->fullBit(oldp+4433,((6U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))));
    bufp->fullIData(oldp+4434,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__monitor__DOT__watchdog),32);
    bufp->fullBit(oldp+4435,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__x1_a_q__DOT__enq_ptr_value));
    bufp->fullBit(oldp+4436,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__x1_a_q__DOT__deq_ptr_value));
    bufp->fullBit(oldp+4437,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__x1_a_q__DOT__maybe_full));
    bufp->fullBit(oldp+4438,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__x1_a_q__DOT__ptr_match));
    bufp->fullBit(oldp+4439,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__x1_a_q__DOT__empty));
    bufp->fullBit(oldp+4440,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__x1_a_q__DOT__full));
    bufp->fullBit(oldp+4441,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__x1_a_q__DOT__do_deq));
    bufp->fullWData(oldp+4442,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory[0]),113);
    bufp->fullWData(oldp+4446,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory[1]),113);
    bufp->fullCData(oldp+4450,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__fragmenter__DOT__acknum),3);
    bufp->fullCData(oldp+4451,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__fragmenter__DOT__dOrig),3);
    bufp->fullBit(oldp+4452,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__fragmenter__DOT__dToggle));
    bufp->fullBit(oldp+4453,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__fragmenter__DOT__acknum))));
    bufp->fullCData(oldp+4454,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__fragmenter__DOT__dFirst_size),3);
    bufp->fullBit(oldp+4455,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__fragmenter__DOT__drop));
    bufp->fullCData(oldp+4456,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__fragmenter__DOT__gennum),3);
    bufp->fullBit(oldp+4457,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__fragmenter__DOT__gennum))));
    bufp->fullBit(oldp+4458,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__fragmenter__DOT__aToggle_r));
    bufp->fullCData(oldp+4459,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__fragmenter__DOT__monitor__DOT__a_first_counter),3);
    bufp->fullCData(oldp+4460,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__fragmenter__DOT__monitor__DOT__opcode),3);
    bufp->fullCData(oldp+4461,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__fragmenter__DOT__monitor__DOT__param),3);
    bufp->fullCData(oldp+4462,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__fragmenter__DOT__monitor__DOT__size),3);
    bufp->fullCData(oldp+4463,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__fragmenter__DOT__monitor__DOT__source),7);
    bufp->fullIData(oldp+4464,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__fragmenter__DOT__monitor__DOT__address),21);
    bufp->fullCData(oldp+4465,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__fragmenter__DOT__monitor__DOT__d_first_counter),3);
    bufp->fullCData(oldp+4466,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__fragmenter__DOT__monitor__DOT__opcode_1),3);
    bufp->fullCData(oldp+4467,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__fragmenter__DOT__monitor__DOT__param_1),2);
    bufp->fullCData(oldp+4468,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__fragmenter__DOT__monitor__DOT__size_1),3);
    bufp->fullCData(oldp+4469,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__fragmenter__DOT__monitor__DOT__source_1),7);
    bufp->fullBit(oldp+4470,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__fragmenter__DOT__monitor__DOT__sink));
    bufp->fullBit(oldp+4471,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__fragmenter__DOT__monitor__DOT__denied));
    bufp->fullWData(oldp+4472,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__fragmenter__DOT__monitor__DOT__inflight),65);
    bufp->fullWData(oldp+4475,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes),260);
    bufp->fullWData(oldp+4484,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes),260);
    bufp->fullCData(oldp+4493,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1),3);
    bufp->fullBit(oldp+4494,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1))));
    bufp->fullCData(oldp+4495,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1),3);
    bufp->fullBit(oldp+4496,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1))));
    bufp->fullIData(oldp+4497,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__fragmenter__DOT__monitor__DOT__watchdog),32);
    bufp->fullCData(oldp+4498,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_2),3);
    bufp->fullBit(oldp+4499,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_2))));
    bufp->fullBit(oldp+4500,((((((((0x24U == (0x7fU 
                                              & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                 >> 0xbU))) 
                                   | (1U == (7U & (
                                                   vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 0xfU)))) 
                                  | (0U == (7U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                  >> 0xfU)))) 
                                 | (0x20U == (0x7fU 
                                              & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                 >> 0xbU)))) 
                                | (0x21U == (0x7fU 
                                             & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                >> 0xbU)))) 
                               | (0x22U == (0x7fU & 
                                            (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                             >> 0xbU)))) 
                              | (0x40U == (0x7fU & 
                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                            >> 0xbU))))));
    bufp->fullBit(oldp+4501,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__fragmenter__DOT__repeater__DOT__full));
    bufp->fullCData(oldp+4502,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__fragmenter__DOT__repeater__DOT__saved_opcode),3);
    bufp->fullCData(oldp+4503,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__fragmenter__DOT__repeater__DOT__saved_param),3);
    bufp->fullCData(oldp+4504,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__fragmenter__DOT__repeater__DOT__saved_size),3);
    bufp->fullCData(oldp+4505,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__fragmenter__DOT__repeater__DOT__saved_source),7);
    bufp->fullIData(oldp+4506,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__fragmenter__DOT__repeater__DOT__saved_address),21);
    bufp->fullCData(oldp+4507,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__fragmenter__DOT__repeater__DOT__saved_mask),8);
    bufp->fullBit(oldp+4508,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__fragmenter__DOT__repeater__DOT__saved_corrupt));
    bufp->fullBit(oldp+4509,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__fragmenter__DOT__repeater__DOT___io_enq_ready_output));
    bufp->fullBit(oldp+4510,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__fragmenter__DOT__bundleIn_0_d_valid));
    bufp->fullCData(oldp+4511,((7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U])),3);
    bufp->fullCData(oldp+4512,((3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                      >> 3U))),2);
    bufp->fullCData(oldp+4513,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__fragmenter__DOT__bundleIn_0_d_bits_size),3);
    bufp->fullCData(oldp+4514,((0x7fU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                         >> 0xbU))),7);
    bufp->fullBit(oldp+4515,((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                    >> 0x12U))));
    bufp->fullBit(oldp+4516,((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                    >> 0x13U))));
    bufp->fullQData(oldp+4517,((((QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[2U])) 
                                 << 0x2cU) | (((QData)((IData)(
                                                               vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[1U])) 
                                               << 0xcU) 
                                              | ((QData)((IData)(
                                                                 vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U])) 
                                                 >> 0x14U)))),64);
    bufp->fullBit(oldp+4519,((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[2U] 
                                    >> 0x14U))));
    bufp->fullBit(oldp+4520,((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__x1_a_q__DOT__full)))));
    bufp->fullBit(oldp+4521,((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)))));
    bufp->fullCData(oldp+4522,((3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                      >> 5U))),2);
    bufp->fullSData(oldp+4523,((0x7ffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                          >> 7U))),11);
    bufp->fullBit(oldp+4524,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__bundleIn_0_d_q__DOT__enq_ptr_value));
    bufp->fullBit(oldp+4525,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__bundleIn_0_d_q__DOT__deq_ptr_value));
    bufp->fullBit(oldp+4526,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__bundleIn_0_d_q__DOT__maybe_full));
    bufp->fullBit(oldp+4527,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ptr_match));
    bufp->fullBit(oldp+4528,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty));
    bufp->fullBit(oldp+4529,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__bundleIn_0_d_q__DOT__full));
    bufp->fullBit(oldp+4530,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__bundleIn_0_d_q__DOT__do_enq));
    VL_EXTEND_WI(85,18, __Vtemp_h3683c7c1__0, ((0x3ff80U 
                                                & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 1U)) 
                                               | ((0x60U 
                                                   & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                      >> 1U)) 
                                                  | (4U 
                                                     == 
                                                     (7U 
                                                      & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U])))));
    bufp->fullWData(oldp+4531,(__Vtemp_h3683c7c1__0),85);
    bufp->fullWData(oldp+4534,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data),85);
    bufp->fullWData(oldp+4537,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory[0]),85);
    bufp->fullWData(oldp+4540,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory[1]),85);
    bufp->fullWData(oldp+4543,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__monitor__DOT__inflight),1040);
    bufp->fullWData(oldp+4576,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__monitor__DOT__inflight_opcodes),4160);
    bufp->fullWData(oldp+4706,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__monitor__DOT__inflight_sizes),4160);
    bufp->fullBit(oldp+4836,((6U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))));
    bufp->fullIData(oldp+4837,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__monitor__DOT__watchdog),32);
    bufp->fullQData(oldp+4838,((((QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[3U])) 
                                 << 0x30U) | (((QData)((IData)(
                                                               vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[2U])) 
                                               << 0x10U) 
                                              | ((QData)((IData)(
                                                                 vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[1U])) 
                                                 >> 0x10U)))),64);
    bufp->fullBit(oldp+4840,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__x1_a_q__DOT__enq_ptr_value));
    bufp->fullBit(oldp+4841,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__x1_a_q__DOT__deq_ptr_value));
    bufp->fullBit(oldp+4842,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__x1_a_q__DOT__maybe_full));
    bufp->fullBit(oldp+4843,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__x1_a_q__DOT__ptr_match));
    bufp->fullBit(oldp+4844,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__x1_a_q__DOT__empty));
    bufp->fullBit(oldp+4845,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__x1_a_q__DOT__full));
    bufp->fullBit(oldp+4846,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__x1_a_q__DOT__do_deq));
    bufp->fullWData(oldp+4847,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data),113);
    bufp->fullWData(oldp+4851,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory[0]),113);
    bufp->fullWData(oldp+4855,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory[1]),113);
    bufp->fullCData(oldp+4859,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__fragmenter__DOT__acknum),3);
    bufp->fullCData(oldp+4860,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__fragmenter__DOT__dOrig),3);
    bufp->fullBit(oldp+4861,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__fragmenter__DOT__dToggle));
    bufp->fullBit(oldp+4862,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__fragmenter__DOT__acknum))));
    bufp->fullCData(oldp+4863,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__fragmenter__DOT__dFirst_size),3);
    bufp->fullBit(oldp+4864,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__fragmenter__DOT__drop));
    bufp->fullCData(oldp+4865,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__fragmenter__DOT__gennum),3);
    bufp->fullBit(oldp+4866,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__fragmenter__DOT__gennum))));
    bufp->fullBit(oldp+4867,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__fragmenter__DOT__aToggle_r));
    bufp->fullCData(oldp+4868,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__fragmenter__DOT__monitor__DOT__a_first_counter),3);
    bufp->fullCData(oldp+4869,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__fragmenter__DOT__monitor__DOT__opcode),3);
    bufp->fullCData(oldp+4870,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__fragmenter__DOT__monitor__DOT__param),3);
    bufp->fullCData(oldp+4871,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__fragmenter__DOT__monitor__DOT__size),3);
    bufp->fullCData(oldp+4872,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__fragmenter__DOT__monitor__DOT__source),7);
    bufp->fullIData(oldp+4873,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__fragmenter__DOT__monitor__DOT__address),21);
    bufp->fullCData(oldp+4874,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__fragmenter__DOT__monitor__DOT__d_first_counter),3);
    bufp->fullCData(oldp+4875,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__fragmenter__DOT__monitor__DOT__opcode_1),3);
    bufp->fullCData(oldp+4876,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__fragmenter__DOT__monitor__DOT__param_1),2);
    bufp->fullCData(oldp+4877,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__fragmenter__DOT__monitor__DOT__size_1),3);
    bufp->fullCData(oldp+4878,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__fragmenter__DOT__monitor__DOT__source_1),7);
    bufp->fullBit(oldp+4879,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__fragmenter__DOT__monitor__DOT__sink));
    bufp->fullBit(oldp+4880,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__fragmenter__DOT__monitor__DOT__denied));
    bufp->fullWData(oldp+4881,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__fragmenter__DOT__monitor__DOT__inflight),65);
    bufp->fullWData(oldp+4884,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes),260);
    bufp->fullWData(oldp+4893,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes),260);
    bufp->fullCData(oldp+4902,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1),3);
    bufp->fullBit(oldp+4903,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1))));
    bufp->fullCData(oldp+4904,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1),3);
    bufp->fullBit(oldp+4905,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1))));
    bufp->fullIData(oldp+4906,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__fragmenter__DOT__monitor__DOT__watchdog),32);
    bufp->fullCData(oldp+4907,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_2),3);
    bufp->fullBit(oldp+4908,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_2))));
    bufp->fullBit(oldp+4909,((((((((0x24U == (0x7fU 
                                              & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                 >> 0xbU))) 
                                   | (1U == (7U & (
                                                   vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 0xfU)))) 
                                  | (0U == (7U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                  >> 0xfU)))) 
                                 | (0x20U == (0x7fU 
                                              & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                 >> 0xbU)))) 
                                | (0x21U == (0x7fU 
                                             & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                >> 0xbU)))) 
                               | (0x22U == (0x7fU & 
                                            (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                             >> 0xbU)))) 
                              | (0x40U == (0x7fU & 
                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                            >> 0xbU))))));
    bufp->fullBit(oldp+4910,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__fragmenter__DOT__repeater__DOT__full));
    bufp->fullCData(oldp+4911,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__fragmenter__DOT__repeater__DOT__saved_opcode),3);
    bufp->fullCData(oldp+4912,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__fragmenter__DOT__repeater__DOT__saved_param),3);
    bufp->fullCData(oldp+4913,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__fragmenter__DOT__repeater__DOT__saved_size),3);
    bufp->fullCData(oldp+4914,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__fragmenter__DOT__repeater__DOT__saved_source),7);
    bufp->fullIData(oldp+4915,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__fragmenter__DOT__repeater__DOT__saved_address),21);
    bufp->fullCData(oldp+4916,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__fragmenter__DOT__repeater__DOT__saved_mask),8);
    bufp->fullBit(oldp+4917,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__fragmenter__DOT__repeater__DOT__saved_corrupt));
    bufp->fullSData(oldp+4918,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__a_first_counter),9);
    bufp->fullCData(oldp+4919,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__opcode),3);
    bufp->fullCData(oldp+4920,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__param),3);
    bufp->fullCData(oldp+4921,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__size),4);
    bufp->fullCData(oldp+4922,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__source),7);
    bufp->fullIData(oldp+4923,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__address),31);
    bufp->fullSData(oldp+4924,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__d_first_counter),9);
    bufp->fullCData(oldp+4925,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__opcode_1),3);
    bufp->fullCData(oldp+4926,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__param_1),2);
    bufp->fullCData(oldp+4927,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__size_1),4);
    bufp->fullCData(oldp+4928,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__source_1),7);
    bufp->fullBit(oldp+4929,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__sink));
    bufp->fullBit(oldp+4930,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__denied));
    bufp->fullWData(oldp+4931,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__inflight),65);
    bufp->fullWData(oldp+4934,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__inflight_opcodes),260);
    bufp->fullWData(oldp+4943,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes),520);
    bufp->fullSData(oldp+4960,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__a_first_counter_1),9);
    bufp->fullBit(oldp+4961,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__a_first_counter_1))));
    bufp->fullSData(oldp+4962,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_1),9);
    bufp->fullBit(oldp+4963,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_1))));
    bufp->fullIData(oldp+4964,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__watchdog),32);
    bufp->fullSData(oldp+4965,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_2),9);
    bufp->fullBit(oldp+4966,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_2))));
    bufp->fullIData(oldp+4967,(((1U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__state))
                                 ? 0x4000U : 0x2000000U)),31);
    bufp->fullQData(oldp+4968,(((1U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__state))
                                 ? 0x80000000ULL : 1ULL)),64);
    bufp->fullBit(oldp+4970,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__portsAOI_filtered_1_0_ready));
    bufp->fullBit(oldp+4971,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__out_10_valid));
    bufp->fullBit(oldp+4972,((0x40U == (0x7fU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                 >> 9U)))));
    bufp->fullSData(oldp+4973,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__beatsLeft),9);
    bufp->fullBit(oldp+4974,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__beatsLeft))));
    bufp->fullCData(oldp+4975,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__readys_valid),2);
    bufp->fullCData(oldp+4976,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__readys_mask),2);
    bufp->fullCData(oldp+4977,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__readys_readys),2);
    bufp->fullBit(oldp+4978,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__readys_readys) 
                              & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__repeated_repeater__DOT___io_deq_valid_output))));
    bufp->fullBit(oldp+4979,((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__readys_readys) 
                               >> 1U) & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__x1_2_a_valid))));
    bufp->fullBit(oldp+4980,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__state_0));
    bufp->fullBit(oldp+4981,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__state_1));
    bufp->fullBit(oldp+4982,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__muxStateEarly_0));
    bufp->fullBit(oldp+4983,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__muxStateEarly_1));
    bufp->fullBit(oldp+4984,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__latch));
    bufp->fullBit(oldp+4985,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__winnerQual_0));
    bufp->fullSData(oldp+4986,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__a_first_counter),9);
    bufp->fullCData(oldp+4987,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__opcode),3);
    bufp->fullCData(oldp+4988,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__param),3);
    bufp->fullCData(oldp+4989,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__size),4);
    bufp->fullCData(oldp+4990,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__source),6);
    bufp->fullIData(oldp+4991,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__address),31);
    bufp->fullSData(oldp+4992,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__d_first_counter),9);
    bufp->fullCData(oldp+4993,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__opcode_1),3);
    bufp->fullCData(oldp+4994,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__param_1),2);
    bufp->fullCData(oldp+4995,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__size_1),4);
    bufp->fullCData(oldp+4996,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__source_1),6);
    bufp->fullBit(oldp+4997,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__sink));
    bufp->fullBit(oldp+4998,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__denied));
    bufp->fullQData(oldp+4999,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__inflight),37);
    bufp->fullWData(oldp+5001,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__inflight_opcodes),148);
    bufp->fullWData(oldp+5006,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__inflight_sizes),296);
    bufp->fullSData(oldp+5016,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__a_first_counter_1),9);
    bufp->fullBit(oldp+5017,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__a_first_counter_1))));
    bufp->fullSData(oldp+5018,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__d_first_counter_1),9);
    bufp->fullBit(oldp+5019,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__d_first_counter_1))));
    bufp->fullIData(oldp+5020,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__watchdog),32);
    bufp->fullSData(oldp+5021,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__d_first_counter_2),9);
    bufp->fullBit(oldp+5022,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__d_first_counter_2))));
    bufp->fullBit(oldp+5023,((1U & ((((((0x24U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_source)) 
                                        | (1U == (3U 
                                                  & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_source) 
                                                     >> 4U)))) 
                                       | (~ (IData)(
                                                    (0U 
                                                     != 
                                                     (3U 
                                                      & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_source) 
                                                         >> 4U)))))) 
                                      | (0x20U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_source))) 
                                     | (0x21U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_source))) 
                                    | (0x22U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_source))))));
    bufp->fullBit(oldp+5024,((2U == (3U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT___repeated_repeater_io_deq_bits_size)))));
    bufp->fullBit(oldp+5025,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__mask_acc));
    bufp->fullBit(oldp+5026,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__mask_acc_1));
    bufp->fullBit(oldp+5027,((1U == (3U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT___repeated_repeater_io_deq_bits_size)))));
    bufp->fullBit(oldp+5028,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__mask_eq_2));
    bufp->fullBit(oldp+5029,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__mask_acc_2));
    bufp->fullBit(oldp+5030,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__mask_eq_3));
    bufp->fullBit(oldp+5031,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__mask_acc_3));
    bufp->fullBit(oldp+5032,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__mask_eq_4));
    bufp->fullBit(oldp+5033,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__mask_acc_4));
    bufp->fullBit(oldp+5034,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__mask_eq_5));
    bufp->fullBit(oldp+5035,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__mask_acc_5));
    bufp->fullCData(oldp+5036,(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__mask_acc_5) 
                                  | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__mask_eq_5) 
                                     & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT___repeated_repeater_io_deq_bits_address)) 
                                 << 7U) | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__mask_acc_5) 
                                             | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__mask_eq_5) 
                                                & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT___repeated_repeater_io_deq_bits_address))) 
                                            << 6U) 
                                           | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__mask_acc_4) 
                                                | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__mask_eq_4) 
                                                   & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT___repeated_repeater_io_deq_bits_address)) 
                                               << 5U) 
                                              | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__mask_acc_4) 
                                                   | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__mask_eq_4) 
                                                      & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT___repeated_repeater_io_deq_bits_address))) 
                                                  << 4U) 
                                                 | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__mask_acc_3) 
                                                      | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__mask_eq_3) 
                                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT___repeated_repeater_io_deq_bits_address)) 
                                                     << 3U) 
                                                    | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__mask_acc_3) 
                                                         | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__mask_eq_3) 
                                                            & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT___repeated_repeater_io_deq_bits_address))) 
                                                        << 2U) 
                                                       | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__mask_acc_2) 
                                                            | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__mask_eq_2) 
                                                               & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT___repeated_repeater_io_deq_bits_address)) 
                                                           << 1U) 
                                                          | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__mask_acc_2) 
                                                             | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__mask_eq_2) 
                                                                & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT___repeated_repeater_io_deq_bits_address))))))))))),8);
    bufp->fullBit(oldp+5037,(((((((0x24U == (0x3fU 
                                             & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                >> 9U))) 
                                  | (1U == (3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                  >> 0xdU)))) 
                                 | (0U == (3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                 >> 0xdU)))) 
                                | (0x20U == (0x3fU 
                                             & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                >> 9U)))) 
                               | (0x21U == (0x3fU & 
                                            (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                             >> 9U)))) 
                              | (0x22U == (0x3fU & 
                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                            >> 9U))))));
    bufp->fullQData(oldp+5038,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT___same_cycle_resp_T_1)
                                 ? (0x1fffffffffULL 
                                    & VL_SHIFTL_QQQ(37,64,64, 1ULL, (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_source))))
                                 : 0ULL)),37);
    bufp->fullBit(oldp+5040,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__same_cycle_resp));
    bufp->fullBit(oldp+5041,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor_1__DOT__a_set));
    bufp->fullSData(oldp+5042,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor_1__DOT__d_first_counter),9);
    bufp->fullCData(oldp+5043,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor_1__DOT__opcode_1),3);
    bufp->fullCData(oldp+5044,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor_1__DOT__param_1),2);
    bufp->fullCData(oldp+5045,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor_1__DOT__size_1),4);
    bufp->fullBit(oldp+5046,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor_1__DOT__source_1));
    bufp->fullBit(oldp+5047,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor_1__DOT__sink));
    bufp->fullBit(oldp+5048,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor_1__DOT__denied));
    bufp->fullBit(oldp+5049,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor_1__DOT__inflight));
    bufp->fullCData(oldp+5050,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor_1__DOT__inflight_opcodes),4);
    bufp->fullCData(oldp+5051,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor_1__DOT__inflight_sizes),8);
    bufp->fullSData(oldp+5052,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor_1__DOT__d_first_counter_1),9);
    bufp->fullBit(oldp+5053,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor_1__DOT__d_first_counter_1))));
    bufp->fullIData(oldp+5054,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor_1__DOT__watchdog),32);
    bufp->fullSData(oldp+5055,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor_1__DOT__d_first_counter_2),9);
    bufp->fullBit(oldp+5056,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor_1__DOT__d_first_counter_2))));
    bufp->fullBit(oldp+5057,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor_1__DOT__d_clr));
    bufp->fullBit(oldp+5058,((1U & ((~ (((1U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__state))
                                          ? 0x4000U
                                          : 0x2000000U) 
                                        >> 2U)) & (~ 
                                                   (((1U 
                                                      == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__state))
                                                      ? 0x4000U
                                                      : 0x2000000U) 
                                                    >> 1U))))));
    bufp->fullBit(oldp+5059,((1U & ((~ (((1U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__state))
                                          ? 0x4000U
                                          : 0x2000000U) 
                                        >> 2U)) & (
                                                   ((1U 
                                                     == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__state))
                                                     ? 0x4000U
                                                     : 0x2000000U) 
                                                   >> 1U)))));
    bufp->fullBit(oldp+5060,((1U & ((((1U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__state))
                                       ? 0x4000U : 0x2000000U) 
                                     >> 2U) & (~ ((
                                                   (1U 
                                                    == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__state))
                                                    ? 0x4000U
                                                    : 0x2000000U) 
                                                  >> 1U))))));
    bufp->fullBit(oldp+5061,((1U & ((((1U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__state))
                                       ? 0x4000U : 0x2000000U) 
                                     >> 2U) & (((1U 
                                                 == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__state))
                                                 ? 0x4000U
                                                 : 0x2000000U) 
                                               >> 1U)))));
    bufp->fullBit(oldp+5062,((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__x1_a_q__DOT__full)))));
    bufp->fullBit(oldp+5063,((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)))));
    bufp->fullCData(oldp+5064,((7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U])),3);
    bufp->fullCData(oldp+5065,((3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                      >> 3U))),2);
    bufp->fullCData(oldp+5066,((0xfU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                        >> 5U))),4);
    bufp->fullCData(oldp+5067,((0x7fU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                         >> 9U))),7);
    bufp->fullBit(oldp+5068,((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                    >> 0x10U))));
    bufp->fullBit(oldp+5069,((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                    >> 0x11U))));
    bufp->fullQData(oldp+5070,((((QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[2U])) 
                                 << 0x2eU) | (((QData)((IData)(
                                                               vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[1U])) 
                                               << 0xeU) 
                                              | ((QData)((IData)(
                                                                 vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U])) 
                                                 >> 0x12U)))),64);
    bufp->fullBit(oldp+5072,((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[2U] 
                                    >> 0x12U))));
    bufp->fullSData(oldp+5073,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__beatsLeft),9);
    bufp->fullBit(oldp+5074,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__beatsLeft))));
    bufp->fullSData(oldp+5075,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__readys_mask),9);
    bufp->fullBit(oldp+5076,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__state_0));
    bufp->fullBit(oldp+5077,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__state_1));
    bufp->fullBit(oldp+5078,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__state_2));
    bufp->fullBit(oldp+5079,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__state_3));
    bufp->fullBit(oldp+5080,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__state_4));
    bufp->fullBit(oldp+5081,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__state_5));
    bufp->fullBit(oldp+5082,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__state_6));
    bufp->fullBit(oldp+5083,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__state_7));
    bufp->fullBit(oldp+5084,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__state_8));
    bufp->fullBit(oldp+5085,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__latch));
    bufp->fullSData(oldp+5086,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__a_first_counter),9);
    bufp->fullCData(oldp+5087,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__opcode),3);
    bufp->fullCData(oldp+5088,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__param),3);
    bufp->fullCData(oldp+5089,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__size),4);
    bufp->fullCData(oldp+5090,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__source),7);
    bufp->fullIData(oldp+5091,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__address),31);
    bufp->fullSData(oldp+5092,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter),9);
    bufp->fullCData(oldp+5093,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__opcode_1),3);
    bufp->fullCData(oldp+5094,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__param_1),2);
    bufp->fullCData(oldp+5095,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__size_1),4);
    bufp->fullCData(oldp+5096,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__source_1),7);
    bufp->fullBit(oldp+5097,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__sink));
    bufp->fullBit(oldp+5098,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__denied));
    bufp->fullWData(oldp+5099,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__inflight),65);
    bufp->fullWData(oldp+5102,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__inflight_opcodes),260);
    bufp->fullWData(oldp+5111,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__inflight_sizes),520);
    bufp->fullSData(oldp+5128,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__a_first_counter_1),9);
    bufp->fullBit(oldp+5129,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__a_first_counter_1))));
    bufp->fullSData(oldp+5130,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter_1),9);
    bufp->fullBit(oldp+5131,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter_1))));
    bufp->fullIData(oldp+5132,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__watchdog),32);
    bufp->fullSData(oldp+5133,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter_2),9);
    bufp->fullBit(oldp+5134,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter_2))));
    bufp->fullBit(oldp+5135,((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__a__DOT__maybe_full)))));
    bufp->fullBit(oldp+5136,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__da_valid));
    bufp->fullCData(oldp+5137,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__da_bits_opcode),3);
    bufp->fullCData(oldp+5138,((0xfU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__a__DOT__ram_ext__DOT__Memory
                                        [0U][0U] >> 6U))),4);
    bufp->fullCData(oldp+5139,((0x7fU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__a__DOT__ram_ext__DOT__Memory
                                         [0U][0U] >> 0xaU))),7);
    bufp->fullBit(oldp+5140,((1U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__da_bits_opcode))));
    bufp->fullBit(oldp+5141,((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__x1_a_q__DOT__empty)))));
    bufp->fullCData(oldp+5142,((7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U])),3);
    bufp->fullCData(oldp+5143,((7U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                      >> 3U))),3);
    bufp->fullCData(oldp+5144,((0xfU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                        >> 6U))),4);
    bufp->fullCData(oldp+5145,((0x7fU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                         >> 0xaU))),7);
    bufp->fullSData(oldp+5146,((0x3fffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                           >> 0x11U))),14);
    bufp->fullCData(oldp+5147,((0xffU & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                                          << 1U) | 
                                         (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                          >> 0x1fU)))),8);
    bufp->fullQData(oldp+5148,((((QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[3U])) 
                                 << 0x39U) | (((QData)((IData)(
                                                               vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[2U])) 
                                               << 0x19U) 
                                              | ((QData)((IData)(
                                                                 vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[1U])) 
                                                 >> 7U)))),64);
    bufp->fullBit(oldp+5150,((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[3U] 
                                    >> 7U))));
    bufp->fullBit(oldp+5151,((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__full)))));
    bufp->fullBit(oldp+5152,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__enq_ptr_value));
    bufp->fullBit(oldp+5153,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__deq_ptr_value));
    bufp->fullBit(oldp+5154,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__maybe_full));
    bufp->fullBit(oldp+5155,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ptr_match));
    bufp->fullBit(oldp+5156,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty));
    bufp->fullBit(oldp+5157,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__full));
    bufp->fullBit(oldp+5158,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__do_enq));
    VL_EXTEND_WI(82,18, __Vtemp_hcd24d8a3__0, (0x20000U 
                                               | ((0xfe00U 
                                                   & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__a__DOT__ram_ext__DOT__Memory
                                                      [0U][0U] 
                                                      >> 1U)) 
                                                  | ((0x1e0U 
                                                      & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__a__DOT__ram_ext__DOT__Memory
                                                         [0U][0U] 
                                                         >> 1U)) 
                                                     | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__da_bits_opcode)))));
    __Vtemp_h95b49b13__0[0U] = __Vtemp_hcd24d8a3__0[0U];
    __Vtemp_h95b49b13__0[1U] = __Vtemp_hcd24d8a3__0[1U];
    __Vtemp_h95b49b13__0[2U] = ((0x40000U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__da_bits_opcode) 
                                             << 0x12U)) 
                                | __Vtemp_hcd24d8a3__0[2U]);
    bufp->fullWData(oldp+5159,(__Vtemp_h95b49b13__0),83);
    bufp->fullWData(oldp+5162,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data),83);
    bufp->fullWData(oldp+5165,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory[0]),83);
    bufp->fullWData(oldp+5168,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory[1]),83);
    bufp->fullSData(oldp+5171,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__a_first_counter),9);
    bufp->fullCData(oldp+5172,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__opcode),3);
    bufp->fullCData(oldp+5173,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__param),3);
    bufp->fullCData(oldp+5174,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__size),4);
    bufp->fullCData(oldp+5175,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__source),7);
    bufp->fullSData(oldp+5176,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__address),14);
    bufp->fullSData(oldp+5177,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__d_first_counter),9);
    bufp->fullCData(oldp+5178,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__opcode_1),3);
    bufp->fullCData(oldp+5179,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__param_1),2);
    bufp->fullCData(oldp+5180,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__size_1),4);
    bufp->fullCData(oldp+5181,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__source_1),7);
    bufp->fullBit(oldp+5182,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__sink));
    bufp->fullBit(oldp+5183,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__denied));
    bufp->fullWData(oldp+5184,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__inflight),65);
    bufp->fullWData(oldp+5187,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__inflight_opcodes),260);
    bufp->fullWData(oldp+5196,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__inflight_sizes),520);
    bufp->fullSData(oldp+5213,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__a_first_counter_1),9);
    bufp->fullBit(oldp+5214,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__a_first_counter_1))));
    bufp->fullSData(oldp+5215,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__d_first_counter_1),9);
    bufp->fullBit(oldp+5216,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))));
    bufp->fullBit(oldp+5217,((6U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))));
    bufp->fullIData(oldp+5218,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__watchdog),32);
    bufp->fullSData(oldp+5219,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__d_first_counter_2),9);
    bufp->fullBit(oldp+5220,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))));
    bufp->fullBit(oldp+5221,((((((((0x24U == (0x7fU 
                                              & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                 >> 9U))) 
                                   | (1U == (7U & (
                                                   vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 0xdU)))) 
                                  | (0U == (7U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                  >> 0xdU)))) 
                                 | (0x20U == (0x7fU 
                                              & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                 >> 9U)))) 
                                | (0x21U == (0x7fU 
                                             & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                >> 9U)))) 
                               | (0x22U == (0x7fU & 
                                            (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                             >> 9U)))) 
                              | (0x40U == (0x7fU & 
                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                            >> 9U))))));
    bufp->fullBit(oldp+5222,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__x1_a_q__DOT__enq_ptr_value));
    bufp->fullBit(oldp+5223,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__x1_a_q__DOT__deq_ptr_value));
    bufp->fullBit(oldp+5224,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__x1_a_q__DOT__maybe_full));
    bufp->fullBit(oldp+5225,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__x1_a_q__DOT__ptr_match));
    bufp->fullBit(oldp+5226,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__x1_a_q__DOT__empty));
    bufp->fullBit(oldp+5227,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__x1_a_q__DOT__full));
    bufp->fullBit(oldp+5228,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__x1_a_q__DOT__do_deq));
    bufp->fullWData(oldp+5229,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data),104);
    bufp->fullWData(oldp+5233,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory[0]),104);
    bufp->fullWData(oldp+5237,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory[1]),104);
    bufp->fullSData(oldp+5241,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__a_last_counter),9);
    bufp->fullBit(oldp+5242,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__a_last));
    bufp->fullSData(oldp+5243,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__counter),9);
    bufp->fullBit(oldp+5244,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT___a_io_deq_ready_T_3));
    bufp->fullBit(oldp+5245,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__a__DOT__maybe_full));
    bufp->fullCData(oldp+5246,((7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__a__DOT__ram_ext__DOT__Memory
                                [0U][0U])),3);
    bufp->fullBit(oldp+5247,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__a__DOT__do_enq));
    __Vtemp_h353c8118__5[0U] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__a__DOT__ram_ext__DOT__Memory
        [0U][0U];
    __Vtemp_h353c8118__5[1U] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__a__DOT__ram_ext__DOT__Memory
        [0U][1U];
    __Vtemp_h353c8118__5[2U] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__a__DOT__ram_ext__DOT__Memory
        [0U][2U];
    __Vtemp_h353c8118__5[3U] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__a__DOT__ram_ext__DOT__Memory
        [0U][3U];
    bufp->fullWData(oldp+5248,(__Vtemp_h353c8118__5),104);
    bufp->fullWData(oldp+5252,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__a__DOT__ram_ext__DOT__Memory[0]),104);
    bufp->fullSData(oldp+5256,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__a_first_counter),9);
    bufp->fullCData(oldp+5257,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__opcode),3);
    bufp->fullCData(oldp+5258,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__param),3);
    bufp->fullCData(oldp+5259,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__size),4);
    bufp->fullCData(oldp+5260,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__source),7);
    bufp->fullSData(oldp+5261,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__address),14);
    bufp->fullSData(oldp+5262,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__d_first_counter),9);
    bufp->fullCData(oldp+5263,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__opcode_1),3);
    bufp->fullCData(oldp+5264,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__param_1),2);
    bufp->fullCData(oldp+5265,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__size_1),4);
    bufp->fullCData(oldp+5266,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__source_1),7);
    bufp->fullBit(oldp+5267,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__sink));
    bufp->fullBit(oldp+5268,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__denied));
    bufp->fullWData(oldp+5269,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__inflight),65);
    bufp->fullWData(oldp+5272,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__inflight_opcodes),260);
    bufp->fullWData(oldp+5281,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__inflight_sizes),520);
    bufp->fullSData(oldp+5298,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__a_first_counter_1),9);
    bufp->fullBit(oldp+5299,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__a_first_counter_1))));
    bufp->fullSData(oldp+5300,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__d_first_counter_1),9);
    bufp->fullBit(oldp+5301,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__d_first_counter_1))));
    bufp->fullBit(oldp+5302,((6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__da_bits_opcode))));
    bufp->fullIData(oldp+5303,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__watchdog),32);
    bufp->fullSData(oldp+5304,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__d_first_counter_2),9);
    bufp->fullBit(oldp+5305,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__d_first_counter_2))));
    bufp->fullBit(oldp+5306,((1U & (((((((0x24U == 
                                          (0x7fU & 
                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                            >> 0xaU))) 
                                         | (1U == (7U 
                                                   & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                      >> 0xeU)))) 
                                        | (~ (IData)(
                                                     (0U 
                                                      != 
                                                      (7U 
                                                       & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                          >> 0xeU)))))) 
                                       | (0x20U == 
                                          (0x7fU & 
                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                            >> 0xaU)))) 
                                      | (0x21U == (0x7fU 
                                                   & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                      >> 0xaU)))) 
                                     | (0x22U == (0x7fU 
                                                  & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                     >> 0xaU)))) 
                                    | (0x40U == (0x7fU 
                                                 & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                    >> 0xaU)))))));
    bufp->fullBit(oldp+5307,((2U == (3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                           >> 6U)))));
    bufp->fullBit(oldp+5308,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__mask_acc));
    bufp->fullBit(oldp+5309,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__mask_acc_1));
    bufp->fullBit(oldp+5310,((1U == (3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                           >> 6U)))));
    bufp->fullBit(oldp+5311,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__mask_eq_2));
    bufp->fullBit(oldp+5312,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__mask_acc_2));
    bufp->fullBit(oldp+5313,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__mask_eq_3));
    bufp->fullBit(oldp+5314,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__mask_acc_3));
    bufp->fullBit(oldp+5315,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__mask_eq_4));
    bufp->fullBit(oldp+5316,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__mask_acc_4));
    bufp->fullBit(oldp+5317,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__mask_eq_5));
    bufp->fullBit(oldp+5318,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__mask_acc_5));
    bufp->fullCData(oldp+5319,(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__mask_acc_5) 
                                  << 7U) | (0x3fff80U 
                                            & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__mask_eq_5) 
                                                << 7U) 
                                               & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                  >> 0xaU)))) 
                                | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__mask_acc_5) 
                                     | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__mask_eq_5) 
                                        & (~ (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                              >> 0x11U)))) 
                                    << 6U) | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__mask_acc_4) 
                                                << 5U) 
                                               | (0xfffe0U 
                                                  & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__mask_eq_4) 
                                                      << 5U) 
                                                     & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                        >> 0xcU)))) 
                                              | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__mask_acc_4) 
                                                   | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__mask_eq_4) 
                                                      & (~ 
                                                         (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                          >> 0x11U)))) 
                                                  << 4U) 
                                                 | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__mask_acc_3) 
                                                      << 3U) 
                                                     | (0x3fff8U 
                                                        & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__mask_eq_3) 
                                                            << 3U) 
                                                           & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                              >> 0xeU)))) 
                                                    | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__mask_acc_3) 
                                                         | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__mask_eq_3) 
                                                            & (~ 
                                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                >> 0x11U)))) 
                                                        << 2U) 
                                                       | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__mask_acc_2) 
                                                            << 1U) 
                                                           | (0xfffeU 
                                                              & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__mask_eq_2) 
                                                                  << 1U) 
                                                                 & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                    >> 0x10U)))) 
                                                          | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__mask_acc_2) 
                                                             | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__mask_eq_2) 
                                                                & (~ 
                                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                    >> 0x11U)))))))))))),8);
    bufp->fullBit(oldp+5320,((((((((0x24U == (0x7fU 
                                              & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__a__DOT__ram_ext__DOT__Memory
                                                 [0U][0U] 
                                                 >> 0xaU))) 
                                   | (1U == (7U & (
                                                   vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__a__DOT__ram_ext__DOT__Memory
                                                   [0U][0U] 
                                                   >> 0xeU)))) 
                                  | (0U == (7U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__a__DOT__ram_ext__DOT__Memory
                                                  [0U][0U] 
                                                  >> 0xeU)))) 
                                 | (0x20U == (0x7fU 
                                              & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__a__DOT__ram_ext__DOT__Memory
                                                 [0U][0U] 
                                                 >> 0xaU)))) 
                                | (0x21U == (0x7fU 
                                             & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__a__DOT__ram_ext__DOT__Memory
                                                [0U][0U] 
                                                >> 0xaU)))) 
                               | (0x22U == (0x7fU & 
                                            (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__a__DOT__ram_ext__DOT__Memory
                                             [0U][0U] 
                                             >> 0xaU)))) 
                              | (0x40U == (0x7fU & 
                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__a__DOT__ram_ext__DOT__Memory
                                            [0U][0U] 
                                            >> 0xaU))))));
    __Vtemp_hc961d23f__2[0U] = 1U;
    __Vtemp_hc961d23f__2[1U] = 0U;
    __Vtemp_hc961d23f__2[2U] = 0U;
    __Vtemp_hc961d23f__2[3U] = 0U;
    VL_EXTEND_WI(128,7, __Vtemp_h5510ccc3__0, (0x7fU 
                                               & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                  >> 0xaU)));
    VL_SHIFTL_WWW(128,128,128, __Vtemp_h233538e4__0, __Vtemp_hc961d23f__2, __Vtemp_h5510ccc3__0);
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___same_cycle_resp_T_1) {
        __Vtemp_h77c799ec__0[0U] = __Vtemp_h233538e4__0[0U];
        __Vtemp_h77c799ec__0[1U] = __Vtemp_h233538e4__0[1U];
        __Vtemp_h77c799ec__0[2U] = (1U & __Vtemp_h233538e4__0[2U]);
    } else {
        __Vtemp_h77c799ec__0[0U] = 0U;
        __Vtemp_h77c799ec__0[1U] = 0U;
        __Vtemp_h77c799ec__0[2U] = 0U;
    }
    bufp->fullWData(oldp+5321,(__Vtemp_h77c799ec__0),65);
    bufp->fullBit(oldp+5324,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__same_cycle_resp));
    bufp->fullBit(oldp+5325,((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__x1_a_q__DOT__empty)))));
    bufp->fullCData(oldp+5326,((7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U])),3);
    bufp->fullCData(oldp+5327,((7U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                      >> 3U))),3);
    bufp->fullCData(oldp+5328,((0xfU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                        >> 6U))),4);
    bufp->fullBit(oldp+5329,((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                    >> 0xaU))));
    bufp->fullIData(oldp+5330,(((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                                 << 0x15U) | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                              >> 0xbU))),32);
    bufp->fullCData(oldp+5331,((0xffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                                         >> 0xbU))),8);
    bufp->fullQData(oldp+5332,((((QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[3U])) 
                                 << 0x2dU) | (((QData)((IData)(
                                                               vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[2U])) 
                                               << 0xdU) 
                                              | ((QData)((IData)(
                                                                 vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[1U])) 
                                                 >> 0x13U)))),64);
    bufp->fullBit(oldp+5334,((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[3U] 
                                    >> 0x13U))));
    bufp->fullBit(oldp+5335,((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__full)))));
    bufp->fullBit(oldp+5336,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__bundleIn_0_a_ready));
    bufp->fullBit(oldp+5337,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__repeated_repeater__DOT___io_deq_valid_output));
    bufp->fullCData(oldp+5338,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT___repeated_repeater_io_deq_bits_opcode),3);
    bufp->fullCData(oldp+5339,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT___repeated_repeater_io_deq_bits_param),2);
    bufp->fullCData(oldp+5340,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT___repeated_repeater_io_deq_bits_size),4);
    bufp->fullBit(oldp+5341,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT___repeated_repeater_io_deq_bits_source));
    bufp->fullCData(oldp+5342,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT___repeated_repeater_io_deq_bits_sink),4);
    bufp->fullBit(oldp+5343,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT___repeated_repeater_io_deq_bits_denied));
    bufp->fullQData(oldp+5344,((((0xffffU & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__repeat_count)
                                               ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__repeat_sel_hold_r)
                                               : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__repeat_sel_sel_sources_0)) 
                                             & (((IData)(0xfU) 
                                                 << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT___repeated_repeater_io_deq_bits_size)) 
                                                >> 3U))) 
                                 | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__repeat_count))
                                 ? (((QData)((IData)(
                                                     ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__repeated_repeater__DOT__full)
                                                       ? 
                                                      vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__repeated_repeater__DOT__saved_data[3U]
                                                       : 
                                                      vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_in_0_d_bits_data[3U]))) 
                                     << 0x20U) | (QData)((IData)(
                                                                 ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__repeated_repeater__DOT__full)
                                                                   ? 
                                                                  vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__repeated_repeater__DOT__saved_data[2U]
                                                                   : 
                                                                  vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_in_0_d_bits_data[2U]))))
                                 : (((QData)((IData)(
                                                     vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_in_0_d_bits_data[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_in_0_d_bits_data[0U]))))),64);
    bufp->fullBit(oldp+5346,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__repeated_repeater__DOT__full)
                               ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__repeated_repeater__DOT__saved_corrupt)
                               : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_13_bits_corrupt))));
    bufp->fullBit(oldp+5347,((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_buffer__DOT__x1_a_q__DOT__full)))));
    bufp->fullBit(oldp+5348,((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_buffer__DOT__bundleIn_0_d_q__DOT__empty)))));
    bufp->fullCData(oldp+5349,((7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U])),3);
    bufp->fullCData(oldp+5350,((3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                      >> 3U))),2);
    bufp->fullCData(oldp+5351,((0xfU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                        >> 5U))),4);
    bufp->fullCData(oldp+5352,((0xfU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                        >> 0xaU))),4);
    bufp->fullBit(oldp+5353,((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                    >> 0xeU))));
    bufp->fullQData(oldp+5354,((((QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[2U])) 
                                 << 0x31U) | (((QData)((IData)(
                                                               vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[1U])) 
                                               << 0x11U) 
                                              | ((QData)((IData)(
                                                                 vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U])) 
                                                 >> 0xfU)))),64);
    bufp->fullBit(oldp+5356,((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[2U] 
                                    >> 0xfU))));
    bufp->fullBit(oldp+5357,((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_buffer__DOT__x1_a_q__DOT__empty)))));
    bufp->fullCData(oldp+5358,((7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U])),3);
    bufp->fullCData(oldp+5359,((7U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                      >> 3U))),3);
    bufp->fullCData(oldp+5360,((0xfU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                        >> 6U))),4);
    bufp->fullBit(oldp+5361,((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                    >> 0xaU))));
    bufp->fullIData(oldp+5362,(((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                                 << 0x15U) | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                              >> 0xbU))),32);
    bufp->fullCData(oldp+5363,((0xffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                                         >> 0xbU))),8);
    bufp->fullQData(oldp+5364,((((QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[3U])) 
                                 << 0x2dU) | (((QData)((IData)(
                                                               vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[2U])) 
                                               << 0xdU) 
                                              | ((QData)((IData)(
                                                                 vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[1U])) 
                                                 >> 0x13U)))),64);
    bufp->fullBit(oldp+5366,((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[3U] 
                                    >> 0x13U))));
    bufp->fullBit(oldp+5367,((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_buffer__DOT__bundleIn_0_d_q__DOT__full)))));
    bufp->fullBit(oldp+5368,((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                    >> 9U))));
    bufp->fullBit(oldp+5369,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_buffer__DOT__bundleIn_0_d_q__DOT__enq_ptr_value));
    bufp->fullBit(oldp+5370,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_buffer__DOT__bundleIn_0_d_q__DOT__deq_ptr_value));
    bufp->fullBit(oldp+5371,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_buffer__DOT__bundleIn_0_d_q__DOT__maybe_full));
    bufp->fullBit(oldp+5372,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_buffer__DOT__bundleIn_0_d_q__DOT__ptr_match));
    bufp->fullBit(oldp+5373,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_buffer__DOT__bundleIn_0_d_q__DOT__empty));
    bufp->fullBit(oldp+5374,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_buffer__DOT__bundleIn_0_d_q__DOT__full));
    bufp->fullBit(oldp+5375,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_buffer__DOT__bundleIn_0_d_q__DOT__do_enq));
    bufp->fullBit(oldp+5376,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_buffer__DOT__bundleIn_0_d_q__DOT__do_deq));
    __Vtemp_hbc2b6362__0[1U] = (((IData)((((0xffffU 
                                            & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__repeat_count)
                                                 ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__repeat_sel_hold_r)
                                                 : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__repeat_sel_sel_sources_0)) 
                                               & (((IData)(0xfU) 
                                                   << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT___repeated_repeater_io_deq_bits_size)) 
                                                  >> 3U))) 
                                           | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__repeat_count))
                                           ? (((QData)((IData)(
                                                               ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__repeated_repeater__DOT__full)
                                                                 ? 
                                                                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__repeated_repeater__DOT__saved_data[3U]
                                                                 : 
                                                                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_in_0_d_bits_data[3U]))) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__repeated_repeater__DOT__full)
                                                                  ? 
                                                                 vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__repeated_repeater__DOT__saved_data[2U]
                                                                  : 
                                                                 vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_in_0_d_bits_data[2U]))))
                                           : (((QData)((IData)(
                                                               vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_in_0_d_bits_data[1U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_in_0_d_bits_data[0U]))))) 
                                 >> 0x11U) | ((IData)(
                                                      ((((0xffffU 
                                                          & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__repeat_count)
                                                               ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__repeat_sel_hold_r)
                                                               : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__repeat_sel_sel_sources_0)) 
                                                             & (((IData)(0xfU) 
                                                                 << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT___repeated_repeater_io_deq_bits_size)) 
                                                                >> 3U))) 
                                                         | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__repeat_count))
                                                         ? 
                                                        (((QData)((IData)(
                                                                          ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__repeated_repeater__DOT__full)
                                                                            ? 
                                                                           vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__repeated_repeater__DOT__saved_data[3U]
                                                                            : 
                                                                           vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_in_0_d_bits_data[3U]))) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__repeated_repeater__DOT__full)
                                                                             ? 
                                                                            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__repeated_repeater__DOT__saved_data[2U]
                                                                             : 
                                                                            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_in_0_d_bits_data[2U]))))
                                                         : 
                                                        (((QData)((IData)(
                                                                          vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_in_0_d_bits_data[1U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_in_0_d_bits_data[0U])))) 
                                                       >> 0x20U)) 
                                              << 0xfU));
    __Vtemp_h6b35b3c9__0[0U] = (((IData)((((0xffffU 
                                            & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__repeat_count)
                                                 ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__repeat_sel_hold_r)
                                                 : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__repeat_sel_sel_sources_0)) 
                                               & (((IData)(0xfU) 
                                                   << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT___repeated_repeater_io_deq_bits_size)) 
                                                  >> 3U))) 
                                           | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__repeat_count))
                                           ? (((QData)((IData)(
                                                               ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__repeated_repeater__DOT__full)
                                                                 ? 
                                                                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__repeated_repeater__DOT__saved_data[3U]
                                                                 : 
                                                                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_in_0_d_bits_data[3U]))) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__repeated_repeater__DOT__full)
                                                                  ? 
                                                                 vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__repeated_repeater__DOT__saved_data[2U]
                                                                  : 
                                                                 vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_in_0_d_bits_data[2U]))))
                                           : (((QData)((IData)(
                                                               vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_in_0_d_bits_data[1U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_in_0_d_bits_data[0U]))))) 
                                 << 0xfU) | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT___repeated_repeater_io_deq_bits_denied) 
                                              << 0xeU) 
                                             | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT___repeated_repeater_io_deq_bits_sink) 
                                                 << 0xaU) 
                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT___repeated_repeater_io_deq_bits_source) 
                                                    << 9U) 
                                                   | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT___repeated_repeater_io_deq_bits_size) 
                                                       << 5U) 
                                                      | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT___repeated_repeater_io_deq_bits_param) 
                                                          << 3U) 
                                                         | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT___repeated_repeater_io_deq_bits_opcode)))))));
    __Vtemp_h6b35b3c9__0[1U] = __Vtemp_hbc2b6362__0[1U];
    __Vtemp_h6b35b3c9__0[2U] = ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__repeated_repeater__DOT__full)
                                   ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__repeated_repeater__DOT__saved_corrupt)
                                   : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_13_bits_corrupt)) 
                                 << 0xfU) | ((IData)(
                                                     ((((0xffffU 
                                                         & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__repeat_count)
                                                              ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__repeat_sel_hold_r)
                                                              : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__repeat_sel_sel_sources_0)) 
                                                            & (((IData)(0xfU) 
                                                                << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT___repeated_repeater_io_deq_bits_size)) 
                                                               >> 3U))) 
                                                        | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__repeat_count))
                                                        ? 
                                                       (((QData)((IData)(
                                                                         ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__repeated_repeater__DOT__full)
                                                                           ? 
                                                                          vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__repeated_repeater__DOT__saved_data[3U]
                                                                           : 
                                                                          vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_in_0_d_bits_data[3U]))) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__repeated_repeater__DOT__full)
                                                                            ? 
                                                                           vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__repeated_repeater__DOT__saved_data[2U]
                                                                            : 
                                                                           vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_in_0_d_bits_data[2U]))))
                                                        : 
                                                       (((QData)((IData)(
                                                                         vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_in_0_d_bits_data[1U])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_in_0_d_bits_data[0U])))) 
                                                      >> 0x20U)) 
                                             >> 0x11U));
    bufp->fullWData(oldp+5377,(__Vtemp_h6b35b3c9__0),80);
    bufp->fullWData(oldp+5380,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data),80);
    bufp->fullWData(oldp+5383,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_buffer__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory[0]),80);
    bufp->fullWData(oldp+5386,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_buffer__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory[1]),80);
    bufp->fullSData(oldp+5389,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_buffer__DOT__monitor__DOT__a_first_counter),9);
    bufp->fullCData(oldp+5390,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_buffer__DOT__monitor__DOT__opcode),3);
    bufp->fullCData(oldp+5391,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_buffer__DOT__monitor__DOT__param),3);
    bufp->fullCData(oldp+5392,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_buffer__DOT__monitor__DOT__size),4);
    bufp->fullBit(oldp+5393,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_buffer__DOT__monitor__DOT__source));
    bufp->fullIData(oldp+5394,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_buffer__DOT__monitor__DOT__address),32);
    bufp->fullSData(oldp+5395,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_buffer__DOT__monitor__DOT__d_first_counter),9);
    bufp->fullCData(oldp+5396,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_buffer__DOT__monitor__DOT__opcode_1),3);
    bufp->fullCData(oldp+5397,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_buffer__DOT__monitor__DOT__param_1),2);
    bufp->fullCData(oldp+5398,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_buffer__DOT__monitor__DOT__size_1),4);
    bufp->fullBit(oldp+5399,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_buffer__DOT__monitor__DOT__source_1));
    bufp->fullCData(oldp+5400,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_buffer__DOT__monitor__DOT__sink),4);
    bufp->fullBit(oldp+5401,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_buffer__DOT__monitor__DOT__denied));
    bufp->fullBit(oldp+5402,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_buffer__DOT__monitor__DOT__inflight));
    bufp->fullCData(oldp+5403,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_buffer__DOT__monitor__DOT__inflight_opcodes),4);
    bufp->fullCData(oldp+5404,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_buffer__DOT__monitor__DOT__inflight_sizes),8);
    bufp->fullSData(oldp+5405,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_buffer__DOT__monitor__DOT__a_first_counter_1),9);
    bufp->fullBit(oldp+5406,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_buffer__DOT__monitor__DOT__a_first_counter_1))));
    bufp->fullSData(oldp+5407,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_buffer__DOT__monitor__DOT__d_first_counter_1),9);
    bufp->fullBit(oldp+5408,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_buffer__DOT__monitor__DOT__d_first_counter_1))));
    bufp->fullBit(oldp+5409,((6U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))));
    bufp->fullIData(oldp+5410,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_buffer__DOT__monitor__DOT__watchdog),32);
    bufp->fullSData(oldp+5411,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_buffer__DOT__monitor__DOT__d_first_counter_2),9);
    bufp->fullBit(oldp+5412,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_buffer__DOT__monitor__DOT__d_first_counter_2))));
    bufp->fullBit(oldp+5413,((2U == (3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                           >> 6U)))));
    bufp->fullBit(oldp+5414,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_buffer__DOT__monitor__DOT__mask_acc));
    bufp->fullBit(oldp+5415,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_buffer__DOT__monitor__DOT__mask_acc_1));
    bufp->fullBit(oldp+5416,((1U == (3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                           >> 6U)))));
    bufp->fullBit(oldp+5417,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_buffer__DOT__monitor__DOT__mask_eq_2));
    bufp->fullBit(oldp+5418,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_buffer__DOT__monitor__DOT__mask_acc_2));
    bufp->fullBit(oldp+5419,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_buffer__DOT__monitor__DOT__mask_eq_3));
    bufp->fullBit(oldp+5420,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_buffer__DOT__monitor__DOT__mask_acc_3));
    bufp->fullBit(oldp+5421,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_buffer__DOT__monitor__DOT__mask_eq_4));
    bufp->fullBit(oldp+5422,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_buffer__DOT__monitor__DOT__mask_acc_4));
    bufp->fullBit(oldp+5423,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_buffer__DOT__monitor__DOT__mask_eq_5));
    bufp->fullBit(oldp+5424,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_buffer__DOT__monitor__DOT__mask_acc_5));
    bufp->fullCData(oldp+5425,(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_buffer__DOT__monitor__DOT__mask_acc_5) 
                                  << 7U) | (0xfffff80U 
                                            & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_buffer__DOT__monitor__DOT__mask_eq_5) 
                                                << 7U) 
                                               & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                  >> 4U)))) 
                                | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_buffer__DOT__monitor__DOT__mask_acc_5) 
                                     | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_buffer__DOT__monitor__DOT__mask_eq_5) 
                                        & (~ (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                              >> 0xbU)))) 
                                    << 6U) | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_buffer__DOT__monitor__DOT__mask_acc_4) 
                                                << 5U) 
                                               | (0x3ffffe0U 
                                                  & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_buffer__DOT__monitor__DOT__mask_eq_4) 
                                                      << 5U) 
                                                     & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                        >> 6U)))) 
                                              | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_buffer__DOT__monitor__DOT__mask_acc_4) 
                                                   | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_buffer__DOT__monitor__DOT__mask_eq_4) 
                                                      & (~ 
                                                         (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                          >> 0xbU)))) 
                                                  << 4U) 
                                                 | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_buffer__DOT__monitor__DOT__mask_acc_3) 
                                                      << 3U) 
                                                     | (0xfffff8U 
                                                        & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_buffer__DOT__monitor__DOT__mask_eq_3) 
                                                            << 3U) 
                                                           & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                              >> 8U)))) 
                                                    | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_buffer__DOT__monitor__DOT__mask_acc_3) 
                                                         | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_buffer__DOT__monitor__DOT__mask_eq_3) 
                                                            & (~ 
                                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                >> 0xbU)))) 
                                                        << 2U) 
                                                       | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_buffer__DOT__monitor__DOT__mask_acc_2) 
                                                            << 1U) 
                                                           | (0x3ffffeU 
                                                              & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_buffer__DOT__monitor__DOT__mask_eq_2) 
                                                                  << 1U) 
                                                                 & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                    >> 0xaU)))) 
                                                          | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_buffer__DOT__monitor__DOT__mask_acc_2) 
                                                             | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_buffer__DOT__monitor__DOT__mask_eq_2) 
                                                                & (~ 
                                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                    >> 0xbU)))))))))))),8);
    bufp->fullBit(oldp+5426,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_buffer__DOT__monitor__DOT___same_cycle_resp_T_1) 
                              & (~ (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                    >> 0xaU)))));
    bufp->fullBit(oldp+5427,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_buffer__DOT__monitor__DOT__same_cycle_resp));
    bufp->fullBit(oldp+5428,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_buffer__DOT__x1_a_q__DOT__enq_ptr_value));
    bufp->fullBit(oldp+5429,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_buffer__DOT__x1_a_q__DOT__deq_ptr_value));
    bufp->fullBit(oldp+5430,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_buffer__DOT__x1_a_q__DOT__maybe_full));
    bufp->fullBit(oldp+5431,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_buffer__DOT__x1_a_q__DOT__ptr_match));
    bufp->fullBit(oldp+5432,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_buffer__DOT__x1_a_q__DOT__empty));
    bufp->fullBit(oldp+5433,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_buffer__DOT__x1_a_q__DOT__full));
    bufp->fullBit(oldp+5434,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_buffer__DOT__x1_a_q__DOT__do_enq));
    bufp->fullBit(oldp+5435,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_buffer__DOT__x1_a_q__DOT__do_deq));
    bufp->fullWData(oldp+5436,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data),116);
    bufp->fullWData(oldp+5440,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_buffer__DOT__x1_a_q__DOT___ram_ext_R0_data),116);
    bufp->fullWData(oldp+5444,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory[0]),116);
    bufp->fullWData(oldp+5448,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory[1]),116);
    bufp->fullBit(oldp+5452,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__enq_ptr_value));
    bufp->fullBit(oldp+5453,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__deq_ptr_value));
    bufp->fullBit(oldp+5454,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__maybe_full));
    bufp->fullBit(oldp+5455,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ptr_match));
    bufp->fullBit(oldp+5456,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty));
    bufp->fullBit(oldp+5457,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__full));
    bufp->fullBit(oldp+5458,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__do_enq));
    bufp->fullBit(oldp+5459,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__do_deq));
    __Vtemp_hd91b54ee__0[0U] = (((IData)((((QData)((IData)(
                                                           vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[2U])) 
                                           << 0x31U) 
                                          | (((QData)((IData)(
                                                              vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[1U])) 
                                              << 0x11U) 
                                             | ((QData)((IData)(
                                                                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U])) 
                                                >> 0xfU)))) 
                                 << 0xfU) | ((0x4000U 
                                              & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]) 
                                             | ((0x3c00U 
                                                 & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]) 
                                                | (0x1ffU 
                                                   & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))));
    __Vtemp_hd91b54ee__0[1U] = (((IData)((((QData)((IData)(
                                                           vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[2U])) 
                                           << 0x31U) 
                                          | (((QData)((IData)(
                                                              vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[1U])) 
                                              << 0x11U) 
                                             | ((QData)((IData)(
                                                                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U])) 
                                                >> 0xfU)))) 
                                 >> 0x11U) | ((IData)(
                                                      ((((QData)((IData)(
                                                                         vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[2U])) 
                                                         << 0x31U) 
                                                        | (((QData)((IData)(
                                                                            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[1U])) 
                                                            << 0x11U) 
                                                           | ((QData)((IData)(
                                                                              vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U])) 
                                                              >> 0xfU))) 
                                                       >> 0x20U)) 
                                              << 0xfU));
    __Vtemp_hd91b54ee__0[2U] = ((0x8000U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[2U]) 
                                | ((IData)(((((QData)((IData)(
                                                              vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[2U])) 
                                              << 0x31U) 
                                             | (((QData)((IData)(
                                                                 vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[1U])) 
                                                 << 0x11U) 
                                                | ((QData)((IData)(
                                                                   vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U])) 
                                                   >> 0xfU))) 
                                            >> 0x20U)) 
                                   >> 0x11U));
    bufp->fullWData(oldp+5460,(__Vtemp_hd91b54ee__0),80);
    bufp->fullWData(oldp+5463,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data),80);
    bufp->fullWData(oldp+5466,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory[0]),80);
    bufp->fullWData(oldp+5469,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory[1]),80);
    bufp->fullSData(oldp+5472,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__monitor__DOT__a_first_counter),9);
    bufp->fullCData(oldp+5473,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__monitor__DOT__opcode),3);
    bufp->fullCData(oldp+5474,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__monitor__DOT__param),3);
    bufp->fullCData(oldp+5475,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__monitor__DOT__size),4);
    bufp->fullBit(oldp+5476,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__monitor__DOT__source));
    bufp->fullIData(oldp+5477,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__monitor__DOT__address),32);
    bufp->fullSData(oldp+5478,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__monitor__DOT__d_first_counter),9);
    bufp->fullCData(oldp+5479,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__monitor__DOT__opcode_1),3);
    bufp->fullCData(oldp+5480,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__monitor__DOT__param_1),2);
    bufp->fullCData(oldp+5481,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__monitor__DOT__size_1),4);
    bufp->fullBit(oldp+5482,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__monitor__DOT__source_1));
    bufp->fullCData(oldp+5483,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__monitor__DOT__sink),4);
    bufp->fullBit(oldp+5484,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__monitor__DOT__denied));
    bufp->fullBit(oldp+5485,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__monitor__DOT__inflight));
    bufp->fullCData(oldp+5486,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_opcodes),4);
    bufp->fullCData(oldp+5487,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_sizes),8);
    bufp->fullSData(oldp+5488,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__monitor__DOT__a_first_counter_1),9);
    bufp->fullBit(oldp+5489,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__monitor__DOT__a_first_counter_1))));
    bufp->fullSData(oldp+5490,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__monitor__DOT__d_first_counter_1),9);
    bufp->fullBit(oldp+5491,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))));
    bufp->fullBit(oldp+5492,((6U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))));
    bufp->fullIData(oldp+5493,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__monitor__DOT__watchdog),32);
    bufp->fullSData(oldp+5494,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__monitor__DOT__d_first_counter_2),9);
    bufp->fullBit(oldp+5495,((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))));
    bufp->fullBit(oldp+5496,((2U == (3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__inDes__DOT__data_4 
                                           >> 0x13U)))));
    bufp->fullBit(oldp+5497,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__monitor__DOT__mask_acc));
    bufp->fullBit(oldp+5498,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__monitor__DOT__mask_acc_1));
    bufp->fullBit(oldp+5499,((1U == (3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__inDes__DOT__data_4 
                                           >> 0x13U)))));
    bufp->fullBit(oldp+5500,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__monitor__DOT__mask_eq_2));
    bufp->fullBit(oldp+5501,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__monitor__DOT__mask_acc_2));
    bufp->fullBit(oldp+5502,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__monitor__DOT__mask_eq_3));
    bufp->fullBit(oldp+5503,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__monitor__DOT__mask_acc_3));
    bufp->fullBit(oldp+5504,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__monitor__DOT__mask_eq_4));
    bufp->fullBit(oldp+5505,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__monitor__DOT__mask_acc_4));
    bufp->fullBit(oldp+5506,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__monitor__DOT__mask_eq_5));
    bufp->fullBit(oldp+5507,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__monitor__DOT__mask_acc_5));
    bufp->fullCData(oldp+5508,(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__monitor__DOT__mask_acc_5) 
                                  | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__monitor__DOT__mask_eq_5) 
                                     & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT___inDes_io_out_bits_address))) 
                                 << 7U) | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__monitor__DOT__mask_acc_5) 
                                             | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__monitor__DOT__mask_eq_5) 
                                                & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT___inDes_io_out_bits_address)))) 
                                            << 6U) 
                                           | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__monitor__DOT__mask_acc_4) 
                                                | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__monitor__DOT__mask_eq_4) 
                                                   & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT___inDes_io_out_bits_address))) 
                                               << 5U) 
                                              | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__monitor__DOT__mask_acc_4) 
                                                   | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__monitor__DOT__mask_eq_4) 
                                                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT___inDes_io_out_bits_address)))) 
                                                  << 4U) 
                                                 | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__monitor__DOT__mask_acc_3) 
                                                      | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__monitor__DOT__mask_eq_3) 
                                                         & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT___inDes_io_out_bits_address))) 
                                                     << 3U) 
                                                    | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__monitor__DOT__mask_acc_3) 
                                                         | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__monitor__DOT__mask_eq_3) 
                                                            & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT___inDes_io_out_bits_address)))) 
                                                        << 2U) 
                                                       | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__monitor__DOT__mask_acc_2) 
                                                            | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__monitor__DOT__mask_eq_2) 
                                                               & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT___inDes_io_out_bits_address))) 
                                                           << 1U) 
                                                          | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__monitor__DOT__mask_acc_2) 
                                                             | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__monitor__DOT__mask_eq_2) 
                                                                & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT___inDes_io_out_bits_address)))))))))))),8);
}
