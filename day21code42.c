#include <stdio.h>

int main()
{
    int number = 28;
    int sum = 0;
    int i;

    for (i = 1; i < 28; i = i + 1)
    {
        if (28 % i == 0)
        {
            sum = sum + i;
        }
    }

    if (sum == 28)
    {
        printf("28 is a perfect number");
    }
    else
    {
        printf("28 is not a perfect number");
    }

    return 0;
}