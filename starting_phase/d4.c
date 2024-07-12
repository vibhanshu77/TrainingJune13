#include <stdio.h>

int main() {
    char msg[][5] = {"AB", "CD", "EF"}; 
    char (*ptr2)[2]; 

    ptr2 = msg;

    //printf("First row: %s\n", ptr2[0]); // Accessing the first row
    //printf("Second row: %s\n", ptr2[1]); // Accessing the second row
//	printf("Third row: %s\n", ptr2[2]);
    int a[] = {0, 1, 2, 3, 4}; //-----------(MY PROBLEM)
    int *p[] = {a, a+1, a+2, a+3, a+4};
    int *c = &(++a);
    printf("%p %p %p %p %d %p\n", p, &p[1], a, *p, *(*p), c);

    return 0;
}
