#include <stdio.h>
struct Product
{
    char name[20];
    int id, price;
};

int main()
{
    /*Darshan Kania*/
    struct Product list[100];
    int size;
    printf("Enter Number of Structure want to make: ");
    scanf("%d", &size);
    for (int i = 0; i < size; i++)
    {
        printf("Enter id of Product %d: ", i + 1);
        scanf("%d", &list[i].id);
        printf("Enter Price of Product %d: ", i + 1);
        scanf("%d", &list[i].price);
        printf("Enter Name of Product %d: ", i + 1);
        scanf(" %s", list[i].name);
        printf("\n");
    }
    int id;
    printf("Enter id you want to find: ");
    scanf("%d", &id);
    int occ = 0, req_id[100];
    for (int i = 0; i < size; i++)
    {
        if (id == list[i].id)
        {
            req_id[occ] = i;
            occ++;
        }
    }
    if (occ > 0)
        printf("Occurences of id are below\n\n");
    for (int i = 0; i < occ; i++)
    {
        printf("Name of Product %d is %s\n", i + 1, list[req_id[i]].name);
        printf("Id of Product %d is %d\n", i + 1, list[req_id[i]].id);
        printf("Price of Product %d is %d\n\n", i + 1, list[req_id[i]].price);
    }
    return 0;
}