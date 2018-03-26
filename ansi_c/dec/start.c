//start Set first state and goto begin

#include "dtf8.h"

void start (
) {
	State = 0;
	goto *Input;
}
