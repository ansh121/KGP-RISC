`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   15:20:32 10/30/2019
// Design Name:   hybrid_adder
// Module Name:   C:/Users/student/Desktop/COA2019/Asgn10/temp/instFetch/ha_tb.v
// Project Name:  blk_mem_gen_v7_3
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: hybrid_adder
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module ha_tb;

	// Inputs
	reg [31:0] a;
	reg [31:0] b;

	// Outputs
	wire [31:0] sum;
	wire cout;

	// Instantiate the Unit Under Test (UUT)
	hybrid_adder uut (
		.a(a), 
		.b(b), 
		.sum(sum), 
		.cout(cout)
	);

	initial begin
		// Initialize Inputs
		a = 0;
		b = 0;
		$monitor ("%d %d %d %d",a,b,sum,cout);
		// Wait 100 ns for global reset to finish
		#100;
      a = 2;
		b = 3;
		// Add stimulus here
		
		#10
		a = 32'b01010101010101010101010101010101;
		b = 32'b00101010101010101010101010101010;
		

	end
      
endmodule

