#include <stdio.h>

int main() {
    int num = 153;
    int original, remainder, sum = 0;

    original = num;

    while (num != 0) {
        remainder = num % 10;
        sum = sum + (remainder * remainder * remainder);
        num = num / 10;
    }

    if (original == sum) {
        printf("Armstrong Number\n");
    } else {
        printf("Not an Armstrong Number\n");
    }

    return 0;
}