//handle: Setup handle of Event
//
#include "dtf8.h"

static circ hand[] = {
	  {   0, 127, ascii, init  }
	, { 128, 255, block, begin }
};

static int i = 0;

void init(
) {
	do TableOf[ State ][ hand[i].from ] = hand[i].newHandle;
	while ( hand[i].from++ != hand[i].to );

	goto  *(hand[i++].jump);
}

