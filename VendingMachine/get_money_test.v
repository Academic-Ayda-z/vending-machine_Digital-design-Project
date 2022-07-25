`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   18:56:33 07/25/2020
// Design Name:   test1
// Module Name:   C:/Users/imannet/Desktop/test/testingStuf/get_money_test.v
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

module get_money_test;

	// Inputs
	reg num;

	// Outputs
	wire n;

	// Instantiate the Unit Under Test (UUT)
	get_money get_money_test (
		.num(num), 
		.n(n)
	);

	initial begin
		// Initialize Inputs
		num = 0;

		// Wait 100 ns for global reset to finish
		#100;
			// Add stimulus here
		mode = 2;
		in_money = 4'b0010;
		clk = 1;
		always #100 clk = ~clk;
	end
	
endmodule

