all: my_set.o stack.o
	gcc -g -Wall -ansi -pedantic stack.o -o stack
	gcc -g -Wall -ansi -pedantic my_set.o -o my_set

my_set.o: my_set.c my_set.h stack.h
	gcc -c -Wall -ansi -pedantic my_set.c -o my_set.o

stack.o: stack.c stack.h
	gcc -c -Wall -ansi -pedantic stack.c -o stack.o


clean:
	rm *.o
