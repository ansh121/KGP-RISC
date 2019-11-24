`timescale 1ns / 1ps

//////////////////////////////////////////////////////////////////////////////////
// Name - Anshul Choudhary / Ayush Kumar
// Roll No. - 17CS10005 / 17CS10007
// Grp. No. - 47
//////////////////////////////////////////////////////////////////////////////////

module Combinational_32x32_Multiplier(
   input [31:0] inp1,
	input [31:0] inp2,
	output [63:0] result
		 );

	parameter size = 32;   
	wire [(2*size*size)-1:0] p;        //assign size as input bits multiplyied by

	genvar i;        
	assign p[(2*size)-1 : 0] = inp1[0] ? inp2 : 0;  //first output size bits

	generate          
	for (i = 1; i < size; i = i+1)      
		begin: branch
			assign p[(size*(4+(2*(i-1))))-1 : (size*2)*i] = (inp1[i]? inp2<<i :0)+ p[(size*(4+(2*(i-2))))-1:(size*2)*(i-1)];      
		end
	endgenerate
	          
	assign result=p[(2*size*size)-1:(2*size)*(size-1)];     //taking last output size bits            

endmodule
