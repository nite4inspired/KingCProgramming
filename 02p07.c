#include <stdio.h>

int main(void) {
    printf("Enter a dollar amount: ");
    int x;
    scanf("%d", &x);
    printf("$20 bills: %d\n", x / 20);
    x -= 20 * (x / 20);
    printf("$10 bills: %d\n", x / 10);
    x -= 10 * (x / 10);
    printf("$5 bills: %d\n", x / 5);
    x -= 5 * (x / 5);
    printf("$1 bills: %d\n", x);
}