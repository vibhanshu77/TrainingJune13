#include "stdio.h"
#include "stdlib.h"

int main()
{
        int size = 10, temp;
        int arr[10] = {15, 16, 0, 2, 4, 6, 8, 10, 1, 5};
	printf("Before : ");
	for(int i = 0 ; i<size ; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	for(int i = 0 ; i<size-1 ; i++)
        {
		for(int j = i+1 ; j<size ; j++)
		{
			if(arr[i] > arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
        }
	printf("After : ");
	for(int i = 0 ; i<size ; i++)
	{
		printf("%d ", arr[i]);
	}
        printf("\n");
        return EXIT_SUCCESS;
}
