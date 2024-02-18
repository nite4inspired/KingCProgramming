#include <stdio.h>

int main(void) {
  int h, m, t;
  printf("Enter a 24-hour time: ");
  scanf("%d : %d", &h, &m);
  t = 60 * h + m;
  if (t < 480 || t >= 1305) printf("Closest departure time is 8:00 a.m., arriving at 10:16 a.m.\n");
  else if (t < 583) printf("Closest departure time is 9:43 a.m., arriving at 11:52 a.m.\n");
  else if (t < 679) printf("Closest departure time is 11:19 a.m., arriving at 1:31 p.m.\n");
  else if (t < 767) printf("Closest departure time is 12:47 a.m., arriving at 3:00 p.m.\n");
  else if (t < 840) printf("Closest departure time is 2:00 p.m., arriving at 4:08 p.m.\n");
  else if (t < 945) printf("Closest departure time is 3:45 a.m., arriving at 5:55 p.m.\n");
  else if (t < 1140) printf("Closest departure time is 7:00 a.m., arriving at 9:20 p.m.\n");
  else if (t < 1305) printf("Closest departure time is 9:45 a.m., arriving at 11:58 p.m.\n");

}