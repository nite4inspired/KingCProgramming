#include <stdio.h>
#include <ctype.h>

int main(void) {
    char x;
    char phone[15];
    printf("Enter phone number: ");
    int i = 0;
    while ((x = getchar()) != '\n') {
      phone[i] = x;
      i++;
    }
    phone[i] = '\n';
    printf("In numeric form: ");
    i = 0;
    while ((x = phone[i]) != 10) {
        if (x <= ' ') continue;
        else if ((x >= 'A' && x <= 'Z') || (x >= 'a' && x <= 'z')) {
            x = toupper(x);
            switch (x) {
                case 'A': case 'B': case 'C': putchar('2'); break;
                case 'D': case 'E': case 'F': putchar('3'); break;
                case 'G': case 'H': case 'I': putchar('4'); break;
                case 'J': case 'K': case 'L': putchar('5'); break;
                case 'M': case 'N': case 'O': putchar('6'); break;
                case 'P': case 'R': case 'S': putchar('7'); break;
                case 'T': case 'U': case 'V': putchar('8'); break;
                case 'W': case 'X': case 'Y': putchar('9'); break;
            }
        } else putchar(x);
        i++;
    }

    printf("\n");
}