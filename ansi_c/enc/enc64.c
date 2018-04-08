//enc64	 Encode 64 bits to 11 octets of DTF-8
//(c)2018 by goo.gl/FFF1Up

#include "dtf8enc.h"

int i, j;

//
void show_result();

void enc64(
) {
	i = 0; j = 0;
	for(;;){
		out[j] |= input[i] >> 4;	++j;
		out[j]  = input[i] << 4;	++i; --size;
		out[j]  = out[j] >> 2 | 0x80;
		out[j] |= input[i] >> 6;	++j;
		out[j]  = input[i] << 2;	++i; --size;
		out[j]  = out[j] >> 2 | 0x80;	++j;

		if (! (out[0] & 0x10) )
			     break; //0xE0 = Encoding 16 bits
		if (j == 11) break;

		out[j]  = input[i] >> 2 | 0x80;	++j;
		out[j]  = input[i] << 6;	++i; --size;
		out[j]  = out[j] >> 2 | 0x80;
	}
	//write(1, out, j);
	show_result();

printf("size=%d\n", size);
	if (size == 0) goto *Begin;

	State = (size == 1) ? enc8 : recv;
	goto *State;
}

void show_result(
) {
	printf("input\n");
	for (i = 0; i < 8; i++
	) {
		printf( "%c%c%c%c %c%c%c%c\n", 
			(input[i] & 0x80 ? '1':'0'), \
			(input[i] & 0x40 ? '1':'0'), \
			(input[i] & 0x20 ? '1':'0'), \
			(input[i] & 0x10 ? '1':'0'), \
			(input[i] & 0x08 ? '1':'0'), \
			(input[i] & 0x04 ? '1':'0'), \
			(input[i] & 0x02 ? '1':'0'), \
			(input[i] & 0x01 ? '1':'0')
		);
	}
	printf("output\n");
	for (i = 0; i < 11; i++
	) {
		printf( "%c%c%c%c %c%c%c%c\n", 
			(out[i] & 0x80 ? '1':'0'), \
			(out[i] & 0x40 ? '1':'0'), \
			(out[i] & 0x20 ? '1':'0'), \
			(out[i] & 0x10 ? '1':'0'), \
			(out[i] & 0x08 ? '1':'0'), \
			(out[i] & 0x04 ? '1':'0'), \
			(out[i] & 0x02 ? '1':'0'), \
			(out[i] & 0x01 ? '1':'0')
		);
	}
}
