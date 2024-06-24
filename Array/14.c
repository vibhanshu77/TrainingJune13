#include "stdio.h"
#include "stdlib.h"

int main()
{
        int r1, c1;
        printf("Enter the rows of array1 : ");
        scanf("%d", &r1);
        printf("Enter the columns of array1 : ");
        scanf("%d", &c1);
        int arr1[r1][c1],arr2[c1][r1];
        for(int i = 0 ; i<r1 ; i++)
        {
                for(int j = 0 ; j<c1 ; j++)
                {
                        scanf("%d",&arr1[i][j]);
                }
	}

	for(int i = 0 ; i<r1 ; i++)
	{
		for(int j = 0 ; j<c1 ; j++)
		{
			arr2[j][i] = arr1[i][j];
		}
	}
	for(int j = 0 ; j<c1 ; j++)
        {
                for(int i = 0 ; i<r1 ; i++)
                {
                        printf("%d   ",arr2[j][i]);
                }
		printf("\n");
        }


	return EXIT_SUCCESS;
}

