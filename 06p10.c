#include <stdio.h>

int main(void) {
  int m, d, y, me, de, ye;
  me = 12; de = 31; ye = 99;
  do {
    printf("Enter a date (mm/dd/yy): ");
    scanf("%d / %d / %d", &m, &d, &y);
    if (m == 0 && d == 0 && y == 0) break;
    if (y < ye) {
      me = m; de = d; ye = y;
    } else if (y == ye) {
      if (m < me) {
        me = m; de = d; ye = y;
      } else if (m == me) {
        if (d < de) {
          me = m; de = d; ye = y;
        }
      }
    }
  } while(1);
  printf("%d/%d/%.2d is the earliest date\n", me, de, ye);
}