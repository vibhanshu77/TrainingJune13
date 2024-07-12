// C program for the above approach
#include <stdarg.h>
#include <stdio.h>

int large(int n, ...)
{
	int sum = 0, num;

	va_list ptr;
	va_start(ptr, n);
	for(int i = 0 ; i<n ; i++)
	{
		num = va_arg(ptr,int);
		printf("V%d %d\t",i+1, num);
		sum += num;
	}
	va_end(ptr);

	va_start(ptr, n);
	int max = 0;
	for(int i = 0; i<n ; i++)
	{
		int temp = va_arg(ptr,int);
		max = max < temp ? temp : max;
	}
	va_end(ptr);
	printf("MAX is : %d", max);
	return sum;
}
int main()
{
	printf("Sum : %d \n", large(3,4,6,8));
	printf("Sum : %d \n", large(5,4,6,8,10,20));
	printf("Sum : %d \n", large(2,4,6));
	return 0;
}
