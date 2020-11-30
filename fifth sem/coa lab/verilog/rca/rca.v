`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:33:31 09/08/2019 
// Design Name: 
// Module Name:    rca 
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
module one_bit(
    input a,
    input b,
    input c_in,
    output c_out,
    output sum
    );
	assign {c_out, sum } = a + b + c_in;

endmodule

module rca(
    input [7:0]a,
    input [7:0]b,
    input c_in,
    output c_out,
    output [7:0]sum
    );
	wire [7:0]buff;
	one_bit S1(a[0],b[0],c_in,buff[0],sum[0]);
	one_bit S2(a[1],b[1],buff[0],buff[1],sum[1]);
	one_bit S3(a[2],b[2],buff[1],buff[2],sum[2]);
	one_bit S4(a[3],b[3],buff[2],buff[3],sum[3]);
	one_bit S5(a[4],b[4],buff[3],buff[4],sum[4]);
	one_bit S6(a[5],b[5],buff[4],buff[5],sum[5]);
	one_bit S7(a[6],b[6],buff[5],buff[6],sum[6]);
	one_bit S8(a[7],b[7],buff[6],c_out  ,sum[7]);
endmodule
