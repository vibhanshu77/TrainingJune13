#include "stdio.h"

int main()
{
        int n;
	printf("Enter the number : ");
        scanf("%d", &n);
	int num = n, dec_value = 0, base = 1, temp = num;
    	
	while (temp) 
	{
        	int last_digit = temp % 10;
        	temp = temp / 10;
        	dec_value += last_digit * base;
        	base = base * 2;
	}
        printf("Binary form of %d is : %d \n", n, dec_value);
        return 0;
}

