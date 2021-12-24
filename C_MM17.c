#include <stdio.h>
#include <stdlib.h>

int gcd(int x, int y) {
    if (x % y == 0)return y;
    return gcd(y, x % y);
}
int main() {
    int x, y;
    scanf("%d%d", &x, &y);
    printf("%d\n", gcd(x, y));
    return 0;
}