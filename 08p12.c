#include <stdio.h>
#include <ctype.h>

int main(void) {
    char x;
    int score = 0;
    int points[26] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 0, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

    printf("Enter a word: ");
    while((x = getchar()) != '\n') {
      score += points[toupper(x) - 65];
    }
    printf("Scrabble value: %d\n", score);
}