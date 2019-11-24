reg_map = {	'$zero': "00000", 
			'$v1': '00001', 
			'$v2':'00010', 
			'$a0':'00011',
			'$a1':'00100',
			'$a2':'00101',
			'$a3':'00110',
			'$t0':'00111',
			'$t1':'01000',
			'$t2':'01001',
			'$t3':'01010',
			'$t4':'01011',
			'$t5':'01100',
			'$t6':'01101',
			'$t7':'01110',
			'$gp':'01111',
			'$sp':'10000',
			'$fp':'10001',
			'$ra':'10010',
			'$msp':'10011',
			'$lsp':'10100',
			'$s0':'10101',
			'$s1':'10110',
			'$s2':'10111',
			'$s3':'11000',
			'$s4':'11001',
			'$s5':'11010',
			'$s6':'11011',
			'$s7':'11100',
			'$t8':'11101',
			'$t9':'11110',
			'$t10':'11111',
			}

op_code_map = {	'addi':'001',
				'compi':'001',
				'add':'000',
				'multu':'000',
				'mult':'000',
				'comp':'000',
				'and':'000',
				'xor':'000',
				'shll':'000',
				'shrl':'000',
				'shra':'000',
				'shrlv':'000',
				'shllv':'000',
				'shrav':'000',
				'lw':'010',
				'sw':'010',
				'ret':'011',
				'br':'100',
				'bz':'011',			
				'bnz':'011',			
				'bcy':'011',			
				'bncy':'011',			
				'bs':'011',			
				'bns':'011',			
				'bv':'011',			
				'bnv':'011',			
				'call':'011',
				'b':'011',
				}


fn_code_map = {	'addi':'00',
				'compi':'01',
				'add':'0011',
				'multu':'1010',
				'mult':'1011',
				'comp':'0010',
				'and':'0001',
				'xor':'0000',
				'shll':'0100',
				'shrl':'0101',
				'shra':'1000',
				'shrlv':'0111',
				'shllv':'0110',
				'shrav':'1001',
				'lw':'0',
				'sw':'1',
				'ret':'1010',
				'bz':'0001',			
				'bnz':'0010',			
				'bcy':'0011',			
				'bncy':'0100',			
				'bs':'0101',			
				'bns':'0110',			
				'bv':'0111',			
				'bnv':'1000',			
				'call':'1001',
				'b':'0000',
				}
filew = open("intmem.coe", 'w')
file = open("Binary_Search.s", 'r')

st1 = "memory_initialization_radix=2;\nmemory_initialization_vector=\n"
filew.write(st1)
for line in file:
	if(line[-1]=='\n'):
		line = line[:-1]
	
	if(line=='begin'):
		filew.write('11100000000000000000000000000000,\n')
		continue

	if(line=='end'):
		filew.write('11111111111111111111111111111111;')
		continue

	line_mod = ''
	for char in line:
		if(char==','):
			if(line_mod[-1]!=' '):
				line_mod = line_mod+' '
		elif(char=='('):
			line_mod = line_mod + ' '
		elif(char==')'):
			line_mod = line_mod
		elif(char==' '):
			if(line_mod[-1]!=' '):
				line_mod = line_mod + ' '
		else:
			line_mod = line_mod + char
	
	tokens = line_mod.split()
	line_trans =  ''
	if(tokens[0]=='ret'):
		line_trans = '011'+'0000000000000000000000000'+'1010'
	elif(tokens[0]=='br'):
		line_trans = '100'+reg_map[tokens[1]]+'000000000000000000000000'
	elif(op_code_map[tokens[0]]=='000'):
		if((fn_code_map[tokens[0]] == '0100') or (fn_code_map[tokens[0]]=='0101') or (fn_code_map[tokens[0]]=='1000')):
			line_trans = '000' + reg_map[tokens[1]] + '00000'
			
			imm = bin(int(tokens[2]))[2:]
			pad = '0'*(5 - len(imm))
			line_trans = line_trans + pad + imm + fn_code_map[tokens[0]] + '0000000000'
		else:
			line_trans = '000' + reg_map[tokens[1]] + reg_map[tokens[2]] + '00000' + fn_code_map[tokens[0]] + '0000000000'
	elif(op_code_map[tokens[0]]=='001'):
		line_trans = '001'+ reg_map[tokens[1]]
		
		imm = bin(int(tokens[2]))[2:]
		#filew.write(imm)
		pad = '0'*(22 - len(imm))
		#filew.write(len(pad))
		line_trans = line_trans + pad + imm + fn_code_map[tokens[0]]
	
	elif(op_code_map[tokens[0]]=='011'):
		
		imm = bin(int(tokens[1]))[2:]
		pad = '0'*(25 - len(imm))
		line_trans = '011' + pad + imm + fn_code_map[tokens[0]]
	elif(tokens[0]=='lw' or tokens[0]=='sw'):
		line_trans = '010' + reg_map[tokens[3]] + reg_map[tokens[1]]
		
		imm = bin(int(tokens[2]))[2:]
		pad = '0'*(18 - len(imm))
		line_trans = line_trans + pad + imm + fn_code_map[tokens[0]]
	filew.write(line_trans+',\n')


	 