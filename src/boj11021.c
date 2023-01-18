#include <stdio.h>

int main(void) {
    int T, A, B;
	scanf("%d", &T); 
	
	int i;
	for (i=1; i<=T; i++) {
		scanf("%d %d", &A, &B);
		if ( ( A>0 && A<10 ) && ( B>0 && B<10 ) ) {
			printf("Case #%d: %d\n", i, A+B);
			fflush(stdin);
		}
	}
    return 0;
}