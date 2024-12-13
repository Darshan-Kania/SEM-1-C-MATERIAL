#include<stdio.h>

int main()
{
    /*Darshan Kania*/
    int a[5][5]={0};
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(i+j<=4)
            a[i][j]=1;
        }
    }
        for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}