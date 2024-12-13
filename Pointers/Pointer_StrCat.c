#include <stdio.h>
void StrCat(char *o, char *s);
int main()
{
    /*Darshan Kania*/
    char str1[1000], str2[1000];
    printf("Enter String 1: ");
    scanf("%s", str1);
    printf("Enter String 2: ");
    scanf("%s", str2);
    char *o, *s;
    o = str1;
    s = str2;
    StrCat(o, s);
    printf("%s", str1);
    return 0;
}
void StrCat(char *o, char *s)
{
    for (int i = 0; *o != '\0'; i++)
    {
        o++;
    }
    int i;
    for (int i = 0; *s != '\0'; i++)
    {
        *o = *s;
        o++;
        s++;
    }
    *o = '\0';
}