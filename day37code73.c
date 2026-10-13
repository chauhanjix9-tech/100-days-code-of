#include <stdio.h>

int main()
{
    int row, col;

    scanf("%d %d", &row, &col);

    int matrix[row][col];
    int sum[row];

    // Input matrix
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Find sum of each row
    for(int i = 0; i < row; i++)
    {
        sum[i] = 0;

        for(int j = 0; j < col; j++)
        {
            sum[i] = sum[i] + matrix[i][j];
        }
    }

    // Print row sums
    for(int i = 0; i < row; i++)
    {
        printf("%d ", sum[i]);
    }

    return 0;
}