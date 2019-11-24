`timescale 1ns / 1ps

//////////////////////////////////////////////////////////////////////////////////
// Name - Anshul Choudhary / Ayush Kumar
// Roll No. - 17CS10005 / 17CS10007
// Grp. No. - 47
//////////////////////////////////////////////////////////////////////////////////

module ALU(
    input clk,
    input [31:0] ALU_inp1,
    input [31:0] ALU_inp2,
    input [2:0] opcode,
    input [3:0] fcode,
    output reg [31:0] ALUout,
    output reg [31:0] ALU_extout,
    output reg carryFlag,
    output reg zeroFlag,
    output reg signFlag,
    output reg overflowFlag
    );

reg c31, c32;
reg [31:0] mag1, mag2;

wire w_c31;
wire [31:0] in1;
wire [31:0] in2;
wire [31:0] w_sum_out;

wire [31:0] sr,sl,as;  //sr -> shifted_right, sl -> shifted_left, a -> arithmetic_shifted
wire [63:0] p, p_comp, p_unsigned; // p -> product, p_comp -> product_complement

wire [31:0] inp1_comp, inp2_comp;

twos_complement C1 (ALU_inp1,inp1_comp);
twos_complement C2 (ALU_inp2,inp2_comp);

/*
initial begin 
    mag1 = (ALU_inp1[31]) ? inp1_comp : ALU_inp1;
    mag2 = (ALU_inp2[31]) ? inp2_comp : ALU_inp2;
end
*/
assign in1 = mag1;
assign in2 = mag2;

hybrid_adder HA(ALU_inp1,ALU_inp2,w_sum_out,w_c31);
Barrel_Shifter BSR(ALU_inp1,ALU_inp2[4:0],1'b0,sr);
Barrel_Shifter BSL(ALU_inp1,ALU_inp2[4:0],1'b1,sl);
Arithmetic_Barrel_Right_Shifter ABRS(ALU_inp1, ALU_inp2[4:0], as);
Combinational_32x32_Multiplier Mult_32x32(in1, in2, p);
Combinational_32x32_Multiplier Mult_32x32_unsigned(ALU_inp1, ALU_inp2, p_unsigned);
twos_complement_64 C3(p, p_comp);

always @(negedge clk)
    begin
        mag1 = (ALU_inp1[31]) ? inp1_comp : ALU_inp1;
        mag2 = (ALU_inp2[31]) ? inp2_comp : ALU_inp2;
        case(opcode) 
            3'b000: begin              
                    case(fcode)
                        //xor
                        4'b0000: begin     
                            ALUout=ALU_inp1^ALU_inp2;
                            ALU_extout = 0;
                            overflowFlag=1'b0;
                            carryFlag=1'b0;
                            zeroFlag=(ALUout==0)?1'b1:1'b0;
                            signFlag=ALUout[31];
                        end
                        //and
                        4'b0001:    begin   
                            ALUout=ALU_inp1&ALU_inp2;
                            ALU_extout = 0;
                            overflowFlag=1'b0;
                            carryFlag=1'b0;
                            zeroFlag=(ALUout==0)?1'b1:1'b0;
                            signFlag=ALUout[31];
                        end 
                        //comp
                        4'b0010:    begin       
                            ALUout=inp2_comp;
                            ALU_extout = 0;
                            overflowFlag=1'b0;
                            carryFlag=1'b0;
                            zeroFlag=(ALUout==0)?1'b1:1'b0;
                            signFlag=ALUout[31];
                        end
                        //add
                        4'b0011:    begin       
                            ALUout = w_sum_out;
                            carryFlag=w_c31;
                            ALU_extout = 0;
                            overflowFlag=carryFlag^ALUout[31]^ALU_inp1[31]^ALU_inp2[31];
                            zeroFlag=(ALUout==0)?1'b1:1'b0;
                            signFlag=ALUout[31];
                        end 
                        //shll
                        4'b0100:    begin       
                            ALUout=sl;
                            ALU_extout = 0;
                            overflowFlag=1'b0;
                            carryFlag=1'b0;
                            zeroFlag=(ALUout==0)?1'b1:1'b0;
                            signFlag=ALUout[31];
                        end
                        //shrl
                        4'b0101:    begin       
                            ALUout=sr;
                            ALU_extout = 0;
                            overflowFlag=1'b0;
                            carryFlag=1'b0;
                            zeroFlag=(ALUout==0)?1'b1:1'b0;
                            signFlag=ALUout[31];
                        end
                        //shllv
                        4'b0110:    begin       
                            ALUout=sl;
                            ALU_extout = 0;
                            overflowFlag=1'b0;
                            carryFlag=1'b0;
                            zeroFlag=(ALUout==0)?1'b1:1'b0;
                            signFlag=ALUout[31];
                        end 
                        //shrlv
                        4'b0111:    begin       
                            ALUout=sr;
                            ALU_extout = 0;
                            overflowFlag=1'b0;
                            carryFlag=1'b0;
                            zeroFlag=(ALUout==0)?1'b1:1'b0;
                            signFlag=ALUout[31];
                        end 
                        //shra
                        4'b1000:    begin       
                            ALUout=as;
                            ALU_extout = 0;
                            overflowFlag=1'b0;
                            carryFlag=1'b0;
                            zeroFlag=(ALUout==0)?1'b1:1'b0;
                            signFlag=ALUout[31];
                        end 
                        //shrav
                        4'b1001:    begin       
                            ALUout=as;
                            ALU_extout = 0;
                            overflowFlag=1'b0;
                            carryFlag=1'b0;
                            zeroFlag=(ALUout==0)?1'b1:1'b0;
                            signFlag=ALUout[31];
                        end
                        //Signed multiply
                        4'b1011: begin  
                            zeroFlag=(p==0)?1'b1:1'b0;
                            signFlag=(zeroFlag==1)?1'b0:(ALU_inp1[31]^ALU_inp2[31]);
                            {ALU_extout, ALUout}=(signFlag)? p_comp : p;
                            overflowFlag=1'b0;
                            carryFlag=1'b0;
                            
                        end
                        // Unsigned Multiply
                        4'b1010: begin  
                            {ALU_extout, ALUout} = p_unsigned;
                            overflowFlag=1'b0;
                            carryFlag=1'b0;
                            zeroFlag=({ALU_extout,ALUout}==0)?1'b1:1'b0;
                            signFlag=0;
                        end

                        default:
                            begin
                                ALUout = 0;
                                ALU_extout = 0;
                            end
                    endcase
                end
                
             3'b001:
                begin
                    case(fcode)            //Immediate type instructions
                        4'b0000:    begin               //addi
                            ALUout = w_sum_out;
                            carryFlag=w_c31;
                            ALU_extout = 0;
                            overflowFlag=carryFlag^ALUout[31]^ALU_inp1[31]^ALU_inp2[31];
                            zeroFlag=(ALUout==0)?1'b1:1'b0;
                            signFlag=ALUout[31];
                        end 
                        4'b0001:    begin
                            ALUout=inp2_comp;      //compi
                            ALU_extout = 0;
                            overflowFlag=1'b0;
                            carryFlag=1'b0;
                            zeroFlag=(ALUout==0)?1'b1:1'b0;
                            signFlag=ALUout[31];
                        end 
                        default:
                            begin
                                ALUout = 0;
                                ALU_extout = 0;
                            end

                    endcase
                end
            default:  
                begin              //default: keep everything 0
                    ALUout=32'b0;
                    ALU_extout=0;
                end
        endcase
    end
endmodule
