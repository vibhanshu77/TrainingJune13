#include <stdio.h>
#include <stdlib.h>

int** add(int (*arr)[3], int (*brr)[3])
{
	int **crr = (int **)malloc(3 * sizeof(int *));
	for(int i = 0 ; i<3 ; i++)
        {
		crr[i] = (int *)malloc(3 * sizeof(int));
                for(int j = 0 ; j<3 ; j++)
                {
                       crr[i][j] = arr[i][j] + brr[i][j];
                }
        }
	return crr;
}

int main()
{
	int arr[3][3], brr[3][3];
	for(int i = 0 ; i<3 ; i++)
	{
		for(int j = 0 ; j<3 ; j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}

	for(int i = 0 ; i<3 ; i++)
        {
                for(int j = 0 ; j<3 ; j++)
                {
                        scanf("%d",&brr[i][j]);
                }
        }

	int **crr = add(arr, brr);
	for(int i = 0 ; i<3 ; i++)
        {
                for(int j = 0 ; j<3 ; j++)
                {
                       // printf("%d ",crr[i][j]);
		       printf("%d ", *(*(crr + i)+j));
                }
		printf("\n");
        }
	printf("\n");
	return 0;
}
