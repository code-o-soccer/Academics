`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:27:52 10/28/2019 
// Design Name: 
// Module Name:    branch 
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
module branch(
    input [5:0]bcode,
    input zflag,
    input carryflag,
    input signflag,
    input ovfflag,
    input [31:0]L,
	 input [31:0]rega,
    output reg [10:0]PC,
	 output reg branch_control
	 //output reg write_reg  
    );
	always @(*)
	begin
		PC <= L[10:0];
		//write_reg = 0;
		if(bcode[5:3] == 3'b011)
		begin
			if(bcode[2:0] == 0)
			begin
				if(zflag == 1)
					branch_control <= 1;
				else
					branch_control <= 0;
			end
			else if(bcode[2:0] == 1)
			begin
				if(zflag == 0)
					branch_control <= 1;		
				else
					branch_control <= 0;
			end
			else if(bcode[2:0] == 2)
			begin
				if(carryflag == 1)
					branch_control <= 1;
				else
					branch_control <= 0;
			end
			else if(bcode[2:0] == 3)
			begin
				if(carryflag == 0)
					branch_control <= 1;
				else
					branch_control <= 0;
			end
			else if(bcode[2:0] == 4)
			begin
				if(signflag == 1)
					branch_control <= 1;
				else
					branch_control <= 0;
			end
			else if(bcode[2:0] == 5)
			begin
				if(signflag == 0)
					branch_control <= 1;
				else
					branch_control <= 0;
			end
			else if(bcode[2:0] == 6)
			begin
				if(ovfflag == 1)
					branch_control <= 1;
				else
					branch_control <= 0;
			end
			else if(bcode[2:0] == 7)
			begin
				if(ovfflag == 0)
					branch_control <= 1;
				else
					branch_control <= 0;
			end
		end
		else if(bcode[5:3] == 3'b100)
		begin
			if(bcode[1:0] == 0)
			begin
				//write_reg <= 1;
				branch_control <= 1;
			end
			else
			begin
				branch_control <=1;
			end
		end
		else 
		begin
			PC <= rega[10:0];
			branch_control <=1;
		end
	end
endmodule
