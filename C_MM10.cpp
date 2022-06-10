#include <iostream>
#include <iomanip>
using namespace std;

double mRound(double val) {
    return ((int)(val * 10 + 0.5)) / 10.0;
}
int main() {
    double c;
    cin >> c;
    cout << fixed << setprecision(1) << mRound(c / 5 * 9 + 32) << endl;
    return 0;
}