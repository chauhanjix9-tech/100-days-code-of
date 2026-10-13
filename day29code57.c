#include <stdio.h>

int main()
{
    int a[5] = {10, 20, 30, 40, 50};
    int i;
    int sum = 0;

    for (i = 0; i < 5; i = i + 1)
    {
        sum = sum + a[i];
    }

    printf("Sum = %d", sum);

    return 0;
}