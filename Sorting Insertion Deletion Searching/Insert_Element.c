#include <stdio.h>

int main()
{
    /*Darshan Kania*/
    int a[100];
    for (int i = 0; i < 100; i++)
    {
        a[i] = -1;
    }
    printf("How many elements want to enter: ");
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter a[%d]: ", i);
        scanf("%d", &a[i]);
    }
    printf("Enter value you want to enter: ");
    int val;
    scanf("%d", &val);
    printf("Enter at which index number you want to store value between 0 and %d: ", n);
    int index;
    scanf("%d", &index);
    for (int j = n + 1; j >= index; j--)
    {
        a[j] = a[j - 1];
    }
    a[index] = val;
    for (int i = 0; i < n + 1; i++)
    {
        printf("a[%d]=%d\n", i, a[i]);
    }

    return 0;
}