`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:42:06 10/28/2019 
// Design Name: 
// Module Name:    Data_Mem 
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
module Data_Mem(
    input clk,
    input [31:0] addr,
    input [31:0] write_data,
    input write_en,
    output reg [31:0]data_out
    );
	
	reg [31:0] dataMem [31:0];
	
	initial 
	begin
		//dataMem[31:0][31:0] = 0;
	end
	
	always @(negedge clk)
	begin
		if( write_en == 1) 
		begin
			dataMem[addr] = write_data;
		end
	end
	always @(posedge clk)
	begin
		 
		
			data_out=dataMem[addr];
			
	end
	//Data_Memory DM(.clka(clk), .wea(write_en), .addra(addr), .dina(write_data), .douta(data_out));
	

endmodule
