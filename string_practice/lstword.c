#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char str[100], word[20];
	printf("\nEnter the string : ");
	scanf("%[^\n]s",str);
	getchar();

	printf("\nEnter the word : ");
        scanf("%[^\n]s",word);
        getchar();
       	
       	char *lst = strstr(str, word), *curr = NULL;

	while(lst != NULL)
	{
		curr = lst;
		lst = strstr(curr + 1, word);
	}
	lst = curr + strlen(word)+1;
	printf("%s\n%s",curr, lst);
	memmove(curr, lst, strlen(lst)+1);

		
	printf("String after removing last occurrence of '%s':\n%s\n", word, str);
	return EXIT_SUCCESS;
}
