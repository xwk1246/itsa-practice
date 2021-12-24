#include <stdio.h>
#include <stdlib.h>

int mCeil(double val) {
    if (val == (int)val)
        return (int)val;
    else
        return (int)val + 1;
}
int main() {
    int dist;
    scanf("%d", &dist);
    printf("%d\n", mCeil(dist / 0.238));
    return 0;
}