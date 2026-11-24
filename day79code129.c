#include <stdio.h>

int main()
{
    FILE *fp;
    int num;
    int sum = 0;
    int count = 0;
    float average;

    // Open file in read mode
    fp = fopen("numbers.txt", "r");

    if(fp == NULL)
    {
        printf("Error: File could not be opened!\n");
        return 1;
    }

    // Read integers from file
    while(fscanf(fp, "%d", &num) == 1)
    {
        sum = sum + num;
        count++;
    }

    // Calculate average
    if(count > 0)
    {
        average = (float)sum / count;

        printf("Sum = %d\n", sum);
        printf("Average = %.2f\n", average);
    }
    else
    {
        printf("File contains no numbers.\n");
    }

    fclose(fp);

    return 0;
}