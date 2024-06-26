#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
        char a[100], ch;
        printf("Enter the string : ");
        fgets(a,100,stdin);
        int n, i, j;

        n = strlen(a);
        for(i = 0, j=n-1 ; i<j ; i++, j--)
        {
		ch = a[i];
		a[i] = a[j];
		a[j] = ch;
  	}
	printf("%s\n",a);
	return EXIT_SUCCESS;
}
