#include <stdio.h>

int main(void) {
    int N;
	scanf("%d", &N); 
	if ( N>=1 && N<=9 ) {
		int i;
		for ( i=1; i<10; i++ ) {
			printf("%d * %d = %d\n", N, i, N*i);
		}
	}
    return 0;
}