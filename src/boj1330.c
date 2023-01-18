#include <stdio.h>

int main(void) {
    int A, B;
	scanf("%d %d", &A, &B);

	if ( (A>=-10000 && A<=10000) && (B>=-10000 && B<=10000) ) {
		if ( A == B ) {
			printf("==\n");
		} else if ( A > B ) {
			printf(">\n");	
		} else if ( A < B ) {
			printf("<\n");
		}
	}
    return 0;
}