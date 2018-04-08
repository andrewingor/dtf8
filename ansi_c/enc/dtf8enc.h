//dtf8ench DTF-8 encoder global definition
//(c)2018 by goo.gl/FFF1Up

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

static char revision[] = "$Id$";

typedef void(*Handle)(void);

extern Handle Begin, End, Init, State;

extern int size, i, j;
extern unsigned char input[8], out[16];

extern union Data { int c; unsigned char byte; } in;

void	begin();
void	init();
void	end();

void	recv();
void	enc64();
void	enc8();

