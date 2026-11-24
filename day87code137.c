#include <stdio.h>

enum Role
{
    ADMIN,
    USER,
    GUEST
};

int main()
{
    enum Role role;

    // Set user role
    role = GUEST;

    switch(role)
    {
        case ADMIN:
            printf("Welcome Admin!\n");
            break;

        case USER:
            printf("Welcome User!\n");
            break;

        case GUEST:
            printf("Welcome Guest!\n");
            break;

        default:
            printf("Invalid Role!\n");
    }

    return 0;
}