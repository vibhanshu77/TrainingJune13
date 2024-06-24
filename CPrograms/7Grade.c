#include "stdio.h"

int main()
{
        int num;
        printf("Enter the number: ");
        scanf("%d", &num);
        if(num>=90 && num<=100)
	{
		printf("Grade : A\n");
	}
	else if(num >=80 && num<=89)
	{
		printf("Grade : B \n");
	}
	else if(num >=70 && num<=79)
        {
                printf("Grade : C \n");
        }
	else if(num >=60 && num<=69)
        {
                printf("Grade : D \n");
        }
	else
        {
                printf("Grade : F \n");
        }
        return 0;
}

