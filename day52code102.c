#include <stdio.h>

int main()
{
    int n, x;
    int index = -1;

    scanf("%d", &n);

    int arr[n];

    // Input array
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Input x
    scanf("%d", &x);

    // Find ceil
    for(int i = 0; i < n; i++)
    {
        if(arr[i] >= x)
        {
            index = i;
            break;
        }
    }

    printf("%d", index);

    return 0;
}