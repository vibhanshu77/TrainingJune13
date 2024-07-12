#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Usage: %s num1 num2 ... numN\n", argv[0]);
        return 1;
    }
 
    int sum = 0;
    for (int i = 1; i < argc; i++) {
        sum +=atoi(argv[i]);
    }
 
    printf("Sum: %d\n", sum);
 
    return 0;
}
