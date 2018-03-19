#
#

dtf8: dtf8.c
		cc -I./  dtf8.c -o dtf8
#
clean:
	rm -rfv a.out dtf8 

