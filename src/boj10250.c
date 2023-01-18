#include <stdio.h>
#include <stdlib.h>
#include <memory.h>
#include <string.h>

#define TRUE 1
#define FALSE 0

int arrange_room(int H, int N);

int main(void) {
    int T;
    scanf("%d", &T);
    
    int **T_info;
    T_info = (int **)malloc(sizeof(int*)*T);
    int i;
    for ( i=0; i<T; i++ ) {
        T_info[i] = (int *)malloc(sizeof(int)*3);
        scanf("%d %d %d", *(T_info+i)+0, *(T_info+i)+1, *(T_info+i)+2);
    }
    for ( i=0; i<T; i++ ) {
        printf("%d\n", arrange_room(T_info[i][0],T_info[i][2]));
    }
	return 0;
}

int arrange_room(int H, int N) {
    int y, x, res;
    if ( N%H == 0 ) {
        y = H; x = N/H;
    } else {
        y = N%H; x = N/H+1;
    }
    res = y*100+x;
    return res;
}