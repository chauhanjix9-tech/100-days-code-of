#include <stdio.h>

int main()
{
    int row, col;
    int sum = 0;

    scanf("%d %d", &row, &col);

    int a[row][col];

    // Input matrix
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // Sum of main diagonal
    for(int i = 0; i < row; i++)
    {
        sum = sum + a[i][i];
    }

    printf("%d", sum);

    return 0;
}