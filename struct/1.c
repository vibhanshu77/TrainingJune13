#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct sales{
	char prod_id[5];
	int amount;
};


int main()
{
	int n, i = 0, j;
	printf("Enter the number of records : ");
	scanf("%d",&n);
	getchar();
	struct sales records[n];
	char str[15], *token, prd[5];
	int a;	
	while(i<n)
	{
		printf("Enter record %d . \n",i+1);
		printf("Enter the prod_id[%d] : ",i+1);
		scanf("%[^\n]s",prd);
		getchar();
		
		printf("Enter the amount[%d] : ",i+1);
                scanf("%d",&a);
                getchar();

		strcpy(records[i].prod_id,prd);
		records[i].amount = a;

		i++;
	}
	int max;
	for(i = 0 ; i<n ; i++)
	{
		max = records[i].amount;
		for(j = i+1 ; j<n ; j++)
		{
			if(strcmp(records[i].prod_id,records[j].prod_id) == 0)
			{
				max = max < records[j].amount ? records[j].amount : max;
				strcpy(records[j].prod_id,"");
			}
		}
		records[i].amount = max;
	}
	int count = 0;
	struct sales copy[10], temp;
	for(i = 0 ; i<n ; i++)
	{
		if(strcmp(records[i].prod_id,"")!=0)
		{
			strcpy(copy[count].prod_id,records[i].prod_id);
			copy[count].amount = records[i].amount;
			count++;
			//printf("%s-%d\n",records[i].prod_id,records[i].amount);
		}
	}

	for(i = 0 ; i<count ; i++)
	{
		for(j = i+1 ; j<count ; j++)
		{
			if(copy[i].amount < copy[j].amount)
			{
				strcpy(temp.prod_id,copy[i].prod_id);
				temp.amount = copy[i].amount;
				strcpy(copy[i].prod_id,copy[j].prod_id);
				copy[i].amount = copy[j].amount;
				strcpy(copy[j].prod_id,temp.prod_id);
				copy[j].amount = temp.amount;
				//copy[i] = copy[j];
				//copy[j] = temp;
			}
		}
	}

	for(i = 0 ; i<count ; i++)
	{
		printf("%s-%d\n",copy[i].prod_id,copy[i].amount);
	}

	return EXIT_SUCCESS;
}
