#include <stdio.h>

int main()
{
    int n, k, i, j, temp;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter array elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter k: ");
    scanf("%d", &k);

    // Sort array in ascending order
    for(i = 0; i < n - 1; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // Check if k is valid
    if(k >= 1 && k <= n)
    {
        printf("Kth smallest element = %d\n", arr[k - 1]);
    }
    else
    {
        printf("Invalid value of k\n");
    }

    return 0;
}