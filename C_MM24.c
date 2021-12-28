#include <stdio.h>
#include <stdlib.h>

double cal(int hours, int pay) {
    double total = 0;
    if (hours > 120) {
        total += (hours - 120) * pay * 1.66;
        total += 60 * pay;
        total += 60 * pay * 1.33;
    }
    else if (hours > 60) {
        total += (hours - 60) * pay * 1.33;
        total += 60 * pay;
    }
    else {
        total += hours * pay;
    }
    return total;
}

int main() {
    int hours;
    int pay;
    scanf("%d%d", &hours, &pay);
    printf("%.1f\n", cal(hours, pay));
    return 0;
}