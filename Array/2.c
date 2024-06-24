#include "stdio.h"
#include "stdlib.h"
#include "limits.h"

int main()
{
        int size, min = INT_MAX, max = INT_MIN;
	int arr[100];
	printf("Enter the size : ");
	scanf("%d", &size);
        for(int i = 0 ; i<size ; i++)
        {
		printf("Number %d : ",i+1); 
		scanf("%d",&arr[i]);
        }
        for(int i = 0 ; i<size ; i++)
        {
		min = arr[i]<min ? arr[i] : min;
                max = arr[i]>max ? arr[i] : max;
        }
        printf("Max Element : %d \nMin Element : %d \n", max, min);
        return EXIT_SUCCESS;
}
