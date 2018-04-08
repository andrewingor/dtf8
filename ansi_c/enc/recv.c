//recv input stream
//
#include "dtf8enc.h"

unsigned char input[8];
unsigned char  out[16];

int size = 0;

//
void recv(
) {

printf("recv::size=%d\n", size);

	if (in.c != EOF && size < 8
	) { 
		input[size++] = in.byte;
		goto *Begin;
	}
	//else
	State = enc64;
	if (1 == size
	) {
	       	out[0] = 0xC0;
		State  = enc8;
	}
	else { out[0] = (size == 8) ? 0xF0 : 0xE0; }

	goto *State;
}
