/*
not really a shortcut since there are too many 1s.
const int segments[10][7] = {

  {1, 1, 1, 1, 1, 1, 0},
  {0, 1, 1, 0, 0, 0, 0},
  {0, 1, 0, 1, 1, 0, 1},
  {1, 1, 1, 1, 0, 0, 1}.
  {0, 1, 1, 0, 0, 1, 0},
  {1, 0, 1, 1, 0, 1, 1},
  {1, 0, 1, 1, 1, 1, 1},
  {1, 1, 1, 0, 0, 0, 0},
  {1, 1, 1, 1, 1, 1, 1},
  {1, 1, 1, 1, 0, 1, 1}
}
*/

#include <stdio.h>

int main(void) {

  int array[10] = {1};
  for (int i = 0; i < 10; i++) {
    printf("%d ", array[i]);
  }
  printf("\n");
}