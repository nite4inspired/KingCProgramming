#include <stdio.h>

int main(void) {
    int num1, num2, den1, den2;
    printf("Enter two fractions separated by a plus sign: ");
    scanf("%d / %d ", &num1, &den1);
    char op = getchar();
    scanf("%d / %d", &num2, &den2);

    switch(op) {
        case '+': printf("The sum is %d/%d\n", num1*den2 + num2*den1, den1*den2); break;
        case '-': printf("The difference is %d/%d\n", num1*den2 - num2*den1, den1*den2); break;
        case '*': printf("The product is %d/%d\n", num1*num2, den1*den2); break;
        case '/': printf("The quotient is %d/%d\n", num1*den2, den1*num2); break;
    }
    
}