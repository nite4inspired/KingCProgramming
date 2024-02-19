#include <stdio.h>
#include <ctype.h>

int main(void) {
    char x;
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
    while ((x = getchar()) != '\n') {
        if (x == ' ') {
            continue;
        }
        else {
            putchar(x);
        }
    }
    printf(", %c.\n", toupper(first));
}