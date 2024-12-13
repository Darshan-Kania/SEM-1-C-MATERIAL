#include <stdio.h>
double Power(float x, int y);
int main()
{
    /*Darshan Kania*/
    float base;
    int pow;
    printf("Enter base:");
    scanf("%f", &base);
    printf("Enter power:");
    scanf("%d", &pow);
    Power(base, pow);
    return 0;
}
double Power(float x, int y)
{
    double answer = 1;
    for (int i = 0; i < y; i++)
    {
        answer = answer * x;
    }
    printf("Answer of %.3f^%d is %.3f", x, y, answer);
}