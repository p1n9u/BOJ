#include <stdio.h>

void timer(int hour, int min, int time);

int main(void) {
    int hour, min, time;
    scanf("%d %d", &hour, &min);
    scanf("%d", &time);

    timer(hour, min, time);

	return 0;
}

void timer(int hour, int min, int time) {
    min += time;
    
    if ( min >= 60 ) {
        hour += (min/60);
        min %= 60;
    }
    
    if ( hour >= 24 ) {
        hour %= 24;
    }

    printf("%d %d\n", hour, min);
}