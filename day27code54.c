#include <stdio.h>

int main()
{
    int i, j;

    for (i = 1; i <= 7; i = i + 2)
    {
        for (j = 1; j <= (7 - i) / 2; j = j + 1)
        {
            printf(" ");
        }

        for (j = 1; j <= i; j = j + 1)
        {
            printf("*");
        }

        printf("\n");
    }

    for (i = 5; i >= 1; i = i - 2)
    {
        for (j = 1; j <= (7 - i) / 2; j = j + 1)
        {
            printf(" ");
        }

        for (j = 1; j <= i; j = j + 1)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}