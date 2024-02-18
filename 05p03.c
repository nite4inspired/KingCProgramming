#include <stdio.h>

int main(void) {
  int shares;
  float price, value, commission;
  printf("Enter the number of shares: ");
  scanf("%d", &shares);
  printf("Enter the price per share: ");
  scanf("%f", &price);
  value = price * shares;
  if (value < 2500.00) commission = 30.00 + .017 * value;
  else if (value < 6250.00) commission = 56.00 + .0066 * value;
  else if (value < 20000.00) commission = 76.00 + .0034 * value;
  else if (value < 50000.00) commission = 100.00 + .0022 * value;
  else if (value < 500000.00) commission = 155.00 + .0011 * value;
  else commission = 255.00 + .0009 * value;
  if (commission < 39.00) commission = 39.00;
  printf("Commission by original broker: $%.2f\n", commission);
  printf("Commission by rival broker: $%.2f\n", shares < 2000 ? 33.00 + .03 * shares : 33.00 + .02 * shares);

  return 0;
}