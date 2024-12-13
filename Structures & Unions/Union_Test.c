#include <stdio.h>
union Details
{
    int x;
    float y;
    int z;
    char name[20];
} d1;
int main()
{
    /*Darshan Kania*/
    printf("%d", sizeof(union Details));
    d1.x = 23;
    printf("%d\n", d1.x);
    d1.z = 2345;
    printf("%d\n", d1.z);
    printf("%d\n", d1.x);
    d1.y = 244.323;
    printf("%f\n", d1.y);
    printf("%d\n", d1.x);
    d1.z = 2345;
    printf("%d\n", d1.z);
    printf("%d\n", d1.x);
    printf("%f\n", d1.y);
    printf("%d", sizeof(union Details));
    return 0;
}