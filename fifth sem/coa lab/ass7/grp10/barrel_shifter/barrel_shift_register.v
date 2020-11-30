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
	input [7:0]a,
	input [7:0]b,
	input s,
	output [7:0] out
	);
	
	assign out = s ? a : b;

endmodule


module shifter_4(
	input [7:0]in,
	input dir,
	input s,
	output [7:0]out
	);
	
	wire [7:0]a1;
	wire [7:0]b1;
	wire [7:0]o;
	assign a1 = in << 4;
	assign b1 = in >> 4;
	
	mux M1(a1,b1,dir,o);
	mux M2(o,in,s,out);
	
endmodule

module shifter_2(
	input [7:0]in,
	input dir,
	input s,
	output [7:0]out
	);
	
	wire [7:0]a1;
	wire [7:0]b1;
	wire [7:0]o;
	assign a1 = in << 2;
	assign b1 = in >> 2;
	
	mux M1(a1,b1,dir,o);
	mux M2(o,in,s,out);
	
endmodule

module shifter_1(
	input [7:0]in,
	input dir,
	input s,
	output [7:0]out
	);
	
	wire [7:0]a1;
	wire [7:0]b1;
	wire [7:0]o;
	assign a1 = in << 1;
	assign b1 = in >> 1;
	
	mux M1(a1,b1,dir,o);
	mux M2(o,in,s,out);
	
endmodule
	

	
module barrel_shift_register(
    input [7:0]inp,
    input [2:0]shamt,
    input dir,
    output [7:0]outp
    );

	wire [7:0]o1;
	wire [7:0]o2;
	
	shifter_4 S1(inp, dir, shamt[2], o1);
	shifter_2 S2(o1, dir, shamt[1], o2);
	shifter_1 S3(o2, dir, shamt[0], outp);
endmodule
