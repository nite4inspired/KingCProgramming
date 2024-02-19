#include <stdio.h>
#include <ctype.h>

int main(void) {
    int count = 0; char x;
    printf("Enter a sentence: ");
    while ((x = toupper(getchar())) != '\n') {
        switch(x) {
            case 'A': case 'E': case 'I': case 'O': case 'U': count ++; break;
        }
    }
    printf("Your sentence contains %d vowels.\n", count);
}