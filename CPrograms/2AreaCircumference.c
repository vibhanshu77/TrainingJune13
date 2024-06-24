#include "stdio.h"
#define PI 3.14

int main()
{
	float r;
	printf("Enter the radius : ");
	scanf("%f",&r);
	printf("Area : %f \n",PI * r * r);
	printf("Circumference : %f \n", 2 * PI * r);
	return 0;
}
