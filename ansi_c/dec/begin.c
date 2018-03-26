//begin input data, call handles 
//
#include "dtf8.h"

static union { int c; unsigned char byte; } in;

//
void begin(
) {
	if(EOF == (in.c = getchar())
	) {
	}
	goto *TableOf[State][ Event[ iter++] ];
}

unsigned char Event[8];

int size = 0, iter = 0;


//
void input(
) {
	if ( in.c == EOF) goto *End;
	iter ^= iter;
	size ^= size;
	do { 
		Event[ size++] = in.byte;
	}
	while(size < 8);

	goto *Begin;
}
