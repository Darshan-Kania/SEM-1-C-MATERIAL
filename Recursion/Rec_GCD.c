#include <stdio.h>
int GCD_Rec(int, int);
int main()
{
    /*Darshan Kania*/
    int p, q;
    printf("Enter 1st Num: ");
    scanf("%d", &p);
    printf("Enter 2nd Num: ");
    scanf("%d", &q);
    int x = GCD_Rec(p, q);
    printf("Greatest Common Divisior is %d", x);
    return 0;
}
int GCD_Rec(int a, int b)
{
    if (a % b == 0)
        return b;
    return (GCD_Rec(b, a % b));
    // Oneliner for Recursion
    // return(a%b==0?b:GCD_Rec(b,a%b));
}