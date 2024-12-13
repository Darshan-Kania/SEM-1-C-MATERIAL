#include<stdio.h>
void StrRev(char a[]);
int main()
{
    /*Darshan Kania*/
    char a[100];
    scanf("%[^\n]",a);
    StrRev(a);
    return 0;
}
void StrRev(char a[])
{
    char b[100];
    int i=0,len=0;
    for(int i=0;a[i]!='\0';i++)
    {
        len++;
    }
    for(int i=0;a[i]!='\0';i++)
    {
        b[len-i-1]=a[i];
    }
    printf("%s",b);
}