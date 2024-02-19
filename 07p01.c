#include <stdio.h>

int main(void) {
    int i, n;
    printf("Enter number of entries: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        printf("%10d%10d\n", i, i * i);
    }
}

//46341; 182; 3037000500