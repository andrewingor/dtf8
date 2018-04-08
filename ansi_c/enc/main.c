//DTF-8: Data Transmission Format encoder
//

#include "dtf8enc.h"

Handle	  Begin = begin
	, Init  = init
	, End   = end
	, State = recv
	;
//
int main( int	argc
	, char* argv[]
) {
	goto  *Init;
}
