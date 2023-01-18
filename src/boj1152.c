#include <stdio.h>
#include <stdlib.h>
#include <memory.h>
#include <string.h>

#define TRUE 1
#define FALSE 0

int count_word(char *s, int low, int high);

int main(void) {
	char *buf = (char *)malloc(sizeof(char)*1000001);
	memset(buf, 0x00, sizeof(char)*1000001); 
	int i; char c;
	for ( i=0; (c=getchar()) != '\n'; i++ ) {
		*(buf+i) = c;
	} 

    int len = strlen(buf);

	if ( len == 1 ) {
		if ( *buf == ' ' ) {
			printf("0\n");
		} else {
			printf("1\n");
		}
		return 0;
	}

	if ( (*buf == ' ') && ( *(buf+len-1) == ' ') ) {
		printf("%d\n", count_word(buf, 1, len-2));
		return 0;
	} else if ( (*buf == ' ') && ( *(buf+len-1) != ' ') ) {
		printf("%d\n", count_word(buf, 1, len-1));
		return 0;
	} else if ( (*buf != ' ') && ( *(buf+len-1) == ' ') ) {
		printf("%d\n", count_word(buf, 0, len-2));
		return 0;
	} else {
		printf("%d\n", count_word(buf, 0, len-1));
		return 0;
	}
}

int count_word(char *s, int low, int high) {
	int i;
	int cnt = 1;
	for ( i=low; i<high; i++ ) {
		if ( *(s+i) == ' ' ) {
			cnt++;
		}
	}
	return cnt;
}