#include <iostream>
using namespace std;

int mCeil(double val) {
    if (val == (int)val)
        return (int)val;
    else
        return (int)val + 1;
}
int main() {
    int dist;
    cin >> dist;
    cout << mCeil(dist / 0.238) << endl;
    return 0;
}