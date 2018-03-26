//enc16	 Encode 2 bytes to 3 octets of DTF-8 sequence
//

#include "dtf8enc.h"

//
void enc16(
) {
	printf("enc16\n");

	size ^= size;
	State = read;
	goto *Begin;
}
