#include <stdio.h>

int main()
{
    /*Darshan Kania*/
    int arr[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int row_ind = 1, colum_ind = 2;
    printf("%d", sizeof(int) * 3 * row_ind + colum_ind * sizeof(int) + arr);
    return 0;
}