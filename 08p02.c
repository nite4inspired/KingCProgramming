#include <stdio.h>

int main(void) {
  int digit_count[10] = {0};
  int digit;
  long n;

  printf("Enter a number: ");
  scanf("%ld", &n);
  while (n > 0) {
    digit = n % 10;
    digit_count[digit]++;
    n /= 10;
  }
  printf("Digit:\t\t ");
  for (int i = 0; i < 10; i++) {
    printf("%d ", i);
  }
  printf("\nOccurrences:\t ");
  for (int i = 0; i < 10; i++) {
    printf("%d ", digit_count[i]);
  }
  printf("\n");
  return 0;
}