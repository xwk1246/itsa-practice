#include <iostream>
using namespace std;

int main() {
    int n;
    int tmp;
    int sum = 0;
    cin >> n;
    tmp = n;
    while (tmp != 0) {
        sum += (tmp % 10) * (tmp % 10) * (tmp % 10);
        tmp /= 10;
    }
    if (sum == n)cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}