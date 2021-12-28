#include <stdio.h>
#include <stdlib.h>

double mRound(double val) {
    return ((int)(val * 10 + 0.5)) / 10.0;
}
double cal(int min) {
    if (min <= 800) {
        return min * 0.9;
    }
    else if (min < 1500) {
        return min * 0.9 * 0.9;
    }
    else {
        return min * 0.9 * 0.79;
    }
}
int main() {
    int min;
    scanf("%d", &min);
    printf("%.1f\n", mRound(cal(min)));
    return 0;
}