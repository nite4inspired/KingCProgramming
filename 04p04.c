#include <stdio.h>

int main(void) {
    int n;
    printf("Enter a number between 0 and 32767: ");
    scanf("%d", &n);
    printf("In octal, your number is: %d", n / 4096);
    n %= 4096;
    printf("%d", n / 512);
    n %= 512;
    printf("%d", n / 64);
    n %= 64;
    printf("%d", n / 8);
    n %= 8;
    printf("%d\n", n);
}