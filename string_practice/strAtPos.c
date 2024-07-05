#include <stdio.h>
#include <string.h>

int main()
{
	char str[100], sub[100];
	int pos, na, nb;

	printf("String : ");
	scanf("%[^\n]s",str);
	getchar();

	printf("Pos : ");
	scanf("%d",&pos);
	getchar();

	printf("Sub String : ");
	scanf("%s", sub);
	getchar();

	na = strlen(str);
	nb = strlen(sub);

	pos = pos-1;

	printf("\n%s\n",str+pos);

	memmove(str+pos+nb, str+pos, na - pos + 1);

	printf("\nLen Str : %d Len Sub : %d\n", na, nb);

	int i = 0;
	while(i < nb)
	{
		str[pos+i] = sub[i];
		i++;
		//printf("%s %d\n",str, i);
	}
//	str[pos-1] = ch;

	printf("After String : %s\n",str);
	return 0;
}
	
