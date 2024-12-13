#include <stdio.h>

int main()
{
    /*Darshan Kania*/
    int a[100][100], b[100][100];
    int ca, ra, cb, rb;
    printf("Enter rows of a: ");
    scanf("%d", &ra);
    printf("Enter colums of a: ");
    scanf("%d", &ca);
    printf("Enter rows of b: ");
    scanf("%d", &rb);
    printf("Enter colums of b: ");
    scanf("%d", &cb);
    if (ca == cb && ra == rb)
    {
        for (int i = 0; i < ra; i++)
        {
            for (int j = 0; j < ca; j++)
            {
                printf("Enter a[%d][%d]: ", i, j);
                scanf("%d", &a[i][j]);
            }
        }
        for (int i = 0; i < rb; i++)
        {
            for (int j = 0; j < cb; j++)
            {
                printf("Enter b[%d][%d]: ", i, j);
                scanf("%d", &b[i][j]);
            }
        }
        printf("\n\nAddition\n\n");
        for (int i = 0; i < ra; i++)
        {
            for (int j = 0; j < ca; j++)
            {
                printf("%d\t", a[i][j] + b[i][j]);
            }
            printf("\n");
        }
        printf("\n\nSubtraction\n");
        for (int i = 0; i < ra; i++)
        {
            for (int j = 0; j < ca; j++)
            {
                printf("%d\t", a[i][j] - b[i][j]);
            }
            printf("\n");
        }
    }
    else
        printf("Cant add or subtract due to different number of row/colum");

    return 0;
}