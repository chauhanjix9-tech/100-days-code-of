#include <stdio.h>

int main() {
    int num = 10;
    int binary[32];
    int i = 0, j;

    while (num > 0) {
        binary[i] = num % 2;
        num = num / 2;
        i++;
    }

    printf("Binary = ");

    for (j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }

    return 0;
}