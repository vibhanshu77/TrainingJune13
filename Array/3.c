#include "stdio.h"
#include "stdlib.h"
#include "limits.h"

int main()
{
        int size, sum = 0;
	float avg;
        int arr[100];
        printf("Enter the size : ");
        scanf("%d", &size);
        for(int i = 0 ; i<size ; i++)
        {
                printf("Number %d : ",i+1);
                scanf("%d",&arr[i]);
		sum += arr[i];
        }
        avg = sum/size;
        printf("Sum : %d \nAverage : %.2f \n", sum, avg);
        return EXIT_SUCCESS;
}
