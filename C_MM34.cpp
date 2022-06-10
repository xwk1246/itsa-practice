#include <iostream>
using namespace std;

int main() {
    int x;
    int first = 1;
    cin >> x;
    for (int i = 1; i <= x; i++) {
        if (x % i == 0 && first == 1) {
            cout << i;
            first = 0;
        }
        else if (x % i == 0)cout << " " << i;
    }
    cout << endl;
    return 0;
}