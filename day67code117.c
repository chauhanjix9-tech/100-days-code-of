#include <stdio.h>

int main()
{
    int m, n;
    int i = 0, j = 0, k = 0;

    printf("Enter size of first array: ");
    scanf("%d", &m);

    int nums1[m];

    printf("Enter elements of first sorted array: ");
    for(i = 0; i < m; i++)
    {
        scanf("%d", &nums1[i]);
    }

    printf("Enter size of second array: ");
    scanf("%d", &n);

    int nums2[n];
    int merged[m + n];

    printf("Enter elements of second sorted array: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &nums2[i]);
    }

    // Reset i for first array
    i = 0;

    // Merge both sorted arrays
    while(i < m && j < n)
    {
        if(nums1[i] < nums2[j])
        {
            merged[k] = nums1[i];
            i++;
        }
        else
        {
            merged[k] = nums2[j];
            j++;
        }

        k++;
    }

    // Copy remaining elements of first array
    while(i < m)
    {
        merged[k] = nums1[i];
        i++;
        k++;
    }

    // Copy remaining elements of second array
    while(j < n)
    {
        merged[k] = nums2[j];
        j++;
        k++;
    }

    printf("Merged array: ");

    for(i = 0; i < m + n; i++)
    {
        printf("%d ", merged[i]);
    }

    return 0;
}