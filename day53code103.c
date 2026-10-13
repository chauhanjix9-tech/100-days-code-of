#include <stdio.h>

int main()
{
    int n;
    int totalSum = 0;
    int leftSum = 0;
    int pivot = -1;

    scanf("%d", &n);

    int nums[n];

    // Input array and calculate total sum
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
        totalSum = totalSum + nums[i];
    }

    // Find pivot index
    for(int i = 0; i < n; i++)
    {
        int rightSum = totalSum - leftSum - nums[i];

        if(leftSum == rightSum)
        {
            pivot = i;
            break;
        }

        leftSum = leftSum + nums[i];
    }

    printf("%d", pivot);

    return 0;
}