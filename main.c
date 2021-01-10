#include "gettingStarted.h"
#include <stdio.h>

int main(int argc, char const *argv[])
{
	int c;
	printf("Please choose which program run:\n");
	if ((c = getchar()) == '1')
	{
		gettingStarted();
	} else 
	{
		printf("program does not exist\n");
	}	
	return 0;
}
