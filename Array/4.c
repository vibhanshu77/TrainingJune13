#include "stdio.h"
#include "stdlib.h"

int main()
{
        int size;
        int arr[100];
        printf("Enter the size : ");
        scanf("%d", &size);
        for(int i = 0 ; i<size ; i++)
        {
                printf("Number %d : ",i+1);
                scanf("%d",&arr[i]);
        }
        for(int i = 0, j =size-1 ; i<size/2 ; i++, j--)
        {
		arr[i] = arr[i] + arr[j];
		arr[j] = arr[i] - arr[j];
		arr[i] = arr[i] - arr[j];
        }
	for(int i = 0 ; i<size ; i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
        return EXIT_SUCCESS;
}
