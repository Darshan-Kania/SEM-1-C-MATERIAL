#include <stdio.h>
void Inplace_Reverse(int *p, int size);
int main()
{
    /*Darshan Kania*/
    int arr[100], *p = arr, size;
    printf("Enter No of elements you want to enter: ");
    scanf("%d", &size);
    for (int i = 0; i < size; i++)
    {
        printf("Enter arr[%d]: ", i);
        scanf("%d", p + i);
    }
    Inplace_Reverse(p, size);
    for (int i = 0; i < size; i++)
        printf("%d\n", arr[i]);
    return 0;
}
void Inplace_Reverse(int *p, int size)
{
    for (int i = 0; i <= size / 2; i++)
    {
        int temp = *(p + i);
        *(p + i) = *(p + size - i - 1);
        *(p + size - i - 1) = temp;
    }
}