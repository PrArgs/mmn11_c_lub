all: my_string.o count_bits.o
	gcc -g -Wall -ansi -pedantic count_bits.o -o count_bits
	gcc -g -Wall -ansi -pedantic my_string.o -o my_string

my_string.o: my_string.c
	gcc -c -Wall -ansi -pedantic my_string.c -o my_string.o

count_bits.o: count_bits.c
	gcc -c -Wall -ansi -pedantic count_bits.c -o count_bits.o


clean:
	rm *.o
