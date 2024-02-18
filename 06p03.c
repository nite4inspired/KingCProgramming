#include <stdio.h>

int main(void) {
  int q, r, temp, num, denom;
  printf("Enter a fraction: ");
  scanf("%d / %d", &q, &r);
  num = q; denom = r;
  while (q % r != 0) {
    temp = q;
    q = r;
    r = temp % r;
  }
  printf("In lowest terms: %d/%d\n", num/r, denom/r);

}