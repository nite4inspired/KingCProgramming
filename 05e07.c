/*
prints 17; prints 17
*/
#include <stdio.h>

int main(void) {
  int i = 17;
  printf("%d\n", i >= 0 ? i : -i);
  i = -17;
  printf("%d\n", i >= 0 ? i : -i);

}