#include <stdio.h>

int main()
{
    /*Darshan Kania*/
    int arr[1000], index, size, value;
    char ans;
    printf("Enter Size of array: ");
    scanf("%d", &size);
    for (int i = 0; i < size; i++)
    {
        printf("Enter arr[%d]: ", i);
        scanf("%d", arr + i);
    }
    printf("Enter Value to delete: ");
    scanf("%d", &value);
    printf("You want to remove all instances: ");
    scanf(" %c", &ans);
    int *p = arr;
    for (int i = 0; i < size; i++)
    {
        if (*(p + i) == value)
        {
            for (index = i; index < size; index++)
            {
                *(p + index) = *(p + index + 1);
            }
            size--;
            if (ans == 'N' || ans == 'n')
                break;
        }
    }
    for (int i = 0; i < size; i++)
        printf("arr[%d]:%d\n", i, *(p + i));

    return 0;
}