#include <stdio.h>

int main(void) {

    // short a = 1; int b = 1; long c = 1;
    
    // for (int i = 1; i < 32; i++) {
    //    printf("short a = 2^%d: %hd\n", i, a *= 2); 
    // }
    // for (int i = 1; i < 32; i++) {
    //    printf("int a = 2^%d: %d\n", i,  b *= 2); 
    float x, result;
    char op;
    printf("Enter an expression: ");
    scanf(" %f", &result);
    op = getchar();
    printf("%d\n", op);
}
// 64bit machine - short: 16 bit, int: 32bit, long: 64bit