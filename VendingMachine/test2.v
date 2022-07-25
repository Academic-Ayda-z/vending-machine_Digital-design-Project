`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   19:25:53 07/24/2020
// Design Name:   test1
// Module Name:   C:/Users/imannet/Desktop/test/testingStuf/test2.v
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

module test2;

	// Inputs
	reg num;

	// Outputs
	wire n;

	// Instantiate the Unit Under Test (UUT)
	test1 uut (
		.num(num), 
		.n(n)
	);

	initial begin
		// Initialize Inputs
		num = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

