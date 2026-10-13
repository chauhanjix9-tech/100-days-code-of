#include <stdio.h>

int main() {
    int num = 1234;
    int reverse = 0, remainder;

    while (num != 0) {
        remainder = num % 10;
        reverse = reverse * 10 + remainder;
        num = num / 10;
    }

    printf("Reversed Number = %d\n", reverse);

    return 0;
}