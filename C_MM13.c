#include <stdio.h>
#include <stdlib.h>

int main() {
    int startHour, startMin;
    int endHour, endMin;
    int time;
    int fee = 0;
    scanf("%d%d", &startHour, &startMin);
    scanf("%d%d", &endHour, &endMin);
    time = endHour * 60 + endMin - (startHour * 60 + startMin);
    if (time <= 120) {
        fee += time / 30 * 30;
    }
    else if (time > 120 && time <= 240) {
        fee += 120;
        time -= 120;
        fee += time / 30 * 40;
    }
    else {
        fee += 120;
        time -= 120;
        fee += 160;
        time -= 120;
        fee += time / 30 * 60;
    }
    printf("%d\n", fee);
    return 0;
}