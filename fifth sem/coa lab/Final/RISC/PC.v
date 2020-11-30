`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:47:48 10/14/2019 
// Design Name: 
// Module Name:    PC 
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
module PC(
    input clk,
    input reset,
    input [10:0]pc,
    output reg [10:0]npc
    );
	initial
		npc <= 0;
	always @(posedge clk or posedge reset)
	begin
		if(reset)
		begin
			npc <= 0;
		end
		else
		begin
			npc <= pc;
		end
	end

endmodule
