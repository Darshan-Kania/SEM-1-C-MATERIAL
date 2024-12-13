#include <stdio.h>
int StrLen(char *s);
int StrCmp(char *o, char *s);
int main()
{
    /*Darshan Kania*/
    char str1[20], str2[20];
    char *o = str1, *s = str2;
    printf("Enter String 1: ");
    scanf("%s", str1);
    printf("Enter String 2: ");
    scanf("%s", str2);
    if (StrLen(str1) == StrLen(str2))
    {
        int k = StrCmp(o, s);
        if (k == 1)
            printf("Both Strings Are Equal!!!!");
        else
            printf("Both Strings Are !!NOT!! Equal!!!!");
    }
    else
        printf("Both Strings Are !!NOT!! Equal!!!!");
    return 0;
}
int StrCmp(char *o, char *s)
{
    while (*o != '\0' || *s != '\0')
    {
        if (*s != *o)
            return -1;
        s++;
        o++;
    }
    return 1;
}
int StrLen(char *s)
{
    int i;
    for (i = 0; *s != '\0'; i++)
        s++;
    return i;
}