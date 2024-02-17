#include <stdio.h>

int main(void) {
    printf("Enter the radius: ");
    float r;
    scanf("%f", &r);
    printf("%f\n", 4.0/3.0 * 3.1416 * r * r * r);
}