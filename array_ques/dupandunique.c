#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int n, mx = -1;
	scanf("%d",&n);

	int *arr = (int *)calloc(n, sizeof(int));

	for(int i = 0 ; i<n ; i++)
	{
		scanf("%d", &*(arr + i));
		mx = mx < *(arr+i) ? *(arr+i) : mx;
	}

	int *freq = (int *)malloc((mx+1) * sizeof(int));
        memset(freq, 0, sizeof(freq));
        for(int i = 0 ; i<n ; i++)
        {
               (*(freq + *(arr+i)))++;
        }
	
	printf("\nDup : ");

	for(int i = 0 ; i<=mx ; i++)
        {
		if(*(freq+i) > 1)
                	printf("%d  ",i);
        }

	printf("\nUnique: ");

        for(int i = 0 ; i<=mx ; i++)
        {
                if(*(freq+i) == 1)
                        printf("%d  ",i);
        }

	printf("\n");
	free(freq);
	free(arr);
	return 0;
}
