#include "stdio.h"
#include "stdlib.h"
#include "string.h"

int main()
{
        int arr[5] = {1,2,3,4,5};
        char str[15] = {'H', 'e', 'l', 'l', 'o'};
	char sut[] = " This is vibhanshu verma";
	strcat(str, sut);
	printf("%s %d\n",str, (int)strlen(str));
	/*for(int i = 0 ; i<15 ; i++)
	{
		printf("%c", str[i]);
	}*/

	printf("\n");

	//printf("%u\n %u \n",&arr[0] + 5, &arr[5]);
        //printf("%d\n",arr[-1]);
        
	return EXIT_SUCCESS;
}
