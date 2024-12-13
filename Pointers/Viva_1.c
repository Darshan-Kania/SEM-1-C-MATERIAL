#include <stdio.h>

int main()
{
    /*Darshan Kania*/
    int arr[10], *a = &arr[0], n, sum = 0;
    printf("Enter No of Elements to enter:");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter a[%d]", i);
        scanf("%d", a + i);
        if (*(a + i) % 3 == 0)
            sum += *(a + i);
    }
    printf("Sum of Numbers divisible by 3: %d", sum);

    return 0;
}