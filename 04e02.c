#include <stdio.h>

int main(void) {
    int i = 7, j = 4;
    printf("%d %d\n", (-i)/j, -(i/j));
}

//no, (-7)/4 = -2 and -(7/4) = -1 in C89 depending on the implementation, but in later standards, yes.