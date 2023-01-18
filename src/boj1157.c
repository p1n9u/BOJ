#include <stdio.h>
#include <stdlib.h>
#include <memory.h>
#include <ctype.h>
#include <string.h>

#define TRUE 1
#define FALSE 0

int main(void) {
	char *buf = (char *)malloc(sizeof(char)*1000001);
	memset(buf, 0x00, sizeof(char)*1000001);
	int *alpha = (int *)malloc(sizeof(int)*26);
	memset(alpha, 0, sizeof(int)*26);
	scanf("%s", buf);
    int len = strlen(buf);

	int i, idx;
	for ( i=0; i<len; i++ ) {
		*(buf+i) = toupper(*(buf+i));
		idx = *(buf+i)-65;
		(*(alpha+idx))++;
	}

	int chk=FALSE, max = 0;
	for ( i=1; i<26; i++ ) {
		if ( *(alpha+max) < *(alpha+i) ) {
			max = i;
			chk = FALSE;
		} else if ( *(alpha+max) == *(alpha+i) ) {
			chk = TRUE;
		}
	}

	if ( !chk ) {
		printf("%c\n", max+65);
	} else {
		printf("?\n");
	}
	
	return 0;
}