#include <stdio.h>
int StrNICmp(char a[], char b[], int n);
int main()
{
    /*Darshan Kania*/
    char a[100], b[100];
    printf("Enter String A: ");
    scanf("%[^\n]", a);
    printf("Enter String B: ");
    scanf(" %[^\n]", b);
    int n;
    printf("Enter first n character want to check: ");
    scanf("%d", &n);
    StrNICmp(a, b, n);
    return 0;
}
int StrNICmp(char a[], char b[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == b[i])
            ;
        else if (a[i] - 32 == b[i])
            ;
        else if (a[i] == b[i] - 32)
            ;
        else
        {
            printf("When we compare first %d characters from both string ignoring case both strings are not same bcz a[%d] is %c and b[%d] is %c.", n, i, a[i], i, b[i]);
            count++;
            break;
        }
    }
    if (count == 0)
        printf("Strings First %d charcters are same", n);
}