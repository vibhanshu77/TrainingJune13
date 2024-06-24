#include "stdio.h"
#include "stdlib.h"

int main()
{
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	int pos;
	scanf("%d",&pos);
	int arr1[10], j = 0;
	for(int i = 10-pos ; i<10 ; i++)
	{
		arr1[j] = arr[i];
		j++;
	}
	for(int i = 0 ; i<10-pos ; i++)
	{
		arr1[j] = arr[i];
		j++;
	}
	printf("\nOutput : ");
	for(int i = 0 ; i<10 ; i++)
	{
		printf("%d ",arr1[i]);
	}
	printf("\n");
	return EXIT_SUCCESS;
}
