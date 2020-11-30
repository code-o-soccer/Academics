`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:00:37 09/09/2019 
// Design Name: 
// Module Name:    right 
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
module right(
	 input clk,
    input reset,
    input load,
    input [5:0]a,
    input [5:0]b,
    output reg [11:0]product
    );
	reg [5:0] A;
	reg [5:0] B;
	reg [3:0] counter;
	reg temp;
	always @(posedge clk or posedge reset or posedge load)
	begin
		if(reset == 1)
		begin
			A = 0;
			B = 0;
			product = 0;
		end
		else if(load == 1)
		begin
			A = a;
			B = b; 
			product = 0;
			counter = 0;
		end
		else
		begin
			if(counter <=5 )
			begin
				if(A[counter] == 1 )
				begin
					product = product + (B << 6) ;  
				end
				product = product >> 1;
			end
			else
				counter = 6;
			counter = counter + 1;	
		end
	end

endmodule
