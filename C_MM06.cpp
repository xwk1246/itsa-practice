#include <iostream>
#include <iomanip>
using namespace std;

double mRound(double val) {
    return ((int)(val * 10 + 0.5)) / 10.0;
}
int main() {
    int mile;
    cin >> mile;
    cout << fixed << setprecision(1) << mRound(mile * 1.6) << endl;
    return 0;
}