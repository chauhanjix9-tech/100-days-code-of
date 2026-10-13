#include <stdio.h>

int main()
{
    int a[5] = {10, 20, 30, 40, 50};
    int i;
    int position = 2;

    for (i = position; i < 4; i = i + 1)
    {
        a[i] = a[i + 1];
    }

    for (i = 0; i < 4; i = i + 1)
    {
        printf("%d ", a[i]);
    }

    return 0;
}