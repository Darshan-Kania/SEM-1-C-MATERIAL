#include <stdio.h>
void Str_Cpy(char *f, char *s);
int main()
{
    /*Darshan Kania*/
    char str1[30], str2[30];
    printf("Enter String 1: ");
    scanf("%s", str1);
    printf("Enter String 2: ");
    scanf(" %s", str2);
    char *f = str1, *s = str2;
    Str_Cpy(f, s);
    printf("Updated String %s", str1);
    return 0;
}
void Str_Cpy(char *f, char *s)
{
    for (int i = 0; *s != '\0'; i++)
    {
        *f = *s;
        f++, s++;
    }
    *f = '\0';
}