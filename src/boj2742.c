#include <stdio.h>

int main(void) {
    int N;
	scanf("%d", &N); 
	
    if ( N>=1 && N<=100000 ) {
	    int i;
	    for (i=N; i>=1; i--) {
		    printf("%d\n", i);
	    }
    }
    
    return 0;
}