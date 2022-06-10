#include <iostream>
#include <iomanip>
using namespace std;

int main(void) {
    int upLen;
    int downLen;
    int height;
    cin >> upLen >> downLen >> height;
    cout << fixed << setprecision(1) << "Trapezoid area:" << ((double)upLen + downLen) * height / 2 << endl;
    return 0;
}