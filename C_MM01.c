#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int upLen;
    int downLen;
    int height;
    scanf("%d%d%d", &upLen, &downLen, &height);
    printf("Trapezoid area:%.1f\n", (double)(upLen + downLen) * height / 2);
    return 0;
}