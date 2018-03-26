//dtf8ench DTF-8 encoder global definition
//

#include <stdlib.h>
#include <stdio.h>

static char revision[] = "$Id$";

typedef void(*Handle)(void);

extern Handle Begin, End, Init, State;

extern int size;
extern unsigned char input[8], output[16];

extern union Data { int c; unsigned char byte; } in;

void	begin();
void	init();
void	end();

void	read();
void	enc64();
void	enc16();
void	enc8();

void	tail();

