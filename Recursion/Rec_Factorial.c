#include <stdio.h>
int fact(int n);
int main()
{
    /*Darshan Kania*/
    int x;
    printf("Which Number Factorial you want to find: ");
    scanf("%d", &x);
    printf("%d", fact(x));
    return 0;
}
int fact(int n)
{
    return (n == 1 ? 1 : n * fact(n - 1));
}