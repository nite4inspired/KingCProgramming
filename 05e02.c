/*
a) 1
b) 1
c) 1
d) 1
*/

#include <stdio.h>

int main(void) {
  int i, j, k;
  i = 10; j = 5;
  printf("%d\n", !i < j);
  i = 2; j = 1;
  printf("%d\n", !!i + !j);
  i = 5; j = 0; k = -5;
  printf("%d\n", i && j || k);
  i = 1; j = 2; k = 3;
  printf("%d\n", i < j || k);
}