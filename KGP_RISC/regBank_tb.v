`timescale 1ns / 1ps

//////////////////////////////////////////////////////////////////////////////////
// Name - Anshul Choudhary / Ayush Kumar
// Roll No. - 17CS10005 / 17CS10007
// Grp. No. - 47
//////////////////////////////////////////////////////////////////////////////////

module regBank_tb;

	// Inputs
	reg reset;
	reg clk;
	reg RegWrite;
	reg [4:0] wrAddr;
	reg [31:0] wrData;
	reg [31:0] wrDataExt;
	reg [4:0] rdAddrA;
	reg [4:0] rdAddrB;

	// Outputs
	wire [31:0] rdDataA;
	wire [31:0] rdDataB;
	wire [31:0] rout;

	// Instantiate the Unit Under Test (UUT)
	regBank uut (
		.reset(reset), 
		.clk(clk), 
		.RegWrite(RegWrite), 
		.wrAddr(wrAddr), 
		.wrData(wrData), 
		.wrDataExt(wrDataExt), 
		.rdAddrA(rdAddrA), 
		.rdDataA(rdDataA), 
		.rdAddrB(rdAddrB), 
		.rdDataB(rdDataB), 
		.rout(rout)
	);

	initial begin
		// Initialize Inputs
		reset = 0;
		clk = 0;
		RegWrite = 0;
		wrAddr = 0;
		wrData = 0;
		wrDataExt = 0;
		rdAddrA = 0;
		rdAddrB = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		RegWrite=1;
		wrAddr=5'd10;
		wrData=32'b10101;
		wrDataExt = 32'b1001101;
		
		#20
		RegWrite=0;
		rdAddrA=5'd15;
		rdAddrB=5'd10;

		#20
		RegWrite=1;
		wrAddr=5'd15;
		wrData=32'b00011;
		wrDataExt = 32'b1101001;
		
	end
   always
		#10 clk=!clk;
      
endmodule

