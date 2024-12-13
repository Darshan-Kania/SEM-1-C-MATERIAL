#include<stdio.h>

int main()
{
    /*Darshan Kania*/	
    union x
    {
        int a;
        float b;
        double c;
    };
    printf("%d\n",sizeof(x));
    a.x=10;
    printf("%d\t%f\t%f\n",a.x,b.x,c.x);
    c.x=1.23;
    printf("%d\t%f\t%f\n",a.x,b.x,c.x);
    return 0;
}