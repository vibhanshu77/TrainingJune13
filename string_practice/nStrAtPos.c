#include <stdio.h>
#include <string.h>

int main()
{
	char str[100], sub[100];
	int pos, na, nb, t;

	printf("String : ");
	scanf("%[^\n]s",str);
	getchar();

	printf("TestCases : ");
	scanf("%d", &t);

	while(t--)
	{
		printf("Pos : ");
		scanf("%d",&pos);
		getchar();

		printf("Sub String : ");
		scanf("%s", sub);
		getchar();

		na = strlen(str);
		nb = strlen(sub);
	
		memmove(str+pos+nb, str+pos, na - pos + 1);


		printf("\nLen Str : %d Len Sub : %d\n", na, nb);

		int i = 0;
		while(i < nb)
		{
			str[pos+i] = sub[i];
			i++;
			//printf("%s %d\n",str, i);
		}
//		str[pos-1] = ch;
		printf("After String : %s\n",str);
	}

	printf("After String : %s\n",str);
	return 0;
}
	
