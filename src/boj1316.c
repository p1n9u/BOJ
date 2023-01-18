#include <stdio.h>
#include <stdlib.h>
#include <memory.h>
#include <string.h>

#define TRUE 1
#define FALSE 0

int is_group(int *arr);

int main(void) {
	int *alpha = (int *)malloc(sizeof(int)*26);
	
    int N;
    scanf("%d", &N);

    char **words;
    words = (char **)malloc(sizeof(char*)*N);
    int i, j;
    for ( i=0; i<N; i++ ) {
        words[i] = (char *)malloc(sizeof(char)*101);
        scanf("%s", words[i]);
    }

    int idx, cnt=0;
    for ( i=0; i<N; i++ ) {
        memset(alpha, 0, sizeof(int)*26);
        for ( j=0; words[i][j] != '\0'; j++ ) {
            idx = words[i][j]-97;
            if ( words[i][j] != words[i][j+1] ) {
                alpha[idx]++;
            }
        }
        if ( is_group(alpha) ) {
            cnt++;
        }
    }

    printf("%d\n", cnt);

	return 0;
}

int is_group(int *arr) {
    int i, flag = TRUE;
    for ( i=0; i<26; i++ ) {
        if ( arr[i] > 1 ) {
            flag =FALSE;
            break;
        }
    }
    return flag;
}