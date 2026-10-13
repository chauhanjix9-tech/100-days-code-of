#include <stdio.h>

int main()
{
    int i, j, count;

    for (i = 2; i <= 20; i = i + 1)
    {
        count = 0;

        for (j = 1; j <= i; j = j + 1)
        {
            if (i % j == 0)
            {
                count = count + 1;
            }
        }

        if (count == 2)
        {
            printf("%d ", i);
        }
    }

    return 0;
}