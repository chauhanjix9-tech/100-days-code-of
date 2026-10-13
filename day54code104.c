#include <stdio.h>

int main()
{
    int n;
    int pivot = -1;

    scanf("%d", &n);

    for(int x = 1; x <= n; x++)
    {
        int leftSum = 0;
        int rightSum = 0;

        // Sum from 1 to x
        for(int i = 1; i <= x; i++)
        {
            leftSum = leftSum + i;
        }

        // Sum from x to n
        for(int i = x; i <= n; i++)
        {
            rightSum = rightSum + i;
        }

        if(leftSum == rightSum)
        {
            pivot = x;
            break;
        }
    }

    printf("%d", pivot);

    return 0;
}