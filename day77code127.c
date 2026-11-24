#include <stdio.h>
#include <ctype.h>

int main()
{
    FILE *input, *output;
    int ch;

    // Open input file in read mode
    input = fopen("input.txt", "r");

    if(input == NULL)
    {
        printf("Error: input.txt could not be opened!\n");
        return 1;
    }

    // Open output file in write mode
    output = fopen("output.txt", "w");

    if(output == NULL)
    {
        printf("Error: output.txt could not be opened!\n");
        fclose(input);
        return 1;
    }

    // Read, convert and write
    while((ch = fgetc(input)) != EOF)
    {
        ch = toupper(ch);
        fputc(ch, output);
    }

    // Close both files
    fclose(input);
    fclose(output);

    printf("File converted to uppercase successfully.\n");

    return 0;
}