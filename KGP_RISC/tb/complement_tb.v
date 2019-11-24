`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   22:51:33 10/30/2019
// Design Name:   twos_complement
// Module Name:   D:/My Study Folder/3rd Year/Sem 5/COA/Lab/Assignment 10/CPU/complement_tb.v
// Project Name:  blk_mem_gen_v7_3
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: twos_complement
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module complement_tb;

	// Inputs
	reg [31:0] inp1;

	// Outputs
	wire [31:0] out;

	// Instantiate the Unit Under Test (UUT)
	twos_complement uut (
		.inp1(inp1), 
		.out(out)
	);

	initial begin
		// Initialize Inputs
		inp1 = 0;

		// Wait 100 ns for global reset to finish
		#100;
		
		inp1=32;
        
		// Add stimulus here

	end
      
endmodule

