# Write this Makefile
myas : main.o check.o trans.o
	gcc -o myas main.o trans.o check.o
main.o:myas main.c
	gcc -c main.c myas.c
trans.o:myas.h trans.c check.c
	gcc -c trans.c chekch.c myas.h
check.o:myas.h check.c
	gcc -c check.c myas.h
