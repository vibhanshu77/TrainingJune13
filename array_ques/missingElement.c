#include <stdio.h>

int main()
{
	int n;
	
	printf("N : ");
	scanf("%d",&n);

	int arr[n-1], ele, sum = 0;

	for(int i = 0 ; i<n-1 ; i++)
	{
		scanf("%d",&ele);
		arr[i] = ele;
		sum += ele;
	}
	
	int total = (n * (n+1))/2;

	printf("Missing Number : %d\n",total - sum);
	
	return 0;
}




