#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    int tmp;
    int sum = 0;
    scanf("%d", &n);
    tmp = n;
    while (tmp != 0) {
        sum += (tmp % 10) * (tmp % 10) * (tmp % 10);
        tmp /= 10;
    }
    if (sum == n)printf("Yes\n");
    else printf("No\n");

    return 0;
}