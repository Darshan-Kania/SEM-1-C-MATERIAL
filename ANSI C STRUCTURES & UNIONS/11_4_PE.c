#include <stdio.h>
struct date
{
    int date;
    int month;
    int year;
} d;
struct date read(struct date d);
int valid(struct date d);
int main()
{
    /*Darshan Kania*/
    int count = 0;
    do
    {
        if (count > 0)
            printf("Enter Valid Info!!!!\n");
        d = read(d);
        count++;
    } while (valid(d) != 1);
    printf("%d/%d/%d", d.date, d.month, d.year);
    return 0;
}
struct date read(struct date d)
{
    printf("Enter Date: ");
    scanf("%d", &d.date);
    printf("Enter Month: ");
    scanf("%d", &d.month);
    printf("Enter Year: ");
    scanf("%d", &d.year);
    return d;
}
int valid(struct date d)
{
    if (d.month % 2 == 0 && d.month != 2)
    {
        if (d.date > 30)
            return -1;
    }
    else if (d.month == 2)
    {
        if (d.year % 4 == 0)
        {
            if (d.date > 29)
                return -1;
        }
        else
        {
            if (d.date > 28)
                return -1;
        }
    }
    else
    {
        if (d.date > 31)
            return -1;
    }
    if (d.month > 12)
        return -1;
    return 1;
}