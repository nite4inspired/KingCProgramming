#include <stdio.h>

int main(void) {
  float max = -1;
  float n;
  do {
    printf("Enter a number: ");
    scanf("%f", &n);
    if (max < n) max = n;
  } while(n > 0);
  if (max <= 0) printf("Enter nonnegative numbers\n");
  else printf("The largest number entered was %f\n", max);
}