all: app

app: main.o big3.o rev.o pal.o fact.o
	gcc main.o big3.o rev.o pal.o fact.o -o app

main.o: main.c
	gcc -c main.c

big3.o: big3.c
	gcc -c big3.c

rev.o: rev.c
	gcc -c rev.c

pal.o: pal.c
	gcc -c pal.c

fact.o: fact.c
	gcc -c fact.c


