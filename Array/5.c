#include "stdio.h"
#include "stdlib.h"

int main()
{
        int size, key, f = 0;
        int arr[100];
        printf("Enter the size : ");
        scanf("%d", &size);
        for(int i = 0 ; i<size ; i++)
        {
              //  printf("Number %d : ",i+1);
                scanf("%d",&arr[i]);
        }
	printf("Enter the key to search : ");
	scanf("%d",&key);
        for(int i = 0 ; i<size ; i++)
        {
                if(arr[i] == key)
		{
			printf("The key is found at %d position.\n", i+1);
			return EXIT_SUCCESS;
		}
        }
        printf("The key is not found.\n");
        return EXIT_SUCCESS;
}
