#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int main()
{
	printf("File : %s\n",__FILE__);
	printf("File : %d\n",__LINE__);
	printf("File : %s\n",__DATE__);
	printf("File : %s\n",__TIME__);

	#ifdef __cplusplus
		printf("Compiled as C++\n");
	#else
		printf("Compiled as C\n");
	#endif
	
	printf("STDC Version: %ld\n", __STDC_VERSION__);
 
    	assert(1 == 1);
   	printf("Assertion passed\n");
 
    	return EXIT_SUCCESS;
}


