#include <stdio.h>

int main(void) {
    int prefix, identifier, code, number, check;
    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d", &prefix, &identifier, &code, &number, &check);
    printf("GS1 prefix: %d\n", prefix);
    printf("Group identifier: %d\n", identifier);
    printf("Publisher code: %d\n", code);
    printf("Item number: %d\n", number);
    printf("Check digit: %d\n", check);
}