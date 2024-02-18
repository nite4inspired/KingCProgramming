#include <stdio.h>
int main(void) {
  int i = 10, j = 1;
  while (i >= 1 && j < 10) {
    printf("%d ", i++);
    i /= 2;
    j++;
  }
}
