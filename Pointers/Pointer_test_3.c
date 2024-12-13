#include <stdio.h>

int main()
{
    /*Darshan Kania*/
    int arr[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    // int *p[3] = arr[0][0];
    int(*p)[3] = arr;
    printf("%d\n", (*(arr + 1) + 2));
    printf("%d\n ", *(*(arr + 1) + 2));
    printf("%d", *(*(p + 1) + 2));
    return 0;
}