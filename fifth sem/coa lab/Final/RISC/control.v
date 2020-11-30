`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:12:59 10/28/2019 
// Design Name: 
// Module Name:    control 
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
module control(
    input [2:0]opcode,
    input [3:0]func,
	 output reg reg_write_en,
	 output reg mem_write_en,
	 output reg branch_control,
	 output reg [1:0]alu_src,
	 output reg [3:0]code,
	 output reg memToReg,
	 output reg [5:0]bcode,
	 output reg double
    );
	 
	 always @(*)
	 begin			
		reg_write_en = 0;
		mem_write_en = 0;
		alu_src = 0;
		branch_control = 0;
		memToReg = 0;
		code = 0;
		bcode = {opcode,func[2:0]};
		double = 0;
		if(opcode == 0)
		begin
			reg_write_en = 1;
			if(func == 0)
				code = 1;
			else if(func == 1)
			begin
				code = 3;
				double = 1;
			end
			else if(func == 2)
			begin
				code = 4;
				double = 1;
			end
			else if(func == 3)
				code = 5;
			else if(func == 4)
				code = 6;
			else if(func == 5)
				code = 7;
			else if(func == 6)
				code = 8;
			else if(func == 7)
				code = 9;
			else if(func == 8)
				code = 8;
			else if(func == 9)
				code = 9;
			else if(func == 10)
				code = 10;
			else if(func == 11)
				code = 10;

			if(func == 6)
				alu_src = 1;
			else if(func == 7)
				alu_src = 1;
			else if(func == 10)
				alu_src = 1;
			else 
				alu_src = 0;
		end
		else if(opcode == 1)
		begin
			if(func == 0)
				code = 5;
			if(func == 1)
				code = 1;
			reg_write_en = 1;
			alu_src = 2;
			
		end
		else if(opcode == 2)
		begin
			alu_src = 2;
			if(func == 1)
				mem_write_en = 1;
			else if(func == 0)
			begin
				reg_write_en = 1;
				memToReg = 1;
			end
		end
		else if(opcode == 3)
		begin
			branch_control = 1;
		end
		else if(opcode == 4)
		begin
			branch_control = 1;
			if(func == 0)
				reg_write_en = 1;
		end
		else if(opcode == 5)
		begin
			branch_control = 1;
		end
		
		if(opcode == 3'b100)
		begin
			if(func[1:0] == 0) 
			begin
				reg_write_en = 1;
			end
		end
	 end


endmodule
