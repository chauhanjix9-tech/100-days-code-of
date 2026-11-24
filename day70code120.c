#include <stdio.h>
#include <ctype.h>

int main()
{
    char str[200];
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // First character should be uppercase
    str[0] = toupper(str[0]);

    // Capitalize character after every space
    for(i = 1; str[i] != '\0'; i++)
    {
        if(str[i - 1] == ' ')
        {
            str[i] = toupper(str[i]);
        }
    }

    printf("Output: %s", str);

    return 0;
}