#include <stdio.h>

int main()
{
    /*Darshan Kania*/
    int arr[3][3] = {{1, 2, 3}, {4, 90, 6}, {7, 8, 9}};
    int *a = &arr[0][0];
    printf("%d\n", *((a + 1) + 1 * 3));
    printf("%d\n", (*(a + 1) + 1 * 6));
    printf("%d\n", *(*(arr + 1) + 1 * 3));
    return 0;
}