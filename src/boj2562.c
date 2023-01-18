#include <stdio.h>
#include <stdlib.h>

void quicksort(int *, int, int);
int partition(int *, int, int, int);

int main(void) {
	int *p = (int *)malloc(sizeof(int)*9);
	int *tmp = (int *)malloc(sizeof(int)*9);

	int i;
	for ( i=0; i<9; i++ ) {
		scanf("%d", p+i);
	}
	for ( i=0; i<9; i++ ) {
		tmp[i] = p[i];
	}
	quicksort(p, 0, 8);

	int idx;
	for ( i=0; i<9; i++ ) {
		if ( tmp[i] == p[8] ) {
			idx = i+1;
			break;
		}
	}
	printf("%d\n%d\n", p[8], idx);
    return 0;
}

void quicksort(int *S, int low, int high) {
	int pivotpoint;
	if ( high > low ) {
		pivotpoint = partition(S, low, high, pivotpoint);
		quicksort(S, low, pivotpoint-1);
		quicksort(S, pivotpoint+1, high);
	}
}

int partition(int *S, int low, int high, int pivotpoint) {
	int i, j, tmp;
	int pivotitem;

	pivotitem = S[low];
	j = low;
	for ( i=low+1; i<=high; i++ ) {
		if ( S[i] < pivotitem ) {
			j++;
			tmp = S[i];
			S[i] = S[j];
			S[j] = tmp;
		}
	}
	pivotpoint = j;
	tmp = S[low];
	S[low] = S[pivotpoint];
	S[pivotpoint] = tmp;
	return pivotpoint;
}