#include <stdio.h>
int Fibbo(int n);
int main()
{
    /*Darshan Kania*/
    int n;
    printf("Enter Which term you want to find: ");
    scanf("%d", &n);
    printf("%d", Fibbo(n));
    return 0;
}
int Fibbo(int n)
{
    if (n <= 1)
        return n;
    return Fibbo(n - 1) + Fibbo(n - 2);
    // One Liner
    // return (n<=1?n:(Fibbo(n-1)+Fibbo(n-2)));
}