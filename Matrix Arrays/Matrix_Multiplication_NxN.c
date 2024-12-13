#include <stdio.h>

int main()
{
    // c[0][0]=a[0][0]*b[0][0] + a[0][1]*b[1][0]
    // c[0][1]=a[0][0]* b[0][1] +a[0][1]*b[1][1]
    // c[1][0]=a[1][0]*b[0][0] +a[1][1]*b[1][0]
    // c[1][1]=a[1][0]*b[0][1] + a[1][1]*b[1][1]
    // Reference Purpose
    
    /*Darshan Kania*/
    int a[100][100], b[100][100], c[100][100];
    int x, y;
    printf("Enter Dimension N:");
    scanf("%d", &x);
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < x; j++)
        {
            printf("Enter a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("\n");
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < x; j++)
        {
            printf("Enter b[%d][%d]: ", i, j);
            scanf("%d", &b[i][j]);
        }
    }
    printf("\n");
    for (int i = 0; i < x; i++)
    {

        for (int j = 0; j < x; j++)
        {
            for (int k = 0; k < x; k++)
                c[i][j] += a[i][k] * b[k][j];
        }
    }
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < x; j++)
            printf("%d\t", c[i][j]);
        printf("\n");
    }

    return 0;
}