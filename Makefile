main: main.c gettingStarted.c
	gcc -o main main.c gettingStarted.c -I.
clean:
	rm -f main main.o gettingStarted.o
