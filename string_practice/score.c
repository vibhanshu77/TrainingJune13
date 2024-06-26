#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
        char str[100];
        printf("Enter the string : ");
        scanf("%[^\n]s", str);
        getchar();
	int len = strlen(str), flag = 0, score = 0;

	for(int i = 0; i<len-4 ; i++)
	{
		flag = 1;
		for(int j = i ; j<=i+1 ; j++)
		{
			if(str[j] != str[i+3-(j-i)])
			{
				flag = 0;
				break;
			}
		}
		if(flag == 1)
		{
			score += 5;
		}
	}

	for(int i = 0; i<len-5 ; i++)
        {
                flag = 1;
                for(int j = i ; j<=i+2 ; j++)
                {
                        if(str[j] != str[i+4-(j-i)])
                        {
                                flag = 0;
                                break;
                        }
                }
                if(flag == 1)
                {
                        score += 10;
                }
        }

	printf("Score is : %d \n ", score);
	return EXIT_SUCCESS;
}


