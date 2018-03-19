#
#
#

obj = block.o ascii.o main.o begin.o init.o

#
dtf8coder: $(obj) dtf8.h 
	cc  -o dtf8coder $(obj)
#
main.o: main.c dtf8.h
	cc -c main.c
#
begin.o: begin.c dtf8.h
	cc -c begin.c
#
init.o: init.c dtf8.h
	cc -c init.c
#
ascii.o: ascii.c dtf8.h
	cc -c ascii.c
#
block.o: block.c dtf8.h
	cc -c block.c
#
clean:
	rm -rfv dtf8coder $(obj)

