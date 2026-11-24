#include <stdio.h>

int main()
{
    FILE *fp;
    char ch;
    int characters = 0;
    int words = 0;
    int lines = 0;
    int inWord = 0;

    fp = fopen("sample.txt", "r");

    if(fp == NULL)
    {
        printf("File could not be opened!\n");
        return 1;
    }

    while((ch = fgetc(fp)) != EOF)
    {
        characters++;

        // Count lines
        if(ch == '\n')
        {
            lines++;
        }

        // Count words
        if(ch == ' ' || ch == '\n' || ch == '\t')
        {
            inWord = 0;
        }
        else if(inWord == 0)
        {
            words++;
            inWord = 1;
        }
    }

    // If file is not empty and last line has no '\n'
    if(characters > 0)
    {
        lines++;
    }

    fclose(fp);

    printf("Characters: %d\n", characters);
    printf("Words: %d\n", words);
    printf("Lines: %d\n", lines);

    return 0;
}