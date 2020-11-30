`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:34:55 10/16/2019 
// Design Name: 
// Module Name:    ID 
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
module ID(
    input [31:0]inst,
    output reg [2:0]opcode,
    output reg [3:0]func,
    output reg [4:0]regs,
    output reg [4:0]regt,
    output reg [31:0]shamt,
    output reg [31:0]imm
    );
	 
	always @(*)
	begin
		opcode <= inst[31:29];
		if(opcode == 3'b000)
		begin
			regs <= inst[28:24];
			regt <= inst[23:19];
			shamt <= inst[18:14];
			func <= inst[13:10];
			 
		end
		else if(opcode == 3'b001)
		begin
			regs <= inst[28:24];
			imm <= inst[23:2];
			func <= inst[1:0];
		end
		else if(opcode == 3'b010)
		begin
			regs <= inst[28:24];
			regt <= inst[23:19];
			imm <= inst [18:1];
			func <= inst[0] ;
		end
		else if(opcode == 3'b011)
		begin
			imm <= inst[25:15];
			func <= inst[28:26];
		end
		else if(opcode == 3'b100)
		begin			
			func <= inst[28:27];
			imm <= inst[26:16];
		end
		else if(opcode == 3'b101)
		begin
			func <= inst [28:27];
			regt <= inst[26:22];
			if (func == 1)
				regt <= 31;
		end
	end

endmodule
