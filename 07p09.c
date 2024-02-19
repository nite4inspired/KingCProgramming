#include <stdio.h>
#include <ctype.h>

int main(void) {
  int h, m, t;
  char aorp;
  printf("Enter a 12-hour time: ");
  scanf("%d : %d ", &h, &m);
  aorp = toupper(getchar());
  switch(aorp) {
    case 'A': break;
    case 'P': h += 12; break;
  }
  printf("Equivalent 24-hour time: %d:%d\n", h, m);
}