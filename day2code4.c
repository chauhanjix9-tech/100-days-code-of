#include <stdio.h>

int main() {
    float radius = 7;
    float area, circumference;

    area = 3.14 * radius * radius;
    circumference = 2 * 3.14 * radius;

    printf("Area = %.2f\n", area);
    printf("Circumference = %.2f\n", circumference);

    return 0;
}