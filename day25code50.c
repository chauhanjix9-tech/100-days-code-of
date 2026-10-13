#include <stdio.h>

int main()
{
    int i, j;

    for (i = 5; i >= 1; i = i - 1)
    {
        for (j = i; j <= 5; j = j + 1)
        {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}