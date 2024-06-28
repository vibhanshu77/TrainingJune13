#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char str[100];
	printf("Enter the sentence : ");
	scanf("%[^\n]s",str);
	getchar();

	str[0] = str[0] - 32;
	char *space = strstr(str, " "), *nxt;
	int pos;
	while(space != NULL)
	{
		pos = space - str + 1;
		str[pos] = str[pos] - 32;
		nxt = space+1;
		space = strstr(nxt, " ");
	}
	printf("\n%s\n",str);
	return 0;
}
