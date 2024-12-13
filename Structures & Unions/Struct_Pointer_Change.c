#include <stdio.h>
struct Product
{
    char name[20];
    int id, price;
};
void Change(struct Product *s);
int main()
{
    /*Darshan Kania*/
    struct Product list, *str = &list;
    printf("Enter Name: ");
    scanf(" %s", (*str).name);
    printf("Enter id: ");
    scanf("%d", &(str->id));
    printf("Enter Price: ");
    scanf("%d", &(str->price));
    printf("Name: %s\n Price: %d\n Id: %d\n", (*str).name, list.price, (*str).id);
    Change(str);
    printf("Name: %s\n Price: %d\n Id: %d", (*str).name, list.price, (*str).id);
    return 0;
}
void Change(struct Product *s)
{
    s->id = 144;
    scanf("%d", &(s->id));
    (*s).price = 1234;
}