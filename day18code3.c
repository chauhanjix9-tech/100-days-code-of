#include <stdio.h>

int main()
{
    int a = 12;
    int b = 18;
    int i;
    int hcf = 1;

    for (i = 1; i <= 12 && i <= 18; i = i + 1)
    {
        if (12 % i == 0 && 18 % i == 0)
        {
            hcf = i;
        }
    }

    printf("HCF of 12 and 18 is %d", hcf);

    return 0;
}