#include <stdio.h>

int calculate_min(int total);

int main(void) {
    int N;
    scanf("%d", &N);
    printf("%d\n", calculate_min(N));
}

int calculate_min(int total) {
    int x, balance;
    if ( total%5 == 0 ) {
        return total/5;
    }
    int i;
    for ( i=total/5; i>0; i-- ) {
        x=5*i; balance=total-x;
        if ( balance%3 == 0 ) {
            return i+balance/3;
        }
    }
    if ( total%3 == 0 ) {
        return total/3;
    }
    return -1;
}