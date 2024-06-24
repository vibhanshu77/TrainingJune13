#include "stdio.h"

int main()
{
        int num;
        printf("Enter the Temperature: ");
        scanf("%d", &num);
        if(num>30)
        {
                printf("It's hot outside, stay hydrated!\n");
        }
        else if(num >=20 && num<=30)
        {
                printf("The weather is nice and warm.\n");
        }
        else if(num >=10 && num<=19)
        {
                printf("It's a bit chilly, wear a jacket.\n");
        }
        else
        {
                printf("It's cold outside, stay warm!\n");
        }
        return 0;
}

