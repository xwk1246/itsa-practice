#include <stdio.h>
#include <stdlib.h>

double mRound(double val) {
    return ((int)(val * 10 + 0.5)) / 10.0;
}
int main() {
    int mile;
    scanf("%d", &mile);
    printf("%.1f\n", mRound(mile * 1.6));
    return 0;
}