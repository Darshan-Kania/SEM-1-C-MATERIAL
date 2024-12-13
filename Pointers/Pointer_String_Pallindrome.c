#include <stdio.h>
#include <string.h>
int Pallindrome(char *s);
int main()
{
    /*Darshan Kania*/
    char str[30], *s = str;
    printf("Enter String:");
    scanf("%s", str);
    if (Pallindrome(s) == 1)
        printf("String is Pallindrome");
    else
        printf("String is Not Pallindrome");
    return 0;
}
int Pallindrome(char *s)
{
    int i = 0;
    while (*(s + i) != '\0')
        i++;
    char *e = s + i-1;
    while (s <= e)
    {
        if (*s != *e)
            return -1;
        s++;
        e--;
    }
    return 1;
}