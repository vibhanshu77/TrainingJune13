#include "stdio.h"
#include "stdlib.h"

int main()
{
	int arr[10];
	for(int i = 0 ; i<10 ; i++)
	{
		arr[i] = i+1;
	}
	for(int i = 0 ; i<10 ; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	return EXIT_SUCCESS;
}
