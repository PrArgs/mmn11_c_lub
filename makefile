my_string: my_string.o
	gcc -g my_string.o -o my_string

my_string.o: my_string.c
	gcc -c my_string.c -o my_string.o


clean:
	rm my_string.o
