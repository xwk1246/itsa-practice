#include <iostream>
using namespace std;

int main() {
    int x;
    int first = 1;
    cin >> x;
    if (x == 3 || x == 4 || x == 5) {
        cout << "Spring" << endl;
    }
    else if (x == 6 || x == 7 || x == 8) {
        cout << "Summer" << endl;
    }
    else if (x == 9 || x == 10 || x == 11) {
        cout << "Autumn" << endl;
    }
    else if (x == 12 || x == 1 || x == 2) {
        cout << "Winter" << endl;
    }
    return 0;
}