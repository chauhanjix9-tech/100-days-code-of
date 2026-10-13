#include <stdio.h>

int main() {
    float celsius = 25;
    float fahrenheit;

    fahrenheit = (celsius * 9 / 5) + 32;

    printf("Fahrenheit = %.2f\n", fahrenheit);

    return 0;
}