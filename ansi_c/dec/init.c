//handle: Setup handle of Event
//
#include "dtf8.h"

static unit hand[] = {
	  {   0, 255, input, next_state }
	, {   0, 255, enc64, next_state }
	, {   0, 255, enc16, next_state }
	, {   0, 255, enc8,  next_state }
	, {   0, 255, block, start }
};

static int i = 0;

void init(
) {
	do TableOf[ State ][ hand[i].from ] = hand[i].newHandle;
	while ( hand[i].from++ != hand[i].to );

	goto  *(hand[i++].jump);
}

