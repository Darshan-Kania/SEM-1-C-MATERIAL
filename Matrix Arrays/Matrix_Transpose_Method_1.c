#include <stdio.h>

int main()
{
    /*Darshan Kania*/
    int a[100][100], colums, row;
    printf("Enter row: ");
    scanf("%d", &row);
    printf("Enter colums: ");
    scanf("%d", &colums);
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < colums; j++)
        {
            printf("Enter a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    int c[row][colums];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < colums; j++)
        {
            c[i][j] = a[j][i];
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < colums; j++)
        {
            printf("Enter c[%d][%d]:%d\t ", i, j, c[i][j]);
        }
        printf("\n");
    }
    return 0;
}
