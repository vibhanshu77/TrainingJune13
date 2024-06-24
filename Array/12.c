#include "stdio.h"
#include "stdlib.h"

int main()
{
        int size;
	printf("Enter the size : ");
	scanf("%d", &size);
        int arr[size];
        for(int i = 0 ; i<size ; i++)
        {
                printf("Number %d : ",i+1);
                scanf("%d",&arr[i]);
        }
        for(int i = 0, j =size-1 ; i<size/2 ; i++, j--)
        {
                if(arr[i] != arr[j])
		{
			printf("Not a palindrome Array.\n");
			return EXIT_SUCCESS;
		}
        }
        printf("Array is palindrome.");
        printf("\n");
        return EXIT_SUCCESS;
}

