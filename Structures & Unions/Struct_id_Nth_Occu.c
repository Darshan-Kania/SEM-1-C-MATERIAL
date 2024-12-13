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
    int x;
    if (occ > 0)
    {
        printf("Which Occurence you want to find out of %d occurence: ", occ);
        scanf("%d", &x);
        while (x > occ)
        {
            printf("Enter Valid Number!!!!!!!\nWhich Occurence you want to find out of %d occurence: ", occ);
            scanf("%d", &x);
        }
        printf("Price of Product at that occurence is: %d", list[req_id[x - 1]].price);
        printf("\nId of That Product is %d", list[req_id[x - 1]].id);
        printf("\nName of That Product is %s\n", list[req_id[x - 1]].name);
    }

    return 0;
}