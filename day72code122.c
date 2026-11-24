#include <stdio.h>

int main()
{
    FILE *fp;
    char line[100];

    // Open the file in read mode
    fp = fopen("info.txt", "r");

    // Check if file exists
    if(fp == NULL)
    {
        printf("File could not be opened!\n");
        return 1;
    }

    // Read file line by line until EOF
    while(fgets(line, sizeof(line), fp) != NULL)
    {
        printf("%s", line);
    }

    // Close the file
    fclose(fp);

    return 0;
}