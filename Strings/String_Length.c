#include<stdio.h>
int StrLen(char a[]);
int main()
{
    /*Darshan Kania*/
    char string[100];
    printf("Enter string:");
    scanf("%[^\n]",string);
    printf("%d",StrLen(string));
    return 0;
}
int StrLen(char a[])
{
    int i=0;
    for(i=0;a[i]!='\0';i++);
    return i;

}