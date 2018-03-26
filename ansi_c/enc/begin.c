//begin input data, call handles 
//
#include "dtf8enc.h"

union Data in;

//
void begin(
) {
	if (EOF == in.c) goto *End;
	in.c = getchar();
	goto *State;
}
