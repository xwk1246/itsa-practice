#include <iostream>
using namespace std;

int main() {
    int a, b;
    int tmp;
    int sum = 0;
    cin >> a >> b;
    if (a > b) {
        tmp = a;
        a = b;
        b = tmp;
    }
    for (int i = a; i <= b; i++) {
        sum += i;
    }
    cout << sum << endl;
    return 0;
}