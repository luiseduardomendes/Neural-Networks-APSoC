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

module LoopConvExecute(
  input         clock,
                reset,
                io_req_valid,
  input  [15:0] io_req_bits_outer_bounds_stride,
                io_req_bits_outer_bounds_kernel_dilation,
                io_req_bits_inner_bounds_batches,
                io_req_bits_inner_bounds_krows,
                io_req_bits_inner_bounds_kcols,
                io_req_bits_inner_bounds_kchs,
                io_req_bits_inner_bounds_lpad,
                io_req_bits_inner_bounds_upad,
                io_req_bits_inner_bounds_orows,
                io_req_bits_inner_bounds_ocols,
                io_req_bits_derived_params_ochs,
                io_req_bits_derived_params_irows,
                io_req_bits_derived_params_icols,
                io_req_bits_derived_params_out_channels_per_bank,
                io_req_bits_derived_params_in_channels_per_bank,
                io_req_bits_derived_params_input_spad_stride,
  input  [13:0] io_req_bits_a_addr_start,
  input  [14:0] io_req_bits_b_addr_end,
  input  [9:0]  io_req_bits_c_addr_start,
  input         io_req_bits_wrot180,
                io_req_bits_downsample,
  input  [15:0] io_req_bits_max_pixels_per_row,
  input         io_req_bits_input_dilated,
                io_req_bits_trans_weight_0132,
                io_req_bits_trans_input_3120,
                io_req_bits_loop_id,
                io_cmd_ready,
                io_lda_completed,
                io_ldb_completed,
                io_ldd_completed,
                io_rob_overloaded,
  output        io_req_ready,
                io_cmd_valid,
  output [6:0]  io_cmd_bits_inst_funct,
  output [4:0]  io_cmd_bits_inst_rs2,
                io_cmd_bits_inst_rs1,
  output        io_cmd_bits_inst_xd,
                io_cmd_bits_inst_xs1,
                io_cmd_bits_inst_xs2,
  output [4:0]  io_cmd_bits_inst_rd,
  output [6:0]  io_cmd_bits_inst_opcode,
  output [63:0] io_cmd_bits_rs1,
                io_cmd_bits_rs2,
  output        io_idle,
                io_loop_id
);

  wire        _command_p_io_in_ready;	// @[LoopConv.scala:681:25]
  wire        _command_p_io_out_valid;	// @[LoopConv.scala:681:25]
  wire [6:0]  _command_p_io_out_bits_cmd_inst_funct;	// @[LoopConv.scala:681:25]
  wire [63:0] _command_p_io_out_bits_cmd_rs1;	// @[LoopConv.scala:681:25]
  wire [63:0] _command_p_io_out_bits_cmd_rs2;	// @[LoopConv.scala:681:25]
  wire [51:0] _command_p_io_out_bits_a_addr;	// @[LoopConv.scala:681:25]
  wire [67:0] _command_p_io_out_bits_b_addr;	// @[LoopConv.scala:681:25]
  wire [67:0] _command_p_io_out_bits_c_addr;	// @[LoopConv.scala:681:25]
  wire [16:0] _command_p_io_out_bits_I;	// @[LoopConv.scala:681:25]
  wire [15:0] _command_p_io_out_bits_J;	// @[LoopConv.scala:681:25]
  wire [31:0] _command_p_io_out_bits_K;	// @[LoopConv.scala:681:25]
  wire        _command_p_io_out_bits_new_weights;	// @[LoopConv.scala:681:25]
  wire        _command_p_io_busy;	// @[LoopConv.scala:681:25]
  reg  [1:0]  state;	// @[LoopConv.scala:608:22]
  reg  [15:0] req_outer_bounds_stride;	// @[LoopConv.scala:610:16]
  reg  [15:0] req_outer_bounds_kernel_dilation;	// @[LoopConv.scala:610:16]
  reg  [15:0] req_inner_bounds_batches;	// @[LoopConv.scala:610:16]
  reg  [15:0] req_inner_bounds_krows;	// @[LoopConv.scala:610:16]
  reg  [15:0] req_inner_bounds_kcols;	// @[LoopConv.scala:610:16]
  reg  [15:0] req_inner_bounds_kchs;	// @[LoopConv.scala:610:16]
  reg  [15:0] req_inner_bounds_lpad;	// @[LoopConv.scala:610:16]
  reg  [15:0] req_inner_bounds_upad;	// @[LoopConv.scala:610:16]
  reg  [15:0] req_inner_bounds_orows;	// @[LoopConv.scala:610:16]
  reg  [15:0] req_inner_bounds_ocols;	// @[LoopConv.scala:610:16]
  reg  [15:0] req_derived_params_ochs;	// @[LoopConv.scala:610:16]
  reg  [15:0] req_derived_params_irows;	// @[LoopConv.scala:610:16]
  reg  [15:0] req_derived_params_icols;	// @[LoopConv.scala:610:16]
  reg  [15:0] req_derived_params_out_channels_per_bank;	// @[LoopConv.scala:610:16]
  reg  [15:0] req_derived_params_in_channels_per_bank;	// @[LoopConv.scala:610:16]
  reg  [15:0] req_derived_params_input_spad_stride;	// @[LoopConv.scala:610:16]
  reg  [13:0] req_a_addr_start;	// @[LoopConv.scala:610:16]
  reg  [14:0] req_b_addr_end;	// @[LoopConv.scala:610:16]
  reg  [9:0]  req_c_addr_start;	// @[LoopConv.scala:610:16]
  reg         req_wrot180;	// @[LoopConv.scala:610:16]
  reg         req_downsample;	// @[LoopConv.scala:610:16]
  reg  [15:0] req_max_pixels_per_row;	// @[LoopConv.scala:610:16]
  reg         req_input_dilated;	// @[LoopConv.scala:610:16]
  reg         req_trans_weight_0132;	// @[LoopConv.scala:610:16]
  reg         req_trans_input_3120;	// @[LoopConv.scala:610:16]
  reg         req_loop_id;	// @[LoopConv.scala:610:16]
  wire [31:0] _GEN = {16'h0, req_inner_bounds_kcols};	// @[LoopConv.scala:610:16, :619:64, :695:18]
  wire [47:0] _GEN_0 = {32'h0, req_inner_bounds_krows};	// @[LoopConv.scala:610:16, :619:72, :685:14]
  wire [63:0] _GEN_1 = {48'h0, req_derived_params_ochs};	// @[LoopConv.scala:610:16, :619:80]
  wire [63:0] _GEN_2 = {48'h0, req_inner_bounds_kchs};	// @[LoopConv.scala:610:16, :619:80, :620:43]
  reg  [15:0] och;	// @[LoopConv.scala:627:16]
  reg  [15:0] krow;	// @[LoopConv.scala:628:17]
  reg  [15:0] kcol;	// @[LoopConv.scala:629:17]
  reg  [15:0] kch;	// @[LoopConv.scala:630:16]
  reg  [15:0] b;	// @[LoopConv.scala:631:14]
  reg  [15:0] orow;	// @[LoopConv.scala:632:17]
  reg  [15:0] ocol;	// @[LoopConv.scala:633:17]
  wire [31:0] _GEN_3 = {16'h0, req_outer_bounds_kernel_dilation};	// @[LoopConv.scala:610:16, :636:69, :695:18]
  wire [31:0] _irow_T_1 = {16'h0, krow} * _GEN_3;	// @[LoopConv.scala:628:17, :636:69, :695:18]
  wire [31:0] _icol_T_1 = {16'h0, kcol} * _GEN_3;	// @[LoopConv.scala:629:17, :636:69, :637:12, :695:18]
  wire        skip_iteration = state[1] & req_input_dilated & (_irow_T_1[0] + orow[0] - req_inner_bounds_upad[0] & req_input_dilated | _icol_T_1[0] + ocol[0] - req_inner_bounds_lpad[0] & req_input_dilated);	// @[LoopConv.scala:608:22, :610:16, :632:17, :633:17, :636:{30,58,69,87,95,107,135}, :637:{12,30,38,50}]
  wire [15:0] _pixels_T_1 = req_inner_bounds_kcols - kcol;	// @[LoopConv.scala:610:16, :629:17, :639:26]
  wire [31:0] _GEN_4 = {16'h0, orow};	// @[LoopConv.scala:632:17, :641:29, :695:18]
  wire [31:0] _GEN_5 = {16'h0, req_outer_bounds_stride};	// @[LoopConv.scala:610:16, :641:29, :695:18]
  wire [33:0] _GEN_6 = {33'h0, req_input_dilated};	// @[LoopConv.scala:610:16, :616:37]
  wire [15:0] _I_T_1 = req_inner_bounds_batches - b;	// @[LoopConv.scala:610:16, :631:14, :645:17]
  wire [15:0] _I_T_7 = req_inner_bounds_ocols - ocol;	// @[LoopConv.scala:610:16, :633:17, :646:25]
  wire [5:0]  _ocol_it_T_1 = 6'h10 << req_input_dilated;	// @[LoopConv.scala:610:16, :646:48]
  wire [15:0] _GEN_7 = {10'h0, _ocol_it_T_1};	// @[LoopConv.scala:646:{32,48}]
  wire [16:0] _GEN_8 = {16'h0, req_input_dilated};	// @[LoopConv.scala:610:16, :616:37, :695:18]
  wire [15:0] _J_T_1 = req_derived_params_ochs - och;	// @[LoopConv.scala:610:16, :627:16, :647:20]
  wire [15:0] _K_T_1 = req_inner_bounds_kchs - kch;	// @[LoopConv.scala:610:16, :630:16, :648:29]
  wire [31:0] _GEN_9 = {16'h0, req_derived_params_input_spad_stride};	// @[LoopConv.scala:610:16, :652:40, :695:18]
  wire [32:0] _GEN_10 = {19'h0, req_a_addr_start};	// @[LoopConv.scala:610:16, :652:18]
  wire [15:0] _GEN_11 = {15'h0, req_downsample};	// @[LoopConv.scala:610:16, :652:76]
  wire [31:0] _GEN_12 = {16'h0, req_derived_params_irows >> _GEN_11};	// @[LoopConv.scala:610:16, :652:{67,76}, :695:18]
  wire [15:0] _a_addr_T_23 = req_derived_params_icols >> _GEN_11;	// @[LoopConv.scala:610:16, :652:{76,104}]
  wire [47:0] _GEN_13 = {32'h0, _a_addr_T_23};	// @[LoopConv.scala:652:{95,104}, :685:14]
  wire [33:0] _GEN_14 = {33'h0, req_downsample};	// @[LoopConv.scala:610:16, :616:37, :652:132]
  wire [49:0] _GEN_15 = {16'h0, {1'h0, {1'h0, _GEN_4 * _GEN_5} + {1'h0, _irow_T_1}} + _GEN_6 >> _GEN_6 >> _GEN_14};	// @[LoopConv.scala:608:22, :616:{37,59}, :636:{69,87}, :641:{29,38}, :652:{132,151}, :695:18]
  wire [49:0] _GEN_16 = {34'h0, _a_addr_T_23};	// @[LoopConv.scala:652:{104,151}]
  wire [51:0] _GEN_17 = {18'h0, {1'h0, {1'h0, {16'h0, ocol} * _GEN_5} + {1'h0, _icol_T_1}} + _GEN_6 >> _GEN_6 >> _GEN_14};	// @[LoopConv.scala:608:22, :616:{37,59}, :633:17, :636:95, :637:{12,30}, :641:29, :642:{29,38}, :652:{132,179,188}, :695:18]
  wire [31:0] _GEN_18 = {16'h0, kch / 16'h10};	// @[LoopConv.scala:630:16, :653:{26,58}, :695:18]
  wire [31:0] _GEN_19 = {16'h0, b};	// @[LoopConv.scala:631:14, :653:83, :695:18]
  wire [31:0] _GEN_20 = {16'h0, och / 16'h10};	// @[LoopConv.scala:627:16, :653:26, :660:{10,42}, :695:18]
  reg         new_weights;	// @[LoopConv.scala:663:24]
  wire [31:0] _GEN_21 = {16'h0, req_inner_bounds_krows};	// @[LoopConv.scala:610:16, :668:58, :695:18]
  wire [47:0] _GEN_22 = {32'h0, req_inner_bounds_kcols};	// @[LoopConv.scala:610:16, :668:66, :685:14]
  wire [64:0] _GEN_23 = {1'h0, {49'h0, req_b_addr_end} - (req_trans_weight_0132 ? {16'h0, {16'h0, {16'h0, req_derived_params_in_channels_per_bank} * _GEN} * _GEN_0} * _GEN_1 : {16'h0, {16'h0, {16'h0, req_derived_params_out_channels_per_bank} * _GEN} * _GEN_0} * _GEN_2)};	// @[LoopConv.scala:608:22, :610:16, :619:{19,64,72,80}, :620:{27,35,43}, :623:37, :668:18, :695:18]
  wire [47:0] _GEN_24 = {16'h0, {16'h0, req_wrot180 ? req_inner_bounds_krows - krow - 16'h1 : krow} * _GEN};	// @[LoopConv.scala:610:16, :619:64, :628:17, :664:{21,41,48}, :668:{93,101}, :695:18]
  wire [31:0] _GEN_25 = {16'h0, req_wrot180 ? _pixels_T_1 - 16'h1 : kcol};	// @[LoopConv.scala:610:16, :629:17, :639:26, :665:{21,48}, :668:120, :695:18]
  wire        _io_idle_T = state == 2'h0;	// @[LoopConv.scala:608:22, :685:14, :716:25]
  wire        _io_req_ready_output = _io_idle_T & ~_command_p_io_busy;	// @[LoopConv.scala:681:25, :716:{25,34,37}]
  wire        _command_p_io_in_valid_T_3 = (|state) & ~skip_iteration & io_lda_completed & io_ldb_completed & io_ldd_completed;	// @[LoopConv.scala:608:22, :636:58, :720:{34,46,62}]
  wire        _T_8 = state == 2'h2;	// @[LoopConv.scala:608:22, :636:30, :721:62]
  wire        _GEN_26 = _T_8 | (&state);	// @[LoopConv.scala:608:22, :721:{62,90}, Mux.scala:101:16]
  wire        _T = _command_p_io_out_bits_cmd_inst_funct == 7'h6;	// @[LoopConv.scala:681:25, :703:22, :733:46]
  wire        _T_5 = _command_p_io_in_ready & _command_p_io_in_valid_T_3;	// @[Decoupled.scala:51:35, LoopConv.scala:681:25, :720:62]
  wire        _T_6 = _T_5 | skip_iteration;	// @[Decoupled.scala:51:35, LoopConv.scala:636:58, :775:30]
  wire        _T_7 = state == 2'h1;	// @[LoopConv.scala:608:22, :776:17, :817:17]
  wire [16:0] _next_ocol_T_3 = {1'h0, ocol} + {11'h0, skip_iteration | req_trans_input_3120 ? 6'h1 : _ocol_it_T_1};	// @[LoopConv.scala:608:22, :610:16, :633:17, :636:58, :646:{25,48}, :737:17, :782:{24,40}, Util.scala:41:15]
  wire        _next_ocol_T_4 = _next_ocol_T_3 > {1'h0, req_inner_bounds_ocols - 16'h1};	// @[LoopConv.scala:608:22, :610:16, Util.scala:39:28, :41:15, :43:17]
  wire [15:0] next_ocol = _next_ocol_T_4 ? 16'h0 : _next_ocol_T_3[15:0];	// @[LoopConv.scala:695:18, Mux.scala:101:16, Util.scala:41:15, :43:17]
  wire [16:0] _next_orow_T_4 = {1'h0, orow} + 17'h1;	// @[LoopConv.scala:608:22, :632:17, :664:48, Util.scala:41:15]
  wire        _next_orow_T_5 = _next_orow_T_4 > {1'h0, req_inner_bounds_orows - 16'h1};	// @[LoopConv.scala:608:22, :610:16, Util.scala:39:28, :41:15, :43:17]
  wire        _state_T_9 = ((|next_ocol) ? orow : _next_orow_T_5 ? 16'h0 : _next_orow_T_4[15:0]) == 16'h0;	// @[LoopConv.scala:632:17, :695:18, :785:60, :786:57, Mux.scala:101:16, Util.scala:41:15, :43:17]
  wire        _next_b_T_2 = _state_T_9 & ~(|next_ocol);	// @[LoopConv.scala:785:60, :786:{57,65}, Mux.scala:101:16]
  wire [16:0] _next_b_T_6 = {1'h0, b} + {12'h0, req_trans_input_3120 ? 5'h10 : 5'h1};	// @[LoopConv.scala:608:22, :610:16, :631:14, :645:{17,21}, :781:21, Util.scala:41:15]
  wire        _next_b_T_7 = _next_b_T_6 > {1'h0, req_inner_bounds_batches - 16'h1};	// @[LoopConv.scala:608:22, :610:16, Util.scala:39:28, :41:15, :43:17]
  wire        _state_T_7 = (_next_b_T_2 ? (_next_b_T_7 ? 16'h0 : _next_b_T_6[15:0]) : b) == 16'h0;	// @[LoopConv.scala:631:14, :695:18, :786:65, :788:16, Mux.scala:101:16, Util.scala:41:15, :43:17]
  wire        _next_kch_T_4 = _state_T_7 & _state_T_9 & ~(|next_ocol);	// @[LoopConv.scala:785:60, :786:57, :788:{16,45}, Mux.scala:101:16]
  wire [16:0] _next_kch_T_8 = {1'h0, kch} + 17'h10;	// @[LoopConv.scala:608:22, :630:16, :648:29, Util.scala:41:15]
  wire        _next_kch_T_9 = _next_kch_T_8 > {1'h0, req_inner_bounds_kchs - 16'h1};	// @[LoopConv.scala:608:22, :610:16, Util.scala:39:28, :41:15, :43:17]
  wire        _state_T_5 = (_next_kch_T_4 ? (_next_kch_T_9 ? 16'h0 : _next_kch_T_8[15:0]) : kch) == 16'h0;	// @[LoopConv.scala:630:16, :695:18, :788:45, :790:18, Mux.scala:101:16, Util.scala:41:15, :43:17]
  wire        _next_kcol_T_6 = _state_T_5 & _state_T_7 & _state_T_9 & ~(|next_ocol);	// @[LoopConv.scala:785:60, :786:57, :788:16, :790:{18,65}, Mux.scala:101:16]
  wire [16:0] _next_kcol_T_10 = {1'h0, kcol} + {1'h0, req_max_pixels_per_row};	// @[LoopConv.scala:608:22, :610:16, :629:17, :639:26, Util.scala:41:15]
  wire        _next_kcol_T_11 = _next_kcol_T_10 > {1'h0, req_inner_bounds_kcols - 16'h1};	// @[LoopConv.scala:608:22, :610:16, Util.scala:39:28, :41:15, :43:17]
  wire        _state_T_3 = (_next_kcol_T_6 ? (_next_kcol_T_11 ? 16'h0 : _next_kcol_T_10[15:0]) : kcol) == 16'h0;	// @[LoopConv.scala:629:17, :695:18, :790:65, :792:19, Mux.scala:101:16, Util.scala:41:15, :43:17]
  wire        _next_krow_T_8 = _state_T_3 & _state_T_5 & _state_T_7 & _state_T_9 & ~(|next_ocol);	// @[LoopConv.scala:785:60, :786:57, :788:16, :790:18, :792:{19,86}, Mux.scala:101:16]
  wire [16:0] _next_krow_T_12 = {1'h0, krow} + 17'h1;	// @[LoopConv.scala:608:22, :628:17, :664:{41,48}, Util.scala:41:15]
  wire        _next_krow_T_13 = _next_krow_T_12 > {1'h0, req_inner_bounds_krows - 16'h1};	// @[LoopConv.scala:608:22, :610:16, Util.scala:39:28, :41:15, :43:17]
  wire        _state_T_1 = (_next_krow_T_8 ? (_next_krow_T_13 ? 16'h0 : _next_krow_T_12[15:0]) : krow) == 16'h0;	// @[LoopConv.scala:628:17, :695:18, :792:86, :793:66, Mux.scala:101:16, Util.scala:41:15, :43:17]
  wire        _next_och_T_10 = _state_T_1 & _state_T_3 & _state_T_5 & _state_T_7 & _state_T_9 & ~(|next_ocol);	// @[LoopConv.scala:785:60, :786:57, :788:16, :790:18, :792:19, :793:66, :794:86, Mux.scala:101:16]
  wire [16:0] _next_och_T_14 = {1'h0, och} + 17'h10;	// @[LoopConv.scala:608:22, :627:16, :647:20, Util.scala:41:15]
  wire        _next_och_T_15 = _next_och_T_14 > {1'h0, req_derived_params_ochs - 16'h1};	// @[LoopConv.scala:608:22, :610:16, Util.scala:39:28, :41:15, :43:17]
  wire        _GEN_27 = _T_7 | _T_8;	// @[LoopConv.scala:633:17, :721:62, :776:{17,29}, :778:32, :796:12]
  wire        _T_14 = _io_req_ready_output & io_req_valid;	// @[Decoupled.scala:51:35, LoopConv.scala:716:34]
  always @(posedge clock) begin
    if (reset)
      state <= 2'h0;	// @[LoopConv.scala:608:22, :685:14]
    else if (_T_14) begin	// @[Decoupled.scala:51:35]
      if (io_req_bits_trans_input_3120)
        state <= 2'h1;	// @[LoopConv.scala:608:22, :817:17]
      else
        state <= 2'h2;	// @[LoopConv.scala:608:22, :636:30]
    end
    else if (_T_6) begin	// @[LoopConv.scala:775:30]
      if (_T_7)	// @[LoopConv.scala:776:17]
        state <= 2'h2;	// @[LoopConv.scala:608:22, :636:30]
      else if (_T_8)	// @[LoopConv.scala:721:62]
        state <= 2'h3;	// @[LoopConv.scala:608:22, :721:90]
      else	// @[LoopConv.scala:721:62]
        state <= {~((_next_och_T_10 ? (_next_och_T_15 ? 16'h0 : _next_och_T_14[15:0]) : och) == 16'h0 & _state_T_1 & _state_T_3 & _state_T_5 & _state_T_7 & _state_T_9 & ~(|next_ocol)), 1'h0};	// @[LoopConv.scala:608:22, :627:16, :695:18, :785:60, :786:57, :788:16, :790:18, :792:19, :793:66, :794:86, :808:{19,29}, :809:27, Mux.scala:101:16, Util.scala:41:15, :43:17]
    end
    if (_T_14) begin	// @[Decoupled.scala:51:35]
      req_outer_bounds_stride <= io_req_bits_outer_bounds_stride;	// @[LoopConv.scala:610:16]
      req_outer_bounds_kernel_dilation <= io_req_bits_outer_bounds_kernel_dilation;	// @[LoopConv.scala:610:16]
      req_inner_bounds_batches <= io_req_bits_inner_bounds_batches;	// @[LoopConv.scala:610:16]
      req_inner_bounds_krows <= io_req_bits_inner_bounds_krows;	// @[LoopConv.scala:610:16]
      req_inner_bounds_kcols <= io_req_bits_inner_bounds_kcols;	// @[LoopConv.scala:610:16]
      req_inner_bounds_kchs <= io_req_bits_inner_bounds_kchs;	// @[LoopConv.scala:610:16]
      req_inner_bounds_lpad <= io_req_bits_inner_bounds_lpad;	// @[LoopConv.scala:610:16]
      req_inner_bounds_upad <= io_req_bits_inner_bounds_upad;	// @[LoopConv.scala:610:16]
      req_inner_bounds_orows <= io_req_bits_inner_bounds_orows;	// @[LoopConv.scala:610:16]
      req_inner_bounds_ocols <= io_req_bits_inner_bounds_ocols;	// @[LoopConv.scala:610:16]
      req_derived_params_ochs <= io_req_bits_derived_params_ochs;	// @[LoopConv.scala:610:16]
      req_derived_params_irows <= io_req_bits_derived_params_irows;	// @[LoopConv.scala:610:16]
      req_derived_params_icols <= io_req_bits_derived_params_icols;	// @[LoopConv.scala:610:16]
      req_derived_params_out_channels_per_bank <= io_req_bits_derived_params_out_channels_per_bank;	// @[LoopConv.scala:610:16]
      req_derived_params_in_channels_per_bank <= io_req_bits_derived_params_in_channels_per_bank;	// @[LoopConv.scala:610:16]
      req_derived_params_input_spad_stride <= io_req_bits_derived_params_input_spad_stride;	// @[LoopConv.scala:610:16]
      req_a_addr_start <= io_req_bits_a_addr_start;	// @[LoopConv.scala:610:16]
      req_b_addr_end <= io_req_bits_b_addr_end;	// @[LoopConv.scala:610:16]
      req_c_addr_start <= io_req_bits_c_addr_start;	// @[LoopConv.scala:610:16]
      req_wrot180 <= io_req_bits_wrot180;	// @[LoopConv.scala:610:16]
      req_downsample <= io_req_bits_downsample;	// @[LoopConv.scala:610:16]
      req_max_pixels_per_row <= io_req_bits_max_pixels_per_row;	// @[LoopConv.scala:610:16]
      req_input_dilated <= io_req_bits_input_dilated;	// @[LoopConv.scala:610:16]
      req_trans_weight_0132 <= io_req_bits_trans_weight_0132;	// @[LoopConv.scala:610:16]
      req_trans_input_3120 <= io_req_bits_trans_input_3120;	// @[LoopConv.scala:610:16]
      req_loop_id <= io_req_bits_loop_id;	// @[LoopConv.scala:610:16]
      och <= 16'h0;	// @[LoopConv.scala:627:16, :695:18]
      krow <= 16'h0;	// @[LoopConv.scala:628:17, :695:18]
      kcol <= 16'h0;	// @[LoopConv.scala:629:17, :695:18]
      kch <= 16'h0;	// @[LoopConv.scala:630:16, :695:18]
      b <= 16'h0;	// @[LoopConv.scala:631:14, :695:18]
      orow <= 16'h0;	// @[LoopConv.scala:632:17, :695:18]
      ocol <= 16'h0;	// @[LoopConv.scala:633:17, :695:18]
    end
    else begin	// @[Decoupled.scala:51:35]
      if (~_T_6 | _T_7 | _T_8 | ~_next_och_T_10) begin	// @[LoopConv.scala:627:16, :633:17, :721:62, :775:{30,49}, :776:{17,29}, :794:86, Util.scala:42:8]
      end
      else if (_next_och_T_15)	// @[Util.scala:43:17]
        och <= 16'h0;	// @[LoopConv.scala:627:16, :695:18]
      else	// @[Util.scala:43:17]
        och <= _next_och_T_14[15:0];	// @[LoopConv.scala:627:16, Util.scala:41:15]
      if (~_T_6 | _T_7 | _T_8 | ~_next_krow_T_8) begin	// @[LoopConv.scala:628:17, :633:17, :721:62, :775:{30,49}, :776:{17,29}, :792:86, Util.scala:42:8]
      end
      else if (_next_krow_T_13)	// @[Util.scala:43:17]
        krow <= 16'h0;	// @[LoopConv.scala:628:17, :695:18]
      else	// @[Util.scala:43:17]
        krow <= _next_krow_T_12[15:0];	// @[LoopConv.scala:628:17, Util.scala:41:15]
      if (~_T_6 | _T_7 | _T_8 | ~_next_kcol_T_6) begin	// @[LoopConv.scala:629:17, :633:17, :721:62, :775:{30,49}, :776:{17,29}, :790:65, Util.scala:42:8]
      end
      else if (_next_kcol_T_11)	// @[Util.scala:43:17]
        kcol <= 16'h0;	// @[LoopConv.scala:629:17, :695:18]
      else	// @[Util.scala:43:17]
        kcol <= _next_kcol_T_10[15:0];	// @[LoopConv.scala:629:17, Util.scala:41:15]
      if (~_T_6 | _T_7 | _T_8 | ~_next_kch_T_4) begin	// @[LoopConv.scala:630:16, :633:17, :721:62, :775:{30,49}, :776:{17,29}, :788:45, Util.scala:42:8]
      end
      else if (_next_kch_T_9)	// @[Util.scala:43:17]
        kch <= 16'h0;	// @[LoopConv.scala:630:16, :695:18]
      else	// @[Util.scala:43:17]
        kch <= _next_kch_T_8[15:0];	// @[LoopConv.scala:630:16, Util.scala:41:15]
      if (~_T_6 | _T_7 | _T_8 | ~_next_b_T_2) begin	// @[LoopConv.scala:631:14, :633:17, :721:62, :775:{30,49}, :776:{17,29}, :786:65, Util.scala:42:8]
      end
      else if (_next_b_T_7)	// @[Util.scala:43:17]
        b <= 16'h0;	// @[LoopConv.scala:631:14, :695:18]
      else	// @[Util.scala:43:17]
        b <= _next_b_T_6[15:0];	// @[LoopConv.scala:631:14, Util.scala:41:15]
      if (~_T_6 | _T_7 | _T_8 | (|next_ocol)) begin	// @[LoopConv.scala:632:17, :633:17, :721:62, :775:{30,49}, :776:{17,29}, :785:60, Mux.scala:101:16]
      end
      else if (_next_orow_T_5)	// @[Util.scala:43:17]
        orow <= 16'h0;	// @[LoopConv.scala:632:17, :695:18]
      else	// @[Util.scala:43:17]
        orow <= _next_orow_T_4[15:0];	// @[LoopConv.scala:632:17, Util.scala:41:15]
      if (~_T_6 | _GEN_27) begin	// @[LoopConv.scala:633:17, :775:{30,49}, :776:29, :778:32, :796:12]
      end
      else if (_next_ocol_T_4)	// @[Util.scala:43:17]
        ocol <= 16'h0;	// @[LoopConv.scala:633:17, :695:18]
      else	// @[Util.scala:43:17]
        ocol <= _next_ocol_T_3[15:0];	// @[LoopConv.scala:633:17, Util.scala:41:15]
    end
    new_weights <= _T_14 | _T_6 & ~_GEN_27 & _state_T_7 & _state_T_9 & ~(|next_ocol) | ~((&state) & _T_5) & new_weights;	// @[Decoupled.scala:51:35, LoopConv.scala:608:22, :633:17, :663:24, :721:90, :770:{24,49}, :771:17, :775:{30,49}, :776:29, :778:32, :785:60, :786:57, :788:16, :796:12, :804:71, :815:22, :827:17, Mux.scala:101:16]
  end // always @(posedge)
  `ifndef SYNTHESIS
    `ifdef FIRRTL_BEFORE_INITIAL
      `FIRRTL_BEFORE_INITIAL
    `endif // FIRRTL_BEFORE_INITIAL
    logic [31:0] _RANDOM_0;
    logic [31:0] _RANDOM_1;
    logic [31:0] _RANDOM_2;
    logic [31:0] _RANDOM_3;
    logic [31:0] _RANDOM_4;
    logic [31:0] _RANDOM_5;
    logic [31:0] _RANDOM_6;
    logic [31:0] _RANDOM_7;
    logic [31:0] _RANDOM_8;
    logic [31:0] _RANDOM_9;
    logic [31:0] _RANDOM_10;
    logic [31:0] _RANDOM_11;
    logic [31:0] _RANDOM_12;
    logic [31:0] _RANDOM_13;
    logic [31:0] _RANDOM_14;
    logic [31:0] _RANDOM_15;
    logic [31:0] _RANDOM_16;
    logic [31:0] _RANDOM_17;
    logic [31:0] _RANDOM_18;
    logic [31:0] _RANDOM_19;
    logic [31:0] _RANDOM_20;
    logic [31:0] _RANDOM_21;
    logic [31:0] _RANDOM_22;
    logic [31:0] _RANDOM_23;
    logic [31:0] _RANDOM_24;
    logic [31:0] _RANDOM_25;
    initial begin
      `ifdef INIT_RANDOM_PROLOG_
        `INIT_RANDOM_PROLOG_
      `endif // INIT_RANDOM_PROLOG_
      `ifdef RANDOMIZE_REG_INIT
        _RANDOM_0 = `RANDOM;
        _RANDOM_1 = `RANDOM;
        _RANDOM_2 = `RANDOM;
        _RANDOM_3 = `RANDOM;
        _RANDOM_4 = `RANDOM;
        _RANDOM_5 = `RANDOM;
        _RANDOM_6 = `RANDOM;
        _RANDOM_7 = `RANDOM;
        _RANDOM_8 = `RANDOM;
        _RANDOM_9 = `RANDOM;
        _RANDOM_10 = `RANDOM;
        _RANDOM_11 = `RANDOM;
        _RANDOM_12 = `RANDOM;
        _RANDOM_13 = `RANDOM;
        _RANDOM_14 = `RANDOM;
        _RANDOM_15 = `RANDOM;
        _RANDOM_16 = `RANDOM;
        _RANDOM_17 = `RANDOM;
        _RANDOM_18 = `RANDOM;
        _RANDOM_19 = `RANDOM;
        _RANDOM_20 = `RANDOM;
        _RANDOM_21 = `RANDOM;
        _RANDOM_22 = `RANDOM;
        _RANDOM_23 = `RANDOM;
        _RANDOM_24 = `RANDOM;
        _RANDOM_25 = `RANDOM;
        state = _RANDOM_0[1:0];	// @[LoopConv.scala:608:22]
        req_outer_bounds_stride = _RANDOM_3[17:2];	// @[LoopConv.scala:610:16]
        req_outer_bounds_kernel_dilation = {_RANDOM_4[31:18], _RANDOM_5[1:0]};	// @[LoopConv.scala:610:16]
        req_inner_bounds_batches = {_RANDOM_6[31:18], _RANDOM_7[1:0]};	// @[LoopConv.scala:610:16]
        req_inner_bounds_krows = {_RANDOM_8[31:18], _RANDOM_9[1:0]};	// @[LoopConv.scala:610:16]
        req_inner_bounds_kcols = _RANDOM_9[17:2];	// @[LoopConv.scala:610:16]
        req_inner_bounds_kchs = {_RANDOM_9[31:18], _RANDOM_10[1:0]};	// @[LoopConv.scala:610:16]
        req_inner_bounds_lpad = _RANDOM_10[17:2];	// @[LoopConv.scala:610:16]
        req_inner_bounds_upad = _RANDOM_11[17:2];	// @[LoopConv.scala:610:16]
        req_inner_bounds_orows = _RANDOM_14[17:2];	// @[LoopConv.scala:610:16]
        req_inner_bounds_ocols = {_RANDOM_14[31:18], _RANDOM_15[1:0]};	// @[LoopConv.scala:610:16]
        req_derived_params_ochs = _RANDOM_15[17:2];	// @[LoopConv.scala:610:16]
        req_derived_params_irows = {_RANDOM_15[31:18], _RANDOM_16[1:0]};	// @[LoopConv.scala:610:16]
        req_derived_params_icols = _RANDOM_16[17:2];	// @[LoopConv.scala:610:16]
        req_derived_params_out_channels_per_bank = _RANDOM_18[17:2];	// @[LoopConv.scala:610:16]
        req_derived_params_in_channels_per_bank = {_RANDOM_18[31:18], _RANDOM_19[1:0]};	// @[LoopConv.scala:610:16]
        req_derived_params_input_spad_stride = {_RANDOM_19[31:18], _RANDOM_20[1:0]};	// @[LoopConv.scala:610:16]
        req_a_addr_start = _RANDOM_20[31:18];	// @[LoopConv.scala:610:16]
        req_b_addr_end = _RANDOM_21[14:0];	// @[LoopConv.scala:610:16]
        req_c_addr_start = _RANDOM_21[24:15];	// @[LoopConv.scala:610:16]
        req_wrot180 = _RANDOM_21[25];	// @[LoopConv.scala:610:16]
        req_downsample = _RANDOM_21[26];	// @[LoopConv.scala:610:16]
        req_max_pixels_per_row = {_RANDOM_21[31:27], _RANDOM_22[10:0]};	// @[LoopConv.scala:610:16]
        req_input_dilated = _RANDOM_22[11];	// @[LoopConv.scala:610:16]
        req_trans_weight_0132 = _RANDOM_22[12];	// @[LoopConv.scala:610:16]
        req_trans_input_3120 = _RANDOM_22[13];	// @[LoopConv.scala:610:16]
        req_loop_id = _RANDOM_22[14];	// @[LoopConv.scala:610:16]
        och = _RANDOM_22[30:15];	// @[LoopConv.scala:610:16, :627:16]
        krow = {_RANDOM_22[31], _RANDOM_23[14:0]};	// @[LoopConv.scala:610:16, :628:17]
        kcol = _RANDOM_23[30:15];	// @[LoopConv.scala:628:17, :629:17]
        kch = {_RANDOM_23[31], _RANDOM_24[14:0]};	// @[LoopConv.scala:628:17, :630:16]
        b = _RANDOM_24[30:15];	// @[LoopConv.scala:630:16, :631:14]
        orow = {_RANDOM_24[31], _RANDOM_25[14:0]};	// @[LoopConv.scala:630:16, :632:17]
        ocol = _RANDOM_25[30:15];	// @[LoopConv.scala:632:17, :633:17]
        new_weights = _RANDOM_25[31];	// @[LoopConv.scala:632:17, :663:24]
      `endif // RANDOMIZE_REG_INIT
    end // initial
    `ifdef FIRRTL_AFTER_INITIAL
      `FIRRTL_AFTER_INITIAL
    `endif // FIRRTL_AFTER_INITIAL
  `endif // not def SYNTHESIS
  Pipeline_13 command_p (	// @[LoopConv.scala:681:25]
    .clock                       (clock),
    .reset                       (reset),
    .io_in_valid                 (_command_p_io_in_valid_T_3),	// @[LoopConv.scala:720:62]
    .io_in_bits_cmd_inst_funct   (_T_8 ? 7'h6 : (&state) ? {6'h2, ~new_weights} : 7'h0),	// @[LoopConv.scala:608:22, :663:24, :685:14, :703:22, :709:{23,29}, :721:{62,90}, Mux.scala:101:16]
    .io_in_bits_cmd_rs1          (_GEN_26 ? 64'h0 : {32'h0, req_derived_params_irows * req_derived_params_icols, 16'h80}),	// @[LoopConv.scala:610:16, :685:14, :690:37, :698:36, :704:15, Mux.scala:101:16]
    .io_in_bits_cmd_rs2          (_GEN_26 ? 64'h0 : {req_inner_bounds_orows * req_inner_bounds_ocols, 48'h0}),	// @[LoopConv.scala:610:16, :619:80, :696:37, :699:36, :704:15, Mux.scala:101:16]
    .io_in_bits_a_addr           (req_trans_input_3120 ? {1'h0, {2'h0, {16'h0, _GEN_10 + {1'h0, {16'h0, b / 16'h10} * _GEN_9}} + {1'h0, {16'h0, {16'h0, kch} * _GEN_12} * _GEN_13}} + {1'h0, _GEN_15 * _GEN_16}} + _GEN_17 : {1'h0, {2'h0, {16'h0, _GEN_10 + {1'h0, _GEN_18 * _GEN_9}} + {1'h0, {16'h0, _GEN_19 * _GEN_12} * _GEN_13}} + {1'h0, _GEN_15 * _GEN_16}} + _GEN_17),	// @[LoopConv.scala:608:22, :610:16, :630:16, :631:14, :651:19, :652:{18,24,40,60,67,95,123,151,179}, :653:{18,26,58,78,83,111,139,167,195}, :685:14, :695:18]
    .io_in_bits_b_addr           (req_trans_weight_0132 ? {1'h0, {1'h0, {1'h0, _GEN_23 + {1'h0, {16'h0, {16'h0, _GEN_18 * _GEN_21} * _GEN_22} * _GEN_1}} + {18'h0, _GEN_24 * {32'h0, req_derived_params_ochs}}} + {35'h0, _GEN_25 * {16'h0, req_derived_params_ochs}}} + {52'h0, och} : {1'h0, {1'h0, {1'h0, _GEN_23 + {1'h0, {16'h0, {16'h0, _GEN_20 * _GEN_21} * _GEN_22} * _GEN_2}} + {18'h0, _GEN_24 * {32'h0, req_inner_bounds_kchs}}} + {35'h0, _GEN_25 * {16'h0, req_inner_bounds_kchs}}} + {52'h0, kch}),	// @[LoopConv.scala:608:22, :610:16, :619:80, :620:43, :627:16, :630:16, :636:95, :653:58, :660:{42,89,105}, :667:19, :668:{18,58,66,74,81,101,108,120,127}, :669:{18,58,66,74,81,101,108,120,127}, :685:14, :695:18]
    .io_in_bits_c_addr           ({1'h0, {1'h0, {1'h0, {55'h0, req_c_addr_start} + {1'h0, {16'h0, {16'h0, _GEN_20 * {16'h0, req_inner_bounds_batches}} * {32'h0, req_inner_bounds_orows}} * {48'h0, req_inner_bounds_ocols}}} + {18'h0, {16'h0, _GEN_19 * {16'h0, req_inner_bounds_orows}} * {32'h0, req_inner_bounds_ocols}}} + {35'h0, _GEN_4 * {16'h0, req_inner_bounds_ocols}}} + {52'h0, ocol}),	// @[LoopConv.scala:608:22, :610:16, :619:80, :633:17, :636:95, :641:29, :653:83, :659:29, :660:{42,52,60,68,73,81,89,97,105}, :685:14, :695:18]
    .io_in_bits_I                (req_trans_input_3120 ? {1'h0, _I_T_1 > 16'h10 ? 16'h10 : _I_T_1} : {1'h0, _I_T_7 > _GEN_7 ? _GEN_7 : _I_T_7} + _GEN_8 >> _GEN_8),	// @[LoopConv.scala:608:22, :610:16, :616:{37,59}, :644:14, :645:{8,17,21}, :646:{18,25,32}, :653:26]
    .io_in_bits_J                (_J_T_1 > 16'h10 ? 16'h10 : _J_T_1),	// @[LoopConv.scala:647:{14,20,26}, :653:26]
    .io_in_bits_K                ({16'h0, _pixels_T_1 > req_max_pixels_per_row ? req_max_pixels_per_row : _pixels_T_1} * {16'h0, _K_T_1 > 16'h10 ? 16'h10 : _K_T_1}),	// @[LoopConv.scala:610:16, :639:{19,26,33}, :648:{18,23,29,35}, :653:26, :695:18]
    .io_in_bits_new_weights      (new_weights),	// @[LoopConv.scala:663:24]
    .io_out_ready                (io_cmd_ready & ~io_rob_overloaded),	// @[LoopConv.scala:730:{42,45}]
    .io_in_ready                 (_command_p_io_in_ready),
    .io_out_valid                (_command_p_io_out_valid),
    .io_out_bits_cmd_inst_funct  (_command_p_io_out_bits_cmd_inst_funct),
    .io_out_bits_cmd_inst_rs2    (io_cmd_bits_inst_rs2),
    .io_out_bits_cmd_inst_rs1    (io_cmd_bits_inst_rs1),
    .io_out_bits_cmd_inst_xd     (io_cmd_bits_inst_xd),
    .io_out_bits_cmd_inst_xs1    (io_cmd_bits_inst_xs1),
    .io_out_bits_cmd_inst_xs2    (io_cmd_bits_inst_xs2),
    .io_out_bits_cmd_inst_rd     (io_cmd_bits_inst_rd),
    .io_out_bits_cmd_inst_opcode (io_cmd_bits_inst_opcode),
    .io_out_bits_cmd_rs1         (_command_p_io_out_bits_cmd_rs1),
    .io_out_bits_cmd_rs2         (_command_p_io_out_bits_cmd_rs2),
    .io_out_bits_a_addr          (_command_p_io_out_bits_a_addr),
    .io_out_bits_b_addr          (_command_p_io_out_bits_b_addr),
    .io_out_bits_c_addr          (_command_p_io_out_bits_c_addr),
    .io_out_bits_I               (_command_p_io_out_bits_I),
    .io_out_bits_J               (_command_p_io_out_bits_J),
    .io_out_bits_K               (_command_p_io_out_bits_K),
    .io_out_bits_new_weights     (_command_p_io_out_bits_new_weights),
    .io_busy                     (_command_p_io_busy)
  );
  assign io_req_ready = _io_req_ready_output;	// @[LoopConv.scala:716:34]
  assign io_cmd_valid = _command_p_io_out_valid & ~io_rob_overloaded;	// @[LoopConv.scala:681:25, :730:45, :731:42]
  assign io_cmd_bits_inst_funct = _command_p_io_out_bits_cmd_inst_funct;	// @[LoopConv.scala:681:25]
  assign io_cmd_bits_rs1 = _T ? {11'h0, _command_p_io_out_bits_K[4:0], 9'h0, _command_p_io_out_bits_J[6:0], {3{~_command_p_io_out_bits_new_weights}}, _command_p_io_out_bits_new_weights ? _command_p_io_out_bits_b_addr[28:26] : 3'h0, 11'h0, ~_command_p_io_out_bits_new_weights | _command_p_io_out_bits_b_addr[14], _command_p_io_out_bits_new_weights ? _command_p_io_out_bits_b_addr[13:0] : 14'h3FFF} : (|_command_p_io_out_bits_cmd_inst_funct) ? {11'h0, _command_p_io_out_bits_I[4:0], 9'h0, _command_p_io_out_bits_K[6:0], 3'h0, _command_p_io_out_bits_a_addr[28:26], 11'h0, _command_p_io_out_bits_a_addr[14:0]} : _command_p_io_out_bits_cmd_rs1;	// @[LocalAddr.scala:99:13, :108:37, :141:12, LoopConv.scala:681:25, :732:15, :733:{46,63}, :737:17, :738:26, :739:26, :740:34, :745:26, :749:{21,36}, :751:{51,67}, :756:27, :765:{21,37}]
  assign io_cmd_bits_rs2 = _T ? {11'h0, _command_p_io_out_bits_I[4:0], 9'h0, _command_p_io_out_bits_J[6:0], 3'h6, _command_p_io_out_bits_c_addr[28:26], 11'h0, _command_p_io_out_bits_c_addr[14:0]} : (|_command_p_io_out_bits_cmd_inst_funct) ? {11'h0, _command_p_io_out_bits_I[4:0], 9'h0, _command_p_io_out_bits_J[6:0], 32'hE0007FFF} : _command_p_io_out_bits_cmd_rs2;	// @[LocalAddr.scala:108:37, LoopConv.scala:681:25, :732:15, :733:{46,63}, :737:17, :739:26, :745:26, :750:{21,36}, :751:{51,67}, :766:{21,37}]
  assign io_idle = _io_idle_T & ~_command_p_io_busy;	// @[LoopConv.scala:681:25, :716:{25,37}, :717:29]
  assign io_loop_id = req_loop_id;	// @[LoopConv.scala:610:16]
endmodule
