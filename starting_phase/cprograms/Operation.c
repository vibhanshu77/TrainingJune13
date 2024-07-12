// This is a Calculator Program which perform addition, subtraction, multiplication, divide, modulo, bitwise and, bitwise or, bitwise not
//

#include "stdio.h"
#include "stdlib.h"
#include "string.h"

int main()
{
	int a, b;
	int want = 1;
	while(want == 1)
	{
		printf("\n************Calculator************\n");
		printf("Enter the First Number : ");
		scanf("%d", &a);
		printf("Enter the Second Number : ");
        	scanf("%d", &b);
		printf("\n");
		printf("1 : Addition \n");
		printf("2 : Subtraction \n");
		printf("3 : Multiplication \n");
		printf("4 : Divide \n");
		printf("5 : Modulo \n");
		printf("6 : Bitwise AND \n");
		printf("7 : Bitwise OR \n");
		printf("8 : Bitwise NOT \n");

		int choice;
	       	scanf("%d", &choice);	
		switch(choice)
		{
			case 1 : printf("Addition : %d + %d = %d \n",a, b, a + b);
			 	 break;
			case 2 : printf("Subtraction : %d - %d = %d \n",a, b, a - b);
                         	 break; 
			case 3 : printf("Multiplication : %d * %d = %d \n",a, b, a * b);
                	         break;
			case 4 : printf("Division : %d / %d = %d \n",a, b, a / b);
                	         break;
			case 5 : printf("Modulo : %d %% %d = %d \n",a, b, a % b);
                	         break;
			case 6 : printf("Bitwise AND : %d & %d = %d \n",a, b, a & b);
                	         break;
			case 7 : printf("Bitwise OR : %d | %d = %d \n",a, b, a | b);
                	         break;
			case 8 : printf("Bitwise NOT : ~%d = %d and ~%d = %d \n", a, ~a, b, ~b);
                	         break;
			default	: printf("You enter the wrong choice. \n");
				  break;
		}
		printf("\n \n Press 1 to Proceed one more time else press 0 : ");
		scanf("%d",&want);
	}
	return 0;
}
