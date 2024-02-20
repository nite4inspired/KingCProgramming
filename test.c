#include <stdio.h>

int main(void) {
  int array[10][10] = {0};
  for (int i = 0; i < 10; i++) {
    printf("%d ", array[i][i]);
    printf("\n");
  }
}
// 64bit machine - short: 16 bit, int: 32bit, long: 64bit