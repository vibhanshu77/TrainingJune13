#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int check(char *p)
{
	int n = strlen(p), j;
	//printf("func :%d \n",n);
	for(int i = 0, j = 1; i<n && j<n ; i++, j++)
	{
		if(p[i] == p[j])
		{
			return 1;
		}
	}
	return 0;
}


int main()
{
	char str[100];
	printf("Enter the word : ");
	scanf("%[^\n]s",str);
	getchar();

	int i, j, n, strt, flag;
	
	while(check(str))
	{
		n = strlen(str);
		for(i = 0 ; i<n ; i++)
		{	
			strt = i;
			j = i+1;
			flag = 0;
			while(str[i] == str[j])
			{
				flag = 1;
				j++;
			}
			if(flag && i!=j)
			{
				memmove(str+strt, str+j, n-j+1);
				break;
			}
		}
		//printf("%s\n",str);
	}
	printf("Answer : %s\n",str);
	return 0;
}
