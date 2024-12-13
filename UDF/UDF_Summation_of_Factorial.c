#include<stdio.h>
int Factorial(int n);
int main()
{
    /*Darshan Kania*/
    int num;
    int sum=0;
    printf("Till how many numbers you want summation:");
    scanf("%d",&num);
    for (int i = 1; i <= num; i++)
    {
        sum=sum+Factorial(i);
    }
    printf("\nSum of factorial till %d is %d\n",num,sum);
    
    return 0;
}
int Factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
        fact *= i;
    return fact;
}