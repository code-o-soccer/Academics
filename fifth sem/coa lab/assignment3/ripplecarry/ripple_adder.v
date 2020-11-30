`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:09:11 08/07/2019 
// Design Name: 
// Module Name:    ripple_adder 
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


module ripple_adder(
    input [7:0]a,
    input [7:0]b,
    input c_in,
    output [7:0]sum,
    output c_out
    );
	wire [7:0] buff;
	assign buff[0] = c_in;
	bit_adder A1(a[0],b[0],buff[0],sum[0],buff[1]) ;	
	bit_adder A2(a[1],b[1],buff[1],sum[1],buff[2]) ;
	bit_adder A3(a[2],b[2],buff[2],sum[2],buff[3]) ;
	bit_adder A4(a[3],b[3],buff[3],sum[3],buff[4]) ;
	bit_adder A5(a[4],b[4],buff[4],sum[4],buff[5]) ;
	bit_adder A6(a[5],b[5],buff[5],sum[5],buff[6]) ;
	bit_adder A7(a[6],b[6],buff[6],sum[6],buff[7]) ;
	bit_adder A8(a[7],b[7],buff[7],sum[7], c_out) ;
endmodule


module bit_adder(
    input a,
    input b,
    input c_in,
    output sum,
    output c_out
    );
	assign {c_out, sum} = a + b + c_in;

endmodule

