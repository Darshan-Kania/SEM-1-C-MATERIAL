#include <stdio.h>
#include <stdlib.h>
int Insert(int arr[], int size, int value, int index);
int main()
{
    /*Darshan Kania*/
    int arr[100], size, value, index;
    printf("How many elements you want to enter: ");
    scanf("%d", &size);
    for (int i = 0; i < size; i++)
    {
        printf("Enter arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }
    printf("What value you want to enter: ");
    scanf("%d", &value);
    printf("At what index you want to enter:");
    scanf("%d", &index);
    Insert(arr, size, value, index);
    size++;
    for (int i = 0; i < size; i++)
    {
        printf("arr[%d]:%d\n", i, arr[i]);
    }
    return 0;
}
int Insert(int arr[], int size, int value, int index)
{
    int *p = arr + size;
    int i = size;
    while (i >= index)
    {
        *p = *(p - 1);
        p--;
        i--;
    }
    *(p + 1) = value;
}
