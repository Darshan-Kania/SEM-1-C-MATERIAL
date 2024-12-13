// This type of comparision Is used to compare ignoring difference of upper case & lower case
#include <stdio.h>
void StrICmp(char a[], char b[]);
int main()
{
    /*Darshan Kania*/
    char a[100], b[100];
    printf("Enter String A: ");
    scanf("%[^\n]", a);
    printf("Enter String B: ");
    scanf(" %[^\n]", b);
    StrICmp(a, b);
    return 0;
}
void StrICmp(char a[], char b[])
{
    int count = 0;
    for (int i = 0; a[i] != '\0' || b[i] != '\0'; i++)
    {
        if (a[i] == b[i])
            ;
        else if (a[i] - 32 == b[i])
            ;
        else if (a[i] == b[i] - 32)
            ;
        else
        {
            printf("Strings are NOT same!!!! at %d index where a[%d] is %c and b[%d] is %c", i, i, a[i], i, b[i]);
            count++;
            break;
        }
    }
    if (count == 0)
        printf("Strings are Same");
}