#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char str[100], sub[20], ch;
	
	printf("Enter the substring : ");
	scanf("%[^\n]s",str);
	getchar();
	
	printf("Enter the substring : ");
	scanf("%[^\n]s",sub);
        getchar();
	
	printf("Enter the character : ");
	scanf("%c",&ch);
	getchar();

	int possub = -1, posch = -1;

	char *p = strstr(str, sub);
       	possub = p != NULL ? p - str : -1;

	int n = strlen(str);
	for(int i = 0 ; i<n ; i++)
	{
		if(str[i] == ch)
		{
			posch = i;
			break;
		}
	}

	printf("Substring position : %d \n", possub);
	
	printf("Character position : %d \n", posch);
	return EXIT_SUCCESS;
}


