`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   18:56:08 07/25/2020
// Design Name:   test1
// Module Name:   C:/Users/imannet/Desktop/test/testingStuf/customet_test.v
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

module customet_test;

	// Inputs
	reg num;

	// Outputs
	wire n;

	// Instantiate the Unit Under Test (UUT)
	customer customer_test (
		.num(num), 
		.n(n)
	);

	initial begin
		// Initialize Inputs
		num = 0;
		// Wait 100 ns for global reset to finish
		#100;
		// Add stimulus here
      mode = 0;
		in_money = 4'b1001;
		type = 0;
		number = 1;
		clk = 1;
		always #100 clk = ~clk;
	end
      
endmodule

