#include<stdio.h>
int N_To_One(int);
int main()
{
    /*Darshan Kania*/
    int n;
    printf("Enter N: ");
    scanf("%d",&n);
    N_To_One(n);
    return 0;
}
int N_To_One(int n)
{
    if(n==0)
    return 0;
    printf("%d\n",n);
    return N_To_One(n-1);
}