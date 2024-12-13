#include <stdio.h>
void factorial(int *);
int main()
{
    /*Darshan Kania*/
    int *p, num;
    p = &num;
    printf("Enter Number whoose factorial is to be find: ");
    scanf("%d", &num);
    factorial(p);
    printf("Factorial of given number is %d", num);
    return 0;
}
void factorial(int *num)
{
    int fact = 1;
    for (int i = 1; i <= *num; i++)
    {
        fact *= i;
    }
    *num = fact;
}