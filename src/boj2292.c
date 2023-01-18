#include <stdio.h>

#define TRUE 1

int main(void) {

    int N;
    scanf("%d", &N);

    int i=0;
    if ( N==1 ) {
        printf("%d\n", 1);
    } else {
        while ( TRUE ) {
            if ( (1+3*i*(i-1))<N && N<=(1+3*i*(i+1)) ) {
                break;
            } 
            i++;
        }
        printf("%d\n", i+1);
    }
    return 0;
}