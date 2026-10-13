#include <stdio.h>

int main()
{
    int a[5] = {10, 20, 30, 40, 50};
    int low = 0;
    int high = 4;
    int middle;
    int found = 0;

    while (low <= high)
    {
        middle = (low + high) / 2;

        if (a[middle] == 30)
        {
            found = 1;
            break;
        }
        else if (a[middle] < 30)
        {
            low = middle + 1;
        }
        else
        {
            high = middle - 1;
        }
    }

    if (found == 1)
    {
        printf("30 found");
    }
    else
    {
        printf("30 not found");
    }

    return 0;
}