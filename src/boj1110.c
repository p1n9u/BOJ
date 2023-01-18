#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int N, tmp, d, cnt=0;
	int *p = (int *)malloc(sizeof(int)*2);

	scanf("%d", &N);
	if ( N>=0 && N<=99 ){
		d=N;
	} else {
		return -1;
	}

	do {
		if ( N<10 ) {
			p[1] = 0;
			p[0] = tmp = N;
			p[0] += p[1];
			p[1] = tmp;
		} else {
			p[1] = N/10;
			p[0] = tmp = N%10;
			if ( p[0]+p[1]>=10 ){
				p[0] = (p[0]+p[1])%10;
				p[1] = tmp;
			} else {
				p[0] += p[1];
				p[1] = tmp;
			}
		}
		N = p[1]*10 + p[0];
		cnt++;
	} while( d!=N );
	
	printf("%d\n", cnt);

    return 0;
}