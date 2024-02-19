
#include <stdio.h>

int main(void) {
    typedef short Int8 ;
    typedef int Int16 ;
    typedef long Int32 ;

    Int8 a; Int16 b; Int32 c;
    printf("%d %d %d\n", sizeof a, sizeof b, sizeof c);
}