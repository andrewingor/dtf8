//DTF-8: Data Transmission Format coder
//More into dtf8.rfc

static char rev[] = "$Id$";

#include <stdlib.h>
#include <stdio.h>

typedef void(*Handle)(void);

Handle Run = NULL;
Handle **TableOf;
//
static int Event = 0, State = 0;

//
void begin(
) {
	Event = getchar();
	if (EOF == Event) exit(0);
	else
	    goto *TableOf[State][Event];
}

//
void func1(
) {
	printf("HANDLE\n");
	goto *Run;
}

//
typedef struct {
	unsigned char from, to; //Events for handling
	Handle newHandle;	//Handle for events
	void* ret;		//Return to point
} func_handle;
//
static unsigned char heap[ sizeof(func_handle) ];

void handle(
) {	func_handle* args = (func_handle*)heap;

	do {
	       TableOf[State][args->from] = args->newHandle;
	}
	while (args->from++ != args->to);

	goto *(args->ret);
}

//
static
Handle	  state1[256]
	, state2[256]
	, *table[2] = { state1, state2 };
//
int main( int	argc
	, char* argv[]
) {
	Run = begin;
	TableOf = table;

	func_handle* args = (func_handle*)heap;
	args->from	= 0;
	args->to	= 255;
        args->newHandle = func1;
        args->ret	= Run;

	Handle start = handle; goto *start;
}

