main: main.c gettingStarted.c variablesAndArithmeticExpressions.c menu.c
	gcc -o main main.c gettingStarted.c variablesAndArithmeticExpressions.c menu.c -I.
clean:
	rm main main.o gettingStarted.o variablesAndArithmeticExpressions.o menu.o
