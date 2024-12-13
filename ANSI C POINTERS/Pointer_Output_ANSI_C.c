#include <stdio.h>
int f(char *p)
{
    char *q = p;
    while (*++p)
        ;
    printf("%d\n%c\n", q, *q);
    printf("%d\n%c\n", p, *p);
    return (p - q);
}
int main()
{
    /*Darshan Kania*/
    // Q.1
    int x = 10, y = 10;
    int *p1 = &x, *p2 = &y;
    printf("%d\n", (*p1)++);
    printf("%d\n", x);
    printf("%d\n", y);
    printf("%d\n", --(*p2));
    printf("%d\n", x);
    printf("%d\n", y);
    printf("%d\n", (*p1) + (*p2)--);
    printf("%d\n", x);
    printf("%d\n", y);
    printf("%d\n", ++(*p2) - *p1);
    printf("%d\n", x);
    printf("%d\n", y);

    // Q.2
    int m = 100, *p3 = &m, **p4 = &p3;
    printf("%d\n", **p4);

    // Q.3
    char name[15] = "ABCDEFGHIJKLMN";
    printf("%s\n", name + 10);
    printf("%c\n", *(name + 10));

    // Q.4
    char str[] = "ANSI";
    printf("%d\n", f(str));

    return 0;
}