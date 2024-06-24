#include "stdio.h"

int main()
{
	float C, F;
	printf("Enter the temperature in Celcius : ");
	scanf("%f", &C);
	F = (9.0 * C)/5 + 32;
	printf("The temperature in %.2f Celcius to Fahrenheit = %.2f \n", C, F);
	return 0;
}
