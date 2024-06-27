#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct inv{
	char id[5];
	int q;
};


int main()
{
	int n, i = 0, j;
	printf("Enter the number of records : ");
	scanf("%d",&n);
	getchar();
	struct inv records[n];
	char str[15], *token, prd[5];
	int a;	
	while(i<n)
	{
		printf("Enter record %d . \n",i+1);
		printf("Enter the id[%d] : ",i+1);
		scanf("%[^\n]s",prd);
		getchar();
		
		printf("Enter the mark[%d] : ",i+1);
                scanf("%d",&a);
                getchar();

		strcpy(records[i].id,prd);
		records[i].q = a;

		i++;
	}
	float max, p;
	for(i = 0 ; i<n ; i++)
	{
		max = records[i].q;
		p = 0;
		for(j = i+1 ; j<n ; j++)
		{
			if(strcmp(records[i].id,records[j].id) == 0)
			{
				max = max + records[j].q;
				strcpy(records[j].id,"");
				p++;
			}
		}
		records[i].q = max;
	}
	int count = 0;
	struct inv copy[10], temp;
	for(i = 0 ; i<n ; i++)
	{
		if(strcmp(records[i].id,"")!=0)
		{
			strcpy(copy[count].id,records[i].id);
			copy[count].q = records[i].q;
			count++;
		}
	}

	for(i = 0 ; i<count ; i++)
	{
		printf("%s-%d\n",copy[i].id,copy[i].q);
	}

	return EXIT_SUCCESS;
}
