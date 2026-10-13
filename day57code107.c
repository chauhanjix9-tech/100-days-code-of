#include <stdio.h>

int main()
{
    int arr[] = {1, 3, 2, 4};
    int n = 4;
    int i, j, prev;

    for(i = 0; i < n; i++)
    {
        prev = -1;

        for(j = i - 1; j >= 0; j--)
        {
            if(arr[j] > arr[i])
            {
                prev = arr[j];
                break;
            }
        }

        printf("%d", prev);

        if(i < n - 1)
        {
            printf(", ");
        }
    }

    return 0;
}