#include <stdio.h>

int main()
{
    FILE *source, *destination;
    char sourceFile[100], destinationFile[100];
    int ch;

    printf("Enter source file name: ");
    scanf("%99s", sourceFile);

    printf("Enter destination file name: ");
    scanf("%99s", destinationFile);

    // Open source file in read mode
    source = fopen(sourceFile, "r");

    if(source == NULL)
    {
        printf("Source file could not be opened!\n");
        return 1;
    }

    // Open destination file in write mode
    destination = fopen(destinationFile, "w");

    if(destination == NULL)
    {
        printf("Destination file could not be opened!\n");
        fclose(source);
        return 1;
    }

    // Copy character by character
    while((ch = fgetc(source)) != EOF)
    {
        fputc(ch, destination);
    }

    // Close both files
    fclose(source);
    fclose(destination);

    printf("File copied successfully to %s\n", destinationFile);

    return 0;
}