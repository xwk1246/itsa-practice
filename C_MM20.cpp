#include <iostream>
using namespace std;

void toHex(int dec) {
    char hex[100];
    int count = 0;
    while (dec > 0) {
        int rem = dec % 16;
        if (rem < 10) {
            hex[count++] = rem + '0';
        }
        else {
            hex[count++] = rem - 10 + 'A';
        }
        dec = dec / 16;
    }
    count--;
    while (count >= 0) {
        cout << hex[count--];
    }
    cout << endl;
}
int main() {
    int dec;
    cin >> dec;
    toHex(dec);
    return 0;
}