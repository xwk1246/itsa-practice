#include <iostream>
using namespace std;

int gcd(int x, int y) {
    if (x % y == 0)return y;
    return gcd(y, x % y);
}
int main() {
    int x, y;
    cin >> x >> y;
    cout << gcd(x, y) << endl;
    return 0;
}