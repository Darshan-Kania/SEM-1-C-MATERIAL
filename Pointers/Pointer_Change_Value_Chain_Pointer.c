#include <stdio.h>

int main()
{
    /*Darshan Kania*/
    int a, *b = &a, **c = &b, ***d = &c, ****e = &d, *****f = &e;
    *****f = 10;
    printf("%d\n", a);
    ****e = 200;
    printf("%d\n", a);
    ***d = 400;
    printf("%d\n", a);
    **c = 5000;
    printf("%d\n", a);
    return 0;
}