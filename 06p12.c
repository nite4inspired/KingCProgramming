#include <stdio.h>

int main(void) {
  int fact = 1;
  float epsilon, series = 1, term;
  printf("Enter ɛ: ");
  scanf("%f", &epsilon);
  int i = 1;
  while ((term = 1.0 / (fact *= i)) >= epsilon) {
    series += term;
    i++;
  }
  printf("e is approximately %f\n", series);
}