`timescale 1ns / 1ps

//////////////////////////////////////////////////////////////////////////////////
// Name - Anshul Choudhary / Ayush Kumar
// Roll No. - 17CS10005 / 17CS10007
// Grp. No. - 47
//////////////////////////////////////////////////////////////////////////////////

module hybrid_adder(
    input [31:0] a,
    input [31:0] b,
    output [31:0] sum,
    output cout
    );
	 
	 wire cin = 0; //Hardcoding cin as 0
	 wire [7:0] c;			// Cout for summation of last 4 bit 
	 four_bit_CLA_adder Adder1(a[3:0], b[3:0], cin, sum[3:0], c[0]); 
	 four_bit_CLA_adder Adder2(a[7:4], b[7:4], c[0], sum[7:4], c[1]); 
	 four_bit_CLA_adder Adder3(a[11:8], b[11:8], c[1], sum[11:8], c[2]);
	 four_bit_CLA_adder Adder4(a[15:12], b[15:12], c[2], sum[15:12], c[3]);
	 four_bit_CLA_adder Adder5(a[19:16], b[19:16], c[3], sum[19:16], c[4]);
	 four_bit_CLA_adder Adder6(a[23:20], b[23:20], c[4], sum[23:20], c[5]);
	 four_bit_CLA_adder Adder7(a[27:24], b[27:24], c[5], sum[27:24], c[6]);
	 four_bit_CLA_adder Adder8(a[31:28], b[31:28], c[6], sum[31:28], cout);
	 
endmodule

module four_bit_CLA_adder(input [3:0]a, input [3:0]b, input cin, output [3:0]sum, output cout);
	 wire [3:0]G,P,C; 	// wire for generator propagator and carry
	 assign G = a&b; 		// G(generator) = a&b
	 assign P = a^b;		// p(propagator) = a ^ b
	 assign C[0] = cin; 	// C[0] = cin
	 // Calculating carry for adddition of each bit
	 assign C[1]=G[0] + (P[0]&C[0]);
	 assign C[2]=G[1] + (P[1]&G[0]) + (P[1]&P[0]&cin);
	 assign C[3]=G[2] + (P[2]&G[1]) + (P[2]&P[1]&G[0]) +  (P[2]&P[1]&P[0]&cin);
	 assign cout=G[3]+ (P[3]&G[2]) + (P[3]&P[2]&G[1]) +  (P[3]&P[2]&P[1]&G[0]) + (P[3]&P[2]&P[1]&P[0]&cin);	 
	 // sum = a ^ b ^ C(carry)
	 assign sum = P^C;
endmodule

