#include <stdio.h>
int Occurence(char *s, char c);
int main()
{
    /*Darshan Kania*/
    char str[1000], *s = str, c;
    printf("Enter String: ");
    scanf("%s", str);
    printf("Enter Character you want to find: ");
    scanf(" %c", &c);
    int k = Occurence(s, c);
    if (k == -26)
        printf("Character Not  Found!!!");
    else
        printf("Character First Found at index %d", k);
    return 0;
}
int Occurence(char *s, char c)
{
    for (int i = 0; *s != '\0'; i++)
    {
        if (*s == c)
            return i;
        s++;
    }
    return -26;
}