#include <stdio.h>
#include <ctype.h>
#include <string.h>


int main()
{
	char str[] = "This is my Cat";
	printf("%s\n",str);
	for(int i = 0 ; str[i] != '\0' ; i++)
	{
		if(str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
		}
		else if(str[i] >= 65 && str[i] <= 90)
		{
			str[i] = str[i] + 32;
		}
	}

	printf("%s\n", str);
	return 0;
}


	
