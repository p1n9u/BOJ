#include <stdio.h>
#include <stdlib.h>

void quicksort(int *S, int low, int high);
int partition(int *S, int low, int high, int pivotpoint);

int main(void) {
	int N;
	scanf("%d", &N);

	int *p = (int *)malloc(sizeof(int)*N);

	int i;
	for ( i=0; i<N; i++ ) {
		scanf("%d", p+i);
	}

	quicksort(p, 0, N-1);

	double result = 0.0;

	for ( i=0; i<N; i++ ) {
		result += p[i];
	}

	result = result/p[N-1]*100.0/N;
	printf("%.2lf\n", result);

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