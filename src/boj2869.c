#include <stdio.h>
#include <math.h>

#define TRUE 1

int main(void) {
    int A, B, V;
    scanf("%d %d %d", &A, &B, &V);

    // V <= (n-1)(A-B) + A -> (V-A)/(A-B)+1 <= n
    double num;
    num = (V-A)/(double)(A-B)+1.0;

    int res;
    res = ceil(num);

    printf("%d\n", res);

    return 0;
}