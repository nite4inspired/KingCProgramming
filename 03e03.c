/*
a) equivalent
b) not equivalent; check as input: "5 - 3 - 2"
c) equivalent
d) equivalent
*/

#include <stdio.h>

int main(void) {
    float a, b;
    printf("Two floats: ");
    scanf("%f,%f", &a, &b);
    printf("a = %f, b = %f\n", a, b);
    printf("Two floats: ");
    scanf("%f, %f", &a, &b);
    printf("a = %f, b = %f\n", a, b);
}