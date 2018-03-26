#
#
#

compiler = cc
obj = next_state.o block.o ascii.o main.o begin.o end.o init.o \
        start.o input.o

#
dtf8enc: $(obj) dtf8.h 
	$(compiler) -o dtf8enc $(obj)
#
main.o: main.c dtf8.h
	$(compiler) -c main.c
#
input.o: input.c dtf8.h
	$(compiler) -c input.c
#
end.o: end.c dtf8.h
	$(compiler) -c end.c
#
begin.o: begin.c dtf8.h
	$(compiler) -c begin.c
#
init.o: init.c dtf8.h
	$(compiler) -c init.c
#
ascii.o: ascii.c dtf8.h
	$(compiler) -c ascii.c
#
block.o: block.c dtf8.h
	$(compiler) -c block.c
#
next_state.o: next_state.c dtf8.h
	$(compiler) -c next_state.c
#
start.o: start.c dtf8.h
	$(compiler) -c start.c
#
clean:
	rm -rfv dtf8coder $(obj)

