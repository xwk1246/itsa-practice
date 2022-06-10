#include <iostream>
using namespace std;

int main() {
    int val;
    int ten, five, one;
    cin >> val;
    ten = val / 10;
    val %= 10;
    five = val / 5;
    val %= 5;
    one = val;
    cout << "NT10=" << ten << endl;
    cout << "NT5=" << five << endl;
    cout << "NT1=" << one << endl;
    return 0;
}