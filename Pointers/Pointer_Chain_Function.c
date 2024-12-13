#include <stdio.h>
void P_DP(int **);
void P_TP(int ***);
int main()
{
    /*Darshan Kania*/
    int a = 26;
    int *b = &a;
    printf("*b=%d\n", *b);
    printf("a=%d\n", a);
    P_DP(&b);
    printf("*b=%d\n", *b);
    printf("a=%d\n", a);
    return 0;
}
void P_DP(int **p)
{
    printf("**p=%d\n", **p);
    **p = 20;
    printf("New **p=%d\n", **p);
    P_TP(&p);
    printf("**P after P_TP=%d\n", **p);
}
void P_TP(int ***x)
{
    printf("***x=%d\n", ***x);
    ***x = 2449;
}