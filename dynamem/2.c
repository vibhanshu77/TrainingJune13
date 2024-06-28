#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n, i;
	printf("N : ");
	scanf("%d",&n);

	int *ptr = (int *)malloc(n * sizeof(int));
	
	if(ptr != NULL)
	{

		for(i = 0 ; i<n ; i++)
		{
			printf("%d : ",i+1);
			scanf("%d", ptr+i);
		}

		for(i = n-1 ; i>=0 ; i--)
		{
			printf("%d ,", *(ptr+i));
		}
		printf("\n\n");
		free(ptr);
		ptr = NULL;
		return 0;
	}
	else
	{
		printf("Memo not assigned");
	}
	return 1;
}


