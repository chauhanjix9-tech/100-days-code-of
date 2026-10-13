#include <stdio.h>

int main() {
    int a = 20;
    int b = 10;
    char op = '+';

    switch(op) {
        case '+':
            printf("Result = %d\n", a + b);
            break;

        case '-':
            printf("Result = %d\n", a - b);
            break;

        case '*':
            printf("Result = %d\n", a * b);
            break;

        case '/':
            printf("Result = %d\n", a / b);
            break;

        case '%':
            printf("Result = %d\n", a % b);
            break;

        default:
            printf("Invalid Operator\n");
    }

    return 0;
}