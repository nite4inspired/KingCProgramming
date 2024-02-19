#include <stdio.h>

int main(void) {
    int count = 0; 
    float sum = 0;
    char x, previous = ' ';
    printf("Enter a sentence: ");
    while ((x = getchar()) != '\n') {
        if (x != ' ' && previous == ' ') {
            count++;
            sum++;
        } 
        else if (x != ' ' && previous != ' ') sum++;
        previous = x;
    }
    printf("Average word length: %.1f\n", sum/count);
}