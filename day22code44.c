#include <stdio.h>

int main()
{
    int n = 5;
    int i;
    float sum = 1.0;

    for (i = 2; i <= 5; i = i + 1)
    {
        sum = sum + (float)(2 * i - 1) / (2 * i);
    }

    printf("Sum of 5 terms is %.2f", sum);

    return 0;
}