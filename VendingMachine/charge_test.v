`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   18:55:41 07/25/2020
// Design Name:   test1
// Module Name:   C:/Users/imannet/Desktop/test/testingStuf/charge_test.v
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

module charge_test;

	// Inputs
	reg num;

	// Outputs
	wire n;

	// Instantiate the Unit Under Test (UUT)
	charge charge_test(
		.num(num), 
		.n(n)
	);

	initial begin
		// Initialize Inputs
		num = 0;

		// Wait 100 ns for global reset to finish
		#100;
			// Add stimulus here
		mode = 1;
		type = 0;
		number = 15;
		clk = 1;
      always #100 clk = ~clk;
	end
      
endmodule

