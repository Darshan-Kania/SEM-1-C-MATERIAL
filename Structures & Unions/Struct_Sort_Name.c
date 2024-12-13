#include <stdio.h>
#include <string.h>
struct Product
{
    char name[20];
    int id, price;
};
int main()
{
    /*Darshan Kania*/
    struct Product list[100], temp;
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
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - 1; j++)
        {
            if (strcmp(list[j].name, list[j + 1].name) > 0)
            {
                temp = list[j];
                list[j] = list[j + 1];
                list[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < size; i++)
    {
        printf("Name of Product %d is %s\n", i + 1, list[i].name);
        printf("Id of Product %d is %d\n", i + 1, list[i].id);
        printf("Price of Product %d is %d\n\n", i + 1, list[i].price);
    }

    return 0;
}