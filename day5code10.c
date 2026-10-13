#include <stdio.h>

int main() {
    int seconds = 3665;
    int hours, minutes, secs;

    hours = seconds / 3600;
    minutes = (seconds % 3600) / 60;
    secs = seconds % 60;

    printf("%d:%d:%d\n", hours, minutes, secs);

    return 0;
}