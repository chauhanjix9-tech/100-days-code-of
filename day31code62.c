#include <stdio.h>

int main()
{
    int a[5] = {10, 20, 30, 40, 50};
    int i;
    int temp;

    for (i = 0; i < 5 / 2; i = i + 1)
    {
        temp = a[i];
        a[i] = a[4 - i];
        a[4 - i] = temp;
    }

    for (i = 0; i < 5; i = i + 1)
    {
        printf("%d ", a[i]);
    }

    return 0;
}