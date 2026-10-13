#include <stdio.h>

int main()
{
    int row, col;

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

    // Diagonal traversal
    for(int d = 0; d < row + col - 1; d++)
    {
        if(d % 2 == 0)
        {
            for(int i = row - 1; i >= 0; i--)
            {
                int j = d - i;

                if(j >= 0 && j < col)
                {
                    printf("%d ", a[i][j]);
                }
            }
        }
        else
        {
            for(int i = 0; i < row; i++)
            {
                int j = d - i;

                if(j >= 0 && j < col)
                {
                    printf("%d ", a[i][j]);
                }
            }
        }
    }

    return 0;
}