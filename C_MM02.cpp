#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int height;
    int width;
    cin >> height >> width;
    cout << fixed << setprecision(1) << (double)height * width / 2 << endl;
    return 0;
}