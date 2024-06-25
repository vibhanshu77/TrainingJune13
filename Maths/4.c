#include "stdio.h"
#include "stdlib.h"
#include "math.h"

int main()
{
        int num;
        printf("Enter the Number : ");
        scanf("%d",&num);
        int d = num;
        int n = 0, sum = 0;
        while(d>0)
        {
                d = d/10;
                n++;
        }
        d = num;
        while(d>0)
        {
                sum += pow(d%10,n);
                d /= 10;
        }
        sum == num ? printf("Armstrong\n") : printf("Not Armstrong");
        return EXIT_SUCCESS;
}
