#include <iostream>
#include <iomanip>
using namespace std;

double mRound(double val) {
    return ((int)(val * 10 + 0.5)) / 10.0;
}
double cal(int min) {
    if (min <= 800) {
        return min * 0.9;
    }
    else if (min < 1500) {
        return min * 0.9 * 0.9;
    }
    else {
        return min * 0.9 * 0.79;
    }
}
int main() {
    int min;
    cin >> min;
    cout << fixed << setprecision(1) << mRound(cal(min)) << endl;
    return 0;
}