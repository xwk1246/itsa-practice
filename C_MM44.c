#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char M[100];
    char N[100];
    int cnt = 0;
    scanf("%s%s", N, M);
    for (int i = 0; i < strlen(M); i++) {
        if (strncmp(M + i, N, strlen(N)) == 0)cnt++;
    }
    printf("%d\n", cnt);
    return 0;
}