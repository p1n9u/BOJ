#include <stdio.h>
#include <stdlib.h>
#include <memory.h>

void repeat_string(int N, char *s);

int main(void) {
    int T;
    scanf("%d", &T);

    int *p = (int *)malloc(sizeof(int)*T);
    char **buf = (char **)malloc(sizeof(char *)*T);
    int i;
    for ( i=0; i<T; i++ ) {
        buf[i] = (char *)malloc(sizeof(char)*21);
    }
    for ( i=0; i<T; i++ ) {
        scanf("%d %s", (p+i), buf[i]);
    }

    for ( i=0; i<T; i++ ) {
        repeat_string(p[i], buf[i]);
        printf("\n");
    }
    
    return 0;
}

void repeat_string(int N, char *s) {
    while ( *s ) {
        int i;
        for ( i=0; i<N; i++ ) {
            printf("%c", *s);
        }
        s++;
    }
}