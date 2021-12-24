#include <stdio.h>
#include <stdlib.h>

int main() {
    long long time;
    int day;
    int hour;
    int min;
    int sec;
    scanf("%lld", &time);
    day = time / (24 * 60 * 60);
    time %= (24 * 60 * 60);
    hour = time / (60 * 60);
    time %= (60 * 60);
    min = time / 60;
    time %= 60;
    sec = time;
    printf("%d days\n", day);
    printf("%d hours\n", hour);
    printf("%d minutes\n", min);
    printf("%d seconds\n", sec);
    return 0;
}