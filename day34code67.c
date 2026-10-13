#include <stdio.h>

int main()
{
    int a[6] = {10, 20, 30, 40, 50};
    int i;

    for (i = 5; i >= 3; i = i - 1)
    {
        a[i] = a[i - 1];
    }

    a[2] = 25;

    for (i = 0; i < 6; i = i + 1)
    {
        printf("%d ", a[i]);
    }

    return 0;
}