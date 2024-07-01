#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int anagram(char *a, char *b)
{
	int freq[26];
	memset(freq, 0, sizeof(freq));
	
	if(strlen(a) != strlen(b))
	{
		return 0;
	}
	for(int i = 0 ;a[i] != '\0' ; i++)
	{
		freq[a[i] - 'a']++;
	}

	for(int i = 0 ; b[i] != '\0' ; i++)
	{
		freq[b[i] - 'a']--;
	}

	for(int i = 0 ; i<26 ; i++)
	{
		if(freq[i] != 0)
		{
			return 0;
		}
	}
	return 1;
}

int main()
{
        char a[100];
	printf("Enter the string : ");
        scanf("%[^\n]s",a);
        getchar();

	int n = 0;
       	char **arr = NULL;
	char *token = strtok(a, "|");
	
	while(token != NULL)
	{
		arr = realloc(arr, (n+1) * sizeof(char *));
		if(arr == NULL)
		{
			printf("\nMemory not allocated. \n");
			exit(EXIT_FAILURE);
		}
		arr[n] = strdup(token);
		n++;
		token = strtok(NULL, "|");
	}
	
	char *copy[n], *dup[n];
	for(int i = 0 ; i<n ; i++)
	{
		copy[i] = strdup(arr[i]);
	}
	int k = 0, f;
	for(int i = 0 ; i<n ; i++)
	{
		if(strcmp(copy[i],"") == 0)
		{
			continue;
		}
		f = 0;
		for(int j = i+1 ; j<n ; j++)
		{
			if(strcmp(copy[j],"") == 0)
                	{
                        	continue;
                	}
			if(anagram(copy[i],copy[j]))
			{
				dup[k++] = strdup(copy[j]);
				strcpy(copy[j],"");
				f = 1;
			}
		}
		if(f == 1)
		{
			dup[k++] = strdup(copy[i]);
			strcpy(copy[i],"");
		}
	}
	for(int i = 0 ; i<k ; i++)
	{
		printf("%s ",dup[i]);
	}
	printf("\n");
	
        return EXIT_SUCCESS;
}

