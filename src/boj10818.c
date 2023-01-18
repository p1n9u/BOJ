#include <stdio.h>
#include <stdlib.h>

void quicksort(int *, int, int);
int partition(int *, int, int, int);

int main(void) {
    int N;
	scanf("%d", &N);
	int *p = (int *)malloc(sizeof(int)*N);

	int i;
	for ( i=0; i<N; i++ ) {
		scanf("%d", p+i);
	}

	quicksort(p, 0, N-1);
	printf("%d %d\n", *p, *(p+N-1));

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