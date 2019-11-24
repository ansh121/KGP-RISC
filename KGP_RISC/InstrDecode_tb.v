`timescale 1ns / 1ps

//////////////////////////////////////////////////////////////////////////////////
// Name - Anshul Choudhary / Ayush Kumar
// Roll No. - 17CS10005 / 17CS10007
// Grp. No. - 47
//////////////////////////////////////////////////////////////////////////////////

module InstrDecode_tb;

	// Inputs
	reg [31:0] inst;

	// Outputs
	wire [2:0] opcode;
	wire [4:0] rsAddr;
	wire [4:0] rtAddr;
	wire [4:0] shamt;
	wire [3:0] fcode;
	wire [21:0] imm;
	wire [24:0] label;
	wire ROM_write;

	// Instantiate the Unit Under Test (UUT)
	InstDecode uut (
		.inst(inst), 
		.opcode(opcode), 
		.rsAddr(rsAddr), 
		.rtAddr(rtAddr), 
		.shamt(shamt), 
		.fcode(fcode), 
		.imm(imm), 
		.label(label), 
		.ROM_write(ROM_write)
	);

	initial begin
		// Initialize Inputs
		inst = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		inst=32'b00000100110000101000000111100101;
		
		#10
		inst=32'b00100100110000101000000111100101;
		
		#10
		inst=32'b01000100110000101000000111100101;
		
		#10
		inst=32'b01100100110000101000000111100101;
		
		#10
		inst=32'b10000100110000101000000111100101;

	end
      
endmodule

