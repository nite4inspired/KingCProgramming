#include <stdio.h>
#include <ctype.h>

int main(void) {
  char msg[30];
  char x;
  printf("Enter message: ");
  int i = 0;
  while ((x = toupper(getchar())) != '\n') {
    switch(x) {
      case 'A': msg[i++] = '4'; break;
      case 'B': msg[i++] = '8'; break;
      case 'E': msg[i++] = '3'; break;
      case 'I': msg[i++] = '1'; break;
      case 'O': msg[i++] = '0'; break;
      case 'S': msg[i++] = '5'; break;
      default: msg[i++] = x;
    }
  }
  for (int j = 0; j < i; j++) {
    printf("%c", msg[j]);
  }
  for (int i = 0; i < 10; i++) printf("!");
  printf("\n");
}