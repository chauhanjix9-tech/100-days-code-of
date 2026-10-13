#include <stdio.h>
#include <math.h>

int main() {
    float principal = 10000;
    float rate = 5;
    float time = 2;
    float simpleInterest, compoundInterest;

    simpleInterest = (principal * rate * time) / 100;

    compoundInterest = principal * pow((1 + rate / 100), time) - principal;

    printf("Simple Interest = %.2f\n", simpleInterest);
    printf("Compound Interest = %.2f\n", compoundInterest);

    return 0;
}