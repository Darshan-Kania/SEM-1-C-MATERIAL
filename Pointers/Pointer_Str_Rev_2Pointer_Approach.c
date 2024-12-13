#include <stdio.h>
#include <string.h>
int main()
{
    /*Darshan Kania*/
    char str[20], *s = &str[0];
    printf("Enter String: ");
    scanf("%s", str);
    char *p = str;
    for (int i = 0; *(s + i) != '\0'; i++)
        p++;
    p = p - 1;
    for (int i = 0; i <= (strlen(str) / 2); i++)
    {
        char temp = *s;
        *s = *p;
        *p = temp;
        s++;
        p--;
    }
    printf("%s", str);
    return 0;
}