#include <stdio.h>
#include <stdlib.h>
#include <myheader.h>
#include <myheader.h>

int main()
{
	int x = 20, y = 10;
	printf("Sum : %d \n", add(x,y));
	printf("Difference : %d \n", sub(x,y));
	printf("Multiply : %d \n", mul(x,y));
	return 0;
}
