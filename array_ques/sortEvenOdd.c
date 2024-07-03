#include <stdio.h>

int main()
{
	int n, e, o, en, on;
	
	printf("N : ");
	scanf("%d",&n);
	
	e = 0, o = n-1;
	int arr[n], ele;

	for(int i = 0 ; i<n ; i++)
	{
		scanf("%d",&ele);
		if(ele & 1 )
		{
			arr[o] = ele;
			o--;
			on++;
		}
		else
		{
			arr[e] = ele;
			e++;
			en++;
		}
	}
	o++;
	e--;	
	printf("OPos : %d\nEPos : %d\n",o,e);	
	for(int i = 0 ; i<n ; i++)
	{
		printf("%d ",arr[i]);
	}
	
	printf("\n");		
	int temp;
	for(int i = 0 ; i<=e ; i++)
	{
		for(int j = i+1 ; j<=e ; j++)
		{
			if(arr[i]>arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}

	for(int i = o ; i<n ; i++)
        {
                for(int j = i+1 ; j<n ; j++)
                {
                        if(arr[i]>arr[j])
                        {
                                temp = arr[i];
                                arr[i] = arr[j];
                                arr[j] = temp;
                        }
                }
        }

	for(int i = 0 ; i<n ; i++)
        {
                printf("%d ",arr[i]);
        }
	printf("\n");

	return 0;
}




