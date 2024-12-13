#include<stdio.h>
void StrCpy(char a[],char b[]);
int main()
{
    /*Darshan Kania*/
    char a[100],b[100];
    printf("Enter String to copy: ");
    scanf("%[^\n]",b);
    StrCpy(a,b);
    printf("%s",a);
    return 0;
}
void StrCpy(char a[],char b[])
{
    int i=0;
    for(i=0;b[i]!='\0';i++)
    {
        a[i]=b[i];
    }
    a[i]='\0';
}