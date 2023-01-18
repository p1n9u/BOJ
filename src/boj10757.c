#include <stdio.h>
#include <stdlib.h>
#include <memory.h>
#include <string.h>

int c2i(char c);

int main(void) {
    char **nums;
    nums = (char **)malloc(sizeof(char*)*2);
    int i, j;
    for ( i=0; i<2; i++ ) {
        nums[i] = (char *)malloc(sizeof(char)*10002);
    }

    scanf("%s %s", nums[0], nums[1]);

    int len0, len1, max_len, diff, flag, type;
    len0 = strlen(nums[0]);
    len1 = strlen(nums[1]);
    (len0 > len1) ? (max_len=len0, flag=len1, diff=len0-len1, type=0) : (max_len=len1, flag=len0, diff=len1-len0, type=1);

    char *str;
    str = (char *)malloc(sizeof(char)*max_len+1);
    memset(str, '0', sizeof(char)*diff);
    strcat(str, nums[!type]);
    
    char *res;
    res = (char *)malloc(sizeof(char)*max_len+2);
    memset(res, 0x00, sizeof(char)*max_len+2);

    int sum, carry=0;
    for ( i=max_len-1; i>=0; i-- ) {
        sum = c2i(str[i])+c2i(nums[type][i])+carry;
        if(sum>=10) {
            carry = 1;
        } else {
            carry = 0;
        }
        res[i] = (sum%10)+'0';
    }
    if ( carry ){
        printf("1%s\n", res);
    } else {
        printf("%s\n", res);
    }
	return 0;
}

int c2i(char c) {
    int i = c - 48;
    return i;
}
