#include <iostream>
using namespace std;

long long fac(int n) {
    if (n == 1 || n == 0)return 1;
    return n * fac(n - 1);
}
int main() {
    int n;
    cin >> n;
    cout << fac(n) << endl;
    return 0;
}