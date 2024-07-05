#include <stdio.h>
#include <string.h>

int main()
{
	char str[100], sub1[100], sub2[100];
	int pos, na, nb, nc;

	printf("String : ");
	scanf("%[^\n]s",str);
	getchar();

	printf("To Remove : ");
	scanf("%s", sub1);
	getchar();

	printf("To Add : ");
        scanf("%s", sub2);
        getchar();

	na = strlen(str);
	nb = strlen(sub1);
	nc = strlen(sub2);

	pos = strstr(str,sub1) - str;
	memmove(str+pos+nc, str+pos+nb, na - pos - nb + 1);

	//printf("\nLen Str : %d Len Sub : %d\n", na, nb);

	int i = 0;
	while(i < nc)
	{
		str[pos+i] = sub2[i];
		i++;
		//printf("%s %d\n",str, i);
	}
//	str[pos-1] = ch;

	printf("After String : %s\n",str);
	return 0;
}
	
