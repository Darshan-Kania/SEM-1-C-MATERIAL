#include <stdio.h>
void *max(int *a, int *b);
int main()
{
    /*Darshan Kania*/
    int a = 10, b = 23, *c;
    c = max(&a, &b);
    printf("%d", *c);
    return 0;
}
void *max(int *a, int *b)
{
    if (*a > *b)
        return a;
    else
        return b;
}