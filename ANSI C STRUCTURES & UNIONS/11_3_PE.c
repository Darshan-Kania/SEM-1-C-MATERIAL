#include <stdio.h>
struct time_struct
{
    int hour;
    int minute;
    int sec;
} t1 = {16, 59, 51};
struct time_struct Change(struct time_struct t);
int main()
{
    /*Darshan Kania*/
    for (int i = 0; i < 70; i++)
    {
        t1 = Change(t1);
        printf("%d:%d:%d\n", t1.hour, t1.minute, t1.sec);
    }

    return 0;
}
struct time_struct Change(struct time_struct t)
{
    t.sec = t.sec + 1;
    if (t.sec == 60)
    {

        t.minute++;
        t.sec = 0;
    }
    if (t.minute == 60)
    {
        t.hour++;
        t.minute = 0;
    }
    return t;
}