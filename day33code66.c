#include <stdio.h>

int main()
{
    int a[6] = {10, 20, 30, 40, 50};
    int i;
    int position = 5;

    for (i = 0; i < 5; i = i + 1)
    {
        if (25 < a[i])
        {
            position = i;
            break;
        }
    }

    for (i = 5; i > position; i = i - 1)
    {
        a[i] = a[i - 1];
    }

    a[position] = 25;

    for (i = 0; i < 6; i = i + 1)
    {
        printf("%d ", a[i]);
    }

    return 0;
}