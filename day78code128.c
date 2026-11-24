#include <stdio.h>
#include <ctype.h>

int main()
{
    FILE *fp;
    int ch;
    int vowels = 0;
    int consonants = 0;

    fp = fopen("text.txt", "r");

    if(fp == NULL)
    {
        printf("Error: File could not be opened!\n");
        return 1;
    }

    while((ch = fgetc(fp)) != EOF)
    {
        // Check only alphabet characters
        if(isalpha(ch))
        {
            ch = tolower(ch);

            if(ch == 'a' || ch == 'e' || ch == 'i' ||
               ch == 'o' || ch == 'u')
            {
                vowels++;
            }
            else
            {
                consonants++;
            }
        }
    }

    fclose(fp);

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    return 0;
}