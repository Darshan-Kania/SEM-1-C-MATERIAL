#include <stdio.h>

int main()
{
    /*Darshan Kania*/
    int arr[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int *p = &arr[0][0];
    // 1 and 2 Equivalent & 3 & 4 are equivalent
    printf("%d\n", *(*(arr + 1) + 2));   // 1
    printf("%d\n", *(*arr + 1 * 4 + 2)); // 2
    printf("%d\n", *(p + 1 * 3 + 2));    // 3
    printf("%d\n", *(*arr + 1 * 3 + 2)); // 4
    return 0;
}
