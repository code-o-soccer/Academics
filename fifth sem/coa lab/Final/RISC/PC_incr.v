`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:51:42 10/14/2019 
// Design Name: 
// Module Name:    PC_incr 
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
module PC_incr(
    input [10:0]pc,
    output [10:0]npc
    );
	assign npc = pc + 1;

endmodule
