#include <stdio.h>

#define TRUE 1

int main(void) {

    int N;
    scanf("%d", &N);

    int i=0;
    if ( N==1 ) {
        printf("1/1\n");
    } else {
        while ( TRUE ) {
            if ( i*(i+1)/2<N && N<=(i+1)*(i+2)/2 ) {
                break;
            } 
            i++;
        }

        int start = i+1, gap = N-i*(i+1)/2-1;

        if ( (i+1)%2 == 0 ) {
            printf("%d/%d\n", 1+gap, start-gap);
        } else {
            printf("%d/%d\n", start-gap, 1+gap);
        }
    }

    return 0;
}