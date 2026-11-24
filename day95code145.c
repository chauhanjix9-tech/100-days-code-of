#include <stdio.h>

struct Student
{
    char name[50];
    int roll;
    int marks;
};

// Function returns top student's structure
struct Student findTopper(struct Student s[], int n)
{
    int i;
    struct Student topper = s[0];

    for(i = 1; i < n; i++)
    {
        if(s[i].marks > topper.marks)
        {
            topper = s[i];
        }
    }

    return topper;
}

int main()
{
    int n, i;

    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student s[n];
    struct Student top;

    // Input student details
    for(i = 0; i < n; i++)
    {
        printf("\nEnter details of Student %d:\n", i + 1);

        printf("Enter name: ");
        scanf("%49s", s[i].name);

        printf("Enter roll number: ");
        scanf("%d", &s[i].roll);

        printf("Enter marks: ");
        scanf("%d", &s[i].marks);
    }

    // Function returns top student's details
    top = findTopper(s, n);

    printf("\nTop Student: %s | Roll: %d | Marks: %d\n",
           top.name, top.roll, top.marks);

    return 0;
}