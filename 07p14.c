#include <stdio.h>
#include <math.h>

int main(void) {
    double x, ynew, yold = 1;
    printf("Enter a positive number: ");
    scanf("%lf", &x);
    do {
        ynew = (yold + x / yold) / 2;
        if (fabs(ynew - yold) < .00001 * ynew) break;
        yold = ynew;
    } while(1);
    printf("Square root: %.15lf\n", ynew);
}