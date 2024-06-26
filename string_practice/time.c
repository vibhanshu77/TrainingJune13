#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
        int n ;
	printf("Enter number of testcases : ");
        scanf("%d", &n);
	getchar();
        while(n--)
        {
                char a[10], b[10];
		int h1 = -1, h2 = -1, m1 = -1, m2 = -1, s1 = -1, s2 = -1;

                printf("Enter the time 1 : ");
                scanf("%[^\n]s",a);
                getchar();

                printf("Enter the time 2 : ");
                scanf("%[^\n]s",b);
                getchar();
		
		char *token;
		int i = 1;
		token = strtok(a, "/");
		while(token != NULL)
		{
			if(i==1)
			{
				h1 = atoi(token);
			}
			if(i==2)
			{
				m1 = atoi(token);
			}
			if(i==3)
			{
				s1 = atoi(token);
			}
			token = strtok(NULL, "/");
			i++;
		}
		
		i = 1;
		token = strtok(b, "/");
                while(token != NULL)
                {
			if(i==1)
                        {
                                h2 = atoi(token);
                        }
                        if(i==2)
                        {
                                m2 = atoi(token);
                        }
                        if(i==3)
                        {
                                s2 = atoi(token);
                        }
                        token = strtok(NULL, "/");
                        i++;
                }
		
		if(h1 == h2)
		{
			if(m1 == m2)
			{
				if(s1 == s2)
				{
					 printf("Equal \n");
				}
				else if(s1 < s2)
				{
					printf("Early \n");
				}
				else
				{
					 printf("Late \n");
				}
			}
			else if(m1 < m2)
			{
				printf("Early \n");
			}
			else
			{
				 printf("Late \n");
			}

		}
		else if(h1 < h2)
		{
			printf("Early \n");
		}
		else
		{
			printf("Late \n");
		}
		//printf("%d, %d, %d, %d, %d, %d\n",h1, m1, s1, h2, m2, s2);
        }
        return EXIT_SUCCESS;
}

