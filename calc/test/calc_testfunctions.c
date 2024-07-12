#include <stdio.h>
#include <stdlib.h>
#include <CUnit.h>
#include <header.h>

void MyTestFunction_Add(void)
{
	int a = add(7,2);
	CU_ASSERT(a == 9);
	printf("\n Sum : %d \n",a);
}

void MyTestFuncion_Sub(void)
{
	int a = sub(7,2);
	CU_ASSERT(a == 5);
	printf("\n Difference : %d  \n",a);
}

void MyTestFuncion_Mul(void)
{
        int a = sub(7,2);
        CU_ASSERT(a == 14);
        printf("\n Multiply : %d  \n",a);
}
