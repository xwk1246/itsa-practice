#include <stdio.h>
#include <stdlib.h>

double mRound(double val) {
    return ((int)(val * 10 + 0.5)) / 10.0;
}
int main() {
    double width;
    scanf("%lf", &width);
    printf("%.1f\n", mRound(width * width));
    return 0;
}