#include <stdio.h>
#include <stdlib.h>

int main() {
    int height;
    int width;
    scanf("%d%d", &height, &width);
    printf("%.1f\n", (double)height * width / 2);
    return 0;
}