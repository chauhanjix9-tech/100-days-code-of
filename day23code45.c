#include <stdio.h>

int main()
{
    int n = 5;
    int i;
    float sum = 0.0;

    for (i = 1; i <= 5; i = i + 1)
    {
        sum = sum + (float)(2 * i) / (4 * i - 1);
    }

    printf("Sum of 5 terms is %.2f", sum);

    return 0;
}