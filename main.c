#include <stdio.h>
#include "gettingStarted.h"

int main(int argc, char const *argv[])
{
	int c;
	printf("Hi, please choose which program to run\n");
	printf("1:\tGetting Sarted\n");
	if ((c = getchar()) == '1')
	{
		gettingStarted();
	}
	else
	{
		printf("Error\n");
	}
	return 0;
}
