#include <stdio.h>

int main()
{
    long long number = 1223334444;
    int count[10] = {0};
    int digit;
    int i;
    int maximum = 0;
    int answer = 0;

    while (number != 0)
    {
        digit = number % 10;
        count[digit] = count[digit] + 1;
        number = number / 10;
    }

    for (i = 0; i < 10; i = i + 1)
    {
        if (count[i] > maximum)
        {
            maximum = count[i];
            answer = i;
        }
    }

    printf("Most occurring digit = %d", answer);

    return 0;
}