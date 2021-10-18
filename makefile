all: list.o
	gcc -o main list.o

list.o: list.c
	gcc -c list.c
