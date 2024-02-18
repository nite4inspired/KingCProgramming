#include <stdio.h>

int main(void) {
  int h, m;
  printf("Enter a 24-hour time: ");
  scanf("%d : %d", &h, &m);
  if (h < 12) printf("Equivalent 12-hour time: %d:%.2d AM\n", h, m);
  else if (h == 12) printf("Equivalent 12-hour time: 12:%.2d PM\n", m);
  else if (h == 24) printf("Equivalent 12-hour time: 12:%.2d AM\n", m);
  else printf("Equivalent 12-hour time: %d:%.2d PM\n", h-12, m);

}