`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   15:46:27 10/28/2019
// Design Name:   ALU
// Module Name:   C:/Users/student/Desktop/COA2019/Asgn10/temp/instFetch/alu_tb.v
// Project Name:  blk_mem_gen_v7_3
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: ALU
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module alu_tb;

	// Inputs
	reg [31:0] inp1;
	reg [31:0] inp2;
	reg [2:0] opcode;
	reg [3:0] fcode;

	// Outputs
	wire [31:0] out;
	wire [31:0] ext_out;
	wire carryFlag;
	wire zFlag;
	wire signFlag;
	wire overflowFlag;

	// Instantiate the Unit Under Test (UUT)
	ALU uut (
		.inp1(inp1), 
		.inp2(inp2), 
		.opcode(opcode), 
		.fcode(fcode), 
		.out(out), 
		.ext_out(ext_out), 
		.carryFlag(carryFlag), 
		.zFlag(zFlag), 
		.signFlag(signFlag), 
		.overflowFlag(overflowFlag)
	);

	initial begin
		// Initialize Inputs
		inp1 = 0;
		inp2 = 0;
		opcode = 0;
		fcode = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		
		$monitor("%d %d %b %d %d %d %b %b",opcode ,fcode, inp1, inp1, inp2, out, ext_out, out);
		 
		opcode = 1;
		
		#10;  
		inp1 = 2;
		inp2 = 3;
		fcode = 0;
		#10;  
		
		#10;  
		inp2 = 3;
		fcode = 1;
		#10;  
		 
		#10;
		opcode = 0;  
		inp1 = 2;
		inp2 = 3;
		fcode = 3;
		#10;  
		
		#10;  
		inp1 = 2;
		inp2 = 3;
		fcode = 10;
		#10;  
		
		#10;  
		inp1 = 2;
		inp2 = -3;
		fcode = 11;
		#10;  
		
		#10;  
		inp2 = 3;
		fcode = 2;
		#10;  
		
		#10;  
		inp1 = 2;
		inp2 = 3;
		fcode = 1;
		#10;  
		
		#10;  
		inp1 = 2;
		inp2 = 3;
		fcode = 0;
		#10;  
		
		#10;  
		inp1 = 2;
		inp2 = 3;
		fcode = 4;
		#10;  
		
		#10;  
		inp1 = 2;
		inp2 = 3;
		fcode = 5;
		#10;  
		
		#10;  
		inp1 = 2;
		inp2 = 3;
		fcode = 6;
		#10;  
		
		#10;  
		inp1 = 2;
		inp2 = 3;
		fcode = 7;
		#10;  
		
		#10;  
		inp1 = 1024;
		inp2 = 3;
		fcode = 8;
		#10;  
		
		#10;  
		inp1 = -1024;
		inp2 = 3;
		fcode = 9;
		#10;  

	end
      
endmodule

