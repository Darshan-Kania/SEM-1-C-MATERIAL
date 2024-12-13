#include <stdio.h>
int Fibb_Rec(int a, int b, int n);
int main()
{
    /*Darshan Kania*/
    int n;
    printf("Enter Term till which want to print: ");
    scanf("%d", &n);
    Fibb_Rec(0, 1, n);
    return 0;
}
int Fibb_Rec(int a, int b, int n)
{
    if (n == 0)
        return 0;
    printf("%d\t", a);
    return (Fibb_Rec(a+b,a,n-1));
}
