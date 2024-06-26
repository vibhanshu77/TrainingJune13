#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
        char a[10];
        printf("Enter the string : ");
        scanf("%[^\n]s", a);
        int n, i, j;

       	n = strlen(a);
	i = 0;
	j = n-1;
        
	while(i<j)
        {
                if(a[i] != a[j])
		{
			printf("Not palindrome. \n");
			return EXIT_SUCCESS;
		}
		i++;
		j--;
        }
        printf("Palindrome. \n");
	return EXIT_SUCCESS;
}

