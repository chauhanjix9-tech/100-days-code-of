#include <stdio.h>

int main() {
    int a = 5;
    int b = 5;
    int c = 8;

    if (a == b && b == c) {
        printf("Equilateral Triangle\n");
    }
    else if (a == b || b == c || a == c) {
        printf("Isosceles Triangle\n");
    }
    else {
        printf("Scalene Triangle\n");
    }

    return 0;
}