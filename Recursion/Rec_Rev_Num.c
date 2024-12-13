#include <stdio.h>
int Rev_Num(int n, int rev);
int main()
{
    int num, rev = 0;
    printf("Enter Number: ");
    scanf("%d", &num);
    rev = Rev_Num(num, rev);
    printf("Reverse of %d is %d", num, rev);
    return 0;
}
int Rev_Num(int n, int rev)
{
    if (n == 0)
        return rev;
    return Rev_Num(n / 10, rev = rev * 10 + n % 10);
}