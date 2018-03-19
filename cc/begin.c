//begin Input data, call handles 
//
#include "dtf8.h"

//
void begin(
) {
	Event = getchar();
	if (EOF == Event) exit(0);
	else
	    goto *TableOf[State][Event];
}
