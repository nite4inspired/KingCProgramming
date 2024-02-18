// 10 5 3 2 1 1 ...
#include <stdio.h>
int main(void) {
  for (int i = 10, j = 1; i >= 1 && j <= 10; i /= 2, j++)
    printf("%d ", i++);
}
