#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
        char a[10][20], temp[20];
	int n;
        printf("Enter the number of strings : ");
        scanf("%d",&n);
	getchar();
	for(int i = 0 ; i<n ; i++)
	{
		printf("Enter string %d: ", i+1);
		fgets(a[i],20,stdin);
	}

       	for(int i = 0 ; i<n-1 ; i++)
        {
                for(int j = i+1 ; j<n ; j++)
		{
			if(strcmp(a[i], a[j])>0)
			{
				strcpy(temp,a[i]);
				strcpy(a[i],a[j]);
				strcpy(a[j],temp);
			}
		}
        }
	printf("\nSorted strings:\n");
	for(int i = 0; i<n ; i++)
	{
		fputs(a[i], stdout);
	}
        return EXIT_SUCCESS;
}
