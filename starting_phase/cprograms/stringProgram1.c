#include "stdio.h"
#include "string.h"


// v i b h a n s h u \0

int main()
{
	char name[] = "Vibhanshu";

	char *p = name;

	/*for(int i = 0 ; p[i] != '\0' ; i++)
	{
		printf("%c ", p[i]);

	}*/
	//printf("%ld %lu", sizeof(name), strlen(name));
	//printf("\"geeksforgeeks\"");
	/*
	printf("char : %ld \n", sizeof(char));
	printf("int : %ld \n", sizeof(short int));
	printf("long int : %ld \n", sizeof(long int)); 
	printf("long long int : %ld \n", sizeof(long long int)); 
	printf("float : %ld \n", sizeof(float)); 
	printf("double : %ld \n", sizeof(double)); 
	printf("long double : %ld \n", sizeof(long double)); */
//	printf("long long double : %ld \n", sizeof(long long double));
	int width, num, a, b;
	//printf("%*d \n\n", width, num);
//	printf("enter the  values");
//	scanf("%d  %d", &a, &b);
	int c = 12;
	unsigned long int d = ~c;
	//printf("%lu \n",d);
	if(3.0 - 3 == 0)
		printf("True");
	return 0;
}
