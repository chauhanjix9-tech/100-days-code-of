#include <stdio.h>

int main()
{
    int number = 12345;
    int digit;
    int product = 1;

    while (number != 0)
    {
        digit = number % 10;

        if (digit % 2 != 0)
        {
            product = product * digit;
        }

        number = number / 10;
    }

    printf("Product of odd digits of 12345 is %d", product);

    return 0;
}