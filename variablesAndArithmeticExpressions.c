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

void variablesAndAritmeticExpresionV2(void)
{
	/* print Fahrenheit-Celsius table for fahr = 0, 20, ..., 300; floating point version */
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	fahr = lower;
	while (fahr <= upper)
	{
		celsius = (5.0 / 9.0) * (fahr - 32.0);
		printf("%3.0f %6.1f\n", fahr, celsius);
		fahr = fahr + step;
	}
	
}