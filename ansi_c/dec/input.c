//input IO buffer
//
#include "dtf8.h"

unsigned char Event[8];

int size = 0, iter = 0;

static union { int c; unsigned char byte; } in;

//
void input(
) {
	if ( in.c == EOF) goto *End;
	iter ^= iter;
	size ^= size;
	do { 
		if(EOF == (in.c = getchar())) break;
		Event[ size++] = in.byte;
	}
	while(size < 8);

	goto *Begin;
}
