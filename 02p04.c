#include <stdio.h>

int main(void) {
    printf("Enter an amount: ");
    float x;
    scanf("%f", &x);
    printf("With tax added: $%.2f\n", x * 1.05);
}