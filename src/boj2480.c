#include <stdio.h>

int main(void) {
    int a, b, c, arr[3];

    scanf("%d %d %d", &a, &b, &c);

    ( a>b ) ? ( a>c ) ? ( b>c ) ? (arr[0]=a, arr[1]=b, arr[2]=c) : (arr[0]=a, arr[1]=c, arr[2]=b) : ( arr[0]=c, arr[1]=a, arr[2]=b ) : ( b>c ) ? ( a>c ) ? ( arr[0]=b, arr[1]=a, arr[2]=c ) : ( arr[0]=b, arr[1]=c, arr[2]=a ) : ( arr[0]=c, arr[1]=b, arr[2]=a );
    ( arr[0] == arr[1] ) ? ( arr[1] == arr[2] ) ? printf("%d\n", 10000+arr[0]*1000) : printf("%d\n", 1000+arr[0]*100) : ( arr[1] == arr[2] ) ? printf("%d\n", 1000+arr[1]*100) : printf("%d\n", arr[0]*100);

    return 0;

}