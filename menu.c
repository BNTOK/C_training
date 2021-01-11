#include <stdio.h>
#include "gettingStarted.h"

void menuText(void);
void emtyLine(void);

void menu(void)
{

	int c;
	menuText();
	while (c != 'q')
	{
		c = getchar();
		if (c == '1')
		{
			printf("1.1\tGetting started\n");
			emtyLine;
			gettingStarted();
			emtyLine();
			printf("1.2\tVariables and Arithmetic Expression version one\n");
			emtyLine;
			variablesAndArithmeticExpressionsV1();
			emtyLine();
			menuText();
		}
		if (c == '2' )
		{
			printf("Not Ready\n");
		}
		if (c == '3' )
		{
			printf("Not Ready\n");
		}
		if (c == '4' )
		{
			printf("Not Ready\n");
		}
		if (c == '5' )
		{
			printf("Not Ready\n");
		}
		if (c == '6' )
		{
			printf("Not Ready\n");
		}
		if (c == '7' )
		{
			printf("Not Ready\n");
		}

	}

}

void menuText(void)
{
	printf("Hi, please choose which Chapter to run\n");
	printf("1:\tTutorial Introduction\n");
	printf("2:\tTypes, Operators, and Expresions\n");
	printf("3:\tControl Flow\n");
	printf("4:\tFunction and Program Structure\n");
	printf("5:\tPointers and Arrays\n");
	printf("6:\tStructures\n");
	printf("7:\tInput and Output\n");
	printf("8:\tThe UNIX System Interface\n");
	printf("8:\tfor exit uses q\n");
}

void emtyLine(void)
{
	printf("\n");
}
