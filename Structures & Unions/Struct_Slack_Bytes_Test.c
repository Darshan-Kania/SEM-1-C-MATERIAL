#include <stdio.h>
int main()
{
    struct Slack_Bytes_1
    {
        char b;
        char a[19];
        int c;
        char d;
        char e, f;
        char pq[4];
        char g[6];
    } sb1;
    printf("%d\n", sizeof(sb1));

    struct Slack_Bytes_2
    {
        int x;
        int y;
        char a[16];
        char b;
        char d[14];
        char e;
        int z;
    } sb2;
    printf("%d\n", sizeof(sb2));
    struct Slack_Bytes_3
    {
        char b;
        char a[19];
        int c;
        char d;
        char e, f;
        char pq[4];
        char g[5];
    } sb3;
    printf("%d\n", sizeof(sb3));
}