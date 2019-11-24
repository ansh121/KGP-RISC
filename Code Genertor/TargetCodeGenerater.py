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

op_code_map = {	'addi':'00',
				'compi':'00',
				'add':'01',
				'multu':'01',
				'mult':'01',
				'comp':'01',
				'and':'01',
				'xor':'01',
				'shll':'00',
				'shrl':'00',
				'shra':'00',
				'shrlv':'01',
				'shllv':'01',
				'shrav':'01',
				'lw':'01',
				'sw':'01',
				'ret':'00',
				'br':'00',
				'bz':'10',			
				'bnz':'10',			
				'bcy':'10',			
				'bncy':'10',			
				'bs':'10',			
				'bns':'10',			
				'bv':'10',			
				'bnv':'10',			
				'call':'10',
				'b':'10',
				}


fn_code_map = {	'addi':'0000',
				'compi':'0001',
				'add':'0000',
				'multu':'0001',
				'mult':'0010',
				'comp':'0011',
				'and':'0100',
				'xor':'0101',
				'shll':'0010',
				'shrl':'0011',
				'shra':'0100',
				'shrlv':'0110',
				'shllv':'0111',
				'shrav':'1000',
				'lw':'1001',
				'sw':'1010',
				'ret':'0101',
				'br':'0110',
				'bz':'0000',			
				'bnz':'0001',			
				'bcy':'0010',			
				'bncy':'0011',			
				'bs':'0100',			
				'bns':'0101',			
				'bv':'0110',			
				'bnv':'0111',			
				'call':'1000',
				'b':'1001',
				}

file = open("assembly.s", 'r')

for line in file:
	if(line[-1]=='\n'):
		line = line[:-1]
	
	if(line=='begin'):
		print('11000000000000000000000000000000')
		continue

	if(line=='end'):
		print('11111111111111111111111111111111')
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
		line_trans = '00'+'00000'+'000000000000000000000'+'0101'
	elif(tokens[0]=='br'):
		line_trans = '00'+reg_map[tokens[1]]+'000000000000000000000'+'0110'
	elif(op_code_map[tokens[0]]=='00'):
		line_trans = '00'+ reg_map[tokens[1]]
		
		imm = bin(int(tokens[2]))[2:]
		pad = '0'*(21 - len(imm))
		line_trans = line_trans + pad + imm + fn_code_map[tokens[0]]
	
	elif(op_code_map[tokens[0]]=='10'):
		
		imm = bin(int(tokens[1]))[2:]
		pad = '0'*(26 - len(imm))
		line_trans = '10' + pad + imm + fn_code_map[tokens[0]]
	elif(tokens[0]=='lw' or tokens[0]=='sw'):
		line_trans = '01' + reg_map[tokens[3]] + reg_map[tokens[1]]
		
		imm = bin(int(tokens[2]))[2:]
		pad = '0'*(16 - len(imm))
		line_trans = line_trans + pad + imm + fn_code_map[tokens[0]]

	else:
		line_trans = '01' + reg_map[tokens[1]] + reg_map[tokens[2]] + '0000000000000000' + fn_code_map[tokens[0]]
	print(line_trans[:2]+''+line_trans[2:7]+''+line_trans[7:12]+''+line_trans[12:28]+''+line_trans[28:32])


	 