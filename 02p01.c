#include <stdio.h>

int main(void) {
    for (int i = 7; i >= 5; i--) {
        for (int j = 0; j < i; j++) {
            printf(" ");
        }   
        printf("*\n");
    }
    printf("*   *\n");
    printf(" * *\n");
    printf("  *\n");
}