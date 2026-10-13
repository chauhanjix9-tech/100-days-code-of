#include <stdio.h>

int main()
{
    char str[100];
    int length = 0;
    int flag = 1;

    scanf("%s", str);

    // Find length
    while(str[length] != '\0')
    {
        length++;
    }

    // Check palindrome
    for(int i = 0; i < length / 2; i++)
    {
        if(str[i] != str[length - 1 - i])
        {
            flag = 0;
            break;
        }
    }

    if(flag == 1)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not palindrome");
    }

    return 0;
}