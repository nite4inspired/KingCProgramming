#include <stdio.h>

int main(void) {
  float income;
  printf("What is your taxable income? $");
  scanf("%f", &income);
  if (income < 750.00) printf("tax due: $%.2f\n", .01 * income);
  else if (income < 2250.00) printf("tax due: $%.2f\n", 7.50 + .02 * (income - 750.00));
  else if (income < 3750.00) printf("tax due: $%.2f\n", 37.50 + .03 * (income - 2250.00));
  else if (income < 5250.00) printf("tax due: $%.2f\n", 82.50 + .04 * (income - 3750.00));
  else if (income < 7000.00) printf("tax due: $%.2f\n", 142.50 + .05 * (income - 5250.00));
  else printf("tax due: $%.2f\n", 230.00 + .06 * (income - 7000.00));


}