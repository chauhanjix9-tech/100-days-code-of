#include <stdio.h>

int main() {
    int length = 10;
    int breadth = 5;

    int area = length * breadth;
    int perimeter = 2 * (length + breadth);

    printf("Area = %d\n", area);
    printf("Perimeter = %d\n", perimeter);

    return 0;
}