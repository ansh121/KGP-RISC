`timescale 1ns / 1ps

//////////////////////////////////////////////////////////////////////////////////
// Name - Anshul Choudhary / Ayush Kumar
// Roll No. - 17CS10005 / 17CS10007
// Grp. No. - 47
//////////////////////////////////////////////////////////////////////////////////

module branch(
    input [2:0] opcode,
    input [3:0] fcode,
    input [7:0] branch_addr,
    input carryFlag,
    input zeroFlag,
    input overflowFlag,
    input signFlag,
    input [7:0] PC,
    output reg [7:0] branch_PC,
    output reg PC_select,
    output reg [31:0] ra
    );
    
initial begin
    branch_PC<=0;
    PC_select<=0;
    ra<=0;
    end

always @(opcode or fcode or branch_addr or carryFlag or zeroFlag or overflowFlag or signFlag or PC or ra)
    begin
    ra<=0; 
	  case(opcode)
		3'b011:
			begin
				case(fcode)
					4'd0:
						begin    
							branch_PC<=branch_addr[7:0];
							PC_select<=1;
						end
					4'd1:
						begin    
							if(zeroFlag==1) 
								 begin
									  branch_PC<=branch_addr[7:0];
									  PC_select<=1;
								 end
							else 
								 begin
									  PC_select<=0;
									  branch_PC<=0;
								 end
						end
					4'd2:
						begin   
							if(zeroFlag==0) 
								 begin
									  branch_PC<=branch_addr[7:0];
									  PC_select<=1;
								 end
							else 
								 begin
									  PC_select<=0;
									  branch_PC<=0;
								 end
						end
					4'd3:
						begin   
							if(carryFlag==1) 
								 begin
									  branch_PC<=branch_addr[7:0];
									  PC_select<=1;
								 end
							else 
								 begin
									  PC_select<=0;
									  branch_PC<=0;
								 end
						end
					4'd4:
						begin   
							if(carryFlag==0) 
								 begin
									  branch_PC<=branch_addr[7:0];
									  PC_select<=1;
								 end
							else 
								 begin
									  PC_select<=0;
									  branch_PC<=0;
								 end
						end
					4'd5:
						begin   
							if(signFlag==1) 
								 begin
									  branch_PC<=branch_addr[7:0];
									  PC_select<=1;
								 end
							else 
								 begin
									  PC_select<=0;
									  branch_PC<=0;
								 end
						end
					4'd6:
						begin 
							if(signFlag==0) 
								 begin
									  branch_PC<=branch_addr[7:0];
									  PC_select<=1;
								 end
							else 
								 begin
									  PC_select<=0;
									  branch_PC<=0;
								 end
						end
					4'd7:
						begin 
							if(overflowFlag==1) 
								 begin
									  branch_PC<=branch_addr[7:0];
									  PC_select<=1;
								 end
							else 
								 begin
									  PC_select<=0;
									  branch_PC<=0;
								 end
						end
					4'd8:
						begin 
							if(overflowFlag==0) 
								 begin
									  branch_PC<=branch_addr[7:0];
									  PC_select<=1;
								 end
							else 
								 begin
									  PC_select<=0;
									  branch_PC<=0;
								 end
						end
					4'd9:
						begin  
							branch_PC<=branch_addr[7:0];
							PC_select<=1;
							ra<=PC;  
						end
					4'd10:
						begin 
							branch_PC<=ra[7:0];
							PC_select<=1;
						end
					default:    
						begin 
							PC_select<=0;
							branch_PC<=0;
						end
			endcase
			end
			
		3'b100:
			 begin
				  branch_PC<=branch_addr[7:0];
				  PC_select<=1;
			 end
				 
		default:
			 begin
				  PC_select<=0;
				  branch_PC<=0;
			 end
        endcase
		end
endmodule

