#include <stdio.h>

int main()
{
    FILE *fp;
    char filename[100];
    char text[200];

    printf("Enter file name: ");
    scanf("%99s", filename);

    // Clear input buffer
    getchar();

    // Open file in append mode
    fp = fopen(filename, "a");

    if(fp == NULL)
    {
        printf("File could not be opened!\n");
        return 1;
    }

    printf("Enter text to append: ");
    fgets(text, sizeof(text), stdin);

    // Append text to file
    fprintf(fp, "%s", text);

    // Close the file
    fclose(fp);

    printf("File updated successfully with appended text.\n");

    return 0;
}