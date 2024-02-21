#include <stdio.h>
#include <ctype.h>

int main(void) {
    char x;
    char last[20];
    char first;
    printf("Enter a first and last name: ");
    while ((x = getchar()) != '\n') {
        if (x == ' ') {
            continue;
        }
        else {
            first = x;
            break;
        }
    }
    while ((x = getchar()) != ' ');
    int i = 0;
    while ((x = getchar()) != '\n') {
        if (x == ' ') {
            continue;
        }
        else {
            last[i] = x;
            i++;
        }
    }
    last[i] = '\n';
    int j = 0;
    while (last[j] != '\n') {
      putchar(last[j]);
      j++;
    }
    printf(", %c.\n", toupper(first));
}