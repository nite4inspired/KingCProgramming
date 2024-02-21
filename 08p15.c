#include <stdio.h>
#include <ctype.h>
int main(void) {
  char msg[80];
  printf("Enter message to be encrypted: ");
  int i = 0;
  while ((msg[i] = getchar()) != '\n') i++;
  printf("Enter shift amount (1-25): ");
  int shift;
  scanf("%d", &shift);
  printf("Encrypted message: ");
  int j = 0;
  while (j < i) {
    if (isalpha(msg[j])) {
      if (msg[j] >= 'a') putchar((msg[j] + shift - 'a') % 26 + 'a');
      else putchar((msg[j] + shift - 'A') % 26 + 'A');
    } else putchar(msg[j]);
    j++;
  }
  putchar('\n');
}