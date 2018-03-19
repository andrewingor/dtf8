//DTF-8: Data Transmission Format coder
//

#include "dtf8.h"


Handle	  Begin = begin
	, End   = end
	, Init  = init
	;

int State = 0, Event = 0;

Handle	  state1[256]
	, state2[256]
	, *table[2] = { state1, state2 };

Handle **TableOf = table;

//
int main( int	argc
	, char* argv[]
) {
	goto  *Init;
}
