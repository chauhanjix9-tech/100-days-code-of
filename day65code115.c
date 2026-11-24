#include <stdio.h>
#include <string.h>

int main()
{
    char s[100], t[100];
    int freq[26] = {0};
    int i;

    printf("Enter first string: ");
    scanf("%99s", s);

    printf("Enter second string: ");
    scanf("%99s", t);

    // If lengths are different, they cannot be anagrams
    if(strlen(s) != strlen(t))
    {
        printf("Not Anagram\n");
        return 0;
    }

    // Count characters of first string
    for(i = 0; s[i] != '\0'; i++)
    {
        freq[s[i] - 'a']++;
    }

    // Subtract characters of second string
    for(i = 0; t[i] != '\0'; i++)
    {
        freq[t[i] - 'a']--;
    }

    // Check frequency array
    for(i = 0; i < 26; i++)
    {
        if(freq[i] != 0)
        {
            printf("Not Anagram\n");
            return 0;
        }
    }

    printf("Anagram\n");

    return 0;
}