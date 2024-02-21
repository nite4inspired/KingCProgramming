#include <stdio.h>
#include <ctype.h>
int main(void) {
  int counts[26] = {0};
  int counts2[26] = {0};
  char letter;
  printf("Enter first word: ");

  while ((letter = getchar()) != '\n') {
    if (isalpha(letter)) counts[toupper(letter) - 'A']++;
  }

  printf("Enter second word: ");

  while ((letter = getchar()) != '\n') {
    if (isalpha(letter)) counts2[toupper(letter) - 'A']++;
  }

  int isanagram = 1;
  for (int i = 0; i < 26; i++) {
    if (counts[i] != counts2[i]) {
      isanagram = 0;
      break;
    }
  }
  if (isanagram) printf("The words are anagrams.\n");
  else printf("The words are not anagrams.\n");
}