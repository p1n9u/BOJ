#include <stdio.h>
#include <stdlib.h>
#include <memory.h>
#include <string.h>

int get_time(char c);

int main(void) {
	char *buf = (char *)malloc(sizeof(char)*54);
	memset(buf, 0x00, sizeof(char)*54);
	scanf("%s", buf);

    const char* surprised = "??!";

    strcat(buf, surprised);

	printf("%s\n", buf);

	return 0;
}