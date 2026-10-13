#include <stdio.h>

int main()
{
    int number = 1234;
    int sum = 0;
    int digit;

    while (number != 0)
    {
        digit = number % 10;
        sum = sum + digit;
        number = number / 10;
    }

    printf("Sum of digits of 1234 is %d", sum);

    return 0;
}