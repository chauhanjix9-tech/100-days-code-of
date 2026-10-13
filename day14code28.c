#include <stdio.h>

int main() {
    int n = 10;
    int i, product = 1;

    for (i = 2; i <= n; i = i + 2) {
        product = product * i;
    }

    printf("Product = %d\n", product);

    return 0;
}