//
//

#include <stdlib.h>
#include <stdio.h>

static char revision[] = "$Id$";

typedef void(*Handle)(void);

extern Handle Begin, End;
extern Handle **TableOf;

extern int Event, State;

typedef struct {
	unsigned char from, to; //Events range for handling
	Handle newHandle;	//Handle for events
	void* jump;		//Jump to pointer
} circ;

void	begin();
void	end();
void	init();
void	ascii();
void	block();

