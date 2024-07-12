
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int sum_vardic(int count, ...)
{
	va_list args;
	va_start(args, count);
	int sum  = 0;
	for(int i = 0 ; i<count ;i++)
	{

int main(int argc, char *argv[])
{
        if(argc <2)
        {
                printf("Usage %s num1 num2 ... numN \n", argv[0]);
                return 1;
        }

        //int sum = 0 ;
        char sum[] = "";
        for(int i = 1 ; i<argc ; i++)
        {
                //sum =
                strcat(sum,argv[i]);
        }

        printf("sum : %s \n", sum);

        return 0;
}
