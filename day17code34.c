#include <stdio.h>

int main() {
    int num = 7;
    int i, count = 0;

    for (i = 1; i <= num; i++) {
        if (num % i == 0) {
            count++;
        }
    }

    if (count == 2) {
        printf("%d is a Prime Number\n", num);
    } else {
        printf("%d is Not a Prime Number\n", num);
    }

    return 0;
}