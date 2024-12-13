#include <stdio.h>

int main()
{
    /*Darshan Kania*/
    struct time_struct
    {
        int hour;
        int minute;
        int sec;
    } t1 = {16, 40, 51};
    // t1 = {16, 40, 51};   Wrong
    printf("%d:%d:%d", t1.hour, t1.minute, t1.sec);
    return 0;
}