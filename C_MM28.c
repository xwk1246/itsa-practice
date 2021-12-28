#include <stdio.h>
#include <stdlib.h>


int main() {
    int n;
    scanf("%d", &n);

    printf("%d", 35);
    for (int i = 2; ;i++) {
        if (35 * i > n)break;
        printf(" %d", 35 * i);
    }
    printf("\n");
    return 0;
}