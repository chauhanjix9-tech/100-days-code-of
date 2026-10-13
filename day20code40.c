#include <stdio.h>

int main()
{
    char binary[] = "10110";
    int i = 0;

    printf("1's complement of 10110 is ");

    while (binary[i] != '\0')
    {
        if (binary[i] == '0')
        {
            printf("1");
        }
        else
        {
            printf("0");
        }

        i = i + 1;
    }

    return 0;
}