#include <stdio.h>
#include <stdlib.h>
#include <memory.h>

#define TRUE 1

int main(void) {
	int *num = (int *)malloc(sizeof(int)*201);
	memset(num, 0, sizeof(int)*201);

	int N;
    scanf("%d", &N);

    int i, input;
    for ( i=0; i<N; i++ ) {
        scanf("%d", &input);
        num[input+100]++;
    }
	
    int key;
    scanf("%d", &key);
    printf("%d\n", num[key+100]);

	return 0;
}