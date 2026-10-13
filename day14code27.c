#include <stdio.h>

int main() {
    int n = 5;
    int i, sum = 0;

    for (i = 1; i <= n; i++) {
        sum = sum + (2 * i - 1);
    }

    printf("Sum = %d\n", sum);

    return 0;
}