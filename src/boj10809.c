#include <stdio.h>
#include <stdlib.h>
#include <memory.h>

int main(void) {
    int *alpha = (int *)malloc(sizeof(int)*26);
    memset(alpha, -1, sizeof(int)*26);

    char *buf = (char *)malloc(sizeof(char)*101);
    memset(buf, 0x00, sizeof(char)*101);
    scanf("%s", buf);

    int cnt = 0;
    while ( *buf ) {
        int idx = *buf - 97;
        if ( *(alpha+idx) == -1 ) {
            *(alpha+idx) = cnt;
        }
        cnt++; buf++;
    }

    int i;
    for ( i=0; i<26; i++ ) {
        printf("%d ", *(alpha+i));
    }
    printf("\n");
    
    return 0;
}