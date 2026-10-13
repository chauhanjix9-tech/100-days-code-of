#include <stdio.h>

int main() {
    int n = 5;
    int i, factorial = 1;

    for (i = 1; i <= n; i++) {
        factorial = factorial * i;
    }

    printf("Factorial = %d\n", factorial);

    return 0;
}