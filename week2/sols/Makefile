CC = gcc
CFLAGS = -Wall -Werror -g

make_example: make3.o make2.o make1.o
	$(CC) $(CFLAGS) make1.o make2.o make3.c -o make_example

make3.o: make3.c
	$(CC) -c make3.c

make1.o: make1.c make1.h
	$(CC) -c make1.c -o make1.o
	
make2.o: make2.c make2.h
	$(CC) -c make2.c -o make2.o


clean:
	rm -f *.o