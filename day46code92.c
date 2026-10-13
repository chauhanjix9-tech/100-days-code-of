#include <stdio.h>

int main()
{
    char str[100];
    int found = 0;

    scanf("%s", str);

    for(int i = 0; str[i] != '\0'; i++)
    {
        for(int j = i + 1; str[j] != '\0'; j++)
        {
            if(str[i] == str[j])
            {
                printf("%c", str[i]);
                found = 1;
                break;
            }
        }

        if(found == 1)
        {
            break;
        }
    }

    if(found == 0)
    {
        printf("No repeating character");
    }

    return 0;
}