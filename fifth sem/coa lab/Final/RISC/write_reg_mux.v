`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:03:59 11/04/2019 
// Design Name: 
// Module Name:    write_reg_mux 
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
module write_reg_mux(
    input [31:0]mem_data,
    input [31:0]reg_data,
    input sel,
    output [31:0]write_data
    );
	
	assign write_data = sel ? mem_data : reg_data;

endmodule
