#include "stdio.h"
#include "stdlib.h"
#include "string.h"

int main()
{
        int size = 10, p = 0;
        int arr[size];
	int freq[100];
        memset(freq, 0, sizeof(freq));
        for(int i = 0 ; i<size ; i++)
        {
                printf("Number %d : ",i+1);
                scanf("%d",&arr[i]);
        }
        for(int i = 0 ; i<size; i++)
        {
                freq[arr[i]]++;
		if(freq[arr[i]] == 1)
		{
			arr[p] = arr[i];
			p++;
		}
        }
	printf("After removing Duplicates : ");
	for(int i = 0 ; i<p ; i++)
	{
		printf("%d ", arr[i]);
	}
        printf("\n");
        return EXIT_SUCCESS;
}

