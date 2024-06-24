#include "stdio.h"

int main()
{
        int num;
        printf("Enter the number : ");
        scanf("%d", &num);
        num = num & 1 ? printf("Odd \n") : printf("Even \n");
        return 0;
}

