my_string: my_string.o
	gcc -g -Wall -ansi -pedantic my_string.c -o my_string

my_string.o: my_string.c
	gcc -c -Wall -ansi -pedantic -g my_string.c -o my_string.o


clean:
	rm *.o
