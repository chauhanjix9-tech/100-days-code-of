#include <stdio.h>

struct Student
{
    char name[50];
    int roll;
    int marks;
};

int main()
{
    int n, i, topper = 0;

    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student s[n];

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

    // Find student with highest marks
    for(i = 1; i < n; i++)
    {
        if(s[i].marks > s[topper].marks)
        {
            topper = i;
        }
    }

    // Print topper
    printf("\nTopper: %s (Marks: %d)\n",
           s[topper].name, s[topper].marks);

    return 0;
}