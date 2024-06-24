#include "stdio.h"
#include "stdlib.h"
#include "string.h"

int main()
{
        int size = 10;
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
        }
        for(int i = 0 ; i<100 ; i++)
        {
		if(freq[i] == 0)
		{
			continue;
		}
		else
		{
			printf("%d : %d\n",i , freq[i]);
		}
        }
        printf("\n");
        return EXIT_SUCCESS;
}

