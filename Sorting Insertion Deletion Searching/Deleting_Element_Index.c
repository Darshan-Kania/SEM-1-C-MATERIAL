#include <stdio.h>

int main()
{
    /*Darshan Kania*/
    int n, a[100];
    for (int i = 0; i < 100; i++)
    {
        a[i] = -1;
    }
    printf("Enter number of elements to add: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter a[%d]: ", i);
        scanf("%d", &a[i]);
    }
    printf("Enter deletion index: ");
    int ind;
    scanf("%d", &ind);
    a[ind] = -1;
    for (int i = 0; i < n; i++)
    {
        if (i < ind)
            continue;
        a[i] = a[i + 1];
    }
    for (int i = 0; i < n - 1; i++)
    {
        printf("a[%d]=%d\n", i, a[i]);
    }

    return 0;
}