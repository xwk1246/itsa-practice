#include <iostream>
#include <iomanip>
using namespace std;

double mRound(double val) {
    return ((int)(val * 10 + 0.5)) / 10.0;
}
int main() {
    double width;
    cin >> width;
    cout << fixed << setprecision(1) << mRound(width * width) << endl;
    return 0;
}