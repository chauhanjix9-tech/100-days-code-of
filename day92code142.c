#include <stdio.h>

struct Student
{
    char name[50];
    int roll;
    int marks;
};

int main()
{
    struct Student student[5];
    int i;

    // Input details of 5 students
    for(i = 0; i < 5; i++)
    {
        printf("\nEnter details of Student %d:\n", i + 1);

        printf("Enter name: ");
        scanf("%49s", student[i].name);

        printf("Enter roll number: ");
        scanf("%d", &student[i].roll);

        printf("Enter marks: ");
        scanf("%d", &student[i].marks);
    }

    // Display all student details
    printf("\nStudent Details:\n");

    printf("-----------------------------------\n");
    printf("Name\t\tRoll\tMarks\n");
    printf("-----------------------------------\n");

    for(i = 0; i < 5; i++)
    {
        printf("%s\t\t%d\t%d\n",
               student[i].name,
               student[i].roll,
               student[i].marks);
    }

    printf("-----------------------------------\n");

    return 0;
}