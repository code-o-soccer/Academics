`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:34:04 10/30/2019 
// Design Name: 
// Module Name:    array_smult 
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

module array_smult(input[31:0] a, input[31:0]b, output reg[63:0] y);

	reg [31:0]a_temp;
	reg [31:0]b_temp;
	wire [31:0]outp;

	array_umult M(a_temp, b_temp, outp);
	
	always @(*)
	begin
		if(a[31] == 1)
		begin
			a_temp <= -a;
		end
		else
		begin
			a_temp <= a;
		end
		
		if(b[31] == 1)
		begin
			b_temp <= -b;
		end
		else
		begin
			b_temp <= b;
		end
		
		if(a[31] == 1 ^ b[31] == 1)
		begin
			y <= -outp;
		end
		else
		begin
			y <= outp;
		end
	end
endmodule