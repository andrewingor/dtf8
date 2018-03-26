//enc64	 Encode 8 byte
//

#include "dtf8enc.h"

//
void enc64(
) {
	for (int i = 0; i <= size; i++)
		putchar(input[i]);

	size ^= size;
	State = read;
	goto *Begin;
}
