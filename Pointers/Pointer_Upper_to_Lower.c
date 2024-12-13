#include <stdio.h>
void Case(char *s);
int main()
{
    /*Darshan Kania*/
    char str[1000], *s = str;
    printf("Enter String: ");
    scanf("%s", str);
    Case(str);
    printf("Updated String: %s", str);
    return 0;
}
void Case(char *s)
{
    while (*s != 0)
    {
        if (*s >= 'A' && *s <= 'Z')
            *s += 32;
        else if (*s >= 'a' && *s <= 'z')
            *s -= 32;
        s++;
    }
}