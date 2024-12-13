#include <stdio.h>
int factorial(int n);
int main()
{
    /*Darshan Kania*/
    int num;
    printf("Enter number whoose factorial want to Print:");
    scanf("%d", &num);
    factorial(num);
    return 0;
}
int factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
        fact *= i;
    printf("%d", fact);
}