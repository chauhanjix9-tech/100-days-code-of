#include <stdio.h>

int main()
{
    int a = 12;
    int b = 18;
    int lcm;

    lcm = 18;

    while (1)
    {
        if (lcm % 12 == 0 && lcm % 18 == 0)
        {
            break;
        }

        lcm = lcm + 1;
    }

    printf("LCM of 12 and 18 is %d", lcm);

    return 0;
}