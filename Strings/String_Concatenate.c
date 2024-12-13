#include <stdio.h>
void StrCat(char a[], char b[]);
int main()
{
    /*Darshan Kania*/
    char a[100], b[100];
    printf("Enter String 1: ");
    scanf("%[^\n]", a);
    printf("Enter String 2: ");
    scanf(" %[^\n]", b);
    StrCat(a, b);
    printf("%s",a);
    return 0;
}
void StrCat(char a[], char b[])
{
    int len = 0, len2 = 0, i = 0, j = 0;
    for (int i = 0; a[i] != '\0'; i++)
        len++;
    for (int i = 0; b[i] != '\0'; i++)
        len2++;
    for (int i = 0, j = len; b[i] != '\0'; j++, i++)
        a[j] = b[i];
    a[len + len2] = '\0';
}