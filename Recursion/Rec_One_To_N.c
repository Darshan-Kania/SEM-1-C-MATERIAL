#include <stdio.h>
int One_to_N(int);
int main()
{
    /*Darshan Kania*/
    int n;
    printf("Enter N:");
    scanf("%d", &n);
    One_to_N(n);
    return 0;
}
int One_to_N(int n)
{
    if (n == 0)
        return 0;
    int ans = One_to_N(n - 1);
    printf("%d\n", n);
    return (ans);
}