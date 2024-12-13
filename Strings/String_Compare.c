#include<stdio.h>
int Str_Cmp(char a[],char b[]);
int main()
{
    /*Darshan Kania*/
    char a[100], b[100];
    printf("Enter string A: ");
    scanf("%[^\n]", a);
    printf("Enter string B: ");
    scanf(" %[^\n]", b);
    Str_Cmp(a,b);    
    return 0;
}
int Str_Cmp(char a[],char b[])
{

    int count = 0;
    for (int i = 0; (a[i] != '\0' || b[i] != '\0'); i++)
    {
        if (a[i] != b[i])
        {
            printf("Character arrays first char differ at index %d where char of String A is %c and of String B is:%c", i, a[i], b[i]);
            printf("\n\nActual Response of Ubuntu is Diff of ascii value of a[%d] - b[%d] that is %d ",i,i,a[i]-b[i]);
            count++;
            break;
        }
    }
    if (count == 0)
        printf("Both Strings are Equal");
    return 0;
}