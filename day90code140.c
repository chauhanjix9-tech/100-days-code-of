#include <stdio.h>

enum Gender
{
    MALE,
    FEMALE
};

struct Person
{
    char name[50];
    enum Gender gender;
};

int main()
{
    struct Person p;

    // Assign values
    p.gender = MALE;

    // Print gender
    if(p.gender == MALE)
    {
        printf("Male\n");
    }
    else if(p.gender == FEMALE)
    {
        printf("Female\n");
    }

    return 0;
}