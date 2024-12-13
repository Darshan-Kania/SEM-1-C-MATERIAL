#include <stdio.h>
union Info
{
    char name[20];
    struct Age
    {
        int date;
        int month;
        int year;
    } Age;
} I[10];
int main()
{
    /*Darshan Kania*/
    for (int i = 0; i < 3; i++)
    {
        printf("Enter Name: ");
        scanf(" %s", I[i].name);
        printf("Enter Date:");
        scanf("%d", &I[i].Age.date);
        printf("Enter Month: ");
        scanf("%d", &I[i].Age.month);
        printf("Enter Year: ");
        scanf("%d", &I[i].Age.year);
        if (2023 - I[i].Age.year <= 18)
            printf("%d\t%d\t%d", I[i].Age.date, I[i].Age.month, I[i].Age.year);
        else if (2023 - I[i].Age.year > 18 && 2023 - I[i].Age.year < 75)
            printf("%d", 2023 - I[i].Age.year);
        else
            printf("Aged");
    }
    return 0;
}