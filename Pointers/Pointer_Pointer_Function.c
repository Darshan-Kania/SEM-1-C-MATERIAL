#include <stdio.h>
int *max(int *, int *);
int (*p)();
int main()
{
    /*Darshan Kania*/
    p = max;
    int a = 10, b = 23;
    int *ans = p(&a, &b);
    printf("%d", *ans);
    return 0;
}
int *max(int *a, int *b)
{
    if (*a > *b)
        return a;
    else
        return b;
}