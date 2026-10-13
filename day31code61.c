#include <stdio.h>

int main()
{
    int a[5] = {10, 20, 30, 40, 50};
    int i;
    int found = 0;

    for (i = 0; i < 5; i = i + 1)
    {
        if (a[i] == 30)
        {
            found = 1;
            break;
        }
    }

    if (found == 1)
    {
        printf("30 found at position %d", i + 1);
    }
    else
    {
        printf("30 not found");
    }

    return 0;
}