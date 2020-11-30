`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:00:59 10/14/2019 
// Design Name: 
// Module Name:    PC_mux 
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
module PC_mux(
    input [11:0]pc,
    input [11:0]br_pc,
    input pc_sel,
    output [11:0]npc
    );
	assign npc = pc_sel ? br_pc : pc ;  		//1-> pc  ;0-> br_pc

endmodule
