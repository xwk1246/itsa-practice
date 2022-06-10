#include <iostream>
using namespace std;


long long iExp(int i) {
    int long long result = 2;
    if (i == 0) {
        return 1;
    }
    for (int j = 0; j < i - 1; j++) {
        result *= 2;
    }
    return result;
}

int main() {
    int i;
    cin >> i;
    if (i > 31)
        cout << "Value of more than 31\n";

    else
        cout << iExp(i) << endl;

    return 0;
}