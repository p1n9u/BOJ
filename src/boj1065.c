#include <stdio.h>

int han_num(int N);

int main(void) {
    int N;
    scanf("%d", &N);
    printf("%d\n", han_num(N));
    return 0;
}

int han_num(int N) {
    int cnt = 0;
    
    int i;
    for ( i=1; i<=N; i++ ) {
        if ( i<100 ) {
            cnt++;
        } else if ( i>=100 && i<1000 ) {
            int a, b, c;
            a = i%10;
            b = (i/10)%10;
            c = i/100;
            if ( (a-b) == (b-c) ) {
                cnt++;
            }
        }
    }

    return cnt;
}