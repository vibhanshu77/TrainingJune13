#include <stdio.h>

int main()
{
	int a = 10 , b = 20;
	int *pa = &a, *pb = &b, pc;
	int arr[5] = {1,2,3,4,5}, brr[5];
	int *parr = arr, *pbrr = brr;
	printf("a : %d  b : %d\n", a, b);
	pc = *pa;
	*pa = *pb;
	*pb = pc;
	printf("a : %d  b : %d\n", a, b);
	printf("sum : %d\n",*pa+*pb);
	
	for(int i= 0 ;i<5 ; i++)
	{
		printf("%d ",*(parr+i));
	}
	printf("\n");
	for(int i = 0 ; i<5 ; i++)
	{
		brr[i] = *(parr + i);
	}
	for(int i= 0, j = 4 ; i<j ; i++, j--)
        {
		a = *(pbrr+i);
		*(pbrr + i) = *(pbrr+j);
		*(pbrr+j) = a;
        }
	for(int i= 0; i<5 ; i++)
	{
		 printf("%d ",*(pbrr+i));
	}
	printf("\n");
	return 0;
}
