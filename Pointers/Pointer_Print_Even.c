#include <stdio.h>

int main()
{
    /*Darshan Kania*/
    int arr[1000];
    int n;
    printf("Enter Max number of elements you will add: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }
    int *p = &arr[0];
    for (int i = 0; i < n; i++, p++)
    {
        if (*p % 2 == 0)
            printf("Element present at %d index is even and its value is %d\n", i, *p);
    }
    return 0;
}