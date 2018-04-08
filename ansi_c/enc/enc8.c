//enc8	 Encode single byte to 2 octets of DTF-8
//

#include "dtf8enc.h"

//
void enc8(
) {
puts("enc8");
	out[0] |= input[0] >> 4;
	out[1]  = input[0] << 4;
	out[1]  = out[1] >> 4 | 0x80;

	write(1, out, 2);
	size  = 0;
	State = recv;
	goto *Begin;
}
