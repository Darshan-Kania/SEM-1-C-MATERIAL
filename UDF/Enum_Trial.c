#include <stdio.h>

int main()
{
    /*Darshan Kania*/
    enum Day
    {
        Monday = -5, //=2 output :2 3 4
        Tuesday,
        Wednesday,
        Thursday,
        Friday,
        Saturday,
        Sunday
    };
    printf("%d\n", Monday);
    printf("%d\n", Tuesday);
    printf("%d\n", Wednesday);
    return 0;
}