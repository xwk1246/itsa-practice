#include <stdio.h>
#include <stdlib.h>

double mRound(double val) {
    return ((int)(val * 10 + 0.5)) / 10.0;
}
int main() {
    double c;
    scanf("%lf", &c);
    printf("%.1f\n", mRound(c / 5 * 9 + 32));
    return 0;
}