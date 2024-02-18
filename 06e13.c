/*
for (n = 0; m > 0; m /= 2, n++);
*/
#include <stdio.h>
int main(void) {
  int n, m = 10;
  for (n = 0; m > 0; m /= 2, n++);
  printf("%d %d\n", m, n); //0 4
  m = 10;
  for (n = 0; m > 0; n++)
    m /= 2;
  printf("%d %d\n", m, n);
}