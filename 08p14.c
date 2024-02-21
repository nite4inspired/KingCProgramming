#include <stdio.h>

int main(void) {
  char sentence[50];
  char punctuation;
  printf("Enter a sentence: ");
  int i = -1;
  do {
    i++;
    sentence[i] = getchar();
  } while (sentence[i] != '!' && sentence[i] != '.' && sentence[i] != '?');

  printf("Reversal of sentence: ");
  int last = i, end = i - 1, start = i - 1;
  for (int i = last - 1; i >= 0; i--) {
    if (sentence[i] == ' ') {
      for (int j = start + 1; j <= end; j++) {
        putchar(sentence[j]);
      }
      putchar(' ');
      end = i - 1;
    } else if (i == 0) {
      for (int j = start; j <= end; j++) {
        putchar(sentence[j]);
      }
    }
    start--;
  }
  putchar(sentence[last]);
  printf("\n");
}