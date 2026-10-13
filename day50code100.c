#include <stdio.h>

int main()
{
    char str[100];
    int first = 1;

    scanf("%s", str);

    for(int i = 0; str[i] != '\0'; i++)
    {
        for(int j = i; str[j] != '\0'; j++)
        {
            if(first == 0)
            {
                printf(",");
            }

            for(int k = i; k <= j; k++)
            {
                printf("%c", str[k]);
            }

            first = 0;
        }
    }

    return 0;
}