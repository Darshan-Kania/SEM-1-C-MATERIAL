#include <stdio.h>
int Ans(int (*m)(), int *a, int *b);
int max(int *x, int *y);
int main()
{
    /*Darshan Kania*/
    int a = 26, b = 28;
    Ans(max, &a, &b);
    return 0;
}
int Ans(int (*m)(), int *a, int *b)
{
    printf("%d", (*m)(a, b));
}
int max(int *x, int *y)
{
    if (*x > *y)
        return *x;
    else
        return *y;
}