#include <stdio.h>

int main()
{
    /*Darshan Kania*/
    char *name[3] = {"Virat", "Rohit", "Dhoni"};
    printf("%c\n", *(*name + 2));
    printf("%s\n", *(name + 2));
    printf("%s\n", (*name + 2));
    printf("%c\n", *(*(name + 1) + 1));
    int x = 65;
    char *p;
    p = (char *)&x;
    printf("%d\n", *p);
    printf("%c\n", *p);
    return 0;
}
