#include<stdio.h>
int mul_rec(int a,int b);
int main()
{
    /*Darshan Kania*/
    int a,b;
    /*Darshan Kania*/
    scanf("%d %d",&a,&b);
    int x=mul_rec(a,b);
    printf("%d",x);
    return 0;
}
int mul_rec(int a,int b)
{
    if(b==0)
    return 0;
    return(a+mul_rec(a,b-1));

}
