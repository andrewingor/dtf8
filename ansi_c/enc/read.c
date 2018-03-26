//read input stream
//
#include "dtf8enc.h"

unsigned char input[8];

int size = 0;

//
void read(
) {
	if (size < 8 && in.c != EOF
	) { 
		input[size++] = in.byte;
		goto *Begin;
	}
	//else
	switch (size) {
		case 8: State = enc64;
			break;
		case 1: State = enc8;
			break;
		default: State = enc16;
	}
	goto *State;
}
