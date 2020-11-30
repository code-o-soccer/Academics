`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:38:24 10/23/2019 
// Design Name: 
// Module Name:    ALU_MUX 
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
module ALU_MUX(
    input [31:0]regt,
    input [31:0]shamt,
    input [31:0]imm,
    input [1:0]sel,
    output [31:0]outp
    );
	 
	 assign outp = (sel[1:0] == 2'b00)? regt : ((sel[1:0] == 2'b01) ? shamt : imm);  


endmodule
