`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:42:41 09/08/2019 
// Design Name: 
// Module Name:    hybrid 
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
    output c_out,
    output [3:0]sum
    );
	wire [3:0] g;
	wire [3:0] p;
	wire [2:0] c;
	assign g = a & b;
	assign p = a ^ b;
	
	assign c[0] = g[0] |  (p[0] & c_in);
	assign c[1] = g[1] |  (p[1] & c[0]);
	assign c[2] = g[2] |  (p[2] & c[1]);
	assign c_out = g[3] |  (p[3] & c[2]);
	
	assign sum[0] = p[0] ^ c_in;
	assign sum[1] = p[1] ^ c[0];
	assign sum[2] = p[2] ^ c[1];
	assign sum[3] = p[3] ^ c[2];

endmodule

module hybrid(
	 input [7:0]a,
    input [7:0]b,
    input c_in,
    output c_out,
    output [7:0]sum
    );
	wire c_mid;
	 cla C1(a[3:0],b[3:0],c_in,c_mid,sum[3:0]);
	 cla C2(a[7:4],b[7:4],c_mid,c_out,sum[7:4]);

endmodule
