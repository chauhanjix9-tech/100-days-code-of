#include <stdio.h>

int main()
{
    int number = 145;
    int temp = 145;
    int digit;
    int sum = 0;
    int factorial;
    int i;

    while (temp != 0)
    {
        digit = temp % 10;
        factorial = 1;

        for (i = 1; i <= digit; i = i + 1)
        {
            factorial = factorial * i;
        }

        sum = sum + factorial;
        temp = temp / 10;
    }

    if (sum == 145)
    {
        printf("145 is a strong number");
    }
    else
    {
        printf("145 is not a strong number");
    }

    return 0;
}