#include <stdio.h>

int main(void) {
  int n;
  printf("Enter the Number: ");
  scanf("%d", &n);
  for (int d = 2; d * d <= n; d++)
    if (n % d == 0) {
      printf("Not Prime\n");
      return 0;
    }
  printf("Prime\n");
}