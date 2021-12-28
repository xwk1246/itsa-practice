#include <stdio.h>
#include <stdlib.h>


int sum(int n) {
    int i = 0;
    int total = 0;
    while (i <= n) {
        if (i % 3 == 0) total += i;
        i++;
    }
    return total;
}
int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", sum(n));
    return 0;
}