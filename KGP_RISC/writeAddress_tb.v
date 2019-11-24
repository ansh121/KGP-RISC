`timescale 1ns / 1ps

//////////////////////////////////////////////////////////////////////////////////
// Name - Anshul Choudhary / Ayush Kumar
// Roll No. - 17CS10005 / 17CS10007
// Grp. No. - 47
//////////////////////////////////////////////////////////////////////////////////

module writeAddress_tb;

	// Inputs
	reg [2:0] opcode;
	reg [3:0] fcode;
	reg [4:0] rsAddr;
	reg [4:0] rtAddr;
	reg [31:0] ALU_Out;
	reg [31:0] ALU_ExtOut;
	reg [31:0] ra;
	reg [31:0] ROM_Out;

	// Outputs
	wire [4:0] wrAddr;
	wire RegWrite;
	wire [31:0] wrData;
	wire [31:0] wrDataExt;

	// Instantiate the Unit Under Test (UUT)
	writeAddress uut (
		.opcode(opcode), 
		.fcode(fcode), 
		.rsAddr(rsAddr), 
		.rtAddr(rtAddr), 
		.ALU_Out(ALU_Out), 
		.ALU_ExtOut(ALU_ExtOut), 
		.ra(ra), 
		.ROM_Out(ROM_Out), 
		.wrAddr(wrAddr), 
		.RegWrite(RegWrite), 
		.wrData(wrData), 
		.wrDataExt(wrDataExt)
	);

	initial begin
		// Initialize Inputs
		opcode = 0;
		fcode = 0;
		rsAddr = 0;
		rtAddr = 0;
		ALU_Out = 0;
		ALU_ExtOut = 0;
		ra = 0;
		ROM_Out = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		fcode = 4'b1010;
		
		#10;
		fcode = 4'b1011;
		
		#10;
		opcode = 3'b001;
		fcode = 4'b1010;
		
		#10;
		fcode = 4'b1011;
		
		#10;
		fcode = 0;
		
		#10;
		opcode = 3'd3;
		fcode = 4'd9;
		
		#10;
		fcode = 4'd5;
		
		#10;
		opcode = 3'd2;
		fcode = 4'd0;
		
		#10;
		fcode = 4'd6;
		
		#10;
		opcode = 3'd4;

	end
      
endmodule

