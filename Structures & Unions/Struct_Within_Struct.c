#include <stdio.h>
struct Out
{
    int x;
    int q;
} o2;
struct Details
{
    int x;
    float y;
    struct Add
    {
        int z, w;
    } a1;
    struct Out o1;
    struct After Af1; // Wrong as After declared later;
} d1;
struct After
{
    int p, q, r;
};
int main()
{
    /*Darshan Kania*/
    struct Add a2;
    // d1.a2.z = 0;//Wrong
    d1.a1.z = 124;
    d1.o1.q = 23;
    // d1.af1.p=192;//Wrong
    //  d1.o2.q=233;//Wrong
    //   printf("%d", d1.a2.z);//Wrong
    printf("%d\n", d1.a1.z);
    printf("%d\n", d1.o1.q);
    // printf("%d\n",d1.o2.q);//Wrong
    return 0;
}