#include <stdio.h>

int main(void) {
    float x, result;
    char op;
    printf("Enter an expression: ");
    scanf(" %f", &result);
    while ((op = getchar()) != '\n') {
        switch(op) {
            case '+': {
                scanf(" %f", &x);
                result += x;
                break;
            }
            case '-': {
                scanf(" %f", &x);
                result -= x;
                break;
            }
            case '*': {
                scanf(" %f", &x);
                result *= x;
                break;
            }
            case '/': {
                scanf(" %f", &x);
                result /= x;
                break;
            }
        }
    }

    printf("Value of expression: %f\n", result);
    
}