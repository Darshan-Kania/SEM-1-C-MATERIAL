#include <stdio.h>

int main()
{
    /*Darshan Kania*/
    int *p, *q, a, b;
    char c;
    printf("Enter 1st Number: ");
    scanf("%d", &a);
    printf("Enter 2nd Number: ");
    scanf("%d", &b);
    printf("Enter + for addition , - for subtraction , * for multiplication , / for division: ");
    scanf(" %c", &c);
    p = &a;
    q = &b;
    if (c == '+')
        printf("Addition is %d\n", *p + *q);
    else if (c == '-')
        printf("Subtraction is %d\n", *p - *q);
    else if (c == '*')
        printf("Multiplicatio is %d\n", (*p) * (*q));
    else
    {
        if (*q != 0)
            printf("Division is %.2f\n", (*p) / ((*q) * 1.0));
        else
            printf("Division Not Possible\n");
    }
    return 0;
}