`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:47:09 08/07/2019 
// Design Name: 
// Module Name:    hybrid_adder 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module cla(
    input [3:0]a,
    input [3:0]b,
    input c_in,
    output [3:0]sum,
    output c_out
    );
	wire [3:0]p;
	wire [3:0]g;
	wire [2:0]c;

	assign p = a^b;
	assign g = a&b;
	
	assign c[0] = g[0] |  (p[0] & c_in);
	assign c[1] = g[1] |  (p[1] & c[0]);
	assign c[2] = g[2] |  (p[2] & c[1]);
	assign c_out = g[3] |  (p[3] & c[2]);
	
	assign sum[0] = p[0] ^ c_in;
	assign sum[1] = p[1] ^ c[0];
	assign sum[2] = p[2] ^ c[1];
	assign sum[3] = p[3] ^ c[2];

endmodule


module Adder(
    input [31:0]a,
    input [31:0]b,
    input c_in,
    output [31:0]sum,
    output c_out
    );
	 wire [6:0]c_mid;
	 cla C1(a[3:0],b[3:0],c_in,sum[3:0],c_mid[0]);
	 cla C2(a[7:4],b[7:4],c_mid[0],sum[7:4],c_mid[1]);
	 cla C3(a[11:8],b[11:8],c_mid[1],sum[11:8],c_mid[2]);
	 cla C4(a[15:12],b[15:12],c_mid[2],sum[15:12],c_mid[3]);
	 cla C5(a[19:16],b[19:16],c_mid[3],sum[19:16],c_mid[4]);
	 cla C6(a[23:20],b[23:20],c_mid[4],sum[23:20],c_mid[5]);
	 cla C7(a[27:24],b[27:24],c_mid[5],sum[27:24],c_mid[6]);
	 cla C8(a[31:28],b[31:28],c_mid[6],sum[31:28],c_out);
	
endmodule
