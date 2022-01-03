#include <stdio.h>
#include <stdlib.h>

int main() {
    int x;
    int first = 1;
    scanf("%d", &x);
    for (int i = 1; i <= x; i++) {
        if (x % i == 0 && first == 1) {
            printf("%d", i);
            first = 0;
        }
        else if (x % i == 0)printf(" %d", i);
    }
    printf("\n");
    return 0;
}