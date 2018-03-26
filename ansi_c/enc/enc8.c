//enc8	 Encode single byte to 2 octets of DTF-8 sequence
//

#include "dtf8enc.h"

//
void enc8(
) {
	printf("enc8\n");
	size ^= size;
	State = read;
	goto *Begin;
}
