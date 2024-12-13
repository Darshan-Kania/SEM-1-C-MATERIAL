#include <stdio.h>
#include <string.h>
struct Details
{
    int price, id;
    char name[20];
} d1;
struct Details Price_Change(struct Details);
int main()
{
    /*Darshan Kania*/
    printf("Enter Name of Product: ");
    scanf("%s", d1.name);
    printf("Enter Price: ");
    scanf("%d", &d1.price);
    printf("Enter id: ");
    scanf("%d", &d1.id);
    printf("Name %s\tPrice %d\tId %d\t\n", d1.name, d1.price, d1.id);
    d1 = Price_Change(d1);
    printf("\nName %s\tPrice %d\tId %d\t\n", d1.name, d1.price, d1.id);
    return 0;
}
struct Details Price_Change(struct Details x)
{
    x.price = 30;
    strcpy(x.name, "Vaporub");
    return x;
}