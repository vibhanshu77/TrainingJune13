#include "stdio.h"
#include "stdlib.h"

int main()
{
        int s1 = 10, s2 = 10, s3;
        int arr1[10] = {1, 9, 3, 2, 4, 6, 8, 10, 7, 5};
	int arr2[10] = {11, 13, 15, 17, 19, 12, 14, 16, 18, 20};
        printf("Before arr1: ");
        for(int i = 0 ; i<s1 ; i++)
        {
                printf("%d ", arr1[i]);
        }
	printf("\nBefore arr2 : ");
	for(int i = 0 ; i<s2 ; i++)
        {
                printf("%d ", arr2[i]);
        }
        printf("\n");
	s3 = sizeof(arr1)/sizeof(arr1[0]) + sizeof(arr2)/sizeof(arr2[0]);
	int arr3[s3];
       	int i = 0, j = 0 , k = 0;
	while(i<s1)
	{
		arr3[k] = arr1[i];
		i++;
		k++;
	}
	while(j<s2)
	{
		arr3[k] = arr2[j];
		j++;
		k++;
	}
        printf("After : ");
        for(int i = 0 ; i<s3 ; i++)
        {
                printf("%d ", arr3[i]);
        }
        printf("\n");
        return EXIT_SUCCESS;
}

