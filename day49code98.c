#include <stdio.h>
#include <string.h>

int main()
{
    char name[100];
    int lastSpace = -1;

    fgets(name, sizeof(name), stdin);

    // Remove newline
    name[strcspn(name, "\n")] = '\0';

    // Find last space
    for(int i = 0; name[i] != '\0'; i++)
    {
        if(name[i] == ' ')
        {
            lastSpace = i;
        }
    }

    // Print initials before surname
    printf("%c.", name[0]);

    for(int i = 1; i < lastSpace; i++)
    {
        if(name[i - 1] == ' ')
        {
            printf("%c.", name[i]);
        }
    }

    // Print surname
    printf(" %s", &name[lastSpace + 1]);

    return 0;
}