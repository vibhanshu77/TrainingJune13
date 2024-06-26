#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char c[100];
	printf("Enter the string : ");
	scanf("%[^\n]s", c);

	int arr[26], n, i, pos;
	memset(arr, 0, sizeof(arr));
	n = strlen(c);
	printf("n = %d\n",n);

	for(i = 0 ; i<n ; i++)
	{
		pos = c[i] - 'a';
		arr[pos]++;
		if(arr[pos] == 1 || !(c[i] >= 'a' && c[i] <= 'z'))
		{
			printf("%c", c[i]);
		}
	}
	printf("\n");
	return EXIT_SUCCESS;
}		
