#include<stdio.h>
int Sum_Digit(int);
int main()
{
    /*Darshan Kania*/
    int num;
    printf("Enetr Number: ");
    scanf("%d",&num);
    printf("%d",Sum_Digit(num));
    return 0;
}
int Sum_Digit(int a)
{
    if(a==0)
    return 0;
    return(a%10+Sum_Digit(a/10));
}