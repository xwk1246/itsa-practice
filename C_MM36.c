#include <stdio.h>
#include <stdlib.h>

int main() {
    int x;
    int first = 1;
    scanf("%d", &x);
    if (x == 3 || x == 4 || x == 5) {
        printf("Spring\n");
    }
    else if (x == 6 || x == 7 || x == 8) {
        printf("Summer\n");
    }
    else if (x == 9 || x == 10 || x == 11) {
        printf("Autumn\n");
    }
    else if (x == 12 || x == 1 || x == 2) {
        printf("Winter\n");
    }
    return 0;
}