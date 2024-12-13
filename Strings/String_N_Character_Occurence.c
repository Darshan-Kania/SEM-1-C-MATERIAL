#include <stdio.h>
int Str_N_Chr(char a[], char c, int n);
int main()
{
    /*Darshan Kania*/
    char a[100], c;
    int n;
    printf("Enter String A: ");
    scanf("%[^\n]", a);
    printf("Enter character c:");
    scanf(" %c", &c);
    printf("Enter First N character:");
    scanf("%d", &n);
    Str_N_Chr(a, c, n);
    return 0;
}
int Str_N_Chr(char a[], char c, int n)
{
    int count = 0;
    for (int i = 0; i < n && a[i] != '\0'; i++)
    {
        if (a[i] == c)
        {
            printf("Yes charcter %c is present at index %d", c, i);
            count++;
            break;
        }
    }
    if (count == 0)
        printf("Character %c not found", c);
}