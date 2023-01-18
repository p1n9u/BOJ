#include <stdio.h>

int main(void) {
    int A, B, C, res;
    scanf("%d %d %d", &A, &B, &C);
    
    if ( C-B <= 0 ) {
        printf("-1\n");
    } else {
        res = A/(C-B);
        printf("%d\n", res+1);
    }
    return 0;
}