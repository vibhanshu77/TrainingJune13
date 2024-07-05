#include <stdio.h>
#include <string.h>

int main()
{
	char str[100], ch;
	int pos, n;

	printf("String : ");
	scanf("%[^\n]s",str);
	getchar();

	printf("Pos : ");
	scanf("%d",&pos);
	getchar();

	printf("Character : ");
	scanf("%c", &ch);
	getchar();

	n = strlen(str);

	printf("\nLen : %d\n", n);

	int i = n-1;
	while(i>=pos-1)
	{
		str[i+1] = str[i];
		i--;
		printf("%s %d\n",str, i);
	}
	str[pos-1] = ch;

	printf("After String : %s\n",str);
	return 0;
}
	
