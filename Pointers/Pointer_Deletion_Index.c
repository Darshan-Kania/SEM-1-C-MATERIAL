#include <stdio.h>

int main()
{
    /*Darshan Kania*/
    int arr[1000], size, index;
    printf("How many elements you want to enter: ");
    scanf("%d", &size);
    for (int i = 0; i < size; i++)
    {
        printf("Enter a[%d]: ", i);
        scanf("%d", arr + i);
    }
    printf("From which index you want to delete element: ");
    scanf("%d", &index);
    while (index >= size)
    {
        printf("Enter Valid index less than size: ");
        scanf("%d", &index);
    }
    int *p = arr + index;
    for (int i = index; i < size; i++)
    {
        *p = *(p + 1);
        p++;
    }
    size--;
    for (int i = 0; i < size; i++)
        printf("a[%d]:%d\n", i, arr[i]);

    return 0;
}