
//depends on how you want the fractional part for negative numbers.

#include <stdio.h>

int main(void) {
    float f = -3.3f;
    printf("%f\n", f - (int) f);
}