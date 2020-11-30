`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:56:44 10/14/2019 
// Design Name: 
// Module Name:    IF_ID 
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
module IF_ID(
    input clk,
    input reset,
    input [31:0]instr,
    output reg [31:0]n_instr
    );

	always@ (posedge clk or posedge reset)
	begin
		if(reset)
			n_instr <= 0;
		else
		begin
			n_instr <= instr;
		end
	end
endmodule
