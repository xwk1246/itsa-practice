#include <stdio.h>
#include <stdlib.h>

int main() {
    int val;
    int ten, five, one;
    scanf("%d", &val);
    ten = val / 10;
    val %= 10;
    five = val / 5;
    val %= 5;
    one = val;
    printf("NT10=%d\n", ten);
    printf("NT5=%d\n", five);
    printf("NT1=%d\n", one);
    return 0;
}