#include <stdio.h>
#include <stdlib.h>

int isPrime(int x) {
    for (int i = 2; i < x; i++) {
        if (x % i == 0)return 0;
    }
    return 1;
}

int main() {
    int n;
    scanf("%d", &n);
    n--;
    while (n > 0) {
        if (isPrime(n)) {
            printf("%d\n", n);
            break;
        }
        n--;
    }
    return 0;
}