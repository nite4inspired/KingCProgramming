#include <stdio.h>

int main(void) {
  printf("This program creates a magic square of a specified size.\n");
  printf("The size must be an odd number between 1 and 99.\n");
  printf("Enter size of magic square: ");
  int n;
  scanf("%d", &n);
  int square[99][99] = {0};
  int r = 0, c = (n - 1) / 2;

  for (int i = 1; i <= n * n; i++) {
    square[r][c] = i;
    if (square[(r - 1 + n) % n][(c + 1 + n) % n] != 0) {
      r = (r + 1 + n) % n;
    } else {
      r = (r - 1 + n) % n;
      c = (c + 1 + n) % n;
    }
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      printf("%5d", square[i][j]);
    }
    printf("\n");
  }
}