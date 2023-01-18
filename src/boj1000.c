#include <stdio.h>

int main(void) {
	int A, B;
	scanf("%d %d", &A, &B);
	if ( (A>0 && A<10) && ( B>0 && B<10 ) ) {
		printf("%d\n", A+B);
	}
	return 0;
}