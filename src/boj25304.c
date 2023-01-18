#include <stdio.h>

int main(void) {
    int n, X;
    scanf("%d", &X);
    scanf("%d", &n);
    
    int i, res=0, price, quantity;
    for ( i=0; i<n; i++ ) {
        scanf("%d %d", &price, &quantity);
        res += price*quantity;
    }

    ( X == res ) ? printf("Yes\n") : printf("No\n");

    return 0;
}