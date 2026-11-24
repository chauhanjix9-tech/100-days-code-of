#include <stdio.h>
#include <string.h>

int main()
{
    char s[100];
    int i, j, k;
    int maxLength = 0;
    int currentLength;

    printf("Enter string: ");
    scanf("%99s", s);

    int n = strlen(s);

    for(i = 0; i < n; i++)
    {
        currentLength = 0;

        for(j = i; j < n; j++)
        {
            // Check if s[j] already exists
            // in current substring
            for(k = i; k < j; k++)
            {
                if(s[k] == s[j])
                {
                    break;
                }
            }

            // Repeated character found
            if(k < j)
            {
                break;
            }

            currentLength++;

            if(currentLength > maxLength)
            {
                maxLength = currentLength;
            }
        }
    }

    printf("Length of longest substring = %d\n", maxLength);

    return 0;
}