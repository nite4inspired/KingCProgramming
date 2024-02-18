#include <stdio.h>

int main(void) {
  int days, start;
  printf("Enter number of days in month: ");
  scanf("%d", &days);
  printf("Enter starting day of the week (1=Sun, 7=Sat): ");
  scanf("%d", &start);
  for (int i = 1; i < start; i++) {
    printf("   ");
  }
  for (int n = 1; n <= days; n++) {
    printf("%2d ", n);
    if ((start + n) % 7 == 1) printf("\n");
  }
  printf("\n");
  return 0;
}