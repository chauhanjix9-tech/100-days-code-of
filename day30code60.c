#include <stdio.h>

int main()
{
    int a[7] = {5, -2, 0, 8, -4, 0, 3};
    int i;
    int positive = 0;
    int negative = 0;
    int zero = 0;

    for (i = 0; i < 7; i = i + 1)
    {
        if (a[i] > 0)
        {
            positive = positive + 1;
        }
        else if (a[i] < 0)
        {
            negative = negative + 1;
        }
        else
        {
            zero = zero + 1;
        }
    }

    printf("Positive = %d\n", positive);
    printf("Negative = %d\n", negative);
    printf("Zero = %d", zero);

    return 0;
}