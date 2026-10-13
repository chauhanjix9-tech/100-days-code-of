#include <stdio.h>

int main()
{
    int a[6] = {1, 2, 3, 4, 5, 6};
    int i;
    int even = 0;
    int odd = 0;

    for (i = 0; i < 6; i = i + 1)
    {
        if (a[i] % 2 == 0)
        {
            even = even + 1;
        }
        else
        {
            odd = odd + 1;
        }
    }

    printf("Even = %d\n", even);
    printf("Odd = %d", odd);

    return 0;
}