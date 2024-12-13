#include <stdio.h>
void Sort(int *p, int size);
int Binary_Search(int *p, int size, int value);
int main()
{
    /*Darshan Kania*/
    int arr[1000], size;
    printf("How many elements you want to enter: ");
    scanf("%d", &size);
    int *p = arr, value;
    for (int i = 0; i < size; i++)
    {
        printf("Enter arr[%d]: ", i);
        scanf("%d", p + i);
    }
    Sort(p, size);
    printf("Which Value You want to find: ");
    scanf("%d", &value);
    if (Binary_Search(p, size, value) == -26)
        printf("Element Not Found\n");
    else
        printf("Element At %d Index\n", Binary_Search(p, size, value));
    for (int i = 0; i < size; i++)
        printf("%d\n", *(p + i));
    return 0;
}
void Sort(int *p, int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - 1; j++)
        {
            if (*(p + j) > *(p + j + 1))
            {
                int temp = *(p + j);
                *(p + j) = *(p + j + 1);
                *(p + j + 1) = temp;
            }
        }
    }
}
int Binary_Search(int *p, int size, int value)
{
    int mid, ul = size, ll = 0, count = 0;
    while (count <= size)
    {
        mid = (ul + ll) / 2;
        if (*(p + mid) == value)
            return mid;
        else if (value > *(p + mid))
            ll = mid + 1;
        else if (value < *(p + mid))
            ul = mid - 1;
        count++;
    }
    return -26;
}