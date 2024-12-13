#include <stdio.h>

int main()
{
    /*Darshan Kania*/
    int arr[100], *p, n;
    printf("How many elements you want to enter: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }
    p = arr;
    printf("Array in reverse order");
    for (int i = n; i >= 0; i--)
    {
        printf("%d\n", *(p + i));
    }
    return 0;
}