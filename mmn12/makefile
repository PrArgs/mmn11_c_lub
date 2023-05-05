all: my_set

my_set: my_set.o 
	gcc -g -Wall -ansi -lm -pedantic my_set.o -o my_set

my_set.o: my_set.c my_set.h 
	gcc -c -Wall -ansi -lm -pedantic my_set.c -o my_set.o

clean:
	rm *.o my_set

