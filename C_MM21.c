#include <stdio.h>
#include <stdlib.h>

long long fac(int n) {
    if (n == 1 || n == 0)return 1;
    return n * fac(n - 1);
}
int main() {
    int n;
    scanf("%d", &n);
    printf("%lld\n", fac(n));
    return 0;
}