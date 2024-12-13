#include <stdio.h>
int Array_Comp(int *p, int *q, int size);
int main()
{
    /*Darshan Kania*/
    int arr1[1000], arr2[1000], size1, size2, *p1 = arr1, *p2 = arr2;
    printf("How many Elements you want to enter in array 1: ");
    scanf("%d", &size1);
    printf("How many Elements you want to enter in array 2: ");
    scanf("%d", &size2);
    if (size1 != size2)
    {
        printf("Both Arrays Cant be equal at any stage");
        return 0;
    }
    for (int i = 0; i < size1; i++)
    {
        printf("Enter Arr1[%d]: ", i);
        scanf("%d", &arr1[i]);
    }
    printf("\n");
    for (int i = 0; i < size2; i++)
    {
        printf("Enter Arr2[%d]: ", i);
        scanf("%d", &arr2[i]);
    }
    printf("\n");
    if (Array_Comp(p1, p2, size1) == -1)
        printf("!!!!Both Arrays Are not Equal!!!!");
    else
        printf("!!!!Both Arrays Are Equal!!!!");
    return 0;
}
int Array_Comp(int *p, int *q, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (*(p + i) != *(q + i))
            return -1;
    }
    return 1;
}