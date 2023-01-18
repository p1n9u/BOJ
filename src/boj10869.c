#include <stdio.h>

int main(void) {
	int A, B;
	scanf("%d %d", &A, &B);
	if ( (A>=1 && A<=10000) && ( B>=1 && B<=10000 ) ) {
		printf("%d\n%d\n%d\n%d\n%d\n", A+B, A-B, A*B, A/B, A%B);
	}
	return 0;
}