#include <stdio.h>

int main(void) {
  int n[5][5];
  for (int i = 0; i < 5; i++) {
    printf("Enter row %d: ", i + 1);
    scanf("%d %d %d %d %d", &n[i][0],  &n[i][1],  &n[i][2],  &n[i][3],  &n[i][4]);
  }
  printf("\nRow totals: ");
  int sum;
  for (int i = 0; i < 5; i++) {
    sum = 0;
    for (int j = 0; j < 5; j++) {
      sum += n[i][j];
    }
    printf("%d ", sum);
  }
  printf("\nColumn totals: ");
  for (int i = 0; i < 5; i++) {
    sum = 0;
    for (int j = 0; j < 5; j++) {
      sum += n[j][i];
    }
    printf("%d ", sum);
  }
  printf("\n");
}