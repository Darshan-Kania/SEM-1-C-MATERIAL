#include <stdio.h>
int Str_Str(char *s, char *p);
int main()
{
    /*Darshan Kania*/
    char str[30], patt[30];
    printf("Enter Pattern: ");
    scanf("%s", patt);
    printf("Enter String: ");
    scanf(" %s", str);
    char *s = str, *p = patt;
    printf("%d", Str_Str(s, p));
    return 0;
}
int Str_Str(char *s, char *p)
{
    int count = 0;
    for (int i = 0; *(s + i) != '\0'; i++)
    {
        int j = 0;
        if (*(s + i) == *p)
        {
            int k = i;
            int flag = 0;
            for (int j = 0; *(p + j) != '\0'; j++, k++)
            {
                if (*(s + k) != *(p + j))
                {
                    flag = 1;
                    break;
                }
            }
            if (flag == 0)
                count++;
        }
    }
    return count;
}