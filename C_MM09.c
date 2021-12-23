#include <stdio.h>
#include <stdlib.h>


long long iExp(int i) {
    int long long result = 2;
    if (i == 0) {
        return 1;
    }
    for (int j = 0; j < i - 1; j++) {
        result *= 2;
    }
    return result;
}

int main() {
    int i;
    scanf("%d", &i);
    if (i > 31)
        printf("Value of more than 31\n");
    else
        printf("%lld\n", iExp(i));

    return 0;
}