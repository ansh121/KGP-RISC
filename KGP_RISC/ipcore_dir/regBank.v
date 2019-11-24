`timescale 1ns / 1ps

//////////////////////////////////////////////////////////////////////////////////
// Name - Anshul Choudhary / Ayush Kumar
// Roll No. - 17CS10005 / 17CS10007
// Grp. No. - 47
//////////////////////////////////////////////////////////////////////////////////

module regBank(
   input reset,
	input clk,
	input RegWrite,				
	input [4:0] wrAddr,			
	input [31:0] wrData,  
	input [31:0] wrDataExt,
	input [4:0] rdAddrA,       
	output reg [31:0] rdDataA,
	input [4:0] rdAddrB,
	output reg [31:0] rdDataB,
	output [31:0] rout
  );

	reg [31:0] r[31:0];
	reg [6:0] size,i;
	wire [31:0] tempA, tempB;
	
	initial begin
		for(i=0;i<32;i=i+1)
			r[i] = 32'b0;
	end
			
	assign rout=r[7];
	
	always @(*) 							// Read register
		begin
			if(rdAddrB<32) begin
					rdDataB=r[rdAddrB];
				end
			else begin
					rdDataB=32'hXXXXXXXX;
				end
				
			if(rdAddrA<32) begin
					rdDataA=r[rdAddrA];
				end
			else begin
					rdDataA=32'hXXXXXXXX;
				end
		end
	
	always @(posedge clk or posedge reset)            //Write register
		begin
		if(reset==1)
			begin
				for(i=0;i<32;i=i+1)
					r[i] = 32'b0;
			end
	   else if (RegWrite==1) 
			begin
				r[wrAddr]=wrData;
				r[19]=wrDataExt;
			end
		
		end
		
		
endmodule
