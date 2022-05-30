	CC=gcc -o
	CC1 = gcc -c -o
	
executable : add.o main.o
	$(CC)  executable add.o main.o

add.o : add.c
	$(CC1)  add.o add.c

main.o : main.c
	$(CC1)  main.o main.c

clean :
	rm -f main.o add.o executable