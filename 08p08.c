#include <stdio.h>

int main(void) {
  int n[5][5];
  for (int i = 0; i < 5; i++) {
    printf("Enter 5 quiz grades for student %d: ", i + 1);
    scanf("%d %d %d %d %d", &n[i][0],  &n[i][1],  &n[i][2],  &n[i][3],  &n[i][4]);
  }
  printf("\nTotal Scores for each student: \t");
  int sum;
  for (int i = 0; i < 5; i++) {
    sum = 0;
    for (int j = 0; j < 5; j++) {
      sum += n[i][j];
    }
    printf("%4d ", sum);
  }
  printf("\nAverage Scores for each student:");
  for (int i = 0; i < 5; i++) {
    sum = 0;
    for (int j = 0; j < 5; j++) {
      sum += n[i][j];
    }
    printf("%.1f ", sum / 5.0);
  }
  printf("\nAverage Scores for each quiz: \t");
  for (int i = 0; i < 5; i++) {
    sum = 0;
    for (int j = 0; j < 5; j++) {
      sum += n[j][i];
    }
    printf("%.1f ", sum / 5.0);
  }
  printf("\nHigh Scores for each quiz: \t");
  int high;
  for (int i = 0; i < 5; i++) {
    high = 0;
    for (int j = 0; j < 5; j++) {
      if (high < n[j][i]) high = n[j][i];
    }
    printf("%-4d ", high);
  }
  printf("\nLow Scores for each quiz: \t");
  int low;
  for (int i = 0; i < 5; i++) {
    low = 100;
    for (int j = 0; j < 5; j++) {
      if (low > n[j][i]) low = n[j][i];
    }
    printf("%-4d ", low);
  }
  printf("\n");
}