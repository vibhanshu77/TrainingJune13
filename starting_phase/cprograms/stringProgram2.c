#include "stdio.h"
#include "limits.h"
#include "float.h"

int main()
{
	printf("Char min :  %d \n ", CHAR_MIN);
	printf("Char max :  %d \n ", CHAR_MAX);
	
//	printf("UChar min :  %d \n ", UCHAR_MIN);
	printf("UChar max :  %d \n ", UCHAR_MAX);

	printf("Short  min :  %d \n ", SHRT_MIN);
	printf("Short max :  %d \n ", SHRT_MAX);
	printf("UShort max :  %ud \n ", USHRT_MAX);

	printf("Int  min :  %d \n ", INT_MIN);
        printf("Int max :  %d \n ", INT_MAX);
        printf("UInt max :  %ud \n ", UINT_MAX);
	
	printf("LONG_MIN: %ld\n", LONG_MIN);
    	printf("LONG_MAX: %ld\n", LONG_MAX);
    	printf("ULONG_MAX: %lu\n", ULONG_MAX);
    
	printf("FLT_MIN: %f\n", FLT_MIN);
    	printf("FLT_MAX: %f\n", FLT_MAX);
    
	printf("DBL_MIN: %f\n", DBL_MIN);
    	printf("DBL_MAX: %f\n", DBL_MAX);
    
	printf("LDBL_MIN: %Lf\n", LDBL_MIN);
    	printf("LDBL_MAX: %Lf\n", LDBL_MAX);	

	return 0;
}
