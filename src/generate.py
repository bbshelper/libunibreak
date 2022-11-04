#!/usr/bin/env python3

BMP = 65536

def chunks(arr, n):
	for i in range(0, len(arr), n):
		yield i, arr[i:i + n]

with open('LineBreak.txt') as fp:
	bmp = ['XX'] * BMP
	for line in fp:
		if len(line) > 1 and not line.startswith('#'):
			pos = line.find(';')
			codepoints = line[:pos]
			prop = line[pos + 1:line.find(' ')]
			pos = codepoints.find('..')
			if pos > 0:
				start, end = int(codepoints[:pos], 16), int(codepoints[pos + 2:], 16)
			else:
				start = int(codepoints, 16)
				end = start
			if start >= BMP:
				print(f'\t{{ {hex(start)}, {hex(end)}, LBP_{prop} }},')
			else:
				for i in range(start, end + 1):
					bmp[i] = prop

for i, chunk in chunks(bmp, 16):
	for prop in chunk:
		print('LBP_', prop, sep='', end=', ')
	print('//', hex(i))
