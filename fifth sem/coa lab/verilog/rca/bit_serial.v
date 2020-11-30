`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:56:43 09/08/2019 
// Design Name:
// Module Name:    bit_serial 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//cdvvvv
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////0
module bit_serial(
	 input [7:0]a,
    input [7:0]b,
	 input clk,
	 input reset,
	 input load,
	 input c_in,
    output reg [7:0]sum, 
    output reg c_out
    );
	reg [7:0] A;
	reg [7:0] B;
	reg carry;
	reg [4:0] counter;
	reg s;
	always @(posedge clk or posedge reset or posedge load )
	begin
		if(reset)
		begin
			A = 0;
			B = 0;
			sum = 0;
			c_out = 0;
		end
		else if(load)
		begin
			A = a;
			B = b;
			carry = c_in; 
			counter = 0;
		end
		else
		begin
			if(counter <= 7)
			begin
				{c_out, s } = A[0] + B[0] + carry;
				carry = c_out;
				A[0] = A[1];
				A[1] = A[2];
				A[2] = A[3];
				A[3] = A[4];
				A[4] = A[5];
				A[5] = A[6];
				A[6] = A[7];
				A[7] = 0;
				B[0] = B[1];
				B[1] = B[2];
				B[2] = B[3];
				B[3] = B[4];
				B[4] = B[5];
				B[5] = B[6];
				B[6] = B[7];
				B[7] = 0;
				sum[0] = sum[1];
				sum[1] = sum[2];
				sum[2] = sum[3];
				sum[3] = sum[4];
				sum[4] = sum[5];
				sum[5] = sum[6];
				sum[6] = sum[7];
				sum[7] = s;
				counter = counter + 1;
			end
		end
	end

endmodule
