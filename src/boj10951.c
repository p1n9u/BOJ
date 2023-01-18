#include <stdio.h>

#define TRUE 1
#define FALSE 0

int main(void) {
    int A, B;
	while( scanf("%d %d", &A, &B) != EOF ){
		if ((A>0 && A<10) && (B>0 && B<10)){
		} else {
			return -1;
		}
		printf("%d\n", A+B);
	}
    return 0;
}