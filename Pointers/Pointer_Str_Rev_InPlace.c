#include <stdio.h>
#include <string.h>
int main()
{
    /*Darshan Kania*/
    char str[20], *s = str;
    printf("Enter String: ");
    scanf("%s", str);
    // int i;
    // for (i = 0; str[i] != '\0'; i++)
    //     ;
    // i = i - 1;
    // printf("%d\n\n", i);
    int i = strlen(str) - 1;
    for (int j = 0; j <= i / 2; j++)
    {
        char temp = *(s + j);
        *(s + j) = *(s + i - j);
        *(s + i - j) = temp;
    }
    printf("%s\n", str);
    return 0;
}