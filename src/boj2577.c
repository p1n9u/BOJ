#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int *p = (int *)malloc(sizeof(int)*10);
	int *num = (int *)malloc(sizeof(int)*3);

	int i;
	for ( i=0; i<3; i++ ) {
		scanf("%d", num+i);
	}

	int mul = (*num) * (*(num+1)) * (*(num+2));
	
	int tmp, N;
	tmp = mul; N=0;
	while ( mul != 0 ) {
		mul /= 10;
		N++;
	}

	char *s = (char *)malloc(sizeof(char)*N);
	char *idx = "0123456789";
	sprintf(s, "%d", tmp);

	int j;
	for ( i=0; i<10; i++ ) {
		for ( j=0; j<N; j++ ) {
			if ( idx[i] == s[j] ) {
				p[i]++;
			}
		}
	}

	for ( i=0; i<10; i++ ) {
		printf("%d\n", p[i]);
	}
	
    return 0;
}