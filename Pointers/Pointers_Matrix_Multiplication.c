#include <stdio.h>

int main()
{
    /*Darshan Kania*/
    int a[100][100] = {0}, b[100][100] = {0}, c[100][100] = {0};
    int ra, rb, ca, cb;
    printf("Enter Row of A: ");
    scanf("%d", &ra);
    printf("Enter Colum of A: ");
    scanf("%d", &ca);
    printf("Enter Row of B: ");
    scanf("%d", &rb);
    printf("Enter Colum of B: ");
    scanf("%d", &cb);
    if (ca != rb)
    {
        printf("Multiplication Not Possible");
        return 0;
    }
    for (int i = 0; i < ra; i++)
    {
        for (int j = 0; j < ca; j++)
        {
            printf("Enter A[%d][%d]: ", i, j);
            scanf("%d", (*(a + i) + j));
        }
    }
    for (int i = 0; i < rb; i++)
    {
        for (int j = 0; j < cb; j++)
        {
            printf("Enter B[%d][%d]: ", i, j);
            scanf("%d", (*(b + i) + j));
        }
    }
    for (int i = 0; i < ra; i++)
    {
        for (int j = 0; j < cb; j++)
        {
            for (int k = 0; k < ca; k++)
            {
                *(*(c + i) + j) += *(*(a + i) + k) * *(*(b + k) + j);
            }
        }
    }
    for (int i = 0; i < ra; i++)
    {
        for (int j = 0; j < cb; j++)
        {
            printf("%d\t", *(*(c + i) + j));
        }
        printf("\n");
    }
    return 0;
}