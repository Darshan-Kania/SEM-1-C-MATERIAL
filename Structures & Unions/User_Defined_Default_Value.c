#include <stdio.h>
union test
{
    int x;
    char s[4];
    int y;
} t;
int main()
{
    // t.s[0] = 'G';
    // printf("%s", t.s);
    printf("%d", t.x);
    // int *p;
    // printf("%d", *p);
}