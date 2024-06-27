#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
        char a[100];
	printf("Enter the string : ");
        scanf("%[^\n]s",a);
        getchar();
	
	int count = 0;
	for(int i = 0 ; a[i]!='\0' ; i++)
	{
		if(a[i] == '|')
		{
			count++;
		}
	}
	count = count + 1;
	
	char arr[count][100], temp[100], arr1[count][100];

	int i = 0, p = 0, f;
	char *token = strtok(a, "|");
	while(token != NULL)
	{
		f = 1;
		for(int j = 0 ; j<i ; j++)
		{
			if(strcmp(token,arr[j]) == 0)
			{
				f = 0;
				break;
			}
		}
		if(f == 1)
		{
			strcpy(arr[p],token);
			p++;
		}
		strcpy(arr[i],token);
		//printf("%s\t",token);
		token = strtok(NULL, "|");
		i++;
	}
	for(int i = 0 ; i <p ; i++)
	{
		for(int j = i+1 ; j<p ; j++)
		{
			if(strcmp(arr[i], arr[j]) > 0)
			{
				strcpy(temp,arr[i]);
				strcpy(arr[i],arr[j]);
				strcpy(arr[j],temp);
			}
		}
	}
	for(int i = 0; i<p ; i++)
	{
		printf("\n%s\n",arr[i]);
	}
	printf("\n");
        return EXIT_SUCCESS;
}

