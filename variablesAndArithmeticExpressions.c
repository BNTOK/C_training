#include <stdio.h>

void variablesAndArithmeticExpressionsV1(void)
{
	int farh, celsius, lower, upper, step;

	lower = 0;	/* lower limit of the teperature table */
	upper = 300;	/* upper limit */
	step = 20;	/* step size */

	farh = lower;
	while (farh <= upper)
	{
		celsius = 5 * (farh - 32) / 9;
		printf("%d\t%d\n", farh, celsius);
		farh = farh + step;
	}
}