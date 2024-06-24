#include "stdio.h"
#include "stdlib.h"

int main()
{
        int r1, r2, c1, c2;
        printf("Enter the rows of array1 : ");
        scanf("%d", &r1);
	printf("Enter the columns of array1 : ");
        scanf("%d", &c1);
	printf("Enter the rows of array2 : ");
        scanf("%d", &r2);
	printf("Enter the columns of array2 : ");
        scanf("%d", &c2);
	int arr1[r1][c1], arr2[r2][c2], arr3[r1][c2];
	for(int i = 0 ; i<r1 ; i++)
	{
		for(int j = 0 ; j<c1 ; j++)
		{
			scanf("%d",&arr1[i][j]);
		}
	}
	for(int i = 0 ; i<r2 ; i++)
        {
                for(int j = 0 ; j<c2 ; j++)
                {
                        scanf("%d",&arr2[i][j]);
                }
        }
	if(c1 != r2)
	{
		printf("Multiplication is not possible because number of columns of 1st array is not equal to number of rows of 2nd array.");
	}
	else
	{
		for(int i = 0 ; i<r1 ; i++)
		{
			for(int j = 0 ; j<c2 ; j++)
			{
				arr3[i][j] = 0;
				for(int k = 0 ; k<c1 ; k++)
				{
					arr3[i][j] += arr1[i][k] * arr2[k][j];
				}
			}
		}
		for(int i = 0; i<r1 ; i++)
	        {
        	        for(int j = 0 ; j<c2 ; j++)
                	{
                	        printf("%d   ", arr3[i][j]);
                	}
               		printf("\n");
        	}
	}
        printf("\n");
        return EXIT_SUCCESS;
}

