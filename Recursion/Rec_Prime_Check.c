#include <stdio.h>
int Prime_Rec(int n, int i);
int main()
{
    /*Darshan Kania*/
    int n;
    printf("Enter Number you want to check: ");
    scanf("%d", &n);
    int ans = Prime_Rec(n, 2);
    if (ans == 1)
        printf("%d Number is Prime\n", n);
    if (ans == -1)
        printf("%d Number is not prime\n", n);

    return 0;
}
int Prime_Rec(int n, int i)
{
    if (n != i && n % i == 0)
        return -1;
    if (i >= n / 2)
        return 1;
    return (Prime_Rec(n, i + 1));
}