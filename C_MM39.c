#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    if (a + b <= c || a + c <= b || b + c <= a)printf("Not Triangle\n");
    else if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a)printf("Right Triangle\n");
    else if (a * a + b * b < c * c || a * a + c * c < b * b || b * b + c * c < a * a)printf("Obtuse Triangle\n");
    else if (a * a + b * b > c * c || a * a + c * c > b * b || b * b + c * c > a * a)printf("Acute Triangle\n");
    return 0;
}