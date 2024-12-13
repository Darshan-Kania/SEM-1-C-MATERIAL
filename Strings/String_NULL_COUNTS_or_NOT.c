#include<stdio.h>

int main()
{
    /*Darshan Kania*/
    char a[]={'a','b','c','\0'};
    char c[]={'p','q','r'};
    char b[]={'d','e','f','\0'};
    printf("%d\n",sizeof(a));
    printf("%d",sizeof(c));
    printf("\n%d",sizeof(b));
    printf("\n%s",c);
    printf("\n %s",a);
    printf("\n%s",b);
    return 0;
}