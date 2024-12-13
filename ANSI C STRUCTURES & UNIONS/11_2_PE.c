#include <stdio.h>
struct Value
{
    int a, b, c;
} a1;
struct Value Input(struct Value);
int main()
{
    /*Darshan Kania*/
    a1 = Input(a1);
    printf("%d\t%d\t%d", a1.a, a1.b, a1.c);
    return 0;
}
struct Value Input(struct Value a)
{
    a.a = 10;
    a.b = 20;
    a.c = a.a + a.b;
    return a;
}