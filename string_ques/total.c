#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>


int main()
{
	char str[100];

	printf("String : ");
	scanf("%[^\n]s",str);
	
	printf("\n%s\n",str);

	int a = 0, n = 0, s = 0;

	for(int i = 0 ; str[i] != '\0' ; i++)
	{
		if(isalpha(str[i]))
		{
			a++;
		}
		else if(isdigit(str[i]))
		{
			n++;
		}
		else if(isgraph(str[i]))
		{
			s++;
		}
	}
	
	char ch;
	printf("Char : ");
	scanf(" %c",&ch);
	int pos = strrchr(str, ch) - str;
	
	char *temp = strndup(str, pos);
	strncat(temp, str+pos+1,strlen(str) - pos + 1); 


	printf("\nAlphabet : %d \nNumbers : %d\nSpecial Characters : %d\nPos : %d\nTemp : %s\n",a, n, s, pos, temp);
	return 0;
}
