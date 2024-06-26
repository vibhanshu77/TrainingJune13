#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char str[100];
	printf("Enter the string : ");
	scanf("%[^\n]s", str);
	getchar();
	char ch, co;
	printf("Enter the character to remove :");
       	scanf("%[^\n]c", &ch);
	getchar();
	printf("Enter the character to replace :");
        scanf("%[^\n]c", &co);

	int i = 0;
	while(str[i] != '\0')
	{
		if(str[i] == ch)
		{
			str[i] = co;
			break;
		}
		i++;
	}
	puts(str);
	return EXIT_SUCCESS;
}
