#include <stdio.h>
#include <string.h>
void Char_Delete(char *c, char);
int main()
{
    /*Darshan Kania*/
    char str[10000], s, *c = str;
    printf("Enter String: ");
    scanf("%[^\n]", str);
    printf("Enter Which character occurence you want to delete: ");
    scanf(" %c", &s);
    Char_Delete(c, s);
    printf("%s", str);
    return 0;
}
void Char_Delete(char *c, char p)
{
    for (int i = 0; c[i] != '\0'; i++)
    {
        if (c[i] == p)
        {
            int index = i;
            while (index <= strlen(c))
            {
                c[index] = c[index + 1];
                index++;
            }
        }
    }
}