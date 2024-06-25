#include "stdio.h"
#include "stdlib.h"
#include "math.h"

int main()
{
        int num, n = 0, d, sq;
        printf("Enter the Number : ");
        scanf("%d",&num);
	d = num;
        sq = num * num;
        while(d>0)
        {
                d = d/10;
                n++;
        }
	d = pow(10, n);
	d = sq % d;
	num == d ? printf("Automorphic\n") : printf("Not Automorphic\n");
        return EXIT_SUCCESS;
}
