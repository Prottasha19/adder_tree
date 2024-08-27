// Generator : SpinalHDL v1.10.1    git head : 2527c7c6b0fb0f95e5e1a5722a0be732b364ce43
// Component : Dut
// Git hash  : efa66e4f8da67c842f46e524ba6fe565b73f5b0b

`timescale 1ns/1ps

module Dut (
  input  wire [7:0]    io_a,
  input  wire [7:0]    io_b,
  output wire [7:0]    io_result,
  input  wire          clk,
  input  wire          reset
);

  wire       [7:0]    carryAdder_1_io_result;

  CarryAdder carryAdder_1 (
    .io_a      (io_a[7:0]                  ), //i
    .io_b      (io_b[7:0]                  ), //i
    .io_result (carryAdder_1_io_result[7:0])  //o
  );
  assign io_result = carryAdder_1_io_result;

endmodule

module CarryAdder (
  input  wire [7:0]    io_a,
  input  wire [7:0]    io_b,
  output reg  [7:0]    io_result
);

  reg                 c_8;
  reg                 c_7;
  reg                 c_6;
  reg                 c_5;
  reg                 c_4;
  reg                 c_3;
  reg                 c_2;
  reg                 c_1;
  wire                c;
  wire                _zz_c_1;
  wire                _zz_c_1_1;
  wire                _zz_c_2;
  wire                _zz_c_2_1;
  wire                _zz_c_3;
  wire                _zz_c_3_1;
  wire                _zz_c_4;
  wire                _zz_c_4_1;
  wire                _zz_c_5;
  wire                _zz_c_5_1;
  wire                _zz_c_6;
  wire                _zz_c_6_1;
  wire                _zz_c_7;
  wire                _zz_c_7_1;
  wire                _zz_c_8;
  wire                _zz_c_8_1;

  always @(*) begin
    c_8 = c_7;
    c_8 = (((_zz_c_8 && _zz_c_8_1) || (_zz_c_8 && c_7)) || (_zz_c_8_1 && c_7));
  end

  always @(*) begin
    c_7 = c_6;
    c_7 = (((_zz_c_7 && _zz_c_7_1) || (_zz_c_7 && c_6)) || (_zz_c_7_1 && c_6));
  end

  always @(*) begin
    c_6 = c_5;
    c_6 = (((_zz_c_6 && _zz_c_6_1) || (_zz_c_6 && c_5)) || (_zz_c_6_1 && c_5));
  end

  always @(*) begin
    c_5 = c_4;
    c_5 = (((_zz_c_5 && _zz_c_5_1) || (_zz_c_5 && c_4)) || (_zz_c_5_1 && c_4));
  end

  always @(*) begin
    c_4 = c_3;
    c_4 = (((_zz_c_4 && _zz_c_4_1) || (_zz_c_4 && c_3)) || (_zz_c_4_1 && c_3));
  end

  always @(*) begin
    c_3 = c_2;
    c_3 = (((_zz_c_3 && _zz_c_3_1) || (_zz_c_3 && c_2)) || (_zz_c_3_1 && c_2));
  end

  always @(*) begin
    c_2 = c_1;
    c_2 = (((_zz_c_2 && _zz_c_2_1) || (_zz_c_2 && c_1)) || (_zz_c_2_1 && c_1));
  end

  always @(*) begin
    c_1 = c;
    c_1 = (((_zz_c_1 && _zz_c_1_1) || (_zz_c_1 && c)) || (_zz_c_1_1 && c));
  end

  assign c = 1'b0;
  assign _zz_c_1 = io_a[0];
  assign _zz_c_1_1 = io_b[0];
  always @(*) begin
    io_result[0] = ((_zz_c_1 ^ _zz_c_1_1) ^ c);
    io_result[1] = ((_zz_c_2 ^ _zz_c_2_1) ^ c_1);
    io_result[2] = ((_zz_c_3 ^ _zz_c_3_1) ^ c_2);
    io_result[3] = ((_zz_c_4 ^ _zz_c_4_1) ^ c_3);
    io_result[4] = ((_zz_c_5 ^ _zz_c_5_1) ^ c_4);
    io_result[5] = ((_zz_c_6 ^ _zz_c_6_1) ^ c_5);
    io_result[6] = ((_zz_c_7 ^ _zz_c_7_1) ^ c_6);
    io_result[7] = ((_zz_c_8 ^ _zz_c_8_1) ^ c_7);
  end

  assign _zz_c_2 = io_a[1];
  assign _zz_c_2_1 = io_b[1];
  assign _zz_c_3 = io_a[2];
  assign _zz_c_3_1 = io_b[2];
  assign _zz_c_4 = io_a[3];
  assign _zz_c_4_1 = io_b[3];
  assign _zz_c_5 = io_a[4];
  assign _zz_c_5_1 = io_b[4];
  assign _zz_c_6 = io_a[5];
  assign _zz_c_6_1 = io_b[5];
  assign _zz_c_7 = io_a[6];
  assign _zz_c_7_1 = io_b[6];
  assign _zz_c_8 = io_a[7];
  assign _zz_c_8_1 = io_b[7];

endmodule
