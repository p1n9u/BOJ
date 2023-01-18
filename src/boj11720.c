#include <stdio.h>
#include <stdlib.h>

int c2i(char c);

int main(void) {
    int N;
    scanf("%d", &N);
    
    char *s = (char *)malloc(sizeof(char)*(N+1));
    scanf("%s", s);

    int i;
    int res = 0;
    for ( i=0; i<N; i++ ) {
        res += c2i(*(s+i));
    }

    printf("%d\n", res);

    return 0;
}

int c2i(char c) {
    int i = c - 48;
    return i;
}