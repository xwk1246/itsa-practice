#include <iostream>
using namespace std;


int sum(int n) {
    int i = 0;
    int total = 0;
    while (i <= n) {
        if (i % 3 == 0) total += i;
        i++;
    }
    return total;
}
int main() {
    int n;
    cin >> n;
    cout << sum(n) << endl;
    return 0;
}