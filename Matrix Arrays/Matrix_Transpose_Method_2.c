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
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < colums; j++)
        {
            printf("a[%d][%d]:%d\t ", i, j, a[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < colums; j++)
        {
            if (i > j)
            {
                int temp = a[i][j];
                a[i][j] = a[j][i];
                a[j][i] = temp;
            }
        }
        printf("\n");
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < colums; j++)
        {
            printf("a[%d][%d]:%d\t ", i, j, a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
