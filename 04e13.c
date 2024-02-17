// ++i because i += 1 increments, assigns, then yields the value.

#include <stdio.h>

int main(void) {
    int i = 10;
    printf("%d\n", i++);
    i = 10;
    printf("%d\n", ++i);
    i = 10;
    printf("%d\n", i+=1);
}