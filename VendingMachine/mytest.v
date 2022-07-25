`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   13:27:26 07/23/2020
// Design Name:   charge
// Module Name:   C:/Users/imannet/Desktop/test/testingStuf/mytest.v
// Project Name:  testingStuf
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: charge
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////
module mytest;

	// Inputs
	reg clk;
	reg [1:0] mode;
	reg index;
	reg all_number;
	reg [3:0] add;
	reg index_type;

	// Outputs
	wire error;
	wire [19:0] all_num;

	// Instantiate the Unit Under Test (UUT)
	charge uut (
		.clk(clk), 
		.mode(mode), 
		.index(index), 
		.all_number(all_number), 
		.add(add), 
		.clk(clk), 
		.all_number(all_number), 
		.index_type(index_type), 
		.error(error), 
		.all_num(all_num)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		mode = 0;
		index = 0;
		all_number = 0;
		add = 0;
		clk = 0;
		all_number = 0;
		index_type = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

