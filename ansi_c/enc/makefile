#

compiler = cc
#
obj = main.o begin.o init.o end.o recv.o enc64.o \
      enc16.o  enc8.o 
#
libs = 
#
flags = 

#
dtf8enc: $(obj) dtf8enc.h 
	$(compiler) -o dtf8enc $(obj) $(libs) $(flags)
#
main.o: main.c dtf8enc.h
	$(compiler) -c main.c
#
recv.o: recv.c dtf8enc.h
	$(compiler) -c recv.c
#
end.o: end.c dtf8enc.h
	$(compiler) -c end.c
#
begin.o: begin.c dtf8enc.h
	$(compiler) -c begin.c
#
init.o: init.c dtf8enc.h
	$(compiler) -c init.c
#
enc64.o: enc64.c dtf8enc.h
	$(compiler) -c enc64.c
#
enc16.o: enc16.c dtf8enc.h
	$(compiler) -c enc16.c
#
enc8.o: enc8.c dtf8enc.h
	$(compiler) -c enc8.c
#
clean:
	rm -rfv dtf8enc $(obj)

