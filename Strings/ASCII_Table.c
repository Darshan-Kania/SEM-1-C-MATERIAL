#include<stdio.h>

int main()
{   
    /*Darshan Kania*/
    int n;
    printf("Till how many Number want to printf ASCII table:");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("ASCII value of %c is %d: \n",i,i);
    }
    return 0;
}