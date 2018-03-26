//
//

#include <stdlib.h>
#include <stdio.h>

static char revision[] = "$Id$";

typedef void(*Handle)(void);

extern Handle Begin, End, Init, Input;
extern Handle **TableOf;

extern int State, size, iter;

extern unsigned char Event[8];

typedef struct {
	unsigned char from, to; //Events range for handling
	Handle newHandle;	//Handle for events
	void* jump;		//Jump to pointer
} unit;

void	begin();
void	end();
void	init();
void	start();
void	input();
void	next_state();

void	ascii();
void	block();

