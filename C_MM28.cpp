#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    cout << 35;
    for (int i = 2; ;i++) {
        if (35 * i > n)break;
        cout << " " << 35 * i;
    }
    cout << endl;
    return 0;
}