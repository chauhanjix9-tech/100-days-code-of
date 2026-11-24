#include <stdio.h>

int main()
{
    int n, i;
    int actualSum = 0;
    int expectedSum;
    int missing;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int nums[n];

    printf("Enter array elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
        actualSum = actualSum + nums[i];
    }

    // Sum of numbers from 0 to n
    expectedSum = n * (n + 1) / 2;

    // Find missing number
    missing = expectedSum - actualSum;

    printf("Missing number = %d\n", missing);

    return 0;
}