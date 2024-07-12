#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n, ret = 0;
	FILE *ptr;
	ptr = fopen("test.txt","w");

	if(ptr == NULL)
	{
		printf("\nfile not open.");
		exit(1);
	}

	printf("Enter the num : ");
	scanf("%d",&n);

	ret = fprintf(ptr,"%d",n);
	if(ret<=0)
	{
		printf("fail write");
		return EXIT_FAILURE;
	}

	ret = fclose(ptr);
	if(ret != 0)
	{
		printf("file not closed");
		return EXIT_FAILURE;
	}
	ptr = NULL;
	return 0;

}
