#include <stdio.h>
#include <stdlib.h>
#include <memory.h>

int count_people(int x, int y);

int main(void) {
    int T;
    scanf("%d", &T);
    
    int **T_info;
    T_info = (int **)malloc(sizeof(int*)*T);
    int i;
    for ( i=0; i<T; i++ ) {
        T_info[i] = (int *)malloc(sizeof(int)*3);
        scanf("%d %d", *(T_info+i)+0, *(T_info+i)+1);
    }
    int x, y;
    for ( i=0; i<T; i++ ) {
        x=T_info[i][0]; y=T_info[i][1];
        printf("%d\n", count_people(x, y));
    }

	return 0;
}

int count_people(int x, int y) {
    int **room;
    room = (int **)malloc(sizeof(int*)*(x+1));
    int i, j;
    for ( i=0; i<x+1; i++ ) {
        room[i] = (int *)malloc(sizeof(int)*(y+1));
    }

    for ( j=1; j<y+1; j++ ) {
        room[0][j] = j;
    }
    for ( i=0; i<x+1; i++ ) {
        room[i][1] = 1;
    }

    for ( i=1; i<x+1; i++ ) {
        for ( j=2; j<y+1; j++ ) {
            room[i][j] = room[i-1][j] + room[i][j-1];
        }
    }

    return room[x][y];
}