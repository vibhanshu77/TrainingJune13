#include "stdio.h"
#include "stdlib.h"
#include "math.h"

int main()
{
        int num;
        printf("Enter the number : ");
        scanf("%d",&num);
        printf("%.0f\n",pow(round(sqrt(num)),2));
        return EXIT_SUCCESS;
}

