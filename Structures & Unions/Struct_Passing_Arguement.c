#include <stdio.h>
struct Details
{
    int price, id;
    char name[20];
} D1;
int Price_Change(int price);
int main()
{
    /*Darshan Kania*/
    printf("Enter Name of Product: ");
    scanf("%s", D1.name);
    printf("Enter Price: ");
    scanf("%d", &D1.price);
    printf("Enter id: ");
    scanf("%d", &D1.id);
    printf("Name %s\tPrice %d\tId %d\t\n", D1.name, D1.price, D1.id);
    D1.price = Price_Change(D1.price);
    printf("\nName %s\tPrice %d\tId %d\t\n", D1.name, D1.price, D1.id);
    return 0;
}
int Price_Change(int price)
{
    price = 30;
    return price;
}