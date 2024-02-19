#include <stdio.h>

int main(void) {
  int n = 1, fact = 1;
  float series = 1;
  printf("Enter n: ");
  scanf("%d", &n);
  for (int i = 1; i <= n; i++) {
    series += 1.0 / (fact *= i);
  }
  printf("e is approximately %f\n", series);
}