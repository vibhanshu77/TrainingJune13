#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
        char str[100];
        printf("Enter the string : ");
        scanf("%[^\n]s", str);
        getchar();
        char ch, co;
        printf("Enter the character to remove :");
        scanf("%[^\n]c", &ch);

        int i = 0, pos = -1;
        while(str[i] != '\0')
        {
                if(str[i] == ch)
                {
			pos = i;
                }
                i++;
        }
	if (pos != -1) 
	{
        	for (i = pos; i < strlen(str) - 1; i++) 
		{
            		str[i] = str[i + 1];
        	}
        	str[strlen(str) - 1] = '\0';
    	}
        puts(str);
        return EXIT_SUCCESS;
}
