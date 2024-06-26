#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
        char a[100], b[100];
        printf("Enter the 1st string : ");
        //scanf("%[^\n]s", a);
	fgets(a,100,stdin);

	printf("Enter the 2nd string : ");
        //scanf("%[^\n]s", b);
	fgets(b,100,stdin);
	
        int arra[26], arrb[26], n, i, pos;
        memset(arra, 0, sizeof(arra));
        memset(arrb, 0, sizeof(arrb));

        n = strlen(a);
        for(i = 0 ; i<n ; i++)
        {
                pos = a[i] - 'a';
                arra[pos]++;
        }

	n = strlen(b);
        for(i = 0 ; i<n ; i++)
        {
                pos = b[i] - 'a';
                arrb[pos]++;
        }

	for(i = 0 ; i<26 ; i++)
	{
		if(arra[i] != arrb[i])
		{
			printf("Not Anagram. \n");
			return EXIT_SUCCESS;
		}
	}
	printf("Anagram \n");
        return EXIT_SUCCESS;
}

