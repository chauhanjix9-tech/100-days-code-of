#include <stdio.h>

int main()
{
    int number = 12345;
    int first, last, middle, divisor = 1;
    int temp = number;

    last = number % 10;

    while (temp >= 10)
    {
        temp = temp / 10;
        divisor = divisor * 10;
    }

    first = temp;

    middle = (number % divisor) / 10;

    number = last * divisor + middle * 10 + first;

    printf("Number after swapping first and last digit of 12345 is %d", number);

    return 0;
}