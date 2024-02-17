#include <stdio.h>

int main(void) {
    printf("Enter amount of loan: ");
    float loan, i, monthly;
    scanf("%f", &loan);
    printf("Enter interest rate: ");
    scanf("%f", &i);
    printf("Enter monthly payment: ");
    scanf("%f", &monthly);
    printf("Balance remaining after first payment: $%.2f\n", loan = loan - monthly + loan * i / 1200);
    printf("Balance remaining after second payment: $%.2f\n", loan = loan - monthly + loan * i / 1200);
    printf("Balance remaining after third payment: $%.2f\n", loan = loan - monthly + loan * i / 1200);
    
}