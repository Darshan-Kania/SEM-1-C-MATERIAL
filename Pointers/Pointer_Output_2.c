#include <stdio.h>

int main()
{
    /*Darshan Kania*/
    char s[200] = "Virat Kohli";
    printf("%s\n", &s[3]);
    printf("%s\n", &s[0]);
    scanf("%s", &s[2]);
    printf("%s\n", s);
    scanf(" %c", &s[2]);
    printf("%s\n", s);
    return 0;
}