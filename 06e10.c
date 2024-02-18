#include <stdio.h>

int main(void) {
  for(int i = 0; i < 10; i++) {
    if (i % 2 == 1) continue;
    printf("%d ", i);
  }
  printf("\n");
  for(int i = 0; i < 10; i++) {
    if (i % 2 == 1) goto next;
    printf("%d ", i);
    next: ;
  }
}