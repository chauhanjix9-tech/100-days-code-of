#include <stdio.h>

int main()
{
    int a[5] = {10, 50, 30, 40, 20};
    int i;
    int largest = a[0];
    int second = a[0];

    for (i = 0; i < 5; i = i + 1)
    {
        if (a[i] > largest)
        {
            second = largest;
            largest = a[i];
        }
        else if (a[i] > second && a[i] != largest)
        {
            second = a[i];
        }
    }

    printf("Second largest = %d", second);

    return 0;
}