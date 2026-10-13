#include <stdio.h>

int main()
{
    int n, target;
    int first = -1;
    int last = -1;

    scanf("%d", &n);

    int nums[n];

    // Input array
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }

    // Input target
    scanf("%d", &target);

    // Find first and last occurrence
    for(int i = 0; i < n; i++)
    {
        if(nums[i] == target)
        {
            if(first == -1)
            {
                first = i;
            }

            last = i;
        }
    }

    printf("%d,%d", first, last);

    return 0;
}