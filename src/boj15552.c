#include <stdio.h>

int main(void) {
    int T, A, B;
	scanf("%d", &T); 
	
	int i;
	for (i=0; i<T; i++) {
		scanf("%d %d", &A, &B);
		printf("%d\n", A+B);
	}
    return 0;
}