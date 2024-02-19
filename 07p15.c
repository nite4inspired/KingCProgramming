#include <stdio.h>

int main(void) {
    int n;
    long double f = 1;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    for (; n > 0; n--) f *=  n;
    printf("Factorial of the integer: %Lf\n", f);
}

/*
a) 7
b) 12
c) 20 
d) 20
e) 34
f) 170
g) 1754
*/