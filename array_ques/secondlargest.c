#include <stdio.h>

int main()
{
	int arr[] = {7,7,2,3,4,5,6,7,8,5,3,6,4,2,5,7};
	int mx = 0, smx = 0, n = sizeof(arr)/sizeof(int);

	/*for(int i = 0 ; i<n ; i++)
	{
		if(mx<arr[i])
		{
			mx = arr[i];
		}
	}*/

	if(arr[0] > arr[1])
	{
		mx = arr[0];
		smx = arr[1];
	}else
	{
		mx = arr[1];
		smx = arr[0];
	}

	for(int i = 2 ; i<n ; i++)
	{
		if(arr[i] > mx)
		{
			smx = mx;
			mx = arr[i];
		}
		else if(arr[i] > smx && arr[i] != mx)
		{
			smx = arr[i];
		}
	}


	/*int smx = 0;
	for(int i = 0 ; i<n ; i++)
	{
		if(arr[i] == mx)
		{
			continue;
		}
		if(arr[i]>smx)
		{
			smx = arr[i];
		}
	}*/

	printf("mx : %d \n smx : %d",mx, smx);
	return 0;
}


	
