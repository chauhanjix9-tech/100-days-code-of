#include <stdio.h>

int main()
{
    int row1, col1, row2, col2;

    scanf("%d %d", &row1, &col1);

    int a[row1][col1];

    // Input first matrix
    for(int i = 0; i < row1; i++)
    {
        for(int j = 0; j < col1; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    scanf("%d %d", &row2, &col2);

    int b[row2][col2];

    // Input second matrix
    for(int i = 0; i < row2; i++)
    {
        for(int j = 0; j < col2; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    // Check and add matrices
    if(row1 == row2 && col1 == col2)
    {
        for(int i = 0; i < row1; i++)
        {
            for(int j = 0; j < col1; j++)
            {
                printf("%d ", a[i][j] + b[i][j]);
            }

            printf("\n");
        }
    }
    else
    {
        printf("Matrix addition not possible");
    }

    return 0;
}