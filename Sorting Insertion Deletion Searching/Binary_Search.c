#include <stdio.h>
void Bubble_Sort(int x[], int n);

int main()
{
    /*Darshan Kania*/
    int arr[100], count = 0, n, val, ll = 0, ul;
    printf("How many elements you will store: ");
    scanf("%d", &n);
    ul = n;
    for (int i = 0; i < n; i++)
    {
        printf("Enter arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }
    printf("Enter value to find: ");
    scanf("%d", &val);
    Bubble_Sort(arr, n);
    for (int i = 0; i < n; i++)
    {
        printf("%d\t ", arr[i]);
    }
    while (n != 0)
    {
        int mid = (ll + ul) / 2;
        if (arr[mid] == val)
        {
            printf("\nElement at %d index", mid);
            break;
        }
        else if (arr[mid] > val)
            ul = mid - 1;
        else
            ll = mid + 1;
        n = n / 2;
        count++;
    }
    if (n == 0)
        printf("Element not found");
    return 0;
}
void Bubble_Sort(int x[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (x[j] > x[j + 1])
            {
                int temp = x[j];
                x[j] = x[j + 1];
                x[j + 1] = temp;
            }
        }
    }
}
