all:health

health: main.o sub.o
	gcc -o health main.o sub.o
main.o: main.c sub.h
	gcc -c main.c
sub.o: sub.c
	gcc -c sub.c
