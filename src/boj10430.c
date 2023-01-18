#include <stdio.h>

int main(void) {
	int A, B, C;
	scanf("%d %d %d", &A, &B, &C);
	if ( (A>=2 && A<=10000) && ( B>=2 && B<=10000 ) && ( C>=2 && C<=10000 ) ) {
		printf("%d\n%d\n%d\n%d\n", (A+B)%C, ((A%C) + (B%C))%C, (A*B)%C, ((A%C) * (B%C))%C);
	}
	return 0;
}