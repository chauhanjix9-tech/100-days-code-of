#include <stdio.h>

struct Student
{
    char name[50];
    int roll;
    int marks;
};

// Function accepting structure as parameter
void display(struct Student s)
{
    printf("Name: %s | Roll: %d | Marks: %d\n",
           s.name, s.roll, s.marks);
}

int main()
{
    struct Student s1;

    printf("Enter name: ");
    scanf("%49s", s1.name);

    printf("Enter roll number: ");
    scanf("%d", &s1.roll);

    printf("Enter marks: ");
    scanf("%d", &s1.marks);

    // Passing structure to function
    display(s1);

    return 0;
}