#include <stdio.h>

int main()
{
    int row, col;
    int flag = 1;

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

    // Symmetric matrix must be square
    if(row != col)
    {
        flag = 0;
    }
    else
    {
        // Check symmetry
        for(int i = 0; i < row; i++)
        {
            for(int j = 0; j < col; j++)
            {
                if(a[i][j] != a[j][i])
                {
                    flag = 0;
                }
            }
        }
    }

    if(flag == 1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }

    return 0;
}