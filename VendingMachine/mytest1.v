`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   17:40:42 07/24/2020
// Design Name:   test1
// Module Name:   C:/Users/imannet/Desktop/test/testingStuf/mytest1.v
// Project Name:  testingStuf
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: test1
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test;

	// Inputs
	reg clk;
	reg [1:0] mode;
	reg [3:0] in_money;
	reg [3:0] type;
	reg [3:0] number;

	// Outputs
	wire [6:0] segment;
	wire status;

	// Instantiate the Unit Under Test (UUT)
	vending_machine uut (
		.clk(clk), 
		.mode(mode), 
		.in_money(in_money), 
		.type(type), 
		.number(number), 
		.segment(segment), 
		.status(status)
	);
	/*
	initial begin
		// Initialize Inputs
		#100;	
		clk = 1;
		mode = 00;
		in_money = 4'b1001;
		type = 000;
		number =0001;

		// Wait 100 ns for global reset to finish
	 
	#200;
	number=0001;
	//#200;
//	number=0001;
		end
	always #100 clk = ~clk;
   */   
	initial begin
		mode = 0;
		in_money = 4'b1001;
		type = 0;
		number = 1;
		clk = 1;
		#1000;
		clk = 0;
		#1000;
		clk = 1;
		#1000;
		clk = 0;
		#1000;
		mode = 1;
		type = 0;
		number = 15;
		clk = 1;
		#1000;
		clk = 0;
		#1000;
		mode = 1;
		type = 0;
		number = 4;
		clk = 1;
		#1000;
		clk = 0;
		#1000;
		mode = 0;
		in_money = 4'b1101;
		type = 3;
		number = 2;
		clk = 1;
		#1000;
		clk = 0;
		#1000;
		mode = 2;
		in_money = 4'b0010;
		clk = 1;
		#1000;
		clk = 0;
		#1000;
	end
		
		
endmodule

