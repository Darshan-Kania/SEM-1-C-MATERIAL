#include <stdio.h>
void Add(int *d, int *e, int *f, int, int);
int main()
{
    /*Darshan Kania*/
    int a[100][100], b[100][100], c[100][100] = {0}, ra, ca, rb, cb;
    int *d = &a[100][100], *e = &b[0][0], *f = &c[0][0];
    printf("Rows of Matrix A: ");
    scanf("%d", &ra);
    printf("Colums of Matrix A: ");
    scanf("%d", &ca);
    printf("Rows of Matrix B: ");
    scanf("%d", &rb);
    printf("Colums of Matrix B: ");
    scanf("%d", &cb);
    if (ra != rb || ca != cb)
    {
        printf("Cant Add Matrix");
        return -1;
    }
    for (int i = 0; i < ra; i++)
    {
        for (int j = 0; j < ca; j++)
        {
            printf("Enter A[%d][%d]:", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < rb; i++)
    {
        for (int j = 0; j < cb; j++)
        {
            printf("Enter B[%d][%d]:", i, j);
            scanf("%d", &b[i][j]);
        }
    }
    //  Add(d, e, f, ra, ca);
    for (int i = 0; i < rb; i++)
    {
        for (int j = 0; j < cb; j++)
        {
            printf("C[%d][%d]:%d\n", i, j, (*(f + i) + j));
        }
    }

    return 0;
}
void Add(int *d, int *e, int *f, int ra, int ca)
{
    for (int i = 0; i < ra; i++)
    {
        for (int j = 0; j < ca; j++)
            *(f + i * ca + j) = *(d + i * ca + j) + *(e + i * ca + j);
    }
}