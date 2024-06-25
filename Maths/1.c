#include "stdio.h"
#include "stdlib.h"

int main()
{
	int num, sum = 0;
	printf("Enter the number : ");
	scanf("%d",&num);
	while(num>0)
	{
		sum += num%10;
		num /= 10;
	}
	printf("Sum is : %d \n", sum);
	return EXIT_SUCCESS;
}
