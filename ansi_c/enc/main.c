//DTF-8: Data Transmission Format encoder
//

#include "dtf8enc.h"

unsigned char output[16];

Handle	  Begin = begin
	, Init  = init
	, End   = end
	, State = read
	;
//
int main( int	argc
	, char* argv[]
) {
	goto  *Init;
}
