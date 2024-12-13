#include<stdio.h>

int main()
{
    /*Darshan Kania*/
    char a[100],b[100];
    printf("Enter string: ");
    scanf("%[^\n]",a);
    int i=0;
    for(;a[i]!='\0';i++)
    {
        b[i]=a[i];
    }
    b[i]='\0';
    printf("Copied string is %s",b);
    return 0;
}