#include <iostream>
#include <string>
using namespace std;

int main() {
    string M;
    string N;
    size_t pos;
    int cnt = 0;
    cin >> N >> M;
    while ((pos = M.find(N, pos)) != string::npos) {
        cnt++;
        pos += 1;
    }
    cout << cnt << endl;
    return 0;
}