all: my_string.o count_bits.o
	gcc -g -Wall -ansi -pedantic my_string.c count_bits.c -o my_string

my_string.o: my_string.c
	gcc -c -Wall -ansi -pedantic -g my_string.c -o my_string.o

count_bits.o: my_string.c
	gcc -c -Wall -ansi -pedantic -g count_bits.c -o count_bits.o


clean:
	rm *.o
