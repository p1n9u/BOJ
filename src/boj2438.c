#include <stdio.h>

int main(void) {
    int N;
    scanf("%d", &N);
    if ( N>=1 && N<=100 ) {
        int i, j;
        for ( i=1; i<=N; i++ ) {
            for ( j=0; j<i; j++ ) {
                printf("*");
            }
            printf("\n");
        }
    }
    return 0;
}