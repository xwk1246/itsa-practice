#include <iostream>
using namespace std;

int isPrime(int x) {
    for (int i = 2; i < x; i++) {
        if (x % i == 0)return 0;
    }
    return 1;
}

int main() {
    int n;
    cin >> n;
    if (isPrime(n))cout << "YES\n";
    else cout << "NO\n";
    return 0;
}