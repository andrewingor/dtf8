//next_state For init
//

#include "dtf8.h"

//
void next_state (
) {
	++State;
	goto *Init;
}
