#include<stdio.h>
int Exp_Rec(int,int);
int main()
{
    /*Darshan Kania*/
    int a,b;
    printf("Enter a: ");
    scanf("%d",&a);
    printf("Enter b: ");
    scanf("%d",&b);
    printf("%d",Exp_Rec(a,b));
    return 0;
}
int Exp_Rec(int a,int b)
{
        if(b==0)
        return 1;
        return (a*Exp_Rec(a,b-1));
}