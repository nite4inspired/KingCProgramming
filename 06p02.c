#include <stdio.h>

int main(void) {
  int q, r, temp;
  printf("Enter two integers: ");
  scanf("%d %d", &q, &r);
  while (q % r != 0) {
    temp = q;
    q = r;
    r = temp % r;
  }
  printf("Greatest common divisor: %d\n", r);

}