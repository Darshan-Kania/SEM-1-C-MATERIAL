#include<stdio.h>
/*Darshan Kania*/
int StrChr(char a[], char c)
{
    /*Darshan Kania*/
    int count = 0;
    for (int i = 0; a[i] != '\0'; i++)
    {
        if (a[i] == c)
        {
            count++;
            return i;
        }
    }
    if (count == 0)
        return -1;
}
int Str_Cmp(char a[], char b[])
{
    /*Darshan Kania*/
    int count = 0;
    for (int i = 0; (a[i] != '\0' || b[i] != '\0'); i++)
    {
        if (a[i] != b[i])
        {
            count++;
            return (a[i] - b[i]);
        }
    }
    if (count == 0)
        return 0;
}
void StrCat(char a[], char b[])
{
    int len = 0, len2 = 0, i = 0, j = 0;
    for (int i = 0; a[i] != '\0'; i++)
        len++;
    for (int i = 0; b[i] != '\0'; i++)
        len2++;
    for (int i = 0, j = len; b[i] != '\0'; j++, i++)
        a[j] = b[i];
    a[len + len2] = '\0';
}
void StrCpy(char a[], char b[])
{
    /*Darshan Kania*/
    int i = 0;
    for (i = 0; b[i] != '\0'; i++)
    {
        a[i] = b[i];
    }
    a[i] = '\0';
}
int StrICmp(char a[], char b[])
{
    /*Darshan Kania*/
    int count = 0;
    for (int i = 0; a[i] != '\0' || b[i] != '\0'; i++)
    {
        if (a[i] == b[i])
            ;
        else if (a[i] - 32 == b[i])
            ;
        else if (a[i] == b[i] - 32)
            ;
        else
        {

            count++;
            return -1;
        }
    }
    if (count == 0)
        return 0;
}
int StrLen(char a[])
{
    int i = 0;
    for (i = 0; a[i] != '\0'; i++)
        ;
    return i;
}
int Str_N_Chr(char a[], char c, int n)
{
    /*Darshan Kania*/
    int count = 0;
    for (int i = 0; i < n && a[i] != '\0'; i++)
    {
        if (a[i] == c)
        {
            count++;
            return i;
        }
    }
    if (count == 0)
        return -1;
}
int StrNICmp(char a[], char b[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == b[i])
            ;
        else if (a[i] - 32 == b[i])
            ;
        else if (a[i] == b[i] - 32)
            ;
        else
        {
            count++;
            return -1;
        }
    }
    if (count == 0)
        return 0;
}
void StrRev(char a[])
{
    /*Darshan Kania*/
    char b[100];
    int i = 0, len = 0;
    for (int i = 0; a[i] != '\0'; i++)
    {
        len++;
    }
    for (int i = 0; a[i] != '\0'; i++)
    {
        b[len - i - 1] = a[i];
    }
    printf("%s", b);
}
int StrStr(char a[], char b[])
{
    /*Darshan Kania*/
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
/*Darshan Kania*/