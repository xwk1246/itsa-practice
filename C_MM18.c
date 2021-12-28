#include <stdio.h>
#include <stdlib.h>

char* toBin(char* bin, int dec) {
    int count = 7;
    if (dec >= 0) {
        while (dec > 0) {
            bin[count] = dec % 2 + '0';
            dec /= 2;
            count--;
        }
    }
    else {
        dec = -dec;
        while (dec > 0) {
            bin[count] = dec % 2 + '0';
            dec /= 2;
            count--;
        }
        for (int i = 0; i < 8; i++) {
            if (bin[i] == '0') {
                bin[i] = '1';
            }
            else {
                bin[i] = '0';
            }
        }
        count = 7;
        while (bin[count] != '0') {
            bin[count] = '0';
            count--;
        }
        if (count >= 0) {
            bin[count] = '1';
        }
    }
    return bin;
}

int main() {
    int x;
    char bin[] = "00000000";
    scanf("%d", &x);
    printf("%s\n", toBin(bin, x));
    return 0;
}