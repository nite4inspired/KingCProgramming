#include <stdio.h>

int main(void) {
  int d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11, d12, check;
  printf("Enter the UPC: ");
  scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &d1, &d2, &d3, &d4, &d5, &d6, &d7, &d8, &d9, &d10, &d11, &d12);
  check = 9-((d1+d3+d5+d7+d9+d11)*3+(d2+d4+d6+d8+d10)-1)%10;
  if (d12 == check) printf("VALID\n");
  else printf("NOT VALID\n");
}