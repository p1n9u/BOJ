#include <stdio.h>
#include <math.h>

int main(void) {
    int opd_0, opd_1;
    scanf("%d", &opd_0); fflush(stdin);
    scanf("%d", &opd_1); fflush(stdin);
    
    int i, tmp, result=0, digit[3];
    for ( i=0; i<3; i++ ) {
        digit[i] = opd_1%10;
		opd_1 /= 10;
        printf("%d\n", tmp = digit[i] * opd_0);
        result += (int)( tmp * pow(10, i) );
    }
    printf("%d\n", result);
    return 0;
}