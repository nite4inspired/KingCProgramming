#include <stdio.h>

int main(void) {
    printf("Enter amount of loan: ");
    float loan, i, monthly;
    int payments;
    scanf("%f", &loan);
    printf("Enter interest rate: ");
    scanf("%f", &i);
    printf("Enter monthly payment: ");
    scanf("%f", &monthly);
    printf("Enter the number of payments: ");
    scanf("%d", &payments);
    for (int i = 0; i < payments; i++) {
      loan = loan - monthly + loan * i / 1200;
    }
    printf("Balance remaining after the payments: $%.2f\n", loan);

}