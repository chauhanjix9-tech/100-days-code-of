#include <stdio.h>

struct Student
{
    char name[50];
    int roll;
    int marks;
};

int main()
{
    FILE *fp;
    struct Student s;
    int n, i;

    printf("Enter number of students: ");
    scanf("%d", &n);

    // Open file in write mode
    fp = fopen("students.txt", "w");

    if(fp == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }

    // Take input and write records
    for(i = 0; i < n; i++)
    {
        printf("\nEnter details of Student %d\n", i + 1);

        printf("Enter name: ");
        scanf("%49s", s.name);

        printf("Enter roll number: ");
        scanf("%d", &s.roll);

        printf("Enter marks: ");
        scanf("%d", &s.marks);

        fprintf(fp, "%s %d %d\n",
                s.name, s.roll, s.marks);
    }

    fclose(fp);

    // Open file again in read mode
    fp = fopen("students.txt", "r");

    if(fp == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }

    printf("\nStudent Records:\n");

    // Read and display records
    while(fscanf(fp, "%49s %d %d",
                 s.name, &s.roll, &s.marks) == 3)
    {
        printf("Name: %s | Roll: %d | Marks: %d\n",
               s.name, s.roll, s.marks);
    }

    fclose(fp);

    return 0;
}