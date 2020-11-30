`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:22:24 08/21/2019 
// Design Name: 
// Module Name:    barrel_shift_register 
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
module mux(
	input [31:0]a,
	input [31:0]b,
	input s,
	output [31:0] out
	);
	
	assign out = s ? a : b;

endmodule

module shifter_16(
	input [31:0]in,
	input dir,
	input s,
	output [31:0]out
	);
	
	wire [31:0]a1;
	wire [31:0]b1;
	wire [31:0]o;
	assign a1 = in << 16;
	assign b1 = in >> 16;
	
	mux M1(a1,b1,dir,o);
	mux M2(o,in,s,out);
	
endmodule

module shifter_8(
	input [31:0]in,
	input dir,
	input s,
	output [31:0]out
	);
	
	wire [31:0]a1;
	wire [31:0]b1;
	wire [31:0]o;
	assign a1 = in << 8;
	assign b1 = in >> 8;
	
	mux M1(a1,b1,dir,o);
	mux M2(o,in,s,out);
	
endmodule

module shifter_4(
	input [31:0]in,
	input dir,
	input s,
	output [31:0]out
	);
	
	wire [31:0]a1;
	wire [31:0]b1;
	wire [31:0]o;
	assign a1 = in << 4;
	assign b1 = in >> 4;
	
	mux M1(a1,b1,dir,o);
	mux M2(o,in,s,out);
	
endmodule

module shifter_2(
	input [31:0]in,
	input dir,
	input s,
	output [31:0]out
	);
	
	wire [31:0]a1;
	wire [31:0]b1;
	wire [31:0]o;
	assign a1 = in << 2;
	assign b1 = in >> 2;
	
	mux M1(a1,b1,dir,o);
	mux M2(o,in,s,out);
	
endmodule

module shifter_1(
	input [31:0]in,
	input dir,
	input s,
	output [31:0]out
	);
	
	wire [31:0]a1;
	wire [31:0]b1;
	wire [31:0]o;
	assign a1 = in << 1;
	assign b1 = in >> 1;
	
	mux M1(a1,b1,dir,o);
	mux M2(o,in,s,out);
	
endmodule
	

	
module barrel_shift_register(
    input [31:0]inp,
    input [4:0]shamt,
    input dir,
    output [31:0]outp
    );

	wire [31:0]o1;
	wire [31:0]o2;
	wire [31:0]o3;
	wire [31:0]o4;
	shifter_16 S5(inp, dir, shamt[4], o1);
	shifter_8 S4(o1, dir, shamt[3], o2);
	shifter_4 S1(o2, dir, shamt[2], o3);
	shifter_2 S2(o3, dir, shamt[1], o4);
	shifter_1 S3(o4, dir, shamt[0], outp);
endmodule
