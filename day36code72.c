#include <stdio.h>

int main()
{
    int row, col;
    int sum = 0;

    scanf("%d %d", &row, &col);

    int matrix[row][col];

    // Input matrix
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            scanf("%d", &matrix[i][j]);
            sum = sum + matrix[i][j];
        }
    }

    printf("%d", sum);

    return 0;
}