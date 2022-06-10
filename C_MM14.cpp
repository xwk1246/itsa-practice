#include <iostream>
using namespace std;

int main() {
    long long time;
    int day;
    int hour;
    int min;
    int sec;
    cin >> time;
    day = time / (24 * 60 * 60);
    time %= (24 * 60 * 60);
    hour = time / (60 * 60);
    time %= (60 * 60);
    min = time / 60;
    time %= 60;
    sec = time;
    cout << day << " days" << endl;
    cout << hour << " hours" << endl;
    cout << min << " minutes" << endl;
    cout << sec << " seconds" << endl;
    return 0;
}