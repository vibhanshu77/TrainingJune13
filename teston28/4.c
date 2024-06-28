#include <stdio.h>
#include <stdlib.h>

int main()
{
	int na, nb, nc, i, j, k;
	
	printf("Enter size of array1 : ");
	scanf("%d",&na);
	getchar();

	printf("Enter size of array2 : ");
        scanf("%d",&nb);
        getchar();

	nc = na + nb;
	int a[na], b[nb], c[nc];
	
	printf("\n Array 1 : "); 
	for(i = 0 ; i<na ; i++)
	{
		scanf("%d", &a[i]);
	}
	
	printf("\n Array 2 : ");
	for(i = 0 ; i<nb ; i++)
        {
                scanf("%d", &b[i]);
        }

	i = 0, j = 0, k = 0;
	while(i<na && j<nb)
	{
		if(a[i] <= b[j])
		{
			c[k] = a[i];
			i++;
			k++;
		}
		else if(a[i] > b[j])
		{
			c[k] = b[j];
			k++;
			j++;
		}
	}
	while(i<na)
        {
		c[k] = a[i];
                i++;
                k++;
        }
	while(j<nb)
	{
		c[k] = b[j];
		k++;
		j++;
	}
	printf("After merging : ");
	for(i = 0 ; i<nc ; i++)
	{
		printf("%d ",c[i]);
	}
	printf("\n");
	return 0;
}



