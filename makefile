# pour build sur ma machine : mingw32-make
CC=gcc
CFLAGS=-W -Wall -ansi -pedantic

all:	sum exercice_3
sum:	sum.c
	$(CC) -o $@ -c $< $(CFLAGS)

exercice_3:		exercice_3.c
	$(CC) -o $@ -c $< $(CFLAGS)

clean:
	rm -rf *.o 	sum 	exercice_3
