#include <stdio.h>
int Add(int a, int b, int c);
int main()
{
    /*Darshan Kania*/
    int arr[3], n = 3;
    for (int i = 0; i < n; i++)
    {
        printf("Enter Number:");
        scanf("%d", &arr[i]);
    }
    Add(arr[0], arr[1], arr[2]);

    return 0;
}
int Add(int a, int b, int c)
{
    printf("Sum is %d", a + b + c);
}