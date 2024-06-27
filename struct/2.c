#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student{
	char id[5];
	float mark;
};


int main()
{
	int n, i = 0, j;
	printf("Enter the number of records : ");
	scanf("%d",&n);
	getchar();
	struct student records[n];
	char str[15], *token, prd[5];
	float a;	
	while(i<n)
	{
		printf("Enter record %d . \n",i+1);
		printf("Enter the id[%d] : ",i+1);
		scanf("%[^\n]s",prd);
		getchar();
		
		printf("Enter the mark[%d] : ",i+1);
                scanf("%f",&a);
                getchar();

		strcpy(records[i].id,prd);
		records[i].mark = a;

		i++;
	}
	float max, p;
	for(i = 0 ; i<n ; i++)
	{
		max = records[i].mark;
		p = 0;
		for(j = i+1 ; j<n ; j++)
		{
			if(strcmp(records[i].id,records[j].id) == 0)
			{
				max = max + records[j].mark;
				strcpy(records[j].id,"");
				p++;
			}
		}
		records[i].mark = max/(p+1);
	}
	int count = 0;
	struct student copy[10], temp;
	for(i = 0 ; i<n ; i++)
	{
		if(strcmp(records[i].id,"")!=0)
		{
			strcpy(copy[count].id,records[i].id);
			copy[count].mark = records[i].mark;
			count++;
		}
	}

	for(i = 0 ; i<count ; i++)
	{
		printf("%s-%.2f\n",copy[i].id,copy[i].mark);
	}

	return EXIT_SUCCESS;
}
