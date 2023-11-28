// Generated by CIRCT unknown git version
// Standard header to adapt well known macros to our needs.
`ifndef RANDOMIZE
  `ifdef RANDOMIZE_REG_INIT
    `define RANDOMIZE
  `endif // RANDOMIZE_REG_INIT
`endif // not def RANDOMIZE
`ifndef RANDOMIZE
  `ifdef RANDOMIZE_MEM_INIT
    `define RANDOMIZE
  `endif // RANDOMIZE_MEM_INIT
`endif // not def RANDOMIZE

// RANDOM may be set to an expression that produces a 32-bit random unsigned value.
`ifndef RANDOM
  `define RANDOM $random
`endif // not def RANDOM

// Users can define 'PRINTF_COND' to add an extra gate to prints.
`ifndef PRINTF_COND_
  `ifdef PRINTF_COND
    `define PRINTF_COND_ (`PRINTF_COND)
  `else  // PRINTF_COND
    `define PRINTF_COND_ 1
  `endif // PRINTF_COND
`endif // not def PRINTF_COND_

// Users can define 'ASSERT_VERBOSE_COND' to add an extra gate to assert error printing.
`ifndef ASSERT_VERBOSE_COND_
  `ifdef ASSERT_VERBOSE_COND
    `define ASSERT_VERBOSE_COND_ (`ASSERT_VERBOSE_COND)
  `else  // ASSERT_VERBOSE_COND
    `define ASSERT_VERBOSE_COND_ 1
  `endif // ASSERT_VERBOSE_COND
`endif // not def ASSERT_VERBOSE_COND_

// Users can define 'STOP_COND' to add an extra gate to stop conditions.
`ifndef STOP_COND_
  `ifdef STOP_COND
    `define STOP_COND_ (`STOP_COND)
  `else  // STOP_COND
    `define STOP_COND_ 1
  `endif // STOP_COND
`endif // not def STOP_COND_

// Users can define INIT_RANDOM as general code that gets injected into the
// initializer block for modules with registers.
`ifndef INIT_RANDOM
  `define INIT_RANDOM
`endif // not def INIT_RANDOM

// If using random initialization, you can also define RANDOMIZE_DELAY to
// customize the delay used, otherwise 0.002 is used.
`ifndef RANDOMIZE_DELAY
  `define RANDOMIZE_DELAY 0.002
`endif // not def RANDOMIZE_DELAY

// Define INIT_RANDOM_PROLOG_ for use in our modules below.
`ifndef INIT_RANDOM_PROLOG_
  `ifdef RANDOMIZE
    `ifdef VERILATOR
      `define INIT_RANDOM_PROLOG_ `INIT_RANDOM
    `else  // VERILATOR
      `define INIT_RANDOM_PROLOG_ `INIT_RANDOM #`RANDOMIZE_DELAY begin end
    `endif // VERILATOR
  `else  // RANDOMIZE
    `define INIT_RANDOM_PROLOG_
  `endif // RANDOMIZE
`endif // not def INIT_RANDOM_PROLOG_

module Queue_82(
  input         clock,
                reset,
                io_enq_valid,
  input  [39:0] io_enq_bits_vaddr,
  input         io_enq_bits_laddr_is_acc_addr,
                io_enq_bits_laddr_accumulate,
                io_enq_bits_laddr_read_full_acc_row,
  input  [2:0]  io_enq_bits_laddr_norm_cmd,
  input  [10:0] io_enq_bits_laddr_garbage,
  input         io_enq_bits_laddr_garbage_bit,
  input  [13:0] io_enq_bits_laddr_data,
  input  [2:0]  io_enq_bits_acc_act,
  input  [31:0] io_enq_bits_acc_scale,
                io_enq_bits_acc_igelu_qb,
                io_enq_bits_acc_igelu_qc,
                io_enq_bits_acc_iexp_qln2,
                io_enq_bits_acc_iexp_qln2_inv,
  input  [7:0]  io_enq_bits_acc_norm_stats_id,
  input  [15:0] io_enq_bits_len,
  input  [7:0]  io_enq_bits_block,
                io_enq_bits_cmd_id,
  input         io_enq_bits_status_debug,
                io_enq_bits_status_cease,
                io_enq_bits_status_wfi,
  input  [31:0] io_enq_bits_status_isa,
  input  [1:0]  io_enq_bits_status_dprv,
  input         io_enq_bits_status_dv,
  input  [1:0]  io_enq_bits_status_prv,
  input         io_enq_bits_status_v,
                io_enq_bits_status_sd,
  input  [22:0] io_enq_bits_status_zero2,
  input         io_enq_bits_status_mpv,
                io_enq_bits_status_gva,
                io_enq_bits_status_mbe,
                io_enq_bits_status_sbe,
  input  [1:0]  io_enq_bits_status_sxl,
                io_enq_bits_status_uxl,
  input         io_enq_bits_status_sd_rv32,
  input  [7:0]  io_enq_bits_status_zero1,
  input         io_enq_bits_status_tsr,
                io_enq_bits_status_tw,
                io_enq_bits_status_tvm,
                io_enq_bits_status_mxr,
                io_enq_bits_status_sum,
                io_enq_bits_status_mprv,
  input  [1:0]  io_enq_bits_status_xs,
                io_enq_bits_status_fs,
                io_enq_bits_status_mpp,
                io_enq_bits_status_vs,
  input         io_enq_bits_status_spp,
                io_enq_bits_status_mpie,
                io_enq_bits_status_ube,
                io_enq_bits_status_spie,
                io_enq_bits_status_upie,
                io_enq_bits_status_mie,
                io_enq_bits_status_hie,
                io_enq_bits_status_sie,
                io_enq_bits_status_uie,
                io_enq_bits_pool_en,
                io_enq_bits_store_en,
                io_deq_ready,
  output        io_enq_ready,
                io_deq_valid,
  output [39:0] io_deq_bits_vaddr,
  output        io_deq_bits_laddr_is_acc_addr,
                io_deq_bits_laddr_accumulate,
                io_deq_bits_laddr_read_full_acc_row,
                io_deq_bits_laddr_garbage_bit,
  output [13:0] io_deq_bits_laddr_data,
  output [15:0] io_deq_bits_len,
  output [7:0]  io_deq_bits_block,
  output        io_deq_bits_status_debug,
                io_deq_bits_status_cease,
                io_deq_bits_status_wfi,
  output [31:0] io_deq_bits_status_isa,
  output [1:0]  io_deq_bits_status_dprv,
  output        io_deq_bits_status_dv,
  output [1:0]  io_deq_bits_status_prv,
  output        io_deq_bits_status_v,
                io_deq_bits_status_sd,
  output [22:0] io_deq_bits_status_zero2,
  output        io_deq_bits_status_mpv,
                io_deq_bits_status_gva,
                io_deq_bits_status_mbe,
                io_deq_bits_status_sbe,
  output [1:0]  io_deq_bits_status_sxl,
                io_deq_bits_status_uxl,
  output        io_deq_bits_status_sd_rv32,
  output [7:0]  io_deq_bits_status_zero1,
  output        io_deq_bits_status_tsr,
                io_deq_bits_status_tw,
                io_deq_bits_status_tvm,
                io_deq_bits_status_mxr,
                io_deq_bits_status_sum,
                io_deq_bits_status_mprv,
  output [1:0]  io_deq_bits_status_xs,
                io_deq_bits_status_fs,
                io_deq_bits_status_mpp,
                io_deq_bits_status_vs,
  output        io_deq_bits_status_spp,
                io_deq_bits_status_mpie,
                io_deq_bits_status_ube,
                io_deq_bits_status_spie,
                io_deq_bits_status_upie,
                io_deq_bits_status_mie,
                io_deq_bits_status_hie,
                io_deq_bits_status_sie,
                io_deq_bits_status_uie,
                io_deq_bits_pool_en,
                io_deq_bits_store_en
);

  wire         _io_enq_ready_output;	// @[Decoupled.scala:303:16, :323:{24,39}]
  wire [381:0] _ram_ext_R0_data;	// @[Decoupled.scala:273:95]
  reg  [2:0]   enq_ptr_value;	// @[Counter.scala:61:40]
  reg  [2:0]   deq_ptr_value;	// @[Counter.scala:61:40]
  reg          maybe_full;	// @[Decoupled.scala:276:27]
  wire         ptr_match = enq_ptr_value == deq_ptr_value;	// @[Counter.scala:61:40, Decoupled.scala:277:33]
  wire         empty = ptr_match & ~maybe_full;	// @[Decoupled.scala:276:27, :277:33, :278:{25,28}]
  wire         do_enq = _io_enq_ready_output & io_enq_valid;	// @[Decoupled.scala:51:35, :303:16, :323:{24,39}]
  assign _io_enq_ready_output = io_deq_ready | ~(ptr_match & maybe_full);	// @[Decoupled.scala:276:27, :277:33, :279:24, :303:{16,19}, :323:{24,39}]
  wire         do_deq = io_deq_ready & ~empty;	// @[Decoupled.scala:51:35, :278:25, :302:19]
  always @(posedge clock) begin
    if (reset) begin
      enq_ptr_value <= 3'h0;	// @[Counter.scala:61:40]
      deq_ptr_value <= 3'h0;	// @[Counter.scala:61:40]
      maybe_full <= 1'h0;	// @[Decoupled.scala:276:27]
    end
    else begin
      if (do_enq) begin	// @[Decoupled.scala:51:35]
        if (enq_ptr_value == 3'h4)	// @[Counter.scala:61:40, :73:24]
          enq_ptr_value <= 3'h0;	// @[Counter.scala:61:40]
        else	// @[Counter.scala:73:24]
          enq_ptr_value <= enq_ptr_value + 3'h1;	// @[Counter.scala:61:40, :77:24]
      end
      if (do_deq) begin	// @[Decoupled.scala:51:35]
        if (deq_ptr_value == 3'h4)	// @[Counter.scala:61:40, :73:24]
          deq_ptr_value <= 3'h0;	// @[Counter.scala:61:40]
        else	// @[Counter.scala:73:24]
          deq_ptr_value <= deq_ptr_value + 3'h1;	// @[Counter.scala:61:40, :77:24]
      end
      if (do_enq != do_deq)	// @[Decoupled.scala:51:35, :293:15]
        maybe_full <= do_enq;	// @[Decoupled.scala:51:35, :276:27]
    end
  end // always @(posedge)
  `ifndef SYNTHESIS
    `ifdef FIRRTL_BEFORE_INITIAL
      `FIRRTL_BEFORE_INITIAL
    `endif // FIRRTL_BEFORE_INITIAL
    logic [31:0] _RANDOM_0;
    initial begin
      `ifdef INIT_RANDOM_PROLOG_
        `INIT_RANDOM_PROLOG_
      `endif // INIT_RANDOM_PROLOG_
      `ifdef RANDOMIZE_REG_INIT
        _RANDOM_0 = `RANDOM;
        enq_ptr_value = _RANDOM_0[2:0];	// @[Counter.scala:61:40]
        deq_ptr_value = _RANDOM_0[5:3];	// @[Counter.scala:61:40]
        maybe_full = _RANDOM_0[6];	// @[Counter.scala:61:40, Decoupled.scala:276:27]
      `endif // RANDOMIZE_REG_INIT
    end // initial
    `ifdef FIRRTL_AFTER_INITIAL
      `FIRRTL_AFTER_INITIAL
    `endif // FIRRTL_AFTER_INITIAL
  `endif // not def SYNTHESIS
  ram_combMem_48 ram_ext (	// @[Decoupled.scala:273:95]
    .R0_addr (deq_ptr_value),	// @[Counter.scala:61:40]
    .R0_en   (1'h1),
    .R0_clk  (clock),
    .W0_addr (enq_ptr_value),	// @[Counter.scala:61:40]
    .W0_en   (do_enq),	// @[Decoupled.scala:51:35]
    .W0_clk  (clock),
    .W0_data ({io_enq_bits_store_en, io_enq_bits_pool_en, io_enq_bits_status_uie, io_enq_bits_status_sie, io_enq_bits_status_hie, io_enq_bits_status_mie, io_enq_bits_status_upie, io_enq_bits_status_spie, io_enq_bits_status_ube, io_enq_bits_status_mpie, io_enq_bits_status_spp, io_enq_bits_status_vs, io_enq_bits_status_mpp, io_enq_bits_status_fs, io_enq_bits_status_xs, io_enq_bits_status_mprv, io_enq_bits_status_sum, io_enq_bits_status_mxr, io_enq_bits_status_tvm, io_enq_bits_status_tw, io_enq_bits_status_tsr, io_enq_bits_status_zero1, io_enq_bits_status_sd_rv32, io_enq_bits_status_uxl, io_enq_bits_status_sxl, io_enq_bits_status_sbe, io_enq_bits_status_mbe, io_enq_bits_status_gva, io_enq_bits_status_mpv, io_enq_bits_status_zero2, io_enq_bits_status_sd, io_enq_bits_status_v, io_enq_bits_status_prv, io_enq_bits_status_dv, io_enq_bits_status_dprv, io_enq_bits_status_isa, io_enq_bits_status_wfi, io_enq_bits_status_cease, io_enq_bits_status_debug, io_enq_bits_cmd_id, io_enq_bits_block, io_enq_bits_len, io_enq_bits_acc_norm_stats_id, io_enq_bits_acc_iexp_qln2_inv, io_enq_bits_acc_iexp_qln2, io_enq_bits_acc_igelu_qc, io_enq_bits_acc_igelu_qb, io_enq_bits_acc_scale, io_enq_bits_acc_act, io_enq_bits_laddr_data, io_enq_bits_laddr_garbage_bit, io_enq_bits_laddr_garbage, io_enq_bits_laddr_norm_cmd, io_enq_bits_laddr_read_full_acc_row, io_enq_bits_laddr_accumulate, io_enq_bits_laddr_is_acc_addr, io_enq_bits_vaddr}),	// @[Decoupled.scala:273:95]
    .R0_data (_ram_ext_R0_data)
  );
  assign io_enq_ready = _io_enq_ready_output;	// @[Decoupled.scala:303:16, :323:{24,39}]
  assign io_deq_valid = ~empty;	// @[Decoupled.scala:278:25, :302:19]
  assign io_deq_bits_vaddr = _ram_ext_R0_data[39:0];	// @[Decoupled.scala:273:95]
  assign io_deq_bits_laddr_is_acc_addr = _ram_ext_R0_data[40];	// @[Decoupled.scala:273:95]
  assign io_deq_bits_laddr_accumulate = _ram_ext_R0_data[41];	// @[Decoupled.scala:273:95]
  assign io_deq_bits_laddr_read_full_acc_row = _ram_ext_R0_data[42];	// @[Decoupled.scala:273:95]
  assign io_deq_bits_laddr_garbage_bit = _ram_ext_R0_data[57];	// @[Decoupled.scala:273:95]
  assign io_deq_bits_laddr_data = _ram_ext_R0_data[71:58];	// @[Decoupled.scala:273:95]
  assign io_deq_bits_len = _ram_ext_R0_data[258:243];	// @[Decoupled.scala:273:95]
  assign io_deq_bits_block = _ram_ext_R0_data[266:259];	// @[Decoupled.scala:273:95]
  assign io_deq_bits_status_debug = _ram_ext_R0_data[275];	// @[Decoupled.scala:273:95]
  assign io_deq_bits_status_cease = _ram_ext_R0_data[276];	// @[Decoupled.scala:273:95]
  assign io_deq_bits_status_wfi = _ram_ext_R0_data[277];	// @[Decoupled.scala:273:95]
  assign io_deq_bits_status_isa = _ram_ext_R0_data[309:278];	// @[Decoupled.scala:273:95]
  assign io_deq_bits_status_dprv = _ram_ext_R0_data[311:310];	// @[Decoupled.scala:273:95]
  assign io_deq_bits_status_dv = _ram_ext_R0_data[312];	// @[Decoupled.scala:273:95]
  assign io_deq_bits_status_prv = _ram_ext_R0_data[314:313];	// @[Decoupled.scala:273:95]
  assign io_deq_bits_status_v = _ram_ext_R0_data[315];	// @[Decoupled.scala:273:95]
  assign io_deq_bits_status_sd = _ram_ext_R0_data[316];	// @[Decoupled.scala:273:95]
  assign io_deq_bits_status_zero2 = _ram_ext_R0_data[339:317];	// @[Decoupled.scala:273:95]
  assign io_deq_bits_status_mpv = _ram_ext_R0_data[340];	// @[Decoupled.scala:273:95]
  assign io_deq_bits_status_gva = _ram_ext_R0_data[341];	// @[Decoupled.scala:273:95]
  assign io_deq_bits_status_mbe = _ram_ext_R0_data[342];	// @[Decoupled.scala:273:95]
  assign io_deq_bits_status_sbe = _ram_ext_R0_data[343];	// @[Decoupled.scala:273:95]
  assign io_deq_bits_status_sxl = _ram_ext_R0_data[345:344];	// @[Decoupled.scala:273:95]
  assign io_deq_bits_status_uxl = _ram_ext_R0_data[347:346];	// @[Decoupled.scala:273:95]
  assign io_deq_bits_status_sd_rv32 = _ram_ext_R0_data[348];	// @[Decoupled.scala:273:95]
  assign io_deq_bits_status_zero1 = _ram_ext_R0_data[356:349];	// @[Decoupled.scala:273:95]
  assign io_deq_bits_status_tsr = _ram_ext_R0_data[357];	// @[Decoupled.scala:273:95]
  assign io_deq_bits_status_tw = _ram_ext_R0_data[358];	// @[Decoupled.scala:273:95]
  assign io_deq_bits_status_tvm = _ram_ext_R0_data[359];	// @[Decoupled.scala:273:95]
  assign io_deq_bits_status_mxr = _ram_ext_R0_data[360];	// @[Decoupled.scala:273:95]
  assign io_deq_bits_status_sum = _ram_ext_R0_data[361];	// @[Decoupled.scala:273:95]
  assign io_deq_bits_status_mprv = _ram_ext_R0_data[362];	// @[Decoupled.scala:273:95]
  assign io_deq_bits_status_xs = _ram_ext_R0_data[364:363];	// @[Decoupled.scala:273:95]
  assign io_deq_bits_status_fs = _ram_ext_R0_data[366:365];	// @[Decoupled.scala:273:95]
  assign io_deq_bits_status_mpp = _ram_ext_R0_data[368:367];	// @[Decoupled.scala:273:95]
  assign io_deq_bits_status_vs = _ram_ext_R0_data[370:369];	// @[Decoupled.scala:273:95]
  assign io_deq_bits_status_spp = _ram_ext_R0_data[371];	// @[Decoupled.scala:273:95]
  assign io_deq_bits_status_mpie = _ram_ext_R0_data[372];	// @[Decoupled.scala:273:95]
  assign io_deq_bits_status_ube = _ram_ext_R0_data[373];	// @[Decoupled.scala:273:95]
  assign io_deq_bits_status_spie = _ram_ext_R0_data[374];	// @[Decoupled.scala:273:95]
  assign io_deq_bits_status_upie = _ram_ext_R0_data[375];	// @[Decoupled.scala:273:95]
  assign io_deq_bits_status_mie = _ram_ext_R0_data[376];	// @[Decoupled.scala:273:95]
  assign io_deq_bits_status_hie = _ram_ext_R0_data[377];	// @[Decoupled.scala:273:95]
  assign io_deq_bits_status_sie = _ram_ext_R0_data[378];	// @[Decoupled.scala:273:95]
  assign io_deq_bits_status_uie = _ram_ext_R0_data[379];	// @[Decoupled.scala:273:95]
  assign io_deq_bits_pool_en = _ram_ext_R0_data[380];	// @[Decoupled.scala:273:95]
  assign io_deq_bits_store_en = _ram_ext_R0_data[381];	// @[Decoupled.scala:273:95]
endmodule

