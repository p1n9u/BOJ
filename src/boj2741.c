#include <stdio.h>

int main(void) {
    int N;
	scanf("%d", &N); 
	
    if ( N>=1 && N<=100000 ) {
	    int i;
	    for (i=1; i<=N; i++) {
		    printf("%d\n", i);
	    }
    }
    
    return 0;
}