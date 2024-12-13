#include <stdio.h>
int StrStr(char a[], char b[]);
int main()
{
    /*Darshan Kania*/
    char str[2000];
    char patt[2000];
    printf("Enter String: ");
    scanf("%[^\n]", str);
    printf("Enter pattern: ");
    scanf(" %[^\n]", patt);
    printf("%d",StrStr(str, patt));
    return 0;
}
int StrStr(char a[], char b[])
{
    int p;
    for (int i = 0; a[i] != '\0'; i++)
    {
        p = 0;
        if (a[i] == b[p])
        {
            int count = 0;
            for (int j = i; b[p] != '\0'; p++, j++)
            {
                if (a[j] != b[p])
                {
                    count++;
                    break;
                }
            }
            if (count == 0)
                return i;
        }
    }
    return -1;
}
