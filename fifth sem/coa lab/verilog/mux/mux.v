`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:02:48 09/08/2019 
// Design Name: 
// Module Name:    mux 
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
    input a,
    input b,
	 input s,
    output outp
    );
	
	assign outp = s ? a : b;

endmodule

module mux4(
    input a,
    input b,
	 input c,
	 input d,
	 input [1:0]s,
    output outp
    );
	wire o1, o2;
	mux M1(b,a,s[0],o1);
	mux M2(d,c,s[0],o2);
	mux M3(o2,o1,s[1],outp);

endmodule