#include <stdio.h>

int main(void) {
  int a, b, c, d, max1, min1, max2, min2;
  printf("Enter four integers: ");
  scanf("%d %d %d %d", &a, &b, &c, &d);
  max1 = (a < b) ? b : a;
  min1 = (a < b) ? a : b;
  max2 = (c < d) ? d : c;
  min2 = (c < d) ? c : d;
  max1 = (max1 < max2) ? max2: max1;
  min1 = (min1 < min2) ? min1: min2;
  printf("Largest: %d\n", max1);
  printf("Smallest: %d\n", min1);

}