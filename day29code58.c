#include <stdio.h>

int main()
{
    int a[5] = {12, 45, 7, 89, 23};
    int i;
    int maximum = a[0];
    int minimum = a[0];

    for (i = 1; i < 5; i = i + 1)
    {
        if (a[i] > maximum)
        {
            maximum = a[i];
        }

        if (a[i] < minimum)
        {
            minimum = a[i];
        }
    }

    printf("Maximum = %d\n", maximum);
    printf("Minimum = %d", minimum);

    return 0;
}