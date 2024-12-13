#include <stdio.h>
#include<string.h>
int main()
{
    /*Darshan Kania*/
    char str[] = "123456789";
    int i, j;
    int a;
    for (int i = 0; i < strlen(str) / 2+1; i++)
    {
        for (int k = 0; k < 5 - i; k++)
            printf(" ");
        for (j = i; j < i * 2 + 1; j++)
            printf("%c", str[j]);
        for (int p = j-1; p >i; p--)
            printf("%c", str[p-1]);
        printf("\n");
    }
    return 0;
}