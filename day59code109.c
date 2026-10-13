#include <stdio.h>

int main()
{
    int arr[] = {100, 200, 300, 400};
    int n = 4;
    int k = 2;
    int i, j, sum, maxSum = 0;

    for(i = 0; i <= n - k; i++)
    {
        sum = 0;

        for(j = i; j < i + k; j++)
        {
            sum = sum + arr[j];
        }

        if(i == 0 || sum > maxSum)
        {
            maxSum = sum;
        }
    }

    printf("Maximum Sum = %d", maxSum);

    return 0;
}