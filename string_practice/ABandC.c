#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int freq[26];
	memset(freq, 0, sizeof(freq));

	char a[100], b[100], c[100];
	printf("String A :");
	scanf("%[^\n]s",a);
	getchar();

	printf("String B :");
        scanf("%[^\n]s",b);
        getchar();

	printf("String C :");
        scanf("%[^\n]s",c);
        getchar();

	for(int i = 0 ; a[i] != '\0' ; i++)
	{
		freq[a[i] - 'a']++;
	}

	for(int i = 0 ; b[i] != '\0' ; i++)
        {
                freq[b[i] - 'a']++;
        }

	for(int i = 0 ; c[i] != '\0' ; i++)
        {
                freq[c[i] - 'a']--;
        }

	for(int i = 0 ; i<26 ; i++)
	{
		if(freq[i] != 0 )
		{
			printf("\nString C : \"%s\" cannot be made from String A : \"%s\" and String B : \"%s\" .\n", c, a, b);
			return EXIT_SUCCESS;
		}
	}
	printf("\nString C : \"%s\" can be easily be made from String A : \"%s\" and String B : \"%s\" .\n", c, a, b);
	return EXIT_SUCCESS;
}
