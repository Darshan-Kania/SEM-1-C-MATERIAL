#include <stdio.h>
int Prime_Rec(int n, int i);
int main()
{
    /*Darshan Kania*/
    int n;
    printf("Enter Numbers till which you want to check: ");
    scanf("%d", &n);
    for (int i = 1; i < n; i++)
    {
        int ans = Prime_Rec(i, 2);
        if (ans == 1)
            printf("%d Number is Prime\n", i);
        // if (ans == -1)
        //     printf("%d Number is not prime\n", i);
    }
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