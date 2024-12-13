#include <stdio.h>
struct vector
{
    int x1, x2, y1, y2;
} v = {0, 0, 0, 0};
struct vector modify(struct vector v);
int main()
{
    /*Darshan Kania*/
    v = modify(v);
    printf("Addition of Vector is %di+%dj\n", v.x1 + v.x2, v.y1 + v.y2);
    printf("Multiplication of Vector is %di+%dj\n", v.x1 * v.x2, v.y1 * v.y2);
    return 0;
}
struct vector modify(struct vector v)
{
    printf("Enter New Value of X1: ");
    scanf("%d", &v.x1);
    printf("Enter New Value of X2: ");
    scanf("%d", &v.x2);
    printf("Enter New Value of Y1: ");
    scanf("%d", &v.y1);
    printf("Enter New Value of Y2: ");
    scanf("%d", &v.y2);
    return v;
}