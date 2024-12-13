#include <stdio.h>
int Prime_Rec(int n, int i);
int main()
{
    /*Darshan Kania*/
    int n;
    printf("Enter Numbers till which you want to check: ");
    scanf("%d", &n);
    int ans = Prime_Rec(n, 2);
    if (ans == -1)
        printf("%d is Prime", n);
    else
        printf("1st Factor due to which %d is not prime is %d", n, ans);

    return 0;
}
int Prime_Rec(int n, int i)
{
    if (n != i && n % i == 0)
        return i;
    if (i >= n / 2)
        return -1;
    return (Prime_Rec(n, i + 1));
}