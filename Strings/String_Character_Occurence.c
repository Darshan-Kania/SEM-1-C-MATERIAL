#include <stdio.h>
void StrChr(char a[], char c);
int main()
{
    /*Darshan Kania*/
    char a[100], b[100], c;
    printf("Enter string A: ");
    scanf("%[^\n]", a);
    printf("Enter character you want to find occurence:");
    scanf(" %c", &c);
    StrChr(a, c);
    return 0;
}
void StrChr(char a[], char c)
{
    int count = 0;
    for (int i = 0; a[i] != '\0'; i++)
    {
        if (a[i] == c)
        {
            printf("Character C was present at index %d in given String %s\n", i,a);
            count++;
            break;
        }
    }
    if (count == 0)
        printf("Char %c is not present in given string.", c);
}